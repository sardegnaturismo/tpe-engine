<?php
/**
 * @file
 * tpe_commerce.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function tpe_commerce_views_default_views() {
  $export = array();

  $view = new view;
  $view->name = 'export_schede_prodotto';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Export schede prodotto';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title']['alter']['external'] = 0;
  $handler->display->display_options['fields']['title']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['title']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 0;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 0;
  $handler->display->display_options['fields']['title']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['title']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['title']['link_to_node'] = 0;
  /* Field: Content: Node UUID */
  $handler->display->display_options['fields']['uuid']['id'] = 'uuid';
  $handler->display->display_options['fields']['uuid']['table'] = 'node';
  $handler->display->display_options['fields']['uuid']['field'] = 'uuid';
  $handler->display->display_options['fields']['uuid']['label'] = 'uuid';
  $handler->display->display_options['fields']['uuid']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['uuid']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['uuid']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['uuid']['alter']['external'] = 0;
  $handler->display->display_options['fields']['uuid']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['uuid']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['uuid']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['uuid']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['uuid']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['uuid']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['uuid']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['uuid']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['uuid']['alter']['html'] = 0;
  $handler->display->display_options['fields']['uuid']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['uuid']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['uuid']['hide_empty'] = 0;
  $handler->display->display_options['fields']['uuid']['empty_zero'] = 0;
  $handler->display->display_options['fields']['uuid']['hide_alter_empty'] = 1;
  /* Field: Content translation: Language */
  $handler->display->display_options['fields']['language']['id'] = 'language';
  $handler->display->display_options['fields']['language']['table'] = 'node';
  $handler->display->display_options['fields']['language']['field'] = 'language';
  $handler->display->display_options['fields']['language']['label'] = 'lang';
  $handler->display->display_options['fields']['language']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['language']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['language']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['language']['alter']['external'] = 0;
  $handler->display->display_options['fields']['language']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['language']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['language']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['language']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['language']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['language']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['language']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['language']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['language']['alter']['html'] = 0;
  $handler->display->display_options['fields']['language']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['language']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['language']['hide_empty'] = 0;
  $handler->display->display_options['fields']['language']['empty_zero'] = 0;
  $handler->display->display_options['fields']['language']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['language']['link_to_node'] = 0;
  $handler->display->display_options['fields']['language']['native_language'] = 0;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = 'nid';
  $handler->display->display_options['fields']['nid']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['external'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['nid']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['nid']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['html'] = 0;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['nid']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['nid']['hide_empty'] = 0;
  $handler->display->display_options['fields']['nid']['empty_zero'] = 0;
  $handler->display->display_options['fields']['nid']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['nid']['link_to_node'] = 0;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = 'body';
  $handler->display->display_options['fields']['body']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['body']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['body']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['body']['alter']['external'] = 0;
  $handler->display->display_options['fields']['body']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['body']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['body']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['body']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['body']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['body']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['body']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['body']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['body']['alter']['html'] = 0;
  $handler->display->display_options['fields']['body']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['body']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['body']['hide_empty'] = 0;
  $handler->display->display_options['fields']['body']['empty_zero'] = 0;
  $handler->display->display_options['fields']['body']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['body']['type'] = 'text_plain';
  $handler->display->display_options['fields']['body']['field_api_classes'] = 0;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'scheda_prodotto' => 'scheda_prodotto',
  );
  /* Filter criterion: Content translation: Language */
  $handler->display->display_options['filters']['language']['id'] = 'language';
  $handler->display->display_options['filters']['language']['table'] = 'node';
  $handler->display->display_options['filters']['language']['field'] = 'language';
  $handler->display->display_options['filters']['language']['value'] = array(
    'it' => 'it',
  );

  /* Display: Data export */
  $handler = $view->new_display('views_data_export', 'Data export', 'views_data_export_1');
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'views_data_export_xml';
  $handler->display->display_options['style_options']['provide_file'] = 0;
  $handler->display->display_options['style_options']['parent_sort'] = 0;
  $handler->display->display_options['style_options']['transform'] = 1;
  $handler->display->display_options['path'] = 'schede_prodotto.xml';
  $translatables['export_schede_prodotto'] = array(
    t('Master'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('title'),
    t('uuid'),
    t('lang'),
    t('nid'),
    t('body'),
    t('Data export'),
  );
  $export['export_schede_prodotto'] = $view;

  $view = new view;
  $view->name = 'gestione_venditori';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Gestione venditori';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Gestione venditori';
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    7 => '7',
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'table';
  /* Header: Global: PHP */
  $handler->display->display_options['header']['php']['id'] = 'php';
  $handler->display->display_options['header']['php']['table'] = 'views';
  $handler->display->display_options['header']['php']['field'] = 'php';
  $handler->display->display_options['header']['php']['empty'] = TRUE;
  $handler->display->display_options['header']['php']['php_output'] = '<?php print l(t(\'Add a new commerce shop\'), \'node/add/scheda-venditore\'); ?>';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Titolo';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title']['alter']['external'] = 0;
  $handler->display->display_options['fields']['title']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['title']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 0;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 0;
  $handler->display->display_options['fields']['title']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['title']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['title']['link_to_node'] = 1;
  /* Field: Content: Commerce key */
  $handler->display->display_options['fields']['field_commerce_key']['id'] = 'field_commerce_key';
  $handler->display->display_options['fields']['field_commerce_key']['table'] = 'field_data_field_commerce_key';
  $handler->display->display_options['fields']['field_commerce_key']['field'] = 'field_commerce_key';
  $handler->display->display_options['fields']['field_commerce_key']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_commerce_key']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_commerce_key']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_commerce_key']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_commerce_key']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_commerce_key']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_commerce_key']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_commerce_key']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_commerce_key']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_commerce_key']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_commerce_key']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_commerce_key']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_commerce_key']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_commerce_key']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_commerce_key']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_commerce_key']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_commerce_key']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_commerce_key']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_commerce_key']['field_api_classes'] = 0;
  /* Field: Content: Commerce url */
  $handler->display->display_options['fields']['field_commerce_url']['id'] = 'field_commerce_url';
  $handler->display->display_options['fields']['field_commerce_url']['table'] = 'field_data_field_commerce_url';
  $handler->display->display_options['fields']['field_commerce_url']['field'] = 'field_commerce_url';
  $handler->display->display_options['fields']['field_commerce_url']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_commerce_url']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_commerce_url']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_commerce_url']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_commerce_url']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_commerce_url']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_commerce_url']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_commerce_url']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_commerce_url']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_commerce_url']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_commerce_url']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_commerce_url']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_commerce_url']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_commerce_url']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_commerce_url']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_commerce_url']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_commerce_url']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_commerce_url']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_commerce_url']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_commerce_url']['type'] = 'link_url';
  $handler->display->display_options['fields']['field_commerce_url']['field_api_classes'] = 0;
  /* Field: Content: Post date */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['created']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['created']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['created']['alter']['external'] = 0;
  $handler->display->display_options['fields']['created']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['created']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['created']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['created']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['created']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['created']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['created']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['created']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['created']['alter']['html'] = 0;
  $handler->display->display_options['fields']['created']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['created']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['created']['hide_empty'] = 0;
  $handler->display->display_options['fields']['created']['empty_zero'] = 0;
  $handler->display->display_options['fields']['created']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['created']['date_format'] = 'custom';
  $handler->display->display_options['fields']['created']['custom_date_format'] = 'd/m/Y';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'scheda_venditore' => 'scheda_venditore',
  );

  /* Display: Gestione venditori */
  $handler = $view->new_display('page', 'Gestione venditori', 'page');
  $handler->display->display_options['path'] = 'gestione-venditori';
  $translatables['gestione_venditori'] = array(
    t('Master'),
    t('Gestione venditori'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('Titolo'),
    t('Commerce key'),
    t('Commerce url'),
    t('Post date'),
  );
  $export['gestione_venditori'] = $view;

  $view = new view;
  $view->name = 'ricerca_prodotti';
  $view->description = 'Ricerca prodotti commerce';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Ricerca prodotti';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Elenco prodotti Commerce';
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    7 => '7',
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '20';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['style_options']['override'] = 1;
  $handler->display->display_options['style_options']['sticky'] = 0;
  $handler->display->display_options['style_options']['empty_table'] = 0;
  /* Header: Global: Result summary */
  $handler->display->display_options['header']['result']['id'] = 'result';
  $handler->display->display_options['header']['result']['table'] = 'views';
  $handler->display->display_options['header']['result']['field'] = 'result';
  $handler->display->display_options['header']['result']['empty'] = TRUE;
  /* Relationship: Content: Vendor (field_vendor) */
  $handler->display->display_options['relationships']['field_vendor_nid']['id'] = 'field_vendor_nid';
  $handler->display->display_options['relationships']['field_vendor_nid']['table'] = 'field_data_field_vendor';
  $handler->display->display_options['relationships']['field_vendor_nid']['field'] = 'field_vendor_nid';
  $handler->display->display_options['relationships']['field_vendor_nid']['required'] = 0;
  $handler->display->display_options['relationships']['field_vendor_nid']['delta'] = '-1';
  /* Field: Content: Old ID */
  $handler->display->display_options['fields']['field_old_id']['id'] = 'field_old_id';
  $handler->display->display_options['fields']['field_old_id']['table'] = 'field_data_field_old_id';
  $handler->display->display_options['fields']['field_old_id']['field'] = 'field_old_id';
  $handler->display->display_options['fields']['field_old_id']['label'] = '';
  $handler->display->display_options['fields']['field_old_id']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_old_id']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_old_id']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_old_id']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_old_id']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_old_id']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_old_id']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_old_id']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_old_id']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_old_id']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_old_id']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_old_id']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_old_id']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_old_id']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_old_id']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_old_id']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_old_id']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_old_id']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_old_id']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_old_id']['field_api_classes'] = 0;
  /* Field: Content: Commerce url */
  $handler->display->display_options['fields']['field_commerce_url']['id'] = 'field_commerce_url';
  $handler->display->display_options['fields']['field_commerce_url']['table'] = 'field_data_field_commerce_url';
  $handler->display->display_options['fields']['field_commerce_url']['field'] = 'field_commerce_url';
  $handler->display->display_options['fields']['field_commerce_url']['relationship'] = 'field_vendor_nid';
  $handler->display->display_options['fields']['field_commerce_url']['label'] = '';
  $handler->display->display_options['fields']['field_commerce_url']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_commerce_url']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_commerce_url']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_commerce_url']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_commerce_url']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_commerce_url']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_commerce_url']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_commerce_url']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_commerce_url']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_commerce_url']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_commerce_url']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_commerce_url']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_commerce_url']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_commerce_url']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_commerce_url']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_commerce_url']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_commerce_url']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_commerce_url']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_commerce_url']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_commerce_url']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_commerce_url']['type'] = 'link_plain';
  $handler->display->display_options['fields']['field_commerce_url']['field_api_classes'] = 0;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Prodotto';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 1;
  $handler->display->display_options['fields']['title']['alter']['path'] = '[field_commerce_url]/node/[field_old_id]';
  $handler->display->display_options['fields']['title']['alter']['absolute'] = 1;
  $handler->display->display_options['fields']['title']['alter']['external'] = 0;
  $handler->display->display_options['fields']['title']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['title']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 0;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 0;
  $handler->display->display_options['fields']['title']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['title']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['title']['link_to_node'] = 0;
  /* Field: Content: Prezzo */
  $handler->display->display_options['fields']['field_prezzo']['id'] = 'field_prezzo';
  $handler->display->display_options['fields']['field_prezzo']['table'] = 'field_data_field_prezzo';
  $handler->display->display_options['fields']['field_prezzo']['field'] = 'field_prezzo';
  $handler->display->display_options['fields']['field_prezzo']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_prezzo']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_prezzo']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_prezzo']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_prezzo']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_prezzo']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_prezzo']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_prezzo']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_prezzo']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_prezzo']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_prezzo']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_prezzo']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_prezzo']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_prezzo']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_prezzo']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_prezzo']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_prezzo']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_prezzo']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_prezzo']['group_rows'] = 1;
  $handler->display->display_options['fields']['field_prezzo']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_prezzo']['delta_reversed'] = 0;
  $handler->display->display_options['fields']['field_prezzo']['delta_first_last'] = 0;
  $handler->display->display_options['fields']['field_prezzo']['field_api_classes'] = 0;
  /* Field: Content: Tipo prodotto */
  $handler->display->display_options['fields']['field_tipo_prodotto']['id'] = 'field_tipo_prodotto';
  $handler->display->display_options['fields']['field_tipo_prodotto']['table'] = 'field_data_field_tipo_prodotto';
  $handler->display->display_options['fields']['field_tipo_prodotto']['field'] = 'field_tipo_prodotto';
  $handler->display->display_options['fields']['field_tipo_prodotto']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_tipo_prodotto']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_tipo_prodotto']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_tipo_prodotto']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_tipo_prodotto']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_tipo_prodotto']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_tipo_prodotto']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_tipo_prodotto']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_tipo_prodotto']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_tipo_prodotto']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_tipo_prodotto']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_tipo_prodotto']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_tipo_prodotto']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_tipo_prodotto']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_tipo_prodotto']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_tipo_prodotto']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_tipo_prodotto']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_tipo_prodotto']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_tipo_prodotto']['type'] = 'node_reference_plain';
  $handler->display->display_options['fields']['field_tipo_prodotto']['field_api_classes'] = 0;
  /* Field: Content: Vendor */
  $handler->display->display_options['fields']['field_vendor']['id'] = 'field_vendor';
  $handler->display->display_options['fields']['field_vendor']['table'] = 'field_data_field_vendor';
  $handler->display->display_options['fields']['field_vendor']['field'] = 'field_vendor';
  $handler->display->display_options['fields']['field_vendor']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_vendor']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_vendor']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_vendor']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_vendor']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_vendor']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_vendor']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_vendor']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_vendor']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_vendor']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_vendor']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_vendor']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_vendor']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_vendor']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_vendor']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_vendor']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_vendor']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_vendor']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_vendor']['type'] = 'node_reference_plain';
  $handler->display->display_options['fields']['field_vendor']['field_api_classes'] = 0;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'prodotto_commerce' => 'prodotto_commerce',
  );
  /* Filter criterion: Content: Tipo prodotto (field_tipo_prodotto) */
  $handler->display->display_options['filters']['field_tipo_prodotto_nid']['id'] = 'field_tipo_prodotto_nid';
  $handler->display->display_options['filters']['field_tipo_prodotto_nid']['table'] = 'field_data_field_tipo_prodotto';
  $handler->display->display_options['filters']['field_tipo_prodotto_nid']['field'] = 'field_tipo_prodotto_nid';
  $handler->display->display_options['filters']['field_tipo_prodotto_nid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_tipo_prodotto_nid']['expose']['operator_id'] = 'field_tipo_prodotto_nid_op';
  $handler->display->display_options['filters']['field_tipo_prodotto_nid']['expose']['label'] = 'Scheda prodotto';
  $handler->display->display_options['filters']['field_tipo_prodotto_nid']['expose']['operator'] = 'field_tipo_prodotto_nid_op';
  $handler->display->display_options['filters']['field_tipo_prodotto_nid']['expose']['identifier'] = 'field_tipo_prodotto_nid';
  $handler->display->display_options['filters']['field_tipo_prodotto_nid']['expose']['reduce'] = 0;
  /* Filter criterion: Content: Vendor (field_vendor) */
  $handler->display->display_options['filters']['field_vendor_nid']['id'] = 'field_vendor_nid';
  $handler->display->display_options['filters']['field_vendor_nid']['table'] = 'field_data_field_vendor';
  $handler->display->display_options['filters']['field_vendor_nid']['field'] = 'field_vendor_nid';
  $handler->display->display_options['filters']['field_vendor_nid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_vendor_nid']['expose']['operator_id'] = 'field_vendor_nid_op';
  $handler->display->display_options['filters']['field_vendor_nid']['expose']['label'] = 'Venditore';
  $handler->display->display_options['filters']['field_vendor_nid']['expose']['operator'] = 'field_vendor_nid_op';
  $handler->display->display_options['filters']['field_vendor_nid']['expose']['identifier'] = 'field_vendor_nid';
  $handler->display->display_options['filters']['field_vendor_nid']['expose']['reduce'] = 0;

  /* Display: Ricerca prodotti */
  $handler = $view->new_display('page', 'Ricerca prodotti', 'page');
  $handler->display->display_options['path'] = 'ricerca-prodotti';
  $translatables['ricerca_prodotti'] = array(
    t('Master'),
    t('Elenco prodotti Commerce'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('Displaying @start - @end of @total'),
    t('field_vendor'),
    t('Prodotto'),
    t('[field_commerce_url]/node/[field_old_id]'),
    t('Prezzo'),
    t('Tipo prodotto'),
    t('Vendor'),
    t('Scheda prodotto'),
    t('Venditore'),
    t('Ricerca prodotti'),
  );
  $export['ricerca_prodotti'] = $view;

  return $export;
}
