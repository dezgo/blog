<?php
/**
 * @file
 * blog_feature.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function blog_feature_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function blog_feature_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_image_default_styles().
 */
function blog_feature_image_default_styles() {
  $styles = array();

  // Exported image style: archive-thumbnail.
  $styles['archive-thumbnail'] = array(
    'label' => 'Archive Thumbnail',
    'effects' => array(
      5 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 80,
          'height' => 80,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: blog_inline.
  $styles['blog_inline'] = array(
    'label' => 'Blog inline',
    'effects' => array(
      2 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 500,
          'height' => 400,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: blog_title.
  $styles['blog_title'] = array(
    'label' => 'Blog Title',
    'effects' => array(
      1 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 944,
          'height' => 410,
        ),
        'weight' => 1,
      ),
    ),
  );

  return $styles;
}

/**
 * Implements hook_node_info().
 */
function blog_feature_node_info() {
  $items = array(
    'page' => array(
      'name' => t('Basic page'),
      'base' => 'node_content',
      'description' => t('Use <em>basic pages</em> for your static content, such as an \'About us\' page.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
