<?php
// $Id: li_helperfunctions.inc,v 1.6 2009/11/15 04:44:33 aaronhawkins Exp $
function rootpath(){
  global $base_url;
  $path = $base_url.'/';
  return $path;
}

function currentlanguage(){
  global $language;
  return $language->language;
}


function specific_translation_exist($tnid = NULL, $lang) {
  if ($tnid) { 
    $lang = db_result(db_query("SELECT nid FROM {node} WHERE language = '%s' AND tnid = %d ",$lang, $tnid));
  }
  return $lang;
}

/**
 * Return an array of enabled languages ordered by weight so that the order of the flags can be customized
 */
function get_enabled_languages(){
  $result = db_query('SELECT language FROM {languages} WHERE enabled = 1 ORDER BY weight ASC');
  while ($enabled_languages = db_fetch_object($result)) {
    $languages[] = $enabled_languages->language; 
  }
  return $languages;
}