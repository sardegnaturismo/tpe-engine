<?php
/**
 * @file
 * GeoServer layer type for PostGIS fields.
 */

/**
 * Define the Ctools plugin options.
 */
$plugin = array(
  'title' => t('PostGIS'),
  'description' => t('An entity containing a PostGIS field.'),
  'layer_type' => array(
    'file' => 'geoserver_layer_type_postgis_field.inc',
    'class' => 'geoserver_layer_type_postgis_field',
    'parent' => 'geoserver_layer_type',
  ),
);

/**
 * GeoServer PostGIS layer class.
 */
class geoserver_layer_type_postgis_field extends geoserver_layer_type_feature_type {

  /**
   * Constructor.
   */
  function __construct($layer = array()) {
    parent::__construct($layer);
    $this->datastore = variable_get('geoserver_postgis_datastore', '');
  }

  function save() {
    parent::save();
    $this->create_view();
    return TRUE;
  }

  function create_view() {

    global $databases;
    db_query($this->data['options']['sql']);

    $primary_keys = array('table_schema', 'table_name', 'pk_column');
    $prefix = $databases['default']['default']['prefix'];
    $name = $prefix . 'geoserver_' . $this->name . '_view';
    if ($pos = strpos($prefix, '.')) {
      $schema = substr($prefix, 0, $pos);
    } else {
      $schema = 'public';
    }

    // Insert/Update rercords in geoserver_pk_metadata_table.
    foreach (array('id', 'delta') as $idx => $column) {
      $record = array(
        'table_schema' => $schema,
        'table_name' => $name,
        'pk_column' => $column,
        'pk_column_idx' => $idx
      );
      db_select('geoserver_pk_metadata_table', 'gs_pk')
          ->fields('gs_pk')
          ->condition('table_schema', $record['table_schema'])
          ->condition('table_name', $record['table_name'])
          ->condition('pk_column', $record['pk_column'])
          ->execute()
          ->fetchAll() ?
        drupal_write_record('geoserver_pk_metadata_table', $record, $primary_keys) :
        drupal_write_record('geoserver_pk_metadata_table', $record);
    }
  }

  /**
   * Import from remote feature type definition.
   */
  function from_feature_type($data) {

    $feature_type = isset($data->featureType) ? $data->featureType : new stdClass();
    $bbox = isset($feature_type->nativeBoundingBox) ? $feature_type->nativeBoundingBox : new stdClass();

    $this->name = isset($feature_type->name) ? $feature_type->name : '';
    $this->title = isset($feature_type->title) ? $feature_type->title : '';
    $this->data['options']['srid'] = isset($feature_type->srs) ? drupal_substr($feature_type->srs, 5) : '';
    $this->data['options']['bounding_box'] = array(
      'minx' => isset($bbox->minx) ? $bbox->minx : '',
      'miny' => isset($bbox->miny) ? $bbox->miny : '',
      'maxx' => isset($bbox->maxx) ? $bbox->maxx : '',
      'maxy' => isset($bbox->maxy) ? $bbox->maxy : '',
    );
  }

  /**
   * Export to remote feature type definition.
   */
  function to_feature_type() {

    $options = isset($this->data['options']) ? $this->data['options'] : array();
    $bbox = isset($options['bounding_box']) ? $options['bounding_box'] : array();

    return array(
      'featureType' => array(
        'name'       => $this->name,
        'nativeName' => 'geoserver_' . $this->name . '_view',
        'namespace'  => array('name' => $this->workspace),
        'title'      => $this->title,
        'nativeCRS'  => isset($options['srid']) ? 'EPSG:' . $options['srid'] : '',
        'srs'        => isset($options['srid']) ? 'EPSG:' . $options['srid'] : '',
        'nativeBoundingBox' => array(
          'minx' => isset($bbox['minx']) ? $bbox['minx'] : '',
          'miny' => isset($bbox['miny']) ? $bbox['miny'] : '',
          'maxx' => isset($bbox['maxx']) ? $bbox['maxx'] : '',
          'maxy' => isset($bbox['maxy']) ? $bbox['maxy'] : '',
        ),
        'latLonBoundingBox' => array(
          'minx' => isset($bbox['minx']) ? $bbox['minx'] : '',
          'miny' => isset($bbox['miny']) ? $bbox['miny'] : '',
          'maxx' => isset($bbox['maxx']) ? $bbox['maxx'] : '',
          'maxy' => isset($bbox['maxy']) ? $bbox['maxy'] : '',
        ),
        'projectionPolicy' => 'FORCE_DECLARED',
        'enabled' => TRUE,
        'store' => array(
          '@class' => 'dataStore',
          'name' => $this->datastore,
        ),
        'maxFeatures' => 0,
        'numDecimals' => 0,
        'attributes' => array(),
      ),
    );
  }

  /**
   * Load field configuration.
   */
  function load_field($entity_type, $bundle_name, $field_name) {

    $field = field_info_field($field_name);
    $bbox = postgis_field_extent($field);

    $this->data['options']['srid'] = $field['settings']['srid'];
    $this->data['options']['bounding_box']['minx'] = $bbox->minx;
    $this->data['options']['bounding_box']['miny'] = $bbox->miny;
    $this->data['options']['bounding_box']['maxx'] = $bbox->maxx;
    $this->data['options']['bounding_box']['maxy'] = $bbox->maxy;
    $this->data['options']['sql'] = $this->get_sql($entity_type, $bundle_name, $field_name);
  }

  /**
   * Get layer SQL definition.
   */
  protected function get_sql($entity_type, $bundle_name, $field_name) {

    $connection = Database::getConnection();
    $prefix = $connection->tablePrefix();
    $name = $prefix . 'geoserver_' . $this->name . '_view';
    $sql = array(
      'select' => array("DROP VIEW IF EXISTS $name;
CREATE VIEW $name AS SELECT $entity_type.nid as id, $entity_type.title, field_data_$field_name.delta"),
      'from' => array("FROM $prefix$entity_type"),
      'where' => array("WHERE $entity_type.type = '$bundle_name' and $entity_type.status = 1 and field_data_$field_name.deleted = 0"),
      'rules' => array(
        "CREATE OR REPLACE RULE ${name}_update AS ON UPDATE TO $name DO INSTEAD 
  UPDATE field_data_$field_name SET ${field_name}_geometry = NEW.${field_name}_geometry WHERE entity_id = NEW.id;",
        "CREATE OR REPLACE RULE ${name}_insert AS ON INSERT TO ${name} DO INSTEAD (
    INSERT INTO field_data_$field_name VALUES ('node', '$bundle_name', 0, nextval('node_nid_seq'), currval('node_nid_seq'), 'und', 0, NEW.${field_name}_geometry);        
    INSERT INTO node VALUES (currval('node_nid_seq'), currval('node_nid_seq'), '$bundle_name', 'und', '', 0, 1, extract(epoch from now())::int, extract(epoch from now())::int, 0, 0, 0, 0, 0);
    INSERT INTO node_revision VALUES (currval('node_nid_seq'), currval('node_nid_seq'), 0, '', '', extract(epoch from now())::int, 1, 0, 0, 0); 
  );",
        "CREATE OR REPLACE RULE ${name}_delete AS ON DELETE TO ${name} DO INSTEAD 
  DELETE FROM field_data_$field_name  WHERE entity_id = OLD.id and delta = OLD.delta;",
      ),
    );

    $fields = field_info_instances($entity_type, $bundle_name);
    foreach ($fields as $name => $field) {

      $field = field_info_field($name);
      if ($field['cardinality'] === '1') {
        foreach ($field['storage']['details']['sql']['FIELD_LOAD_CURRENT'] as $table => $table_fields) {
          foreach ($table_fields as $table_field) {
            $sql['select'][] = $table_field;
          }
          $sql['from'][] = "LEFT JOIN $prefix$table ON $entity_type.nid = $table.entity_id";
        }
      }
    }
    return implode(', ', $sql['select']) . "\n" . implode("\n", $sql['from']) . "\n" . implode("\n", $sql['where']) . ";\n" . implode("\n", $sql['rules']);
  }

  /**
   * Options form which generates layers
   */
  function options_form() {

    $field_options = array('');
    $fields = field_info_instances();

    foreach ($fields as $entity_type => $bundles) {

      $info = entity_get_info($entity_type);

      foreach ($bundles as $bundle_name => $fields) {

        foreach ($fields as $field_name => $field) {

          $field = field_info_field($field_name);

          if ($field['type'] === 'postgis') {
            $key = $entity_type . '.' . $bundle_name . '.' . $field_name;
            $value = $info['bundles'][$bundle_name]['label'] . ' (' . $field_name . ')';
            $field_options[$info['label']][$key] = $value;
            break;
          }
        }
      }
    }

    return array(
      'field' => array(
        '#type' => 'select',
        '#title' => t('Field'),
        '#options' => $field_options,
        '#default_value' => isset($this->data['options']['field']) ?
                $this->data['options']['field'] : '',
        '#ajax' => array(
          'callback' => 'postgis_geoserver_layer_type_form',
          'wrapper' => 'geoserver_layer_type_postgis_field',
        ),
      ),
      'srid' => array(
        '#type' => 'textfield',
        '#title' => t('Projection'),
        '#prefix' => '<div id="geoserver_layer_type_postgis_field">',
        '#default_value' => isset($this->data['options']['srid']) ?
                $this->data['options']['srid'] : '',
      ),
      'bounding_box' => array(
        '#type' => 'fieldset',
        '#title' => t('Bounding Box'),
        '#collapsible' => TRUE,
        '#collapsed' => TRUE,
        'minx' => array(
          '#type' => 'textfield',
          '#title' => t('Min X'),
          '#default_value' => isset($this->data['options']['bounding_box']['minx']) ?
                  $this->data['options']['bounding_box']['minx'] : '',
        ),
        'miny' => array(
          '#type' => 'textfield',
          '#title' => t('Min Y'),
          '#default_value' => isset($this->data['options']['bounding_box']['miny']) ?
                  $this->data['options']['bounding_box']['miny'] : '',
        ),
        'maxx' => array(
          '#type' => 'textfield',
          '#title' => t('Max X'),
          '#default_value' => isset($this->data['options']['bounding_box']['maxx']) ?
                  $this->data['options']['bounding_box']['maxx'] : '',
        ),
        'maxy' => array(
          '#type' => 'textfield',
          '#title' => t('Max Y'),
          '#default_value' => isset($this->data['options']['bounding_box']['maxy']) ?
                  $this->data['options']['bounding_box']['maxy'] : '',
        ),
      ),
      'sql' => array(
        '#type' => 'textarea',
        '#title' => t('SQL'),
        '#default_value' => isset($this->data['options']['sql']) ?
                $this->data['options']['sql'] : '',
        '#suffix' => '</div>',
      ),
    );
  }

  /**
   * Layer type settings form.
   */
  function settings_form() {

    $datastores = array('');
    $workspace  = variable_get('geoserver_workspace', '');

    $result = geoserver_get('rest/workspaces/' . $workspace . '/datastores.json');
    if ($result->code == 200 && isset($result->data->dataStores)) {
      foreach ($result->data->dataStores->dataStore as $datastore) {
        $datastores[$datastore->name] = $datastore->name;
      }
    }

    return array(
      'geoserver_postgis_datastore' => array(
        '#type' => 'select',
        '#title' => t('Datastore'),
        '#options' => $datastores,
        '#description' => t('Select the PostGIS datastore where Drupal stores its data. This one needs to be created manually for now.'),
        '#default_value' => variable_get('geoserver_postgis_datastore', ''),
        '#suffix' => '</div>',
      ),
    );
  }
}
