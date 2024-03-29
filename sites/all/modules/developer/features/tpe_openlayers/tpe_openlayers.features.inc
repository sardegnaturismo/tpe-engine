<?php
/**
 * @file
 * tpe_openlayers.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function tpe_openlayers_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "openlayers" && $api == "openlayers_layers") {
    return array("version" => "1");
  }
  list($module, $api) = func_get_args();
  if ($module == "openlayers" && $api == "openlayers_maps") {
    return array("version" => "1");
  }
}
