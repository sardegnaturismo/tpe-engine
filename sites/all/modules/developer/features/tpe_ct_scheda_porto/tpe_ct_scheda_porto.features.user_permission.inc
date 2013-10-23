<?php
/**
 * @file
 * tpe_ct_scheda_porto.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function tpe_ct_scheda_porto_user_default_permissions() {
  $permissions = array();

  // Exported permission: clear scheda_porto feeds.
  $permissions['clear scheda_porto feeds'] = array(
    'name' => 'clear scheda_porto feeds',
    'roles' => array(),
    'module' => 'feeds',
  );

  // Exported permission: clear scheda_porto_liguria feeds.
  $permissions['clear scheda_porto_liguria feeds'] = array(
    'name' => 'clear scheda_porto_liguria feeds',
    'roles' => array(),
    'module' => 'feeds',
  );

  // Exported permission: create scheda_porto content.
  $permissions['create scheda_porto content'] = array(
    'name' => 'create scheda_porto content',
    'roles' => array(
      0 => 'redattore',
      1 => 'redattore capo',
    ),
    'module' => 'node',
  );

  // Exported permission: delete any scheda_porto content.
  $permissions['delete any scheda_porto content'] = array(
    'name' => 'delete any scheda_porto content',
    'roles' => array(
      0 => 'redattore capo',
    ),
    'module' => 'node',
  );

  // Exported permission: delete own scheda_porto content.
  $permissions['delete own scheda_porto content'] = array(
    'name' => 'delete own scheda_porto content',
    'roles' => array(
      0 => 'redattore',
      1 => 'redattore capo',
    ),
    'module' => 'node',
  );

  // Exported permission: edit any scheda_porto content.
  $permissions['edit any scheda_porto content'] = array(
    'name' => 'edit any scheda_porto content',
    'roles' => array(
      0 => 'redattore',
      1 => 'redattore capo',
    ),
    'module' => 'node',
  );

  // Exported permission: edit own scheda_porto content.
  $permissions['edit own scheda_porto content'] = array(
    'name' => 'edit own scheda_porto content',
    'roles' => array(
      0 => 'redattore',
      1 => 'redattore capo',
    ),
    'module' => 'node',
  );

  // Exported permission: enter scheda_porto revision log entry.
  $permissions['enter scheda_porto revision log entry'] = array(
    'name' => 'enter scheda_porto revision log entry',
    'roles' => array(),
    'module' => 'override_node_options',
  );

  // Exported permission: import scheda_porto feeds.
  $permissions['import scheda_porto feeds'] = array(
    'name' => 'import scheda_porto feeds',
    'roles' => array(),
    'module' => 'feeds',
  );

  // Exported permission: import scheda_porto_liguria feeds.
  $permissions['import scheda_porto_liguria feeds'] = array(
    'name' => 'import scheda_porto_liguria feeds',
    'roles' => array(),
    'module' => 'feeds',
  );

  // Exported permission: override scheda_porto authored by option.
  $permissions['override scheda_porto authored by option'] = array(
    'name' => 'override scheda_porto authored by option',
    'roles' => array(),
    'module' => 'override_node_options',
  );

  // Exported permission: override scheda_porto authored on option.
  $permissions['override scheda_porto authored on option'] = array(
    'name' => 'override scheda_porto authored on option',
    'roles' => array(),
    'module' => 'override_node_options',
  );

  // Exported permission: override scheda_porto promote to front page option.
  $permissions['override scheda_porto promote to front page option'] = array(
    'name' => 'override scheda_porto promote to front page option',
    'roles' => array(),
    'module' => 'override_node_options',
  );

  // Exported permission: override scheda_porto published option.
  $permissions['override scheda_porto published option'] = array(
    'name' => 'override scheda_porto published option',
    'roles' => array(
      0 => 'redattore',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: override scheda_porto revision option.
  $permissions['override scheda_porto revision option'] = array(
    'name' => 'override scheda_porto revision option',
    'roles' => array(),
    'module' => 'override_node_options',
  );

  // Exported permission: override scheda_porto sticky option.
  $permissions['override scheda_porto sticky option'] = array(
    'name' => 'override scheda_porto sticky option',
    'roles' => array(),
    'module' => 'override_node_options',
  );

  // Exported permission: unlock scheda_porto feeds.
  $permissions['unlock scheda_porto feeds'] = array(
    'name' => 'unlock scheda_porto feeds',
    'roles' => array(),
    'module' => 'feeds',
  );

  // Exported permission: unlock scheda_porto_liguria feeds.
  $permissions['unlock scheda_porto_liguria feeds'] = array(
    'name' => 'unlock scheda_porto_liguria feeds',
    'roles' => array(),
    'module' => 'feeds',
  );

  // Exported permission: view any unpublished scheda_porto content.
  $permissions['view any unpublished scheda_porto content'] = array(
    'name' => 'view any unpublished scheda_porto content',
    'roles' => array(
      0 => 'redattore',
      1 => 'services',
    ),
    'module' => 'view_unpublished',
  );

  return $permissions;
}
