<?php
/**
 * @file
 * tpe_ct_territorio.feeds_importer_default.inc
 */

/**
 * Implements hook_feeds_importer_default().
 */
function tpe_ct_territorio_feeds_importer_default() {
  $export = array();

  $feeds_importer = new stdClass();
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'scheda_territorio';
  $feeds_importer->config = array(
    'name' => 'Scheda territorio',
    'description' => '',
    'fetcher' => array(
      'plugin_key' => 'FeedsFileFetcher',
      'config' => array(
        'allowed_extensions' => 'txt csv tsv xml opml html htm',
        'direct' => FALSE,
      ),
    ),
    'parser' => array(
      'plugin_key' => 'FeedsXPathParserXML',
      'config' => array(
        'sources' => array(
          'xpathparser:0' => 'title',
          'xpathparser:1' => '',
          'xpathparser:2' => 'body//value',
          'xpathparser:6' => 'field_ref_porto//nid',
          'xpathparser:7' => 'nid',
          'xpathparser:8' => 'uid',
          'xpathparser:9' => 'field_image//node_export_file_path',
          'xpathparser:10' => 'field_geofield//wkt',
          'xpathparser:11' => 'field_geofield//lat',
          'xpathparser:12' => 'field_geofield//lon',
          'xpathparser:13' => 'field_geofield//left',
          'xpathparser:14' => 'field_geofield//right',
          'xpathparser:15' => 'field_geofield//bottom',
          'xpathparser:16' => 'field_geofield//top',
          'xpathparser:17' => 'field_location//additional',
          'xpathparser:18' => 'field_location//city',
          'xpathparser:20' => 'field_location//country',
          'xpathparser:22' => 'field_location//name',
          'xpathparser:24' => 'field_location//postal_code',
          'xpathparser:25' => 'field_location//province',
          'xpathparser:26' => 'field_location//street',
          'xpathparser:28' => 'status',
        ),
        'rawXML' => array(
          'xpathparser:0' => 0,
          'xpathparser:1' => 0,
          'xpathparser:2' => 0,
          'xpathparser:6' => 0,
          'xpathparser:7' => 0,
          'xpathparser:8' => 0,
          'xpathparser:9' => 0,
          'xpathparser:10' => 0,
          'xpathparser:11' => 0,
          'xpathparser:12' => 0,
          'xpathparser:13' => 0,
          'xpathparser:14' => 0,
          'xpathparser:15' => 0,
          'xpathparser:16' => 0,
          'xpathparser:17' => 0,
          'xpathparser:18' => 0,
          'xpathparser:20' => 0,
          'xpathparser:22' => 0,
          'xpathparser:24' => 0,
          'xpathparser:25' => 0,
          'xpathparser:26' => 0,
          'xpathparser:28' => 0,
        ),
        'context' => '//node',
        'exp' => array(
          'errors' => 0,
          'debug' => array(
            'context' => 0,
            'xpathparser:0' => 0,
            'xpathparser:1' => 0,
            'xpathparser:2' => 0,
            'xpathparser:6' => 0,
            'xpathparser:7' => 0,
            'xpathparser:8' => 0,
            'xpathparser:9' => 0,
            'xpathparser:10' => 0,
            'xpathparser:11' => 0,
            'xpathparser:12' => 0,
            'xpathparser:13' => 0,
            'xpathparser:14' => 0,
            'xpathparser:15' => 0,
            'xpathparser:16' => 0,
            'xpathparser:17' => 0,
            'xpathparser:18' => 0,
            'xpathparser:20' => 0,
            'xpathparser:22' => 0,
            'xpathparser:24' => 0,
            'xpathparser:25' => 0,
            'xpathparser:26' => 0,
            'xpathparser:28' => 0,
          ),
        ),
        'allow_override' => 0,
      ),
    ),
    'processor' => array(
      'plugin_key' => 'FeedsNodeProcessor',
      'config' => array(
        'content_type' => 'scheda_territorio',
        'expire' => '-1',
        'author' => 0,
        'mappings' => array(
          0 => array(
            'source' => 'xpathparser:0',
            'target' => 'title',
            'unique' => 0,
          ),
          1 => array(
            'source' => 'xpathparser:1',
            'target' => 'language',
            'unique' => FALSE,
          ),
          2 => array(
            'source' => 'xpathparser:2',
            'target' => 'body',
            'unique' => FALSE,
          ),
          3 => array(
            'source' => 'xpathparser:6',
            'target' => 'field_ref_porto:guid',
            'unique' => FALSE,
          ),
          4 => array(
            'source' => 'xpathparser:7',
            'target' => 'guid',
            'unique' => 1,
          ),
          5 => array(
            'source' => 'xpathparser:8',
            'target' => 'uid',
            'unique' => FALSE,
          ),
          6 => array(
            'source' => 'xpathparser:9',
            'target' => 'field_immagine',
            'unique' => FALSE,
          ),
          7 => array(
            'source' => 'xpathparser:10',
            'target' => 'field_geofield:wkt',
            'unique' => FALSE,
          ),
          8 => array(
            'source' => 'xpathparser:11',
            'target' => 'field_geofield:lat',
            'unique' => FALSE,
          ),
          9 => array(
            'source' => 'xpathparser:12',
            'target' => 'field_geofield:lon',
            'unique' => FALSE,
          ),
          10 => array(
            'source' => 'xpathparser:13',
            'target' => 'field_geofield:left',
            'unique' => FALSE,
          ),
          11 => array(
            'source' => 'xpathparser:14',
            'target' => 'field_geofield:right',
            'unique' => FALSE,
          ),
          12 => array(
            'source' => 'xpathparser:15',
            'target' => 'field_geofield:bottom',
            'unique' => FALSE,
          ),
          13 => array(
            'source' => 'xpathparser:16',
            'target' => 'field_geofield:top',
            'unique' => FALSE,
          ),
          14 => array(
            'source' => 'xpathparser:17',
            'target' => 'field_location:additional',
            'unique' => FALSE,
          ),
          15 => array(
            'source' => 'xpathparser:18',
            'target' => 'field_location:city',
            'unique' => FALSE,
          ),
          16 => array(
            'source' => 'xpathparser:20',
            'target' => 'field_location:country',
            'unique' => FALSE,
          ),
          17 => array(
            'source' => 'xpathparser:22',
            'target' => 'field_location:name',
            'unique' => FALSE,
          ),
          18 => array(
            'source' => 'xpathparser:24',
            'target' => 'field_location:postal_code',
            'unique' => FALSE,
          ),
          19 => array(
            'source' => 'xpathparser:25',
            'target' => 'field_location:province',
            'unique' => FALSE,
          ),
          20 => array(
            'source' => 'xpathparser:26',
            'target' => 'field_location:street',
            'unique' => FALSE,
          ),
          21 => array(
            'source' => 'xpathparser:28',
            'target' => 'status',
            'unique' => FALSE,
          ),
        ),
        'update_existing' => '0',
        'input_format' => 'plain_text',
      ),
    ),
    'content_type' => '',
    'update' => 0,
    'import_period' => '-1',
    'expire_period' => 3600,
    'import_on_create' => 1,
    'process_in_background' => 0,
  );
  $export['scheda_territorio'] = $feeds_importer;

  return $export;
}
