<?php
/**
 * @file
 * tpe_services.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function tpe_services_user_default_permissions() {
  $permissions = array();

  // Exported permission: administer services.
  $permissions['administer services'] = array(
    'name' => 'administer services',
    'roles' => array(
      0 => 'services',
    ),
    'module' => 'services',
  );

  // Exported permission: get a system variable.
  $permissions['get a system variable'] = array(
    'name' => 'get a system variable',
    'roles' => array(
      0 => 'services',
    ),
    'module' => 'services',
  );

  // Exported permission: get any binary files.
  $permissions['get any binary files'] = array(
    'name' => 'get any binary files',
    'roles' => array(
      0 => 'services',
    ),
    'module' => 'services',
  );

  // Exported permission: get own binary files.
  $permissions['get own binary files'] = array(
    'name' => 'get own binary files',
    'roles' => array(
      0 => 'services',
    ),
    'module' => 'services',
  );

  // Exported permission: perform unlimited index queries.
  $permissions['perform unlimited index queries'] = array(
    'name' => 'perform unlimited index queries',
    'roles' => array(
      0 => 'services',
    ),
    'module' => 'services',
  );

  // Exported permission: save file information.
  $permissions['save file information'] = array(
    'name' => 'save file information',
    'roles' => array(
      0 => 'services',
    ),
    'module' => 'services',
  );

  // Exported permission: set a system variable.
  $permissions['set a system variable'] = array(
    'name' => 'set a system variable',
    'roles' => array(
      0 => 'services',
    ),
    'module' => 'services',
  );

  return $permissions;
}
