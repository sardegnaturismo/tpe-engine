<?php
/**
 * @file
 * poi_content_type.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function poi_content_type_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function poi_content_type_node_info() {
  $items = array(
    'point_of_interest' => array(
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
