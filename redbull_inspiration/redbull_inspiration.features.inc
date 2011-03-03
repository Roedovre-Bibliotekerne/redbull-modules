<?php

/**
 * Implementation of hook_ctools_plugin_api().
 */
function redbull_inspiration_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "page_manager" && $api == "pages_default") {
    return array("version" => 1);
  }
}

/**
 * Implementation of hook_imagecache_default_presets().
 */
function redbull_inspiration_imagecache_default_presets() {
  $items = array(
    'book_100x152' => array(
      'presetname' => 'book_100x152',
      'actions' => array(
        '0' => array(
          'weight' => '0',
          'module' => 'imagecache',
          'action' => 'imagecache_scale_and_crop',
          'data' => array(
            'width' => '100px',
            'height' => '152px',
          ),
        ),
      ),
    ),
  );
  return $items;
}

/**
 * Implementation of hook_views_api().
 */
function redbull_inspiration_views_api() {
  return array(
    'api' => '2',
  );
}
