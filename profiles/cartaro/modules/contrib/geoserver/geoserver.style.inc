<?php

/**
 * @file
 * GeoServer style.
 */

/**
 * Get all geoserver styles.
 *
 * @param $reset
 *   Boolean whether to reset cache or not.
 * @return
 *   Array of all available styles.
 */
function geoserver_styles($reset = FALSE) {
  ctools_include('export');
  if ($reset) {
    ctools_export_load_object_reset('geoserver_styles');
  }

  $styles = ctools_export_load_object('geoserver_styles', 'all', array());
  return $styles;
}

/**
 * Load a style object by name.
 *
 * This function can also be used as a
 * menu loader for a style.
 *
 * @param $name
 *   The string identifier of the style.
 * @param $reset
 *   Boolean whether to reset the cache or not.
 * @return
 *   A style object or FALSE if not found.
 */
function geoserver_style_load($name, $reset = FALSE) {
  $styles = geoserver_styles($reset);
  return !empty($styles[$name]) ? $styles[$name] : FALSE;
}

/**
 * Save style.
 *
 * @param $style
 *   The style object to save.
 * @return
 *   The results of DB write or FALSE if no name.
 */
function geoserver_style_save($style) {
  if (!empty($style->name)) {
    return (db_select('geoserver_styles')
          ->fields('geoserver_styles', array('name'))
          ->condition('name', $style->name)
          ->execute()
          ->fetchCol()) ?
      drupal_write_record('geoserver_styles', $style, 'name') :
      drupal_write_record('geoserver_styles', $style);
  }
  return FALSE;
}

/**
 * Get style status.
 *
 * @param $style
 *   String identifier of a style or style object with name.
 * @return
 *   Status.
 */
function geoserver_style_status($style) {

  if (is_string($style)) {
    $style = geoserver_style_load($style);
  }

  $result = geoserver_get('rest/styles/' . $style->name . '.sld');

  if ($result->code == 404) {
    return GEOSERVER_STATUS_NOT_FOUND;
  }
  elseif ($style->data == $result->data) {
    return GEOSERVER_STATUS_FOUND_SAME;
  }
  else {
    return GEOSERVER_STATUS_FOUND_DIFF;
  }
}

/**
 * Save style.
 *
 * @param $style
 *   String identifier of a style or style object with name.
 * @return
 *   The results of DB write or FALSE if no name.
 */
function geoserver_style_create($style) {

  if (is_string($style)) {
    $style = geoserver_style_load($style);
  }

  $result = geoserver_post('rest/styles.sld?name=' . $style->name, $style->data);

  if ($result->code != 201) {
    throw new Exception($result->data);
  }
}

/**
 * Save style.
 *
 * @param $style
 *   String identifier of a style or style object with name.
 * @return
 *   The results of DB write or FALSE if no name.
 */
function geoserver_style_update($style) {

  if (is_string($style)) {
    $style = geoserver_style_load($style);
  }

  $result = geoserver_put('rest/styles/' . $style->name . '.sld', $style->data);

  if ($result->code != 200) {
    throw new Exception($result->data);
  }
}

/**
 * Delete a style object from the database.
 *
 * @param $style
 *   String identifier of a style or style object with name.
 * @return
 *   The results of DB delete.
 */
function geoserver_style_delete($style) {

  if (is_string($style)) {
    $style = geoserver_style_load($style);
  }

  $result = geoserver_delete('rest/styles/' . $style->name . '?purge=true');

  if ($result->code == 200) {
    db_delete('geoserver_styles')->condition('name', $style->name)->execute();
  }
  else {
    throw new Exception($result->data);
  }
}
