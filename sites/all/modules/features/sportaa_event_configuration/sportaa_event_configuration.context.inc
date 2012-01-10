<?php

/**
 * Implementation of hook_context_default_contexts().
 */
function sportaa_event_configuration_context_default_contexts() {
  $export = array();

  $context = new stdClass;
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'all-events';
  $context->description = 'All events';
  $context->tag = 'Events';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'event' => 'event',
      ),
      'options' => array(
        'node_form' => '1',
      ),
    ),
    'path' => array(
      'values' => array(
        'events' => 'events',
        'events/*' => 'events/*',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-event_list-block_5' => array(
          'module' => 'views',
          'delta' => 'event_list-block_5',
          'region' => 'left',
          'weight' => 0,
        ),
        'views-event_list-block_1' => array(
          'module' => 'views',
          'delta' => 'event_list-block_1',
          'region' => 'content_bottom',
          'weight' => 0,
        ),
        'views-event_list-block_2' => array(
          'module' => 'views',
          'delta' => 'event_list-block_2',
          'region' => 'content_bottom',
          'weight' => 1,
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('All events');
  t('Events');
  $export['all-events'] = $context;

  $context = new stdClass;
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'events';
  $context->description = 'Events';
  $context->tag = 'Events';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'events' => 'events',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-featured_content-block_2' => array(
          'module' => 'views',
          'delta' => 'featured_content-block_2',
          'region' => 'content_top',
          'weight' => 0,
        ),
      ),
    ),
  );
  $context->condition_mode = 1;

  // Translatables
  // Included for use with string extractors like potx.
  t('Events');
  $export['events'] = $context;

  return $export;
}
