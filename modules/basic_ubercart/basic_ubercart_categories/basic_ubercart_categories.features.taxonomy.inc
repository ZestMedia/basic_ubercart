<?php
/**
 * @file
 * basic_ubercart_categories.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function basic_ubercart_categories_taxonomy_default_vocabularies() {
  return array(
    'categories' => array(
      'name' => 'Categories',
      'machine_name' => 'categories',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
  );
}
