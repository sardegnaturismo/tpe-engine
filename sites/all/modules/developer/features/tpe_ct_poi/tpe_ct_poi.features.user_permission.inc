<?php
/**
 * @file
 * tpe_ct_poi.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function tpe_ct_poi_user_default_permissions() {
  $permissions = array();

  // Exported permission: create poi content.
  $permissions['create poi content'] = array(
    'name' => 'create poi content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: delete any poi content.
  $permissions['delete any poi content'] = array(
    'name' => 'delete any poi content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: delete own poi content.
  $permissions['delete own poi content'] = array(
    'name' => 'delete own poi content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: edit any poi content.
  $permissions['edit any poi content'] = array(
    'name' => 'edit any poi content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: edit own poi content.
  $permissions['edit own poi content'] = array(
    'name' => 'edit own poi content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: enter poi revision log entry.
  $permissions['enter poi revision log entry'] = array(
    'name' => 'enter poi revision log entry',
    'roles' => array(),
    'module' => 'override_node_options',
  );

  // Exported permission: override poi authored by option.
  $permissions['override poi authored by option'] = array(
    'name' => 'override poi authored by option',
    'roles' => array(),
    'module' => 'override_node_options',
  );

  // Exported permission: override poi authored on option.
  $permissions['override poi authored on option'] = array(
    'name' => 'override poi authored on option',
    'roles' => array(),
    'module' => 'override_node_options',
  );

  // Exported permission: override poi promote to front page option.
  $permissions['override poi promote to front page option'] = array(
    'name' => 'override poi promote to front page option',
    'roles' => array(),
    'module' => 'override_node_options',
  );

  // Exported permission: override poi published option.
  $permissions['override poi published option'] = array(
    'name' => 'override poi published option',
    'roles' => array(),
    'module' => 'override_node_options',
  );

  // Exported permission: override poi revision option.
  $permissions['override poi revision option'] = array(
    'name' => 'override poi revision option',
    'roles' => array(),
    'module' => 'override_node_options',
  );

  // Exported permission: override poi sticky option.
  $permissions['override poi sticky option'] = array(
    'name' => 'override poi sticky option',
    'roles' => array(),
    'module' => 'override_node_options',
  );

  // Exported permission: view any unpublished poi content.
  $permissions['view any unpublished poi content'] = array(
    'name' => 'view any unpublished poi content',
    'roles' => array(
      0 => 'services',
    ),
    'module' => 'view_unpublished',
  );

  return $permissions;
}
