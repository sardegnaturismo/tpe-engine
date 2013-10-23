<?php
/**
 * @file
 * tpe_ct_op_economico.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function tpe_ct_op_economico_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_obsoleti|node|scheda_operatori_economici|form';
  $field_group->group_name = 'group_obsoleti';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'scheda_operatori_economici';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Obsoleti',
    'weight' => '14',
    'children' => array(
      0 => 'field_geofield',
      1 => 'field_latitudine',
      2 => 'field_longitudine',
      3 => 'field_location',
      4 => 'field_geospatial',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_obsoleti|node|scheda_operatori_economici|form'] = $field_group;

  return $export;
}
