<?php

/**
 * Implementation of hook_taxonomy_default_vocabularies().
 */
function sportaa_events_taxonomy_default_vocabularies() {
  return array(
    'sport' => array(
      'name' => 'Sportsgren',
      'description' => '',
      'help' => '',
      'relations' => '1',
      'hierarchy' => '1',
      'multiple' => '0',
      'required' => '1',
      'tags' => '0',
      'module' => 'features_sport',
      'weight' => '0',
      'language' => '',
      'nodes' => array(
        'event' => 'event',
      ),
    ),
  );
}
