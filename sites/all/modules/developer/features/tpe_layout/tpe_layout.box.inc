<?php
/**
 * @file
 * tpe_layout.box.inc
 */

/**
 * Implements hook_default_box().
 */
function tpe_layout_default_box() {
  $export = array();

  $box = new stdClass();
  $box->disabled = FALSE; /* Edit this to true to make a default box disabled initially */
  $box->api_version = 1;
  $box->delta = 'loghi';
  $box->plugin_key = 'simple';
  $box->title = '';
  $box->description = 'i loghi istituzionali';
  $box->options = array(
    'body' => array(
      'value' => '<p>[[{"type":"media","view_mode":"media_original","fid":"288","attributes":{"alt":"","class":"media-image","height":"102","width":"899"}}]]</p>',
      'format' => 'full_html',
    ),
    'additional_classes' => '',
  );
  $export['loghi'] = $box;

  return $export;
}
