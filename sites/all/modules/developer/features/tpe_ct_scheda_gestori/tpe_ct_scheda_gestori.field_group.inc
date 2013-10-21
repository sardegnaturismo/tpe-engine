<?php
/**
 * @file
 * tpe_ct_scheda_gestori.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function tpe_ct_scheda_gestori_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_dati_dimensionali|node|scheda_gestore|default';
  $field_group->group_name = 'group_dati_dimensionali';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'scheda_gestore';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Dati dimensionali',
    'weight' => '10',
    'children' => array(
      0 => 'field_prof_max',
      1 => 'field_prof_min',
      2 => 'field_pb_trans',
      3 => 'field_lunghezza',
      4 => 'field_pbt',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'label' => 'Dati dimensionali',
      'instance_settings' => array(
        'classes' => '',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_dati_dimensionali|node|scheda_gestore|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_dati_dimensionali|node|scheda_gestore|form';
  $field_group->group_name = 'group_dati_dimensionali';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'scheda_gestore';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Dati dimensionali',
    'weight' => '1',
    'children' => array(
      0 => 'field_prof_min',
      1 => 'field_prof_max',
      2 => 'field_pb_trans',
      3 => 'field_lunghezza',
      4 => 'field_pbt',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_dati_dimensionali|node|scheda_gestore|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_dati_generali|node|scheda_gestore|default';
  $field_group->group_name = 'group_dati_generali';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'scheda_gestore';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Dati generali',
    'weight' => '0',
    'children' => array(
      0 => 'field_contatti',
      1 => 'field_location',
      2 => 'field_mail',
      3 => 'field_canale_radio',
      4 => 'field_fax',
      5 => 'field_responsabile',
      6 => 'field_web',
      7 => 'field_ref_porto',
      8 => 'field_geospatial',
      9 => 'field_getlocations',
      10 => 'language',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'label' => 'Dati generali',
      'instance_settings' => array(
        'classes' => '',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_dati_generali|node|scheda_gestore|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_dati_generali|node|scheda_gestore|form';
  $field_group->group_name = 'group_dati_generali';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'scheda_gestore';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Dati generali',
    'weight' => '0',
    'children' => array(
      0 => 'field_canale_radio',
      1 => 'field_contatti',
      2 => 'field_fax',
      3 => 'field_mail',
      4 => 'field_web',
      5 => 'field_ref_porto',
      6 => 'field_responsabile',
      7 => 'field_geospatial',
      8 => 'field_getlocations',
      9 => 'language',
      10 => 'title',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_dati_generali|node|scheda_gestore|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_obsoleti|node|scheda_gestore|form';
  $field_group->group_name = 'group_obsoleti';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'scheda_gestore';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Obsoleti',
    'weight' => '41',
    'children' => array(
      0 => 'field_location',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_obsoleti|node|scheda_gestore|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_servizi|node|scheda_gestore|default';
  $field_group->group_name = 'group_servizi';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'scheda_gestore';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Servizi e attrezzature',
    'weight' => '11',
    'children' => array(
      0 => 'field_descr_disabili',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'label' => 'Servizi e attrezzature',
      'instance_settings' => array(
        'classes' => '',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_servizi|node|scheda_gestore|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_servizi|node|scheda_gestore|form';
  $field_group->group_name = 'group_servizi';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'scheda_gestore';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Servizi e attrezzature',
    'weight' => '2',
    'children' => array(
      0 => 'field_descr_disabili',
      1 => 'field_servizi',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_servizi|node|scheda_gestore|form'] = $field_group;

  return $export;
}
