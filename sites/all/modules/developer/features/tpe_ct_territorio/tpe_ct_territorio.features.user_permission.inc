<?php
/**
 * @file
 * tpe_ct_territorio.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function tpe_ct_territorio_user_default_permissions() {
  $permissions = array();

  // Exported permission: clear scheda_territorio feeds.
  $permissions['clear scheda_territorio feeds'] = array(
    'name' => 'clear scheda_territorio feeds',
    'roles' => array(),
    'module' => 'feeds',
  );

  // Exported permission: create scheda_territorio content.
  $permissions['create scheda_territorio content'] = array(
    'name' => 'create scheda_territorio content',
    'roles' => array(
      0 => 'redattore',
      1 => 'redattore capo',
    ),
    'module' => 'node',
  );

  // Exported permission: delete any scheda_territorio content.
  $permissions['delete any scheda_territorio content'] = array(
    'name' => 'delete any scheda_territorio content',
    'roles' => array(
      0 => 'redattore capo',
    ),
    'module' => 'node',
  );

  // Exported permission: delete own scheda_territorio content.
  $permissions['delete own scheda_territorio content'] = array(
    'name' => 'delete own scheda_territorio content',
    'roles' => array(
      0 => 'redattore',
      1 => 'redattore capo',
    ),
    'module' => 'node',
  );

  // Exported permission: edit any scheda_territorio content.
  $permissions['edit any scheda_territorio content'] = array(
    'name' => 'edit any scheda_territorio content',
    'roles' => array(
      0 => 'redattore',
      1 => 'redattore capo',
    ),
    'module' => 'node',
  );

  // Exported permission: edit own scheda_territorio content.
  $permissions['edit own scheda_territorio content'] = array(
    'name' => 'edit own scheda_territorio content',
    'roles' => array(
      0 => 'redattore',
      1 => 'redattore capo',
    ),
    'module' => 'node',
  );

  // Exported permission: enter scheda_territorio revision log entry.
  $permissions['enter scheda_territorio revision log entry'] = array(
    'name' => 'enter scheda_territorio revision log entry',
    'roles' => array(),
    'module' => 'override_node_options',
  );

  // Exported permission: import scheda_territorio feeds.
  $permissions['import scheda_territorio feeds'] = array(
    'name' => 'import scheda_territorio feeds',
    'roles' => array(),
    'module' => 'feeds',
  );

  // Exported permission: override scheda_territorio authored by option.
  $permissions['override scheda_territorio authored by option'] = array(
    'name' => 'override scheda_territorio authored by option',
    'roles' => array(),
    'module' => 'override_node_options',
  );

  // Exported permission: override scheda_territorio authored on option.
  $permissions['override scheda_territorio authored on option'] = array(
    'name' => 'override scheda_territorio authored on option',
    'roles' => array(),
    'module' => 'override_node_options',
  );

  // Exported permission: override scheda_territorio promote to front page option.
  $permissions['override scheda_territorio promote to front page option'] = array(
    'name' => 'override scheda_territorio promote to front page option',
    'roles' => array(),
    'module' => 'override_node_options',
  );

  // Exported permission: override scheda_territorio published option.
  $permissions['override scheda_territorio published option'] = array(
    'name' => 'override scheda_territorio published option',
    'roles' => array(
      0 => 'redattore',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: override scheda_territorio revision option.
  $permissions['override scheda_territorio revision option'] = array(
    'name' => 'override scheda_territorio revision option',
    'roles' => array(),
    'module' => 'override_node_options',
  );

  // Exported permission: override scheda_territorio sticky option.
  $permissions['override scheda_territorio sticky option'] = array(
    'name' => 'override scheda_territorio sticky option',
    'roles' => array(),
    'module' => 'override_node_options',
  );

  // Exported permission: unlock scheda_territorio feeds.
  $permissions['unlock scheda_territorio feeds'] = array(
    'name' => 'unlock scheda_territorio feeds',
    'roles' => array(),
    'module' => 'feeds',
  );

  // Exported permission: view any unpublished scheda_territorio content.
  $permissions['view any unpublished scheda_territorio content'] = array(
    'name' => 'view any unpublished scheda_territorio content',
    'roles' => array(
      0 => 'redattore',
      1 => 'services',
    ),
    'module' => 'view_unpublished',
  );

  return $permissions;
}
