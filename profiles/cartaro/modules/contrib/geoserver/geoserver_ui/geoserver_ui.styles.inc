<?php

/**
 * @file
 * Handle GeoServer styles.
 *
 * @ingroup geoserver
 */


/**
 * Menu callback to list all available styles.
 */
function geoserver_ui_styles_list() {

  $rows = array();
  $header = array(t('Title'), t('Description'), t('GeoServer'), t('Actions'));

  $styles = geoserver_styles();

  // Create table rows.
  foreach ($styles as $style) {
    $row = array();
    $links = array();

    // Check map type and create links accordingly.
    switch ($style->export_type) {
      case (EXPORT_IN_DATABASE | EXPORT_IN_CODE):
        $row[] = $style->title . ' <em><small>(' . t('Overridden') . ')</small></em>';
        $links[] = l(t('Edit'), "admin/structure/geoserver/styles/{$style->name}/edit");
        $links[] = l(t('Revert'), "admin/structure/geoserver/styles/{$style->name}/delete");
        break;

      case EXPORT_IN_DATABASE:
        $links[] = l(t('Edit'), "admin/structure/geoserver/styles/{$style->name}/edit");
        $links[] = l(t('Delete'), "admin/structure/geoserver/styles/{$style->name}/delete");
        $row[] = $style->title . ' <em><small>(' . t('Normal') . ')</small></em>';
        break;

      case EXPORT_IN_CODE:
        $row[] = $style->title . ' <em><small>(' . t('Default') . ')</small></em>';
        break;
    }

    // Add description and links.
    $row[] = $style->description;

    switch (geoserver_style_status($style)) {
      case (GEOSERVER_STATUS_FOUND_SAME):
        $row[] = t('Same');
        break;

      case (GEOSERVER_STATUS_FOUND_DIFF):
        $row[] = t('Different');
        $links[] = l(t('Update'), "admin/structure/geoserver/styles/{$style->name}/update");
        break;

      case (GEOSERVER_STATUS_NOT_FOUND):
        $row[] = t('Unavailable');
        $links[] = l(t('Create'), "admin/structure/geoserver/styles/{$style->name}/create");
        break;
    }

    $row[] = implode(' | ', $links);
    $rows[] = $row;
  }

  // Output themed table.
  return theme('table', array('header' => $header, 'rows' => $rows));
}

/**
 * style add/edit form.
 */
function geoserver_ui_styles_form($form_state, $args) {

  $form = array();
  $style = $args['build_info']['args'][0];

  $form['title'] = array(
    '#type' => 'textfield',
    '#title' => t('Style Title'),
    '#required' => TRUE,
    '#size' => 30,
    '#default_value' => isset($style->title) ? $style->title : '',
    '#description' => t('The friendly name of your style, which will appear in the administration interface.'),
  );
  $form['name'] = array(
    '#type' => 'machine_name',
    '#maxlength' => 32,
    '#machine_name' => array(
      'exists' => 'geoserver_style_load',
      'source' => array('title'),
    ),
    '#default_value' => isset($style->name) ? $style->name : '',
    '#description' => t('This is the unique name of the style. It must contain only alphanumeric characters and underscores.'),
  );
  $form['description'] = array(
    '#type' => 'textfield',
    '#title' => t('Style Description'),
    '#default_value' => isset($style->description) ? $style->description : '',
    '#description' => t('The description of your style, which will appear in the administration interface.'),
  );
  $form['data'] = array(
    '#type' => 'textarea',
    '#title' => t('SLD'),
    '#description' => t('Styled Layer Descriptor (SLD)'),
    '#default_value' => isset($style->data) ? $style->data : '',
  );
  $form['submit'] = array(
    '#type' => 'submit',
    '#value' => t('Save'),
  );

  return $form;
}

/**
 * Submit handler for styles.
 */
function geoserver_ui_styles_form_submit(&$form, &$form_state) {

  // Create style object.
  $style = new stdClass();
  $style->name = $form_state['values']['name'];
  $style->title = $form_state['values']['title'];
  $style->description = $form_state['values']['description'];
  $style->data = $form_state['values']['data'];

  $success = geoserver_style_save($style);

  // Redirect to edit page.
  if ($success) {
    drupal_set_message(t('Style saved.'));
    $form_state['redirect'] = 'admin/structure/geoserver/styles/' . $style->name . '/edit';
  }
  else {
    form_set_error('geoserver', t('Error trying to save style.'));
  }
}

/**
 * style update form.
 */
function geoserver_ui_styles_update($form_state, $args) {

  $form = array();
  $style = $args['build_info']['args'][0];

  // Create update form.
  $form = array('style' => array('#type' => 'value', '#value' => $style));
  $message = t('Are you sure you want to update %style?', array('%style' => $style->title));
  return confirm_form($form, $message, 'admin/structure/geoserver/styles');
}

/**
 * Submit callback for style update form.
 */
function geoserver_ui_styles_update_submit($form, &$form_state) {

  $style = $form_state['values']['style'];
  try {
    geoserver_style_update($style);
    drupal_set_message(t('%style was updated.', array('%style' => $style->title)));
  } catch (geoserver_resource_exception $exc) {
    drupal_set_message(t('Error when attempting to update %style: %message',
        array('%style' => $style->title, '%message' => $exc->getMessage())), 'error');
  }

  // Redirect.
  $form_state['redirect'] = 'admin/structure/geoserver/styles';
}

/**
 * style create form.
 */
function geoserver_ui_styles_create($form_state, $args) {

  $form = array();
  $style = $args['build_info']['args'][0];

  // Create create form.
  $form = array('style' => array('#type' => 'value', '#value' => $style));
  $message = t('Are you sure you want to create %style?', array('%style' => $style->title));
  return confirm_form($form, $message, 'admin/structure/geoserver/styles');
}

/**
 * Submit callback for style create form.
 */
function geoserver_ui_styles_create_submit($form, &$form_state) {

  $style = $form_state['values']['style'];

  try {
    geoserver_style_create($style);
    drupal_set_message(t('%style was created.', array('%style' => $style->title)));
  }
  catch (Exception $exc) {
    drupal_set_message(t('Error when attempting to create %style: %message',
        array('%style' => $style->title, '%message' => $exc->getMessage())), 'error');
  }

  $form_state['redirect'] = 'admin/structure/geoserver/styles';
}

/**
 * Confirm form to delete a style.
 */
function geoserver_ui_styles_delete($form_state, $args) {

  $form = array();
  $style = $args['build_info']['args'][0];

  // Create create form.
  $form = array('style' => array('#type' => 'value', '#value' => $style));
  $message = t('Are you sure you want to delete %style?', array('%style' => $style->title));
  return confirm_form($form, $message, 'admin/structure/geoserver/styles');
}

/**
 * Submit callback for style create form.
 */
function geoserver_ui_styles_delete_submit($form, &$form_state) {

  $style = $form_state['values']['style'];

  try {
    geoserver_style_delete($style);
    drupal_set_message(t('%style was delete.', array('%style' => $style->title)));
  }
  catch (Exception $exc) {
    drupal_set_message(t('Error when attempting to delete %style: %message',
        array('%style' => $style->title, '%message' => $exc->getMessage())), 'error');
  }

  $form_state['redirect'] = 'admin/structure/geoserver/styles';
}
