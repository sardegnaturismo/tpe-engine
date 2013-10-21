<?php

/**
 * @file
 * Handle GeoServer layers.
 *
 * @ingroup geoserver
 */


/**
 * Menu callback to list all available layers.
 */
function geoserver_ui_layers_list() {

  $rows = array();
  $header = array(t('Title'), t('Type'), t('Description'), t('GeoServer'), t('Actions'));

  $layers = geoserver_layers_load();
  $layer_types = geoserver_layer_types();

  // Create table rows.
  foreach ($layers as $layer) {
    $row = array();
    $links = array();

    // Check map type and create links accordingly.
    switch ($layer->export_type) {
      case (EXPORT_IN_DATABASE | EXPORT_IN_CODE):
        $row[] = $layer->title . ' <em><small>(' . t('Overridden') . ')</small></em>';
        $links[] = l(t('Edit'), "admin/structure/geoserver/layers/{$layer->name}/edit");
        $links[] = l(t('Revert'), "admin/structure/geoserver/layers/{$layer->name}/delete");
        break;

      case EXPORT_IN_DATABASE:
        $links[] = l(t('Edit'), "admin/structure/geoserver/layers/{$layer->name}/edit");
        $links[] = l(t('Delete'), "admin/structure/geoserver/layers/{$layer->name}/delete");
        $row[] = $layer->title . ' <em><small>(' . t('Normal') . ')</small></em>';
        break;

      case EXPORT_IN_CODE:
        $links[] = l(t('Edit'), "admin/structure/geoserver/layers/{$layer->name}/edit");
        $row[] = $layer->title . ' <em><small>(' . t('Default') . ')</small></em>';
        break;
    }

    // Add description and links.
    $row[] = $layer_types[$layer->data['type']]['title'];
    $row[] = $layer->description;

    switch ($layer->get_status()) {
      case (geoserver_layer_type::STATUS_FOUND_SAME):
        $row[] = t('Normal');
        break;

      case (geoserver_layer_type::STATUS_FOUND_DIFF):
        $row[] = t('Overridden');
        $links[] = l(t('Update'), "admin/structure/geoserver/layers/{$layer->name}/update");
        break;

      case (geoserver_layer_type::STATUS_NOT_FOUND):
        $row[] = t('Unavailable');
        $links[] = l(t('Create'), "admin/structure/geoserver/layers/{$layer->name}/create");
        break;
    }

    $row[] = implode(' | ', $links);
    $rows[] = $row;
  }

  // Output themed table.
  return theme('table', array('header' => $header, 'rows' => $rows));
}

/**
 * Get layer type options.
 */
function geoserver_ui_layer_types($type) {
  $form = array();
  $form['layer_type_help'] = array(
    '#type' => 'item',
    '#markup' => t('Select a layer type to create a new layer.'),
  );

  $layer_types = geoserver_layer_types();

  foreach ($layer_types as $key => $plugin) {
    $class = ctools_plugin_get_class($plugin, 'layer_type');
    if ($class) {
      // Build form.
      $form[$key] = array(
        '#type' => 'item',
        '#title' => l($plugin['title'], "admin/structure/geoserver/layers/add/{$key}"),
        '#description' => $plugin['description'],
      );
    }
  }
  return $form;
}

/**
 * Layer add/edit form.
 */
function geoserver_ui_layers_form($form_state, $args) {

  $styles = array('');
  foreach (geoserver_styles() as $style) {
    $styles[$style->name] = $style->title;
  }

  $form = array();
  $layer = $args['build_info']['args'][0];

  $form['layer']['basics'] = array(
    '#tree' => TRUE,
    '#type' => 'fieldset',
    '#title' => t('Layer Basics'),
    '#description' => t('The following settings are for all layers.'),
    '#tree' => FALSE,
  );
  $form['layer']['basics']['title'] = array(
    '#type' => 'textfield',
    '#title' => t('Layer Title'),
    '#required' => TRUE,
    '#size' => 30,
    '#default_value' => isset($layer->title) ? $layer->title : '',
    '#description' => t('The friendly name of your layer, which will appear in the administration interface.'),
  );
  $form['layer']['basics']['name'] = array(
    '#type' => 'machine_name',
    '#maxlength' => 32,
    '#machine_name' => array(
      'exists' => 'geoserver_layer_load',
      'source' => array('layer', 'basics', 'title'),
    ),
    '#default_value' => isset($layer->name) ? $layer->name : '',
    '#description' => t('This is the unique name of the layer. It must contain only alphanumeric characters and underscores.'),
  );
  $form['layer']['basics']['description'] = array(
    '#type' => 'textfield',
    '#title' => t('Layer Description'),
    '#default_value' => isset($layer->description) ? $layer->description : '',
    '#description' => t('The description of your layer, which will appear in the administration interface.'),
  );

  $form['layer']['data'] = array(
    '#tree' => TRUE,
    '#type' => 'fieldset',
    '#title' => t('Layer Configuration'),
  );

  $form['layer']['data']['style'] = array(
    '#type' => 'select',
    '#title' => t('Style'),
    '#options' => $styles,
    '#default_value' => isset($layer->data['style']) ? $layer->data['style'] : '',
    '#description' => t('Please select a default style for this layer.'),
  );

  $form['layer']['data']['type'] = array(
    '#type' => 'hidden',
    '#value' => get_class($layer),
  );

  if (module_exists('openlayers')) {
    $openlayers = isset($layer->data['openlayers']) ? $layer->data['openlayers'] : array();
    $form['layer']['data']['openlayers'] = array(
      '#type' => 'fieldset',
      '#title' => t('OpenLayers'),
    );
    $form['layer']['data']['openlayers']['wfs'] = array(
      '#type' => 'checkbox',
      '#title' => t('Provide an OpenLayers WFS layer.'),
      '#default_value' => isset($openlayers['wfs']) ? $openlayers['wfs'] : '',
    );
    $form['layer']['data']['openlayers']['gwc'] = array(
      '#type' => 'checkbox',
      '#title' => t('Provide a cached OpenLayers WMS layer.'),
      '#default_value' => isset($openlayers['gwc']) ? $openlayers['gwc'] : '',
    );
    // TODO: merge *_srs fields, depends on Drupal 7.13
    // Conditional visibility: http://drupal.org/node/1464758
    $form['layer']['data']['openlayers']['gwc_srs'] = array(
      '#type' => 'select',
      '#title' => t('Projection'),
      '#options' => array(
        'EPSG:4326' => '4326',
        'EPSG:900913' => '900913',
      ),
      '#default_value' => isset($openlayers['gwc_srs']) ? $openlayers['gwc_srs'] : '',
      '#states' => array(
        'visible' => array(
          ':input[name="data[openlayers][gwc]"]' => array(
            'checked' => TRUE,
          ),
        ),
      ),
    );
    $form['layer']['data']['openlayers']['wms'] = array(
      '#type' => 'checkbox',
      '#title' => t('Provide an untiled OpenLayers WMS layer.'),
      '#default_value' => isset($openlayers['wms']) ? $openlayers['wms'] : '',
    );
    $form['layer']['data']['openlayers']['wms_srs'] = array(
      '#type' => 'select',
      '#title' => t('Projection'),
      '#options' => array(
        'EPSG:4326' => '4326',
        'EPSG:900913' => '900913',
      ),
      '#default_value' => isset($openlayers['wms_srs']) ? $openlayers['wms_srs'] : '',
      '#states' => array(
        'visible' => array(
          ':input[name="data[openlayers][wms]"]' => array(
            'checked' => TRUE,
          ),
        ),
      ),
    );
  }

  $form['layer']['data']['options'] = array(
    '#type' => 'fieldset',
    '#title' => t('Layer Specifics'),
    '#description' => t('The following settings are specific to the layer type.'),
  );

  // Arrays merged in order so that options_form can override defaults.
  $form['layer']['data']['options'] = $layer->options_form() + $form['layer']['data']['options'];

  $form['submit'] = array(
    '#type' => 'submit',
    '#value' => t('Save'),
  );

  return $form;
}

/**
 * Submit handler for layers.
 */
function geoserver_ui_layers_form_submit(&$form, &$form_state) {
  $layer = geoserver_layer_type_load($form_state['values']['data']['type']);
  $layer->name = $form_state['values']['name'];
  $layer->title = $form_state['values']['title'];
  $layer->description = $form_state['values']['description'];
  $layer->data = $form_state['values']['data'];

  $success = $layer->save();

  // Redirect to edit page.
  if ($success) {
    drupal_set_message(t('Layer saved.'));
    $form_state['redirect'] = 'admin/structure/geoserver/layers/' . $layer->name . '/edit';
  }
  else {
    form_set_error('openlayers', t('Error trying to save layer.'));
  }
}

/**
 * Layer update form.
 */
function geoserver_ui_layers_update($form_state, $args) {

  $form = array();
  $layer = $args['build_info']['args'][0];

  // Create update form.
  $form = array('layer' => array('#type' => 'value', '#value' => $layer));
  $message = t('Are you sure you want to update %layer?', array('%layer' => $layer->title));
  return confirm_form($form, $message, 'admin/structure/geoserver/layers');
}

/**
 * Submit callback for layer update form.
 */
function geoserver_ui_layers_update_submit($form, &$form_state) {

  $layer = $form_state['values']['layer'];
  try {
    $resource = $layer->to_resource();
    $resource->update();
    drupal_set_message(t('%layer was updated.', array('%layer' => $layer->title)));
  } catch (geoserver_resource_exception $exc) {
    drupal_set_message(t('Error when attempting to update %layer: %message',
        array('%layer' => $layer->title, '%message' => $exc->getMessage())), 'error');
  }

  // Redirect.
  $form_state['redirect'] = 'admin/structure/geoserver/layers';
}

/**
 * Layer create form.
 */
function geoserver_ui_layers_create($form_state, $args) {

  $form = array();
  $layer = $args['build_info']['args'][0];

  // Create create form.
  $form = array('layer' => array('#type' => 'value', '#value' => $layer));
  $message = t('Are you sure you want to create %layer?', array('%layer' => $layer->title));
  return confirm_form($form, $message, 'admin/structure/geoserver/layers');
}

/**
 * Submit callback for layer create form.
 */
function geoserver_ui_layers_create_submit($form, &$form_state) {

  $layer = $form_state['values']['layer'];

  try {

    $resource = $layer->to_resource();
    $result = $resource->create();
    drupal_set_message(t('%layer was created.', array('%layer' => $layer->title)));

  } catch (geoserver_resource_exception $exc) {

    drupal_set_message(t('Error when attempting to create %layer: %message',
        array('%layer' => $layer->title, '%message' => $exc->getMessage())), 'error');
  }

  $form_state['redirect'] = 'admin/structure/geoserver/layers';
}

/**
 * Confirm form to delete a layer.
 */
function geoserver_ui_layers_delete($form_state, $args) {

  $form = array();
  $layer = $args['build_info']['args'][0];

  // Create create form.
  $form = array(
    'layer' => array('#type' => 'value', '#value' => $layer),
    'target' => array(
      '#type' => 'select',
      '#title' => 'Layer configuration',
      '#description' => 'Please select which layer configuration you want to delete.',
      '#options' => array(
        'all' => t('Drupal and GeoServer'),
        'drupal' => t('Drupal'),
        'geoserver' => t('GeoServer'),
      ),
    ),
  );
  $message = t('Are you sure you want to delete %layer?', array('%layer' => $layer->title));
  return confirm_form($form, $message, 'admin/structure/geoserver/layers');
}

/**
 * Submit callback for layer create form.
 */
function geoserver_ui_layers_delete_submit($form, &$form_state) {

  $layer = $form_state['values']['layer'];
  $target = $form_state['values']['target'];

  try {
    if ($target == 'all' || $target == 'geoserver') {
      $resource = $layer->to_resource();
      $resource->delete();
    }

    if ($target == 'all' || $target == 'drupal') {
      db_delete('geoserver_layers')->condition('name', $layer->name)->execute();
    }

    drupal_set_message(t('%layer was delete.', array('%layer' => $layer->title)));

  } catch (geoserver_resource_exception $exc) {

    drupal_set_message(t('Error when attempting to delete %layer: %message',
        array('%layer' => $layer->title, '%message' => $exc->getMessage())), 'error');
  }

  $form_state['redirect'] = 'admin/structure/geoserver/layers';
}

/**
 * Layer type settings form.
 */
function geoserver_ui_layers_settings($form_state, $layer = NULL) {
  $form = array();
  ctools_include('plugins');
  $layer_types = ctools_get_plugins('geoserver', 'layer_types');

  foreach ($layer_types as $name => $type_def) {
    $type = geoserver_layer_type_load($name);
    if (method_exists($type, 'settings_form')) {
      $form[$name] = array(
        '#type' => 'fieldset',
        '#tree' => TRUE,
        '#title' => $type_def['title'],
      );
      $form[$name]['settings'] = $type->settings_form();
    }
  }
  $form['submit'] = array(
    '#type' => 'submit',
    '#value' => t('Save'),
  );

  return $form;
}

/**
 * Form submit callback for layer type settings form.
 */
function geoserver_ui_layers_settings_submit(&$form, &$form_state) {
  $layer_types = geoserver_layer_types();
  foreach ($form_state['values'] as $key => $value) {
    if (in_array($key, array_keys($layer_types))) {
      foreach ($value['settings'] as $k => $v) {
        variable_set($k, $v);
      }
    }
  }
}
