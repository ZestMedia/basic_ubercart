<?php
/**
 * @file
 * basic_ubercart_main.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function basic_ubercart_main_user_default_roles() {
  $roles = array();

  // Exported role: owner.
  $roles['owner'] = array(
    'name' => 'owner',
    'weight' => 2,
  );

  return $roles;
}
