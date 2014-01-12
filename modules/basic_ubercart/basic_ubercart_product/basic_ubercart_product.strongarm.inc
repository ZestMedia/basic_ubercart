<?php
/**
 * @file
 * basic_ubercart_product.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function basic_ubercart_product_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'uc_product_add_to_cart_qty';
  $strongarm->value = 1;
  $export['uc_product_add_to_cart_qty'] = $strongarm;

  return $export;
}
