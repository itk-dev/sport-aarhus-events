<?php
// $Id$
/**
 * @file
 * general functions for mothership
 */

function mothership_id_safe($string, $vars = "default") {
  // Replace with dashes anything that isn't A-Z, numbers, dashes, or underscores.
  if($vars == "remove-numbers"){
    $string = strtolower(preg_replace('/[^a-zA-Z_-]+/', '-', $string));
  }else{
    $string = strtolower(preg_replace('/[^a-zA-Z0-9_-]+/', '-', $string));  
  }
  // change the  "_" to "-"
  $string = strtolower(str_replace('_', '-', $string));
  
  // If the first character is not a-z, add 'n' in front.
  if (function_exists('ctype_lower')) {
    if (!ctype_lower($string{0})) { // Don't use ctype_alpha since its locale aware.
      $string = 'id' . $string;
    }  
  }
  else {
    preg_match('/[a-z]+/', $string{0}, $matches);
    if (count($matches) == 0) {
      $string = 'id' . $string;
    }
  }
  return $string;
}

/*
getting some of the userprofile data into a single function
*/
function mothership_userprofile($user){
  if ($user->uid) {
//    global $user;
//    $profile =  profile_load_profile($user);
//$user->profile_name
    //user picture
    if ($user->picture) {
      $userimage = '<img src="/' . $user->picture . '">';
      print '<div class="profile-image">' . l($userimage, 'user/' . $user->uid, $options = array('html' => TRUE)) . '</div>';
    }
    print '<ul class="profile">';
      print '<li class="profile-name">' . l($user->name, 'user/' . $user->uid . '') . '</li>';
      print '<li class="profile-edit">' . l(t('edit'), 'user/' . $user->uid . '/edit') . '</li>'; 
      print '<li class="profile-logout">' . l(t('Sign out'), 'logout') . '</li>';
    print '</ul>';
  }
}

/*
Quick & handy function for adding time ago
*/
function mothership_time_ago($timestamp,$granularity = 2, $langcode = NULL){
   $difference = time() - $timestamp;
   $text = format_interval($difference, $granularity, $langcode) ." ". t("ago");
   return $text;
}

/*
return only the terms from a vocabulary in the node
*/
function return_terms_from_vocabulary($node, $vid){
  $terms = taxonomy_node_get_terms_by_vocabulary($node, $vid, $key = 'tid');
//  $vocabulary = taxonomy_vocabulary_load($vid);
//	$content .='<div class="vocabulary">'.$vocabulary->name.'</div>';
		$termslist = '';
		if ($terms) {
			$content .= '<span class="terms">';
			foreach ($terms as $term) {
				$termslist = $termslist .  '<span class="term-icon-'. mothership_id_safe($term->name)  .'">' . l($term->name, 'taxonomy/term/'.$term->tid) .'</span> | ';
			}
      //TODO make a better split option hardcoded is kinda sad ;)
			$content.= trim ($termslist," |").'</span>';
		}


	return $content;
}
