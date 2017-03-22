<?php
/**
 * @file
 * search_feature.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function search_feature_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['search-form'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'form',
    'module' => 'search',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => 'sidebar_first',
        'status' => 1,
        'theme' => 'bartik',
        'weight' => -1,
      ),
      'bootstrap' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bootstrap',
        'weight' => -1,
      ),
      'bsderek' => array(
        'region' => 'navigation',
        'status' => 1,
        'theme' => 'bsderek',
        'weight' => -9,
      ),
      'seven' => array(
        'region' => 'dashboard_sidebar',
        'status' => 1,
        'theme' => 'seven',
        'weight' => -10,
      ),
      'zen' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'zen',
        'weight' => -1,
      ),
    ),
    'title' => '<none>',
    'visibility' => 0,
  );

  return $export;
}
