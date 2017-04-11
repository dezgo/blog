<?php
/**
 * @file
 * simple_subscription_feature.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function simple_subscription_feature_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['simple_subscription-subscribe'] = array(
    'cache' => 1,
    'custom' => 0,
    'delta' => 'subscribe',
    'module' => 'simple_subscription',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'bootstrap' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bootstrap',
        'weight' => 0,
      ),
      'bsderek' => array(
        'region' => 'highlighted',
        'status' => 1,
        'theme' => 'bsderek',
        'weight' => -9,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
      'zen' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'zen',
        'weight' => 0,
      ),
    ),
    'title' => '<none>',
    'visibility' => 0,
  );

  return $export;
}
