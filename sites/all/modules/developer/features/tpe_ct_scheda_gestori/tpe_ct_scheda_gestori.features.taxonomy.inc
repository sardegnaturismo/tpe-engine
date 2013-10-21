<?php
/**
 * @file
 * tpe_ct_scheda_gestori.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function tpe_ct_scheda_gestori_taxonomy_default_vocabularies() {
  return array(
    'servizi' => array(
      'name' => 'Servizi',
      'machine_name' => 'servizi',
      'description' => '',
      'hierarchy' => '1',
      'module' => 'taxonomy',
      'weight' => '0',
      'language' => 'und',
      'i18n_mode' => '1',
    ),
  );
}
