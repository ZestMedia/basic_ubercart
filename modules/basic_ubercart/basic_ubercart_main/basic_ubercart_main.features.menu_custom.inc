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

  // Exported menu: menu-catalog.
  $menus['menu-catalog'] = array(
    'menu_name' => 'menu-catalog',
    'title' => 'Catalog',
    'description' => 'Product catalog',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Catalog');
  t('Product catalog');


  return $menus;
}
