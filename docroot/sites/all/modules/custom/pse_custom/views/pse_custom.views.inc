<?php

/**
 * Implements hook_views_data().
 * @see hook_views_data().
 */
function pse_custom_views_data() {
  $data['views']['resources_format'] = array(
    'title' => t('Format'),
    'help' => t('This will display icons linking to either PDF or Video format'),
    'field' => array(
      'handler' => 'pse_custom_field_handler_resources_format',
    ),
  );
  return $data;

}
/**
 * @see hook_views_handler()
 */
function pse_custom_views_handler() {
  return array(
    'info' => array(
      'path' => drupal_get_path('module', 'pse_custom') . '/views/handlers',
    ),
    'handlers' => array(
      'pse_custom_field_handler_resources_format' => array(
        'parent' => 'views_handler_field',
        'file' => 'pse_custom_field_handler_resources_format.inc',
      ),
    ),
  );
}

/**
 * Implements hook_views_default_views().
 */
function pse_custom_views_default_views() {
  $view = new view();
  $view->name = 'publications_downloads';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'webform_submissions';
  $view->human_name = 'Publications downloads';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Publications downloads';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'better_exposed_filters';
  $handler->display->display_options['exposed_form']['options']['bef'] = array(
    'general' => array(
      'allow_secondary' => 0,
      'secondary_label' => 'Advanced options',
      'collapsible_label' => NULL,
      'combine_rewrite' => NULL,
      'reset_label' => NULL,
      'bef_filter_description' => NULL,
      'any_label' => NULL,
      'filter_rewrite_values' => NULL,
    ),
    'completed' => array(
      'bef_format' => 'bef_datepicker',
      'more_options' => array(
        'is_secondary' => 0,
        'any_label' => '',
        'bef_filter_description' => '',
        'tokens' => array(
          'available' => array(
            0 => 'global_types',
            'secondary_label' => NULL,
            'collapsible_label' => NULL,
            'combine_rewrite' => NULL,
            'reset_label' => NULL,
            'bef_filter_description' => NULL,
            'any_label' => NULL,
            'filter_rewrite_values' => NULL,
          ),
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
          'bef_filter_description' => NULL,
          'any_label' => NULL,
          'filter_rewrite_values' => NULL,
        ),
        'rewrite' => array(
          'filter_rewrite_values' => '',
          'secondary_label' => NULL,
          'collapsible_label' => NULL,
          'combine_rewrite' => NULL,
          'reset_label' => NULL,
          'bef_filter_description' => NULL,
          'any_label' => NULL,
        ),
        'secondary_label' => NULL,
        'collapsible_label' => NULL,
        'combine_rewrite' => NULL,
        'reset_label' => NULL,
        'filter_rewrite_values' => NULL,
      ),
      'secondary_label' => NULL,
      'collapsible_label' => NULL,
      'combine_rewrite' => NULL,
      'reset_label' => NULL,
      'bef_filter_description' => NULL,
      'any_label' => NULL,
      'filter_rewrite_values' => NULL,
    ),
    'secondary_label' => NULL,
    'collapsible_label' => NULL,
    'combine_rewrite' => NULL,
    'reset_label' => NULL,
    'bef_filter_description' => NULL,
    'any_label' => NULL,
    'filter_rewrite_values' => NULL,
  );
  $handler->display->display_options['exposed_form']['options']['input_required'] = 0;
  $handler->display->display_options['exposed_form']['options']['text_input_required_format'] = 'full_editor';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'value_3' => 'value_3',
    'value' => 'value',
    'value_1' => 'value_1',
    'value_5' => 'value_5',
    'value_2' => 'value_2',
    'value_4' => 'value_4',
    'completed' => 'completed',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'value_3' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'value' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'value_1' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'value_5' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'value_2' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'value_4' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'completed' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Relationship: Webform submissions: Data */
  $handler->display->display_options['relationships']['data']['id'] = 'data';
  $handler->display->display_options['relationships']['data']['table'] = 'webform_submissions';
  $handler->display->display_options['relationships']['data']['field'] = 'data';
  $handler->display->display_options['relationships']['data']['webform_nid'] = '149';
  $handler->display->display_options['relationships']['data']['webform_cid'] = '11';
  /* Field: Webform submission data: Value */
  $handler->display->display_options['fields']['value_3']['id'] = 'value_3';
  $handler->display->display_options['fields']['value_3']['table'] = 'webform_submissions';
  $handler->display->display_options['fields']['value_3']['field'] = 'value';
  $handler->display->display_options['fields']['value_3']['label'] = '';
  $handler->display->display_options['fields']['value_3']['webform_nid'] = '149';
  $handler->display->display_options['fields']['value_3']['webform_cid'] = '3';
  /* Field: Webform submission data: Value */
  $handler->display->display_options['fields']['value']['id'] = 'value';
  $handler->display->display_options['fields']['value']['table'] = 'webform_submissions';
  $handler->display->display_options['fields']['value']['field'] = 'value';
  $handler->display->display_options['fields']['value']['label'] = '';
  $handler->display->display_options['fields']['value']['webform_nid'] = '149';
  $handler->display->display_options['fields']['value']['webform_cid'] = '1';
  /* Field: Webform submission data: Value */
  $handler->display->display_options['fields']['value_1']['id'] = 'value_1';
  $handler->display->display_options['fields']['value_1']['table'] = 'webform_submissions';
  $handler->display->display_options['fields']['value_1']['field'] = 'value';
  $handler->display->display_options['fields']['value_1']['label'] = '';
  $handler->display->display_options['fields']['value_1']['webform_nid'] = '149';
  $handler->display->display_options['fields']['value_1']['webform_cid'] = '2';
  /* Field: Webform submission data: Value */
  $handler->display->display_options['fields']['value_5']['id'] = 'value_5';
  $handler->display->display_options['fields']['value_5']['table'] = 'webform_submissions';
  $handler->display->display_options['fields']['value_5']['field'] = 'value';
  $handler->display->display_options['fields']['value_5']['label'] = '';
  $handler->display->display_options['fields']['value_5']['webform_nid'] = '149';
  $handler->display->display_options['fields']['value_5']['webform_cid'] = '6';
  /* Field: Webform submission data: Value */
  $handler->display->display_options['fields']['value_2']['id'] = 'value_2';
  $handler->display->display_options['fields']['value_2']['table'] = 'webform_submissions';
  $handler->display->display_options['fields']['value_2']['field'] = 'value';
  $handler->display->display_options['fields']['value_2']['label'] = 'File name';
  $handler->display->display_options['fields']['value_2']['custom_label'] = 'custom';
  $handler->display->display_options['fields']['value_2']['webform_nid'] = '149';
  $handler->display->display_options['fields']['value_2']['webform_cid'] = '11';
  /* Field: Webform submission data: Value */
  $handler->display->display_options['fields']['value_4']['id'] = 'value_4';
  $handler->display->display_options['fields']['value_4']['table'] = 'webform_submissions';
  $handler->display->display_options['fields']['value_4']['field'] = 'value';
  $handler->display->display_options['fields']['value_4']['label'] = 'Page it was downloaded from';
  $handler->display->display_options['fields']['value_4']['custom_label'] = 'custom';
  $handler->display->display_options['fields']['value_4']['webform_nid'] = '149';
  $handler->display->display_options['fields']['value_4']['webform_cid'] = '10';
  /* Field: Webform submissions: Completed */
  $handler->display->display_options['fields']['completed']['id'] = 'completed';
  $handler->display->display_options['fields']['completed']['table'] = 'webform_submissions';
  $handler->display->display_options['fields']['completed']['field'] = 'completed';
  $handler->display->display_options['fields']['completed']['label'] = 'Date downloaded';
  $handler->display->display_options['fields']['completed']['date_format'] = 'long';
  $handler->display->display_options['fields']['completed']['second_date_format'] = 'long';
  /* Sort criterion: Webform submissions: Completed */
  $handler->display->display_options['sorts']['completed']['id'] = 'completed';
  $handler->display->display_options['sorts']['completed']['table'] = 'webform_submissions';
  $handler->display->display_options['sorts']['completed']['field'] = 'completed';
  $handler->display->display_options['sorts']['completed']['order'] = 'DESC';
  /* Filter criterion: Webform submissions: Node */
  $handler->display->display_options['filters']['nid']['id'] = 'nid';
  $handler->display->display_options['filters']['nid']['table'] = 'webform_submissions';
  $handler->display->display_options['filters']['nid']['field'] = 'nid';
  $handler->display->display_options['filters']['nid']['value']['value'] = '149';
  /* Filter criterion: Webform submission data: Data field */
  $handler->display->display_options['filters']['data']['id'] = 'data';
  $handler->display->display_options['filters']['data']['table'] = 'webform_submitted_data';
  $handler->display->display_options['filters']['data']['field'] = 'data';
  $handler->display->display_options['filters']['data']['relationship'] = 'data';
  $handler->display->display_options['filters']['data']['operator'] = 'not empty';
  /* Filter criterion: Webform submissions: Completed */
  $handler->display->display_options['filters']['completed']['id'] = 'completed';
  $handler->display->display_options['filters']['completed']['table'] = 'webform_submissions';
  $handler->display->display_options['filters']['completed']['field'] = 'completed';
  $handler->display->display_options['filters']['completed']['operator'] = 'between';
  $handler->display->display_options['filters']['completed']['exposed'] = TRUE;
  $handler->display->display_options['filters']['completed']['expose']['operator_id'] = 'completed_op';
  $handler->display->display_options['filters']['completed']['expose']['label'] = 'Date downloaded';
  $handler->display->display_options['filters']['completed']['expose']['operator'] = 'completed_op';
  $handler->display->display_options['filters']['completed']['expose']['identifier'] = 'completed';
  $handler->display->display_options['filters']['completed']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    37 => 0,
    5 => 0,
    11 => 0,
    28 => 0,
    29 => 0,
    40 => 0,
    41 => 0,
    38 => 0,
    39 => 0,
  );
  /* Filter criterion: Webform submission data: Data field */
  $handler->display->display_options['filters']['data_1']['id'] = 'data_1';
  $handler->display->display_options['filters']['data_1']['table'] = 'webform_submitted_data';
  $handler->display->display_options['filters']['data_1']['field'] = 'data';
  $handler->display->display_options['filters']['data_1']['relationship'] = 'data';
  $handler->display->display_options['filters']['data_1']['operator'] = 'word';
  $handler->display->display_options['filters']['data_1']['exposed'] = TRUE;
  $handler->display->display_options['filters']['data_1']['expose']['operator_id'] = 'data_1_op';
  $handler->display->display_options['filters']['data_1']['expose']['label'] = 'File name';
  $handler->display->display_options['filters']['data_1']['expose']['operator'] = 'data_1_op';
  $handler->display->display_options['filters']['data_1']['expose']['identifier'] = 'data_1';
  $handler->display->display_options['filters']['data_1']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    37 => 0,
    5 => 0,
    11 => 0,
    28 => 0,
    29 => 0,
    40 => 0,
    41 => 0,
    38 => 0,
    39 => 0,
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'admin/reports/publications-downloads-report';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Publications downloads report';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;

  /* Display: XLS */
  $handler = $view->new_display('views_data_export', 'XLS', 'views_data_export_1');
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'views_data_export_xls';
  $handler->display->display_options['style_options']['provide_file'] = 1;
  $handler->display->display_options['style_options']['filename'] = 'publication-downloads-report.xls';
  $handler->display->display_options['style_options']['parent_sort'] = 0;
  $handler->display->display_options['path'] = 'admin/reports/publications-downloads-report';
  $handler->display->display_options['displays'] = array(
    'page' => 'page',
    'default' => 0,
  );

  /* Display: Data export 2 */
  $handler = $view->new_display('views_data_export', 'Data export 2', 'views_data_export_2');
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'views_data_export_csv';
  $handler->display->display_options['path'] = 'admin/reports/publications-downloads-report/csv';
  $handler->display->display_options['displays'] = array(
    'page' => 'page',
    'default' => 0,
  );

  $views[$view->name] = $view;
  return $views;
}
