<?php

function pse_custom_sidebar_heading($form, &$form_state) {
  $on_off = variable_get('sidebar_header', 1);
  $sidebar_text = variable_get('sidebar_header_text', t('More information'));

  $form['sidebar_header'] = array(
    '#type' => 'checkbox',
    '#default_value' => $on_off,
    '#title' => t('Tick this box to turn on the sidebar heading'),
  );

  $form['sidebar_header_text'] = array(
    '#type' => 'textfield',
    '#default_value' => $sidebar_text,
    '#title' => t('Sidebar heading text'),

  );

  return system_settings_form($form);
}