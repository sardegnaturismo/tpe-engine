<?php
/**
 * @file
 * tpe_tassonomie.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function tpe_tassonomie_taxonomy_default_vocabularies() {
  return array(
    'poi_types' => array(
      'name' => 'Poi types',
      'machine_name' => 'poi_types',
      'description' => '',
      'hierarchy' => '0',
      'module' => 'taxonomy',
      'weight' => '0',
      'language' => 'und',
      'i18n_mode' => '1',
    ),
    'settori_merceologici' => array(
      'name' => 'Settori merceologici',
      'machine_name' => 'settori_merceologici',
      'description' => '',
      'hierarchy' => '0',
      'module' => 'taxonomy',
      'weight' => '-6',
      'language' => 'und',
      'i18n_mode' => '1',
    ),
    'sezioni' => array(
      'name' => 'Sezioni',
      'machine_name' => 'sezioni',
      'description' => '',
      'hierarchy' => '0',
      'module' => 'taxonomy',
      'weight' => '-9',
      'language' => 'und',
      'i18n_mode' => '0',
    ),
    'tags' => array(
      'name' => 'Tags',
      'machine_name' => 'tags',
      'description' => '',
      'hierarchy' => '1',
      'module' => 'taxonomy',
      'weight' => '-10',
      'language' => 'und',
      'i18n_mode' => '0',
    ),
  );
}
