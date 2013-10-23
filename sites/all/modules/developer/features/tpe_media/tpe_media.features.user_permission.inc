<?php
/**
 * @file
 * tpe_media.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function tpe_media_user_default_permissions() {
  $permissions = array();

  // Exported permission: edit media.
  $permissions['edit media'] = array(
    'name' => 'edit media',
    'roles' => array(
      0 => 'redattore',
      1 => 'redattore capo',
    ),
    'module' => 'media',
  );

  // Exported permission: import media.
  $permissions['import media'] = array(
    'name' => 'import media',
    'roles' => array(
      0 => 'redattore',
      1 => 'redattore capo',
    ),
    'module' => 'media',
  );

  // Exported permission: view media.
  $permissions['view media'] = array(
    'name' => 'view media',
    'roles' => array(
      0 => 'anonymous user',
      1 => 'authenticated user',
      2 => 'redattore',
    ),
    'module' => 'media',
  );

  return $permissions;
}
