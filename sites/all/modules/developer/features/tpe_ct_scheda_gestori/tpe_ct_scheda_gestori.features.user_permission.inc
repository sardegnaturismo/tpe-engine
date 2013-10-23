<?php
/**
 * @file
 * tpe_ct_scheda_gestori.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function tpe_ct_scheda_gestori_user_default_permissions() {
  $permissions = array();

  // Exported permission: clear scheda_gestore feeds.
  $permissions['clear scheda_gestore feeds'] = array(
    'name' => 'clear scheda_gestore feeds',
    'roles' => array(),
    'module' => 'feeds',
  );

  // Exported permission: create scheda_gestore content.
  $permissions['create scheda_gestore content'] = array(
    'name' => 'create scheda_gestore content',
    'roles' => array(
      0 => 'redattore',
      1 => 'redattore capo',
    ),
    'module' => 'node',
  );

  // Exported permission: delete any scheda_gestore content.
  $permissions['delete any scheda_gestore content'] = array(
    'name' => 'delete any scheda_gestore content',
    'roles' => array(
      0 => 'redattore capo',
    ),
    'module' => 'node',
  );

  // Exported permission: delete own scheda_gestore content.
  $permissions['delete own scheda_gestore content'] = array(
    'name' => 'delete own scheda_gestore content',
    'roles' => array(
      0 => 'redattore',
      1 => 'redattore capo',
    ),
    'module' => 'node',
  );

  // Exported permission: edit any scheda_gestore content.
  $permissions['edit any scheda_gestore content'] = array(
    'name' => 'edit any scheda_gestore content',
    'roles' => array(
      0 => 'redattore',
      1 => 'redattore capo',
    ),
    'module' => 'node',
  );

  // Exported permission: edit own scheda_gestore content.
  $permissions['edit own scheda_gestore content'] = array(
    'name' => 'edit own scheda_gestore content',
    'roles' => array(
      0 => 'redattore',
      1 => 'redattore capo',
    ),
    'module' => 'node',
  );

  // Exported permission: enter scheda_gestore revision log entry.
  $permissions['enter scheda_gestore revision log entry'] = array(
    'name' => 'enter scheda_gestore revision log entry',
    'roles' => array(),
    'module' => 'override_node_options',
  );

  // Exported permission: import scheda_gestore feeds.
  $permissions['import scheda_gestore feeds'] = array(
    'name' => 'import scheda_gestore feeds',
    'roles' => array(),
    'module' => 'feeds',
  );

  // Exported permission: override scheda_gestore authored by option.
  $permissions['override scheda_gestore authored by option'] = array(
    'name' => 'override scheda_gestore authored by option',
    'roles' => array(),
    'module' => 'override_node_options',
  );

  // Exported permission: override scheda_gestore authored on option.
  $permissions['override scheda_gestore authored on option'] = array(
    'name' => 'override scheda_gestore authored on option',
    'roles' => array(),
    'module' => 'override_node_options',
  );

  // Exported permission: override scheda_gestore promote to front page option.
  $permissions['override scheda_gestore promote to front page option'] = array(
    'name' => 'override scheda_gestore promote to front page option',
    'roles' => array(),
    'module' => 'override_node_options',
  );

  // Exported permission: override scheda_gestore published option.
  $permissions['override scheda_gestore published option'] = array(
    'name' => 'override scheda_gestore published option',
    'roles' => array(
      0 => 'redattore',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: override scheda_gestore revision option.
  $permissions['override scheda_gestore revision option'] = array(
    'name' => 'override scheda_gestore revision option',
    'roles' => array(),
    'module' => 'override_node_options',
  );

  // Exported permission: override scheda_gestore sticky option.
  $permissions['override scheda_gestore sticky option'] = array(
    'name' => 'override scheda_gestore sticky option',
    'roles' => array(),
    'module' => 'override_node_options',
  );

  // Exported permission: unlock scheda_gestore feeds.
  $permissions['unlock scheda_gestore feeds'] = array(
    'name' => 'unlock scheda_gestore feeds',
    'roles' => array(),
    'module' => 'feeds',
  );

  // Exported permission: view any unpublished scheda_gestore content.
  $permissions['view any unpublished scheda_gestore content'] = array(
    'name' => 'view any unpublished scheda_gestore content',
    'roles' => array(
      0 => 'redattore',
      1 => 'services',
    ),
    'module' => 'view_unpublished',
  );

  return $permissions;
}
