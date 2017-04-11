<?php
/**
 * @file
 * simple_subscription_feature.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function simple_subscription_feature_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'simple_subscription_config';
  $strongarm->value = array(
    'form_header' => '<h4>Join the crowd and never miss a new post!</h4>',
    'form_footer' => '',
    'input_label' => '',
    'input_size' => '15',
    'input_content' => 'e-mail address',
    'submit_value' => 'I\'m in',
    'success_message' => 'Thank you for subscribing',
    'redirect_path' => '',
  );
  $export['simple_subscription_config'] = $strongarm;

  return $export;
}
