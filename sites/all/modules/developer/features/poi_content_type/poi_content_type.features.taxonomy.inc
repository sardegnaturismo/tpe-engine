<?php
/**
 * @file
 * poi_content_type.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function poi_content_type_taxonomy_default_vocabularies() {
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
  );
}
