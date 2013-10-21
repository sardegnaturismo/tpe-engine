<?php
/**
 * @file
 * tpe_ct_scheda_porto.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function tpe_ct_scheda_porto_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_ambiente|node|scheda_porto|form';
  $field_group->group_name = 'group_ambiente';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'scheda_porto';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Dotazioni ambientali',
    'weight' => '3',
    'children' => array(
      0 => 'field_dot_ambiente',
      1 => 'field_cert_amb',
      2 => 'field_isola_eco',
      3 => 'field_pann_sol',
      4 => 'field_pann_fotov',
      5 => 'field_pann_fotovolt',
      6 => 'field_racc_rifiuti_spec',
      7 => 'field_racc_rifiuti',
      8 => 'field_oli',
      9 => 'field_tratt_acque_piov',
      10 => 'field_tratt_acque',
      11 => 'field_riuso_acque',
      12 => 'field_pann_solari',
      13 => 'field_aspir_acque',
      14 => 'field_imp_oss',
      15 => 'field_imp_ossigen',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'label' => 'Dotazioni ambientali',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => '',
        'description' => 'Flaggare le dotazioni ambientali presenti nella struttura.',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_ambiente|node|scheda_porto|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_dati_dimensionali|node|scheda_porto|form';
  $field_group->group_name = 'group_dati_dimensionali';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'scheda_porto';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Dati dimensionali',
    'weight' => '1',
    'children' => array(
      0 => 'field_pbt',
      1 => 'field_prof_max',
      2 => 'field_aree_dip',
      3 => 'field_planimetria',
      4 => 'field_pb_trans',
      5 => 'field_lunghezza',
      6 => 'field_prof_min',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'label' => 'Dati dimensionali',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => '',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_dati_dimensionali|node|scheda_porto|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_dati_generali|node|scheda_porto|default';
  $field_group->group_name = 'group_dati_generali';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'scheda_porto';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Dati generali',
    'weight' => '0',
    'children' => array(
      0 => 'field_autority',
      1 => 'field_location',
      2 => 'field_tipo_approdo',
      3 => 'field_altro_approdo',
      4 => 'field_contatti',
      5 => 'field_web',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'classes' => '',
      ),
    ),
  );
  $export['group_dati_generali|node|scheda_porto|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_dati_generali|node|scheda_porto|form';
  $field_group->group_name = 'group_dati_generali';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'scheda_porto';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Dati generali',
    'weight' => '0',
    'children' => array(
      0 => 'field_geospatial',
      1 => 'field_altro_approdo',
      2 => 'field_canale_radio',
      3 => 'field_tipo_approdo',
      4 => 'field_immagine',
      5 => 'field_meteo_porto',
      6 => 'field_autority',
      7 => 'field_accesso',
      8 => 'field_fax',
      9 => 'field_web',
      10 => 'body',
      11 => 'field_contatti',
      12 => 'field_orario',
      13 => 'field_getlocations',
      14 => 'title',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'label' => 'Dati generali',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => '',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_dati_generali|node|scheda_porto|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_nodefield|node|scheda_porto|full';
  $field_group->group_name = 'group_nodefield';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'scheda_porto';
  $field_group->mode = 'full';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => '',
    'weight' => '1',
    'children' => array(
      0 => 'field_autority',
      1 => 'field_location',
      2 => 'field_tipo_approdo',
      3 => 'field_altro_approdo',
      4 => 'field_contatti',
      5 => 'field_web',
      6 => 'field_latitudine',
      7 => 'field_longitudine',
      8 => 'field_canale_radio',
      9 => 'field_accesso',
      10 => 'field_orario',
      11 => 'field_cert_amb',
      12 => 'field_prof_min',
      13 => 'field_prof_max',
      14 => 'field_aree_dip',
      15 => 'field_pbt',
      16 => 'field_pb_trans',
      17 => 'field_lunghezza',
      18 => 'field_planimetria',
      19 => 'field_disabili',
      20 => 'field_descr_disabili',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'label' => '',
      'instance_settings' => array(
        'classes' => '',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_nodefield|node|scheda_porto|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_obsoleti|node|scheda_porto|form';
  $field_group->group_name = 'group_obsoleti';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'scheda_porto';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'obsolete',
    'weight' => '71',
    'children' => array(
      0 => 'field_longitudine',
      1 => 'field_location',
      2 => 'field_geofield',
      3 => 'field_latitudine',
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
  $export['group_obsoleti|node|scheda_porto|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_servizi|node|scheda_porto|form';
  $field_group->group_name = 'group_servizi';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'scheda_porto';
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
      'label' => 'Servizi e attrezzature',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => '',
        'description' => 'Flaggare i servizi presenti nella struttura portuale',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_servizi|node|scheda_porto|form'] = $field_group;

  return $export;
}
