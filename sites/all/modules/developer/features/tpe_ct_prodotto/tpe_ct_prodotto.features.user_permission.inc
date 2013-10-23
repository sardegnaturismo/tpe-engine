<?php
/**
 * @file
 * tpe_ct_prodotto.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function tpe_ct_prodotto_user_default_permissions() {
  $permissions = array();

  // Exported permission: clear scheda_prodotto feeds.
  $permissions['clear scheda_prodotto feeds'] = array(
    'name' => 'clear scheda_prodotto feeds',
    'roles' => array(),
    'module' => 'feeds',
  );

  // Exported permission: create scheda_prodotto content.
  $permissions['create scheda_prodotto content'] = array(
    'name' => 'create scheda_prodotto content',
    'roles' => array(
      0 => 'redattore',
      1 => 'redattore capo',
    ),
    'module' => 'node',
  );

  // Exported permission: delete any scheda_prodotto content.
  $permissions['delete any scheda_prodotto content'] = array(
    'name' => 'delete any scheda_prodotto content',
    'roles' => array(
      0 => 'redattore capo',
    ),
    'module' => 'node',
  );

  // Exported permission: delete own scheda_prodotto content.
  $permissions['delete own scheda_prodotto content'] = array(
    'name' => 'delete own scheda_prodotto content',
    'roles' => array(
      0 => 'redattore',
      1 => 'redattore capo',
    ),
    'module' => 'node',
  );

  // Exported permission: edit any scheda_prodotto content.
  $permissions['edit any scheda_prodotto content'] = array(
    'name' => 'edit any scheda_prodotto content',
    'roles' => array(
      0 => 'redattore',
      1 => 'redattore capo',
    ),
    'module' => 'node',
  );

  // Exported permission: edit own scheda_prodotto content.
  $permissions['edit own scheda_prodotto content'] = array(
    'name' => 'edit own scheda_prodotto content',
    'roles' => array(
      0 => 'redattore',
      1 => 'redattore capo',
    ),
    'module' => 'node',
  );

  // Exported permission: enter scheda_prodotto revision log entry.
  $permissions['enter scheda_prodotto revision log entry'] = array(
    'name' => 'enter scheda_prodotto revision log entry',
    'roles' => array(),
    'module' => 'override_node_options',
  );

  // Exported permission: import scheda_prodotto feeds.
  $permissions['import scheda_prodotto feeds'] = array(
    'name' => 'import scheda_prodotto feeds',
    'roles' => array(),
    'module' => 'feeds',
  );

  // Exported permission: override scheda_prodotto authored by option.
  $permissions['override scheda_prodotto authored by option'] = array(
    'name' => 'override scheda_prodotto authored by option',
    'roles' => array(),
    'module' => 'override_node_options',
  );

  // Exported permission: override scheda_prodotto authored on option.
  $permissions['override scheda_prodotto authored on option'] = array(
    'name' => 'override scheda_prodotto authored on option',
    'roles' => array(),
    'module' => 'override_node_options',
  );

  // Exported permission: override scheda_prodotto promote to front page option.
  $permissions['override scheda_prodotto promote to front page option'] = array(
    'name' => 'override scheda_prodotto promote to front page option',
    'roles' => array(),
    'module' => 'override_node_options',
  );

  // Exported permission: override scheda_prodotto published option.
  $permissions['override scheda_prodotto published option'] = array(
    'name' => 'override scheda_prodotto published option',
    'roles' => array(
      0 => 'redattore',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: override scheda_prodotto revision option.
  $permissions['override scheda_prodotto revision option'] = array(
    'name' => 'override scheda_prodotto revision option',
    'roles' => array(),
    'module' => 'override_node_options',
  );

  // Exported permission: override scheda_prodotto sticky option.
  $permissions['override scheda_prodotto sticky option'] = array(
    'name' => 'override scheda_prodotto sticky option',
    'roles' => array(),
    'module' => 'override_node_options',
  );

  // Exported permission: unlock scheda_prodotto feeds.
  $permissions['unlock scheda_prodotto feeds'] = array(
    'name' => 'unlock scheda_prodotto feeds',
    'roles' => array(),
    'module' => 'feeds',
  );

  // Exported permission: view any unpublished scheda_prodotto content.
  $permissions['view any unpublished scheda_prodotto content'] = array(
    'name' => 'view any unpublished scheda_prodotto content',
    'roles' => array(
      0 => 'redattore',
      1 => 'services',
    ),
    'module' => 'view_unpublished',
  );

  return $permissions;
}
