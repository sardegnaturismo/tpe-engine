<?php
/**
 * @file
 * tpe_ct_prodotto.features.field.inc
 */

/**
 * Implements hook_field_default_fields().
 */
function tpe_ct_prodotto_field_default_fields() {
  $fields = array();

  // Exported field: 'node-scheda_prodotto-body'.
  $fields['node-scheda_prodotto-body'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(
        0 => 'node',
      ),
      'field_name' => 'body',
      'foreign keys' => array(
        'format' => array(
          'columns' => array(
            'format' => 'format',
          ),
          'table' => 'filter_format',
        ),
      ),
      'indexes' => array(
        'format' => array(
          0 => 'format',
        ),
      ),
      'locked' => '0',
      'module' => 'text',
      'settings' => array(),
      'translatable' => '1',
      'type' => 'text_with_summary',
    ),
    'field_instance' => array(
      'bundle' => 'scheda_prodotto',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'hidden',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => '0',
        ),
        'notifications' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'teaser' => array(
          'label' => 'hidden',
          'module' => 'text',
          'settings' => array(
            'trim_length' => 600,
          ),
          'type' => 'text_summary_or_trimmed',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'body',
      'label' => 'Descrizione del prodotto',
      'required' => 0,
      'settings' => array(
        'display_summary' => 0,
        'text_processing' => '0',
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'text',
        'settings' => array(
          'rows' => '5',
          'summary_rows' => 5,
        ),
        'type' => 'text_textarea_with_summary',
        'weight' => '2',
      ),
      'widget_type' => 'text_textarea_with_summary',
    ),
  );

  // Exported field: 'node-scheda_prodotto-field_abbinamenti'.
  $fields['node-scheda_prodotto-field_abbinamenti'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_abbinamenti',
      'foreign keys' => array(
        'format' => array(
          'columns' => array(
            'format' => 'format',
          ),
          'table' => 'filter_format',
        ),
      ),
      'indexes' => array(
        'format' => array(
          0 => 'format',
        ),
      ),
      'locked' => '0',
      'module' => 'text',
      'settings' => array(
        'max_length' => '255',
      ),
      'translatable' => '1',
      'type' => 'text',
    ),
    'field_instance' => array(
      'bundle' => 'scheda_prodotto',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => 'Indicazione sintetica degli abbinamenti in gastronomia del prodotto specificato',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => '9',
        ),
        'notifications' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_abbinamenti',
      'label' => 'Abbinamenti in gastronomia',
      'required' => 0,
      'settings' => array(
        'text_processing' => '0',
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'text',
        'settings' => array(
          'size' => '60',
        ),
        'type' => 'text_textfield',
        'weight' => '8',
      ),
    ),
  );

  // Exported field: 'node-scheda_prodotto-field_caratt_nutrizionali'.
  $fields['node-scheda_prodotto-field_caratt_nutrizionali'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_caratt_nutrizionali',
      'foreign keys' => array(
        'format' => array(
          'columns' => array(
            'format' => 'format',
          ),
          'table' => 'filter_format',
        ),
      ),
      'indexes' => array(
        'format' => array(
          0 => 'format',
        ),
      ),
      'locked' => '0',
      'module' => 'text',
      'settings' => array(
        'max_length' => '255',
      ),
      'translatable' => '1',
      'type' => 'text',
    ),
    'field_instance' => array(
      'bundle' => 'scheda_prodotto',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => 'Indicazione sintetica delle principali caratteristiche nutrizionali del prodotto specificato',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => '10',
        ),
        'notifications' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_caratt_nutrizionali',
      'label' => 'Caratteristiche nutrizionali',
      'required' => 0,
      'settings' => array(
        'text_processing' => '0',
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'text',
        'settings' => array(
          'size' => '60',
        ),
        'type' => 'text_textfield',
        'weight' => '9',
      ),
    ),
  );

  // Exported field: 'node-scheda_prodotto-field_categoria'.
  $fields['node-scheda_prodotto-field_categoria'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_categoria',
      'foreign keys' => array(),
      'indexes' => array(
        'value' => array(
          0 => 'value',
        ),
      ),
      'locked' => '0',
      'module' => 'list',
      'settings' => array(
        'allowed_values' => array(
          'Bevande analcoliche, distillati e liquori;' => 'Bevande analcoliche, distillati e liquori',
          'Vini;' => 'Vini',
          'Carni (e frattaglie) fresche e loro preparazioni' => 'Carni (e frattaglie) fresche e loro preparazioni',
          'Condimenti' => 'Condimenti',
          'Formaggi' => 'Formaggi',
          'Grassi (burro, margarina, oli)' => 'Grassi (burro, margarina, oli)',
          'Prodotti vegetali allo stato naturale o trasformati' => 'Prodotti vegetali allo stato naturale o trasformati',
          'Paste fresche e prodotti della panetteria, della biscotteria, della pasticceria e della confetteria' => 'Paste fresche e prodotti della panetteria, della biscotteria, della pasticceria e della confetteria',
          'Preparazioni di pesci, molluschi e crostacei' => 'Preparazioni di pesci, molluschi e crostacei',
          'Prodotti di origine animale (miele, prodotti lattiero caseari di vario tipo, escluso il burro)' => 'Prodotti di origine animale (miele, prodotti lattiero caseari di vario tipo, escluso il burro)',
        ),
        'allowed_values_function' => '',
        'allowed_values_php' => '',
      ),
      'translatable' => '1',
      'type' => 'list_text',
    ),
    'field_instance' => array(
      'bundle' => 'scheda_prodotto',
      'default_value' => NULL,
      'default_value_function' => '',
      'default_value_php' => '',
      'deleted' => '0',
      'description' => 'Indicazione della categoria di riferimento per il prodotto',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'i18n_field',
          'settings' => array(),
          'type' => 'i18n_list_default',
          'weight' => '3',
        ),
        'notifications' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_categoria',
      'label' => 'Categoria prodotti',
      'required' => 0,
      'settings' => array(
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'options',
        'settings' => array(),
        'type' => 'options_select',
        'weight' => '0',
      ),
    ),
  );

  // Exported field: 'node-scheda_prodotto-field_consorzio_tutela'.
  $fields['node-scheda_prodotto-field_consorzio_tutela'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_consorzio_tutela',
      'foreign keys' => array(
        'format' => array(
          'columns' => array(
            'format' => 'format',
          ),
          'table' => 'filter_format',
        ),
      ),
      'indexes' => array(
        'format' => array(
          0 => 'format',
        ),
      ),
      'locked' => '0',
      'module' => 'text',
      'settings' => array(),
      'translatable' => '1',
      'type' => 'text_long',
    ),
    'field_instance' => array(
      'bundle' => 'scheda_prodotto',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => 'Indicazione del nome e dei riferimenti del consorzio di tutela',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => '14',
        ),
        'notifications' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_consorzio_tutela',
      'label' => 'Consorzio di tutela',
      'required' => 0,
      'settings' => array(
        'text_processing' => '0',
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'text',
        'settings' => array(
          'rows' => '5',
        ),
        'type' => 'text_textarea',
        'weight' => '10',
      ),
    ),
  );

  // Exported field: 'node-scheda_prodotto-field_curiosity'.
  $fields['node-scheda_prodotto-field_curiosity'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_curiosity',
      'foreign keys' => array(
        'format' => array(
          'columns' => array(
            'format' => 'format',
          ),
          'table' => 'filter_format',
        ),
      ),
      'indexes' => array(
        'format' => array(
          0 => 'format',
        ),
      ),
      'locked' => '0',
      'module' => 'text',
      'settings' => array(),
      'translatable' => '1',
      'type' => 'text_long',
    ),
    'field_instance' => array(
      'bundle' => 'scheda_prodotto',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => 'Indicazione sintetica di riferimenti storici legati al prodotto',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => '12',
        ),
        'notifications' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_curiosity',
      'label' => 'Curiosità e storia',
      'required' => 0,
      'settings' => array(
        'text_processing' => '0',
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'text',
        'settings' => array(
          'rows' => '5',
        ),
        'type' => 'text_textarea',
        'weight' => '6',
      ),
    ),
  );

  // Exported field: 'node-scheda_prodotto-field_geofield'.
  $fields['node-scheda_prodotto-field_geofield'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_geofield',
      'foreign keys' => array(),
      'indexes' => array(),
      'locked' => '0',
      'module' => 'geofield',
      'settings' => array(),
      'translatable' => '1',
      'type' => 'geofield',
    ),
    'field_instance' => array(
      'bundle' => 'scheda_prodotto',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'hidden',
          'module' => 'geofield',
          'settings' => array(
            'data' => 'full',
            'map_preset' => 'geofield_widget_map_clone',
          ),
          'type' => 'geofield_openlayers',
          'weight' => '11',
        ),
        'notifications' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_geofield',
      'label' => 'Geo',
      'required' => 0,
      'settings' => array(
        'local_solr' => array(
          'enabled' => FALSE,
          'lat_field' => 'lat',
          'lng_field' => 'lng',
        ),
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'geofield',
        'settings' => array(
          'openlayers_preset' => 'geofield_widget_map',
        ),
        'type' => 'geofield_openlayers',
        'weight' => '2',
      ),
    ),
  );

  // Exported field: 'node-scheda_prodotto-field_geonome'.
  $fields['node-scheda_prodotto-field_geonome'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_geonome',
      'foreign keys' => array(
        'format' => array(
          'columns' => array(
            'format' => 'format',
          ),
          'table' => 'filter_format',
        ),
      ),
      'indexes' => array(
        'format' => array(
          0 => 'format',
        ),
      ),
      'locked' => '0',
      'module' => 'text',
      'settings' => array(
        'max_length' => '255',
      ),
      'translatable' => '1',
      'type' => 'text',
    ),
    'field_instance' => array(
      'bundle' => 'scheda_prodotto',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => 'Indicazione del nome locale del prodotto',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => '1',
        ),
        'notifications' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_geonome',
      'label' => 'Nome geografico abbinato',
      'required' => 0,
      'settings' => array(
        'text_processing' => '0',
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'text',
        'settings' => array(
          'size' => '60',
        ),
        'type' => 'text_textfield',
        'weight' => '-2',
      ),
    ),
  );

  // Exported field: 'node-scheda_prodotto-field_geospatial'.
  $fields['node-scheda_prodotto-field_geospatial'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_geospatial',
      'foreign keys' => array(),
      'indexes' => array(),
      'locked' => '0',
      'module' => 'postgis',
      'settings' => array(
        'srid' => '4326',
        'type' => 'POINT',
      ),
      'translatable' => '0',
      'type' => 'postgis',
    ),
    'field_instance' => array(
      'bundle' => 'scheda_prodotto',
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'postgis',
          'settings' => array(),
          'type' => 'wkt',
          'weight' => 15,
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_geospatial',
      'label' => 'Geo - Spatial',
      'required' => 0,
      'settings' => array(
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'postgis',
        'settings' => array(
          'behavior' => 'openlayers_behavior_ole',
          'map' => 'postgis_widget_map',
        ),
        'type' => 'openlayers',
        'weight' => '3',
      ),
    ),
  );

  // Exported field: 'node-scheda_prodotto-field_immagine'.
  $fields['node-scheda_prodotto-field_immagine'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '-1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_immagine',
      'foreign keys' => array(
        'fid' => array(
          'columns' => array(
            'fid' => 'fid',
          ),
          'table' => 'file_managed',
        ),
      ),
      'indexes' => array(
        'fid' => array(
          0 => 'fid',
        ),
      ),
      'locked' => '0',
      'module' => 'image',
      'settings' => array(
        'default_image' => 0,
        'uri_scheme' => 'public',
      ),
      'translatable' => '0',
      'type' => 'image',
    ),
    'field_instance' => array(
      'bundle' => 'scheda_prodotto',
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'image',
          'settings' => array(
            'image_link' => '',
            'image_style' => '',
          ),
          'type' => 'image',
          'weight' => 16,
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_immagine',
      'label' => 'Immagine',
      'required' => 0,
      'settings' => array(
        'alt_field' => 0,
        'default_image' => 0,
        'file_directory' => '',
        'file_extensions' => 'png gif jpg jpeg',
        'max_filesize' => '',
        'max_resolution' => '',
        'min_resolution' => '',
        'title_field' => 0,
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'media',
        'settings' => array(
          'allowed_schemes' => array(
            'public' => 'public',
          ),
          'allowed_types' => array(
            'audio' => 0,
            'default' => 0,
            'image' => 'image',
            'video' => 0,
          ),
          'progress_indicator' => 'throbber',
        ),
        'type' => 'media_generic',
        'weight' => '-4',
      ),
    ),
  );

  // Exported field: 'node-scheda_prodotto-field_location'.
  $fields['node-scheda_prodotto-field_location'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_location',
      'foreign keys' => array(),
      'indexes' => array(
        'lid' => array(
          0 => 'lid',
        ),
      ),
      'locked' => '0',
      'module' => 'location_cck',
      'settings' => array(
        'gmap_macro' => '[gmap ]',
        'gmap_marker' => 'drupal',
        'location_settings' => array(
          'display' => array(
            'hide' => array(
              'additional' => 'additional',
              'city' => 0,
              'coords' => 'coords',
              'country' => 0,
              'country_name' => 0,
              'locpick' => 'locpick',
              'map_link' => 'map_link',
              'name' => 'name',
              'postal_code' => 0,
              'province' => 0,
              'province_name' => 0,
              'street' => 0,
            ),
          ),
          'form' => array(
            'fields' => array(
              'additional' => array(
                'collect' => '0',
                'default' => '',
                'weight' => '-94',
              ),
              'city' => array(
                'collect' => '1',
                'default' => '',
                'weight' => '-98',
              ),
              'country' => array(
                'collect' => '1',
                'default' => 'it',
                'weight' => '-96',
              ),
              'locpick' => array(
                'collect' => '0',
                'weight' => '-93',
              ),
              'name' => array(
                'collect' => '0',
                'default' => '',
                'weight' => '-95',
              ),
              'postal_code' => array(
                'collect' => '1',
                'default' => '',
                'weight' => '-99',
              ),
              'province' => array(
                'collect' => '1',
                'default' => '',
                'weight' => '-97',
                'widget' => 'autocomplete',
              ),
              'street' => array(
                'collect' => '1',
                'default' => '',
                'weight' => '-100',
              ),
            ),
          ),
        ),
      ),
      'translatable' => '1',
      'type' => 'location',
    ),
    'field_instance' => array(
      'bundle' => 'scheda_prodotto',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => 'Indicazione dei territori di produzione del prodotto',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'location_cck',
          'settings' => array(),
          'type' => 'location_default',
          'weight' => '7',
        ),
        'notifications' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_location',
      'label' => 'Territorio di produzione',
      'required' => 0,
      'settings' => array(
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 0,
        'module' => 'location_cck',
        'settings' => array(),
        'type' => 'location',
        'weight' => '4',
      ),
    ),
  );

  // Exported field: 'node-scheda_prodotto-field_marchio'.
  $fields['node-scheda_prodotto-field_marchio'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '-1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_marchio',
      'foreign keys' => array(),
      'indexes' => array(
        'value' => array(
          0 => 'value',
        ),
      ),
      'locked' => '0',
      'module' => 'list',
      'settings' => array(
        'allowed_values' => array(
          'DOP (Marchio di origine CE – Denominazione di Origine Protetta)' => 'DOP (Marchio di origine CE – Denominazione di Origine Protetta)',
          'IGP (Marchio di origine CE – Indicazione Geografica Protetta)' => 'IGP (Marchio di origine CE – Indicazione Geografica Protetta)',
          'DOC (Marchio di origine IT riferito ai soli vini – Denominazione di Origine Controllata)' => 'DOC (Marchio di origine IT riferito ai soli vini – Denominazione di Origine Controllata)',
          'DOCG (Marchio di origine IT riferito ai soli vini – Denominazione di Origine Controllata e Garantita)' => 'DOCG (Marchio di origine IT riferito ai soli vini – Denominazione di Origine Controllata e Garantita)',
          'IGT (Marchio di origine IT riferito ai soli vini – Indicazione Geografica Tipica)' => 'IGT (Marchio di origine IT riferito ai soli vini – Indicazione Geografica Tipica)',
          'Marchio di Agricoltura Biologica (Marchio CE)' => 'Marchio di Agricoltura Biologica (Marchio CE)',
          'Marchio Prodotti Tradizionali (Marchio MIPAF)' => 'Marchio Prodotti Tradizionali (Marchio MIPAF)',
        ),
        'allowed_values_function' => '',
        'allowed_values_php' => '',
      ),
      'translatable' => '1',
      'type' => 'list_text',
    ),
    'field_instance' => array(
      'bundle' => 'scheda_prodotto',
      'default_value' => NULL,
      'default_value_function' => '',
      'default_value_php' => '',
      'deleted' => '0',
      'description' => 'Indicazione (se presente) del marchio di qualità o del marchio di origine posseduto dal prodotto',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'i18n_field',
          'settings' => array(),
          'type' => 'i18n_list_default',
          'weight' => '4',
        ),
        'notifications' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_marchio',
      'label' => 'Tipologia marchio di qualità ',
      'required' => 0,
      'settings' => array(
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'options',
        'settings' => array(),
        'type' => 'options_buttons',
        'weight' => '1',
      ),
    ),
  );

  // Exported field: 'node-scheda_prodotto-field_sinonimi'.
  $fields['node-scheda_prodotto-field_sinonimi'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_sinonimi',
      'foreign keys' => array(
        'format' => array(
          'columns' => array(
            'format' => 'format',
          ),
          'table' => 'filter_format',
        ),
      ),
      'indexes' => array(
        'format' => array(
          0 => 'format',
        ),
      ),
      'locked' => '0',
      'module' => 'text',
      'settings' => array(
        'max_length' => '255',
      ),
      'translatable' => '1',
      'type' => 'text',
    ),
    'field_instance' => array(
      'bundle' => 'scheda_prodotto',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => '2',
        ),
        'notifications' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_sinonimi',
      'label' => 'Sinonimi',
      'required' => 0,
      'settings' => array(
        'text_processing' => '0',
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'text',
        'settings' => array(
          'size' => '60',
        ),
        'type' => 'text_textfield',
        'weight' => '-1',
      ),
    ),
  );

  // Exported field: 'node-scheda_prodotto-field_stagionale'.
  $fields['node-scheda_prodotto-field_stagionale'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_stagionale',
      'foreign keys' => array(
        'format' => array(
          'columns' => array(
            'format' => 'format',
          ),
          'table' => 'filter_format',
        ),
      ),
      'indexes' => array(
        'format' => array(
          0 => 'format',
        ),
      ),
      'locked' => '0',
      'module' => 'text',
      'settings' => array(
        'max_length' => '255',
      ),
      'translatable' => '1',
      'type' => 'text',
    ),
    'field_instance' => array(
      'bundle' => 'scheda_prodotto',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => 'Indicazione della stagionalità del prodotto se coerente con la sua configurazione',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => '8',
        ),
        'notifications' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_stagionale',
      'label' => 'Stagionalità del prodotto',
      'required' => 0,
      'settings' => array(
        'text_processing' => '0',
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'text',
        'settings' => array(
          'size' => '60',
        ),
        'type' => 'text_textfield',
        'weight' => '7',
      ),
    ),
  );

  // Exported field: 'node-scheda_prodotto-field_tecniche'.
  $fields['node-scheda_prodotto-field_tecniche'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_tecniche',
      'foreign keys' => array(
        'format' => array(
          'columns' => array(
            'format' => 'format',
          ),
          'table' => 'filter_format',
        ),
      ),
      'indexes' => array(
        'format' => array(
          0 => 'format',
        ),
      ),
      'locked' => '0',
      'module' => 'text',
      'settings' => array(),
      'translatable' => '1',
      'type' => 'text_long',
    ),
    'field_instance' => array(
      'bundle' => 'scheda_prodotto',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => 'Indicazione sintetica delle tecniche di produzione abbinate al prodotto specificato',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => '13',
        ),
        'notifications' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_tecniche',
      'label' => 'Tecniche di produzione',
      'required' => 0,
      'settings' => array(
        'text_processing' => '0',
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'text',
        'settings' => array(
          'rows' => '5',
        ),
        'type' => 'text_textarea',
        'weight' => '5',
      ),
    ),
  );

  // Exported field: 'node-scheda_prodotto-field_territori'.
  $fields['node-scheda_prodotto-field_territori'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_territori',
      'foreign keys' => array(
        'nid' => array(
          'columns' => array(
            'nid' => 'nid',
          ),
          'table' => 'node',
        ),
      ),
      'indexes' => array(
        'nid' => array(
          0 => 'nid',
        ),
      ),
      'locked' => '0',
      'module' => 'node_reference',
      'settings' => array(
        'referenceable_types' => array(
          'article' => 0,
          'book' => 0,
          'forumtype' => 0,
          'page' => 0,
          'panel' => 0,
          'product' => 0,
          'scheda_gestore' => 0,
          'scheda_itinerario' => 0,
          'scheda_operatori_economici' => 0,
          'scheda_porto' => 0,
          'scheda_prodotto' => 0,
          'scheda_territorio' => 'scheda_territorio',
        ),
        'view' => array(
          'args' => array(),
          'display_name' => '',
          'view_name' => '',
        ),
      ),
      'translatable' => '1',
      'type' => 'node_reference',
    ),
    'field_instance' => array(
      'bundle' => 'scheda_prodotto',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'node_reference',
          'settings' => array(),
          'type' => 'node_reference_default',
          'weight' => '6',
        ),
        'notifications' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_territori',
      'label' => 'Territorio di riferimento',
      'required' => 0,
      'settings' => array(
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'options',
        'settings' => array(),
        'type' => 'options_select',
        'weight' => '3',
      ),
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Abbinamenti in gastronomia');
  t('Caratteristiche nutrizionali');
  t('Categoria prodotti');
  t('Consorzio di tutela');
  t('Curiosità e storia');
  t('Descrizione del prodotto');
  t('Geo');
  t('Geo - Spatial');
  t('Immagine');
  t('Indicazione (se presente) del marchio di qualità o del marchio di origine posseduto dal prodotto');
  t('Indicazione dei territori di produzione del prodotto');
  t('Indicazione del nome e dei riferimenti del consorzio di tutela');
  t('Indicazione del nome locale del prodotto');
  t('Indicazione della categoria di riferimento per il prodotto');
  t('Indicazione della stagionalità del prodotto se coerente con la sua configurazione');
  t('Indicazione sintetica degli abbinamenti in gastronomia del prodotto specificato');
  t('Indicazione sintetica delle principali caratteristiche nutrizionali del prodotto specificato');
  t('Indicazione sintetica delle tecniche di produzione abbinate al prodotto specificato');
  t('Indicazione sintetica di riferimenti storici legati al prodotto');
  t('Nome geografico abbinato');
  t('Sinonimi');
  t('Stagionalità del prodotto');
  t('Tecniche di produzione');
  t('Territorio di produzione');
  t('Territorio di riferimento');
  t('Tipologia marchio di qualità ');

  return $fields;
}
