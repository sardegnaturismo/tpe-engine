<?php
/**
 * @file
 * tpe_commerce.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function tpe_commerce_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "feeds" && $api == "feeds_importer_default") {
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
function tpe_commerce_views_api() {
  return array("version" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function tpe_commerce_node_info() {
  $items = array(
    'import_commerce_xml' => array(
      'name' => t('Import Commerce XML'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'prodotto_commerce' => array(
      'name' => t('Prodotto commerce'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'scheda_venditore' => array(
      'name' => t('Scheda venditore'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
