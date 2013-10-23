<?php
/**
 * @file
 * tpe_ct_scheda_gestori.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function tpe_ct_scheda_gestori_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "feeds" && $api == "feeds_importer_default") {
    return array("version" => "1");
  }
  list($module, $api) = func_get_args();
  if ($module == "field_group" && $api == "field_group") {
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
 * Implements hook_node_info().
 */
function tpe_ct_scheda_gestori_node_info() {
  $items = array(
    'scheda_gestore' => array(
      'name' => t('Scheda gestore'),
      'base' => 'node_content',
      'description' => t('Denominazione del gestore della struttura portuale o dell\'approdo.'),
      'has_title' => '1',
      'title_label' => t('Denominazione gestore'),
      'help' => '',
    ),
  );
  return $items;
}
