<?php

/**
 * @file
 * Cartaro profile.
 */

/**
 * Implements hook_init().
 */
function cartaro_init() {
  global $conf;

  // Use this early opportunity to brand the install/runtime experience.
  // Once the generic theme settings are saved, or a custom theme's settings
  // are saved to override it, this will not be effective anymore, which is
  // intended.
  if (empty($conf['theme_settings'])) {
    $conf['theme_settings'] = array(
      'default_logo' => 0,
      'logo_path' =>  empty($conf['site_name']) ? 'profiles/cartaro/logo_dark.png' : 'profiles/cartaro/logo_light.png',
    );
  }
}

/**
 * Implements hook_install_tasks_alter().
 */
function cartaro_install_tasks_alter(&$tasks, $install_state) {

  // Preselect the English language, so users can skip the language selection
  // form. We do not ship other languages with Cartaro at this point.
  if (!isset($_GET['locale'])) {
    $_POST['locale'] = 'en';
  }
}

/**
 * Implements hook_form_install_configure_form_alter().
 *
 * Allows the profile to alter the site configuration form.
 */
function cartaro_form_install_configure_form_alter(&$form, $form_state) {

  module_load_install('postgis');
  $postgis_requirements = postgis_requirements('install');

  $form['cartaro'] = array(
    '#type' => 'fieldset',
    '#title' => st('Cartaro settings'),
    '#weight' => 1,
    'geoserver_url' => array(
      '#title' => st('GeoServer URL'),
      '#type' => 'textfield',
      '#required' => TRUE,
      '#default_value' => 'http://' . $_SERVER['SERVER_NAME'] . ':8080/geoserver',
    ),
    'geoserver_workspace' => array(
      '#title' => st('GeoServer workspace'),
      '#type' => 'textfield',
      '#required' => TRUE,
    ),
    'geoserver_namespace' => array(
      '#title' => st('GeoServer namespace'),
      '#type' => 'textfield',
      '#required' => TRUE,
      '#default_value' => 'http://' . $_SERVER['SERVER_NAME'],
    ),
    'postgis_version' => array(
      '#title' => st('PostGIS Version'),
      '#type' => 'textfield',
      '#disabled' => TRUE,
      '#value' => $postgis_requirements[0]['value'],
      '#description' => $postgis_requirements[0]['description'],
    ),
    'cartaro_demo' => array(
      '#type' => 'checkbox',
      '#title' => st('Cartaro demo'),
      '#description' => st('Setup example data and configuration.'),
    ),
  );

  // Move update notifications below Cartaro settings.
  $form['update_notifications']['#weight'] = 2;

  // Add both existing submit function and our submit function,
  // since adding just ours cancels the automated discovery of the original.
  $form['#validate'] = array('cartaro_configure_form_validate', 'install_configure_form_validate');
  $form['#submit'] = array('cartaro_configure_form_submit', 'install_configure_form_submit');
}

/**
 * Submit callback for Cartaro configure form.
 */
function cartaro_configure_form_submit($form, &$form_state) {

  if ($form_state['values']['cartaro_demo']) {
    module_enable(array('cartaro_demo'));
  }
}

/**
 * Validation callback for Cartaro configure form.
 */
function cartaro_configure_form_validate($form, &$form_state) {

  // Check PostGIS requirements.
  module_load_install('postgis');
  $postgis_requirements = postgis_requirements('install');
  foreach ($postgis_requirements as $requirement) {
    if ($requirement['severity'] == REQUIREMENT_ERROR) {
      form_set_error('postgis_version', $requirement['description']);
    }
  }

  $geoserver_url = trim($form_state['values']['geoserver_url'], '/');
  $geoserver_workspace = $form_state['values']['geoserver_workspace'];
  $geoserver_namespace = $form_state['values']['geoserver_namespace'];
  $username = $form_state['values']['account']['name'];
  $password = $form_state['values']['account']['pass'];

  variable_set('geoserver_url', $geoserver_url . '/');
  $geoserver_login = geoserver_login($username, $password);

  if ($geoserver_login === TRUE) {
    $geoserver_workspace = cartaro_configure_geoserver_workspace($geoserver_workspace);
    $geoserver_namespace = cartaro_configure_geoserver_namespace($geoserver_workspace, $geoserver_namespace);
    cartaro_configure_geoserver_postgis_datastore($geoserver_workspace, $geoserver_namespace);
  }
  else {
    form_set_error('geoserver_url', t('GeoServer login failed: %reason Please check the GeoServer URL and your site maintenance account.', 
        array('%reason' => $geoserver_login)));
  }
}

/**
 * Create GeoServer workspace.
 *
 * @param string $geoserver_workspace Name of GeoServer workspace.
 *
 * @return string|boolen Name of GeoServer workspace or FALSE on failure.
 */
function cartaro_configure_geoserver_workspace($geoserver_workspace) {

  if (empty($geoserver_workspace)) {
    return;
  }

  $result = geoserver_get('rest/workspaces/' . $geoserver_workspace . '.json');

  if ($result->code == 404) {
    // Create workspace.
    $content = array(
      'workspace' => array(
        'name' => $geoserver_workspace,
      ),
    );
    $result = geoserver_post('rest/workspaces.json', $content);
  }

  if ($result->code == 200 || $result->code == 201) {
    variable_set('geoserver_workspace', $geoserver_workspace);
    return $geoserver_workspace;
  }
  else {
    form_set_error('geoserver_workspace', $result->data);
    return FALSE;
  }
}

/**
 * Update GeoServer namespace.
 *
 * @param string $geoserver_workspace Name of GeoServer workspace.
 * @param string $geoserver_namespace URI of GeoServer namespace.
 *
 * @return string|boolen Name of GeoServer namespace or FALSE on failure.
 */
function cartaro_configure_geoserver_namespace($geoserver_workspace, $geoserver_namespace) {

  if (empty($geoserver_workspace) || empty($geoserver_namespace)) {
    return;
  }

  // Update namespace.
  $content = array(
    'namespace' => array(
      'prefix' => $geoserver_workspace,
      'uri' => $geoserver_namespace,
    ),
  );
  $result = geoserver_put('rest/namespaces/' . $geoserver_workspace . '.json', $content);

  if ($result->code == 200) {
    variable_set('geoserver_namespace', $geoserver_namespace);
    return $geoserver_namespace;
  }
  else {
    form_set_error('geoserver_namespace', $result->data);
    return FALSE;
  }
}

/**
 * Create or update GeoServer's PostGIS datastore.
 *
 * @param string $geoserver_workspace Name of GeoServer workspace.
 * @param string $geoserver_namespace Name of GeoServer workspace.
 */
function cartaro_configure_geoserver_postgis_datastore($geoserver_workspace, $geoserver_namespace) {

  if (empty($geoserver_workspace) || empty($geoserver_namespace)) {
    return;
  }

  $datastore = 'cartaro';
  $database = $GLOBALS['databases']['default']['default'];
  $database['port'] = empty($database['port']) ? '5432' : $database['port'];

  $content = array(
    'dataStore' => array(
      'name' => $datastore,
      'description' => 'Default PostGIS datastore of Cartaro.',
      'type' => 'PostGIS',
      'enabled' => TRUE,
      'workspace' => $geoserver_workspace,
      'connectionParameters' => array(
        'entry' => array(
          array('@key' => 'Connection timeout',   '$' => '20'),
          array('@key' => 'port',                 '$' => $database['port']),
          array('@key' => 'passwd',               '$' => $database['password']),
          array('@key' => 'dbtype',               '$' => 'postgis'),
          array('@key' => 'host',                 '$' => $database['host']),
          array('@key' => 'validate connections', '$' => 'false'),
          array('@key' => 'max connections',      '$' => '10'),
          array('@key' => 'database',             '$' => $database['database']),
          array('@key' => 'namespace',            '$' => $geoserver_namespace),
          array('@key' => 'schema',               '$' => 'public'),
          array('@key' => 'Loose bbox',           '$' => 'true'),
          array('@key' => 'Expose primary keys',  '$' => 'false'),
          array('@key' => 'fetch size',           '$' => '1000'),
          array('@key' => 'Max open prepared statements', '$' => '50'),
          array('@key' => 'preparedStatements',   '$' => 'false'),
          array('@key' => 'Estimated extends',    '$' => 'true'),
          array('@key' => 'user',                 '$' => $database['username']),
          array('@key' => 'min connections',      '$' => '1'),
          array('@key' => 'Primary key metadata table', '$' => 'public.geoserver_pk_metadata_table'),
        ),
      ),
    ),
  );

  // Try to update an existing datastore.
  $result = geoserver_put('rest/workspaces/' . $geoserver_workspace . '/datastores/' . $datastore . '.json', $content);

  if ($result->code == 404) {
    // Create datastore.
    $result = geoserver_post('rest/workspaces/' . $geoserver_workspace . '/datastores.json', $content);
  }

  if ($result->code == 200 || $result->code == 201) {
    variable_set('geoserver_postgis_datastore', $datastore);
  }
}