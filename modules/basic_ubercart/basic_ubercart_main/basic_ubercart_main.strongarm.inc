<?php
/**
 * @file
 * basic_ubercart_main.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function basic_ubercart_main_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_limit_webform';
  $strongarm->value = '0';
  $export['comment_limit_webform'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'uc_catalog_breadcrumb';
  $strongarm->value = 1;
  $export['uc_catalog_breadcrumb'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'uc_catalog_display';
  $strongarm->value = 'catalog_grid';
  $export['uc_catalog_display'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'uc_catalog_vid';
  $strongarm->value = '1';
  $export['uc_catalog_vid'] = $strongarm;

  return $export;
}
