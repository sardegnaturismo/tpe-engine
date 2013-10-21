<?php
define("MAPS_HOST", "maps.google.com");
define("KEY", "AIzaSyD8kD0Xx_OSIClOwYik35uge6SG7cQkwI0");
module_load_include('inc', 'geophp', '/geoPHP/geoPHP');

function _convert_language_to_und($data){
  $node = variable_get('current_node', 0);
  if(isset($data[''.$node['language']])){
  $ret=Array('und'=> $data[''.$node['language']]);
  }else{$ret=$data;}
  return $ret;  
}

function _force_language($data){
  $lang=$data['params']['lang'];
  //$node = variable_get('current_node', 0);
  if(isset($data['und'])){
  $ret=Array($lang => $data['und']);
  }else{$ret=$data;}
  return $ret;  
}

function _join_fields($data){
  $node = variable_get('current_node', 0);
  $fields=$data['params']['fields'];
  unset($data['params']);
  $value='';
  foreach($fields as $field){
     if(empty($node[''.$field][''.$node['language']][0]['value'])) continue;
     $fieldval=$node[''.$field][''.$node['language']][0]['value'];
     if(strlen($fieldval)>0){
     $value.=$fieldval."\n";
     }     
  }
  
  $data[''.$node['language']][0]['value']=$value;
  
  return $data;
}

function _fill_empty_format($data){
  $node = variable_get('current_node', 0);
   if(isset($data[''.$node->language][0]['format'])){
                if(strlen($data[''.$node->language][0]['format'])<1){
                $data[''.$node->language][0]['format']='filtered_html';
                }
              }
  return $data;
}

function _force_filtered_html_format($data){
  $node = variable_get('current_node', 0);
   if(isset($data[''.$node['language']][0]['format'])){
                $data[''.$node['language']][0]['format']='filtered_html';                
              }
  return $data;
}

function _location_reverse_geocoding($data){
  $location=&$data['it'][0];
  if(intval($location['latitude'])== 0 && intval($location['longitude'])==0){
  $address = $location['street']. " ".$location['city'];
    $address.=" (" . $location['province'] . ") ".$location['country'];
    $geo = doGeocode($address);
    if ($geo != false) {
      $location['source']=1;
      $location['latitude']= number_format($geo['lat'],6);
      $location['longitude']=number_format($geo['long'],6);
      }
      }
  return $data;
  
}

function doGeocode($address){

$delay=10000;
$base_url = "http://" . MAPS_HOST . "/maps/geo?output=xml". "&key=" . KEY."&sensor=false";

    $request_url = $base_url . "&q=" . urlencode($address);
    
    $r_default_context = stream_context_get_default ( array
                    ('http' => array(
                        'proxy' => "proxy.sardegnait.csr:80",
                        'request_fulluri' => True,
                    ),
                )
            );
        libxml_set_streams_context($r_default_context); 
    
    $xml = simplexml_load_file($request_url);

    $status = $xml->Response->Status->code;
    if (strcmp($status, "200") == 0) {
      // Successful geocode
      $coordinates = $xml->Response->Placemark->Point->coordinates;
      $coordinatesSplit = explode(",", $coordinates);
      // Format: Longitude, Latitude, Altitude
      $lat = $coordinatesSplit[1];
      $lng = $coordinatesSplit[0];
      
      return Array("lat"=>$lat,"long"=>$lng);
      
    } else if (strcmp($status, "620") == 0) {
      $retry=variable_get('geocoding_retry', 0);
      usleep($delay);
      if($retry<10){
      variable_set('geocoding_retry', ++$retry);  
      return doGeocode($address);}else{variable_set('geocoding_retry',0);return false;}
    } 
    
    
    return false;
  
}

function doOpenStreetmapReverseGeocode($lat,$long){
  $delay=10000;

  $request_url = "http://nominatim.openstreetmap.org/reverse?format=json&lat=$lat&lon=$long&addressdetails=1&zoom=18";
    
  $r_default_context = stream_context_get_default ( array
                    ('http' => array(
                        'proxy' => "proxy.sardegnait.csr:80",
                        'request_fulluri' => True,
                    ),
                )
            );
        libxml_set_streams_context($r_default_context); 
    
    //$xml = simplexml_load_file($request_url);
    $json=file_get_contents($request_url); 
    $result=json_decode($json, false);    
    $result=$result->address;
    //$status = $result->Status->code;
    $city='';
    if(!empty($result->hamlet)){$city.=$result->hamlet;}
    if(!empty($result->town)){$city.=$result->town;}
    if(!empty($result->city)){$city.=$result->city;}
    
    $address=Array(
      'road' => (empty($result->road))?'':$result->road,
      'additional'=> (empty($result->suburb))?'':$result->suburb,
      'city'=> $city,      
      'province_code'=> (empty($result->county))?'':$result->county,
      'country'=>$result->country,      
      'country_code'=>$result->country_code,
      'postal_code'=>(empty($result->postal_code))?'':$result->postal_code,
    );
    
    return $address;
}
/*
function doReverseGeocode($lat,$long){
$delay=10000;

$base_url = "http://" . MAPS_HOST . "/maps/geo?output=xml" . "&key=" . KEY;
    $request_url = $base_url . "&latlng=$lat,$long";
    //$request_url =  "http://maps.google.com/maps/api/geocode/xml?latlng=$lat,$long&sensor=false";  
    //   $request_url =  "http://maps.google.com/maps/geo?output=json&latlng=$lat,$long&sensor=false&key=" . KEY;
    $r_default_context = stream_context_get_default ( array
                    ('http' => array(
                        'proxy' => "proxy.sardegnait.csr:80",
                        'request_fulluri' => True,
                    ),
                )
            );
        libxml_set_streams_context($r_default_context); 
    
    $json = simplexml_load_file($request_url);
    //$json=file_get_contents($request_url);    
    $result=json_decode($json, false);    
    
    $status = $result->Status->code;
    if (strcmp($status, "200") == 0) {
    
    $result0=$result->results[0]->address_components;
    foreach($result0 as $item){
      $address[''.$item->types[0]]=$item->long_name;
      $address[''.$item->types[0]."_short"]=$item->short_name;      
    }  
    
    return $address;
      
    } else if (strcmp($status, "602") == 0) {
      usleep($delay);
      
      return doReverseGeocode($lat,$long);
    } 
    
    return false;
    //$address=Array('city'=>$result1[1]->long_name,'cap'=>$result1[5]->long_name, 'province'=>$result1[2]->long_name, 'province_short'=>$result1[2]->short_name,'region' => $result1[3]->long_name , 'country'=>$result1[4]->long_name, 'country_short' => $result1[4]->short_name );
      
  
}
*/
function isValidLocation(&$data){
    $value=getInnerArray($data);
    if(!empty($value['latitude'])){
    if(intval($value['latitude'])>0 && intval($value['longitude'])>0)return true;
    }
    
    if(!empty($value['lat'])){
    if(intval($value['lat'])>0 && intval($value['lon'])>0){
      $langs=array_keys($data);
      $data[$langs[0]][0]['latitude']=$value['lat'];
      $data[$langs[0]][0]['longitude']=$value['lon'];
      unset($data[$langs[0]][0]['lat']);
      unset($data[$langs[0]][0]['lon']);
      return true;
    }
    }
    
    return false;
  }

  function retrieveCoordsFromGeospatial($node){
    if(empty($node['field_geospatial']))return false;
    $geos=getInnerArray($node['field_geospatial']);
    $geometry=$geos['geometry'];
    if(empty($geometry))return false;
    $wkb = pack('H*',$geometry);
    $geom = geoPHP::load($wkb, 'ewkb');
    $point=$geom->asArray();
    return Array('long'=>$point[0],'lat'=>$point[1]);   
  }
  
function _fill_geospatial($data){
  $coords=retrieve_coords();
  if(!is_numeric($coords['lat'])){$coords['lat']=0;}
  if(!is_numeric($coords['long'])){$coords['long']=0;}
  $array=array(
        'und' => array(
          array(
            'wkt' => 'GEOMETRYCOLLECTION(POINT('.$coords['long'].' '.$coords['lat'].'))',
          ),
        ));
  return $array;
	}
  
  
  
  function retrieveCoordsFromGeofield($node){
    if(empty($node['field_geofield']))return false;
    $geofield=array_pop($node['field_geofield']);
    if(empty($geofield[0]['lat']) || empty($geofield[0]['lon'])) return false;
    return Array('long'=>$geofield[0]['lon'],'lat'=>$geofield[0]['lat']);    
  }
  
  function retrieveCoordsFromNode($node){
    if(empty($node['latitude']) || empty($node['latitude']))return false;
      return Array('long'=>$node['longitude'],'lat' =>$node['latitude']);          
  }
  
function insertCoords($data,$coords){
  $location=getInnerArray($data);
  if(empty($location) || empty($coords))return false;
  $lat=
  $location['latitude']=$coords['lat'];
  $location['longitude']=$coords['long'];
  return $location;
}

function isValidAddress($data){
  return true;
  // Bloccato per test
  
  $location=getInnerArray($data);
  if(empty($location))return false;
  if(empty($location['city']))return false;  
  return $location;
}

function _fill_location($data){
  if(empty($data) || count($data)==0){return false;}
  $langs=array_keys($data);
  $lang=$langs[0];
  $location=$data[''.$lang][0];
  $node = variable_get('current_node', 0);
  
  
  
  $coords=retrieve_coords();
  
  if($coords){
            $location=insertCoords($data,$coords);
            $location['inhibit_geocode']=true;
             }else{
             $location=getInnerArray($data);
             }
             
  if(!isValidAddress($data)){
    
    if((intval($location['latitude']) * intval($location['longitude'])) > 0){
      $address=doOpenStreetmapReverseGeocode($location['latitude'],$location['longitude']);
      $location['street']= $address['road'];
      $location['additional']= $address['additional'];
      $location['city']= $address['city'];
      $location['province']= $address['province_code'];
      $location['postal_code']= $address['postal_code'];
      $location['country']= $address['country_code'];
        }
      }
  
 
  
 
    /*  Per google
  $location=Array('und'=>Array('0'=>Array(
    //'name' => 'title',
    //'street' => 'title',
    //'additional'=>'title',
    'city'=>$address['administrative_area_level_3'],
    'province'=>$address['administrative_area_level_2_short'],
    'postal_code'=>$address['postal_code'],
    'country'=>$address['country_short'],
    'latitude'=>$data['it'][0]['lat'],
    'longitude'=>$data['it'][0]['lon'],
    'source'=>'3',
    'province_name'=>$address['administrative_area_level_2'])));    */
  $location['source']= 3;
  
  unset($location['lid']);
  return Array($lang => Array('0' => $location));
}

function _original_link($data){
  global $settings;
  $node = variable_get('current_node', 0);
  $link=Array('und'=>Array('0'=>Array('title'=>$node['title'],'url'=>$settings['domain'].'/node/'.$node['nid'])));
  return $link;
  
}

function getInnerArray($array){
  if(empty($array))return Array();
  $pop=array_pop($array);
  if(empty($pop))return Array();
  $result=array_pop($pop);
  return $result;
}

function retrieve_coords(){
  $node = variable_get('current_node', 0);
  if(!$coords=retrieveCoordsFromGeospatial($node)){
    if(!isValidLocation($node['field_location'])){
    if(!$coords=retrieveCoordsFromGeofield($node)){
      if(!$coords=retrieveCoordsFromNode($node)){
        $coords=false;
        if(isValidAddress($node['field_location'])){
          $location=  getInnerArray($node['field_location']);
          $address = $location['street']. " ".$location['city'];
          $address.=" (" . $location['province'] . ") ".$location['country'];
          $coords=doGeocode($address);}
        
      }
    }
    }
  }
 return $coords; 
}

?>
