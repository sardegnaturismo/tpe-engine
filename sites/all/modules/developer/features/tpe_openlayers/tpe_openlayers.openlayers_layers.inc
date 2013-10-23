<?php
/**
 * @file
 * tpe_openlayers.openlayers_layers.inc
 */

/**
 * Implements hook_openlayers_layers().
 */
function tpe_openlayers_openlayers_layers() {
  $export = array();

  $openlayers_layers = new stdClass();
  $openlayers_layers->disabled = FALSE; /* Edit this to true to make a default openlayers_layers disabled initially */
  $openlayers_layers->api_version = 1;
  $openlayers_layers->name = 'chiese_dal_geoserver';
  $openlayers_layers->title = 'Chiese dal Geoserver';
  $openlayers_layers->description = '';
  $openlayers_layers->data = array(
    'protocol' => array(
      'url' => 'http://tpe-geo-01.sip.sardegnait.csr:8080/geoserver/tpe/ows?service=wfs&version=1.1.0&request=GetCapabilities',
      'typeName' => 'POICHIESE1',
    ),
    'sld' => '',
    'layer_type' => 'openlayers_layer_type_geoserver_wfs',
  );
  $export['chiese_dal_geoserver'] = $openlayers_layers;

  $openlayers_layers = new stdClass();
  $openlayers_layers->disabled = FALSE; /* Edit this to true to make a default openlayers_layers disabled initially */
  $openlayers_layers->api_version = 1;
  $openlayers_layers->name = 'prova_porti';
  $openlayers_layers->title = 'Prova porti';
  $openlayers_layers->description = '';
  $openlayers_layers->data = array(
    'urls' => 'http://a.tiles.mapbox.com/mapbox/
http://b.tiles.mapbox.com/mapbox/
http://c.tiles.mapbox.com/mapbox/
http://d.tiles.mapbox.com/mapbox/',
    'layername' => 'porti_tpe',
    'layer_type' => 'openlayers_layer_type_mapbox',
    'osm' => 1,
    'baselayer' => 1,
    'type' => 'png',
    'resolutions' => array(
      '156543.0339' => '156543.0339',
      '78271.51695' => '78271.51695',
      '39135.758475' => '39135.758475',
      '19567.8792375' => '19567.8792375',
      '9783.93961875' => '9783.93961875',
      '4891.969809375' => '4891.969809375',
      '2445.9849046875' => '2445.9849046875',
      '1222.9924523438' => '1222.9924523438',
      '611.49622617188' => '611.49622617188',
      '305.74811308594' => '305.74811308594',
      '152.87405654297' => '152.87405654297',
      '76.437028271484' => '76.437028271484',
      '38.218514135742' => '38.218514135742',
      '19.109257067871' => '19.109257067871',
      '9.5546285339355' => '9.5546285339355',
      '4.7773142669678' => '4.7773142669678',
      '2.3886571334839' => '2.3886571334839',
      '1.1943285667419' => '1.1943285667419',
      '0.59716428337097' => '0.59716428337097',
    ),
    'projection' => array(
      0 => '900913',
    ),
  );
  $export['prova_porti'] = $openlayers_layers;

  return $export;
}
