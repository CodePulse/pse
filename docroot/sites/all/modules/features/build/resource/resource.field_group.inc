<?php
/**
 * @file
 * resource.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function resource_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_resource|node|resource|form';
  $field_group->group_name = 'group_resource';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'resource';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Resource',
    'weight' => '0',
    'children' => array(
      0 => 'field_company',
      1 => 'field_year',
      2 => 'field_pdf',
      3 => 'field_video_url',
      4 => 'field_format',
      5 => 'field_industry_sector',
      6 => 'field_unit_operation',
      7 => 'field_feature',
      8 => 'field_event_type',
      9 => 'field_application',
      10 => 'title',
      11 => 'path',
      12 => 'redirect',
      13 => 'field_presenter',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-resource field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_resource|node|resource|form'] = $field_group;

  return $export;
}
