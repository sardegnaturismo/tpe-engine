<?php
/**
 * @file
 * tpe_ct_poi.box.inc
 */

/**
 * Implements hook_default_box().
 */
function tpe_ct_poi_default_box() {
  $export = array();

  $box = new stdClass();
  $box->disabled = FALSE; /* Edit this to true to make a default box disabled initially */
  $box->api_version = 1;
  $box->delta = 'panoramio_tos';
  $box->plugin_key = 'simple';
  $box->title = '';
  $box->description = 'panoramio Tos';
  $box->options = array(
    'body' => array(
      'value' => '<div id="panoramioTos"></div>',
      'format' => 'full_html',
    ),
  );
  $export['panoramio_tos'] = $box;

  $box = new stdClass();
  $box->disabled = FALSE; /* Edit this to true to make a default box disabled initially */
  $box->api_version = 1;
  $box->delta = 'upper_footer';
  $box->plugin_key = 'simple';
  $box->title = '';
  $box->description = 'Upper footer';
  $box->options = array(
    'body' => array(
      'value' => '<div class="footer">
          <a title="Inviaci una mail" href="mailto:sardegnaturismo@regione.sardegna.it">sardegnaturismo@regione.sardegna.it</a>
          <div class="stilebarrafoot">
            <span class="left">&copy;</span>
            <span class="left">2012 Regione Autonoma della Sardegna</span>
          </div>
        </div>',
      'format' => 'php_code',
    ),
  );
  $export['upper_footer'] = $box;

  return $export;
}
