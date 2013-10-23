<?php
/**
 * @file
 * tpe_pagine_custom.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function tpe_pagine_custom_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "page_manager" && $api == "pages_default") {
    return array("version" => "1");
  }
}
