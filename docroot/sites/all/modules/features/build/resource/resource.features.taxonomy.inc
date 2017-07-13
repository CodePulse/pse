<?php
/**
 * @file
 * resource.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function resource_taxonomy_default_vocabularies() {
  return array(
    'application' => array(
      'name' => 'Application',
      'machine_name' => 'application',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
    'feature' => array(
      'name' => 'Feature',
      'machine_name' => 'feature',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
    'format' => array(
      'name' => 'Format',
      'machine_name' => 'format',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
    'industry_sector' => array(
      'name' => 'Industry sector',
      'machine_name' => 'industry_sector',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
    'presenter' => array(
      'name' => 'Presenter',
      'machine_name' => 'presenter',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
    'unit_operation' => array(
      'name' => 'Unit operation',
      'machine_name' => 'unit_operation',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
  );
}
