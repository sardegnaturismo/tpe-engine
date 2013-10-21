<?php
/**
 * @file
 * tpe_shared.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function tpe_shared_user_default_roles() {
  $roles = array();

  // Exported role: redattore.
  $roles['redattore'] = array(
    'name' => 'redattore',
    'weight' => '2',
  );

  return $roles;
}
