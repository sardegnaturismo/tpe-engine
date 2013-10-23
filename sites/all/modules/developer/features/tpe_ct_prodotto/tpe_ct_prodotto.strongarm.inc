<?php
/**
 * @file
 * tpe_ct_prodotto.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function tpe_ct_prodotto_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'additional_settings__active_tab_scheda_prodotto';
  $strongarm->value = 'edit-i18n';
  $export['additional_settings__active_tab_scheda_prodotto'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_anonymous_scheda_prodotto';
  $strongarm->value = 0;
  $export['comment_anonymous_scheda_prodotto'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_mode_scheda_prodotto';
  $strongarm->value = 0;
  $export['comment_default_mode_scheda_prodotto'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_per_page_scheda_prodotto';
  $strongarm->value = '50';
  $export['comment_default_per_page_scheda_prodotto'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_form_location_scheda_prodotto';
  $strongarm->value = 0;
  $export['comment_form_location_scheda_prodotto'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_preview_scheda_prodotto';
  $strongarm->value = '0';
  $export['comment_preview_scheda_prodotto'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_scheda_prodotto';
  $strongarm->value = '1';
  $export['comment_scheda_prodotto'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_subject_field_scheda_prodotto';
  $strongarm->value = 0;
  $export['comment_subject_field_scheda_prodotto'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'enable_revisions_page_scheda_prodotto';
  $strongarm->value = 1;
  $export['enable_revisions_page_scheda_prodotto'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_node__scheda_prodotto';
  $strongarm->value = array(
    'view_modes' => array(
      'teaser' => array(
        'custom_settings' => TRUE,
      ),
      'full' => array(
        'custom_settings' => FALSE,
      ),
      'rss' => array(
        'custom_settings' => FALSE,
      ),
    ),
    'extra_fields' => array(
      'form' => array(
        'title' => array(
          'weight' => '-5',
        ),
        'language' => array(
          'weight' => '0',
        ),
      ),
      'display' => array(),
    ),
  );
  $export['field_bundle_settings_node__scheda_prodotto'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'i18n_node_extended_scheda_prodotto';
  $strongarm->value = '1';
  $export['i18n_node_extended_scheda_prodotto'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'i18n_node_options_scheda_prodotto';
  $strongarm->value = array(
    0 => 'required',
  );
  $export['i18n_node_options_scheda_prodotto'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'i18n_sync_node_type_scheda_prodotto';
  $strongarm->value = array(
    0 => 'field_geofield',
    1 => 'field_geospatial',
  );
  $export['i18n_sync_node_type_scheda_prodotto'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'language_content_type_scheda_prodotto';
  $strongarm->value = '2';
  $export['language_content_type_scheda_prodotto'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_scheda_prodotto';
  $strongarm->value = array(
    0 => 'main-menu',
  );
  $export['menu_options_scheda_prodotto'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_scheda_prodotto';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_scheda_prodotto'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_scheda_prodotto';
  $strongarm->value = array(
    0 => 'status',
    1 => 'revision',
  );
  $export['node_options_scheda_prodotto'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_scheda_prodotto';
  $strongarm->value = '1';
  $export['node_preview_scheda_prodotto'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_scheda_prodotto';
  $strongarm->value = 1;
  $export['node_submitted_scheda_prodotto'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'show_diff_inline_scheda_prodotto';
  $strongarm->value = 0;
  $export['show_diff_inline_scheda_prodotto'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'show_preview_changes_scheda_prodotto';
  $strongarm->value = 1;
  $export['show_preview_changes_scheda_prodotto'] = $strongarm;

  return $export;
}
