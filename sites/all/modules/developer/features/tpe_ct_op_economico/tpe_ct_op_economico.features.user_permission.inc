<?php
/**
 * @file
 * tpe_ct_op_economico.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function tpe_ct_op_economico_user_default_permissions() {
  $permissions = array();

  // Exported permission: clear operatori_economici_2 feeds.
  $permissions['clear operatori_economici_2 feeds'] = array(
    'name' => 'clear operatori_economici_2 feeds',
    'roles' => array(),
    'module' => 'feeds',
  );

  // Exported permission: clear scheda_operatori_economici feeds.
  $permissions['clear scheda_operatori_economici feeds'] = array(
    'name' => 'clear scheda_operatori_economici feeds',
    'roles' => array(),
    'module' => 'feeds',
  );

  // Exported permission: create scheda_operatori_economici content.
  $permissions['create scheda_operatori_economici content'] = array(
    'name' => 'create scheda_operatori_economici content',
    'roles' => array(
      0 => 'redattore',
      1 => 'redattore capo',
    ),
    'module' => 'node',
  );

  // Exported permission: delete any scheda_operatori_economici content.
  $permissions['delete any scheda_operatori_economici content'] = array(
    'name' => 'delete any scheda_operatori_economici content',
    'roles' => array(
      0 => 'redattore capo',
    ),
    'module' => 'node',
  );

  // Exported permission: delete own scheda_operatori_economici content.
  $permissions['delete own scheda_operatori_economici content'] = array(
    'name' => 'delete own scheda_operatori_economici content',
    'roles' => array(
      0 => 'redattore',
      1 => 'redattore capo',
    ),
    'module' => 'node',
  );

  // Exported permission: edit any scheda_operatori_economici content.
  $permissions['edit any scheda_operatori_economici content'] = array(
    'name' => 'edit any scheda_operatori_economici content',
    'roles' => array(
      0 => 'redattore',
      1 => 'redattore capo',
    ),
    'module' => 'node',
  );

  // Exported permission: edit own scheda_operatori_economici content.
  $permissions['edit own scheda_operatori_economici content'] = array(
    'name' => 'edit own scheda_operatori_economici content',
    'roles' => array(
      0 => 'redattore',
      1 => 'redattore capo',
    ),
    'module' => 'node',
  );

  // Exported permission: enter scheda_operatori_economici revision log entry.
  $permissions['enter scheda_operatori_economici revision log entry'] = array(
    'name' => 'enter scheda_operatori_economici revision log entry',
    'roles' => array(),
    'module' => 'override_node_options',
  );

  // Exported permission: import operatori_economici_2 feeds.
  $permissions['import operatori_economici_2 feeds'] = array(
    'name' => 'import operatori_economici_2 feeds',
    'roles' => array(),
    'module' => 'feeds',
  );

  // Exported permission: import scheda_operatori_economici feeds.
  $permissions['import scheda_operatori_economici feeds'] = array(
    'name' => 'import scheda_operatori_economici feeds',
    'roles' => array(),
    'module' => 'feeds',
  );

  // Exported permission: override scheda_operatori_economici authored by option.
  $permissions['override scheda_operatori_economici authored by option'] = array(
    'name' => 'override scheda_operatori_economici authored by option',
    'roles' => array(),
    'module' => 'override_node_options',
  );

  // Exported permission: override scheda_operatori_economici authored on option.
  $permissions['override scheda_operatori_economici authored on option'] = array(
    'name' => 'override scheda_operatori_economici authored on option',
    'roles' => array(),
    'module' => 'override_node_options',
  );

  // Exported permission: override scheda_operatori_economici promote to front page option.
  $permissions['override scheda_operatori_economici promote to front page option'] = array(
    'name' => 'override scheda_operatori_economici promote to front page option',
    'roles' => array(),
    'module' => 'override_node_options',
  );

  // Exported permission: override scheda_operatori_economici published option.
  $permissions['override scheda_operatori_economici published option'] = array(
    'name' => 'override scheda_operatori_economici published option',
    'roles' => array(
      0 => 'redattore',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: override scheda_operatori_economici revision option.
  $permissions['override scheda_operatori_economici revision option'] = array(
    'name' => 'override scheda_operatori_economici revision option',
    'roles' => array(),
    'module' => 'override_node_options',
  );

  // Exported permission: override scheda_operatori_economici sticky option.
  $permissions['override scheda_operatori_economici sticky option'] = array(
    'name' => 'override scheda_operatori_economici sticky option',
    'roles' => array(),
    'module' => 'override_node_options',
  );

  // Exported permission: unlock operatori_economici_2 feeds.
  $permissions['unlock operatori_economici_2 feeds'] = array(
    'name' => 'unlock operatori_economici_2 feeds',
    'roles' => array(),
    'module' => 'feeds',
  );

  // Exported permission: unlock scheda_operatori_economici feeds.
  $permissions['unlock scheda_operatori_economici feeds'] = array(
    'name' => 'unlock scheda_operatori_economici feeds',
    'roles' => array(),
    'module' => 'feeds',
  );

  // Exported permission: view any unpublished scheda_operatori_economici content.
  $permissions['view any unpublished scheda_operatori_economici content'] = array(
    'name' => 'view any unpublished scheda_operatori_economici content',
    'roles' => array(
      0 => 'redattore',
      1 => 'services',
    ),
    'module' => 'view_unpublished',
  );

  return $permissions;
}
