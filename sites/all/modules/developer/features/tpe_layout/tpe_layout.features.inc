<?php
/**
 * @file
 * tpe_layout.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function tpe_layout_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "boxes" && $api == "box") {
    return array("version" => "1");
  }
  list($module, $api) = func_get_args();
  if ($module == "context" && $api == "context") {
    return array("version" => "3");
  }
}
