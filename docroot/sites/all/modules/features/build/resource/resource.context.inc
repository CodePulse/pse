<?php
/**
 * @file
 * resource.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function resource_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'resource';
  $context->description = '';
  $context->tag = '';
  $context->conditions = array(
    'views' => array(
      'values' => array(
        'resources' => 'resources',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'block-4' => array(
          'module' => 'block',
          'delta' => '4',
          'region' => 'sidebar_second',
          'weight' => '-10',
        ),
        'facetapi-QAMeJ0BprY0cIle7PTrG62M4jBh07Q35' => array(
          'module' => 'facetapi',
          'delta' => 'QAMeJ0BprY0cIle7PTrG62M4jBh07Q35',
          'region' => 'sidebar_second',
          'weight' => '-9',
        ),
        'facetapi-T0OQ1wsqHkwIAVu0n2zYg4XFUkIi0T0A' => array(
          'module' => 'facetapi',
          'delta' => 'T0OQ1wsqHkwIAVu0n2zYg4XFUkIi0T0A',
          'region' => 'sidebar_second',
          'weight' => '-8',
        ),
        'facetapi-MjAS7q2HfE1xJyonaWtPSOxWT6DWAy8I' => array(
          'module' => 'facetapi',
          'delta' => 'MjAS7q2HfE1xJyonaWtPSOxWT6DWAy8I',
          'region' => 'sidebar_second',
          'weight' => '-7',
        ),
        'facetapi-pujt10JUWj17bOAv0iHSMahE0ZAV7ESU' => array(
          'module' => 'facetapi',
          'delta' => 'pujt10JUWj17bOAv0iHSMahE0ZAV7ESU',
          'region' => 'sidebar_second',
          'weight' => '-6',
        ),
        'facetapi-wu7Uwqqit26Hh7JzJ0lk1xoiu6XWEaA2' => array(
          'module' => 'facetapi',
          'delta' => 'wu7Uwqqit26Hh7JzJ0lk1xoiu6XWEaA2',
          'region' => 'sidebar_second',
          'weight' => '-5',
        ),
        'facetapi-bz9NnMUs447yTVSUR2A7oULQMUx2fCZj' => array(
          'module' => 'facetapi',
          'delta' => 'bz9NnMUs447yTVSUR2A7oULQMUx2fCZj',
          'region' => 'sidebar_second',
          'weight' => '-4',
        ),
        'facetapi-JKKt17gDlFA0dVH8pftbRBzbVCOKHk6M' => array(
          'module' => 'facetapi',
          'delta' => 'JKKt17gDlFA0dVH8pftbRBzbVCOKHk6M',
          'region' => 'sidebar_second',
          'weight' => '-3',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;
  $export['resource'] = $context;

  return $export;
}
