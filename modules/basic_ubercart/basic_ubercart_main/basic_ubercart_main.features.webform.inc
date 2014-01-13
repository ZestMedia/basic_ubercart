<?php
/**
 * @file
 * basic_ubercart_main.features.webform.inc
 */

/**
 * Implements hook_webform_defaults().
 */
function basic_ubercart_main_webform_defaults() {
$webforms = array();
  $webforms['request_a_quote'] = array(
  'uid' => 1,
  'title' => 'Enquire about this product',
  'log' => '',
  'status' => 1,
  'comment' => 2,
  'promote' => 1,
  'sticky' => 0,
  'vuuid' => 'f637b4d1-72ec-4b36-95e7-6e61dd8d2624',
  'type' => 'webform',
  'language' => 'und',
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '06155025-e656-4a2c-a45c-afdde3ee5264',
  'revision_uid' => 1,
  'body' => array(),
  'webform' => array(
    'confirmation' => '',
    'confirmation_format' => NULL,
    'redirect_url' => '<confirmation>',
    'status' => 1,
    'block' => 0,
    'teaser' => 0,
    'allow_draft' => 0,
    'auto_save' => 0,
    'submit_notice' => 1,
    'submit_text' => '',
    'submit_limit' => -1,
    'submit_interval' => -1,
    'total_submit_limit' => -1,
    'total_submit_interval' => -1,
    'machine_name' => 'request_a_quote',
    'record_exists' => TRUE,
    'roles' => array(
      0 => 1,
      1 => 2,
    ),
    'emails' => array(),
    'components' => array(
      'request_a_quote__email' => array(
        'form_key' => 'email',
        'name' => 'Email',
        'type' => 'email',
        'value' => '%useremail',
        'extra' => array(
          'title_display' => 'before',
          'private' => 0,
          'disabled' => 0,
          'unique' => 0,
          'conditional_operator' => '=',
          'width' => '',
          'description' => '',
          'attributes' => array(),
          'conditional_component' => '',
          'conditional_values' => '',
        ),
        'mandatory' => 1,
        'weight' => 0,
        'machine_name' => 'request_a_quote__email',
        'page_num' => 1,
      ),
      'request_a_quote__phone' => array(
        'form_key' => 'phone',
        'name' => 'Phone',
        'type' => 'textfield',
        'value' => '',
        'extra' => array(
          'title_display' => 'before',
          'private' => 0,
          'disabled' => 0,
          'unique' => 0,
          'conditional_operator' => '=',
          'width' => '',
          'maxlength' => '',
          'field_prefix' => '',
          'field_suffix' => '',
          'description' => '',
          'attributes' => array(),
          'conditional_component' => '',
          'conditional_values' => '',
        ),
        'mandatory' => 0,
        'weight' => 1,
        'machine_name' => 'request_a_quote__phone',
        'page_num' => 1,
      ),
    ),
  ),
  'cid' => 0,
  'last_comment_name' => NULL,
  'last_comment_uid' => 1,
  'comment_count' => 0,
  'name' => 'admin',
  'picture' => 0,
  'data' => 'b:0;',
);
return $webforms;
}
