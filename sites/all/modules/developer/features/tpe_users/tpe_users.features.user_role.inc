<?php
/**
 * @file
 * tpe_users.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function tpe_users_user_default_roles() {
  $roles = array();

  // Exported role: redattore capo.
  $roles['redattore capo'] = array(
    'name' => 'redattore capo',
    'weight' => '3',
  );

  // Exported role: services.
  $roles['services'] = array(
    'name' => 'services',
    'weight' => '5',
  );

  // Exported role: toscani.
  $roles['toscani'] = array(
    'name' => 'toscani',
    'weight' => '4',
  );

  return $roles;
}
