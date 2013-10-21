<?php
/**
 * @file
 * tpe_ct_prodotto.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function tpe_ct_prodotto_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "ds" && $api == "ds") {
    return array("version" => "1");
  }
  list($module, $api) = func_get_args();
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
  list($module, $api) = func_get_args();
  if ($module == "openlayers" && $api == "openlayers_maps") {
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
function tpe_ct_prodotto_views_api() {
  return array("version" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function tpe_ct_prodotto_node_info() {
  $items = array(
    'scheda_prodotto' => array(
      'name' => t('Scheda Prodotto'),
      'base' => 'node_content',
      'description' => t('Scheda per la definizione di un prodotto'),
      'has_title' => '1',
      'title_label' => t('Scheda Prodotto'),
      'help' => '',
    ),
  );
  return $items;
}
