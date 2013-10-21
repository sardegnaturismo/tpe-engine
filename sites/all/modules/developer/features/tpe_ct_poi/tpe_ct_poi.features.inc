<?php
/**
 * @file
 * tpe_ct_poi.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function tpe_ct_poi_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "boxes" && $api == "box") {
    return array("version" => "1");
  }
  list($module, $api) = func_get_args();
  if ($module == "context" && $api == "context") {
    return array("version" => "3");
  }
  list($module, $api) = func_get_args();
  if ($module == "field_group" && $api == "field_group") {
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
function tpe_ct_poi_views_api() {
  return array("version" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function tpe_ct_poi_node_info() {
  $items = array(
    'poi' => array(
      'name' => t('Point of interest'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
