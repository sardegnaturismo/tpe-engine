<?php
/**
 * @file
 * tpe_openlayers.openlayers_maps.inc
 */

/**
 * Implements hook_openlayers_maps().
 */
function tpe_openlayers_openlayers_maps() {
  $export = array();

  $openlayers_maps = new stdClass();
  $openlayers_maps->disabled = FALSE; /* Edit this to true to make a default openlayers_maps disabled initially */
  $openlayers_maps->api_version = 1;
  $openlayers_maps->name = 'clone_of_tpe_ports';
  $openlayers_maps->title = 'TPE ports demo';
  $openlayers_maps->description = 'All the TPE\'s ports';
  $openlayers_maps->data = array(
    'width' => 'auto',
    'height' => '400px',
    'image_path' => 'profiles/cartaro/modules/contrib/openlayers/themes/default_dark/img/',
    'css_path' => 'profiles/cartaro/modules/contrib/openlayers/themes/default_dark/style.css',
    'proxy_host' => '',
    'hide_empty_map' => 0,
    'center' => array(
      'initial' => array(
        'centerpoint' => '9.05273422139182, 41.475659619804865',
        'zoom' => '7',
      ),
      'restrict' => array(
        'restrictextent' => 0,
        'restrictedExtent' => '',
      ),
    ),
    'behaviors' => array(
      'openlayers_behavior_fullscreen' => array(
        'activated' => 0,
      ),
      'openlayers_behavior_layerswitcher' => array(
        'ascending' => 1,
        'roundedCorner' => 1,
        'roundedCornerColor' => '#222222',
        'maximizeDefault' => 0,
      ),
      'openlayers_behavior_dragpan' => array(),
      'openlayers_behavior_navigation' => array(
        'zoomWheelEnabled' => 0,
        'zoomBoxEnabled' => 1,
        'documentDrag' => 1,
      ),
      'openlayers_behavior_panzoom' => array(),
      'openlayers_behavior_permalink' => array(
        'anchor' => 0,
      ),
      'openlayers_behavior_popup' => array(
        'layers' => array(
          'mappa_porti_porti_overlay' => 'mappa_porti_porti_overlay',
          'maps_openlayers_1' => 'maps_openlayers_1',
          'poi_wfs' => 'poi_wfs',
          'tpe_gestori_wfs' => 'tpe_gestori_wfs',
          'tpe_prodotti_wfs' => 'tpe_prodotti_wfs',
        ),
      ),
      'openlayers_behavior_zoomtolayer' => array(
        'zoomtolayer' => array(
          'poi_wfs' => 'poi_wfs',
          'mapquest_osm' => 0,
          'mappa_porti_porti_overlay' => 0,
          'maps_openlayers_1' => 0,
          'tpe_gestori_wfs' => 0,
          'tpe_prodotti_wfs' => 0,
        ),
        'point_zoom_level' => '5',
        'zoomtolayer_scale' => '1',
      ),
    ),
    'default_layer' => 'mapquest_osm',
    'layers' => array(
      'mapquest_osm' => 'mapquest_osm',
      'mappa_porti_porti_overlay' => 'mappa_porti_porti_overlay',
      'poi_wfs' => 'poi_wfs',
      'tpe_prodotti_wfs' => 'tpe_prodotti_wfs',
      'tpe_gestori_wfs' => 'tpe_gestori_wfs',
    ),
    'layer_weight' => array(
      'mappa_porti_porti_overlay' => '0',
      'postgis_formatter_layer' => '0',
      'maps_openlayers_1' => '0',
      'poi_wfs' => '0',
      'tpe_prodotti_wfs' => '0',
      'tpe_gestori_wfs' => '0',
      'contents_poi_poi_map_overlay' => '0',
      'openlayers_geojson_picture_this' => '0',
      'ports_of_calls_wfs' => '0',
      'geofield_formatter' => '0',
      'tpe_territori_wfs' => '0',
      'poichiese1_wfs' => '0',
      'operatori_economici_wfs' => '0',
      'chiese_dal_geoserver' => '0',
    ),
    'layer_styles' => array(
      'chiese_dal_geoserver' => 'religious-christian',
      'geofield_formatter' => '0',
      'ports_of_calls_wfs' => '0',
      'tpe_territori_wfs' => '0',
      'poichiese1_wfs' => 'cemetery-christian',
      'operatori_economici_wfs' => '0',
      'openlayers_geojson_picture_this' => '0',
      'contents_poi_poi_map_overlay' => '0',
      'postgis_formatter_layer' => '0',
      'mappa_porti_porti_overlay' => 'port',
      'maps_openlayers_1' => 'default_marker_black_small',
      'poi_wfs' => '0',
      'tpe_gestori_wfs' => 'tourism',
      'tpe_prodotti_wfs' => 'shopping',
    ),
    'layer_styles_select' => array(
      'chiese_dal_geoserver' => 'religious-christian',
      'geofield_formatter' => '0',
      'ports_of_calls_wfs' => '0',
      'tpe_territori_wfs' => '0',
      'poichiese1_wfs' => 'cemetery-christian',
      'operatori_economici_wfs' => '0',
      'openlayers_geojson_picture_this' => '0',
      'contents_poi_poi_map_overlay' => '0',
      'postgis_formatter_layer' => '0',
      'mappa_porti_porti_overlay' => 'port',
      'maps_openlayers_1' => 'default_marker_black',
      'poi_wfs' => '0',
      'tpe_gestori_wfs' => 'tourism',
      'tpe_prodotti_wfs' => 'shopping',
    ),
    'layer_activated' => array(
      'mappa_porti_porti_overlay' => 'mappa_porti_porti_overlay',
      'maps_openlayers_1' => 0,
      'poi_wfs' => 0,
      'tpe_gestori_wfs' => 0,
      'tpe_prodotti_wfs' => 0,
      'chiese_dal_geoserver' => 0,
      'geofield_formatter' => 0,
      'ports_of_calls_wfs' => 0,
      'tpe_territori_wfs' => 0,
      'poichiese1_wfs' => 0,
      'operatori_economici_wfs' => 0,
      'openlayers_geojson_picture_this' => 0,
      'contents_poi_poi_map_overlay' => 0,
      'postgis_formatter_layer' => 0,
    ),
    'layer_switcher' => array(
      'mappa_porti_porti_overlay' => 'mappa_porti_porti_overlay',
      'poi_wfs' => 'poi_wfs',
      'tpe_gestori_wfs' => 'tpe_gestori_wfs',
      'tpe_prodotti_wfs' => 'tpe_prodotti_wfs',
      'maps_openlayers_1' => 0,
      'chiese_dal_geoserver' => 0,
      'geofield_formatter' => 0,
      'ports_of_calls_wfs' => 0,
      'tpe_territori_wfs' => 0,
      'poichiese1_wfs' => 0,
      'operatori_economici_wfs' => 0,
      'openlayers_geojson_picture_this' => 0,
      'contents_poi_poi_map_overlay' => 0,
      'postgis_formatter_layer' => 0,
    ),
    'projection' => '900913',
    'displayProjection' => '4326',
    'styles' => array(
      'default' => 'default',
      'select' => 'default_select',
      'temporary' => 'default',
    ),
  );
  $export['clone_of_tpe_ports'] = $openlayers_maps;

  $openlayers_maps = new stdClass();
  $openlayers_maps->disabled = FALSE; /* Edit this to true to make a default openlayers_maps disabled initially */
  $openlayers_maps->api_version = 1;
  $openlayers_maps->name = 'tpe_poi';
  $openlayers_maps->title = 'tpe_POI';
  $openlayers_maps->description = 'All the TPE\'s points of interest';
  $openlayers_maps->data = array(
    'width' => 'auto',
    'height' => '400px',
    'image_path' => 'profiles/cartaro/modules/contrib/openlayers/themes/default_dark/img/',
    'css_path' => 'profiles/cartaro/modules/contrib/openlayers/themes/default_dark/style.css',
    'proxy_host' => '',
    'hide_empty_map' => 0,
    'center' => array(
      'initial' => array(
        'centerpoint' => '9.184570156654916, 41.574360724727164',
        'zoom' => '6',
      ),
      'restrict' => array(
        'restrictextent' => 1,
        'restrictedExtent' => '469629.09375,4449736.141013,1604566.070313,5858623.422263',
      ),
    ),
    'behaviors' => array(
      'openlayers_behavior_keyboarddefaults' => array(),
      'openlayers_behavior_attribution' => array(
        'seperator' => '',
      ),
      'openlayers_behavior_layerswitcher' => array(
        'ascending' => 1,
        'roundedCorner' => 1,
        'roundedCornerColor' => '#222222',
        'maximizeDefault' => 0,
      ),
      'openlayers_behavior_navigation' => array(
        'zoomWheelEnabled' => 1,
        'zoomBoxEnabled' => 1,
        'documentDrag' => 0,
      ),
      'openlayers_behavior_panzoombar' => array(
        'zoomWorldIcon' => 1,
        'panIcons' => 1,
      ),
      'openlayers_behavior_popup' => array(
        'layers' => array(
          'maps_openlayers_1' => 'maps_openlayers_1',
        ),
      ),
    ),
    'default_layer' => 'mapquest_osm',
    'layers' => array(
      'mapquest_osm' => 'mapquest_osm',
      'mapquest_openaerial' => 'mapquest_openaerial',
      'maps_openlayers_1' => 'maps_openlayers_1',
    ),
    'layer_weight' => array(
      'mappa_porti_porti_overlay' => '0',
      'contents_poi_poi_map_overlay' => '0',
      'postgis_formatter_layer' => '0',
      'maps_openlayers_1' => '0',
      'openlayers_geojson_picture_this' => '0',
      'poi_wfs' => '0',
      'geofield_formatter' => '0',
      'ports_of_calls_wfs' => '0',
      'tpe_territori_wfs' => '0',
      'poichiese1_wfs' => '0',
      'chiese_dal_geoserver' => '0',
    ),
    'layer_styles' => array(
      'chiese_dal_geoserver' => '0',
      'geofield_formatter' => '0',
      'ports_of_calls_wfs' => '0',
      'tpe_territori_wfs' => '0',
      'poichiese1_wfs' => '0',
      'poi_wfs' => '0',
      'openlayers_geojson_picture_this' => '0',
      'mappa_porti_porti_overlay' => '0',
      'contents_poi_poi_map_overlay' => '0',
      'postgis_formatter_layer' => '0',
      'maps_openlayers_1' => '0',
    ),
    'layer_styles_select' => array(
      'chiese_dal_geoserver' => '0',
      'geofield_formatter' => '0',
      'ports_of_calls_wfs' => '0',
      'tpe_territori_wfs' => '0',
      'poichiese1_wfs' => '0',
      'poi_wfs' => '0',
      'openlayers_geojson_picture_this' => '0',
      'mappa_porti_porti_overlay' => '0',
      'contents_poi_poi_map_overlay' => '0',
      'postgis_formatter_layer' => '0',
      'maps_openlayers_1' => '0',
    ),
    'layer_activated' => array(
      'maps_openlayers_1' => 'maps_openlayers_1',
      'chiese_dal_geoserver' => 0,
      'geofield_formatter' => 0,
      'ports_of_calls_wfs' => 0,
      'tpe_territori_wfs' => 0,
      'poichiese1_wfs' => 0,
      'poi_wfs' => 0,
      'openlayers_geojson_picture_this' => 0,
      'mappa_porti_porti_overlay' => 0,
      'contents_poi_poi_map_overlay' => 0,
      'postgis_formatter_layer' => 0,
    ),
    'layer_switcher' => array(
      'maps_openlayers_1' => 'maps_openlayers_1',
      'chiese_dal_geoserver' => 0,
      'geofield_formatter' => 0,
      'ports_of_calls_wfs' => 0,
      'tpe_territori_wfs' => 0,
      'poichiese1_wfs' => 0,
      'poi_wfs' => 0,
      'openlayers_geojson_picture_this' => 0,
      'mappa_porti_porti_overlay' => 0,
      'contents_poi_poi_map_overlay' => 0,
      'postgis_formatter_layer' => 0,
    ),
    'projection' => '900913',
    'displayProjection' => '4326',
    'styles' => array(
      'default' => 'default',
      'select' => 'default_select',
      'temporary' => 'default',
    ),
  );
  $export['tpe_poi'] = $openlayers_maps;

  $openlayers_maps = new stdClass();
  $openlayers_maps->disabled = FALSE; /* Edit this to true to make a default openlayers_maps disabled initially */
  $openlayers_maps->api_version = 1;
  $openlayers_maps->name = 'tpe_ports';
  $openlayers_maps->title = 'TPE ports';
  $openlayers_maps->description = 'All the TPE\'s ports';
  $openlayers_maps->data = array(
    'width' => 'auto',
    'height' => '400px',
    'image_path' => 'profiles/cartaro/modules/contrib/openlayers/themes/default_dark/img/',
    'css_path' => 'profiles/cartaro/modules/contrib/openlayers/themes/default_dark/style.css',
    'proxy_host' => '',
    'hide_empty_map' => 0,
    'center' => array(
      'initial' => array(
        'centerpoint' => '9.711913897707305, 41.55792099667315',
        'zoom' => '6',
      ),
      'restrict' => array(
        'restrictextent' => 0,
        'restrictedExtent' => '',
      ),
    ),
    'behaviors' => array(
      'openlayers_behavior_keyboarddefaults' => array(),
      'openlayers_behavior_attribution' => array(
        'seperator' => '',
      ),
      'openlayers_behavior_layerswitcher' => array(
        'ascending' => 1,
        'roundedCorner' => 1,
        'roundedCornerColor' => '#222222',
        'maximizeDefault' => 0,
      ),
      'openlayers_behavior_navigation' => array(
        'zoomWheelEnabled' => 1,
        'zoomBoxEnabled' => 1,
        'documentDrag' => 0,
      ),
      'openlayers_behavior_panzoombar' => array(
        'zoomWorldIcon' => 0,
        'panIcons' => 1,
      ),
    ),
    'default_layer' => 'mapquest_osm',
    'layers' => array(
      'mapquest_osm' => 'mapquest_osm',
      'mapquest_openaerial' => 'mapquest_openaerial',
      'ports_of_calls_wfs' => 'ports_of_calls_wfs',
    ),
    'layer_weight' => array(
      'mappa_porti_porti_overlay' => '0',
      'openlayers_geojson_picture_this' => '0',
      'maps_openlayers_1' => '0',
      'contents_poi_poi_map_overlay' => '0',
      'ports_of_calls_wfs' => '0',
      'postgis_formatter_layer' => '0',
      'tpe_prodotti_wfs' => '0',
      'tpe_gestori_wfs' => '0',
      'tpe_territori_wfs' => '0',
      'geofield_formatter' => '0',
      'poichiese1_wfs' => '0',
      'poi_wfs' => '0',
      'operatori_economici_wfs' => '0',
      'chiese_dal_geoserver' => '0',
    ),
    'layer_styles' => array(
      'chiese_dal_geoserver' => '0',
      'geofield_formatter' => '0',
      'tpe_territori_wfs' => '0',
      'poichiese1_wfs' => '0',
      'poi_wfs' => '0',
      'operatori_economici_wfs' => '0',
      'tpe_gestori_wfs' => '0',
      'tpe_prodotti_wfs' => '0',
      'openlayers_geojson_picture_this' => '0',
      'mappa_porti_porti_overlay' => '0',
      'maps_openlayers_1' => '0',
      'contents_poi_poi_map_overlay' => '0',
      'postgis_formatter_layer' => '0',
      'ports_of_calls_wfs' => '0',
    ),
    'layer_styles_select' => array(
      'chiese_dal_geoserver' => '0',
      'geofield_formatter' => '0',
      'tpe_territori_wfs' => '0',
      'poichiese1_wfs' => '0',
      'poi_wfs' => '0',
      'operatori_economici_wfs' => '0',
      'tpe_gestori_wfs' => '0',
      'tpe_prodotti_wfs' => '0',
      'openlayers_geojson_picture_this' => '0',
      'mappa_porti_porti_overlay' => '0',
      'maps_openlayers_1' => '0',
      'contents_poi_poi_map_overlay' => '0',
      'postgis_formatter_layer' => '0',
      'ports_of_calls_wfs' => '0',
    ),
    'layer_activated' => array(
      'ports_of_calls_wfs' => 'ports_of_calls_wfs',
      'chiese_dal_geoserver' => 0,
      'geofield_formatter' => 0,
      'tpe_territori_wfs' => 0,
      'poichiese1_wfs' => 0,
      'poi_wfs' => 0,
      'operatori_economici_wfs' => 0,
      'tpe_gestori_wfs' => 0,
      'tpe_prodotti_wfs' => 0,
      'openlayers_geojson_picture_this' => 0,
      'mappa_porti_porti_overlay' => 0,
      'maps_openlayers_1' => 0,
      'contents_poi_poi_map_overlay' => 0,
      'postgis_formatter_layer' => 0,
    ),
    'layer_switcher' => array(
      'ports_of_calls_wfs' => 'ports_of_calls_wfs',
      'chiese_dal_geoserver' => 0,
      'geofield_formatter' => 0,
      'tpe_territori_wfs' => 0,
      'poichiese1_wfs' => 0,
      'poi_wfs' => 0,
      'operatori_economici_wfs' => 0,
      'tpe_gestori_wfs' => 0,
      'tpe_prodotti_wfs' => 0,
      'openlayers_geojson_picture_this' => 0,
      'mappa_porti_porti_overlay' => 0,
      'maps_openlayers_1' => 0,
      'contents_poi_poi_map_overlay' => 0,
      'postgis_formatter_layer' => 0,
    ),
    'projection' => '900913',
    'displayProjection' => '4326',
    'styles' => array(
      'default' => 'default',
      'select' => 'default_select',
      'temporary' => 'default',
    ),
  );
  $export['tpe_ports'] = $openlayers_maps;

  $openlayers_maps = new stdClass();
  $openlayers_maps->disabled = FALSE; /* Edit this to true to make a default openlayers_maps disabled initially */
  $openlayers_maps->api_version = 1;
  $openlayers_maps->name = 'virtual_organization';
  $openlayers_maps->title = 'Virtual organization';
  $openlayers_maps->description = 'Members of the virtual organization';
  $openlayers_maps->data = array(
    'width' => 'auto',
    'height' => '400px',
    'image_path' => 'profiles/cartaro/modules/contrib/openlayers/themes/default_dark/img/',
    'css_path' => 'profiles/cartaro/modules/contrib/openlayers/themes/default_dark/style.css',
    'proxy_host' => '',
    'hide_empty_map' => 0,
    'center' => array(
      'initial' => array(
        'centerpoint' => '9.184570156654916, 41.574360724727164',
        'zoom' => '6',
      ),
      'restrict' => array(
        'restrictextent' => 1,
        'restrictedExtent' => '469629.09375,4449736.141013,1604566.070313,5858623.422263',
      ),
    ),
    'behaviors' => array(
      'openlayers_behavior_keyboarddefaults' => array(),
      'openlayers_behavior_attribution' => array(
        'seperator' => '',
      ),
      'openlayers_behavior_layerswitcher' => array(
        'ascending' => 1,
        'roundedCorner' => 1,
        'roundedCornerColor' => '#222222',
        'maximizeDefault' => 0,
      ),
      'openlayers_behavior_navigation' => array(
        'zoomWheelEnabled' => 1,
        'zoomBoxEnabled' => 1,
        'documentDrag' => 0,
      ),
      'openlayers_behavior_panzoombar' => array(
        'zoomWorldIcon' => 1,
        'panIcons' => 1,
      ),
      'openlayers_behavior_popup' => array(
        'layers' => array(
          'virtual_organization_openlayers_1' => 'virtual_organization_openlayers_1',
        ),
      ),
      'openlayers_behavior_zoomtolayer' => array(
        'zoomtolayer' => array(
          'virtual_organization_openlayers_1' => 'virtual_organization_openlayers_1',
          'mapquest_osm' => 0,
        ),
        'point_zoom_level' => '5',
        'zoomtolayer_scale' => '1',
      ),
    ),
    'default_layer' => 'mapquest_osm',
    'layers' => array(
      'mapquest_osm' => 'mapquest_osm',
      'virtual_organization_openlayers_2' => 'virtual_organization_openlayers_2',
      'virtual_organization_openlayers_1' => 'virtual_organization_openlayers_1',
    ),
    'layer_weight' => array(
      'maps_openlayers_1' => '0',
      'mappa_porti_porti_overlay' => '0',
      'openlayers_geojson_picture_this' => '0',
      'virtual_organization_openlayers_2' => '0',
      'contents_poi_poi_map_overlay' => '0',
      'virtual_organization_openlayers_1' => '0',
      'postgis_formatter_layer' => '0',
      'tpe_porti_wfs' => '0',
      'operatori_economici_wfs' => '0',
      'tpe_territori_wfs' => '0',
      'ports_of_calls_wfs' => '0',
      'geofield_formatter' => '0',
      'poichiese1_wfs' => '0',
      'poi_wfs' => '0',
      'tpe_prodotti_wfs' => '0',
      'tpe_gestori_wfs' => '0',
      'chiese_dal_geoserver' => '0',
    ),
    'layer_styles' => array(
      'chiese_dal_geoserver' => '0',
      'geofield_formatter' => '0',
      'ports_of_calls_wfs' => '0',
      'tpe_territori_wfs' => '0',
      'poichiese1_wfs' => '0',
      'poi_wfs' => '0',
      'tpe_gestori_wfs' => '0',
      'tpe_prodotti_wfs' => '0',
      'operatori_economici_wfs' => '0',
      'tpe_porti_wfs' => '0',
      'openlayers_geojson_picture_this' => '0',
      'mappa_porti_porti_overlay' => '0',
      'maps_openlayers_1' => '0',
      'virtual_organization_openlayers_2' => 'default_marker_gold',
      'contents_poi_poi_map_overlay' => '0',
      'postgis_formatter_layer' => '0',
      'virtual_organization_openlayers_1' => 'default_marker_blue',
    ),
    'layer_styles_select' => array(
      'chiese_dal_geoserver' => '0',
      'geofield_formatter' => '0',
      'ports_of_calls_wfs' => '0',
      'tpe_territori_wfs' => '0',
      'poichiese1_wfs' => '0',
      'poi_wfs' => '0',
      'tpe_gestori_wfs' => '0',
      'tpe_prodotti_wfs' => '0',
      'operatori_economici_wfs' => '0',
      'tpe_porti_wfs' => '0',
      'openlayers_geojson_picture_this' => '0',
      'mappa_porti_porti_overlay' => '0',
      'maps_openlayers_1' => '0',
      'virtual_organization_openlayers_2' => 'default_marker_gold',
      'contents_poi_poi_map_overlay' => '0',
      'postgis_formatter_layer' => '0',
      'virtual_organization_openlayers_1' => 'default_marker_blue',
    ),
    'layer_activated' => array(
      'virtual_organization_openlayers_2' => 'virtual_organization_openlayers_2',
      'virtual_organization_openlayers_1' => 'virtual_organization_openlayers_1',
      'chiese_dal_geoserver' => 0,
      'geofield_formatter' => 0,
      'ports_of_calls_wfs' => 0,
      'tpe_territori_wfs' => 0,
      'poichiese1_wfs' => 0,
      'poi_wfs' => 0,
      'tpe_gestori_wfs' => 0,
      'tpe_prodotti_wfs' => 0,
      'operatori_economici_wfs' => 0,
      'tpe_porti_wfs' => 0,
      'openlayers_geojson_picture_this' => 0,
      'mappa_porti_porti_overlay' => 0,
      'maps_openlayers_1' => 0,
      'contents_poi_poi_map_overlay' => 0,
      'postgis_formatter_layer' => 0,
    ),
    'layer_switcher' => array(
      'virtual_organization_openlayers_2' => 'virtual_organization_openlayers_2',
      'virtual_organization_openlayers_1' => 'virtual_organization_openlayers_1',
      'chiese_dal_geoserver' => 0,
      'geofield_formatter' => 0,
      'ports_of_calls_wfs' => 0,
      'tpe_territori_wfs' => 0,
      'poichiese1_wfs' => 0,
      'poi_wfs' => 0,
      'tpe_gestori_wfs' => 0,
      'tpe_prodotti_wfs' => 0,
      'operatori_economici_wfs' => 0,
      'tpe_porti_wfs' => 0,
      'openlayers_geojson_picture_this' => 0,
      'mappa_porti_porti_overlay' => 0,
      'maps_openlayers_1' => 0,
      'contents_poi_poi_map_overlay' => 0,
      'postgis_formatter_layer' => 0,
    ),
    'projection' => '900913',
    'displayProjection' => '4326',
    'styles' => array(
      'default' => 'tourism',
      'select' => 'port',
      'temporary' => 'port',
    ),
  );
  $export['virtual_organization'] = $openlayers_maps;

  return $export;
}
