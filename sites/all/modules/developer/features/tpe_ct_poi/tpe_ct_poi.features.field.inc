<?php
/**
 * @file
 * tpe_ct_poi.features.field.inc
 */

/**
 * Implements hook_field_default_fields().
 */
function tpe_ct_poi_field_default_fields() {
  $fields = array();

  // Exported field: 'node-poi-body'.
  $fields['node-poi-body'] = array(
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
      'bundle' => 'poi',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'hidden',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '2',
        ),
        'search_result' => array(
          'label' => 'hidden',
          'module' => 'text',
          'settings' => array(
            'trim_length' => '400',
          ),
          'type' => 'text_summary_or_trimmed',
          'weight' => '2',
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
      'label' => 'Body',
      'required' => FALSE,
      'settings' => array(
        'display_summary' => TRUE,
        'text_processing' => 1,
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'module' => 'text',
        'settings' => array(
          'rows' => 20,
          'summary_rows' => 5,
        ),
        'type' => 'text_textarea_with_summary',
        'weight' => '1',
      ),
    ),
  );

  // Exported field: 'node-poi-field_geospatial'.
  $fields['node-poi-field_geospatial'] = array(
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
      'bundle' => 'poi',
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'postgis',
          'settings' => array(),
          'type' => 'wkt',
          'weight' => 6,
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
      'required' => FALSE,
      'settings' => array(
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'module' => 'postgis',
        'settings' => array(
          'behavior' => 'openlayers_behavior_ole',
          'map' => 'default',
        ),
        'type' => 'openlayers',
        'weight' => '7',
      ),
    ),
  );

  // Exported field: 'node-poi-field_getlocations'.
  $fields['node-poi-field_getlocations'] = array(
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
      'bundle' => 'poi',
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
            'circles_radius' => 0,
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
            'display_mapheight' => '200px',
            'display_maplink' => 1,
            'display_mapwidth' => '300px',
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
            'markeraction' => 0,
            'markeractiontype' => 1,
            'maxzoom_map' => -1,
            'minzoom_map' => -1,
            'mtc' => 'standard',
            'node_map_marker' => 'drupal',
            'nodezoom' => 12,
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
          'weight' => '3',
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
      'required' => 0,
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
        'weight' => '12',
      ),
    ),
  );

  // Exported field: 'node-poi-field_immagine'.
  $fields['node-poi-field_immagine'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '-1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_immagine',
      'foreign keys' => array(
        'fid' => array(
          'columns' => array(
            'fid' => 'fid',
          ),
          'table' => 'file_managed',
        ),
      ),
      'indexes' => array(
        'fid' => array(
          0 => 'fid',
        ),
      ),
      'locked' => '0',
      'module' => 'image',
      'settings' => array(
        'default_image' => 0,
        'uri_scheme' => 'public',
      ),
      'translatable' => '0',
      'type' => 'image',
    ),
    'field_instance' => array(
      'bundle' => 'poi',
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'hidden',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '4',
        ),
        'search_result' => array(
          'label' => 'hidden',
          'module' => 'image',
          'settings' => array(
            'image_link' => '',
            'image_style' => 'thumbnail',
          ),
          'type' => 'image',
          'weight' => '0',
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_immagine',
      'label' => 'Image',
      'required' => 0,
      'settings' => array(
        'alt_field' => 1,
        'default_image' => 0,
        'file_directory' => '',
        'file_extensions' => 'png gif jpg jpeg',
        'max_filesize' => '',
        'max_resolution' => '',
        'min_resolution' => '',
        'title_field' => 1,
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'media',
        'settings' => array(
          'allowed_schemes' => array(
            0 => 'public',
            1 => 'private',
          ),
          'allowed_types' => array(
            0 => 'image',
          ),
          'preview_image_style' => 'thumbnail',
          'progress_indicator' => 'throbber',
        ),
        'type' => 'media_generic',
        'weight' => '3',
      ),
    ),
  );

  // Exported field: 'node-poi-field_location'.
  $fields['node-poi-field_location'] = array(
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
      'bundle' => 'poi',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '1',
        ),
        'search_result' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '4',
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'ds_extras_field_template' => '',
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
        'weight' => '6',
      ),
    ),
  );

  // Exported field: 'node-poi-field_original_link'.
  $fields['node-poi-field_original_link'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_original_link',
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
      'translatable' => '0',
      'type' => 'link_field',
    ),
    'field_instance' => array(
      'bundle' => 'poi',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '0',
        ),
        'search_result' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '3',
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'ds_extras_field_template' => '',
      'entity_type' => 'node',
      'field_name' => 'field_original_link',
      'label' => 'Original link',
      'required' => 0,
      'settings' => array(
        'attributes' => array(
          'class' => '',
          'configurable_title' => 0,
          'rel' => '',
          'target' => 'default',
          'title' => '',
        ),
        'display' => array(
          'url_cutoff' => '80',
        ),
        'enable_tokens' => 1,
        'title' => 'optional',
        'title_maxlength' => '128',
        'title_value' => '',
        'url' => 0,
        'user_register_form' => FALSE,
        'validate_url' => 1,
      ),
      'widget' => array(
        'active' => 0,
        'module' => 'link',
        'settings' => array(),
        'type' => 'link_field',
        'weight' => '5',
      ),
    ),
  );

  // Exported field: 'node-poi-field_types'.
  $fields['node-poi-field_types'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_types',
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
            'vocabulary' => 'types',
            'parent' => '0',
          ),
        ),
        'options_list_callback' => 'i18n_taxonomy_allowed_values',
      ),
      'translatable' => '0',
      'type' => 'taxonomy_term_reference',
    ),
    'field_instance' => array(
      'bundle' => 'poi',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'hidden',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '5',
        ),
        'search_result' => array(
          'label' => 'hidden',
          'module' => 'i18n_taxonomy',
          'settings' => array(),
          'type' => 'i18n_taxonomy_term_reference_plain',
          'weight' => '1',
        ),
        'teaser' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'field_types',
      'label' => 'Types',
      'required' => 0,
      'settings' => array(
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'options',
        'settings' => array(),
        'type' => 'options_select',
        'weight' => '4',
      ),
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Body');
  t('Geo - Spatial');
  t('Image');
  t('Località');
  t('Original link');
  t('Types');

  return $fields;
}