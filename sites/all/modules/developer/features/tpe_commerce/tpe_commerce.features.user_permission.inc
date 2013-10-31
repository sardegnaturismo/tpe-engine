<?php
/**
 * @file
 * tpe_commerce.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function tpe_commerce_user_default_permissions() {
  $permissions = array();

  // Exported permission: clear prodotto_commerce feeds.
  $permissions['clear prodotto_commerce feeds'] = array(
    'name' => 'clear prodotto_commerce feeds',
    'roles' => array(
      0 => 'commerce',
    ),
    'module' => 'feeds',
  );

  // Exported permission: create import_commerce_xml content.
  $permissions['create import_commerce_xml content'] = array(
    'name' => 'create import_commerce_xml content',
    'roles' => array(
      0 => 'commerce',
    ),
    'module' => 'node',
  );

  // Exported permission: create prodotto_commerce content.
  $permissions['create prodotto_commerce content'] = array(
    'name' => 'create prodotto_commerce content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: create scheda_venditore content.
  $permissions['create scheda_venditore content'] = array(
    'name' => 'create scheda_venditore content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: delete any import_commerce_xml content.
  $permissions['delete any import_commerce_xml content'] = array(
    'name' => 'delete any import_commerce_xml content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: delete any prodotto_commerce content.
  $permissions['delete any prodotto_commerce content'] = array(
    'name' => 'delete any prodotto_commerce content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: delete any scheda_venditore content.
  $permissions['delete any scheda_venditore content'] = array(
    'name' => 'delete any scheda_venditore content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: delete own import_commerce_xml content.
  $permissions['delete own import_commerce_xml content'] = array(
    'name' => 'delete own import_commerce_xml content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: delete own prodotto_commerce content.
  $permissions['delete own prodotto_commerce content'] = array(
    'name' => 'delete own prodotto_commerce content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: delete own scheda_venditore content.
  $permissions['delete own scheda_venditore content'] = array(
    'name' => 'delete own scheda_venditore content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: edit any import_commerce_xml content.
  $permissions['edit any import_commerce_xml content'] = array(
    'name' => 'edit any import_commerce_xml content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: edit any prodotto_commerce content.
  $permissions['edit any prodotto_commerce content'] = array(
    'name' => 'edit any prodotto_commerce content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: edit any scheda_venditore content.
  $permissions['edit any scheda_venditore content'] = array(
    'name' => 'edit any scheda_venditore content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: edit own import_commerce_xml content.
  $permissions['edit own import_commerce_xml content'] = array(
    'name' => 'edit own import_commerce_xml content',
    'roles' => array(
      0 => 'commerce',
    ),
    'module' => 'node',
  );

  // Exported permission: edit own prodotto_commerce content.
  $permissions['edit own prodotto_commerce content'] = array(
    'name' => 'edit own prodotto_commerce content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: edit own scheda_venditore content.
  $permissions['edit own scheda_venditore content'] = array(
    'name' => 'edit own scheda_venditore content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: enter import_commerce_xml revision log entry.
  $permissions['enter import_commerce_xml revision log entry'] = array(
    'name' => 'enter import_commerce_xml revision log entry',
    'roles' => array(),
    'module' => 'override_node_options',
  );

  // Exported permission: enter prodotto_commerce revision log entry.
  $permissions['enter prodotto_commerce revision log entry'] = array(
    'name' => 'enter prodotto_commerce revision log entry',
    'roles' => array(),
    'module' => 'override_node_options',
  );

  // Exported permission: enter scheda_venditore revision log entry.
  $permissions['enter scheda_venditore revision log entry'] = array(
    'name' => 'enter scheda_venditore revision log entry',
    'roles' => array(),
    'module' => 'override_node_options',
  );

  // Exported permission: import prodotto_commerce feeds.
  $permissions['import prodotto_commerce feeds'] = array(
    'name' => 'import prodotto_commerce feeds',
    'roles' => array(
      0 => 'commerce',
    ),
    'module' => 'feeds',
  );

  // Exported permission: override import_commerce_xml authored by option.
  $permissions['override import_commerce_xml authored by option'] = array(
    'name' => 'override import_commerce_xml authored by option',
    'roles' => array(),
    'module' => 'override_node_options',
  );

  // Exported permission: override import_commerce_xml authored on option.
  $permissions['override import_commerce_xml authored on option'] = array(
    'name' => 'override import_commerce_xml authored on option',
    'roles' => array(),
    'module' => 'override_node_options',
  );

  // Exported permission: override import_commerce_xml promote to front page option.
  $permissions['override import_commerce_xml promote to front page option'] = array(
    'name' => 'override import_commerce_xml promote to front page option',
    'roles' => array(),
    'module' => 'override_node_options',
  );

  // Exported permission: override import_commerce_xml published option.
  $permissions['override import_commerce_xml published option'] = array(
    'name' => 'override import_commerce_xml published option',
    'roles' => array(),
    'module' => 'override_node_options',
  );

  // Exported permission: override import_commerce_xml revision option.
  $permissions['override import_commerce_xml revision option'] = array(
    'name' => 'override import_commerce_xml revision option',
    'roles' => array(),
    'module' => 'override_node_options',
  );

  // Exported permission: override import_commerce_xml sticky option.
  $permissions['override import_commerce_xml sticky option'] = array(
    'name' => 'override import_commerce_xml sticky option',
    'roles' => array(),
    'module' => 'override_node_options',
  );

  // Exported permission: override prodotto_commerce authored by option.
  $permissions['override prodotto_commerce authored by option'] = array(
    'name' => 'override prodotto_commerce authored by option',
    'roles' => array(),
    'module' => 'override_node_options',
  );

  // Exported permission: override prodotto_commerce authored on option.
  $permissions['override prodotto_commerce authored on option'] = array(
    'name' => 'override prodotto_commerce authored on option',
    'roles' => array(),
    'module' => 'override_node_options',
  );

  // Exported permission: override prodotto_commerce promote to front page option.
  $permissions['override prodotto_commerce promote to front page option'] = array(
    'name' => 'override prodotto_commerce promote to front page option',
    'roles' => array(),
    'module' => 'override_node_options',
  );

  // Exported permission: override prodotto_commerce published option.
  $permissions['override prodotto_commerce published option'] = array(
    'name' => 'override prodotto_commerce published option',
    'roles' => array(),
    'module' => 'override_node_options',
  );

  // Exported permission: override prodotto_commerce revision option.
  $permissions['override prodotto_commerce revision option'] = array(
    'name' => 'override prodotto_commerce revision option',
    'roles' => array(),
    'module' => 'override_node_options',
  );

  // Exported permission: override prodotto_commerce sticky option.
  $permissions['override prodotto_commerce sticky option'] = array(
    'name' => 'override prodotto_commerce sticky option',
    'roles' => array(),
    'module' => 'override_node_options',
  );

  // Exported permission: override scheda_venditore authored by option.
  $permissions['override scheda_venditore authored by option'] = array(
    'name' => 'override scheda_venditore authored by option',
    'roles' => array(),
    'module' => 'override_node_options',
  );

  // Exported permission: override scheda_venditore authored on option.
  $permissions['override scheda_venditore authored on option'] = array(
    'name' => 'override scheda_venditore authored on option',
    'roles' => array(),
    'module' => 'override_node_options',
  );

  // Exported permission: override scheda_venditore promote to front page option.
  $permissions['override scheda_venditore promote to front page option'] = array(
    'name' => 'override scheda_venditore promote to front page option',
    'roles' => array(),
    'module' => 'override_node_options',
  );

  // Exported permission: override scheda_venditore published option.
  $permissions['override scheda_venditore published option'] = array(
    'name' => 'override scheda_venditore published option',
    'roles' => array(),
    'module' => 'override_node_options',
  );

  // Exported permission: override scheda_venditore revision option.
  $permissions['override scheda_venditore revision option'] = array(
    'name' => 'override scheda_venditore revision option',
    'roles' => array(),
    'module' => 'override_node_options',
  );

  // Exported permission: override scheda_venditore sticky option.
  $permissions['override scheda_venditore sticky option'] = array(
    'name' => 'override scheda_venditore sticky option',
    'roles' => array(),
    'module' => 'override_node_options',
  );

  // Exported permission: unlock prodotto_commerce feeds.
  $permissions['unlock prodotto_commerce feeds'] = array(
    'name' => 'unlock prodotto_commerce feeds',
    'roles' => array(),
    'module' => 'feeds',
  );

  // Exported permission: view any unpublished import_commerce_xml content.
  $permissions['view any unpublished import_commerce_xml content'] = array(
    'name' => 'view any unpublished import_commerce_xml content',
    'roles' => array(),
    'module' => 'view_unpublished',
  );

  // Exported permission: view any unpublished prodotto_commerce content.
  $permissions['view any unpublished prodotto_commerce content'] = array(
    'name' => 'view any unpublished prodotto_commerce content',
    'roles' => array(),
    'module' => 'view_unpublished',
  );

  return $permissions;
}
