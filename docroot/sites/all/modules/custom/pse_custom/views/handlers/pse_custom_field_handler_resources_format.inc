<?php

/**
 * Class pse_custom_field_handler_resources_format
 *
 * This will display icons linking to either PDF or Video format
 *
 * @ingroup views_handler_field
 */
class pse_custom_field_handler_resources_format extends views_handler_field {

  public function query(){

  }

  public function render($values){
    $node = $values->_entity_properties['entity object'];
    if (!empty($node->field_pdf)) {
      $content['pdf'] = file_create_url($node->field_pdf[LANGUAGE_NONE][0]['uri']);
    }
    if (!empty($node->field_field_video_url)) {
      $content['video_url'] = $node->field_video_url[LANGUAGE_NONE][0]['value'];
    }

    return theme('pse_custom_resource_format', array('content' => $content));
  }
}