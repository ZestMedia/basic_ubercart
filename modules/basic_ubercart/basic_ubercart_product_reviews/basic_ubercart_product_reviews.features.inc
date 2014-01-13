<?php
/**
 * @file
 * basic_ubercart_product_reviews.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function basic_ubercart_product_reviews_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}
