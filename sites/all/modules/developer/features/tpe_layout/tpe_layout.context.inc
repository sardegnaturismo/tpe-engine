<?php
/**
 * @file
 * tpe_layout.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function tpe_layout_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'footer_anonimi';
  $context->description = '';
  $context->tag = '';
  $context->conditions = array(
    'user' => array(
      'values' => array(
        'anonymous user' => 'anonymous user',
        'redattore capo' => 'redattore capo',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'boxes-loghi' => array(
          'module' => 'boxes',
          'delta' => 'loghi',
          'region' => 'tertiary_content',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;
  $export['footer_anonimi'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'menu_anonimi';
  $context->description = '';
  $context->tag = '';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        '~<front>' => '~<front>',
      ),
    ),
    'user' => array(
      'values' => array(
        'anonymous user' => 'anonymous user',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'menu-menu-engine-sailing-tirreno' => array(
          'module' => 'menu',
          'delta' => 'menu-engine-sailing-tirreno',
          'region' => 'sidebar_first',
          'weight' => '-10',
        ),
        'menu-menu-account-utente' => array(
          'module' => 'menu',
          'delta' => 'menu-account-utente',
          'region' => 'top_menu',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 1;
  $export['menu_anonimi'] = $context;

  return $export;
}
