<?php
/**
 * @file
 * basic_ubercart_product_reviews.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function basic_ubercart_product_reviews_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'comment-comment_node_product-field_rating'
  $field_instances['comment-comment_node_product-field_rating'] = array(
    'bundle' => 'comment_node_product',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'fivestar',
        'settings' => array(
          'expose' => TRUE,
          'style' => 'average',
          'text' => 'average',
          'widget' => array(
            'fivestar_widget' => NULL,
          ),
        ),
        'type' => 'fivestar_formatter_default',
        'weight' => 1,
      ),
    ),
    'entity_type' => 'comment',
    'field_name' => 'field_rating',
    'label' => 'Rating',
    'required' => 0,
    'settings' => array(
      'allow_clear' => 1,
      'stars' => 5,
      'target' => 'parent_node',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'fivestar',
      'settings' => array(
        'widget' => array(
          'fivestar_widget' => 'profiles/basic_ubercart/modules/contrib/fivestar/widgets/oxygen/oxygen.css',
        ),
      ),
      'type' => 'stars',
      'weight' => 2,
    ),
  );

  // Exported field_instance: 'node-product-field_rating'
  $field_instances['node-product-field_rating'] = array(
    'bundle' => 'product',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Please rate this product.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'fivestar',
        'settings' => array(
          'expose' => 0,
          'style' => 'average',
          'text' => 'average',
          'widget' => array(
            'fivestar_widget' => 'profiles/basic_ubercart/modules/contrib/fivestar/widgets/oxygen/oxygen.css',
          ),
        ),
        'type' => 'fivestar_formatter_default',
        'weight' => 9,
      ),
      'print' => array(
        'label' => 'inline',
        'module' => 'fivestar',
        'settings' => array(),
        'type' => 'fivestar_formatter_rating',
        'weight' => 6,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_rating',
    'label' => 'Rating',
    'required' => 0,
    'settings' => array(
      'allow_clear' => 1,
      'stars' => 5,
      'target' => 'none',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'fivestar',
      'settings' => array(),
      'type' => 'exposed',
      'weight' => 6,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Please rate this product.');
  t('Rating');

  return $field_instances;
}
