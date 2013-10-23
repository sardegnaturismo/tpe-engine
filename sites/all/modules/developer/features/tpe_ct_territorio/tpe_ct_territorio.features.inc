<?php
/**
 * @file
 * tpe_ct_territorio.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function tpe_ct_territorio_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "feeds" && $api == "feeds_importer_default") {
    return array("version" => "1");
  }
  list($module, $api) = func_get_args();
  if ($module == "openlayers" && $api == "openlayers_maps") {
    return array("version" => "1");
  }
  list($module, $api) = func_get_args();
  if ($module == "openlayers" && $api == "openlayers_styles") {
    return array("version" => "1");
  }
  list($module, $api) = func_get_args();
  if ($module == "page_manager" && $api == "pages_default") {
    return array("version" => "1");
  }
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function tpe_ct_territorio_views_api() {
  return array("version" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function tpe_ct_territorio_node_info() {
  $items = array(
    'scheda_territorio' => array(
      'name' => t('Scheda territorio'),
      'base' => 'node_content',
      'description' => t('Scheda descrittiva di una territorio'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
