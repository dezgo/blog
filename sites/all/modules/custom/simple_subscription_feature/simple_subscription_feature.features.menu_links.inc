<?php
/**
 * @file
 * simple_subscription_feature.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function simple_subscription_feature_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: management_simple-subscription:admin/config/simple_subscription.
  $menu_links['management_simple-subscription:admin/config/simple_subscription'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/simple_subscription',
    'router_path' => 'admin/config/simple_subscription',
    'link_title' => 'Simple Subscription',
    'options' => array(
      'identifier' => 'management_simple-subscription:admin/config/simple_subscription',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'management_configuration:admin/config',
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Simple Subscription');

  return $menu_links;
}
