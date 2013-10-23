<?php
/**
 * @file
 * tpe_layout.features.menu_custom.inc
 */

/**
 * Implements hook_menu_default_menu_custom().
 */
function tpe_layout_menu_default_menu_custom() {
  $menus = array();

  // Exported menu: menu-account-utente.
  $menus['menu-account-utente'] = array(
    'menu_name' => 'menu-account-utente',
    'title' => 'Account utente',
    'description' => '',
    'language' => 'und',
    'i18n_mode' => '0',
  );
  // Exported menu: menu-engine-sailing-tirreno.
  $menus['menu-engine-sailing-tirreno'] = array(
    'menu_name' => 'menu-engine-sailing-tirreno',
    'title' => 'Engine Sailing Tirreno',
    'description' => '',
    'language' => 'und',
    'i18n_mode' => '0',
  );
  // Exported menu: menu-gestione-contenuti.
  $menus['menu-gestione-contenuti'] = array(
    'menu_name' => 'menu-gestione-contenuti',
    'title' => 'Gestione contenuti',
    'description' => '',
    'language' => 'und',
    'i18n_mode' => '0',
  );
  // Exported menu: menu-redattore-capo.
  $menus['menu-redattore-capo'] = array(
    'menu_name' => 'menu-redattore-capo',
    'title' => 'Redattore capo',
    'description' => '',
    'language' => 'und',
    'i18n_mode' => '0',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Account utente');
  t('Engine Sailing Tirreno');
  t('Gestione contenuti');
  t('Redattore capo');


  return $menus;
}
