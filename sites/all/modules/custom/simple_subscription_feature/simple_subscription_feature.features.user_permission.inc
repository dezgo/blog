<?php
/**
 * @file
 * simple_subscription_feature.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function simple_subscription_feature_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'administer simple subscription'.
  $permissions['administer simple subscription'] = array(
    'name' => 'administer simple subscription',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'simple_subscription',
  );

  // Exported permission: 'manage all subscriptions'.
  $permissions['manage all subscriptions'] = array(
    'name' => 'manage all subscriptions',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'simple_subscription',
  );

  // Exported permission: 'manage own subscription'.
  $permissions['manage own subscription'] = array(
    'name' => 'manage own subscription',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'simple_subscription',
  );

  return $permissions;
}
