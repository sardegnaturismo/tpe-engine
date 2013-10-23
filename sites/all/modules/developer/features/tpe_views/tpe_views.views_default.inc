<?php
/**
 * @file
 * tpe_views.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function tpe_views_views_default_views() {
  $export = array();

  $view = new view;
  $view->name = 'bulk';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Bulk';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Bulk';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['access']['perm'] = 'administer nodes';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '50';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'views_bulk_operations_1' => 'views_bulk_operations_1',
    'title' => 'title',
    'nid' => 'nid',
    'created' => 'created',
    'changed' => 'changed',
    'guid' => 'guid',
    'php' => 'php',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'views_bulk_operations_1' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'nid' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'created' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'changed' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'guid' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'php' => array(
      'sortable' => 1,
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
  $handler->display->display_options['header']['result']['empty'] = FALSE;
  /* Field: Bulk operations: Content */
  $handler->display->display_options['fields']['views_bulk_operations_1']['id'] = 'views_bulk_operations_1';
  $handler->display->display_options['fields']['views_bulk_operations_1']['table'] = 'node';
  $handler->display->display_options['fields']['views_bulk_operations_1']['field'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations_1']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations_1']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations_1']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations_1']['alter']['external'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations_1']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations_1']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations_1']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations_1']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['views_bulk_operations_1']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['views_bulk_operations_1']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations_1']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations_1']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations_1']['alter']['html'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations_1']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['views_bulk_operations_1']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['views_bulk_operations_1']['hide_empty'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations_1']['empty_zero'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations_1']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['views_bulk_operations_1']['vbo_settings']['display_type'] = '0';
  $handler->display->display_options['fields']['views_bulk_operations_1']['vbo_settings']['enable_select_all_pages'] = 1;
  $handler->display->display_options['fields']['views_bulk_operations_1']['vbo_settings']['force_single'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations_1']['vbo_settings']['display_result'] = 1;
  $handler->display->display_options['fields']['views_bulk_operations_1']['vbo_settings']['entity_load_capacity'] = '10';
  $handler->display->display_options['fields']['views_bulk_operations_1']['vbo_operations'] = array(
    'action::node_assign_owner_action' => array(
      'selected' => 0,
      'use_queue' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::views_bulk_operations_delete_item' => array(
      'selected' => 1,
      'use_queue' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::system_message_action' => array(
      'selected' => 0,
      'use_queue' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::views_bulk_operations_script_action' => array(
      'selected' => 0,
      'use_queue' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_make_sticky_action' => array(
      'selected' => 0,
      'use_queue' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_make_unsticky_action' => array(
      'selected' => 0,
      'use_queue' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::views_bulk_operations_modify_action' => array(
      'selected' => 0,
      'use_queue' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
      'settings' => array(
        'show_all_tokens' => 1,
        'display_values' => array(
          '_all_' => '_all_',
        ),
      ),
    ),
    'action::views_bulk_operations_argument_selector_action' => array(
      'selected' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
      'settings' => array(
        'url' => '',
      ),
    ),
    'action::node_promote_action' => array(
      'selected' => 0,
      'use_queue' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_publish_action' => array(
      'selected' => 0,
      'use_queue' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::system_goto_action' => array(
      'selected' => 0,
      'use_queue' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_unpromote_action' => array(
      'selected' => 0,
      'use_queue' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_save_action' => array(
      'selected' => 0,
      'use_queue' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::system_send_email_action' => array(
      'selected' => 0,
      'use_queue' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_unpublish_action' => array(
      'selected' => 0,
      'use_queue' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_unpublish_by_keyword_action' => array(
      'selected' => 0,
      'use_queue' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
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
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
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
  $handler->display->display_options['fields']['created']['date_format'] = 'long';
  /* Field: Content: Updated date */
  $handler->display->display_options['fields']['changed']['id'] = 'changed';
  $handler->display->display_options['fields']['changed']['table'] = 'node';
  $handler->display->display_options['fields']['changed']['field'] = 'changed';
  $handler->display->display_options['fields']['changed']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['changed']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['changed']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['changed']['alter']['external'] = 0;
  $handler->display->display_options['fields']['changed']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['changed']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['changed']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['changed']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['changed']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['changed']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['changed']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['changed']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['changed']['alter']['html'] = 0;
  $handler->display->display_options['fields']['changed']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['changed']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['changed']['hide_empty'] = 0;
  $handler->display->display_options['fields']['changed']['empty_zero'] = 0;
  $handler->display->display_options['fields']['changed']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['changed']['date_format'] = 'long';
  /* Field: Feeds item: Item GUID */
  $handler->display->display_options['fields']['guid']['id'] = 'guid';
  $handler->display->display_options['fields']['guid']['table'] = 'feeds_item';
  $handler->display->display_options['fields']['guid']['field'] = 'guid';
  $handler->display->display_options['fields']['guid']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['guid']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['guid']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['guid']['alter']['external'] = 0;
  $handler->display->display_options['fields']['guid']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['guid']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['guid']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['guid']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['guid']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['guid']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['guid']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['guid']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['guid']['alter']['html'] = 0;
  $handler->display->display_options['fields']['guid']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['guid']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['guid']['hide_empty'] = 0;
  $handler->display->display_options['fields']['guid']['empty_zero'] = 0;
  $handler->display->display_options['fields']['guid']['hide_alter_empty'] = 1;
  /* Field: Global: PHP */
  $handler->display->display_options['fields']['php']['id'] = 'php';
  $handler->display->display_options['fields']['php']['table'] = 'views';
  $handler->display->display_options['fields']['php']['field'] = 'php';
  $handler->display->display_options['fields']['php']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['php']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['php']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['php']['alter']['external'] = 0;
  $handler->display->display_options['fields']['php']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['php']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['php']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['php']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['php']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['php']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['php']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['php']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['php']['alter']['html'] = 0;
  $handler->display->display_options['fields']['php']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['php']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['php']['hide_empty'] = 0;
  $handler->display->display_options['fields']['php']['empty_zero'] = 0;
  $handler->display->display_options['fields']['php']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['php']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php']['php_output'] = '<?php

$node = node_load($row->nid);
print count(node_revision_list($node));

?>';
  $handler->display->display_options['fields']['php']['use_php_click_sortable'] = '1';
  $handler->display->display_options['fields']['php']['php_click_sortable'] = '';
  /* Field: Content: Settore economico */
  $handler->display->display_options['fields']['field_settore_economico']['id'] = 'field_settore_economico';
  $handler->display->display_options['fields']['field_settore_economico']['table'] = 'field_data_field_settore_economico';
  $handler->display->display_options['fields']['field_settore_economico']['field'] = 'field_settore_economico';
  $handler->display->display_options['fields']['field_settore_economico']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_settore_economico']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_settore_economico']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_settore_economico']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_settore_economico']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_settore_economico']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_settore_economico']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_settore_economico']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_settore_economico']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_settore_economico']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_settore_economico']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_settore_economico']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_settore_economico']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_settore_economico']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_settore_economico']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_settore_economico']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_settore_economico']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_settore_economico']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_settore_economico']['field_api_classes'] = 0;
  /* Field: Content translation: Language */
  $handler->display->display_options['fields']['language']['id'] = 'language';
  $handler->display->display_options['fields']['language']['table'] = 'node';
  $handler->display->display_options['fields']['language']['field'] = 'language';
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
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  /* Filter criterion: Content: Post date */
  $handler->display->display_options['filters']['created']['id'] = 'created';
  $handler->display->display_options['filters']['created']['table'] = 'node';
  $handler->display->display_options['filters']['created']['field'] = 'created';
  $handler->display->display_options['filters']['created']['operator'] = '>=';
  $handler->display->display_options['filters']['created']['exposed'] = TRUE;
  $handler->display->display_options['filters']['created']['expose']['operator_id'] = 'created_op';
  $handler->display->display_options['filters']['created']['expose']['label'] = 'Post date';
  $handler->display->display_options['filters']['created']['expose']['operator'] = 'created_op';
  $handler->display->display_options['filters']['created']['expose']['identifier'] = 'created';
  $handler->display->display_options['filters']['created']['expose']['multiple'] = FALSE;
  /* Filter criterion: Content: Title */
  $handler->display->display_options['filters']['title']['id'] = 'title';
  $handler->display->display_options['filters']['title']['table'] = 'node';
  $handler->display->display_options['filters']['title']['field'] = 'title';
  $handler->display->display_options['filters']['title']['operator'] = 'contains';
  $handler->display->display_options['filters']['title']['exposed'] = TRUE;
  $handler->display->display_options['filters']['title']['expose']['operator_id'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['label'] = 'Title';
  $handler->display->display_options['filters']['title']['expose']['operator'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['identifier'] = 'title';
  $handler->display->display_options['filters']['title']['expose']['required'] = 0;
  $handler->display->display_options['filters']['title']['expose']['multiple'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['exposed'] = TRUE;
  $handler->display->display_options['filters']['type']['expose']['operator_id'] = 'type_op';
  $handler->display->display_options['filters']['type']['expose']['label'] = 'Type';
  $handler->display->display_options['filters']['type']['expose']['operator'] = 'type_op';
  $handler->display->display_options['filters']['type']['expose']['identifier'] = 'type';
  $handler->display->display_options['filters']['type']['expose']['reduce'] = 0;
  /* Filter criterion: Content translation: Language */
  $handler->display->display_options['filters']['language']['id'] = 'language';
  $handler->display->display_options['filters']['language']['table'] = 'node';
  $handler->display->display_options['filters']['language']['field'] = 'language';
  $handler->display->display_options['filters']['language']['exposed'] = TRUE;
  $handler->display->display_options['filters']['language']['expose']['operator_id'] = 'language_op';
  $handler->display->display_options['filters']['language']['expose']['label'] = 'Language';
  $handler->display->display_options['filters']['language']['expose']['use_operator'] = 1;
  $handler->display->display_options['filters']['language']['expose']['operator'] = 'language_op';
  $handler->display->display_options['filters']['language']['expose']['identifier'] = 'language';
  $handler->display->display_options['filters']['language']['expose']['reduce'] = 0;
  /* Filter criterion: Feeds item: Item GUID */
  $handler->display->display_options['filters']['guid']['id'] = 'guid';
  $handler->display->display_options['filters']['guid']['table'] = 'feeds_item';
  $handler->display->display_options['filters']['guid']['field'] = 'guid';
  $handler->display->display_options['filters']['guid']['operator'] = 'not empty';
  $handler->display->display_options['filters']['guid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['guid']['expose']['operator_id'] = 'guid_op';
  $handler->display->display_options['filters']['guid']['expose']['label'] = 'Item GUID';
  $handler->display->display_options['filters']['guid']['expose']['use_operator'] = 1;
  $handler->display->display_options['filters']['guid']['expose']['operator'] = 'guid_op';
  $handler->display->display_options['filters']['guid']['expose']['identifier'] = 'guid';
  $handler->display->display_options['filters']['guid']['expose']['required'] = 0;
  $handler->display->display_options['filters']['guid']['expose']['multiple'] = FALSE;

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'bulk';
  $translatables['bulk'] = array(
    t('Master'),
    t('Bulk'),
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
    t('Content'),
    t('Title'),
    t('Nid'),
    t('Post date'),
    t('Updated date'),
    t('Item GUID'),
    t('PHP'),
    t('Settore economico'),
    t('Language'),
    t('Type'),
    t('Page'),
  );
  $export['bulk'] = $view;

  $view = new view;
  $view->name = 'contenuti_toscana';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Contenuti Toscana';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Contenuti Toscana';
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    5 => '5',
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '50';
  $handler->display->display_options['style_plugin'] = 'table';
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['empty'] = FALSE;
  $handler->display->display_options['header']['area']['content'] = '<h2>Lista dei contenuti prodotti dalla Regione Toscana.</h2>
Redattori:
sferri,mmontemerani,ppasqualini';
  $handler->display->display_options['header']['area']['format'] = 'full_html';
  $handler->display->display_options['header']['area']['tokenize'] = 0;
  /* Header: Global: Result summary */
  $handler->display->display_options['header']['result']['id'] = 'result';
  $handler->display->display_options['header']['result']['table'] = 'views';
  $handler->display->display_options['header']['result']['field'] = 'result';
  $handler->display->display_options['header']['result']['empty'] = FALSE;
  /* Footer: Global: Result summary */
  $handler->display->display_options['footer']['result']['id'] = 'result';
  $handler->display->display_options['footer']['result']['table'] = 'views';
  $handler->display->display_options['footer']['result']['field'] = 'result';
  $handler->display->display_options['footer']['result']['empty'] = FALSE;
  /* Relationship: Content: Author */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'node';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  $handler->display->display_options['relationships']['uid']['required'] = 1;
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
  /* Field: Node: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = '';
  $handler->display->display_options['fields']['edit_node']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['edit_node']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['edit_node']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['edit_node']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['edit_node']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['edit_node']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['edit_node']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['edit_node']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['edit_node']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['edit_node']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['edit_node']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['edit_node']['alter']['html'] = 0;
  $handler->display->display_options['fields']['edit_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['edit_node']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['edit_node']['hide_empty'] = 0;
  $handler->display->display_options['fields']['edit_node']['empty_zero'] = 0;
  $handler->display->display_options['fields']['edit_node']['hide_alter_empty'] = 1;
  /* Field: Content translation: Translate link */
  $handler->display->display_options['fields']['translate_node']['id'] = 'translate_node';
  $handler->display->display_options['fields']['translate_node']['table'] = 'node';
  $handler->display->display_options['fields']['translate_node']['field'] = 'translate_node';
  $handler->display->display_options['fields']['translate_node']['label'] = '';
  $handler->display->display_options['fields']['translate_node']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['translate_node']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['translate_node']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['translate_node']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['translate_node']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['translate_node']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['translate_node']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['translate_node']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['translate_node']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['translate_node']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['translate_node']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['translate_node']['alter']['html'] = 0;
  $handler->display->display_options['fields']['translate_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['translate_node']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['translate_node']['hide_empty'] = 0;
  $handler->display->display_options['fields']['translate_node']['empty_zero'] = 0;
  $handler->display->display_options['fields']['translate_node']['hide_alter_empty'] = 1;
  /* Field: Content translation: Language */
  $handler->display->display_options['fields']['language']['id'] = 'language';
  $handler->display->display_options['fields']['language']['table'] = 'node';
  $handler->display->display_options['fields']['language']['field'] = 'language';
  $handler->display->display_options['fields']['language']['label'] = 'Lingua';
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
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'uid';
  $handler->display->display_options['fields']['name']['label'] = 'Autore';
  $handler->display->display_options['fields']['name']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['name']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['name']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['name']['alter']['external'] = 0;
  $handler->display->display_options['fields']['name']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['name']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['name']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['name']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['name']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['name']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['name']['alter']['html'] = 0;
  $handler->display->display_options['fields']['name']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['name']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['name']['hide_empty'] = 0;
  $handler->display->display_options['fields']['name']['empty_zero'] = 0;
  $handler->display->display_options['fields']['name']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['name']['link_to_user'] = 1;
  $handler->display->display_options['fields']['name']['overwrite_anonymous'] = 0;
  $handler->display->display_options['fields']['name']['format_username'] = 1;
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
  /* Filter criterion: Content: Author uid */
  $handler->display->display_options['filters']['uid']['id'] = 'uid';
  $handler->display->display_options['filters']['uid']['table'] = 'node';
  $handler->display->display_options['filters']['uid']['field'] = 'uid';
  $handler->display->display_options['filters']['uid']['value'] = array(
    0 => '25',
    1 => '27',
    2 => '26',
  );
  $handler->display->display_options['filters']['uid']['expose']['operator_id'] = 'uid_op';
  $handler->display->display_options['filters']['uid']['expose']['label'] = 'Author uid';
  $handler->display->display_options['filters']['uid']['expose']['operator'] = 'uid_op';
  $handler->display->display_options['filters']['uid']['expose']['identifier'] = 'uid';
  $handler->display->display_options['filters']['uid']['expose']['multiple'] = FALSE;
  $handler->display->display_options['filters']['uid']['expose']['reduce'] = 1;
  /* Filter criterion: Content translation: Language */
  $handler->display->display_options['filters']['language']['id'] = 'language';
  $handler->display->display_options['filters']['language']['table'] = 'node';
  $handler->display->display_options['filters']['language']['field'] = 'language';
  $handler->display->display_options['filters']['language']['value'] = array(
    'en' => 'en',
    'fr' => 'fr',
    'it' => 'it',
  );
  $handler->display->display_options['filters']['language']['exposed'] = TRUE;
  $handler->display->display_options['filters']['language']['expose']['operator_id'] = 'language_op';
  $handler->display->display_options['filters']['language']['expose']['label'] = 'Language';
  $handler->display->display_options['filters']['language']['expose']['operator'] = 'language_op';
  $handler->display->display_options['filters']['language']['expose']['identifier'] = 'language';
  $handler->display->display_options['filters']['language']['expose']['remember'] = 1;
  $handler->display->display_options['filters']['language']['expose']['reduce'] = 1;

  /* Display: Contenuti Toscana */
  $handler = $view->new_display('page', 'Contenuti Toscana', 'page');
  $handler->display->display_options['path'] = 'contenuti_toscana';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Contenuti Toscana';
  $handler->display->display_options['menu']['description'] = 'Lista dei contenuti prodotti dalla Regione Toscana';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'menu-gestione-contenuti';
  $handler->display->display_options['menu']['context'] = 0;
  $translatables['contenuti_toscana'] = array(
    t('Master'),
    t('Contenuti Toscana'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('<h2>Lista dei contenuti prodotti dalla Regione Toscana.</h2>
Redattori:
sferri,mmontemerani,ppasqualini'),
    t('Displaying @start - @end of @total'),
    t('author'),
    t('Titolo'),
    t('Lingua'),
    t('Autore'),
    t('Author uid'),
    t('Language'),
  );
  $export['contenuti_toscana'] = $view;

  $view = new view;
  $view->name = 'dashboard_plus';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'dashboard_plus';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'dashboard_plus';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '50';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'views_bulk_operations' => 'views_bulk_operations',
    'title' => 'title',
    'nid' => 'nid',
    'timestamp' => 'timestamp',
    'type' => 'type',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'views_bulk_operations' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'nid' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'timestamp' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'type' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['style_options']['override'] = 1;
  $handler->display->display_options['style_options']['sticky'] = 0;
  $handler->display->display_options['style_options']['empty_table'] = 0;
  /* Field: Bulk operations: Content */
  $handler->display->display_options['fields']['views_bulk_operations']['id'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['table'] = 'node';
  $handler->display->display_options['fields']['views_bulk_operations']['field'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['alter']['external'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['views_bulk_operations']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['views_bulk_operations']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['alter']['html'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['views_bulk_operations']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['views_bulk_operations']['hide_empty'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['empty_zero'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['display_type'] = '0';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['enable_select_all_pages'] = 1;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['force_single'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['display_result'] = 1;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['entity_load_capacity'] = '10';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_operations'] = array(
    'action::node_assign_owner_action' => array(
      'selected' => 1,
      'use_queue' => 0,
      'skip_confirmation' => 1,
      'override_label' => 0,
      'label' => '',
    ),
    'action::views_bulk_operations_script_action:ab965ed1c7883cf688819d238f98f2c5' => array(
      'selected' => 1,
      'use_queue' => 0,
      'skip_confirmation' => 1,
      'override_label' => 0,
      'label' => '',
    ),
    'action::views_bulk_operations_delete_item' => array(
      'selected' => 1,
      'use_queue' => 0,
      'skip_confirmation' => 1,
      'override_label' => 0,
      'label' => '',
    ),
    'action::system_message_action' => array(
      'selected' => 0,
      'use_queue' => 0,
      'skip_confirmation' => 1,
      'override_label' => 0,
      'label' => '',
    ),
    'action::views_bulk_operations_script_action' => array(
      'selected' => 1,
      'use_queue' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_make_sticky_action' => array(
      'selected' => 1,
      'use_queue' => 0,
      'skip_confirmation' => 1,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_make_unsticky_action' => array(
      'selected' => 1,
      'use_queue' => 0,
      'skip_confirmation' => 1,
      'override_label' => 0,
      'label' => '',
    ),
    'action::views_bulk_operations_modify_action' => array(
      'selected' => 1,
      'use_queue' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
      'settings' => array(
        'show_all_tokens' => 1,
        'display_values' => array(
          '_all_' => '_all_',
        ),
      ),
    ),
    'action::node_export_drupal_action' => array(
      'selected' => 0,
      'use_queue' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_export_xml_action' => array(
      'selected' => 0,
      'use_queue' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::views_bulk_operations_argument_selector_action' => array(
      'selected' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
      'settings' => array(
        'url' => '',
      ),
    ),
    'action::node_promote_action' => array(
      'selected' => 0,
      'use_queue' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_publish_action' => array(
      'selected' => 0,
      'use_queue' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::system_goto_action' => array(
      'selected' => 0,
      'use_queue' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_unpromote_action' => array(
      'selected' => 0,
      'use_queue' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_save_action' => array(
      'selected' => 0,
      'use_queue' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::system_send_email_action' => array(
      'selected' => 0,
      'use_queue' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_unpublish_action' => array(
      'selected' => 1,
      'use_queue' => 0,
      'skip_confirmation' => 1,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_unpublish_by_keyword_action' => array(
      'selected' => 1,
      'use_queue' => 0,
      'skip_confirmation' => 1,
      'override_label' => 0,
      'label' => '',
    ),
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  /* Field: Content revision: Updated date */
  $handler->display->display_options['fields']['timestamp']['id'] = 'timestamp';
  $handler->display->display_options['fields']['timestamp']['table'] = 'node_revision';
  $handler->display->display_options['fields']['timestamp']['field'] = 'timestamp';
  $handler->display->display_options['fields']['timestamp']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['timestamp']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['timestamp']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['timestamp']['alter']['external'] = 0;
  $handler->display->display_options['fields']['timestamp']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['timestamp']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['timestamp']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['timestamp']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['timestamp']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['timestamp']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['timestamp']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['timestamp']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['timestamp']['alter']['html'] = 0;
  $handler->display->display_options['fields']['timestamp']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['timestamp']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['timestamp']['hide_empty'] = 0;
  $handler->display->display_options['fields']['timestamp']['empty_zero'] = 0;
  $handler->display->display_options['fields']['timestamp']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['timestamp']['date_format'] = 'short';
  /* Field: Content: Type */
  $handler->display->display_options['fields']['type']['id'] = 'type';
  $handler->display->display_options['fields']['type']['table'] = 'node';
  $handler->display->display_options['fields']['type']['field'] = 'type';
  $handler->display->display_options['fields']['type']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['type']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['type']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['type']['alter']['external'] = 0;
  $handler->display->display_options['fields']['type']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['type']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['type']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['type']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['type']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['type']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['type']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['type']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['type']['alter']['html'] = 0;
  $handler->display->display_options['fields']['type']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['type']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['type']['hide_empty'] = 0;
  $handler->display->display_options['fields']['type']['empty_zero'] = 0;
  $handler->display->display_options['fields']['type']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['type']['link_to_node'] = 0;
  $handler->display->display_options['fields']['type']['machine_name'] = 0;
  /* Field: Content: Author uid */
  $handler->display->display_options['fields']['uid']['id'] = 'uid';
  $handler->display->display_options['fields']['uid']['table'] = 'node';
  $handler->display->display_options['fields']['uid']['field'] = 'uid';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['exposed'] = TRUE;
  $handler->display->display_options['filters']['type']['expose']['operator_id'] = 'type_op';
  $handler->display->display_options['filters']['type']['expose']['label'] = 'Type';
  $handler->display->display_options['filters']['type']['expose']['operator'] = 'type_op';
  $handler->display->display_options['filters']['type']['expose']['identifier'] = 'type';
  /* Filter criterion: Content: Title */
  $handler->display->display_options['filters']['title']['id'] = 'title';
  $handler->display->display_options['filters']['title']['table'] = 'node';
  $handler->display->display_options['filters']['title']['field'] = 'title';
  $handler->display->display_options['filters']['title']['operator'] = 'contains';
  $handler->display->display_options['filters']['title']['exposed'] = TRUE;
  $handler->display->display_options['filters']['title']['expose']['operator_id'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['label'] = 'Title';
  $handler->display->display_options['filters']['title']['expose']['use_operator'] = FALSE;
  $handler->display->display_options['filters']['title']['expose']['operator'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['identifier'] = 'title';
  $handler->display->display_options['filters']['title']['expose']['remember'] = FALSE;
  $handler->display->display_options['filters']['title']['expose']['multiple'] = FALSE;

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Bulk operations: Content */
  $handler->display->display_options['fields']['views_bulk_operations']['id'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['table'] = 'node';
  $handler->display->display_options['fields']['views_bulk_operations']['field'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['alter']['external'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['views_bulk_operations']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['views_bulk_operations']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['alter']['html'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['views_bulk_operations']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['views_bulk_operations']['hide_empty'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['empty_zero'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['display_type'] = '0';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['enable_select_all_pages'] = 1;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['force_single'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['display_result'] = 1;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['entity_load_capacity'] = '10';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_operations'] = array(
    'action::node_assign_owner_action' => array(
      'selected' => 1,
      'use_queue' => 0,
      'skip_confirmation' => 1,
      'override_label' => 0,
      'label' => '',
    ),
    'action::views_bulk_operations_script_action:ab965ed1c7883cf688819d238f98f2c5' => array(
      'selected' => 1,
      'use_queue' => 0,
      'skip_confirmation' => 1,
      'override_label' => 0,
      'label' => '',
    ),
    'action::views_bulk_operations_delete_item' => array(
      'selected' => 1,
      'use_queue' => 0,
      'skip_confirmation' => 1,
      'override_label' => 0,
      'label' => '',
    ),
    'action::system_message_action' => array(
      'selected' => 0,
      'use_queue' => 0,
      'skip_confirmation' => 1,
      'override_label' => 0,
      'label' => '',
    ),
    'action::views_bulk_operations_script_action' => array(
      'selected' => 1,
      'use_queue' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::fill_geospatial_action' => array(
      'selected' => 0,
      'use_queue' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::localize_it_action' => array(
      'selected' => 0,
      'use_queue' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_make_sticky_action' => array(
      'selected' => 1,
      'use_queue' => 0,
      'skip_confirmation' => 1,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_make_unsticky_action' => array(
      'selected' => 1,
      'use_queue' => 0,
      'skip_confirmation' => 1,
      'override_label' => 0,
      'label' => '',
    ),
    'action::views_bulk_operations_modify_action' => array(
      'selected' => 1,
      'use_queue' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
      'settings' => array(
        'show_all_tokens' => 1,
        'display_values' => array(
          '_all_' => '_all_',
        ),
      ),
    ),
    'action::node_export_drupal_action' => array(
      'selected' => 0,
      'use_queue' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_export_xml_action' => array(
      'selected' => 0,
      'use_queue' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::views_bulk_operations_argument_selector_action' => array(
      'selected' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
      'settings' => array(
        'url' => '',
      ),
    ),
    'action::node_promote_action' => array(
      'selected' => 0,
      'use_queue' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_publish_action' => array(
      'selected' => 0,
      'use_queue' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::system_goto_action' => array(
      'selected' => 0,
      'use_queue' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_unpromote_action' => array(
      'selected' => 0,
      'use_queue' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_save_action' => array(
      'selected' => 1,
      'use_queue' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::system_send_email_action' => array(
      'selected' => 0,
      'use_queue' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_unpublish_action' => array(
      'selected' => 1,
      'use_queue' => 0,
      'skip_confirmation' => 1,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_unpublish_by_keyword_action' => array(
      'selected' => 1,
      'use_queue' => 0,
      'skip_confirmation' => 1,
      'override_label' => 0,
      'label' => '',
    ),
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  /* Field: Content revision: Updated date */
  $handler->display->display_options['fields']['timestamp']['id'] = 'timestamp';
  $handler->display->display_options['fields']['timestamp']['table'] = 'node_revision';
  $handler->display->display_options['fields']['timestamp']['field'] = 'timestamp';
  $handler->display->display_options['fields']['timestamp']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['timestamp']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['timestamp']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['timestamp']['alter']['external'] = 0;
  $handler->display->display_options['fields']['timestamp']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['timestamp']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['timestamp']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['timestamp']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['timestamp']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['timestamp']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['timestamp']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['timestamp']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['timestamp']['alter']['html'] = 0;
  $handler->display->display_options['fields']['timestamp']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['timestamp']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['timestamp']['hide_empty'] = 0;
  $handler->display->display_options['fields']['timestamp']['empty_zero'] = 0;
  $handler->display->display_options['fields']['timestamp']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['timestamp']['date_format'] = 'short';
  /* Field: Content: Type */
  $handler->display->display_options['fields']['type']['id'] = 'type';
  $handler->display->display_options['fields']['type']['table'] = 'node';
  $handler->display->display_options['fields']['type']['field'] = 'type';
  $handler->display->display_options['fields']['type']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['type']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['type']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['type']['alter']['external'] = 0;
  $handler->display->display_options['fields']['type']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['type']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['type']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['type']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['type']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['type']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['type']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['type']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['type']['alter']['html'] = 0;
  $handler->display->display_options['fields']['type']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['type']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['type']['hide_empty'] = 0;
  $handler->display->display_options['fields']['type']['empty_zero'] = 0;
  $handler->display->display_options['fields']['type']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['type']['link_to_node'] = 0;
  $handler->display->display_options['fields']['type']['machine_name'] = 0;
  /* Field: Content: Author uid */
  $handler->display->display_options['fields']['uid']['id'] = 'uid';
  $handler->display->display_options['fields']['uid']['table'] = 'node';
  $handler->display->display_options['fields']['uid']['field'] = 'uid';
  $handler->display->display_options['fields']['uid']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['uid']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['uid']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['uid']['alter']['external'] = 0;
  $handler->display->display_options['fields']['uid']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['uid']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['uid']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['uid']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['uid']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['uid']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['uid']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['uid']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['uid']['alter']['html'] = 0;
  $handler->display->display_options['fields']['uid']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['uid']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['uid']['hide_empty'] = 0;
  $handler->display->display_options['fields']['uid']['empty_zero'] = 0;
  $handler->display->display_options['fields']['uid']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['uid']['link_to_user'] = 1;
  /* Field: Node: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Title */
  $handler->display->display_options['filters']['title']['id'] = 'title';
  $handler->display->display_options['filters']['title']['table'] = 'node';
  $handler->display->display_options['filters']['title']['field'] = 'title';
  $handler->display->display_options['filters']['title']['operator'] = 'contains';
  $handler->display->display_options['filters']['title']['group'] = 1;
  $handler->display->display_options['filters']['title']['exposed'] = TRUE;
  $handler->display->display_options['filters']['title']['expose']['operator_id'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['label'] = 'Title';
  $handler->display->display_options['filters']['title']['expose']['operator'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['identifier'] = 'title';
  $handler->display->display_options['filters']['title']['expose']['required'] = 0;
  $handler->display->display_options['filters']['title']['expose']['multiple'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['group'] = 1;
  $handler->display->display_options['filters']['type']['exposed'] = TRUE;
  $handler->display->display_options['filters']['type']['expose']['operator_id'] = 'type_op';
  $handler->display->display_options['filters']['type']['expose']['label'] = 'Type';
  $handler->display->display_options['filters']['type']['expose']['operator'] = 'type_op';
  $handler->display->display_options['filters']['type']['expose']['identifier'] = 'type';
  $handler->display->display_options['filters']['type']['expose']['reduce'] = 0;
  /* Filter criterion: Content translation: Language */
  $handler->display->display_options['filters']['language']['id'] = 'language';
  $handler->display->display_options['filters']['language']['table'] = 'node';
  $handler->display->display_options['filters']['language']['field'] = 'language';
  $handler->display->display_options['filters']['language']['value'] = array(
    'en' => 'en',
    'it' => 'it',
  );
  $handler->display->display_options['filters']['language']['exposed'] = TRUE;
  $handler->display->display_options['filters']['language']['expose']['operator_id'] = 'language_op';
  $handler->display->display_options['filters']['language']['expose']['label'] = 'Language';
  $handler->display->display_options['filters']['language']['expose']['operator'] = 'language_op';
  $handler->display->display_options['filters']['language']['expose']['identifier'] = 'language';
  $handler->display->display_options['filters']['language']['expose']['reduce'] = 0;
  /* Filter criterion: Content: Author uid */
  $handler->display->display_options['filters']['uid']['id'] = 'uid';
  $handler->display->display_options['filters']['uid']['table'] = 'node';
  $handler->display->display_options['filters']['uid']['field'] = 'uid';
  $handler->display->display_options['filters']['uid']['value'] = '';
  $handler->display->display_options['filters']['uid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['uid']['expose']['operator_id'] = 'uid_op';
  $handler->display->display_options['filters']['uid']['expose']['label'] = 'Author uid';
  $handler->display->display_options['filters']['uid']['expose']['use_operator'] = 1;
  $handler->display->display_options['filters']['uid']['expose']['operator'] = 'uid_op';
  $handler->display->display_options['filters']['uid']['expose']['identifier'] = 'uid';
  $handler->display->display_options['filters']['uid']['expose']['multiple'] = FALSE;
  $handler->display->display_options['filters']['uid']['expose']['reduce'] = 0;
  /* Filter criterion: Content: Post date */
  $handler->display->display_options['filters']['created']['id'] = 'created';
  $handler->display->display_options['filters']['created']['table'] = 'node';
  $handler->display->display_options['filters']['created']['field'] = 'created';
  $handler->display->display_options['filters']['created']['operator'] = '>';
  $handler->display->display_options['filters']['created']['exposed'] = TRUE;
  $handler->display->display_options['filters']['created']['expose']['operator_id'] = 'created_op';
  $handler->display->display_options['filters']['created']['expose']['label'] = 'Post date';
  $handler->display->display_options['filters']['created']['expose']['use_operator'] = 1;
  $handler->display->display_options['filters']['created']['expose']['operator'] = 'created_op';
  $handler->display->display_options['filters']['created']['expose']['identifier'] = 'created';
  $handler->display->display_options['filters']['created']['expose']['multiple'] = FALSE;
  /* Filter criterion: Content: Updated date */
  $handler->display->display_options['filters']['changed']['id'] = 'changed';
  $handler->display->display_options['filters']['changed']['table'] = 'node';
  $handler->display->display_options['filters']['changed']['field'] = 'changed';
  $handler->display->display_options['filters']['changed']['operator'] = '<=';
  $handler->display->display_options['filters']['changed']['exposed'] = TRUE;
  $handler->display->display_options['filters']['changed']['expose']['operator_id'] = 'changed_op';
  $handler->display->display_options['filters']['changed']['expose']['label'] = 'Updated date';
  $handler->display->display_options['filters']['changed']['expose']['use_operator'] = 1;
  $handler->display->display_options['filters']['changed']['expose']['operator'] = 'changed_op';
  $handler->display->display_options['filters']['changed']['expose']['identifier'] = 'changed';
  $handler->display->display_options['filters']['changed']['expose']['multiple'] = FALSE;
  /* Filter criterion: Content: Node UUID */
  $handler->display->display_options['filters']['uuid']['id'] = 'uuid';
  $handler->display->display_options['filters']['uuid']['table'] = 'node';
  $handler->display->display_options['filters']['uuid']['field'] = 'uuid';
  $handler->display->display_options['filters']['uuid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['uuid']['expose']['operator_id'] = 'uuid_op';
  $handler->display->display_options['filters']['uuid']['expose']['label'] = 'Node UUID';
  $handler->display->display_options['filters']['uuid']['expose']['use_operator'] = 1;
  $handler->display->display_options['filters']['uuid']['expose']['operator'] = 'uuid_op';
  $handler->display->display_options['filters']['uuid']['expose']['identifier'] = 'uuid';
  $handler->display->display_options['filters']['uuid']['expose']['required'] = 0;
  $handler->display->display_options['filters']['uuid']['expose']['multiple'] = FALSE;
  /* Filter criterion: Content: Immagine (field_immagine:width) */
  $handler->display->display_options['filters']['field_immagine_width']['id'] = 'field_immagine_width';
  $handler->display->display_options['filters']['field_immagine_width']['table'] = 'field_data_field_immagine';
  $handler->display->display_options['filters']['field_immagine_width']['field'] = 'field_immagine_width';
  $handler->display->display_options['filters']['field_immagine_width']['operator'] = 'empty';
  $handler->display->display_options['filters']['field_immagine_width']['value']['value'] = '0';
  $handler->display->display_options['filters']['field_immagine_width']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_immagine_width']['expose']['operator_id'] = 'field_immagine_width_op';
  $handler->display->display_options['filters']['field_immagine_width']['expose']['label'] = 'Immagine (field_immagine:width)';
  $handler->display->display_options['filters']['field_immagine_width']['expose']['operator'] = 'field_immagine_width_op';
  $handler->display->display_options['filters']['field_immagine_width']['expose']['identifier'] = 'field_immagine_width';
  $handler->display->display_options['filters']['field_immagine_width']['expose']['multiple'] = FALSE;
  $handler->display->display_options['path'] = 'admin/dashboard_plus';

  /* Display: Dashboard media */
  $handler = $view->new_display('page', 'Dashboard media', 'page_1');
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Bulk operations: Content */
  $handler->display->display_options['fields']['views_bulk_operations']['id'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['table'] = 'node';
  $handler->display->display_options['fields']['views_bulk_operations']['field'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['display_type'] = '0';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['enable_select_all_pages'] = 1;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['force_single'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['entity_load_capacity'] = '10';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_operations'] = array(
    'action::node_assign_owner_action' => array(
      'selected' => 1,
      'skip_confirmation' => 1,
      'override_label' => 0,
      'label' => '',
      'postpone_processing' => 0,
    ),
    'action::views_bulk_operations_delete_item' => array(
      'selected' => 1,
      'skip_confirmation' => 1,
      'override_label' => 0,
      'label' => '',
      'postpone_processing' => 0,
    ),
    'action::system_message_action' => array(
      'selected' => 0,
      'skip_confirmation' => 1,
      'override_label' => 0,
      'label' => '',
      'postpone_processing' => 0,
    ),
    'action::views_bulk_operations_script_action' => array(
      'selected' => 1,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
      'postpone_processing' => 1,
    ),
    'action::node_make_sticky_action' => array(
      'selected' => 1,
      'skip_confirmation' => 1,
      'override_label' => 0,
      'label' => '',
      'postpone_processing' => 0,
    ),
    'action::node_make_unsticky_action' => array(
      'selected' => 1,
      'skip_confirmation' => 1,
      'override_label' => 0,
      'label' => '',
      'postpone_processing' => 0,
    ),
    'action::views_bulk_operations_modify_action' => array(
      'selected' => 1,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
      'settings' => array(
        'show_all_tokens' => 1,
        'display_values' => array(
          '_all_' => '_all_',
        ),
      ),
      'postpone_processing' => 0,
    ),
    'action::views_bulk_operations_argument_selector_action' => array(
      'selected' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
      'settings' => array(
        'url' => '',
      ),
    ),
    'action::node_promote_action' => array(
      'selected' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
      'postpone_processing' => 0,
    ),
    'action::node_publish_action' => array(
      'selected' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
      'postpone_processing' => 0,
    ),
    'action::system_goto_action' => array(
      'selected' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
      'postpone_processing' => 0,
    ),
    'action::node_unpromote_action' => array(
      'selected' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
      'postpone_processing' => 0,
    ),
    'action::node_save_action' => array(
      'selected' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
      'postpone_processing' => 0,
    ),
    'action::system_send_email_action' => array(
      'selected' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
      'postpone_processing' => 0,
    ),
    'action::node_unpublish_action' => array(
      'selected' => 1,
      'skip_confirmation' => 1,
      'override_label' => 0,
      'label' => '',
      'postpone_processing' => 0,
    ),
    'action::node_unpublish_by_keyword_action' => array(
      'selected' => 1,
      'skip_confirmation' => 1,
      'override_label' => 0,
      'label' => '',
      'postpone_processing' => 0,
    ),
    'action::pathauto_node_update_action' => array(
      'selected' => 1,
      'skip_confirmation' => 1,
      'override_label' => 0,
      'label' => '',
      'postpone_processing' => 0,
    ),
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['path'] = 'dashboard_plus/media';

  /* Display: Data export */
  $handler = $view->new_display('views_data_export', 'Data export', 'views_data_export_1');
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'views_data_export_csv';
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Content: Author */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'node';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  $handler->display->display_options['relationships']['uid']['required'] = 0;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Type */
  $handler->display->display_options['fields']['type']['id'] = 'type';
  $handler->display->display_options['fields']['type']['table'] = 'node';
  $handler->display->display_options['fields']['type']['field'] = 'type';
  $handler->display->display_options['fields']['type']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['type']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['type']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['type']['alter']['external'] = 0;
  $handler->display->display_options['fields']['type']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['type']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['type']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['type']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['type']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['type']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['type']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['type']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['type']['alter']['html'] = 0;
  $handler->display->display_options['fields']['type']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['type']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['type']['hide_empty'] = 0;
  $handler->display->display_options['fields']['type']['empty_zero'] = 0;
  $handler->display->display_options['fields']['type']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['type']['link_to_node'] = 0;
  $handler->display->display_options['fields']['type']['machine_name'] = 0;
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
  $handler->display->display_options['fields']['created']['date_format'] = 'short';
  /* Field: Content: Updated date */
  $handler->display->display_options['fields']['changed']['id'] = 'changed';
  $handler->display->display_options['fields']['changed']['table'] = 'node';
  $handler->display->display_options['fields']['changed']['field'] = 'changed';
  $handler->display->display_options['fields']['changed']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['changed']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['changed']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['changed']['alter']['external'] = 0;
  $handler->display->display_options['fields']['changed']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['changed']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['changed']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['changed']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['changed']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['changed']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['changed']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['changed']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['changed']['alter']['html'] = 0;
  $handler->display->display_options['fields']['changed']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['changed']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['changed']['hide_empty'] = 0;
  $handler->display->display_options['fields']['changed']['empty_zero'] = 0;
  $handler->display->display_options['fields']['changed']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['changed']['date_format'] = 'short';
  /* Field: Content: Published */
  $handler->display->display_options['fields']['status']['id'] = 'status';
  $handler->display->display_options['fields']['status']['table'] = 'node';
  $handler->display->display_options['fields']['status']['field'] = 'status';
  $handler->display->display_options['fields']['status']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['status']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['status']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['status']['alter']['external'] = 0;
  $handler->display->display_options['fields']['status']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['status']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['status']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['status']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['status']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['status']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['status']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['status']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['status']['alter']['html'] = 0;
  $handler->display->display_options['fields']['status']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['status']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['status']['hide_empty'] = 0;
  $handler->display->display_options['fields']['status']['empty_zero'] = 0;
  $handler->display->display_options['fields']['status']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['status']['type'] = 'published-notpublished';
  $handler->display->display_options['fields']['status']['not'] = 0;
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'uid';
  $handler->display->display_options['fields']['name']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['name']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['name']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['name']['alter']['external'] = 0;
  $handler->display->display_options['fields']['name']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['name']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['name']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['name']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['name']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['name']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['name']['alter']['html'] = 0;
  $handler->display->display_options['fields']['name']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['name']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['name']['hide_empty'] = 0;
  $handler->display->display_options['fields']['name']['empty_zero'] = 0;
  $handler->display->display_options['fields']['name']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['name']['link_to_user'] = 0;
  $handler->display->display_options['fields']['name']['overwrite_anonymous'] = 0;
  $handler->display->display_options['fields']['name']['format_username'] = 1;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Nid */
  $handler->display->display_options['sorts']['nid']['id'] = 'nid';
  $handler->display->display_options['sorts']['nid']['table'] = 'node';
  $handler->display->display_options['sorts']['nid']['field'] = 'nid';
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'scheda_prodotto' => 'scheda_prodotto',
    'scheda_gestore' => 'scheda_gestore',
    'scheda_itinerario' => 'scheda_itinerario',
    'scheda_operatori_economici' => 'scheda_operatori_economici',
    'scheda_porto' => 'scheda_porto',
    'scheda_territorio' => 'scheda_territorio',
    'poi' => 'poi',
  );
  $handler->display->display_options['path'] = 'admin/dump_contents';

  /* Display: Created */
  $handler = $view->new_display('page', 'Created', 'page_2');
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Bulk operations: Content */
  $handler->display->display_options['fields']['views_bulk_operations']['id'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['table'] = 'node';
  $handler->display->display_options['fields']['views_bulk_operations']['field'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['alter']['external'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['views_bulk_operations']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['views_bulk_operations']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['alter']['html'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['views_bulk_operations']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['views_bulk_operations']['hide_empty'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['empty_zero'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['display_type'] = '0';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['enable_select_all_pages'] = 1;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['force_single'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['display_result'] = 1;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['entity_load_capacity'] = '10';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_operations'] = array(
    'action::node_assign_owner_action' => array(
      'selected' => 1,
      'use_queue' => 0,
      'skip_confirmation' => 1,
      'override_label' => 0,
      'label' => '',
    ),
    'action::views_bulk_operations_script_action:ab965ed1c7883cf688819d238f98f2c5' => array(
      'selected' => 1,
      'use_queue' => 0,
      'skip_confirmation' => 1,
      'override_label' => 0,
      'label' => '',
    ),
    'action::views_bulk_operations_delete_item' => array(
      'selected' => 1,
      'use_queue' => 0,
      'skip_confirmation' => 1,
      'override_label' => 0,
      'label' => '',
    ),
    'action::system_message_action' => array(
      'selected' => 0,
      'use_queue' => 0,
      'skip_confirmation' => 1,
      'override_label' => 0,
      'label' => '',
    ),
    'action::views_bulk_operations_script_action' => array(
      'selected' => 1,
      'use_queue' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_make_sticky_action' => array(
      'selected' => 1,
      'use_queue' => 0,
      'skip_confirmation' => 1,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_make_unsticky_action' => array(
      'selected' => 1,
      'use_queue' => 0,
      'skip_confirmation' => 1,
      'override_label' => 0,
      'label' => '',
    ),
    'action::views_bulk_operations_modify_action' => array(
      'selected' => 1,
      'use_queue' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
      'settings' => array(
        'show_all_tokens' => 1,
        'display_values' => array(
          '_all_' => '_all_',
        ),
      ),
    ),
    'action::node_export_drupal_action' => array(
      'selected' => 0,
      'use_queue' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_export_xml_action' => array(
      'selected' => 0,
      'use_queue' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::views_bulk_operations_argument_selector_action' => array(
      'selected' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
      'settings' => array(
        'url' => '',
      ),
    ),
    'action::node_promote_action' => array(
      'selected' => 0,
      'use_queue' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_publish_action' => array(
      'selected' => 0,
      'use_queue' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::system_goto_action' => array(
      'selected' => 0,
      'use_queue' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_unpromote_action' => array(
      'selected' => 0,
      'use_queue' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_save_action' => array(
      'selected' => 0,
      'use_queue' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::system_send_email_action' => array(
      'selected' => 0,
      'use_queue' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_unpublish_action' => array(
      'selected' => 1,
      'use_queue' => 0,
      'skip_confirmation' => 1,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_unpublish_by_keyword_action' => array(
      'selected' => 1,
      'use_queue' => 0,
      'skip_confirmation' => 1,
      'override_label' => 0,
      'label' => '',
    ),
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  /* Field: Content: Type */
  $handler->display->display_options['fields']['type']['id'] = 'type';
  $handler->display->display_options['fields']['type']['table'] = 'node';
  $handler->display->display_options['fields']['type']['field'] = 'type';
  $handler->display->display_options['fields']['type']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['type']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['type']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['type']['alter']['external'] = 0;
  $handler->display->display_options['fields']['type']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['type']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['type']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['type']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['type']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['type']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['type']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['type']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['type']['alter']['html'] = 0;
  $handler->display->display_options['fields']['type']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['type']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['type']['hide_empty'] = 0;
  $handler->display->display_options['fields']['type']['empty_zero'] = 0;
  $handler->display->display_options['fields']['type']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['type']['link_to_node'] = 0;
  $handler->display->display_options['fields']['type']['machine_name'] = 0;
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
  $handler->display->display_options['fields']['created']['date_format'] = 'long';
  /* Field: Content: Author uid */
  $handler->display->display_options['fields']['uid']['id'] = 'uid';
  $handler->display->display_options['fields']['uid']['table'] = 'node';
  $handler->display->display_options['fields']['uid']['field'] = 'uid';
  $handler->display->display_options['fields']['uid']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['uid']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['uid']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['uid']['alter']['external'] = 0;
  $handler->display->display_options['fields']['uid']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['uid']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['uid']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['uid']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['uid']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['uid']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['uid']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['uid']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['uid']['alter']['html'] = 0;
  $handler->display->display_options['fields']['uid']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['uid']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['uid']['hide_empty'] = 0;
  $handler->display->display_options['fields']['uid']['empty_zero'] = 0;
  $handler->display->display_options['fields']['uid']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['uid']['link_to_user'] = 1;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Title */
  $handler->display->display_options['filters']['title']['id'] = 'title';
  $handler->display->display_options['filters']['title']['table'] = 'node';
  $handler->display->display_options['filters']['title']['field'] = 'title';
  $handler->display->display_options['filters']['title']['operator'] = 'contains';
  $handler->display->display_options['filters']['title']['group'] = 1;
  $handler->display->display_options['filters']['title']['exposed'] = TRUE;
  $handler->display->display_options['filters']['title']['expose']['operator_id'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['label'] = 'Title';
  $handler->display->display_options['filters']['title']['expose']['operator'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['identifier'] = 'title';
  $handler->display->display_options['filters']['title']['expose']['required'] = 0;
  $handler->display->display_options['filters']['title']['expose']['multiple'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['group'] = 1;
  $handler->display->display_options['filters']['type']['exposed'] = TRUE;
  $handler->display->display_options['filters']['type']['expose']['operator_id'] = 'type_op';
  $handler->display->display_options['filters']['type']['expose']['label'] = 'Type';
  $handler->display->display_options['filters']['type']['expose']['operator'] = 'type_op';
  $handler->display->display_options['filters']['type']['expose']['identifier'] = 'type';
  $handler->display->display_options['filters']['type']['expose']['reduce'] = 0;
  /* Filter criterion: Content translation: Language */
  $handler->display->display_options['filters']['language']['id'] = 'language';
  $handler->display->display_options['filters']['language']['table'] = 'node';
  $handler->display->display_options['filters']['language']['field'] = 'language';
  $handler->display->display_options['filters']['language']['value'] = array(
    'it' => 'it',
  );
  $handler->display->display_options['filters']['language']['expose']['operator_id'] = 'language_op';
  $handler->display->display_options['filters']['language']['expose']['label'] = 'Language';
  $handler->display->display_options['filters']['language']['expose']['operator'] = 'language_op';
  $handler->display->display_options['filters']['language']['expose']['identifier'] = 'language';
  $handler->display->display_options['filters']['language']['expose']['reduce'] = 0;
  /* Filter criterion: Content: Author uid */
  $handler->display->display_options['filters']['uid']['id'] = 'uid';
  $handler->display->display_options['filters']['uid']['table'] = 'node';
  $handler->display->display_options['filters']['uid']['field'] = 'uid';
  $handler->display->display_options['filters']['uid']['value'] = '';
  $handler->display->display_options['filters']['uid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['uid']['expose']['operator_id'] = 'uid_op';
  $handler->display->display_options['filters']['uid']['expose']['label'] = 'Author uid';
  $handler->display->display_options['filters']['uid']['expose']['use_operator'] = 1;
  $handler->display->display_options['filters']['uid']['expose']['operator'] = 'uid_op';
  $handler->display->display_options['filters']['uid']['expose']['identifier'] = 'uid';
  $handler->display->display_options['filters']['uid']['expose']['multiple'] = FALSE;
  $handler->display->display_options['filters']['uid']['expose']['reduce'] = 0;
  /* Filter criterion: Content: Post date */
  $handler->display->display_options['filters']['created']['id'] = 'created';
  $handler->display->display_options['filters']['created']['table'] = 'node';
  $handler->display->display_options['filters']['created']['field'] = 'created';
  $handler->display->display_options['filters']['created']['operator'] = 'between';
  $handler->display->display_options['filters']['created']['exposed'] = TRUE;
  $handler->display->display_options['filters']['created']['expose']['operator_id'] = 'created_op';
  $handler->display->display_options['filters']['created']['expose']['label'] = 'Post date';
  $handler->display->display_options['filters']['created']['expose']['operator'] = 'created_op';
  $handler->display->display_options['filters']['created']['expose']['identifier'] = 'created';
  $handler->display->display_options['filters']['created']['expose']['multiple'] = FALSE;
  $handler->display->display_options['path'] = 'admin/dashboard_plus2';

  /* Display: Geo */
  $handler = $view->new_display('page', 'Geo', 'page_3');
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Bulk operations: Content */
  $handler->display->display_options['fields']['views_bulk_operations']['id'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['table'] = 'node';
  $handler->display->display_options['fields']['views_bulk_operations']['field'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['alter']['external'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['views_bulk_operations']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['views_bulk_operations']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['alter']['html'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['views_bulk_operations']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['views_bulk_operations']['hide_empty'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['empty_zero'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['display_type'] = '0';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['enable_select_all_pages'] = 1;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['force_single'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['display_result'] = 1;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['entity_load_capacity'] = '10';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_operations'] = array(
    'action::node_assign_owner_action' => array(
      'selected' => 1,
      'use_queue' => 0,
      'skip_confirmation' => 1,
      'override_label' => 0,
      'label' => '',
    ),
    'action::views_bulk_operations_script_action:ab965ed1c7883cf688819d238f98f2c5' => array(
      'selected' => 1,
      'use_queue' => 0,
      'skip_confirmation' => 1,
      'override_label' => 0,
      'label' => '',
    ),
    'action::views_bulk_operations_delete_item' => array(
      'selected' => 1,
      'use_queue' => 0,
      'skip_confirmation' => 1,
      'override_label' => 0,
      'label' => '',
    ),
    'action::system_message_action' => array(
      'selected' => 0,
      'use_queue' => 0,
      'skip_confirmation' => 1,
      'override_label' => 0,
      'label' => '',
    ),
    'action::views_bulk_operations_script_action' => array(
      'selected' => 1,
      'use_queue' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::fill_geospatial_action' => array(
      'selected' => 0,
      'use_queue' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::localize_it_action' => array(
      'selected' => 1,
      'use_queue' => 0,
      'skip_confirmation' => 1,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_make_sticky_action' => array(
      'selected' => 1,
      'use_queue' => 0,
      'skip_confirmation' => 1,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_make_unsticky_action' => array(
      'selected' => 1,
      'use_queue' => 0,
      'skip_confirmation' => 1,
      'override_label' => 0,
      'label' => '',
    ),
    'action::views_bulk_operations_modify_action' => array(
      'selected' => 1,
      'use_queue' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
      'settings' => array(
        'show_all_tokens' => 1,
        'display_values' => array(
          '_all_' => '_all_',
        ),
      ),
    ),
    'action::node_export_drupal_action' => array(
      'selected' => 0,
      'use_queue' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_export_xml_action' => array(
      'selected' => 0,
      'use_queue' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::views_bulk_operations_argument_selector_action' => array(
      'selected' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
      'settings' => array(
        'url' => '',
      ),
    ),
    'action::node_promote_action' => array(
      'selected' => 0,
      'use_queue' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_publish_action' => array(
      'selected' => 0,
      'use_queue' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::system_goto_action' => array(
      'selected' => 0,
      'use_queue' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_unpromote_action' => array(
      'selected' => 0,
      'use_queue' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_save_action' => array(
      'selected' => 0,
      'use_queue' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::system_send_email_action' => array(
      'selected' => 0,
      'use_queue' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_unpublish_action' => array(
      'selected' => 1,
      'use_queue' => 0,
      'skip_confirmation' => 1,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_unpublish_by_keyword_action' => array(
      'selected' => 1,
      'use_queue' => 0,
      'skip_confirmation' => 1,
      'override_label' => 0,
      'label' => '',
    ),
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  /* Field: Content revision: Updated date */
  $handler->display->display_options['fields']['timestamp']['id'] = 'timestamp';
  $handler->display->display_options['fields']['timestamp']['table'] = 'node_revision';
  $handler->display->display_options['fields']['timestamp']['field'] = 'timestamp';
  $handler->display->display_options['fields']['timestamp']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['timestamp']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['timestamp']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['timestamp']['alter']['external'] = 0;
  $handler->display->display_options['fields']['timestamp']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['timestamp']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['timestamp']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['timestamp']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['timestamp']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['timestamp']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['timestamp']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['timestamp']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['timestamp']['alter']['html'] = 0;
  $handler->display->display_options['fields']['timestamp']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['timestamp']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['timestamp']['hide_empty'] = 0;
  $handler->display->display_options['fields']['timestamp']['empty_zero'] = 0;
  $handler->display->display_options['fields']['timestamp']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['timestamp']['date_format'] = 'short';
  /* Field: Content: Type */
  $handler->display->display_options['fields']['type']['id'] = 'type';
  $handler->display->display_options['fields']['type']['table'] = 'node';
  $handler->display->display_options['fields']['type']['field'] = 'type';
  $handler->display->display_options['fields']['type']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['type']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['type']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['type']['alter']['external'] = 0;
  $handler->display->display_options['fields']['type']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['type']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['type']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['type']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['type']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['type']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['type']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['type']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['type']['alter']['html'] = 0;
  $handler->display->display_options['fields']['type']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['type']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['type']['hide_empty'] = 0;
  $handler->display->display_options['fields']['type']['empty_zero'] = 0;
  $handler->display->display_options['fields']['type']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['type']['link_to_node'] = 0;
  $handler->display->display_options['fields']['type']['machine_name'] = 0;
  /* Field: Content: Author uid */
  $handler->display->display_options['fields']['uid']['id'] = 'uid';
  $handler->display->display_options['fields']['uid']['table'] = 'node';
  $handler->display->display_options['fields']['uid']['field'] = 'uid';
  $handler->display->display_options['fields']['uid']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['uid']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['uid']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['uid']['alter']['external'] = 0;
  $handler->display->display_options['fields']['uid']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['uid']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['uid']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['uid']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['uid']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['uid']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['uid']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['uid']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['uid']['alter']['html'] = 0;
  $handler->display->display_options['fields']['uid']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['uid']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['uid']['hide_empty'] = 0;
  $handler->display->display_options['fields']['uid']['empty_zero'] = 0;
  $handler->display->display_options['fields']['uid']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['uid']['link_to_user'] = 1;
  /* Field: Node: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['edit_node']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['edit_node']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['edit_node']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['edit_node']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['edit_node']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['edit_node']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['edit_node']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['edit_node']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['edit_node']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['edit_node']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['edit_node']['alter']['html'] = 0;
  $handler->display->display_options['fields']['edit_node']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['edit_node']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['edit_node']['hide_empty'] = 0;
  $handler->display->display_options['fields']['edit_node']['empty_zero'] = 0;
  $handler->display->display_options['fields']['edit_node']['hide_alter_empty'] = 1;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Title */
  $handler->display->display_options['filters']['title']['id'] = 'title';
  $handler->display->display_options['filters']['title']['table'] = 'node';
  $handler->display->display_options['filters']['title']['field'] = 'title';
  $handler->display->display_options['filters']['title']['operator'] = 'contains';
  $handler->display->display_options['filters']['title']['group'] = 1;
  $handler->display->display_options['filters']['title']['exposed'] = TRUE;
  $handler->display->display_options['filters']['title']['expose']['operator_id'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['label'] = 'Title';
  $handler->display->display_options['filters']['title']['expose']['operator'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['identifier'] = 'title';
  $handler->display->display_options['filters']['title']['expose']['required'] = 0;
  $handler->display->display_options['filters']['title']['expose']['multiple'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['group'] = 1;
  $handler->display->display_options['filters']['type']['exposed'] = TRUE;
  $handler->display->display_options['filters']['type']['expose']['operator_id'] = 'type_op';
  $handler->display->display_options['filters']['type']['expose']['label'] = 'Type';
  $handler->display->display_options['filters']['type']['expose']['operator'] = 'type_op';
  $handler->display->display_options['filters']['type']['expose']['identifier'] = 'type';
  $handler->display->display_options['filters']['type']['expose']['reduce'] = 0;
  /* Filter criterion: Content: Località (field_location) */
  $handler->display->display_options['filters']['field_location_lid']['id'] = 'field_location_lid';
  $handler->display->display_options['filters']['field_location_lid']['table'] = 'field_data_field_location';
  $handler->display->display_options['filters']['field_location_lid']['field'] = 'field_location_lid';
  $handler->display->display_options['filters']['field_location_lid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_location_lid']['expose']['operator_id'] = 'field_location_lid_op';
  $handler->display->display_options['filters']['field_location_lid']['expose']['label'] = 'Località (field_location)';
  $handler->display->display_options['filters']['field_location_lid']['expose']['use_operator'] = 1;
  $handler->display->display_options['filters']['field_location_lid']['expose']['operator'] = 'field_location_lid_op';
  $handler->display->display_options['filters']['field_location_lid']['expose']['identifier'] = 'field_location_lid';
  $handler->display->display_options['filters']['field_location_lid']['expose']['multiple'] = FALSE;
  /* Filter criterion: Content: Località (field_getlocations) */
  $handler->display->display_options['filters']['field_getlocations_glid']['id'] = 'field_getlocations_glid';
  $handler->display->display_options['filters']['field_getlocations_glid']['table'] = 'field_data_field_getlocations';
  $handler->display->display_options['filters']['field_getlocations_glid']['field'] = 'field_getlocations_glid';
  $handler->display->display_options['filters']['field_getlocations_glid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_getlocations_glid']['expose']['operator_id'] = 'field_getlocations_glid_op';
  $handler->display->display_options['filters']['field_getlocations_glid']['expose']['label'] = 'Località (field_getlocations)';
  $handler->display->display_options['filters']['field_getlocations_glid']['expose']['use_operator'] = 1;
  $handler->display->display_options['filters']['field_getlocations_glid']['expose']['operator'] = 'field_getlocations_glid_op';
  $handler->display->display_options['filters']['field_getlocations_glid']['expose']['identifier'] = 'field_getlocations_glid';
  $handler->display->display_options['filters']['field_getlocations_glid']['expose']['multiple'] = FALSE;
  $handler->display->display_options['path'] = 'admin/dashboard_plus/geo';

  /* Display: Medio campidano */
  $handler = $view->new_display('views_data_export', 'Medio campidano', 'views_data_export_2');
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '500';
  $handler->display->display_options['pager']['options']['offset'] = '850';
  $handler->display->display_options['style_plugin'] = 'views_data_export_xls';
  $handler->display->display_options['style_options']['provide_file'] = 1;
  $handler->display->display_options['style_options']['filename'] = 'contenuti_medio_campidano.xls';
  $handler->display->display_options['style_options']['parent_sort'] = 0;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Content: Author */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'node';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  $handler->display->display_options['relationships']['uid']['required'] = 0;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Type */
  $handler->display->display_options['fields']['type']['id'] = 'type';
  $handler->display->display_options['fields']['type']['table'] = 'node';
  $handler->display->display_options['fields']['type']['field'] = 'type';
  $handler->display->display_options['fields']['type']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['type']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['type']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['type']['alter']['external'] = 0;
  $handler->display->display_options['fields']['type']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['type']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['type']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['type']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['type']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['type']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['type']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['type']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['type']['alter']['html'] = 0;
  $handler->display->display_options['fields']['type']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['type']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['type']['hide_empty'] = 0;
  $handler->display->display_options['fields']['type']['empty_zero'] = 0;
  $handler->display->display_options['fields']['type']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['type']['link_to_node'] = 0;
  $handler->display->display_options['fields']['type']['machine_name'] = 0;
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
  $handler->display->display_options['fields']['created']['date_format'] = 'short';
  /* Field: Content: Updated date */
  $handler->display->display_options['fields']['changed']['id'] = 'changed';
  $handler->display->display_options['fields']['changed']['table'] = 'node';
  $handler->display->display_options['fields']['changed']['field'] = 'changed';
  $handler->display->display_options['fields']['changed']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['changed']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['changed']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['changed']['alter']['external'] = 0;
  $handler->display->display_options['fields']['changed']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['changed']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['changed']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['changed']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['changed']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['changed']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['changed']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['changed']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['changed']['alter']['html'] = 0;
  $handler->display->display_options['fields']['changed']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['changed']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['changed']['hide_empty'] = 0;
  $handler->display->display_options['fields']['changed']['empty_zero'] = 0;
  $handler->display->display_options['fields']['changed']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['changed']['date_format'] = 'short';
  /* Field: Content: Published */
  $handler->display->display_options['fields']['status']['id'] = 'status';
  $handler->display->display_options['fields']['status']['table'] = 'node';
  $handler->display->display_options['fields']['status']['field'] = 'status';
  $handler->display->display_options['fields']['status']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['status']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['status']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['status']['alter']['external'] = 0;
  $handler->display->display_options['fields']['status']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['status']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['status']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['status']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['status']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['status']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['status']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['status']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['status']['alter']['html'] = 0;
  $handler->display->display_options['fields']['status']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['status']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['status']['hide_empty'] = 0;
  $handler->display->display_options['fields']['status']['empty_zero'] = 0;
  $handler->display->display_options['fields']['status']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['status']['type'] = 'published-notpublished';
  $handler->display->display_options['fields']['status']['not'] = 0;
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'uid';
  $handler->display->display_options['fields']['name']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['name']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['name']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['name']['alter']['external'] = 0;
  $handler->display->display_options['fields']['name']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['name']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['name']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['name']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['name']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['name']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['name']['alter']['html'] = 0;
  $handler->display->display_options['fields']['name']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['name']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['name']['hide_empty'] = 0;
  $handler->display->display_options['fields']['name']['empty_zero'] = 0;
  $handler->display->display_options['fields']['name']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['name']['link_to_user'] = 0;
  $handler->display->display_options['fields']['name']['overwrite_anonymous'] = 0;
  $handler->display->display_options['fields']['name']['format_username'] = 1;
  /* Field: Content: Porto di riferimento */
  $handler->display->display_options['fields']['field_ref_porto']['id'] = 'field_ref_porto';
  $handler->display->display_options['fields']['field_ref_porto']['table'] = 'field_data_field_ref_porto';
  $handler->display->display_options['fields']['field_ref_porto']['field'] = 'field_ref_porto';
  $handler->display->display_options['fields']['field_ref_porto']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_ref_porto']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_ref_porto']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_ref_porto']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_ref_porto']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_ref_porto']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_ref_porto']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_ref_porto']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_ref_porto']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_ref_porto']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_ref_porto']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_ref_porto']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_ref_porto']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_ref_porto']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_ref_porto']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_ref_porto']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_ref_porto']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_ref_porto']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_ref_porto']['group_rows'] = 1;
  $handler->display->display_options['fields']['field_ref_porto']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_ref_porto']['delta_reversed'] = 0;
  $handler->display->display_options['fields']['field_ref_porto']['delta_first_last'] = 0;
  $handler->display->display_options['fields']['field_ref_porto']['field_api_classes'] = 0;
  /* Field: Content: Territorio di riferimento */
  $handler->display->display_options['fields']['field_territori']['id'] = 'field_territori';
  $handler->display->display_options['fields']['field_territori']['table'] = 'field_data_field_territori';
  $handler->display->display_options['fields']['field_territori']['field'] = 'field_territori';
  $handler->display->display_options['fields']['field_territori']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_territori']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_territori']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_territori']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_territori']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_territori']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_territori']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_territori']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_territori']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_territori']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_territori']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_territori']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_territori']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_territori']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_territori']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_territori']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_territori']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_territori']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_territori']['field_api_classes'] = 0;
  /* Field: Content: Tipo approdo */
  $handler->display->display_options['fields']['field_tipo_approdo']['id'] = 'field_tipo_approdo';
  $handler->display->display_options['fields']['field_tipo_approdo']['table'] = 'field_data_field_tipo_approdo';
  $handler->display->display_options['fields']['field_tipo_approdo']['field'] = 'field_tipo_approdo';
  $handler->display->display_options['fields']['field_tipo_approdo']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_tipo_approdo']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_tipo_approdo']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_tipo_approdo']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_tipo_approdo']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_tipo_approdo']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_tipo_approdo']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_tipo_approdo']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_tipo_approdo']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_tipo_approdo']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_tipo_approdo']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_tipo_approdo']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_tipo_approdo']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_tipo_approdo']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_tipo_approdo']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_tipo_approdo']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_tipo_approdo']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_tipo_approdo']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_tipo_approdo']['field_api_classes'] = 0;
  /* Field: Content: Settore economico */
  $handler->display->display_options['fields']['field_settore_economico']['id'] = 'field_settore_economico';
  $handler->display->display_options['fields']['field_settore_economico']['table'] = 'field_data_field_settore_economico';
  $handler->display->display_options['fields']['field_settore_economico']['field'] = 'field_settore_economico';
  $handler->display->display_options['fields']['field_settore_economico']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_settore_economico']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_settore_economico']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_settore_economico']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_settore_economico']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_settore_economico']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_settore_economico']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_settore_economico']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_settore_economico']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_settore_economico']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_settore_economico']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_settore_economico']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_settore_economico']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_settore_economico']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_settore_economico']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_settore_economico']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_settore_economico']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_settore_economico']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_settore_economico']['field_api_classes'] = 0;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
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
  $handler->display->display_options['fields']['body']['field_api_classes'] = 0;
  /* Field: Content: Immagine */
  $handler->display->display_options['fields']['field_immagine']['id'] = 'field_immagine';
  $handler->display->display_options['fields']['field_immagine']['table'] = 'field_data_field_immagine';
  $handler->display->display_options['fields']['field_immagine']['field'] = 'field_immagine';
  $handler->display->display_options['fields']['field_immagine']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_immagine']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_immagine']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_immagine']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_immagine']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_immagine']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_immagine']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_immagine']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_immagine']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_immagine']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_immagine']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_immagine']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_immagine']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_immagine']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_immagine']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_immagine']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_immagine']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_immagine']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_immagine']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_immagine']['type'] = 'file_rendered';
  $handler->display->display_options['fields']['field_immagine']['settings'] = array(
    'file_view_mode' => 'media_link',
  );
  $handler->display->display_options['fields']['field_immagine']['group_rows'] = 1;
  $handler->display->display_options['fields']['field_immagine']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_immagine']['delta_reversed'] = 0;
  $handler->display->display_options['fields']['field_immagine']['delta_first_last'] = 0;
  $handler->display->display_options['fields']['field_immagine']['field_api_classes'] = 0;
  /* Field: Content: Località */
  $handler->display->display_options['fields']['field_getlocations']['id'] = 'field_getlocations';
  $handler->display->display_options['fields']['field_getlocations']['table'] = 'field_data_field_getlocations';
  $handler->display->display_options['fields']['field_getlocations']['field'] = 'field_getlocations';
  $handler->display->display_options['fields']['field_getlocations']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_getlocations']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_getlocations']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_getlocations']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_getlocations']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_getlocations']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_getlocations']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_getlocations']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_getlocations']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_getlocations']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_getlocations']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_getlocations']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_getlocations']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_getlocations']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_getlocations']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_getlocations']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_getlocations']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_getlocations']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_getlocations']['settings'] = array(
    'display_showmap' => 1,
    'display_maplink' => 1,
    'display_mapwidth' => '300px',
    'display_mapheight' => '200px',
    'display_latlong' => 1,
    'display_dms' => 0,
    'display_onemap' => 0,
    'display_name' => 1,
    'display_street' => 1,
    'display_additional' => 1,
    'display_city' => 1,
    'display_province' => 1,
    'display_postal_code' => 1,
    'display_country' => 1,
    'country_full' => 1,
    'nodezoom' => '12',
    'minzoom_map' => '-1',
    'maxzoom_map' => '-1',
    'controltype' => 'small',
    'pancontrol' => 1,
    'mtc' => 'standard',
    'maptype' => 'Map',
    'baselayers' => array(
      'Map' => 1,
      'Satellite' => 1,
      'Hybrid' => 1,
      'Physical' => 1,
    ),
    'behavior' => array(
      'scale' => 0,
      'overview' => 0,
      'overview_opened' => 0,
      'scrollwheel' => 0,
    ),
    'draggable' => 1,
    'map_backgroundcolor' => '',
    'show_maplinks' => 0,
    'show_bubble_on_one_marker' => 0,
    'fullscreen' => 0,
    'streetview_show' => 0,
    'trafficinfo' => 0,
    'trafficinfo_state' => 0,
    'bicycleinfo' => 0,
    'bicycleinfo_state' => 0,
    'transitinfo' => 0,
    'transitinfo_state' => 0,
    'poi_show' => 1,
    'transit_show' => 1,
    'polygons_enable' => 0,
    'polygons_strokecolor' => '#FF0000',
    'polygons_strokeopacity' => '0.8',
    'polygons_strokeweight' => '3',
    'polygons_fillcolor' => '#FF0000',
    'polygons_fillopacity' => '0.35',
    'polygons_clickable' => 0,
    'polygons_message' => '',
    'polygons_coords' => '',
    'rectangles_enable' => 0,
    'rectangles_strokecolor' => '#FF0000',
    'rectangles_strokeopacity' => '0.8',
    'rectangles_strokeweight' => '3',
    'rectangles_fillcolor' => '#FF0000',
    'rectangles_fillopacity' => '0.35',
    'rectangles_clickable' => 0,
    'rectangles_message' => '',
    'rectangles_coords' => '',
    'circles_enable' => 0,
    'circles_strokecolor' => '#FF0000',
    'circles_strokeopacity' => '0.8',
    'circles_strokeweight' => '3',
    'circles_fillcolor' => '#FF0000',
    'circles_fillopacity' => '0.35',
    'circles_radius' => '0',
    'circles_clickable' => 0,
    'circles_message' => '',
    'circles_coords' => '',
    'polylines_enable' => 0,
    'polylines_strokecolor' => '#FF0000',
    'polylines_strokeopacity' => '0.8',
    'polylines_strokeweight' => '3',
    'polylines_clickable' => 0,
    'polylines_message' => '',
    'polylines_coords' => '',
    'markeractiontype' => '1',
    'markeraction' => '0',
  );
  $handler->display->display_options['fields']['field_getlocations']['field_api_classes'] = 0;
  /* Field: Content: E-mail */
  $handler->display->display_options['fields']['field_mail']['id'] = 'field_mail';
  $handler->display->display_options['fields']['field_mail']['table'] = 'field_data_field_mail';
  $handler->display->display_options['fields']['field_mail']['field'] = 'field_mail';
  $handler->display->display_options['fields']['field_mail']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_mail']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_mail']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_mail']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_mail']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_mail']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_mail']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_mail']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_mail']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_mail']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_mail']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_mail']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_mail']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_mail']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_mail']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_mail']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_mail']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_mail']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_mail']['field_api_classes'] = 0;
  /* Field: Content: Telefono */
  $handler->display->display_options['fields']['field_contatti']['id'] = 'field_contatti';
  $handler->display->display_options['fields']['field_contatti']['table'] = 'field_data_field_contatti';
  $handler->display->display_options['fields']['field_contatti']['field'] = 'field_contatti';
  $handler->display->display_options['fields']['field_contatti']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_contatti']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_contatti']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_contatti']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_contatti']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_contatti']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_contatti']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_contatti']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_contatti']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_contatti']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_contatti']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_contatti']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_contatti']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_contatti']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_contatti']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_contatti']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_contatti']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_contatti']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_contatti']['group_rows'] = 1;
  $handler->display->display_options['fields']['field_contatti']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_contatti']['delta_reversed'] = 0;
  $handler->display->display_options['fields']['field_contatti']['delta_first_last'] = 0;
  $handler->display->display_options['fields']['field_contatti']['field_api_classes'] = 0;
  /* Field: Content: Fax */
  $handler->display->display_options['fields']['field_fax']['id'] = 'field_fax';
  $handler->display->display_options['fields']['field_fax']['table'] = 'field_data_field_fax';
  $handler->display->display_options['fields']['field_fax']['field'] = 'field_fax';
  $handler->display->display_options['fields']['field_fax']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_fax']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_fax']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_fax']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_fax']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_fax']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_fax']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_fax']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_fax']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_fax']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_fax']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_fax']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_fax']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_fax']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_fax']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_fax']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_fax']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_fax']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_fax']['group_rows'] = 1;
  $handler->display->display_options['fields']['field_fax']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_fax']['delta_reversed'] = 0;
  $handler->display->display_options['fields']['field_fax']['delta_first_last'] = 0;
  $handler->display->display_options['fields']['field_fax']['field_api_classes'] = 0;
  /* Field: Content: Sito web */
  $handler->display->display_options['fields']['field_web']['id'] = 'field_web';
  $handler->display->display_options['fields']['field_web']['table'] = 'field_data_field_web';
  $handler->display->display_options['fields']['field_web']['field'] = 'field_web';
  $handler->display->display_options['fields']['field_web']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_web']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_web']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_web']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_web']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_web']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_web']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_web']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_web']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_web']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_web']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_web']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_web']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_web']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_web']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_web']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_web']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_web']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_web']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_web']['field_api_classes'] = 0;
  /* Field: Content: Info */
  $handler->display->display_options['fields']['field_info']['id'] = 'field_info';
  $handler->display->display_options['fields']['field_info']['table'] = 'field_data_field_info';
  $handler->display->display_options['fields']['field_info']['field'] = 'field_info';
  $handler->display->display_options['fields']['field_info']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_info']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_info']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_info']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_info']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_info']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_info']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_info']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_info']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_info']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_info']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_info']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_info']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_info']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_info']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_info']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_info']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_info']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_info']['field_api_classes'] = 0;
  /* Field: Content: Accesso */
  $handler->display->display_options['fields']['field_accesso']['id'] = 'field_accesso';
  $handler->display->display_options['fields']['field_accesso']['table'] = 'field_data_field_accesso';
  $handler->display->display_options['fields']['field_accesso']['field'] = 'field_accesso';
  $handler->display->display_options['fields']['field_accesso']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_accesso']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_accesso']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_accesso']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_accesso']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_accesso']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_accesso']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_accesso']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_accesso']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_accesso']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_accesso']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_accesso']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_accesso']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_accesso']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_accesso']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_accesso']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_accesso']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_accesso']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_accesso']['field_api_classes'] = 0;
  /* Field: Content: Altro approdo */
  $handler->display->display_options['fields']['field_altro_approdo']['id'] = 'field_altro_approdo';
  $handler->display->display_options['fields']['field_altro_approdo']['table'] = 'field_data_field_altro_approdo';
  $handler->display->display_options['fields']['field_altro_approdo']['field'] = 'field_altro_approdo';
  $handler->display->display_options['fields']['field_altro_approdo']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_altro_approdo']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_altro_approdo']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_altro_approdo']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_altro_approdo']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_altro_approdo']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_altro_approdo']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_altro_approdo']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_altro_approdo']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_altro_approdo']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_altro_approdo']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_altro_approdo']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_altro_approdo']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_altro_approdo']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_altro_approdo']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_altro_approdo']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_altro_approdo']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_altro_approdo']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_altro_approdo']['field_api_classes'] = 0;
  /* Field: Content: Aree riservate al diporto */
  $handler->display->display_options['fields']['field_aree_dip']['id'] = 'field_aree_dip';
  $handler->display->display_options['fields']['field_aree_dip']['table'] = 'field_data_field_aree_dip';
  $handler->display->display_options['fields']['field_aree_dip']['field'] = 'field_aree_dip';
  $handler->display->display_options['fields']['field_aree_dip']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_aree_dip']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_aree_dip']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_aree_dip']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_aree_dip']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_aree_dip']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_aree_dip']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_aree_dip']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_aree_dip']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_aree_dip']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_aree_dip']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_aree_dip']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_aree_dip']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_aree_dip']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_aree_dip']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_aree_dip']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_aree_dip']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_aree_dip']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_aree_dip']['field_api_classes'] = 0;
  /* Field: Content: Aspirazione acque nere */
  $handler->display->display_options['fields']['field_aspir_acque']['id'] = 'field_aspir_acque';
  $handler->display->display_options['fields']['field_aspir_acque']['table'] = 'field_data_field_aspir_acque';
  $handler->display->display_options['fields']['field_aspir_acque']['field'] = 'field_aspir_acque';
  $handler->display->display_options['fields']['field_aspir_acque']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_aspir_acque']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_aspir_acque']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_aspir_acque']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_aspir_acque']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_aspir_acque']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_aspir_acque']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_aspir_acque']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_aspir_acque']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_aspir_acque']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_aspir_acque']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_aspir_acque']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_aspir_acque']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_aspir_acque']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_aspir_acque']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_aspir_acque']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_aspir_acque']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_aspir_acque']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_aspir_acque']['field_api_classes'] = 0;
  /* Field: Content: Autorità marittima/portuale */
  $handler->display->display_options['fields']['field_autority']['id'] = 'field_autority';
  $handler->display->display_options['fields']['field_autority']['table'] = 'field_data_field_autority';
  $handler->display->display_options['fields']['field_autority']['field'] = 'field_autority';
  $handler->display->display_options['fields']['field_autority']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_autority']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_autority']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_autority']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_autority']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_autority']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_autority']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_autority']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_autority']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_autority']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_autority']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_autority']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_autority']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_autority']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_autority']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_autority']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_autority']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_autority']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_autority']['field_api_classes'] = 0;
  /* Field: Content: Canale Radio (VHF-CH) */
  $handler->display->display_options['fields']['field_canale_radio']['id'] = 'field_canale_radio';
  $handler->display->display_options['fields']['field_canale_radio']['table'] = 'field_data_field_canale_radio';
  $handler->display->display_options['fields']['field_canale_radio']['field'] = 'field_canale_radio';
  $handler->display->display_options['fields']['field_canale_radio']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_canale_radio']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_canale_radio']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_canale_radio']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_canale_radio']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_canale_radio']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_canale_radio']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_canale_radio']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_canale_radio']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_canale_radio']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_canale_radio']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_canale_radio']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_canale_radio']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_canale_radio']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_canale_radio']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_canale_radio']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_canale_radio']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_canale_radio']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_canale_radio']['field_api_classes'] = 0;
  /* Field: Content: Certificazione ambientale */
  $handler->display->display_options['fields']['field_cert_amb']['id'] = 'field_cert_amb';
  $handler->display->display_options['fields']['field_cert_amb']['table'] = 'field_data_field_cert_amb';
  $handler->display->display_options['fields']['field_cert_amb']['field'] = 'field_cert_amb';
  $handler->display->display_options['fields']['field_cert_amb']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_cert_amb']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_cert_amb']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_cert_amb']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_cert_amb']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_cert_amb']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_cert_amb']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_cert_amb']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_cert_amb']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_cert_amb']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_cert_amb']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_cert_amb']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_cert_amb']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_cert_amb']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_cert_amb']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_cert_amb']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_cert_amb']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_cert_amb']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_cert_amb']['field_api_classes'] = 0;
  /* Field: Content: Descrizione accessibilità */
  $handler->display->display_options['fields']['field_descr_disabili']['id'] = 'field_descr_disabili';
  $handler->display->display_options['fields']['field_descr_disabili']['table'] = 'field_data_field_descr_disabili';
  $handler->display->display_options['fields']['field_descr_disabili']['field'] = 'field_descr_disabili';
  $handler->display->display_options['fields']['field_descr_disabili']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_descr_disabili']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_descr_disabili']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_descr_disabili']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_descr_disabili']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_descr_disabili']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_descr_disabili']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_descr_disabili']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_descr_disabili']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_descr_disabili']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_descr_disabili']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_descr_disabili']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_descr_disabili']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_descr_disabili']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_descr_disabili']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_descr_disabili']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_descr_disabili']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_descr_disabili']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_descr_disabili']['field_api_classes'] = 0;
  /* Field: Content: Descrizione impianto ossigenazione */
  $handler->display->display_options['fields']['field_imp_ossigen']['id'] = 'field_imp_ossigen';
  $handler->display->display_options['fields']['field_imp_ossigen']['table'] = 'field_data_field_imp_ossigen';
  $handler->display->display_options['fields']['field_imp_ossigen']['field'] = 'field_imp_ossigen';
  $handler->display->display_options['fields']['field_imp_ossigen']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_imp_ossigen']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_imp_ossigen']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_imp_ossigen']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_imp_ossigen']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_imp_ossigen']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_imp_ossigen']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_imp_ossigen']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_imp_ossigen']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_imp_ossigen']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_imp_ossigen']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_imp_ossigen']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_imp_ossigen']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_imp_ossigen']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_imp_ossigen']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_imp_ossigen']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_imp_ossigen']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_imp_ossigen']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_imp_ossigen']['field_api_classes'] = 0;
  /* Field: Content: Descrizione raccolta */
  $handler->display->display_options['fields']['field_racc_rifiuti_spec']['id'] = 'field_racc_rifiuti_spec';
  $handler->display->display_options['fields']['field_racc_rifiuti_spec']['table'] = 'field_data_field_racc_rifiuti_spec';
  $handler->display->display_options['fields']['field_racc_rifiuti_spec']['field'] = 'field_racc_rifiuti_spec';
  $handler->display->display_options['fields']['field_racc_rifiuti_spec']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_racc_rifiuti_spec']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_racc_rifiuti_spec']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_racc_rifiuti_spec']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_racc_rifiuti_spec']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_racc_rifiuti_spec']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_racc_rifiuti_spec']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_racc_rifiuti_spec']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_racc_rifiuti_spec']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_racc_rifiuti_spec']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_racc_rifiuti_spec']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_racc_rifiuti_spec']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_racc_rifiuti_spec']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_racc_rifiuti_spec']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_racc_rifiuti_spec']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_racc_rifiuti_spec']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_racc_rifiuti_spec']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_racc_rifiuti_spec']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_racc_rifiuti_spec']['field_api_classes'] = 0;
  /* Field: Content: Descrizione riutilizzo acque depurate */
  $handler->display->display_options['fields']['field_riuso_acque']['id'] = 'field_riuso_acque';
  $handler->display->display_options['fields']['field_riuso_acque']['table'] = 'field_data_field_riuso_acque';
  $handler->display->display_options['fields']['field_riuso_acque']['field'] = 'field_riuso_acque';
  $handler->display->display_options['fields']['field_riuso_acque']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_riuso_acque']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_riuso_acque']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_riuso_acque']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_riuso_acque']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_riuso_acque']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_riuso_acque']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_riuso_acque']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_riuso_acque']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_riuso_acque']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_riuso_acque']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_riuso_acque']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_riuso_acque']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_riuso_acque']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_riuso_acque']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_riuso_acque']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_riuso_acque']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_riuso_acque']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_riuso_acque']['field_api_classes'] = 0;
  /* Field: Content: Descrizione trattamento */
  $handler->display->display_options['fields']['field_tratt_acque_piov']['id'] = 'field_tratt_acque_piov';
  $handler->display->display_options['fields']['field_tratt_acque_piov']['table'] = 'field_data_field_tratt_acque_piov';
  $handler->display->display_options['fields']['field_tratt_acque_piov']['field'] = 'field_tratt_acque_piov';
  $handler->display->display_options['fields']['field_tratt_acque_piov']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_tratt_acque_piov']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_tratt_acque_piov']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_tratt_acque_piov']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_tratt_acque_piov']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_tratt_acque_piov']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_tratt_acque_piov']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_tratt_acque_piov']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_tratt_acque_piov']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_tratt_acque_piov']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_tratt_acque_piov']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_tratt_acque_piov']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_tratt_acque_piov']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_tratt_acque_piov']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_tratt_acque_piov']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_tratt_acque_piov']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_tratt_acque_piov']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_tratt_acque_piov']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_tratt_acque_piov']['field_api_classes'] = 0;
  /* Field: Content: Impianto di ossigenazione */
  $handler->display->display_options['fields']['field_imp_oss']['id'] = 'field_imp_oss';
  $handler->display->display_options['fields']['field_imp_oss']['table'] = 'field_data_field_imp_oss';
  $handler->display->display_options['fields']['field_imp_oss']['field'] = 'field_imp_oss';
  $handler->display->display_options['fields']['field_imp_oss']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_imp_oss']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_imp_oss']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_imp_oss']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_imp_oss']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_imp_oss']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_imp_oss']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_imp_oss']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_imp_oss']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_imp_oss']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_imp_oss']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_imp_oss']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_imp_oss']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_imp_oss']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_imp_oss']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_imp_oss']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_imp_oss']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_imp_oss']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_imp_oss']['field_api_classes'] = 0;
  /* Field: Content: Isola ecologica */
  $handler->display->display_options['fields']['field_isola_eco']['id'] = 'field_isola_eco';
  $handler->display->display_options['fields']['field_isola_eco']['table'] = 'field_data_field_isola_eco';
  $handler->display->display_options['fields']['field_isola_eco']['field'] = 'field_isola_eco';
  $handler->display->display_options['fields']['field_isola_eco']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_isola_eco']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_isola_eco']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_isola_eco']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_isola_eco']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_isola_eco']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_isola_eco']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_isola_eco']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_isola_eco']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_isola_eco']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_isola_eco']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_isola_eco']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_isola_eco']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_isola_eco']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_isola_eco']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_isola_eco']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_isola_eco']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_isola_eco']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_isola_eco']['field_api_classes'] = 0;
  /* Field: Content: Lunghezza max. */
  $handler->display->display_options['fields']['field_lunghezza']['id'] = 'field_lunghezza';
  $handler->display->display_options['fields']['field_lunghezza']['table'] = 'field_data_field_lunghezza';
  $handler->display->display_options['fields']['field_lunghezza']['field'] = 'field_lunghezza';
  $handler->display->display_options['fields']['field_lunghezza']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_lunghezza']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_lunghezza']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_lunghezza']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_lunghezza']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_lunghezza']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_lunghezza']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_lunghezza']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_lunghezza']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_lunghezza']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_lunghezza']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_lunghezza']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_lunghezza']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_lunghezza']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_lunghezza']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_lunghezza']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_lunghezza']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_lunghezza']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_lunghezza']['settings'] = array(
    'thousand_separator' => ' ',
    'decimal_separator' => '.',
    'scale' => '2',
    'prefix_suffix' => 1,
  );
  $handler->display->display_options['fields']['field_lunghezza']['field_api_classes'] = 0;
  /* Field: Content: Lunghezza max. */
  $handler->display->display_options['fields']['field_lunghezza_1']['id'] = 'field_lunghezza_1';
  $handler->display->display_options['fields']['field_lunghezza_1']['table'] = 'field_data_field_lunghezza';
  $handler->display->display_options['fields']['field_lunghezza_1']['field'] = 'field_lunghezza';
  $handler->display->display_options['fields']['field_lunghezza_1']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_lunghezza_1']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_lunghezza_1']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_lunghezza_1']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_lunghezza_1']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_lunghezza_1']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_lunghezza_1']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_lunghezza_1']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_lunghezza_1']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_lunghezza_1']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_lunghezza_1']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_lunghezza_1']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_lunghezza_1']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_lunghezza_1']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_lunghezza_1']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_lunghezza_1']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_lunghezza_1']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_lunghezza_1']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_lunghezza_1']['settings'] = array(
    'thousand_separator' => ' ',
    'decimal_separator' => '.',
    'scale' => '2',
    'prefix_suffix' => 1,
  );
  $handler->display->display_options['fields']['field_lunghezza_1']['field_api_classes'] = 0;
  /* Field: Content: Meteo */
  $handler->display->display_options['fields']['field_meteo_porto']['id'] = 'field_meteo_porto';
  $handler->display->display_options['fields']['field_meteo_porto']['table'] = 'field_data_field_meteo_porto';
  $handler->display->display_options['fields']['field_meteo_porto']['field'] = 'field_meteo_porto';
  $handler->display->display_options['fields']['field_meteo_porto']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_meteo_porto']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_meteo_porto']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_meteo_porto']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_meteo_porto']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_meteo_porto']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_meteo_porto']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_meteo_porto']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_meteo_porto']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_meteo_porto']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_meteo_porto']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_meteo_porto']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_meteo_porto']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_meteo_porto']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_meteo_porto']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_meteo_porto']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_meteo_porto']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_meteo_porto']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_meteo_porto']['field_api_classes'] = 0;
  /* Field: Content: Orario di accesso  */
  $handler->display->display_options['fields']['field_orario']['id'] = 'field_orario';
  $handler->display->display_options['fields']['field_orario']['table'] = 'field_data_field_orario';
  $handler->display->display_options['fields']['field_orario']['field'] = 'field_orario';
  $handler->display->display_options['fields']['field_orario']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_orario']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_orario']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_orario']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_orario']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_orario']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_orario']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_orario']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_orario']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_orario']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_orario']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_orario']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_orario']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_orario']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_orario']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_orario']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_orario']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_orario']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_orario']['settings'] = array(
    'format_type' => 'long',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  $handler->display->display_options['fields']['field_orario']['field_api_classes'] = 0;
  /* Field: Content: Pannelli fotovoltaici */
  $handler->display->display_options['fields']['field_pann_fotov']['id'] = 'field_pann_fotov';
  $handler->display->display_options['fields']['field_pann_fotov']['table'] = 'field_data_field_pann_fotov';
  $handler->display->display_options['fields']['field_pann_fotov']['field'] = 'field_pann_fotov';
  $handler->display->display_options['fields']['field_pann_fotov']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_pann_fotov']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_pann_fotov']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_pann_fotov']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_pann_fotov']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_pann_fotov']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_pann_fotov']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_pann_fotov']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_pann_fotov']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_pann_fotov']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_pann_fotov']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_pann_fotov']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_pann_fotov']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_pann_fotov']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_pann_fotov']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_pann_fotov']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_pann_fotov']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_pann_fotov']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_pann_fotov']['field_api_classes'] = 0;
  /* Field: Content: Pannelli fotovoltaici per energia elettrica */
  $handler->display->display_options['fields']['field_pann_fotovolt']['id'] = 'field_pann_fotovolt';
  $handler->display->display_options['fields']['field_pann_fotovolt']['table'] = 'field_data_field_pann_fotovolt';
  $handler->display->display_options['fields']['field_pann_fotovolt']['field'] = 'field_pann_fotovolt';
  $handler->display->display_options['fields']['field_pann_fotovolt']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_pann_fotovolt']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_pann_fotovolt']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_pann_fotovolt']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_pann_fotovolt']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_pann_fotovolt']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_pann_fotovolt']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_pann_fotovolt']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_pann_fotovolt']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_pann_fotovolt']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_pann_fotovolt']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_pann_fotovolt']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_pann_fotovolt']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_pann_fotovolt']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_pann_fotovolt']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_pann_fotovolt']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_pann_fotovolt']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_pann_fotovolt']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_pann_fotovolt']['field_api_classes'] = 0;
  /* Field: Content: Pannelli solari */
  $handler->display->display_options['fields']['field_pann_sol']['id'] = 'field_pann_sol';
  $handler->display->display_options['fields']['field_pann_sol']['table'] = 'field_data_field_pann_sol';
  $handler->display->display_options['fields']['field_pann_sol']['field'] = 'field_pann_sol';
  $handler->display->display_options['fields']['field_pann_sol']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_pann_sol']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_pann_sol']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_pann_sol']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_pann_sol']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_pann_sol']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_pann_sol']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_pann_sol']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_pann_sol']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_pann_sol']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_pann_sol']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_pann_sol']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_pann_sol']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_pann_sol']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_pann_sol']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_pann_sol']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_pann_sol']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_pann_sol']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_pann_sol']['field_api_classes'] = 0;
  /* Field: Content: Pannelli solari riscaldamento acque */
  $handler->display->display_options['fields']['field_pann_solari']['id'] = 'field_pann_solari';
  $handler->display->display_options['fields']['field_pann_solari']['table'] = 'field_data_field_pann_solari';
  $handler->display->display_options['fields']['field_pann_solari']['field'] = 'field_pann_solari';
  $handler->display->display_options['fields']['field_pann_solari']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_pann_solari']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_pann_solari']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_pann_solari']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_pann_solari']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_pann_solari']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_pann_solari']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_pann_solari']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_pann_solari']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_pann_solari']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_pann_solari']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_pann_solari']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_pann_solari']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_pann_solari']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_pann_solari']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_pann_solari']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_pann_solari']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_pann_solari']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_pann_solari']['field_api_classes'] = 0;
  /* Field: Content: Planimetria */
  $handler->display->display_options['fields']['field_planimetria']['id'] = 'field_planimetria';
  $handler->display->display_options['fields']['field_planimetria']['table'] = 'field_data_field_planimetria';
  $handler->display->display_options['fields']['field_planimetria']['field'] = 'field_planimetria';
  $handler->display->display_options['fields']['field_planimetria']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_planimetria']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_planimetria']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_planimetria']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_planimetria']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_planimetria']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_planimetria']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_planimetria']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_planimetria']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_planimetria']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_planimetria']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_planimetria']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_planimetria']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_planimetria']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_planimetria']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_planimetria']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_planimetria']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_planimetria']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_planimetria']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_planimetria']['type'] = 'file_rendered';
  $handler->display->display_options['fields']['field_planimetria']['settings'] = array(
    'file_view_mode' => 'media_link',
  );
  $handler->display->display_options['fields']['field_planimetria']['field_api_classes'] = 0;
  /* Field: Content: Posti barca in transito */
  $handler->display->display_options['fields']['field_pb_trans']['id'] = 'field_pb_trans';
  $handler->display->display_options['fields']['field_pb_trans']['table'] = 'field_data_field_pb_trans';
  $handler->display->display_options['fields']['field_pb_trans']['field'] = 'field_pb_trans';
  $handler->display->display_options['fields']['field_pb_trans']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_pb_trans']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_pb_trans']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_pb_trans']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_pb_trans']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_pb_trans']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_pb_trans']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_pb_trans']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_pb_trans']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_pb_trans']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_pb_trans']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_pb_trans']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_pb_trans']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_pb_trans']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_pb_trans']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_pb_trans']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_pb_trans']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_pb_trans']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_pb_trans']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
  $handler->display->display_options['fields']['field_pb_trans']['field_api_classes'] = 0;
  /* Field: Content: Posti barca in transito */
  $handler->display->display_options['fields']['field_pb_trans_1']['id'] = 'field_pb_trans_1';
  $handler->display->display_options['fields']['field_pb_trans_1']['table'] = 'field_data_field_pb_trans';
  $handler->display->display_options['fields']['field_pb_trans_1']['field'] = 'field_pb_trans';
  $handler->display->display_options['fields']['field_pb_trans_1']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_pb_trans_1']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_pb_trans_1']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_pb_trans_1']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_pb_trans_1']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_pb_trans_1']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_pb_trans_1']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_pb_trans_1']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_pb_trans_1']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_pb_trans_1']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_pb_trans_1']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_pb_trans_1']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_pb_trans_1']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_pb_trans_1']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_pb_trans_1']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_pb_trans_1']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_pb_trans_1']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_pb_trans_1']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_pb_trans_1']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
  $handler->display->display_options['fields']['field_pb_trans_1']['field_api_classes'] = 0;
  /* Field: Content: Posti barca nautica sociale */
  $handler->display->display_options['fields']['field_posti_naut_soc']['id'] = 'field_posti_naut_soc';
  $handler->display->display_options['fields']['field_posti_naut_soc']['table'] = 'field_data_field_posti_naut_soc';
  $handler->display->display_options['fields']['field_posti_naut_soc']['field'] = 'field_posti_naut_soc';
  $handler->display->display_options['fields']['field_posti_naut_soc']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_posti_naut_soc']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_posti_naut_soc']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_posti_naut_soc']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_posti_naut_soc']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_posti_naut_soc']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_posti_naut_soc']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_posti_naut_soc']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_posti_naut_soc']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_posti_naut_soc']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_posti_naut_soc']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_posti_naut_soc']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_posti_naut_soc']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_posti_naut_soc']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_posti_naut_soc']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_posti_naut_soc']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_posti_naut_soc']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_posti_naut_soc']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_posti_naut_soc']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
  $handler->display->display_options['fields']['field_posti_naut_soc']['field_api_classes'] = 0;
  /* Field: Content: Posti barca totali */
  $handler->display->display_options['fields']['field_pbt']['id'] = 'field_pbt';
  $handler->display->display_options['fields']['field_pbt']['table'] = 'field_data_field_pbt';
  $handler->display->display_options['fields']['field_pbt']['field'] = 'field_pbt';
  $handler->display->display_options['fields']['field_pbt']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_pbt']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_pbt']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_pbt']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_pbt']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_pbt']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_pbt']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_pbt']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_pbt']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_pbt']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_pbt']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_pbt']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_pbt']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_pbt']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_pbt']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_pbt']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_pbt']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_pbt']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_pbt']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
  $handler->display->display_options['fields']['field_pbt']['field_api_classes'] = 0;
  /* Field: Content: Posti barca totali */
  $handler->display->display_options['fields']['field_pbt_1']['id'] = 'field_pbt_1';
  $handler->display->display_options['fields']['field_pbt_1']['table'] = 'field_data_field_pbt';
  $handler->display->display_options['fields']['field_pbt_1']['field'] = 'field_pbt';
  $handler->display->display_options['fields']['field_pbt_1']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_pbt_1']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_pbt_1']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_pbt_1']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_pbt_1']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_pbt_1']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_pbt_1']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_pbt_1']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_pbt_1']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_pbt_1']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_pbt_1']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_pbt_1']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_pbt_1']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_pbt_1']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_pbt_1']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_pbt_1']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_pbt_1']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_pbt_1']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_pbt_1']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
  $handler->display->display_options['fields']['field_pbt_1']['field_api_classes'] = 0;
  /* Field: Content: Profondità massima */
  $handler->display->display_options['fields']['field_prof_max']['id'] = 'field_prof_max';
  $handler->display->display_options['fields']['field_prof_max']['table'] = 'field_data_field_prof_max';
  $handler->display->display_options['fields']['field_prof_max']['field'] = 'field_prof_max';
  $handler->display->display_options['fields']['field_prof_max']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_prof_max']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_prof_max']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_prof_max']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_prof_max']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_prof_max']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_prof_max']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_prof_max']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_prof_max']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_prof_max']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_prof_max']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_prof_max']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_prof_max']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_prof_max']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_prof_max']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_prof_max']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_prof_max']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_prof_max']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_prof_max']['settings'] = array(
    'thousand_separator' => ' ',
    'decimal_separator' => '.',
    'scale' => '2',
    'prefix_suffix' => 1,
  );
  $handler->display->display_options['fields']['field_prof_max']['field_api_classes'] = 0;
  /* Field: Content: Profondità massima */
  $handler->display->display_options['fields']['field_prof_max_1']['id'] = 'field_prof_max_1';
  $handler->display->display_options['fields']['field_prof_max_1']['table'] = 'field_data_field_prof_max';
  $handler->display->display_options['fields']['field_prof_max_1']['field'] = 'field_prof_max';
  $handler->display->display_options['fields']['field_prof_max_1']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_prof_max_1']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_prof_max_1']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_prof_max_1']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_prof_max_1']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_prof_max_1']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_prof_max_1']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_prof_max_1']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_prof_max_1']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_prof_max_1']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_prof_max_1']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_prof_max_1']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_prof_max_1']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_prof_max_1']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_prof_max_1']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_prof_max_1']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_prof_max_1']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_prof_max_1']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_prof_max_1']['settings'] = array(
    'thousand_separator' => ' ',
    'decimal_separator' => '.',
    'scale' => '2',
    'prefix_suffix' => 1,
  );
  $handler->display->display_options['fields']['field_prof_max_1']['field_api_classes'] = 0;
  /* Field: Content: Profondità minima */
  $handler->display->display_options['fields']['field_prof_min']['id'] = 'field_prof_min';
  $handler->display->display_options['fields']['field_prof_min']['table'] = 'field_data_field_prof_min';
  $handler->display->display_options['fields']['field_prof_min']['field'] = 'field_prof_min';
  $handler->display->display_options['fields']['field_prof_min']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_prof_min']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_prof_min']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_prof_min']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_prof_min']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_prof_min']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_prof_min']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_prof_min']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_prof_min']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_prof_min']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_prof_min']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_prof_min']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_prof_min']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_prof_min']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_prof_min']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_prof_min']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_prof_min']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_prof_min']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_prof_min']['settings'] = array(
    'thousand_separator' => ' ',
    'decimal_separator' => '.',
    'scale' => '2',
    'prefix_suffix' => 1,
  );
  $handler->display->display_options['fields']['field_prof_min']['field_api_classes'] = 0;
  /* Field: Content: Profondità minima */
  $handler->display->display_options['fields']['field_prof_min_1']['id'] = 'field_prof_min_1';
  $handler->display->display_options['fields']['field_prof_min_1']['table'] = 'field_data_field_prof_min';
  $handler->display->display_options['fields']['field_prof_min_1']['field'] = 'field_prof_min';
  $handler->display->display_options['fields']['field_prof_min_1']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_prof_min_1']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_prof_min_1']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_prof_min_1']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_prof_min_1']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_prof_min_1']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_prof_min_1']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_prof_min_1']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_prof_min_1']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_prof_min_1']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_prof_min_1']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_prof_min_1']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_prof_min_1']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_prof_min_1']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_prof_min_1']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_prof_min_1']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_prof_min_1']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_prof_min_1']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_prof_min_1']['settings'] = array(
    'thousand_separator' => ' ',
    'decimal_separator' => '.',
    'scale' => '2',
    'prefix_suffix' => 1,
  );
  $handler->display->display_options['fields']['field_prof_min_1']['field_api_classes'] = 0;
  /* Field: Content: Raccolta oli esausti delle imbarcazioni */
  $handler->display->display_options['fields']['field_oli']['id'] = 'field_oli';
  $handler->display->display_options['fields']['field_oli']['table'] = 'field_data_field_oli';
  $handler->display->display_options['fields']['field_oli']['field'] = 'field_oli';
  $handler->display->display_options['fields']['field_oli']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_oli']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_oli']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_oli']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_oli']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_oli']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_oli']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_oli']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_oli']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_oli']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_oli']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_oli']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_oli']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_oli']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_oli']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_oli']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_oli']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_oli']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_oli']['field_api_classes'] = 0;
  /* Field: Content: Raccolta rifiuti speciali */
  $handler->display->display_options['fields']['field_racc_rifiuti']['id'] = 'field_racc_rifiuti';
  $handler->display->display_options['fields']['field_racc_rifiuti']['table'] = 'field_data_field_racc_rifiuti';
  $handler->display->display_options['fields']['field_racc_rifiuti']['field'] = 'field_racc_rifiuti';
  $handler->display->display_options['fields']['field_racc_rifiuti']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_racc_rifiuti']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_racc_rifiuti']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_racc_rifiuti']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_racc_rifiuti']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_racc_rifiuti']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_racc_rifiuti']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_racc_rifiuti']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_racc_rifiuti']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_racc_rifiuti']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_racc_rifiuti']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_racc_rifiuti']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_racc_rifiuti']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_racc_rifiuti']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_racc_rifiuti']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_racc_rifiuti']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_racc_rifiuti']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_racc_rifiuti']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_racc_rifiuti']['field_api_classes'] = 0;
  /* Field: Content: Responsabile */
  $handler->display->display_options['fields']['field_responsabile']['id'] = 'field_responsabile';
  $handler->display->display_options['fields']['field_responsabile']['table'] = 'field_data_field_responsabile';
  $handler->display->display_options['fields']['field_responsabile']['field'] = 'field_responsabile';
  $handler->display->display_options['fields']['field_responsabile']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_responsabile']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_responsabile']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_responsabile']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_responsabile']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_responsabile']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_responsabile']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_responsabile']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_responsabile']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_responsabile']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_responsabile']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_responsabile']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_responsabile']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_responsabile']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_responsabile']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_responsabile']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_responsabile']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_responsabile']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_responsabile']['group_rows'] = 1;
  $handler->display->display_options['fields']['field_responsabile']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_responsabile']['delta_reversed'] = 0;
  $handler->display->display_options['fields']['field_responsabile']['delta_first_last'] = 0;
  $handler->display->display_options['fields']['field_responsabile']['field_api_classes'] = 0;
  /* Field: Content: Riutilizzo acque depurate */
  $handler->display->display_options['fields']['field_dot_ambiente']['id'] = 'field_dot_ambiente';
  $handler->display->display_options['fields']['field_dot_ambiente']['table'] = 'field_data_field_dot_ambiente';
  $handler->display->display_options['fields']['field_dot_ambiente']['field'] = 'field_dot_ambiente';
  $handler->display->display_options['fields']['field_dot_ambiente']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_dot_ambiente']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_dot_ambiente']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_dot_ambiente']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_dot_ambiente']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_dot_ambiente']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_dot_ambiente']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_dot_ambiente']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_dot_ambiente']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_dot_ambiente']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_dot_ambiente']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_dot_ambiente']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_dot_ambiente']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_dot_ambiente']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_dot_ambiente']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_dot_ambiente']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_dot_ambiente']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_dot_ambiente']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_dot_ambiente']['field_api_classes'] = 0;
  /* Field: Content: Servizi */
  $handler->display->display_options['fields']['field_servizi']['id'] = 'field_servizi';
  $handler->display->display_options['fields']['field_servizi']['table'] = 'field_data_field_servizi';
  $handler->display->display_options['fields']['field_servizi']['field'] = 'field_servizi';
  $handler->display->display_options['fields']['field_servizi']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_servizi']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_servizi']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_servizi']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_servizi']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_servizi']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_servizi']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_servizi']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_servizi']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_servizi']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_servizi']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_servizi']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_servizi']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_servizi']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_servizi']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_servizi']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_servizi']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_servizi']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_servizi']['group_rows'] = 1;
  $handler->display->display_options['fields']['field_servizi']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_servizi']['delta_reversed'] = 0;
  $handler->display->display_options['fields']['field_servizi']['delta_first_last'] = 0;
  $handler->display->display_options['fields']['field_servizi']['field_api_classes'] = 0;
  /* Field: Content: Stagionalità del prodotto */
  $handler->display->display_options['fields']['field_stagionale']['id'] = 'field_stagionale';
  $handler->display->display_options['fields']['field_stagionale']['table'] = 'field_data_field_stagionale';
  $handler->display->display_options['fields']['field_stagionale']['field'] = 'field_stagionale';
  $handler->display->display_options['fields']['field_stagionale']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_stagionale']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_stagionale']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_stagionale']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_stagionale']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_stagionale']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_stagionale']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_stagionale']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_stagionale']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_stagionale']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_stagionale']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_stagionale']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_stagionale']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_stagionale']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_stagionale']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_stagionale']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_stagionale']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_stagionale']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_stagionale']['field_api_classes'] = 0;
  /* Field: Content: Tecniche di produzione */
  $handler->display->display_options['fields']['field_tecniche']['id'] = 'field_tecniche';
  $handler->display->display_options['fields']['field_tecniche']['table'] = 'field_data_field_tecniche';
  $handler->display->display_options['fields']['field_tecniche']['field'] = 'field_tecniche';
  $handler->display->display_options['fields']['field_tecniche']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_tecniche']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_tecniche']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_tecniche']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_tecniche']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_tecniche']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_tecniche']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_tecniche']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_tecniche']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_tecniche']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_tecniche']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_tecniche']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_tecniche']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_tecniche']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_tecniche']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_tecniche']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_tecniche']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_tecniche']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_tecniche']['field_api_classes'] = 0;
  /* Field: Content: Trattamento acque piovane */
  $handler->display->display_options['fields']['field_tratt_acque']['id'] = 'field_tratt_acque';
  $handler->display->display_options['fields']['field_tratt_acque']['table'] = 'field_data_field_tratt_acque';
  $handler->display->display_options['fields']['field_tratt_acque']['field'] = 'field_tratt_acque';
  $handler->display->display_options['fields']['field_tratt_acque']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_tratt_acque']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_tratt_acque']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_tratt_acque']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_tratt_acque']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_tratt_acque']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_tratt_acque']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_tratt_acque']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_tratt_acque']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_tratt_acque']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_tratt_acque']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_tratt_acque']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_tratt_acque']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_tratt_acque']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_tratt_acque']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_tratt_acque']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_tratt_acque']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_tratt_acque']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_tratt_acque']['field_api_classes'] = 0;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Nid */
  $handler->display->display_options['sorts']['nid']['id'] = 'nid';
  $handler->display->display_options['sorts']['nid']['table'] = 'node';
  $handler->display->display_options['sorts']['nid']['field'] = 'nid';
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'poi' => 'poi',
    'scheda_prodotto' => 'scheda_prodotto',
    'scheda_gestore' => 'scheda_gestore',
    'scheda_operatori_economici' => 'scheda_operatori_economici',
    'scheda_porto' => 'scheda_porto',
    'scheda_territorio' => 'scheda_territorio',
  );
  /* Filter criterion: Content: Author uid */
  $handler->display->display_options['filters']['uid']['id'] = 'uid';
  $handler->display->display_options['filters']['uid']['table'] = 'node';
  $handler->display->display_options['filters']['uid']['field'] = 'uid';
  $handler->display->display_options['filters']['uid']['value'] = array(
    0 => '2',
    1 => '3',
  );
  $handler->display->display_options['filters']['uid']['expose']['operator_id'] = 'uid_op';
  $handler->display->display_options['filters']['uid']['expose']['label'] = 'Author uid';
  $handler->display->display_options['filters']['uid']['expose']['use_operator'] = FALSE;
  $handler->display->display_options['filters']['uid']['expose']['operator'] = 'uid_op';
  $handler->display->display_options['filters']['uid']['expose']['identifier'] = 'uid';
  $handler->display->display_options['filters']['uid']['expose']['required'] = FALSE;
  $handler->display->display_options['filters']['uid']['expose']['remember'] = FALSE;
  $handler->display->display_options['filters']['uid']['expose']['multiple'] = FALSE;
  $handler->display->display_options['path'] = 'admin/MC_dump_contents';
  $translatables['dashboard_plus'] = array(
    t('Master'),
    t('dashboard_plus'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('Content'),
    t('Title'),
    t('Nid'),
    t('Updated date'),
    t('Type'),
    t('Author uid'),
    t('Page'),
    t('Edit link'),
    t('Language'),
    t('Post date'),
    t('Node UUID'),
    t('Immagine (field_immagine:width)'),
    t('Dashboard media'),
    t('Data export'),
    t('author'),
    t('Published'),
    t('Name'),
    t('Created'),
    t('Geo'),
    t('Località (field_location)'),
    t('Località (field_getlocations)'),
    t('Medio campidano'),
    t('Porto di riferimento'),
    t('Territorio di riferimento'),
    t('Tipo approdo'),
    t('Settore economico'),
    t('Body'),
    t('Immagine'),
    t('Località'),
    t('E-mail'),
    t('Telefono'),
    t('Fax'),
    t('Sito web'),
    t('Info'),
    t('Accesso'),
    t('Altro approdo'),
    t('Aree riservate al diporto'),
    t('Aspirazione acque nere'),
    t('Autorità marittima/portuale'),
    t('Canale Radio (VHF-CH)'),
    t('Certificazione ambientale'),
    t('Descrizione accessibilità'),
    t('Descrizione impianto ossigenazione'),
    t('Descrizione raccolta'),
    t('Descrizione riutilizzo acque depurate'),
    t('Descrizione trattamento'),
    t('Impianto di ossigenazione'),
    t('Isola ecologica'),
    t('Lunghezza max.'),
    t('Meteo'),
    t('Orario di accesso '),
    t('Pannelli fotovoltaici'),
    t('Pannelli fotovoltaici per energia elettrica'),
    t('Pannelli solari'),
    t('Pannelli solari riscaldamento acque'),
    t('Planimetria'),
    t('Posti barca in transito'),
    t('Posti barca nautica sociale'),
    t('Posti barca totali'),
    t('Profondità massima'),
    t('Profondità minima'),
    t('Raccolta oli esausti delle imbarcazioni'),
    t('Raccolta rifiuti speciali'),
    t('Responsabile'),
    t('Riutilizzo acque depurate'),
    t('Servizi'),
    t('Stagionalità del prodotto'),
    t('Tecniche di produzione'),
    t('Trattamento acque piovane'),
  );
  $export['dashboard_plus'] = $view;

  $view = new view;
  $view->name = 'export_porti';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Export porti';
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
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'field_geospatial' => 'field_geospatial',
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
    'field_geospatial' => array(
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
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 0;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 0;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['link_to_node'] = 1;
  /* Field: Content: Geo - Spatial */
  $handler->display->display_options['fields']['field_geospatial']['id'] = 'field_geospatial';
  $handler->display->display_options['fields']['field_geospatial']['table'] = 'field_data_field_geospatial';
  $handler->display->display_options['fields']['field_geospatial']['field'] = 'field_geospatial';
  $handler->display->display_options['fields']['field_geospatial']['label'] = 'Localizzazione';
  $handler->display->display_options['fields']['field_geospatial']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_geospatial']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_geospatial']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_geospatial']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_geospatial']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_geospatial']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_geospatial']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_geospatial']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_geospatial']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_geospatial']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_geospatial']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_geospatial']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_geospatial']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_geospatial']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_geospatial']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_geospatial']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_geospatial']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_geospatial']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_geospatial']['field_api_classes'] = 0;
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
    'scheda_porto' => 'scheda_porto',
  );
  $translatables['export_porti'] = array(
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
    t('Localizzazione'),
  );
  $export['export_porti'] = $view;

  $view = new view;
  $view->name = 'mappa_porti';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Mappa porti';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Mappa porti';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['style_plugin'] = 'openlayers_map';
  $handler->display->display_options['style_options']['map'] = 'clone_of_tpe_ports';
  /* Relationship: Content: Porto di riferimento (field_ref_porto) - reverse */
  $handler->display->display_options['relationships']['reverse_field_ref_porto_node']['id'] = 'reverse_field_ref_porto_node';
  $handler->display->display_options['relationships']['reverse_field_ref_porto_node']['table'] = 'node';
  $handler->display->display_options['relationships']['reverse_field_ref_porto_node']['field'] = 'reverse_field_ref_porto_node';
  $handler->display->display_options['relationships']['reverse_field_ref_porto_node']['required'] = 0;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
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
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nid']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['nid']['hide_empty'] = 0;
  $handler->display->display_options['fields']['nid']['empty_zero'] = 0;
  $handler->display->display_options['fields']['nid']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['nid']['link_to_node'] = 0;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 1;
  $handler->display->display_options['fields']['title']['alter']['path'] = 'api/node/[nid]';
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
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['title']['link_to_node'] = 0;
  /* Field: Content: Geo - Spatial */
  $handler->display->display_options['fields']['field_geospatial']['id'] = 'field_geospatial';
  $handler->display->display_options['fields']['field_geospatial']['table'] = 'field_data_field_geospatial';
  $handler->display->display_options['fields']['field_geospatial']['field'] = 'field_geospatial';
  $handler->display->display_options['fields']['field_geospatial']['label'] = '';
  $handler->display->display_options['fields']['field_geospatial']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_geospatial']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_geospatial']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_geospatial']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_geospatial']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_geospatial']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_geospatial']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_geospatial']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_geospatial']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_geospatial']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_geospatial']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_geospatial']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_geospatial']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_geospatial']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_geospatial']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_geospatial']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_geospatial']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_geospatial']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_geospatial']['field_api_classes'] = 0;
  /* Field: Content: Geo */
  $handler->display->display_options['fields']['field_geofield']['id'] = 'field_geofield';
  $handler->display->display_options['fields']['field_geofield']['table'] = 'field_data_field_geofield';
  $handler->display->display_options['fields']['field_geofield']['field'] = 'field_geofield';
  $handler->display->display_options['fields']['field_geofield']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_geofield']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_geofield']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_geofield']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_geofield']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_geofield']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_geofield']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_geofield']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_geofield']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_geofield']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_geofield']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_geofield']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_geofield']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_geofield']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_geofield']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_geofield']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_geofield']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_geofield']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_geofield']['click_sort_column'] = 'wkt';
  $handler->display->display_options['fields']['field_geofield']['settings'] = array(
    'data' => 'full',
  );
  $handler->display->display_options['fields']['field_geofield']['field_api_classes'] = 0;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'scheda_porto' => 'scheda_porto',
  );

  /* Display: Porti */
  $handler = $view->new_display('block', 'Porti', 'block');

  /* Display: Porti - Overlay */
  $handler = $view->new_display('openlayers', 'Porti - Overlay', 'porti_overlay');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'openlayers_data';
  $handler->display->display_options['style_options']['data_source'] = array(
    'value' => 'wkt',
    'other_lat' => 'title',
    'other_lon' => 'title',
    'wkt' => 'field_geofield',
    'other_top' => 'title',
    'other_right' => 'title',
    'other_bottom' => 'title',
    'other_left' => 'title',
    'name_field' => 'title',
    'description_field' => '',
    'view_mode' => 'full',
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page_1');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'openlayers_map';
  $handler->display->display_options['style_options']['map'] = 'clone_of_tpe_ports';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['path'] = 'porti';

  /* Display: Web widget */
  $handler = $view->new_display('web_widgets', 'Web widget', 'web_widgets_1');
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['path'] = 'widget/ports';
  $handler->display->display_options['displays'] = array(
    'default' => 0,
    'block' => 0,
    'page_1' => 0,
  );

  /* Display: Data export */
  $handler = $view->new_display('views_data_export', 'Data export', 'views_data_export_1');
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'views_data_export_csv';
  $handler->display->display_options['style_options']['provide_file'] = 1;
  $handler->display->display_options['style_options']['filename'] = 'porti.csv';
  $handler->display->display_options['style_options']['parent_sort'] = 0;
  $handler->display->display_options['style_options']['quote'] = 0;
  $handler->display->display_options['style_options']['trim'] = 0;
  $handler->display->display_options['style_options']['replace_newlines'] = 0;
  $handler->display->display_options['style_options']['header'] = 1;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Geo */
  $handler->display->display_options['fields']['field_geofield']['id'] = 'field_geofield';
  $handler->display->display_options['fields']['field_geofield']['table'] = 'field_data_field_geofield';
  $handler->display->display_options['fields']['field_geofield']['field'] = 'field_geofield';
  $handler->display->display_options['fields']['field_geofield']['label'] = 'lat';
  $handler->display->display_options['fields']['field_geofield']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_geofield']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_geofield']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_geofield']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_geofield']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_geofield']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_geofield']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_geofield']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_geofield']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_geofield']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_geofield']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_geofield']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_geofield']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_geofield']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_geofield']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_geofield']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_geofield']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_geofield']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_geofield']['click_sort_column'] = 'wkt';
  $handler->display->display_options['fields']['field_geofield']['type'] = 'geofield_lat';
  $handler->display->display_options['fields']['field_geofield']['settings'] = array(
    'data' => 'full',
    'format' => 'decimal_degrees',
  );
  $handler->display->display_options['fields']['field_geofield']['field_api_classes'] = 0;
  /* Field: Content: Geo */
  $handler->display->display_options['fields']['field_geofield_1']['id'] = 'field_geofield_1';
  $handler->display->display_options['fields']['field_geofield_1']['table'] = 'field_data_field_geofield';
  $handler->display->display_options['fields']['field_geofield_1']['field'] = 'field_geofield';
  $handler->display->display_options['fields']['field_geofield_1']['label'] = 'lon';
  $handler->display->display_options['fields']['field_geofield_1']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_geofield_1']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_geofield_1']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_geofield_1']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_geofield_1']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_geofield_1']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_geofield_1']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_geofield_1']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_geofield_1']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_geofield_1']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_geofield_1']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_geofield_1']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_geofield_1']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_geofield_1']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_geofield_1']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_geofield_1']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_geofield_1']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_geofield_1']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_geofield_1']['click_sort_column'] = 'wkt';
  $handler->display->display_options['fields']['field_geofield_1']['type'] = 'geofield_lon';
  $handler->display->display_options['fields']['field_geofield_1']['settings'] = array(
    'data' => 'full',
    'format' => 'decimal_degrees',
  );
  $handler->display->display_options['fields']['field_geofield_1']['field_api_classes'] = 0;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
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
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['alter']['alter_text'] = 1;
  $handler->display->display_options['fields']['nid']['alter']['text'] = '/api/node/[nid]';
  $handler->display->display_options['fields']['nid']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['path'] = 'api/node/[nid]';
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
  /* Field: Content: Autorità marittima/portuale */
  $handler->display->display_options['fields']['field_autority']['id'] = 'field_autority';
  $handler->display->display_options['fields']['field_autority']['table'] = 'field_data_field_autority';
  $handler->display->display_options['fields']['field_autority']['field'] = 'field_autority';
  $handler->display->display_options['fields']['field_autority']['label'] = 'autorita_marittima';
  $handler->display->display_options['fields']['field_autority']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_autority']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_autority']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_autority']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_autority']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_autority']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_autority']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_autority']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_autority']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_autority']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_autority']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_autority']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_autority']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_autority']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_autority']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_autority']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_autority']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_autority']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_autority']['field_api_classes'] = 0;
  /* Field: Content: Profondità massima */
  $handler->display->display_options['fields']['field_prof_max']['id'] = 'field_prof_max';
  $handler->display->display_options['fields']['field_prof_max']['table'] = 'field_data_field_prof_max';
  $handler->display->display_options['fields']['field_prof_max']['field'] = 'field_prof_max';
  $handler->display->display_options['fields']['field_prof_max']['label'] = 'prof_massima';
  $handler->display->display_options['fields']['field_prof_max']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_prof_max']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_prof_max']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_prof_max']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_prof_max']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_prof_max']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_prof_max']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_prof_max']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_prof_max']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_prof_max']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_prof_max']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_prof_max']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_prof_max']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_prof_max']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_prof_max']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_prof_max']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_prof_max']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_prof_max']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_prof_max']['settings'] = array(
    'thousand_separator' => '',
    'decimal_separator' => '.',
    'scale' => '2',
    'prefix_suffix' => 0,
  );
  $handler->display->display_options['fields']['field_prof_max']['field_api_classes'] = 0;
  /* Field: Content: Profondità minima */
  $handler->display->display_options['fields']['field_prof_min']['id'] = 'field_prof_min';
  $handler->display->display_options['fields']['field_prof_min']['table'] = 'field_data_field_prof_min';
  $handler->display->display_options['fields']['field_prof_min']['field'] = 'field_prof_min';
  $handler->display->display_options['fields']['field_prof_min']['label'] = 'prof_minima';
  $handler->display->display_options['fields']['field_prof_min']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_prof_min']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_prof_min']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_prof_min']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_prof_min']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_prof_min']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_prof_min']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_prof_min']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_prof_min']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_prof_min']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_prof_min']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_prof_min']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_prof_min']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_prof_min']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_prof_min']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_prof_min']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_prof_min']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_prof_min']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_prof_min']['settings'] = array(
    'thousand_separator' => '',
    'decimal_separator' => '.',
    'scale' => '2',
    'prefix_suffix' => 0,
  );
  $handler->display->display_options['fields']['field_prof_min']['field_api_classes'] = 0;
  /* Field: Content: Tipo approdo */
  $handler->display->display_options['fields']['field_tipo_approdo']['id'] = 'field_tipo_approdo';
  $handler->display->display_options['fields']['field_tipo_approdo']['table'] = 'field_data_field_tipo_approdo';
  $handler->display->display_options['fields']['field_tipo_approdo']['field'] = 'field_tipo_approdo';
  $handler->display->display_options['fields']['field_tipo_approdo']['label'] = 'tipo_approdo';
  $handler->display->display_options['fields']['field_tipo_approdo']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_tipo_approdo']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_tipo_approdo']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_tipo_approdo']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_tipo_approdo']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_tipo_approdo']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_tipo_approdo']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_tipo_approdo']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_tipo_approdo']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_tipo_approdo']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_tipo_approdo']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_tipo_approdo']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_tipo_approdo']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_tipo_approdo']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_tipo_approdo']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_tipo_approdo']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_tipo_approdo']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_tipo_approdo']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_tipo_approdo']['field_api_classes'] = 0;
  /* Field: Content: Posti barca totali */
  $handler->display->display_options['fields']['field_pbt']['id'] = 'field_pbt';
  $handler->display->display_options['fields']['field_pbt']['table'] = 'field_data_field_pbt';
  $handler->display->display_options['fields']['field_pbt']['field'] = 'field_pbt';
  $handler->display->display_options['fields']['field_pbt']['label'] = 'posti_barca_totali';
  $handler->display->display_options['fields']['field_pbt']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_pbt']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_pbt']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_pbt']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_pbt']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_pbt']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_pbt']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_pbt']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_pbt']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_pbt']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_pbt']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_pbt']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_pbt']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_pbt']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_pbt']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_pbt']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_pbt']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_pbt']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_pbt']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 0,
  );
  $handler->display->display_options['fields']['field_pbt']['field_api_classes'] = 0;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'scheda_porto' => 'scheda_porto',
  );
  /* Filter criterion: Content: Geo (field_geofield:wkt) */
  $handler->display->display_options['filters']['field_geofield_wkt']['id'] = 'field_geofield_wkt';
  $handler->display->display_options['filters']['field_geofield_wkt']['table'] = 'field_data_field_geofield';
  $handler->display->display_options['filters']['field_geofield_wkt']['field'] = 'field_geofield_wkt';
  $handler->display->display_options['filters']['field_geofield_wkt']['operator'] = 'not empty';
  $handler->display->display_options['path'] = 'porti/export';

  /* Display: Gestori porti */
  $handler = $view->new_display('views_data_export', 'Gestori porti', 'views_data_export_2');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Gestori porti';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'views_data_export_csv';
  $handler->display->display_options['style_options']['provide_file'] = 1;
  $handler->display->display_options['style_options']['filename'] = 'porti.csv';
  $handler->display->display_options['style_options']['parent_sort'] = 0;
  $handler->display->display_options['style_options']['separator'] = '|';
  $handler->display->display_options['style_options']['quote'] = 0;
  $handler->display->display_options['style_options']['trim'] = 0;
  $handler->display->display_options['style_options']['replace_newlines'] = 0;
  $handler->display->display_options['style_options']['header'] = 1;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
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
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['alter']['alter_text'] = 1;
  $handler->display->display_options['fields']['nid']['alter']['text'] = '/api/node/[nid]';
  $handler->display->display_options['fields']['nid']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['path'] = 'api/node/[nid]';
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
  /* Field: Content: Porto di riferimento */
  $handler->display->display_options['fields']['field_ref_porto']['id'] = 'field_ref_porto';
  $handler->display->display_options['fields']['field_ref_porto']['table'] = 'field_data_field_ref_porto';
  $handler->display->display_options['fields']['field_ref_porto']['field'] = 'field_ref_porto';
  $handler->display->display_options['fields']['field_ref_porto']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_ref_porto']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_ref_porto']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_ref_porto']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_ref_porto']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_ref_porto']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_ref_porto']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_ref_porto']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_ref_porto']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_ref_porto']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_ref_porto']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_ref_porto']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_ref_porto']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_ref_porto']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_ref_porto']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_ref_porto']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_ref_porto']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_ref_porto']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_ref_porto']['type'] = 'node_reference_plain';
  $handler->display->display_options['fields']['field_ref_porto']['group_rows'] = 1;
  $handler->display->display_options['fields']['field_ref_porto']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_ref_porto']['delta_reversed'] = 0;
  $handler->display->display_options['fields']['field_ref_porto']['delta_first_last'] = 0;
  $handler->display->display_options['fields']['field_ref_porto']['field_api_classes'] = 0;
  /* Field: Content: Autorità marittima/portuale */
  $handler->display->display_options['fields']['field_autority']['id'] = 'field_autority';
  $handler->display->display_options['fields']['field_autority']['table'] = 'field_data_field_autority';
  $handler->display->display_options['fields']['field_autority']['field'] = 'field_autority';
  $handler->display->display_options['fields']['field_autority']['label'] = 'autorita_marittima';
  $handler->display->display_options['fields']['field_autority']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_autority']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_autority']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_autority']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_autority']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_autority']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_autority']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_autority']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_autority']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_autority']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_autority']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_autority']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_autority']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_autority']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_autority']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_autority']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_autority']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_autority']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_autority']['field_api_classes'] = 0;
  /* Field: Content: Posti barca totali */
  $handler->display->display_options['fields']['field_pbt']['id'] = 'field_pbt';
  $handler->display->display_options['fields']['field_pbt']['table'] = 'field_data_field_pbt';
  $handler->display->display_options['fields']['field_pbt']['field'] = 'field_pbt';
  $handler->display->display_options['fields']['field_pbt']['label'] = 'posti_barca_totali';
  $handler->display->display_options['fields']['field_pbt']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_pbt']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_pbt']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_pbt']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_pbt']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_pbt']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_pbt']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_pbt']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_pbt']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_pbt']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_pbt']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_pbt']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_pbt']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_pbt']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_pbt']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_pbt']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_pbt']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_pbt']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_pbt']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 0,
  );
  $handler->display->display_options['fields']['field_pbt']['field_api_classes'] = 0;
  /* Field: Content: Responsabile */
  $handler->display->display_options['fields']['field_responsabile']['id'] = 'field_responsabile';
  $handler->display->display_options['fields']['field_responsabile']['table'] = 'field_data_field_responsabile';
  $handler->display->display_options['fields']['field_responsabile']['field'] = 'field_responsabile';
  $handler->display->display_options['fields']['field_responsabile']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_responsabile']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_responsabile']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_responsabile']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_responsabile']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_responsabile']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_responsabile']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_responsabile']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_responsabile']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_responsabile']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_responsabile']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_responsabile']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_responsabile']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_responsabile']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_responsabile']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_responsabile']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_responsabile']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_responsabile']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_responsabile']['group_rows'] = 1;
  $handler->display->display_options['fields']['field_responsabile']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_responsabile']['delta_reversed'] = 0;
  $handler->display->display_options['fields']['field_responsabile']['delta_first_last'] = 0;
  $handler->display->display_options['fields']['field_responsabile']['field_api_classes'] = 0;
  /* Field: Getlocations Fields: City */
  $handler->display->display_options['fields']['city']['id'] = 'city';
  $handler->display->display_options['fields']['city']['table'] = 'getlocations_fields';
  $handler->display->display_options['fields']['city']['field'] = 'city';
  $handler->display->display_options['fields']['city']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['city']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['city']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['city']['alter']['external'] = 0;
  $handler->display->display_options['fields']['city']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['city']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['city']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['city']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['city']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['city']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['city']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['city']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['city']['alter']['html'] = 0;
  $handler->display->display_options['fields']['city']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['city']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['city']['hide_empty'] = 0;
  $handler->display->display_options['fields']['city']['empty_zero'] = 0;
  $handler->display->display_options['fields']['city']['hide_alter_empty'] = 1;
  /* Field: Getlocations Fields: Postal Code */
  $handler->display->display_options['fields']['postal_code']['id'] = 'postal_code';
  $handler->display->display_options['fields']['postal_code']['table'] = 'getlocations_fields';
  $handler->display->display_options['fields']['postal_code']['field'] = 'postal_code';
  $handler->display->display_options['fields']['postal_code']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['postal_code']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['postal_code']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['postal_code']['alter']['external'] = 0;
  $handler->display->display_options['fields']['postal_code']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['postal_code']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['postal_code']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['postal_code']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['postal_code']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['postal_code']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['postal_code']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['postal_code']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['postal_code']['alter']['html'] = 0;
  $handler->display->display_options['fields']['postal_code']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['postal_code']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['postal_code']['hide_empty'] = 0;
  $handler->display->display_options['fields']['postal_code']['empty_zero'] = 0;
  $handler->display->display_options['fields']['postal_code']['hide_alter_empty'] = 1;
  /* Field: Getlocations Fields: Province */
  $handler->display->display_options['fields']['province']['id'] = 'province';
  $handler->display->display_options['fields']['province']['table'] = 'getlocations_fields';
  $handler->display->display_options['fields']['province']['field'] = 'province';
  $handler->display->display_options['fields']['province']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['province']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['province']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['province']['alter']['external'] = 0;
  $handler->display->display_options['fields']['province']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['province']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['province']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['province']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['province']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['province']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['province']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['province']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['province']['alter']['html'] = 0;
  $handler->display->display_options['fields']['province']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['province']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['province']['hide_empty'] = 0;
  $handler->display->display_options['fields']['province']['empty_zero'] = 0;
  $handler->display->display_options['fields']['province']['hide_alter_empty'] = 1;
  /* Field: Getlocations Fields: Street */
  $handler->display->display_options['fields']['street']['id'] = 'street';
  $handler->display->display_options['fields']['street']['table'] = 'getlocations_fields';
  $handler->display->display_options['fields']['street']['field'] = 'street';
  $handler->display->display_options['fields']['street']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['street']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['street']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['street']['alter']['external'] = 0;
  $handler->display->display_options['fields']['street']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['street']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['street']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['street']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['street']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['street']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['street']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['street']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['street']['alter']['html'] = 0;
  $handler->display->display_options['fields']['street']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['street']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['street']['hide_empty'] = 0;
  $handler->display->display_options['fields']['street']['empty_zero'] = 0;
  $handler->display->display_options['fields']['street']['hide_alter_empty'] = 1;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'scheda_gestore' => 'scheda_gestore',
  );
  $handler->display->display_options['path'] = 'gestori-porto/export';
  $handler->display->display_options['sitename_title'] = 0;
  $translatables['mappa_porti'] = array(
    t('Master'),
    t('Mappa porti'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('field_ref_porto'),
    t('api/node/[nid]'),
    t('Geo'),
    t('Porti'),
    t('Porti - Overlay'),
    t('Page'),
    t('Web widget'),
    t('Data export'),
    t('lat'),
    t('lon'),
    t('Title'),
    t('Nid'),
    t('/api/node/[nid]'),
    t('autorita_marittima'),
    t('prof_massima'),
    t('prof_minima'),
    t('tipo_approdo'),
    t('posti_barca_totali'),
    t('Gestori porti'),
    t('Porto di riferimento'),
    t('Responsabile'),
    t('City'),
    t('Postal Code'),
    t('Province'),
    t('Street'),
  );
  $export['mappa_porti'] = $view;

  $view = new view;
  $view->name = 'maps';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Maps';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Maps';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['style_plugin'] = 'openlayers_data';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 0;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 0;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['link_to_node'] = 1;
  /* Field: Content: Geo - Spatial */
  $handler->display->display_options['fields']['field_geospatial']['id'] = 'field_geospatial';
  $handler->display->display_options['fields']['field_geospatial']['table'] = 'field_data_field_geospatial';
  $handler->display->display_options['fields']['field_geospatial']['field'] = 'field_geospatial';
  $handler->display->display_options['fields']['field_geospatial']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_geospatial']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_geospatial']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_geospatial']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_geospatial']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_geospatial']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_geospatial']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_geospatial']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_geospatial']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_geospatial']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_geospatial']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_geospatial']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_geospatial']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_geospatial']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_geospatial']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_geospatial']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_geospatial']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_geospatial']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_geospatial']['field_api_classes'] = 0;
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

  /* Display: POI */
  $handler = $view->new_display('page', 'POI', 'page');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'openlayers_map';
  $handler->display->display_options['style_options']['map'] = 'tpe_poi';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['path'] = 'maps/poi';

  /* Display: POI Data Overlay */
  $handler = $view->new_display('openlayers', 'POI Data Overlay', 'openlayers_1');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'openlayers_data';
  $handler->display->display_options['style_options']['data_source'] = array(
    'value' => 'wkt',
    'other_lat' => 'title',
    'other_lon' => 'title',
    'wkt' => 'field_geospatial',
    'other_top' => 'title',
    'other_right' => 'title',
    'other_bottom' => 'title',
    'other_left' => 'title',
    'name_field' => 'title',
    'description_field' => '',
    'view_mode' => 'full',
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
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
    'poi' => 'poi',
  );
  $translatables['maps'] = array(
    t('Master'),
    t('Maps'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Geo - Spatial'),
    t('POI'),
    t('POI Data Overlay'),
  );
  $export['maps'] = $view;

  $view = new view;
  $view->name = 'slideshow';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Slideshow';
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
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'slideshow';
  $handler->display->display_options['style_options']['slideshow_type'] = 'views_slideshow_cycle';
  $handler->display->display_options['style_options']['slideshow_skin'] = 'default';
  $handler->display->display_options['style_options']['skin_info'] = array(
    'class' => 'default',
    'name' => 'Default',
    'module' => 'views_slideshow',
    'path' => '',
    'stylesheets' => array(),
  );
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_pager']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_controls']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_controls']['type'] = 'views_slideshow_controls_text';
  $handler->display->display_options['style_options']['widgets']['top']['views_slideshow_slide_counter']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_pager']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_controls']['weight'] = '1';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_controls']['type'] = 'views_slideshow_controls_text';
  $handler->display->display_options['style_options']['widgets']['bottom']['views_slideshow_slide_counter']['weight'] = '1';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['timeout'] = '5000';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['speed'] = '700';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['delay'] = '0';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['start_paused'] = 0;
  $handler->display->display_options['style_options']['views_slideshow_cycle']['remember_slide_days'] = '1';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['items_per_slide'] = '1';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['wait_for_image_load_timeout'] = '3000';
  $handler->display->display_options['style_options']['views_slideshow_cycle']['cleartype'] = 0;
  $handler->display->display_options['style_options']['views_slideshow_cycle']['cleartypenobg'] = 0;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['hide_empty'] = 0;
  $handler->display->display_options['row_options']['default_field_elements'] = 1;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
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
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['title']['link_to_node'] = 1;
  /* Field: Content: Immagine */
  $handler->display->display_options['fields']['field_immagine']['id'] = 'field_immagine';
  $handler->display->display_options['fields']['field_immagine']['table'] = 'field_data_field_immagine';
  $handler->display->display_options['fields']['field_immagine']['field'] = 'field_immagine';
  $handler->display->display_options['fields']['field_immagine']['label'] = '';
  $handler->display->display_options['fields']['field_immagine']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_immagine']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_immagine']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_immagine']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_immagine']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_immagine']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_immagine']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_immagine']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_immagine']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_immagine']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_immagine']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_immagine']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_immagine']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_immagine']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_immagine']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_immagine']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_immagine']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_immagine']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_immagine']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_immagine']['settings'] = array(
    'image_style' => 'slide',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_immagine']['group_rows'] = 1;
  $handler->display->display_options['fields']['field_immagine']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_immagine']['delta_reversed'] = 0;
  $handler->display->display_options['fields']['field_immagine']['delta_first_last'] = 0;
  $handler->display->display_options['fields']['field_immagine']['field_api_classes'] = 0;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
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
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['body']['hide_empty'] = 0;
  $handler->display->display_options['fields']['body']['empty_zero'] = 0;
  $handler->display->display_options['fields']['body']['hide_alter_empty'] = 1;
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
  /* Filter criterion: Content: Promoted to front page */
  $handler->display->display_options['filters']['promote']['id'] = 'promote';
  $handler->display->display_options['filters']['promote']['table'] = 'node';
  $handler->display->display_options['filters']['promote']['field'] = 'promote';
  $handler->display->display_options['filters']['promote']['value'] = '1';

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block_1');
  $translatables['slideshow'] = array(
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
    t('Block'),
  );
  $export['slideshow'] = $view;

  $view = new view;
  $view->name = 'users_stats';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'users_stats';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Statistiche contenuti-utenti';
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    4 => '4',
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'type' => 'type',
    'title' => 'title',
    'created' => 'created',
    'name' => 'name',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'type' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'created' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'name' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['style_options']['override'] = 1;
  $handler->display->display_options['style_options']['sticky'] = 0;
  $handler->display->display_options['style_options']['empty_table'] = 0;
  /* Relationship: Content: Author */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'node';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  $handler->display->display_options['relationships']['uid']['required'] = 0;
  /* Field: Content: Type */
  $handler->display->display_options['fields']['type']['id'] = 'type';
  $handler->display->display_options['fields']['type']['table'] = 'node';
  $handler->display->display_options['fields']['type']['field'] = 'type';
  $handler->display->display_options['fields']['type']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['type']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['type']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['type']['alter']['external'] = 0;
  $handler->display->display_options['fields']['type']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['type']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['type']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['type']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['type']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['type']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['type']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['type']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['type']['alter']['html'] = 0;
  $handler->display->display_options['fields']['type']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['type']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['type']['hide_empty'] = 0;
  $handler->display->display_options['fields']['type']['empty_zero'] = 0;
  $handler->display->display_options['fields']['type']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['type']['link_to_node'] = 0;
  $handler->display->display_options['fields']['type']['machine_name'] = 0;
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
  $handler->display->display_options['fields']['created']['custom_date_format'] = 'd-m-Y';
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'uid';
  $handler->display->display_options['fields']['name']['label'] = 'Autore';
  $handler->display->display_options['fields']['name']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['name']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['name']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['name']['alter']['external'] = 0;
  $handler->display->display_options['fields']['name']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['name']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['name']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['name']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['name']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['name']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['name']['alter']['html'] = 0;
  $handler->display->display_options['fields']['name']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['name']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['name']['hide_empty'] = 0;
  $handler->display->display_options['fields']['name']['empty_zero'] = 0;
  $handler->display->display_options['fields']['name']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['name']['link_to_user'] = 1;
  $handler->display->display_options['fields']['name']['overwrite_anonymous'] = 0;
  $handler->display->display_options['fields']['name']['format_username'] = 1;
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
    'scheda_gestore' => 'scheda_gestore',
    'scheda_itinerario' => 'scheda_itinerario',
    'scheda_operatori_economici' => 'scheda_operatori_economici',
    'scheda_porto' => 'scheda_porto',
    'scheda_territorio' => 'scheda_territorio',
  );
  $handler->display->display_options['filters']['type']['exposed'] = TRUE;
  $handler->display->display_options['filters']['type']['expose']['operator_id'] = 'type_op';
  $handler->display->display_options['filters']['type']['expose']['label'] = 'Type';
  $handler->display->display_options['filters']['type']['expose']['operator'] = 'type_op';
  $handler->display->display_options['filters']['type']['expose']['identifier'] = 'type';
  $handler->display->display_options['filters']['type']['expose']['reduce'] = 1;

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'statistics';

  /* Display: Data export */
  $handler = $view->new_display('views_data_export', 'Data export', 'views_data_export_1');
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'views_data_export_xls';
  $handler->display->display_options['style_options']['provide_file'] = 1;
  $handler->display->display_options['style_options']['parent_sort'] = 0;
  $handler->display->display_options['path'] = 'stats-xls';
  $handler->display->display_options['displays'] = array(
    'page' => 'page',
    'default' => 0,
  );
  $translatables['users_stats'] = array(
    t('Master'),
    t('Statistiche contenuti-utenti'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('author'),
    t('Type'),
    t('Titolo'),
    t('Post date'),
    t('Autore'),
    t('Page'),
    t('Data export'),
  );
  $export['users_stats'] = $view;

  $view = new view;
  $view->name = 'virtual_organization';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'virtual organization';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'virtual organization';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'openlayers_map';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 0;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 0;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['link_to_node'] = 1;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Aderente alla virtual organization (field_virtual_organization) */
  $handler->display->display_options['filters']['field_virtual_organization_value']['id'] = 'field_virtual_organization_value';
  $handler->display->display_options['filters']['field_virtual_organization_value']['table'] = 'field_data_field_virtual_organization';
  $handler->display->display_options['filters']['field_virtual_organization_value']['field'] = 'field_virtual_organization_value';
  $handler->display->display_options['filters']['field_virtual_organization_value']['value'] = array(
    1 => '1',
  );

  /* Display: Tabella  */
  $handler = $view->new_display('block', 'Tabella ', 'block');
  $handler->display->display_options['display_description'] = 'Aderenti alla virtual organization';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
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
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';

  /* Display: OpenLayers Data Overlay */
  $handler = $view->new_display('openlayers', 'OpenLayers Data Overlay', 'openlayers_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Gestori porti';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'openlayers_data';
  $handler->display->display_options['style_options']['data_source'] = array(
    'value' => 'wkt',
    'other_lat' => 'title',
    'other_lon' => 'title',
    'wkt' => 'field_geospatial',
    'other_top' => 'title',
    'other_right' => 'title',
    'other_bottom' => 'title',
    'other_left' => 'title',
    'name_field' => 'title',
    'description_field' => '',
    'view_mode' => 'full',
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 0;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 0;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['link_to_node'] = 1;
  /* Field: Content: Geo - Spatial */
  $handler->display->display_options['fields']['field_geospatial']['id'] = 'field_geospatial';
  $handler->display->display_options['fields']['field_geospatial']['table'] = 'field_data_field_geospatial';
  $handler->display->display_options['fields']['field_geospatial']['field'] = 'field_geospatial';
  $handler->display->display_options['fields']['field_geospatial']['label'] = '';
  $handler->display->display_options['fields']['field_geospatial']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_geospatial']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_geospatial']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_geospatial']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_geospatial']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_geospatial']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_geospatial']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_geospatial']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_geospatial']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_geospatial']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_geospatial']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_geospatial']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_geospatial']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_geospatial']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_geospatial']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_geospatial']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_geospatial']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_geospatial']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_geospatial']['field_api_classes'] = 0;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Aderente alla virtual organization (field_virtual_organization) */
  $handler->display->display_options['filters']['field_virtual_organization_value']['id'] = 'field_virtual_organization_value';
  $handler->display->display_options['filters']['field_virtual_organization_value']['table'] = 'field_data_field_virtual_organization';
  $handler->display->display_options['filters']['field_virtual_organization_value']['field'] = 'field_virtual_organization_value';
  $handler->display->display_options['filters']['field_virtual_organization_value']['value'] = array(
    1 => '1',
  );
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'scheda_gestore' => 'scheda_gestore',
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block_1');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'openlayers_map';
  $handler->display->display_options['style_options']['map'] = 'virtual_organization';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;

  /* Display: Operatori economici overlay */
  $handler = $view->new_display('openlayers', 'Operatori economici overlay', 'openlayers_2');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Operatori economici';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'openlayers_data';
  $handler->display->display_options['style_options']['data_source'] = array(
    'value' => 'wkt',
    'other_lat' => 'title',
    'other_lon' => 'title',
    'wkt' => 'field_geospatial',
    'other_top' => 'title',
    'other_right' => 'title',
    'other_bottom' => 'title',
    'other_left' => 'title',
    'name_field' => 'title',
    'description_field' => '',
    'view_mode' => 'full',
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 0;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 0;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['link_to_node'] = 1;
  /* Field: Content: Geo - Spatial */
  $handler->display->display_options['fields']['field_geospatial']['id'] = 'field_geospatial';
  $handler->display->display_options['fields']['field_geospatial']['table'] = 'field_data_field_geospatial';
  $handler->display->display_options['fields']['field_geospatial']['field'] = 'field_geospatial';
  $handler->display->display_options['fields']['field_geospatial']['label'] = '';
  $handler->display->display_options['fields']['field_geospatial']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_geospatial']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_geospatial']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_geospatial']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_geospatial']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_geospatial']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_geospatial']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_geospatial']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_geospatial']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_geospatial']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_geospatial']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_geospatial']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_geospatial']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_geospatial']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_geospatial']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_geospatial']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_geospatial']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_geospatial']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_geospatial']['field_api_classes'] = 0;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Aderente alla virtual organization (field_virtual_organization) */
  $handler->display->display_options['filters']['field_virtual_organization_value']['id'] = 'field_virtual_organization_value';
  $handler->display->display_options['filters']['field_virtual_organization_value']['table'] = 'field_data_field_virtual_organization';
  $handler->display->display_options['filters']['field_virtual_organization_value']['field'] = 'field_virtual_organization_value';
  $handler->display->display_options['filters']['field_virtual_organization_value']['value'] = array(
    1 => '1',
  );
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'scheda_operatori_economici' => 'scheda_operatori_economici',
  );
  /* Filter criterion: Content: Geo - Spatial (field_geospatial) */
  $handler->display->display_options['filters']['field_geospatial_geometry']['id'] = 'field_geospatial_geometry';
  $handler->display->display_options['filters']['field_geospatial_geometry']['table'] = 'field_data_field_geospatial';
  $handler->display->display_options['filters']['field_geospatial_geometry']['field'] = 'field_geospatial_geometry';
  $handler->display->display_options['filters']['field_geospatial_geometry']['operator'] = 'not empty';
  $translatables['virtual_organization'] = array(
    t('Master'),
    t('virtual organization'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('Tabella '),
    t('Aderenti alla virtual organization'),
    t('OpenLayers Data Overlay'),
    t('Block'),
    t('Operatori economici overlay'),
  );
  $export['virtual_organization'] = $view;

  return $export;
}
