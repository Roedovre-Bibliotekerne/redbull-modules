<?php

/**
 * Implementation of hook_strongarm().
 */
function redbull_base_strongarm() {
  $export = array();

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'addi_wsdl_url';
  $strongarm->value = 'http://moreinfo.addi.dk/2.1/';
  $export['addi_wsdl_url'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ting_search_url';
  $strongarm->value = 'http://opensearch.addi.dk/2.2/';
  $export['ting_search_url'] = $strongarm;

  return $export;
}
