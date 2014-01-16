<?php
/**
 * @file
 * basic_ubercart_main.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function basic_ubercart_main_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function basic_ubercart_main_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function basic_ubercart_main_node_info() {
  $items = array(
    'page' => array(
      'name' => t('Basic Page'),
      'base' => 'node_content',
      'description' => t('A basic page.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'webform' => array(
      'name' => t('Webform'),
      'base' => 'node_content',
      'description' => t('Create a new form or questionnaire accessible to users. Submission results and statistics are recorded and accessible to privileged users.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
