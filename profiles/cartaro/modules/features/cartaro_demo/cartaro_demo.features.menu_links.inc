<?php
/**
 * @file
 * cartaro_demo.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function cartaro_demo_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: main-menu:node/1
  $menu_links['main-menu:node/1'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/1',
    'router_path' => 'node/%',
    'link_title' => 'Get started',
    'options' => array(),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
  );
  // Exported menu link: menu-documentation:http://drupal.org/node/1458496
  $menu_links['menu-documentation:http://drupal.org/node/1458496'] = array(
    'menu_name' => 'menu-documentation',
    'link_path' => 'http://drupal.org/node/1458496',
    'router_path' => '',
    'link_title' => 'PostGIS module',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '1',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
  );
  // Exported menu link: menu-documentation:http://drupal.org/node/1460126
  $menu_links['menu-documentation:http://drupal.org/node/1460126'] = array(
    'menu_name' => 'menu-documentation',
    'link_path' => 'http://drupal.org/node/1460126',
    'router_path' => '',
    'link_title' => 'Cartaro profile',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '1',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
  );
  // Exported menu link: menu-documentation:http://drupal.org/node/1504464
  $menu_links['menu-documentation:http://drupal.org/node/1504464'] = array(
    'menu_name' => 'menu-documentation',
    'link_path' => 'http://drupal.org/node/1504464',
    'router_path' => '',
    'link_title' => 'GeoServer module',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '1',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
  );
  // Exported menu link: menu-documentation:http://drupal.org/node/595850
  $menu_links['menu-documentation:http://drupal.org/node/595850'] = array(
    'menu_name' => 'menu-documentation',
    'link_path' => 'http://drupal.org/node/595850',
    'router_path' => '',
    'link_title' => 'OpenLayers module',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '1',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Cartaro profile');
  t('GeoServer module');
  t('Get started');
  t('OpenLayers module');
  t('PostGIS module');


  return $menu_links;
}
