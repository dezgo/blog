<?php
/**
 * @file
 * comments_feature.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function comments_feature_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: management_ajax-comments:admin/config/content/ajax_comments.
  $menu_links['management_ajax-comments:admin/config/content/ajax_comments'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/content/ajax_comments',
    'router_path' => 'admin/config/content/ajax_comments',
    'link_title' => 'AJAX comments',
    'options' => array(
      'attributes' => array(
        'title' => 'AJAXifies comments on site.',
      ),
      'identifier' => 'management_ajax-comments:admin/config/content/ajax_comments',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'management_content-authoring:admin/config/content',
  );
  // Exported menu link: management_comments:admin/content/comment.
  $menu_links['management_comments:admin/content/comment'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/content/comment',
    'router_path' => 'admin/content/comment',
    'link_title' => 'Comments',
    'options' => array(
      'attributes' => array(
        'title' => 'List and edit site comments and the comment approval queue.',
      ),
      'identifier' => 'management_comments:admin/content/comment',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'management_content:admin/content',
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('AJAX comments');
  t('Comments');

  return $menu_links;
}
