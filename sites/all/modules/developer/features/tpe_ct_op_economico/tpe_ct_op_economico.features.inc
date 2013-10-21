<?php
/**
 * @file
 * tpe_ct_op_economico.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function tpe_ct_op_economico_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "ds" && $api == "ds") {
    return array("version" => "1");
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
 * Implements hook_node_info().
 */
function tpe_ct_op_economico_node_info() {
  $items = array(
    'scheda_operatori_economici' => array(
      'name' => t('Scheda operatori economici'),
      'base' => 'node_content',
      'description' => t('Scheda operatori economici'),
      'has_title' => '1',
      'title_label' => t('Intestazione'),
      'help' => '',
    ),
  );
  return $items;
}
