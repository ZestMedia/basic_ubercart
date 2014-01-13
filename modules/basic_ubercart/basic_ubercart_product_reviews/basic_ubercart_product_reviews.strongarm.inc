<?php
/**
 * @file
 * basic_ubercart_product_reviews.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function basic_ubercart_product_reviews_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_limit_product';
  $strongarm->value = '1';
  $export['comment_limit_product'] = $strongarm;

  return $export;
}
