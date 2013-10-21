<?php
/**
 * @file
 * tpe_ct_poi.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function tpe_ct_poi_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'content_poi';
  $context->description = 'content of a poi';
  $context->tag = '';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'poi' => 'poi',
        'scheda_operatori_economici' => 'scheda_operatori_economici',
        'scheda_porto' => 'scheda_porto',
      ),
      'options' => array(
        'node_form' => '0',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'tpe_add_leg-add-to-leg' => array(
          'module' => 'tpe_add_leg',
          'delta' => 'add-to-leg',
          'region' => 'content',
          'weight' => '-32',
        ),
        'print-print-links' => array(
          'module' => 'print',
          'delta' => 'print-links',
          'region' => 'content',
          'weight' => '-31',
        ),
        'views-5057282eb3b9c0bfe5368f378877d429' => array(
          'module' => 'views',
          'delta' => '5057282eb3b9c0bfe5368f378877d429',
          'region' => 'postscript_first',
          'weight' => '-10',
        ),
        'views-04bc0c8de001281d5a45b51189becd1c' => array(
          'module' => 'views',
          'delta' => '04bc0c8de001281d5a45b51189becd1c',
          'region' => 'postscript_second',
          'weight' => '-10',
        ),
        'views-6be97d1f4de0b2ae43d8e2263235d2f6' => array(
          'module' => 'views',
          'delta' => '6be97d1f4de0b2ae43d8e2263235d2f6',
          'region' => 'postscript_third',
          'weight' => '-10',
        ),
        'boxes-panoramio_tos' => array(
          'module' => 'boxes',
          'delta' => 'panoramio_tos',
          'region' => 'footer_first',
          'weight' => '-10',
        ),
        'boxes-upper_footer' => array(
          'module' => 'boxes',
          'delta' => 'upper_footer',
          'region' => 'footer_first',
          'weight' => '-9',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('content of a poi');
  $export['content_poi'] = $context;

  return $export;
}
