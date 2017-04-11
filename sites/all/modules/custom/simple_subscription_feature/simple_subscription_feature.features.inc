<?php
/**
 * @file
 * simple_subscription_feature.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function simple_subscription_feature_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}
