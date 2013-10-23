<?php
/**
 * @file
 * tpe_ct_prodotto.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function tpe_ct_prodotto_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_obsoleti|node|scheda_prodotto|form';
  $field_group->group_name = 'group_obsoleti';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'scheda_prodotto';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Obsoleti',
    'weight' => '13',
    'children' => array(
      0 => 'field_geofield',
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
  $export['group_obsoleti|node|scheda_prodotto|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_sez_descrittiva|node|scheda_prodotto|form';
  $field_group->group_name = 'group_sez_descrittiva';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'scheda_prodotto';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Sezione descrittiva',
    'weight' => '1',
    'children' => array(
      0 => 'field_abbinamenti',
      1 => 'field_caratt_nutrizionali',
      2 => 'field_consorzio_tutela',
      3 => 'field_curiosity',
      4 => 'field_location',
      5 => 'field_stagionale',
      6 => 'field_tecniche',
      7 => 'field_territori',
      8 => 'body',
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
  $export['group_sez_descrittiva|node|scheda_prodotto|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_sez_generale|node|scheda_prodotto|form';
  $field_group->group_name = 'group_sez_generale';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'scheda_prodotto';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Sezione generale',
    'weight' => '0',
    'children' => array(
      0 => 'field_categoria',
      1 => 'field_geofield',
      2 => 'field_geonome',
      3 => 'field_geospatial',
      4 => 'field_marchio',
      5 => 'field_sinonimi',
      6 => 'field_immagine',
      7 => 'title',
      8 => 'field_image',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'label' => 'Sezione generale',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => '',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_sez_generale|node|scheda_prodotto|form'] = $field_group;

  return $export;
}
