<?php




/**
 * Implementation of hook_content_default_fields().
 */
function redbull_base_content_default_fields() {
  $fields = array();
  
  $nodetypes = array('page','article','event','feature');
  
  

  // Exported field: field_content_images
  foreach($nodetypes as $nodetype){
    $fields[$nodetype.'-field_content_images'] = array(
      'field_name' => 'field_content_images',
      'type_name' => 'page',
      'display_settings' => array(
        'weight' => '1',
        'parent' => '',
        'label' => array(
          'format' => 'hidden',
        ),
        'teaser' => array(
          'format' => 'hidden',
          'exclude' => 0,
        ),
        'full' => array(
          'format' => 'hidden',
          'exclude' => 0,
        ),
        '4' => array(
          'format' => 'image_plain',
          'exclude' => 0,
        ),
        '2' => array(
          'format' => 'image_plain',
          'exclude' => 0,
        ),
        '3' => array(
          'format' => 'image_plain',
          'exclude' => 0,
        ),
        'token' => array(
          'format' => 'image_plain',
          'exclude' => 0,
        ),
      ),
      'widget_active' => '1',
      'type' => 'filefield',
      'required' => '0',
      'multiple' => '1',
      'module' => 'filefield',
      'active' => '1',
      'list_field' => '0',
      'list_default' => 1,
      'description_field' => '0',
      'widget' => array(
        'file_extensions' => 'png gif jpg jpeg',
        'file_path' => 'content_images',
        'progress_indicator' => 'bar',
        'max_filesize_per_file' => '',
        'max_filesize_per_node' => '',
        'max_resolution' => '0',
        'min_resolution' => '0',
        'alt' => '',
        'custom_alt' => 0,
        'title' => '',
        'custom_title' => 0,
        'title_type' => 'textfield',
        'default_image' => NULL,
        'use_default_image' => 0,
        'insert' => 1,
        'insert_styles' => array(
          'auto' => 0,
          'link' => 0,
          'image' => 0,
          'imagecache_180_x' => 0,
          'imagecache_ting_search_carousel' => 0,
          'imagecache_680_200_crop' => 0,
          'imagecache_120_120' => 0,
          'imagecache_80_x' => 0,
          'imagecache_content_full' => 'imagecache_content_full',
        ),
        'insert_default' => 'auto',
        'insert_class' => '',
        'insert_width' => '',
        'label' => 'Indholdsbilleder',
        'weight' => '1',
        'description' => 'Upload af billeder til indsættelse i brødteksten.',
        'type' => 'imagefield_widget',
        'module' => 'imagefield',
      ),
    );
  }
  
  return $fields;
}
