<?php

/**
 * Implementation of hook_taxonomy_default_vocabularies().
 */
function redbull_inspiration_taxonomy_default_vocabularies() {
  return array(
    'inspiration' => array(
      'name' => 'Inspiration',
      'description' => '',
      'help' => '',
      'relations' => '1',
      'hierarchy' => '0',
      'multiple' => '0',
      'required' => '0',
      'tags' => '0',
      'module' => 'features_inspiration',
      'weight' => '0',
      'nodes' => array(
        'article' => 'article',
      ),
    ),
  );
}
