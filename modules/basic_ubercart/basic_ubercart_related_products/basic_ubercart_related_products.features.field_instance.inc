<?php
/**
 * @file
 * basic_ubercart_related_products.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function basic_ubercart_related_products_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'node-product-field_related_products'
  $field_instances['node-product-field_related_products'] = array(
    'bundle' => 'product',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Products selected here will show in the \'related products\' block on this products page.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'entityreference',
        'settings' => array(
          'link' => FALSE,
        ),
        'type' => 'entityreference_label',
        'weight' => 15,
      ),
      'print' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_related_products',
    'label' => 'Related Products',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'entityreference',
      'settings' => array(
        'match_operator' => 'CONTAINS',
        'path' => '',
        'size' => 60,
      ),
      'type' => 'entityreference_autocomplete',
      'weight' => 32,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Products selected here will show in the \'related products\' block on this products page.');
  t('Related Products');

  return $field_instances;
}
