<?php
/**
 * @file
 * basic_ubercart_faqs.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function basic_ubercart_faqs_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function basic_ubercart_faqs_node_info() {
  $items = array(
    'faqs' => array(
      'name' => t('FAQs'),
      'base' => 'node_content',
      'description' => t('Frequently Asked Question'),
      'has_title' => '1',
      'title_label' => t('Question'),
      'help' => '',
    ),
  );
  return $items;
}
