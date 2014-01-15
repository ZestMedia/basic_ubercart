<?php
/**
 * @file
 * basic_ubercart_product.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function basic_ubercart_product_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'use text format filtered_html'.
  $permissions['use text format filtered_html'] = array(
    'name' => 'use text format filtered_html',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'filter',
  );

  return $permissions;
}
