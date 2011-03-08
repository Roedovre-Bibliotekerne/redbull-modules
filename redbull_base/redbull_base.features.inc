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
    'content_full' => array(
      'presetname' => 'content_full',
      'actions' => array (
        0 => array (
          'weight' => '0',
          'module' => 'imagecache',
          'action' => 'imagecache_scale',
          'data' => array (
            'width' => '460px',
            'height' => '',
            'upscale' => 0,
          ),
        ),
      ),
    ),
    'ting_search_carousel' => array(
      'presetname' => 'ting_search_carousel',
      'actions' => array (
        0 => array (
          'weight' => '0',
          'module' => 'imagecache',
          'action' => 'imagecache_scale_and_crop',
          'data' => array (
            'width' => '100px',
            'height' => '160px',
          ),
        ),
        1 => array (
          'weight' => '1',
          'module' => 'imagecache_canvasactions',
          'action' => 'canvasactions_definecanvas',
          'data' => array (
            'ecaxt' => array (
              'width' => '112',
              'height' => '140',
              'xpos' => 'center',
              'ypos' => 'center',
            ),
            'RGB' => array (
              'HEX' => '918F91',
            ),
            'under' => true,
          ),
        ),
      ),
    ),
  );
  return $items;
}


/**
 * Implementation of hook_ctools_plugin_api().
 */
function redbull_base_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "page_manager" && $api == "pages_default") {
    return array("version" => 1);
  }
  elseif ($module == "strongarm" && $api == "strongarm") {
    return array("version" => 1);
  }
}


/**
 * Implementation of hook_views_api().
 */
function redbull_base_views_api() {
  return array(
    'api' => '2',
  );
}
