<?php
/**
 * @file
 * basic_ubercart_main.features.menu_custom.inc
 */

/**
 * Implements hook_menu_default_menu_custom().
 */
function basic_ubercart_main_menu_default_menu_custom() {
  $menus = array();

  // Exported menu: menu-products.
  $menus['menu-products'] = array(
    'menu_name' => 'menu-products',
    'title' => 'Products',
    'description' => 'A menu of product categories.',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('A menu of product categories.');
  t('Products');


  return $menus;
}
