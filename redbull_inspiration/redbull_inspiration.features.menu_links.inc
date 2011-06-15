<?php

/**
 * Implementation of hook_menu_default_menu_links().
 */
function redbull_inspiration_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: primary-links:inspiration
  $menu_links['primary-links:inspiration'] = array(
    'menu_name' => 'primary-links',
    'link_path' => 'inspiration',
    'router_path' => 'inspiration',
    'link_title' => 'Inspiration',
    'options' => array(),
    'module' => 'system',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-48',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Inspiration');


  return $menu_links;
}
