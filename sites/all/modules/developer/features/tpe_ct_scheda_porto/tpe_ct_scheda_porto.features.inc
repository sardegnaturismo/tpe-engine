<?php
/**
 * @file
 * tpe_ct_scheda_porto.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function tpe_ct_scheda_porto_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "feeds" && $api == "feeds_importer_default") {
    return array("version" => "1");
  }
  list($module, $api) = func_get_args();
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
  list($module, $api) = func_get_args();
  if ($module == "openlayers" && $api == "openlayers_layers") {
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
  if ($module == "quicktabs" && $api == "quicktabs") {
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
function tpe_ct_scheda_porto_views_api() {
  return array("version" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function tpe_ct_scheda_porto_node_info() {
  $items = array(
    'scheda_porto' => array(
      'name' => t('Scheda porto'),
      'base' => 'node_content',
      'description' => t('Scheda per la definizione ed individuazione di un porto'),
      'has_title' => '1',
      'title_label' => t('Nome (es. Porto di Cagliari)'),
      'help' => '',
    ),
  );
  return $items;
}
