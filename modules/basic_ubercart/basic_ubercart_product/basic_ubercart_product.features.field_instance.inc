<?php
/**
 * @file
 * basic_ubercart_product.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function basic_ubercart_product_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'node-product-field_product_specs'
  $field_instances['node-product-field_product_specs'] = array(
    'bundle' => 'product',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'double_field',
        'settings' => array(
          'first' => array(
            'format' => '_none',
            'hidden' => 0,
            'prefix' => '',
            'suffix' => ':&nbsp;',
          ),
          'second' => array(
            'format' => '_none',
            'hidden' => 0,
            'prefix' => '',
            'suffix' => '',
          ),
          'style' => 'inline',
        ),
        'type' => 'double_field_unformatted_list',
        'weight' => 7,
      ),
      'print' => array(
        'label' => 'above',
        'module' => 'double_field',
        'settings' => array(
          'first' => array(
            'format' => '_none',
            'hidden' => 0,
            'prefix' => '',
            'suffix' => ':&nbsp;',
          ),
          'second' => array(
            'format' => '_none',
            'hidden' => 0,
            'prefix' => '',
            'suffix' => '',
          ),
          'style' => 'inline',
        ),
        'type' => 'double_field_unformatted_list',
        'weight' => 4,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_product_specs',
    'label' => 'Specifications',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'double_field',
      'settings' => array(
        'first' => array(
          'general' => array(
            'prefix' => '',
            'required' => 1,
            'suffix' => '',
          ),
          'textfield' => array(
            'placeholder' => 'Spec name',
            'size' => 10,
          ),
        ),
        'inline' => 0,
        'second' => array(
          'general' => array(
            'prefix' => '',
            'required' => 1,
            'suffix' => '',
          ),
          'textarea' => array(
            'cols' => 10,
            'placeholder' => 'Spec data',
            'resizable' => 1,
            'rows' => 5,
          ),
        ),
      ),
      'type' => 'textfield_&_textarea',
      'weight' => 35,
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
          'expose' => 1,
          'style' => 'dual',
          'text' => 'dual',
          'widget' => array(
            'fivestar_widget' => 'sites/all/modules/fivestar/widgets/basic/basic.css',
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
      'weight' => 34,
    ),
  );

  // Exported field_instance: 'node-product-field_resources'
  $field_instances['node-product-field_resources'] = array(
    'bundle' => 'product',
    'deleted' => 0,
    'description' => 'Attach additional files about this product for users to download.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'file',
        'settings' => array(),
        'type' => 'file_default',
        'weight' => 8,
      ),
      'print' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 12,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_resources',
    'label' => 'Resources',
    'required' => 0,
    'settings' => array(
      'description_field' => 0,
      'file_directory' => '',
      'file_extensions' => 'txt pdf doc docx csv xls',
      'max_filesize' => '15 MB',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'file',
      'settings' => array(
        'progress_indicator' => 'throbber',
      ),
      'type' => 'file_generic',
      'weight' => 33,
    ),
  );

  // Exported field_instance: 'node-product-uc_product_image'
  $field_instances['node-product-uc_product_image'] = array(
    'bundle' => 'product',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'galleryformatter',
        'settings' => array(
          'link_to_full' => 1,
          'link_to_full_style' => 'galleryformatter_slide',
          'linking_method' => 'show_full_link',
          'modal' => 'colorbox',
          'slide_style' => 'galleryformatter_slide',
          'style' => 'Greenarrows',
          'thumb_style' => 'galleryformatter_thumb',
        ),
        'type' => 'galleryformatter_default',
        'weight' => 3,
      ),
      'full' => array(
        'label' => 'hidden',
        'module' => 'uc_product',
        'settings' => array(),
        'type' => 'uc_product_image',
        'weight' => 0,
      ),
      'print' => array(
        'label' => 'hidden',
        'module' => 'image',
        'settings' => array(
          'image_link' => '',
          'image_style' => 'galleryformatter_slide',
        ),
        'type' => 'image',
        'weight' => 5,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'module' => 'uc_product',
        'settings' => array(),
        'type' => 'uc_product_image',
        'weight' => 1,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'uc_product_image',
    'label' => 'Image',
    'required' => FALSE,
    'settings' => array(
      'alt_field' => 0,
      'default_image' => 0,
      'file_directory' => '',
      'file_extensions' => 'png gif jpg jpeg',
      'max_filesize' => '',
      'max_resolution' => '',
      'min_resolution' => '',
      'title_field' => 0,
      'user_register_form' => FALSE,
    ),
    'weight' => -2,
    'widget' => array(
      'module' => 'image',
      'settings' => array(
        'preview_image_style' => 'thumbnail',
        'progress_indicator' => 'throbber',
      ),
      'type' => 'image_image',
      'weight' => 32,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Attach additional files about this product for users to download.');
  t('Image');
  t('Please rate this product.');
  t('Rating');
  t('Resources');
  t('Specifications');

  return $field_instances;
}
