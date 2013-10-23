<?php
/**
 * @file
 * tpe_pagine_custom.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_pages().
 */
function tpe_pagine_custom_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'aggregare';
  $page->task = 'page';
  $page->admin_title = 'Aggregare';
  $page->admin_description = '';
  $page->path = 'aggregare';
  $page->access = array();
  $page->menu = array();
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_aggregare_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'aggregare';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Aggregare',
    'no_blocks' => 0,
    'pipeline' => 'ipe',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
  );
  $display = new panels_display();
  $display->layout = 'three_50_25_25';
  $display->layout_settings = array();
  $display->panel_settings = array();
  $display->cache = array();
  $display->title = '';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-1';
    $pane->panel = 'three_50_25_25_top';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'Aggregare contenuti',
      'title' => '',
      'body' => '<p>[[{"type":"media","view_mode":"media_large","fid":"243","attributes":{"alt":"","class":"media-image image-style-large image-style-large image-style-large","height":"310","width":"480"}}]]<br />Un contenitore unico per tutti i contenuti di interesse per il bacino dell\'alto e medio tirreno. Aggrega e raccoglie tutti i contenuti infomativi podotti dalle redazioni coinvolte nel progetto TPE.<br />Attualmente le informazioni sono aggregate in schede contenuto così distribuite:</p><table border="0"><tbody><tr><td>Schede porti</td><td>79</td></tr><tr><td>Schede gestori porti</td><td>34</td></tr><tr><td>Schede prodotti tipici</td><td>70</td></tr><tr><td>Schede itineari</td><td>37</td></tr><tr><td>Schede territori</td><td>13</td></tr><tr><td>Schede operatori economici</td><td>313</td></tr></tbody></table><p>Le schede sono articolate secondo i campi informativi in fase di analisi per ciascun ambito di interesse</p>',
      'format' => 'full_html',
      'substitute' => TRUE,
    );
    $pane->cache = array();
    $pane->style = array();
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $display->content['new-1'] = $pane;
    $display->panels['three_50_25_25_top'][0] = 'new-1';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-1';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['aggregare'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'developers';
  $page->task = 'page';
  $page->admin_title = 'Developers';
  $page->admin_description = '';
  $page->path = 'developers';
  $page->access = array();
  $page->menu = array();
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_developers_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'developers';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Developers',
    'no_blocks' => 0,
    'pipeline' => 'ipe',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
  );
  $display = new panels_display();
  $display->layout = 'three_3x33';
  $display->layout_settings = array();
  $display->panel_settings = array();
  $display->cache = array();
  $display->title = '';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-2';
    $pane->panel = 'three_33_top';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'Developers',
      'title' => 'Developers',
      'body' => '<p>Per interagire con le API è possibile seguire gli esempi qui riportati <br />Il webservice presente sull\'endpoint http://www.sardaignetpe.eu/api risponde a chiamate di tipo REST. <br />Il modello della chiamata è il seguente: <br /><a style="margin: 0px; padding: 0px; border: 0px; outline: 0px; font-size: 13px; vertical-align: baseline; background-color: #ecf4f8; line-height: 20px; color: #4488aa; font-family: Arial, Helvetica, sans-serif;" title="http://&lt;url&gt;/&lt;identifier&gt;.&lt;format&gt;" href="http://%3Curl%3E/%3Cidentifier%3E.%3Cformat%3E">http://&lt;url&gt;/&lt;identifier&gt;.&lt;format&gt;</a><br />I formati supportati sono: <br />bencode <br />json <br />php <br />rss <br />xml <br />yaml <br />Sono disponibili le risorse:</p><p>- "node" che corrisponde all\'entità contenuto presente nel sistema. Ogni contenuto, sia esso scheda porto, scheda prodotto, operatore economico possono essere chiamati attraverso l\'alias <a href="http://www.sardegnatpe.eu/api/node">/node</a>&nbsp;<br />- "taxonomy_term" che corrisponde ai termini delle tassonomie contenute nel sistema. possono essere chiamate usando l\'alias <a href="http://www.sardegnatpe.eu/api/taxonomy_term">/taxonomy_term</a><br />- "taxonomy_vocabulary" che corrisponde ai vocabolari contenuti nel sistema. Possono essere chiamati usando l\'alias <a href="http://www.sardegnatpe.eu/api/taxonomy_vocabulary">/taxonomy_vocabulary</a><br /><br />Per maggiori informazioni si veda anche: http://drupanium.org/api http://drupal.org/node/1070066</p>',
      'format' => 'full_html',
      'substitute' => TRUE,
    );
    $pane->cache = array();
    $pane->style = array();
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $display->content['new-2'] = $pane;
    $display->panels['three_33_top'][0] = 'new-2';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-2';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['developers'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'distribuire';
  $page->task = 'page';
  $page->admin_title = 'Distribuire';
  $page->admin_description = '';
  $page->path = 'distribuire';
  $page->access = array();
  $page->menu = array();
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_distribuire_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'distribuire';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 0,
    'pipeline' => 'ipe',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
  );
  $display = new panels_display();
  $display->layout = 'three_3x33';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'three_33_top' => NULL,
      'three_33_first' => NULL,
      'three_33_second' => NULL,
      'three_33_third' => NULL,
      'three_33_bottom' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-3';
    $pane->panel = 'three_33_first';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'Geoserver',
      'title' => 'Geoserver',
      'body' => '<p>[[{"type":"media","view_mode":"media_large","fid":"249","attributes":{"alt":"","class":"media-image image-style-large","height":"112","width":"353"}}]]</p><p>GeoServer è un server open source scritto in Java che permette agli utenti di condividere e modificare i dati geospaziali. Progettato per l\'interoperabilità, che pubblica i dati da qualsiasi fonte importante di dati spaziali utilizzando standard aperti. Essendo un progetto guidato dalla comunità, GeoServer è sviluppato, testato e supportato da un gruppo eterogeneo di individui e organizzazioni di tutto il mondo. GeoServer è l\'implementazione di riferimento di Open Geospatial Consortium (OGC), servizio Web Feature (WFS) e Web Coverage Service (WCS) standard, così come un alto rendimento certificato e conforme Web Map Service (WMS). GeoServer costituisce una componente fondamentale del Web geospaziale</p>',
      'format' => 'full_html',
      'substitute' => TRUE,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $display->content['new-3'] = $pane;
    $display->panels['three_33_first'][0] = 'new-3';
    $pane = new stdClass();
    $pane->pid = 'new-4';
    $pane->panel = 'three_33_second';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'api',
      'title' => 'Api',
      'body' => '<p><a href="/developers">[[{"type":"media","view_mode":"media_original","fid":"250","attributes":{"alt":"","class":"media-image image-style-none image-style-none","height":"144","width":"336"}}]]</a><br />Application Programming Interface API (Interfaccia di Programmazione di un\'Applicazione) sono un insieme di tecniche che consentono ad applicazioni software di colloquiare e interagire tra loro. In modo più rigoroso, le API definiscono come i programmatori possono utilizzare una particolare caratteristica di un sistema software all’interno delle proprie applicazioni.</p>',
      'format' => 'full_html',
      'substitute' => TRUE,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $display->content['new-4'] = $pane;
    $display->panels['three_33_second'][0] = 'new-4';
    $pane = new stdClass();
    $pane->pid = 'new-5';
    $pane->panel = 'three_33_third';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'Cartaro',
      'title' => 'Cartaro',
      'body' => '<p>[[{"type":"media","view_mode":"media_preview","fid":"251","attributes":{"alt":"","class":"media-image image-style-square-thumbnail image-style-square-thumbnail","height":"180","width":"180"}}]]<br />L\'applicativo Engine Sailing Tirreno è basato su <a href="http://www.cartaro.org">Cartaro</a>,&nbsp; piattaforma web per la gestione di dati geografici che porta la potenza dei migliori componenti open source geospaziali in un sistema di gestione dei contenuti. Con Cartaro si è in gradogestire informazioni conformi agli standard OGC con non più di un paio di clic. I componenti utilizzati in geospaziali Cartaro sono <a href="http://postgis.refractions.net/">PostGIS</a>, <a href="http://geoserver.org/display/GEOS/Welcome">GeoServer</a>, <a href="http://geowebcache.org/">GeoWebCache</a> e <a href="http://openlayers.org/">OpenLayers</a>. la soluzione individuata risulta essere vincente in tutti quei casi nei quali è necessario gestire informazioni di tipo redazionale ed allo stesso tempo dati geospaziali.</p>',
      'format' => 'full_html',
      'substitute' => TRUE,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $display->content['new-5'] = $pane;
    $display->panels['three_33_third'][0] = 'new-5';
    $pane = new stdClass();
    $pane->pid = 'new-6';
    $pane->panel = 'three_33_top';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'Distribuire',
      'title' => '',
      'body' => '<p>L\'Engine di TPE mette a disposizione dei partner del progetto, attuali e futuri, tutte le informazioni geografiche relative ai contenuti trattati. L\'approccio tecnologico utilizzato prevedere che l\'engine funga da HUB di applicazioni geografiche remote. E\' dotato di una tecnologia a "PLUG" per la condivisione delle informazioni informazioni geografiche da e per altri sistemi. In questo senso costituisce il centro di un sistema informativo geografico federato.<br />E\' disponibile all\'indirizzo <a href="http://redazione.sardaignetpe.eu/geoserver/web/">http://redazione.sardaignetpe.eu/geoserver/web/</a>&nbsp;il geoserver che espone i servizi wfs e wms.<br />Le fonti attuali dei dati geografici sono rappresentate da:</p><p>SITR Regione Sardegna http://www.sardegnageoportale.it/<br />Cartografia Regione Liguria http://www.cartografia.regione.liguria.it/ <br />GEOscopio WNS Regione Toscana http://www.regione.toscana.it/regione/export/RT/sito-RT/Contenuti/sezioni/territorio/cartografia/rubriche/visualizza_asset.html_236554143.html <br />Geoportale Nazionale Italiano, Ministero dell\'ambiente http://www.pcn.minambiente.it/PCNDYN/catalogowfs.jsp?lan=it <br />Geoportale Francia http://www.geoportail.gouv.fr/</p>',
      'format' => 'full_html',
      'substitute' => TRUE,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $display->content['new-6'] = $pane;
    $display->panels['three_33_top'][0] = 'new-6';
    $pane = new stdClass();
    $pane->pid = 'new-7';
    $pane->panel = 'three_33_top';
    $pane->type = 'openlayers_map';
    $pane->subtype = 'clone_of_tpe_ports';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $display->content['new-7'] = $pane;
    $display->panels['three_33_top'][1] = 'new-7';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-6';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['distribuire'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'ecommerce';
  $page->task = 'page';
  $page->admin_title = 'ecommerce';
  $page->admin_description = '';
  $page->path = 'ecommerce';
  $page->access = array();
  $page->menu = array();
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_ecommerce_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'ecommerce';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Ecommerce',
    'no_blocks' => 1,
    'pipeline' => 'ipe',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
  );
  $display = new panels_display();
  $display->layout = 'three_3x33';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'three_33_top' => NULL,
      'three_33_first' => NULL,
      'three_33_second' => NULL,
      'three_33_third' => NULL,
      'three_33_bottom' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-8';
    $pane->panel = 'three_33_first';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'Obiettivi',
      'title' => 'Obiettivi',
      'body' => '<ul><li>Analisi, progettazione e realizzazione di una struttura web per l’erogazione di servizi ecommerce (qualificati)&nbsp;</li><li>Permettere agli operatori economici di fornire prodotti e servizi attraverso una piattaforma in rete&nbsp;</li><li>Introdurre con TPE una leva di marketing territoriale rivolto ai prodotti locali</li></ul>',
      'format' => 'full_html',
      'substitute' => TRUE,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $display->content['new-8'] = $pane;
    $display->panels['three_33_first'][0] = 'new-8';
    $pane = new stdClass();
    $pane->pid = 'new-9';
    $pane->panel = 'three_33_second';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'Esigenze',
      'title' => 'Esigenze',
      'body' => '<ul><li>Varietà di operatori coinvolti, in differenti ambiti territoriali&nbsp;</li><li>Qualificazione e definizione degli attori coinvolti (paniere)&nbsp;</li><li>Avvio delle attività di coinvolgimento in tempi diversi&nbsp;</li><li>Diversi soggetti istituzionali che possono intervenire nelle attività di coinvolgimento e promozione</li></ul>',
      'format' => 'full_html',
      'substitute' => TRUE,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $display->content['new-9'] = $pane;
    $display->panels['three_33_second'][0] = 'new-9';
    $pane = new stdClass();
    $pane->pid = 'new-10';
    $pane->panel = 'three_33_third';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'Modello',
      'title' => 'Modello sostenibile per TPE',
      'body' => '<ul><li>Non è necessario individuare un soggetto unico per il coordinamento delle attività dei vendor&nbsp;</li><li>Condizioni di gestione personalizzate per STORE&nbsp;</li><li>Tempi di avvio diversificati&nbsp;</li><li>Sostenibilità economica a lungo termine perché legata alla rendita reale</li></ul>',
      'format' => 'full_html',
      'substitute' => TRUE,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $display->content['new-10'] = $pane;
    $display->panels['three_33_third'][0] = 'new-10';
    $pane = new stdClass();
    $pane->pid = 'new-11';
    $pane->panel = 'three_33_top';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'Strategia',
      'title' => 'Strategia',
      'body' => '<p>Definire un sistema per la promozione e la commercializzazione di prodotti e servizi da parte degli operatori presenti nei territori coinvolti dal progetto TPE</p><p>Attori:</p><ul><li>Operatori economici (offerta)&nbsp;</li><li>Attori istituzionali (governance)&nbsp;</li><li>Turisti (domanda)</li></ul>',
      'format' => 'full_html',
      'substitute' => TRUE,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $display->content['new-11'] = $pane;
    $display->panels['three_33_top'][0] = 'new-11';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['ecommerce'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'generare_mappe';
  $page->task = 'page';
  $page->admin_title = 'Generare mappe';
  $page->admin_description = '';
  $page->path = 'generare-mappe';
  $page->access = array();
  $page->menu = array();
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_generare_mappe_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'generare_mappe';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Generare mappe',
    'no_blocks' => 0,
    'pipeline' => 'ipe',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
  );
  $display = new panels_display();
  $display->layout = 'three_3x33';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'three_33_top' => NULL,
      'three_33_first' => NULL,
      'three_33_second' => NULL,
      'three_33_third' => NULL,
      'three_33_bottom' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-12';
    $pane->panel = 'three_33_top';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'Generatore di mappe',
      'title' => '',
      'body' => '<p>Engine Sailing Tirreno permette di generare mappe tematiche utilizzando i dati inseriti nel sistema, integrandoli con quelli presenti in altri sistemi. Sono disponibili alcune mappe preconfezionate sulla base dei dati informativi presenti nell\'aggregatore. E\' possibile generare nuove mappe sulla base delle esigenze dei singoli partner di TPE.<br />Il sistema permette di includere in altri siti le mappe attraverso differenti tecnologie:<br />- WFS geoserver&nbsp;<br />- WMS geoserver<br />- iframe code</p>',
      'format' => 'full_html',
      'substitute' => TRUE,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $display->content['new-12'] = $pane;
    $display->panels['three_33_top'][0] = 'new-12';
    $pane = new stdClass();
    $pane->pid = 'new-13';
    $pane->panel = 'three_33_top';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'Mappa di mapbox',
      'title' => '',
      'body' => '<iframe width="660" height="500" frameBorder=\'0\' src=\'http://a.tiles.mapbox.com/v3/caprowsky.TPE.html#7/42.033/9.7422\'></iframe>',
      'format' => 'full_html',
      'substitute' => TRUE,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $display->content['new-13'] = $pane;
    $display->panels['three_33_top'][1] = 'new-13';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['generare_mappe'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'home';
  $page->task = 'page';
  $page->admin_title = 'Home';
  $page->admin_description = '';
  $page->path = 'home';
  $page->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'role',
        'settings' => array(
          'rids' => array(
            0 => 1,
            1 => 4,
          ),
        ),
        'context' => 'logged-in-user',
        'not' => FALSE,
      ),
    ),
    'logic' => 'and',
  );
  $page->menu = array();
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_home_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'home';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Home page',
    'no_blocks' => 1,
    'pipeline' => 'ipe',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
  );
  $display = new panels_display();
  $display->layout = 'three_3x33';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'three_33_top' => NULL,
      'three_33_first' => NULL,
      'three_33_second' => NULL,
      'three_33_third' => NULL,
      'three_33_bottom' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-14';
    $pane->panel = 'three_33_first';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'Aggregare',
      'title' => 'Aggregare',
      'body' => '<p><a href="/aggregare">[[{"type":"media","view_mode":"media_preview","fid":"243","attributes":{"alt":"","class":"media-image image-style-square-thumbnail image-style-square-thumbnail","height":"180","width":"180"}}]]</a><br />Un contenitore unico per tutti i contenuti di interesse per il bacino dell\'alto e medio tirreno</p>',
      'format' => 'full_html',
      'substitute' => TRUE,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $display->content['new-14'] = $pane;
    $display->panels['three_33_first'][0] = 'new-14';
    $pane = new stdClass();
    $pane->pid = 'new-15';
    $pane->panel = 'three_33_first';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'Il progetto',
      'title' => 'Il progetto',
      'body' => '<p><a href="il-progetto">[[{"type":"media","view_mode":"media_preview","fid":"252","attributes":{"alt":"","class":"media-image","height":"180","width":"180"}}]]<br /></a>Il progetto TPE  - Rete dei Porti Turistici per la sostenibilità ambientale nasce all\'interno del più vasto progetto strategico strutturato nell’ambito del “Programma Operativo di Cooperazione Trasfrontaliera Italia-Francia – Marittimo 2007- 2013”.</p>',
      'format' => 'full_html',
      'substitute' => TRUE,
    );
    $pane->cache = array();
    $pane->style = array();
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $display->content['new-15'] = $pane;
    $display->panels['three_33_first'][1] = 'new-15';
    $pane = new stdClass();
    $pane->pid = 'new-16';
    $pane->panel = 'three_33_second';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'Distribuire',
      'title' => 'Distribuire',
      'body' => '<p><a href="/distribuire">[[{"type":"media","view_mode":"media_preview","fid":"244","attributes":{"alt":"","class":"media-image image-style-square-thumbnail image-style-square-thumbnail image-style-square-thumbnail","height":"180","width":"180"}}]]</a><br />Un strumento per la centralizzazione, riorganizazione e ridistribuzione dei contenuti di TPE.</p>',
      'format' => 'full_html',
      'substitute' => TRUE,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $display->content['new-16'] = $pane;
    $display->panels['three_33_second'][0] = 'new-16';
    $pane = new stdClass();
    $pane->pid = 'new-17';
    $pane->panel = 'three_33_second';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'Ecommerce',
      'title' => 'Ecommerce',
      'body' => '<p><a href="ecommerce">[[{"type":"media","view_mode":"media_preview","fid":"253","attributes":{"alt":"","class":"media-image image-style-square-thumbnail","height":"180","width":"180"}}]]<br /></a><span style="font-family: Arial;">Il sistema permette di definire una modalità per la promozione e la commercializzazione di prodotti e servizi da parte degli operatori presenti nei territori coinvolti dal progetto TPE.</span></p>',
      'format' => 'full_html',
      'substitute' => TRUE,
    );
    $pane->cache = array();
    $pane->style = array();
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $display->content['new-17'] = $pane;
    $display->panels['three_33_second'][1] = 'new-17';
    $pane = new stdClass();
    $pane->pid = 'new-18';
    $pane->panel = 'three_33_third';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'Generatore',
      'title' => 'Generare mappe',
      'body' => '<p><a href="/generare-mappe">[[{"type":"media","view_mode":"media_preview","fid":"247","attributes":{"alt":"","class":"media-image image-style-square-thumbnail image-style-square-thumbnail","height":"180","width":"180"}}]]</a><br />Un servizio per la generazione di mappe tematiche costituite&nbsp;da diversi layers geografici informativi.</p>',
      'format' => 'full_html',
      'substitute' => TRUE,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $display->content['new-18'] = $pane;
    $display->panels['three_33_third'][0] = 'new-18';
    $pane = new stdClass();
    $pane->pid = 'new-19';
    $pane->panel = 'three_33_third';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'Condividere',
      'title' => 'Condividere',
      'body' => '<p>[[{"type":"media","view_mode":"media_preview","fid":"254","attributes":{"alt":"","class":"media-image","height":"180","width":"180"}}]]<br />Attraverso la funzionalità di creazione e condivisione di itinerari creati dagli utenti, il sistema vuole costruire una community di esperienza turistica</p>',
      'format' => 'full_html',
      'substitute' => TRUE,
    );
    $pane->cache = array();
    $pane->style = array();
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $display->content['new-19'] = $pane;
    $display->panels['three_33_third'][1] = 'new-19';
    $pane = new stdClass();
    $pane->pid = 'new-20';
    $pane->panel = 'three_33_top';
    $pane->type = 'views';
    $pane->subtype = 'slideshow';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_pager_settings' => 0,
      'use_pager' => 1,
      'nodes_per_page' => '10',
      'pager_id' => '0',
      'offset' => '0',
      'more_link' => 0,
      'feed_icons' => 0,
      'panel_args' => 0,
      'link_to_view' => 0,
      'args' => '',
      'url' => '',
      'display' => 'block_1',
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $display->content['new-20'] = $pane;
    $display->panels['three_33_top'][0] = 'new-20';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['home'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'il_progetto';
  $page->task = 'page';
  $page->admin_title = 'Il progetto';
  $page->admin_description = '';
  $page->path = 'il-progetto';
  $page->access = array();
  $page->menu = array();
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_il_progetto_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'il_progetto';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Il pannello',
    'no_blocks' => 0,
    'pipeline' => 'ipe',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
  );
  $display = new panels_display();
  $display->layout = 'three_3x33';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'three_33_top' => NULL,
      'three_33_first' => NULL,
      'three_33_second' => NULL,
      'three_33_third' => NULL,
      'three_33_bottom' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-21';
    $pane->panel = 'three_33_top';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'Il progetto',
      'title' => '',
      'body' => '<p>L\'applicazione Engine Sailing Tirreno nasce nell’ambito di un più vasto progetto strategico strutturato nell’ambito del “Programma Operativo di Cooperazione Trasfrontaliera Italia-Francia – Marittimo 2007- 2013” e denominato “TPE - Rete dei Porti Turistici per la sostenibilità ambientale”, in cui l’Assessorato Turismo, Artigianato e Commercio della Regione sardegna è partner nei Sottoprogetti SA “Sostenibilità ambientale e nautica sociale” ed SB “Sistema Informativo”. <br />Nello specifico, l’intervento si inquadra nell’ambito delle attività inerenti il Sottoprogetto SB “Sistema Informativo”, focalizzandosi nell’erogazione di servizi professionali e specialistici in ambito ICT, orientati a garantire la realizzazione e la governance di un sistema integrato dei porti turistici dell’area regionale, volta in particolare al raggiungimento di elevati standard ambientali uniformi e di un’elevata qualità dell’offerta turistica sull’insieme del territorio. <br />Gli obiettivi che si intendono conseguire con lo sviluppo della piattaforma tecnologica sono:</p><ul><li>governance del sistema integrato dei porti turistici&nbsp;</li><li>elevati standard ambientali&nbsp;</li><li>elevata qualità dell\'offerta turistica</li></ul><p>Lo sviluppo di una soluzione tecnologica complessiva a supporto del progetto (piattaforma tecnologica) è finalizzata a facilitare il raggiungimento di tali obiettivi e soddisfare le esigenze dei destinatari dell\'intervento, identificati in:</p><ul><li>diportisti e turisti&nbsp;</li><li>fornitori di servizi (nell\'area dei porti e nell\'entroterra)&nbsp;</li><li>popolazione residente</li></ul>',
      'format' => 'full_html',
      'substitute' => TRUE,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $display->content['new-21'] = $pane;
    $display->panels['three_33_top'][0] = 'new-21';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-21';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['il_progetto'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'scenari';
  $page->task = 'page';
  $page->admin_title = 'Scenari';
  $page->admin_description = '';
  $page->path = 'scenari-utilizzo';
  $page->access = array();
  $page->menu = array();
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_scenari_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'scenari';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Scenari utilizzo',
    'no_blocks' => 1,
    'pipeline' => 'ipe',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
  );
  $display = new panels_display();
  $display->layout = 'three_3x33';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'three_33_top' => NULL,
      'three_33_first' => NULL,
      'three_33_second' => NULL,
      'three_33_third' => NULL,
      'three_33_bottom' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->content = array();
  $display->panels = array();
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['scenari'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'virtual_organisation';
  $page->task = 'page';
  $page->admin_title = 'Virtual Organisation';
  $page->admin_description = 'Pagina per la virtual organization';
  $page->path = 'virtual_organization';
  $page->access = array();
  $page->menu = array();
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_virtual_organisation_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'virtual_organisation';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
  );
  $display = new panels_display();
  $display->layout = 'one';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'one_main' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'Virtual Organisation';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-22';
    $pane->panel = 'one_main';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => '',
      'title' => '',
      'body' => '<p>Gentile diportista, la Provincia di Grosseto è lieta di dedicare questa pagina alle aziende che, grazie al progetto di cooperazione transfrontaliera Italia/Francia “Marittimo”, hanno dato luogo ad una Virtual Organisation, rete informale di imprese per migliorare la qualità della propria offerta di prodotti e servizi al turista nautico nonchè la propria relazione con questa particolare tipologia di clientela.</p><p>Per completezza alleghiamo l’elenco di tutte le aziende aderenti alla Virtual Organisation. Se fosse interessato a ricevere ulteriori suggerimenti e informazioni, può contattare direttamente le aziende oppure il Consorzio Grosseto Export, soggetto animatore della rete.</p>',
      'format' => 'full_html',
      'substitute' => TRUE,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $display->content['new-22'] = $pane;
    $display->panels['one_main'][0] = 'new-22';
    $pane = new stdClass();
    $pane->pid = 'new-23';
    $pane->panel = 'one_main';
    $pane->type = 'views';
    $pane->subtype = 'virtual_organization';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_pager_settings' => 0,
      'use_pager' => 0,
      'nodes_per_page' => '0',
      'pager_id' => '0',
      'offset' => '0',
      'more_link' => 0,
      'feed_icons' => 0,
      'panel_args' => 0,
      'link_to_view' => 0,
      'args' => '',
      'url' => '',
      'display' => 'block_1',
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $display->content['new-23'] = $pane;
    $display->panels['one_main'][1] = 'new-23';
    $pane = new stdClass();
    $pane->pid = 'new-24';
    $pane->panel = 'one_main';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => '',
      'title' => '',
      'body' => '<p><strong>Grosseto Export</strong><br /> Viale G. Mameli 17 – 58100 Grosseto<br /> Tel.&nbsp;<a href="tel:%2B39%200564%20415392" target="_blank">+39 0564 415392</a>&nbsp;- Telefax&nbsp;<a href="tel:%2B39%200564%20415700" target="_blank">+39 0564 415700</a><br /> <a href="http://www.grossetoexport.it/" target="_blank">www.grossetoexport.it</a>&nbsp;-&nbsp;<a href="mailto:info@grossetoexport.it" target="_blank">info@grossetoexport.it</a></p>',
      'format' => 'full_html',
      'substitute' => TRUE,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $display->content['new-24'] = $pane;
    $display->panels['one_main'][2] = 'new-24';
    $pane = new stdClass();
    $pane->pid = 'new-25';
    $pane->panel = 'one_main';
    $pane->type = 'views';
    $pane->subtype = 'virtual_organization';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_pager_settings' => 0,
      'use_pager' => 1,
      'nodes_per_page' => '10',
      'pager_id' => '0',
      'offset' => '0',
      'more_link' => 0,
      'feed_icons' => 0,
      'panel_args' => 0,
      'link_to_view' => 0,
      'args' => '',
      'url' => '',
      'display' => 'block',
      'override_title' => 1,
      'override_title_text' => 'Aderenti:',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 3;
    $pane->locks = array();
    $display->content['new-25'] = $pane;
    $display->panels['one_main'][3] = 'new-25';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-22';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['virtual_organisation'] = $page;

  return $pages;

}
