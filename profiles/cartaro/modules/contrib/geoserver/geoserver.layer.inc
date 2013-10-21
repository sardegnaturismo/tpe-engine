<?php 

/**
 * @file
 * GeoServer layer.
 */

/**
 * Get all layer types.
 *
 * @ingroup openlayers_api
 *
 * @param $reset
 *   Boolean whether to reset cache or not.
 * @return
 *   Array of layer type info.
 */
function geoserver_layer_types($reset = FALSE) {
  ctools_include('plugins');
  return ctools_get_plugins('geoserver', 'layer_types');
}

/**
 *  ...
 */
function geoserver_layers_load($reset = FALSE) {

  ctools_include('export');

  if ($reset) {
    ctools_export_load_object_reset('geoserver_layers');
  }

  $layers = ctools_export_load_object('geoserver_layers', 'all', array());
  $layer_types = geoserver_layer_types();

  foreach ($layers as $index => $layer) {
    $layer_object = geoserver_get_layer_object($layer);
    if ($layer_object) {
      $layers[$index] = $layer_object;
    }
    else {
      unset($layers[$index]);
    }
  }

  return $layers;
}

/**
 * Menu loader for layers. (%geoserver_layer)
 * @ingroup geoserver_api
 *
 * @param $name
 *   Layer name
 * @return array
 *   Layer export
 */
function geoserver_layer_load($name, $reset = FALSE) {

  ctools_include('export');

  if ($reset) {
    ctools_export_load_object_reset('geoserver_layers');
  }
  $layers = ctools_export_load_object('geoserver_layers', 'names', array($name));
  $layer_types = geoserver_layer_types();

  if (isset($layers[$name])) {
    return geoserver_get_layer_object($layers[$name]);
  }
  else {
    watchdog('geoserver', 'Layer %layer not found.', array('%layer' => $name), WATCHDOG_ERROR);
    return FALSE;
  }
}

/**
 * Get layer object
 *
 * @ingroup openlayers_api
 * @param $reset
 *   Boolean whether to reset cache or not
 * @return array
 *   array of layer info
 */
function geoserver_get_layer_object($layer) {
  // Static cache because this function will possibly be called in big loops.
  static $layer_types;
  if (!isset($layer_types)) {
    $layer_types = geoserver_layer_types();
  }

  $layer->title = t($layer->title);
  $layer->description = t($layer->description);

  if (is_array($layer->data) && isset($layer->data['type']) &&  isset($layer_types[$layer->data['type']])) {
    $layer_class = ctools_plugin_get_class($layer_types[$layer->data['type']], 'layer_type');
    if ($layer_class) {
      return new $layer_class($layer);
    }
  }
  watchdog('geoserver', 'Layer !layer_name is unavailable because its
    layer type or the module that provides its layer type is missing',
    array('!layer_name' => $layer->title),
    WATCHDOG_ERROR);
  return FALSE;
}

/**
 * Menu loader for layer types.
 *
 * @ingroup openlayers_api
 *
 * @param $name
 *   String identifier of layer type.
 * @param $reset
 *   Boolean whether to reset cache or not.
 * @return
 *   An instantiated layer type object or FALSE if not found.
 */
function geoserver_layer_type_load($name, $reset = FALSE) {
  ctools_include('plugins');
  $layer_type_class = ctools_plugin_load_class('geoserver', 'layer_types', $name, 'layer_type');

  if ($layer_type_class) {
    $layer_type = new $layer_type_class();
    return $layer_type;
  }
  return FALSE;
}


class geoserver_resource_exception extends Exception {};

abstract class geoserver_resource {

  /**
   * Constructor.
   */
  function __construct($name, $datastore) {
    $this->name = $name;
    $this->datastore = $datastore;
    $this->workspace = variable_get('geoserver_workspace', '');
  }

  /**
   * Create remote resource.
   */
  abstract function create();

  /**
   * Update remote resource.
   */
  abstract function update();

  /**
   * Delete remote resource.
   */
  abstract function delete();

  /**
   * Read remote resource.
   */
  abstract function read();
}

/**
 * We define base classes in the core module.
 * All other parent classes can be autoloaded through ctools.
 */
abstract class geoserver_layer_type {

  const STATUS_FOUND_SAME = 1;
  const STATUS_FOUND_DIFF = 2;
  const STATUS_NOT_FOUND  = 3;

  public $name;

  /**
   * Constructor.
   */
  function __construct($layer = array()) {

    $this->workspace = variable_get('geoserver_workspace', '');

    foreach (array('name', 'title', 'description', 'data', 'export_type') as $k) {
      if (isset($layer->{$k})) {
        $this->{$k} = $layer->{$k};
      }
    }
  }

  /**
   * Export layer to remote resource definition.
   */
  abstract function to_resource();

  /**
   * Import layer from remote resource definition.
   */
  abstract function from_resource(geoserver_resource $resource);

  /**
   * Return fields of layer settings form.
   */
  function options_form($defaults = array()) {
    return array();
  }

  /**
   * Get status of layer.
   */
  function get_status() {

    $resource = new geoserver_resource_feature_type($this->name, $this->datastore);
    $resource->read();

    $remote = clone $this;
    $remote->from_resource($resource);

    if (!empty($remote->name)) {
      if ($this->to_record() != $remote->to_record()) {
        return geoserver_layer_type::STATUS_FOUND_DIFF;
      }
      else {
        return geoserver_layer_type::STATUS_FOUND_SAME;
      }
    }
    else {
      return geoserver_layer_type::STATUS_NOT_FOUND;
    }
  }

  /**
   * @return
   *   A version of this layer_type which can be saved,
   *   when attempting to save a modified layer.
   */
  function to_record() {
    return array(
      'name' => $this->name,
      'description' => $this->description,
      'title' => $this->title,
      'data' => $this->data,
    );
  }

  /**
   * @return
   *   Success value on saving this layer
   */
  function save() {
    if (!empty($this->name)) {
      return (db_select('geoserver_layers')
          ->fields('geoserver_layers', array('name'))
          ->condition('name', $this->name)
          ->execute()
          ->fetchCol()) ?
        drupal_write_record('geoserver_layers', $this->to_record(), 'name') :
        drupal_write_record('geoserver_layers', $this->to_record());
    }
  }
}

class geoserver_resource_feature_type extends geoserver_resource {

  public $feature_type;
  public $layer;

  /**
   * Create remote feature type.
   */
  public function create() {

    $url = 'rest/workspaces/' . $this->workspace . '/datastores/' . $this->datastore . '/featuretypes';
    $result = geoserver_post($url . '.json', $this->feature_type);
    if ($result->code != 201) {
      throw new geoserver_resource_exception("Could not create featuretype: $result->data");
    }

    $result = geoserver_put('rest/layers/' . $this->name . '.json', $this->layer);
    if ($result->code != 200) {
      throw new geoserver_resource_exception("Could not update layer: $result->data");
    }
  }

  /**
   * Update remote feature type.
   */
  public function update() {

    $url = 'rest/workspaces/' . $this->workspace . '/datastores/' . $this->datastore . '/featuretypes';
    $result = geoserver_put($url . '/' . $this->name . '.json', $this->feature_type);
    if ($result->code != 200) {
      throw new geoserver_resource_exception("Could not update featuretypes: $result->data");
    }

    $result = geoserver_put('rest/layers/' . $this->name . '.json', $this->layer);
    if ($result->code != 200) {
      throw new geoserver_resource_exception("Could not update layer: $result->data");
    }
  }

  /**
   * Delete remote feature type.
   */
  public function delete() {
    $url = 'rest/workspaces/' . $this->workspace . '/datastores/' . $this->datastore . '/featuretypes';
    $result = geoserver_delete($url . '/' . $this->name . '?recurse=true');
    if ($result->code != 200) {
      throw new geoserver_resource_exception("Could not delete featuretype: $result->data");
    }
  }

  /**
   * Read remote feature type.
   */
  public function read() {

    $url = 'rest/workspaces/' . $this->workspace . '/datastores/' . $this->datastore;
    $result = geoserver_get($url . '/featuretypes/' . $this->name . '.json');
    if ($result->code == 200) {
      $this->feature_type = $result->data;

      $result = geoserver_get('rest/layers/' . $this->name . '.json');
      if ($result->code == 200) {
        $this->layer = $result->data;
      }
    }
  }
}

/**
 * Vector based layer.
 */
abstract class geoserver_layer_type_feature_type extends geoserver_layer_type {

  /**
   * Export to remote feature type definition.
   */
  abstract function to_feature_type();

  /**
   * Import from remote feature type definition.
   */
  abstract function from_feature_type($feature_type);

  /**
   * Export to remote layer definition.
   */
  function to_layer() {
    return array(
      'layer' => array(
        'name' => $this->name,
        'type' => 'VECTOR',
        'defaultStyle' => array(
          'name' => $this->data['style'],
        ),
        'resource' => array(
          '@class' => 'featureType',
          'name' => $this->name,
        ),
        'enabled' => TRUE,
      ),
    );
  }

  /**
   * Import from remote layer definition.
   */
  function from_layer($layer) {
    $style = isset($layer->layer->defaultStyle->name) ? $layer->layer->defaultStyle->name : '';
    $this->data['style'] = $style;
  }

  /**
   * Export layer to remote resource definition.
   */
  function to_resource() {
    $resource = new geoserver_resource_feature_type($this->name, $this->datastore);
    $resource->feature_type = $this->to_feature_type();
    $resource->layer = $this->to_layer();
    return $resource;
  }

  /**
   * Import layer from remote resource definition.
   */
  function from_resource(geoserver_resource $resource) {
    $this->from_feature_type($resource->feature_type);
    $this->from_layer($resource->layer);
  }

}

/**
 * Raster based layer.
 */
abstract class geoserver_layer_type_coverage extends geoserver_layer_type {

  /**
   * Export layer to remote coverage definition.
   */
  abstract function to_coverage();

  /**
   * Import layer from remote coverage definition.
   */
  abstract function from_coverage($coverage);

  /**
   * Create remote layer.
   */
  public function create_remote() {
  }

  /**
   * Update remote layer.
   */
  public function update_remote() {
  }

  /**
   * Delete remote layer.
   */
  public function delete_remote() {
  }

  /**
   * Read remote layer.
   */
  public function read_remote() {
  }
}
