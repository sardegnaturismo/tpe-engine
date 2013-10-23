<?php
/**
 * @file
 * tpe_ct_itinerario.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function tpe_ct_itinerario_user_default_permissions() {
  $permissions = array();

  // Exported permission: clear scheda_itinerario feeds.
  $permissions['clear scheda_itinerario feeds'] = array(
    'name' => 'clear scheda_itinerario feeds',
    'roles' => array(),
    'module' => 'feeds',
  );

  // Exported permission: create scheda_itinerario content.
  $permissions['create scheda_itinerario content'] = array(
    'name' => 'create scheda_itinerario content',
    'roles' => array(
      0 => 'redattore',
      1 => 'redattore capo',
    ),
    'module' => 'node',
  );

  // Exported permission: delete any scheda_itinerario content.
  $permissions['delete any scheda_itinerario content'] = array(
    'name' => 'delete any scheda_itinerario content',
    'roles' => array(
      0 => 'redattore capo',
    ),
    'module' => 'node',
  );

  // Exported permission: delete own scheda_itinerario content.
  $permissions['delete own scheda_itinerario content'] = array(
    'name' => 'delete own scheda_itinerario content',
    'roles' => array(
      0 => 'redattore',
      1 => 'redattore capo',
    ),
    'module' => 'node',
  );

  // Exported permission: edit any scheda_itinerario content.
  $permissions['edit any scheda_itinerario content'] = array(
    'name' => 'edit any scheda_itinerario content',
    'roles' => array(
      0 => 'redattore',
      1 => 'redattore capo',
    ),
    'module' => 'node',
  );

  // Exported permission: edit own scheda_itinerario content.
  $permissions['edit own scheda_itinerario content'] = array(
    'name' => 'edit own scheda_itinerario content',
    'roles' => array(
      0 => 'redattore',
      1 => 'redattore capo',
    ),
    'module' => 'node',
  );

  // Exported permission: enter scheda_itinerario revision log entry.
  $permissions['enter scheda_itinerario revision log entry'] = array(
    'name' => 'enter scheda_itinerario revision log entry',
    'roles' => array(),
    'module' => 'override_node_options',
  );

  // Exported permission: import scheda_itinerario feeds.
  $permissions['import scheda_itinerario feeds'] = array(
    'name' => 'import scheda_itinerario feeds',
    'roles' => array(),
    'module' => 'feeds',
  );

  // Exported permission: override scheda_itinerario authored by option.
  $permissions['override scheda_itinerario authored by option'] = array(
    'name' => 'override scheda_itinerario authored by option',
    'roles' => array(),
    'module' => 'override_node_options',
  );

  // Exported permission: override scheda_itinerario authored on option.
  $permissions['override scheda_itinerario authored on option'] = array(
    'name' => 'override scheda_itinerario authored on option',
    'roles' => array(),
    'module' => 'override_node_options',
  );

  // Exported permission: override scheda_itinerario promote to front page option.
  $permissions['override scheda_itinerario promote to front page option'] = array(
    'name' => 'override scheda_itinerario promote to front page option',
    'roles' => array(),
    'module' => 'override_node_options',
  );

  // Exported permission: override scheda_itinerario published option.
  $permissions['override scheda_itinerario published option'] = array(
    'name' => 'override scheda_itinerario published option',
    'roles' => array(
      0 => 'redattore',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: override scheda_itinerario revision option.
  $permissions['override scheda_itinerario revision option'] = array(
    'name' => 'override scheda_itinerario revision option',
    'roles' => array(),
    'module' => 'override_node_options',
  );

  // Exported permission: override scheda_itinerario sticky option.
  $permissions['override scheda_itinerario sticky option'] = array(
    'name' => 'override scheda_itinerario sticky option',
    'roles' => array(),
    'module' => 'override_node_options',
  );

  // Exported permission: unlock scheda_itinerario feeds.
  $permissions['unlock scheda_itinerario feeds'] = array(
    'name' => 'unlock scheda_itinerario feeds',
    'roles' => array(),
    'module' => 'feeds',
  );

  // Exported permission: view any unpublished scheda_itinerario content.
  $permissions['view any unpublished scheda_itinerario content'] = array(
    'name' => 'view any unpublished scheda_itinerario content',
    'roles' => array(
      0 => 'redattore',
      1 => 'services',
    ),
    'module' => 'view_unpublished',
  );

  return $permissions;
}
