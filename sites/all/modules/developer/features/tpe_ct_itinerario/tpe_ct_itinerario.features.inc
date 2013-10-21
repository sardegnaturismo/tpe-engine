<?php
/**
 * @file
 * tpe_ct_itinerario.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function tpe_ct_itinerario_ctools_plugin_api() {
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
function tpe_ct_itinerario_views_api() {
  return array("version" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function tpe_ct_itinerario_node_info() {
  $items = array(
    'scheda_itinerario' => array(
      'name' => t('Scheda itinerario'),
      'base' => 'node_content',
      'description' => t('Scheda per la creazione di itinerari turistici'),
      'has_title' => '1',
      'title_label' => t('Itinerario'),
      'help' => '',
    ),
  );
  return $items;
}
