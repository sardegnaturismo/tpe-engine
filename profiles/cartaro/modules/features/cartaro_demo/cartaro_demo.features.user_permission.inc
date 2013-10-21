<?php
/**
 * @file
 * cartaro_demo.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function cartaro_demo_user_default_permissions() {
  $permissions = array();

  // Exported permission: access content
  $permissions['access content'] = array(
    'name' => 'access content',
    'roles' => array(
      0 => 'anonymous user',
    ),
    'module' => 'node',
  );

  return $permissions;
}
