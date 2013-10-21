<?php
/**
 * @file
 * tpe_ct_poi.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function tpe_ct_poi_taxonomy_default_vocabularies() {
  return array(
    'province' => array(
      'name' => 'Province',
      'machine_name' => 'province',
      'description' => '',
      'hierarchy' => '1',
      'module' => 'taxonomy',
      'weight' => '0',
      'language' => 'und',
      'i18n_mode' => '1',
    ),
    'types' => array(
      'name' => 'Poi types',
      'machine_name' => 'types',
      'description' => '',
      'hierarchy' => '0',
      'module' => 'taxonomy',
      'weight' => '0',
      'language' => 'und',
      'i18n_mode' => '1',
    ),
  );
}
