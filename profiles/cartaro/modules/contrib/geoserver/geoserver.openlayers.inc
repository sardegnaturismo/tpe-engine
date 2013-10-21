<?php

/**
 * @file
 * Provides OpenLayers layers.
 */

/**
 * Implements hook_openlayers_layers().
 */
function geoserver_openlayers_layers() {

  $ol_layers = array();
  $gs_layers = geoserver_layers_load();
  $gs_styles = geoserver_styles();
  $url = variable_get('geoserver_url', '');
  $workspace = variable_get('geoserver_workspace', '');

  foreach ($gs_layers as $gs_layer) {

    if (!isset($gs_layer->data['openlayers'])) {
      // Layer has no OpenLayers configuration.
      break;
    }

    if ($gs_layer->data['openlayers']['gwc']) {
      $ol_layer = new stdClass();
      $ol_layer->api_version = 1;
      $ol_layer->name = $gs_layer->name . '_gwc';
      $ol_layer->title = $gs_layer->title;
      $ol_layer->description = t('Cached WMS layer of GeoServer layer %name',
          array('%name' => $gs_layer->name));
      $ol_layer->data = array(
        'layer_type' => 'openlayers_layer_type_wms',
        'base_url' => $url . 'gwc/service/wms',
        'params' => array(
          'isBaseLayer' => 0,
          'buffer' => '2',
          'ratio' => '1.5',
          'singleTile' => 0,
        ),
        'options' => array(
          'srs' => $gs_layer->data['openlayers']['gwc_srs'],
          'TRANSPARENT' => 'true',
          'exceptions' => 'application/vnd.ogc.se_inimage',
          'format' => 'image/png',
          'layers' => $workspace . ':' . $gs_layer->name,
          'styles' => '',
        ),
      );
      $ol_layers[$ol_layer->name] = $ol_layer;
    }

    if ($gs_layer->data['openlayers']['wfs']) {
      $style = $gs_layer->data['style'];
      $sld = isset($gs_styles[$style]) ? $gs_styles[$style]->data : '';
      $ol_layer = new stdClass();
      $ol_layer->api_version = 1;
      $ol_layer->name = $gs_layer->name . '_wfs';
      $ol_layer->title = $gs_layer->title;
      $ol_layer->description = t('WFS layer of GeoServer layer %name',
          array('%name' => $gs_layer->name));
      $ol_layer->data = array(
        'layer_type' => 'openlayers_layer_type_geoserver_wfs',
        'sld' => $sld,
        'protocol' => array(
          'url' => $url . 'wfs',
          'typeName' => $gs_layer->name,
          'featureNS' => variable_get('geoserver_namespace', ''),
        ),
      );
      $ol_layers[$ol_layer->name] = $ol_layer;
    }

    if ($gs_layer->data['openlayers']['wms']) {
      $ol_layer = new stdClass();
      $ol_layer->api_version = 1;
      $ol_layer->name = $gs_layer->name . '_wms';
      $ol_layer->title = $gs_layer->title;
      $ol_layer->description = t('Untiled WMS layer of GeoServer layer %name',
          array('%name' => $gs_layer->name));
      $ol_layer->data = array(
        'layer_type' => 'openlayers_layer_type_wms',
        'base_url' => $url . 'wms',
        'params' => array(
          'isBaseLayer' => 0,
          'buffer' => '2',
          'ratio' => '1.5',
          'singleTile' => 1,
        ),
        'options' => array(
          'srs' => $gs_layer->data['openlayers']['wms_srs'],
          'TRANSPARENT' => 'true',
          'exceptions' => 'application/vnd.ogc.se_inimage',
          'format' => 'image/png',
          'layers' => $workspace . ':' . $gs_layer->name,
          'styles' => '',
        ),
      );
      $ol_layers[$ol_layer->name] = $ol_layer;
    }
  }

  return $ol_layers;
}
