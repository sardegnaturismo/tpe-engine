<?php

/**
 * @file
 * Theme setting callbacks for the frontmap theme.
 */

/**
 * Implements hook_form_system_theme_settings_alter().
 */
function frontmap_form_system_theme_settings_alter(&$form, $form_state) {

  $maps = openlayers_map_options();

  $form['frontmap'] = array(
    '#type' => 'select',
    '#title' => t('Frontmap'),
    '#options' => $maps,
    '#default_value' => theme_get_setting('frontmap', 'frontmap'),
    '#description' => t('Choose an OpenLayers map which will be used on the frontpage.'),
  );
}