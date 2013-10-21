<?php
/**
 * @file
 * tpe_ct_op_economico.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function tpe_ct_op_economico_taxonomy_default_vocabularies() {
  return array(
    'settore_economico' => array(
      'name' => 'Settore economico',
      'machine_name' => 'settore_economico',
      'description' => '',
      'hierarchy' => '0',
      'module' => 'taxonomy',
      'weight' => '0',
      'language' => 'und',
      'i18n_mode' => '1',
    ),
  );
}
