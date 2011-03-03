<?php

/**
 * Implementation of hook_imagecache_default_presets().
 */
function redbull_base_imagecache_default_presets() {
  $items = array(
    '210x105' => array(
      'presetname' => '210x105',
      'actions' => array(
        '0' => array(
          'weight' => '0',
          'module' => 'imagecache',
          'action' => 'imagecache_scale_and_crop',
          'data' => array(
            'width' => '210px',
            'height' => '105px',
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
function redbull_base_views_api() {
  return array(
    'api' => '2',
  );
}
