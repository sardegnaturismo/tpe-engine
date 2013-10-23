<?php
/**
 * @file
 * tpe_ct_op_economico.features.field.inc
 */

/**
 * Implements hook_field_default_fields().
 */
function tpe_ct_op_economico_field_default_fields() {
  $fields = array();

  // Exported field: 'node-scheda_operatori_economici-body'.
  $fields['node-scheda_operatori_economici-body'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(
        0 => 'node',
      ),
      'field_name' => 'body',
      'foreign keys' => array(
        'format' => array(
          'columns' => array(
            'format' => 'format',
          ),
          'table' => 'filter_format',
        ),
      ),
      'indexes' => array(
        'format' => array(
          0 => 'format',
        ),
      ),
      'locked' => '0',
      'module' => 'text',
      'settings' => array(),
      'translatable' => '1',
      'type' => 'text_with_summary',
    ),
    'field_instance' => array(
      'bundle' => 'scheda_operatori_economici',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_plain',
          'weight' => '4',
        ),
        'full' => array(
          'label' => 'hidden',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => '0',
        ),
        'notifications' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'teaser' => array(
          'label' => 'hidden',
          'module' => 'text',
          'settings' => array(
            'trim_length' => 600,
          ),
          'type' => 'text_summary_or_trimmed',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'body',
      'label' => 'Descrizione attività',
      'required' => 0,
      'settings' => array(
        'display_summary' => 0,
        'text_processing' => '0',
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'text',
        'settings' => array(
          'rows' => '5',
          'summary_rows' => 5,
        ),
        'type' => 'text_textarea_with_summary',
        'weight' => '6',
      ),
      'widget_type' => 'text_textarea_with_summary',
    ),
  );

  // Exported field: 'node-scheda_operatori_economici-field_contatti'.
  $fields['node-scheda_operatori_economici-field_contatti'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '-1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_contatti',
      'foreign keys' => array(
        'format' => array(
          'columns' => array(
            'format' => 'format',
          ),
          'table' => 'filter_format',
        ),
      ),
      'indexes' => array(
        'format' => array(
          0 => 'format',
        ),
      ),
      'locked' => '0',
      'module' => 'text',
      'settings' => array(
        'max_length' => '255',
      ),
      'translatable' => '1',
      'type' => 'text',
    ),
    'field_instance' => array(
      'bundle' => 'scheda_operatori_economici',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => '6',
        ),
        'full' => array(
          'label' => 'inline',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => '4',
        ),
        'notifications' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_contatti',
      'label' => 'Telefono',
      'required' => 0,
      'settings' => array(
        'text_processing' => '0',
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'text',
        'settings' => array(
          'size' => '60',
        ),
        'type' => 'text_textfield',
        'weight' => '8',
      ),
    ),
  );

  // Exported field: 'node-scheda_operatori_economici-field_fax'.
  $fields['node-scheda_operatori_economici-field_fax'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '-1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_fax',
      'foreign keys' => array(
        'format' => array(
          'columns' => array(
            'format' => 'format',
          ),
          'table' => 'filter_format',
        ),
      ),
      'indexes' => array(
        'format' => array(
          0 => 'format',
        ),
      ),
      'locked' => '0',
      'module' => 'text',
      'settings' => array(
        'max_length' => '255',
      ),
      'translatable' => '1',
      'type' => 'text',
    ),
    'field_instance' => array(
      'bundle' => 'scheda_operatori_economici',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => '7',
        ),
        'full' => array(
          'label' => 'inline',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => '5',
        ),
        'notifications' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_fax',
      'label' => 'Fax',
      'required' => 0,
      'settings' => array(
        'text_processing' => '0',
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'text',
        'settings' => array(
          'size' => '60',
        ),
        'type' => 'text_textfield',
        'weight' => '9',
      ),
    ),
  );

  // Exported field: 'node-scheda_operatori_economici-field_geofield'.
  $fields['node-scheda_operatori_economici-field_geofield'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_geofield',
      'foreign keys' => array(),
      'indexes' => array(),
      'locked' => '0',
      'module' => 'geofield',
      'settings' => array(),
      'translatable' => '1',
      'type' => 'geofield',
    ),
    'field_instance' => array(
      'bundle' => 'scheda_operatori_economici',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'hidden',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '11',
        ),
        'full' => array(
          'label' => 'above',
          'module' => 'geofield',
          'settings' => array(
            'data' => '',
          ),
          'type' => 'geofield_wkt',
          'weight' => '11',
        ),
        'notifications' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_geofield',
      'label' => 'Geo',
      'required' => 0,
      'settings' => array(
        'local_solr' => array(
          'enabled' => FALSE,
          'lat_field' => 'lat',
          'lng_field' => 'lng',
        ),
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'geofield',
        'settings' => array(),
        'type' => 'geofield_openlayers',
        'weight' => '15',
      ),
    ),
  );

  // Exported field: 'node-scheda_operatori_economici-field_geospatial'.
  $fields['node-scheda_operatori_economici-field_geospatial'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_geospatial',
      'foreign keys' => array(),
      'indexes' => array(),
      'locked' => '0',
      'module' => 'postgis',
      'settings' => array(
        'srid' => '4326',
        'type' => 'POINT',
      ),
      'translatable' => '0',
      'type' => 'postgis',
    ),
    'field_instance' => array(
      'bundle' => 'scheda_operatori_economici',
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'postgis',
          'settings' => array(),
          'type' => 'wkt',
          'weight' => '10',
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_geospatial',
      'label' => 'Geo - Spatial',
      'required' => 0,
      'settings' => array(
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'postgis',
        'settings' => array(
          'behavior' => 'openlayers_behavior_ole',
          'map' => 'postgis_widget_map',
        ),
        'type' => 'openlayers',
        'weight' => '13',
      ),
    ),
  );

  // Exported field: 'node-scheda_operatori_economici-field_getlocations'.
  $fields['node-scheda_operatori_economici-field_getlocations'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_getlocations',
      'foreign keys' => array(),
      'indexes' => array(
        'glid' => array(
          0 => 'glid',
        ),
      ),
      'locked' => '0',
      'module' => 'getlocations_fields',
      'settings' => array(
        'autocomplete_bias' => 1,
        'baselayers' => array(
          'Hybrid' => 1,
          'Map' => 1,
          'Physical' => 1,
          'Satellite' => 1,
        ),
        'behavior' => array(
          'overview' => 0,
          'overview_opened' => 0,
          'scale' => 0,
          'scrollwheel' => 0,
        ),
        'circles_clickable' => 0,
        'circles_coords' => '',
        'circles_enable' => 0,
        'circles_fillcolor' => '#FF0000',
        'circles_fillopacity' => '0.35',
        'circles_message' => '',
        'circles_radius' => 0,
        'circles_strokecolor' => '#FF0000',
        'circles_strokeopacity' => '0.8',
        'circles_strokeweight' => '3',
        'city_autocomplete' => '1',
        'comment_map_marker' => 'drupal',
        'controltype' => 'small',
        'country' => 'IT',
        'draggable' => 1,
        'fullscreen' => 0,
        'input_additional_required' => '0',
        'input_additional_weight' => '0',
        'input_additional_width' => '40',
        'input_address_width' => '40',
        'input_city_required' => '0',
        'input_city_weight' => '0',
        'input_city_width' => '40',
        'input_country_required' => '0',
        'input_country_weight' => '0',
        'input_country_width' => '40',
        'input_geobutton_weight' => '0',
        'input_geolocation_button_weight' => '0',
        'input_latitude_weight' => '0',
        'input_latitude_width' => '20',
        'input_longitude_weight' => '0',
        'input_longitude_width' => '20',
        'input_map_marker' => 'drupal',
        'input_map_weight' => '0',
        'input_marker_weight' => '0',
        'input_name_required' => '0',
        'input_name_weight' => '0',
        'input_name_width' => '40',
        'input_postal_code_required' => '0',
        'input_postal_code_weight' => '0',
        'input_postal_code_width' => '40',
        'input_province_required' => '0',
        'input_province_weight' => '0',
        'input_province_width' => '40',
        'input_smart_ip_button_weight' => 0,
        'input_street_required' => '0',
        'input_street_weight' => '0',
        'input_street_width' => '40',
        'latlon_warning' => 0,
        'latlong' => '40,0',
        'map_backgroundcolor' => '',
        'map_marker' => 'drupal',
        'mapheight' => '200px',
        'maptype' => 'Map',
        'mapwidth' => '300px',
        'maxzoom_map' => -1,
        'minzoom_map' => -1,
        'mtc' => 'standard',
        'node_map_marker' => 'drupal',
        'only_continents' => '',
        'only_countries' => '',
        'pancontrol' => 1,
        'per_item_marker' => 0,
        'polygons_clickable' => 0,
        'polygons_coords' => '',
        'polygons_enable' => 0,
        'polygons_fillcolor' => '#FF0000',
        'polygons_fillopacity' => '0.35',
        'polygons_message' => '',
        'polygons_strokecolor' => '#FF0000',
        'polygons_strokeopacity' => '0.8',
        'polygons_strokeweight' => '3',
        'polylines_clickable' => 0,
        'polylines_coords' => '',
        'polylines_enable' => 0,
        'polylines_message' => '',
        'polylines_strokecolor' => '#FF0000',
        'polylines_strokeopacity' => '0.8',
        'polylines_strokeweight' => '3',
        'province_autocomplete' => '1',
        'rectangles_clickable' => 0,
        'rectangles_coords' => '',
        'rectangles_enable' => 0,
        'rectangles_fillcolor' => '#FF0000',
        'rectangles_fillopacity' => '0.35',
        'rectangles_message' => '',
        'rectangles_strokecolor' => '#FF0000',
        'rectangles_strokeopacity' => '0.8',
        'rectangles_strokeweight' => '3',
        'restrict_by_country' => 0,
        'search_country' => 'IT',
        'show_bubble_on_one_marker' => 0,
        'show_maplinks' => 0,
        'use_address' => '0',
        'use_country_dropdown' => '1',
        'use_geolocation_button' => 1,
        'use_smart_ip_button' => 0,
        'use_smart_ip_latlon' => 0,
        'user_map_marker' => 'drupal',
        'vocabulary_map_marker' => 'drupal',
        'zoom' => '3',
      ),
      'translatable' => '0',
      'type' => 'getlocations_fields',
    ),
    'field_instance' => array(
      'bundle' => 'scheda_operatori_economici',
      'default_value' => array(
        0 => array(
          'name' => '',
          'street' => '',
          'additional' => '',
          'city' => '',
          'province' => '',
          'postal_code' => '',
          'country' => 'IT',
          'marker' => '',
          'latitude' => '',
          'longitude' => '',
          'active' => FALSE,
        ),
      ),
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'getlocations_fields',
          'settings' => array(
            'baselayers' => array(
              'Hybrid' => 1,
              'Map' => 1,
              'Physical' => 1,
              'Satellite' => 1,
            ),
            'behavior' => array(
              'overview' => 0,
              'overview_opened' => 0,
              'scale' => 0,
              'scrollwheel' => 0,
            ),
            'bicycleinfo' => 0,
            'bicycleinfo_state' => 0,
            'circles_clickable' => 0,
            'circles_coords' => '',
            'circles_enable' => 0,
            'circles_fillcolor' => '#FF0000',
            'circles_fillopacity' => '0.35',
            'circles_message' => '',
            'circles_radius' => '0',
            'circles_strokecolor' => '#FF0000',
            'circles_strokeopacity' => '0.8',
            'circles_strokeweight' => '3',
            'comment_map_marker' => 'drupal',
            'controltype' => 'small',
            'country_full' => 1,
            'display_additional' => 1,
            'display_city' => 1,
            'display_country' => 1,
            'display_dms' => 0,
            'display_latlong' => 1,
            'display_mapheight' => '400px',
            'display_maplink' => 1,
            'display_mapwidth' => '600px',
            'display_name' => 1,
            'display_onemap' => 0,
            'display_postal_code' => 1,
            'display_province' => 1,
            'display_showmap' => 1,
            'display_street' => 1,
            'draggable' => 1,
            'fullscreen' => 0,
            'map_backgroundcolor' => '',
            'map_marker' => 'drupal',
            'maptype' => 'Map',
            'markeraction' => '0',
            'markeractiontype' => '1',
            'maxzoom_map' => '-1',
            'minzoom_map' => '-1',
            'mtc' => 'standard',
            'node_map_marker' => 'drupal',
            'nodezoom' => '12',
            'pancontrol' => 1,
            'panoramio_show' => 0,
            'panoramio_state' => 0,
            'panoramio_use' => 0,
            'per_item_marker' => 0,
            'poi_show' => 1,
            'polygons_clickable' => 0,
            'polygons_coords' => '',
            'polygons_enable' => 0,
            'polygons_fillcolor' => '#FF0000',
            'polygons_fillopacity' => '0.35',
            'polygons_message' => '',
            'polygons_strokecolor' => '#FF0000',
            'polygons_strokeopacity' => '0.8',
            'polygons_strokeweight' => '3',
            'polylines_clickable' => 0,
            'polylines_coords' => '',
            'polylines_enable' => 0,
            'polylines_message' => '',
            'polylines_strokecolor' => '#FF0000',
            'polylines_strokeopacity' => '0.8',
            'polylines_strokeweight' => '3',
            'rectangles_clickable' => 0,
            'rectangles_coords' => '',
            'rectangles_enable' => 0,
            'rectangles_fillcolor' => '#FF0000',
            'rectangles_fillopacity' => '0.35',
            'rectangles_message' => '',
            'rectangles_strokecolor' => '#FF0000',
            'rectangles_strokeopacity' => '0.8',
            'rectangles_strokeweight' => '3',
            'show_bubble_on_one_marker' => 0,
            'show_maplinks' => 0,
            'streetview_show' => 0,
            'trafficinfo' => 0,
            'trafficinfo_state' => 0,
            'transit_show' => 1,
            'transitinfo' => 0,
            'transitinfo_state' => 0,
            'user_map_marker' => 'drupal',
            'vocabulary_map_marker' => 'drupal',
            'weather_cloud' => 1,
            'weather_cloud_state' => 0,
            'weather_show' => 0,
            'weather_state' => 0,
            'weather_use' => 0,
          ),
          'type' => 'getlocations_fields_default',
          'weight' => '5',
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_getlocations',
      'label' => 'Località',
      'required' => 1,
      'settings' => array(
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 0,
        'module' => 'getlocations_fields',
        'settings' => array(
          'city_autocomplete' => 0,
          'country' => 'IT',
          'input_additional_required' => 0,
          'input_additional_weight' => 0,
          'input_additional_width' => 40,
          'input_address_width' => 40,
          'input_city_required' => 0,
          'input_city_weight' => 0,
          'input_city_width' => 40,
          'input_country_required' => 0,
          'input_country_weight' => 0,
          'input_country_width' => 40,
          'input_latitude_weight' => 0,
          'input_latitude_width' => 20,
          'input_longitude_weight' => 0,
          'input_longitude_width' => 20,
          'input_name_required' => 0,
          'input_name_weight' => 0,
          'input_name_width' => 40,
          'input_postal_code_required' => 0,
          'input_postal_code_weight' => 0,
          'input_postal_code_width' => 40,
          'input_province_required' => 0,
          'input_province_weight' => 0,
          'input_province_width' => 40,
          'input_street_required' => 0,
          'input_street_weight' => 0,
          'input_street_width' => 40,
          'per_item_marker' => 0,
          'province_autocomplete' => 0,
          'use_address' => 1,
          'use_country_dropdown' => 1,
        ),
        'type' => 'getlocations_fields',
        'weight' => '7',
      ),
    ),
  );

  // Exported field: 'node-scheda_operatori_economici-field_info'.
  $fields['node-scheda_operatori_economici-field_info'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_info',
      'foreign keys' => array(
        'format' => array(
          'columns' => array(
            'format' => 'format',
          ),
          'table' => 'filter_format',
        ),
      ),
      'indexes' => array(
        'format' => array(
          0 => 'format',
        ),
      ),
      'locked' => '0',
      'module' => 'text',
      'settings' => array(),
      'translatable' => '1',
      'type' => 'text_long',
    ),
    'field_instance' => array(
      'bundle' => 'scheda_operatori_economici',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'hidden',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '13',
        ),
        'full' => array(
          'label' => 'inline',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => '8',
        ),
        'notifications' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_info',
      'label' => 'Info',
      'required' => 0,
      'settings' => array(
        'text_processing' => '0',
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'text',
        'settings' => array(
          'rows' => '5',
        ),
        'type' => 'text_textarea',
        'weight' => '10',
      ),
    ),
  );

  // Exported field: 'node-scheda_operatori_economici-field_latitudine'.
  $fields['node-scheda_operatori_economici-field_latitudine'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_latitudine',
      'foreign keys' => array(),
      'indexes' => array(),
      'locked' => '0',
      'module' => 'number',
      'settings' => array(
        'decimal_separator' => '.',
      ),
      'translatable' => '1',
      'type' => 'number_float',
    ),
    'field_instance' => array(
      'bundle' => 'scheda_operatori_economici',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'hidden',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '14',
        ),
        'full' => array(
          'label' => 'above',
          'module' => 'number',
          'settings' => array(
            'decimal_separator' => '.',
            'prefix_suffix' => TRUE,
            'scale' => 2,
            'thousand_separator' => ' ',
          ),
          'type' => 'number_decimal',
          'weight' => '9',
        ),
        'notifications' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_latitudine',
      'label' => 'Latitudine',
      'required' => 0,
      'settings' => array(
        'max' => '',
        'min' => '',
        'prefix' => '',
        'suffix' => '',
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 0,
        'module' => 'number',
        'settings' => array(),
        'type' => 'number',
        'weight' => '16',
      ),
    ),
  );

  // Exported field: 'node-scheda_operatori_economici-field_location'.
  $fields['node-scheda_operatori_economici-field_location'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_location',
      'foreign keys' => array(),
      'indexes' => array(
        'lid' => array(
          0 => 'lid',
        ),
      ),
      'locked' => '0',
      'module' => 'location_cck',
      'settings' => array(
        'gmap_macro' => '[gmap ]',
        'gmap_marker' => 'drupal',
        'location_settings' => array(
          'display' => array(
            'hide' => array(
              'additional' => 'additional',
              'city' => 0,
              'coords' => 'coords',
              'country' => 0,
              'country_name' => 0,
              'locpick' => 'locpick',
              'map_link' => 'map_link',
              'name' => 'name',
              'postal_code' => 0,
              'province' => 0,
              'province_name' => 0,
              'street' => 0,
            ),
          ),
          'form' => array(
            'fields' => array(
              'additional' => array(
                'collect' => '0',
                'default' => '',
                'weight' => '-94',
              ),
              'city' => array(
                'collect' => '1',
                'default' => '',
                'weight' => '-98',
              ),
              'country' => array(
                'collect' => '1',
                'default' => 'it',
                'weight' => '-96',
              ),
              'locpick' => array(
                'collect' => '0',
                'weight' => '-93',
              ),
              'name' => array(
                'collect' => '0',
                'default' => '',
                'weight' => '-95',
              ),
              'postal_code' => array(
                'collect' => '1',
                'default' => '',
                'weight' => '-99',
              ),
              'province' => array(
                'collect' => '1',
                'default' => '',
                'weight' => '-97',
                'widget' => 'autocomplete',
              ),
              'street' => array(
                'collect' => '1',
                'default' => '',
                'weight' => '-100',
              ),
            ),
          ),
        ),
      ),
      'translatable' => '1',
      'type' => 'location',
    ),
    'field_instance' => array(
      'bundle' => 'scheda_operatori_economici',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'hidden',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '12',
        ),
        'full' => array(
          'label' => 'inline',
          'module' => 'location_cck',
          'settings' => array(),
          'type' => 'location_default',
          'weight' => '3',
        ),
        'notifications' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_location',
      'label' => 'Località',
      'required' => 0,
      'settings' => array(
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 0,
        'module' => 'location_cck',
        'settings' => array(),
        'type' => 'location',
        'weight' => '14',
      ),
    ),
  );

  // Exported field: 'node-scheda_operatori_economici-field_longitudine'.
  $fields['node-scheda_operatori_economici-field_longitudine'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_longitudine',
      'foreign keys' => array(),
      'indexes' => array(),
      'locked' => '0',
      'module' => 'number',
      'settings' => array(
        'decimal_separator' => '.',
      ),
      'translatable' => '1',
      'type' => 'number_float',
    ),
    'field_instance' => array(
      'bundle' => 'scheda_operatori_economici',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'hidden',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '15',
        ),
        'full' => array(
          'label' => 'above',
          'module' => 'number',
          'settings' => array(
            'decimal_separator' => '.',
            'prefix_suffix' => TRUE,
            'scale' => 2,
            'thousand_separator' => ' ',
          ),
          'type' => 'number_decimal',
          'weight' => '10',
        ),
        'notifications' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_longitudine',
      'label' => 'Longitudine',
      'required' => 0,
      'settings' => array(
        'max' => '',
        'min' => '',
        'prefix' => '',
        'suffix' => '',
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 0,
        'module' => 'number',
        'settings' => array(),
        'type' => 'number',
        'weight' => '17',
      ),
    ),
  );

  // Exported field: 'node-scheda_operatori_economici-field_mail'.
  $fields['node-scheda_operatori_economici-field_mail'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_mail',
      'foreign keys' => array(
        'format' => array(
          'columns' => array(
            'format' => 'format',
          ),
          'table' => 'filter_format',
        ),
      ),
      'indexes' => array(
        'format' => array(
          0 => 'format',
        ),
      ),
      'locked' => '0',
      'module' => 'text',
      'settings' => array(
        'max_length' => '255',
      ),
      'translatable' => '1',
      'type' => 'text',
    ),
    'field_instance' => array(
      'bundle' => 'scheda_operatori_economici',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => '9',
        ),
        'full' => array(
          'label' => 'inline',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => '7',
        ),
        'notifications' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_mail',
      'label' => 'E-mail',
      'required' => 0,
      'settings' => array(
        'text_processing' => '0',
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'text',
        'settings' => array(
          'size' => '60',
        ),
        'type' => 'text_textfield',
        'weight' => '12',
      ),
    ),
  );

  // Exported field: 'node-scheda_operatori_economici-field_ref_porto'.
  $fields['node-scheda_operatori_economici-field_ref_porto'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '-1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_ref_porto',
      'foreign keys' => array(
        'nid' => array(
          'columns' => array(
            'nid' => 'nid',
          ),
          'table' => 'node',
        ),
      ),
      'indexes' => array(
        'nid' => array(
          0 => 'nid',
        ),
      ),
      'locked' => '0',
      'module' => 'node_reference',
      'settings' => array(
        'referenceable_types' => array(
          'page' => 0,
          'panel' => 0,
          'scheda_gestore' => 0,
          'scheda_itinerario' => 0,
          'scheda_operatori_economici' => 0,
          'scheda_porto' => 'scheda_porto',
          'scheda_prodotto' => 0,
          'scheda_territorio' => 0,
        ),
        'view' => array(
          'args' => array(),
          'display_name' => '',
          'view_name' => '',
        ),
      ),
      'translatable' => '1',
      'type' => 'node_reference',
    ),
    'field_instance' => array(
      'bundle' => 'scheda_operatori_economici',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => 'Selezionare un porto di riferimento se l\'operatore economico o l\'attività è localizzata nelle immediate vicinanze.',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'node_reference',
          'settings' => array(),
          'type' => 'node_reference_default',
          'weight' => '1',
        ),
        'full' => array(
          'label' => 'inline',
          'module' => 'node_reference',
          'settings' => array(),
          'type' => 'node_reference_default',
          'weight' => '2',
        ),
        'notifications' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_ref_porto',
      'label' => 'Porto di riferimento',
      'required' => 0,
      'settings' => array(
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'node_reference',
        'settings' => array(
          'autocomplete_match' => 'contains',
          'autocomplete_path' => 'node_reference/autocomplete',
          'size' => '60',
        ),
        'type' => 'node_reference_autocomplete',
        'weight' => '3',
      ),
    ),
  );

  // Exported field: 'node-scheda_operatori_economici-field_settore_economico'.
  $fields['node-scheda_operatori_economici-field_settore_economico'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_settore_economico',
      'foreign keys' => array(
        'tid' => array(
          'columns' => array(
            'tid' => 'tid',
          ),
          'table' => 'taxonomy_term_data',
        ),
      ),
      'indexes' => array(
        'tid' => array(
          0 => 'tid',
        ),
      ),
      'locked' => '0',
      'module' => 'taxonomy',
      'settings' => array(
        'allowed_values' => array(
          0 => array(
            'vocabulary' => 'settore_economico',
            'parent' => '0',
          ),
        ),
        'options_list_callback' => 'i18n_taxonomy_allowed_values',
      ),
      'translatable' => '1',
      'type' => 'taxonomy_term_reference',
    ),
    'field_instance' => array(
      'bundle' => 'scheda_operatori_economici',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'taxonomy',
          'settings' => array(),
          'type' => 'taxonomy_term_reference_plain',
          'weight' => '2',
        ),
        'full' => array(
          'label' => 'inline',
          'module' => 'taxonomy',
          'settings' => array(),
          'type' => 'taxonomy_term_reference_plain',
          'weight' => '1',
        ),
        'notifications' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_settore_economico',
      'label' => 'Settore economico',
      'required' => 1,
      'settings' => array(
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'hs_taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_hs',
        'weight' => '2',
      ),
    ),
  );

  // Exported field: 'node-scheda_operatori_economici-field_territori'.
  $fields['node-scheda_operatori_economici-field_territori'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_territori',
      'foreign keys' => array(
        'nid' => array(
          'columns' => array(
            'nid' => 'nid',
          ),
          'table' => 'node',
        ),
      ),
      'indexes' => array(
        'nid' => array(
          0 => 'nid',
        ),
      ),
      'locked' => '0',
      'module' => 'node_reference',
      'settings' => array(
        'referenceable_types' => array(
          'article' => 0,
          'book' => 0,
          'forumtype' => 0,
          'page' => 0,
          'panel' => 0,
          'product' => 0,
          'scheda_gestore' => 0,
          'scheda_itinerario' => 0,
          'scheda_operatori_economici' => 0,
          'scheda_porto' => 0,
          'scheda_prodotto' => 0,
          'scheda_territorio' => 'scheda_territorio',
        ),
        'view' => array(
          'args' => array(),
          'display_name' => '',
          'view_name' => '',
        ),
      ),
      'translatable' => '1',
      'type' => 'node_reference',
    ),
    'field_instance' => array(
      'bundle' => 'scheda_operatori_economici',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'node_reference',
          'settings' => array(),
          'type' => 'node_reference_default',
          'weight' => '3',
        ),
        'notifications' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_territori',
      'label' => 'Territorio di riferimento',
      'required' => 0,
      'settings' => array(
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'options',
        'settings' => array(),
        'type' => 'options_select',
        'weight' => '5',
      ),
    ),
  );

  // Exported field: 'node-scheda_operatori_economici-field_virtual_organization'.
  $fields['node-scheda_operatori_economici-field_virtual_organization'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_virtual_organization',
      'foreign keys' => array(),
      'indexes' => array(
        'value' => array(
          0 => 'value',
        ),
      ),
      'locked' => '0',
      'module' => 'list',
      'settings' => array(
        'allowed_values' => array(
          0 => 'no',
          1 => 'si',
        ),
        'allowed_values_function' => '',
      ),
      'translatable' => '0',
      'type' => 'list_boolean',
    ),
    'field_instance' => array(
      'bundle' => 'scheda_operatori_economici',
      'default_value' => array(
        0 => array(
          'value' => 0,
        ),
      ),
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'list',
          'settings' => array(),
          'type' => 'list_default',
          'weight' => 16,
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_virtual_organization',
      'label' => 'Aderente alla virtual organization',
      'required' => 0,
      'settings' => array(
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'options',
        'settings' => array(
          'display_label' => 1,
        ),
        'type' => 'options_onoff',
        'weight' => '4',
      ),
    ),
  );

  // Exported field: 'node-scheda_operatori_economici-field_web'.
  $fields['node-scheda_operatori_economici-field_web'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_web',
      'foreign keys' => array(),
      'indexes' => array(),
      'locked' => '0',
      'module' => 'link',
      'settings' => array(
        'attributes' => array(
          'class' => '',
          'rel' => '',
          'target' => 'default',
        ),
        'display' => array(
          'url_cutoff' => 80,
        ),
        'enable_tokens' => 1,
        'title' => 'optional',
        'title_maxlength' => 128,
        'title_value' => '',
        'url' => 0,
      ),
      'translatable' => '1',
      'type' => 'link_field',
    ),
    'field_instance' => array(
      'bundle' => 'scheda_operatori_economici',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'link',
          'settings' => array(),
          'type' => 'link_default',
          'weight' => '8',
        ),
        'full' => array(
          'label' => 'inline',
          'module' => 'link',
          'settings' => array(),
          'type' => 'link_default',
          'weight' => '6',
        ),
        'notifications' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_web',
      'label' => 'Sito web',
      'required' => 0,
      'settings' => array(
        'attributes' => array(
          'class' => '',
          'rel' => '',
          'target' => 'default',
        ),
        'display' => array(
          'url_cutoff' => '80',
        ),
        'enable_tokens' => 1,
        'title' => 'none',
        'title_maxlength' => 128,
        'title_value' => '',
        'url' => 'optional',
        'user_register_form' => FALSE,
        'validate_url' => 1,
      ),
      'widget' => array(
        'active' => 0,
        'module' => 'link',
        'settings' => array(),
        'type' => 'link_field',
        'weight' => '11',
      ),
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Aderente alla virtual organization');
  t('Descrizione attività');
  t('E-mail');
  t('Fax');
  t('Geo');
  t('Geo - Spatial');
  t('Info');
  t('Latitudine');
  t('Località');
  t('Longitudine');
  t('Porto di riferimento');
  t('Selezionare un porto di riferimento se l\'operatore economico o l\'attività è localizzata nelle immediate vicinanze.');
  t('Settore economico');
  t('Sito web');
  t('Telefono');
  t('Territorio di riferimento');

  return $fields;
}
