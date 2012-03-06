<?php

/**
 * Implementation of hook_views_default_views().
 */
function sportaa_event_configuration_views_default_views() {
  $views = array();

  // Exported view: featured_content
  $view = new view;
  $view->name = 'featured_content';
  $view->description = 'Featured content';
  $view->tag = 'Featured content';
  $view->base_table = 'node';
  $view->core = 0;
  $view->api_version = '2';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */
  $handler = $view->new_display('default', 'Defaults', 'default');
  $handler->override_option('relationships', array(
    'field_featured_content_link_nid' => array(
      'id' => 'field_featured_content_link_nid',
      'table' => 'node_data_field_featured_content_link',
      'field' => 'field_featured_content_link_nid',
    ),
  ));
  $handler->override_option('fields', array(
    'path' => array(
      'label' => '',
      'alter' => array(
        'alter_text' => 0,
        'text' => '',
        'make_link' => 0,
        'path' => '',
        'link_class' => '',
        'alt' => '',
        'prefix' => '',
        'suffix' => '',
        'target' => '',
        'help' => '',
        'trim' => 0,
        'max_length' => '',
        'word_boundary' => 1,
        'ellipsis' => 1,
        'html' => 0,
        'strip_tags' => 0,
      ),
      'empty' => '',
      'hide_empty' => 0,
      'empty_zero' => 0,
      'absolute' => 0,
      'exclude' => 1,
      'id' => 'path',
      'table' => 'node',
      'field' => 'path',
      'override' => array(
        'button' => 'Override',
      ),
      'relationship' => 'field_featured_content_link_nid',
    ),
    'field_featured_image_fid' => array(
      'label' => '',
      'alter' => array(
        'alter_text' => 0,
        'text' => '<div style="background: url(\'[field_featured_image_fid]\') no-repeat;">&nbsp;</div>',
        'make_link' => 0,
        'path' => '',
        'link_class' => '',
        'alt' => '',
        'prefix' => '',
        'suffix' => '',
        'target' => '',
        'help' => '',
        'trim' => 0,
        'max_length' => '',
        'word_boundary' => 1,
        'ellipsis' => 1,
        'html' => 0,
        'strip_tags' => 0,
      ),
      'empty' => '',
      'hide_empty' => 0,
      'empty_zero' => 0,
      'link_to_node' => 0,
      'label_type' => 'none',
      'format' => 'featured-content_default',
      'multiple' => array(
        'group' => TRUE,
        'multiple_number' => '',
        'multiple_from' => '',
        'multiple_reversed' => FALSE,
      ),
      'exclude' => 1,
      'id' => 'field_featured_image_fid',
      'table' => 'node_data_field_featured_image',
      'field' => 'field_featured_image_fid',
      'relationship' => 'none',
      'override' => array(
        'button' => 'Override',
      ),
    ),
    'title' => array(
      'label' => '',
      'alter' => array(
        'alter_text' => 0,
        'text' => '',
        'make_link' => 0,
        'path' => '',
        'link_class' => '',
        'alt' => '',
        'prefix' => '',
        'suffix' => '',
        'target' => '',
        'help' => '',
        'trim' => 0,
        'max_length' => '',
        'word_boundary' => 1,
        'ellipsis' => 1,
        'html' => 0,
        'strip_tags' => 0,
      ),
      'empty' => '',
      'hide_empty' => 1,
      'empty_zero' => 0,
      'link_to_node' => 0,
      'exclude' => 1,
      'id' => 'title',
      'table' => 'node',
      'field' => 'title',
      'relationship' => 'none',
      'override' => array(
        'button' => 'Override',
      ),
    ),
    'field_featured_content_link_nid' => array(
      'label' => '',
      'alter' => array(
        'alter_text' => 1,
        'text' => '<a href="[path]" rel="[field_featured_image_fid]" title="[title]"></a>',
        'make_link' => 0,
        'path' => '',
        'link_class' => '',
        'alt' => '',
        'prefix' => '',
        'suffix' => '',
        'target' => '',
        'help' => '',
        'trim' => 0,
        'max_length' => '',
        'word_boundary' => 1,
        'ellipsis' => 1,
        'html' => 0,
        'strip_tags' => 0,
      ),
      'empty' => '',
      'hide_empty' => 0,
      'empty_zero' => 0,
      'link_to_node' => 0,
      'label_type' => 'none',
      'format' => 'default',
      'multiple' => array(
        'group' => TRUE,
        'multiple_number' => '',
        'multiple_from' => '',
        'multiple_reversed' => FALSE,
      ),
      'exclude' => 1,
      'id' => 'field_featured_content_link_nid',
      'table' => 'node_data_field_featured_content_link',
      'field' => 'field_featured_content_link_nid',
      'relationship' => 'none',
      'override' => array(
        'button' => 'Override',
      ),
    ),
    'field_featured_image_fid_1' => array(
      'label' => '',
      'alter' => array(
        'alter_text' => 1,
        'text' => '<a href="[path]" title="[title]">[field_featured_image_fid]</a>',
        'make_link' => 0,
        'path' => '',
        'link_class' => '',
        'alt' => '',
        'prefix' => '',
        'suffix' => '',
        'target' => '',
        'help' => '',
        'trim' => 0,
        'max_length' => '',
        'word_boundary' => 1,
        'ellipsis' => 1,
        'html' => 0,
        'strip_tags' => 0,
      ),
      'empty' => '',
      'hide_empty' => 0,
      'empty_zero' => 0,
      'link_to_node' => 0,
      'label_type' => 'none',
      'format' => 'featured-content_default',
      'multiple' => array(
        'group' => TRUE,
        'multiple_number' => '',
        'multiple_from' => '',
        'multiple_reversed' => FALSE,
      ),
      'exclude' => 0,
      'id' => 'field_featured_image_fid_1',
      'table' => 'node_data_field_featured_image',
      'field' => 'field_featured_image_fid',
      'relationship' => 'none',
    ),
    'body' => array(
      'label' => '',
      'alter' => array(
        'alter_text' => 1,
        'text' => '<div class="content">
  <a href="[path]" title="[title]">
    [title]
    [body]
  </a>
</div>',
        'make_link' => 0,
        'path' => '',
        'link_class' => '',
        'alt' => '',
        'prefix' => '',
        'suffix' => '',
        'target' => '',
        'help' => '',
        'trim' => 0,
        'max_length' => '',
        'word_boundary' => 1,
        'ellipsis' => 1,
        'html' => 0,
        'strip_tags' => 0,
      ),
      'empty' => '',
      'hide_empty' => 1,
      'empty_zero' => 0,
      'exclude' => 0,
      'id' => 'body',
      'table' => 'node_revisions',
      'field' => 'body',
      'relationship' => 'none',
      'override' => array(
        'button' => 'Override',
      ),
    ),
  ));
  $handler->override_option('sorts', array(
    'field_event_date_value' => array(
      'order' => 'DESC',
      'delta' => -1,
      'id' => 'field_event_date_value',
      'table' => 'node_data_field_event_date',
      'field' => 'field_event_date_value',
      'override' => array(
        'button' => 'Override',
      ),
      'relationship' => 'none',
    ),
  ));
  $handler->override_option('filters', array(
    'type' => array(
      'operator' => 'in',
      'value' => array(
        'featured_content' => 'featured_content',
      ),
      'group' => '0',
      'exposed' => FALSE,
      'expose' => array(
        'operator' => FALSE,
        'label' => '',
      ),
      'id' => 'type',
      'table' => 'node',
      'field' => 'type',
      'relationship' => 'none',
    ),
    'language' => array(
      'operator' => 'in',
      'value' => array(
        '***CURRENT_LANGUAGE***' => '***CURRENT_LANGUAGE***',
      ),
      'group' => '0',
      'exposed' => FALSE,
      'expose' => array(
        'operator' => FALSE,
        'label' => '',
      ),
      'id' => 'language',
      'table' => 'node',
      'field' => 'language',
      'relationship' => 'none',
    ),
  ));
  $handler->override_option('access', array(
    'type' => 'none',
  ));
  $handler->override_option('cache', array(
    'type' => 'none',
  ));
  $handler->override_option('items_per_page', 5);
  $handler->override_option('style_plugin', 'slideshow');
  $handler->override_option('style_options', array(
    'type' => 'ul',
    'mode' => 'views_slideshow_singleframe',
    'views_slideshow_singleframe-prefix' => '',
    'views_slideshow_singleframe' => array(
      'timeout' => '5000',
      'delay' => '0',
      'speed' => '700',
      'start_paused' => 0,
      'fixed_height' => '1',
      'random' => '0',
      'pause' => '1',
      'pause_on_click' => '0',
      'pause_when_hidden' => 0,
      'pause_when_hidden_type' => 'full',
      'amount_allowed_visible' => '',
      'remember_slide' => 0,
      'remember_slide_days' => '1',
      'controls' => '2',
      'pager' => '2',
      'pager_type' => 'Numbered',
      'pager_hover' => '2',
      'pager_click_to_page' => 0,
      'image_count' => '0',
      'items_per_slide' => '1',
      'effect' => 'fade',
      'sync' => '1',
      'nowrap' => '0',
      'advanced' => '',
      'ie' => array(
        'cleartype' => 'true',
        'cleartypenobg' => 'false',
      ),
    ),
    'views_slideshow_thumbnailhover-prefix' => '',
    'views_slideshow_thumbnailhover' => array(
      'main_fields' => array(
        'body' => 'body',
        'field_featured_image_fid_1' => 0,
      ),
      'breakout_fields' => array(
        'field_featured_image_fid_1' => 0,
        'body' => 0,
      ),
      'teasers_last' => 1,
      'timeout' => '5000',
      'delay' => '0',
      'speed' => '300',
      'start_paused' => 0,
      'fixed_height' => '1',
      'random' => '0',
      'pause' => '1',
      'pause_on_click' => '0',
      'pause_when_hidden' => 0,
      'pause_when_hidden_type' => 'full',
      'amount_allowed_visible' => '',
      'remember_slide' => 0,
      'remember_slide_days' => '1',
      'pager_event' => 'mouseover',
      'controls' => '2',
      'image_count' => '2',
      'effect' => 'fade',
      'sync' => '1',
      'nowrap' => '1',
      'advanced' => '',
      'ie' => array(
        'cleartype' => 'true',
        'cleartypenobg' => 'false',
      ),
    ),
  ));
  $handler->override_option('row_plugin', 'semanticviews_fields');
  $handler->override_option('row_options', array(
    'semantic_html' => array(
      'field_featured_content_link_nid' => array(
        'element_type' => 'div',
        'class' => 'link',
      ),
      'title' => array(
        'element_type' => 'div',
        'class' => 'title',
      ),
      'body' => array(
        'element_type' => 'div',
        'class' => 'body',
      ),
    ),
    'skip_blank' => 0,
  ));
  $handler = $view->new_display('block', 'Featured content', 'block_1');
  $handler->override_option('block_description', '');
  $handler->override_option('block_caching', -1);
  $handler = $view->new_display('block', 'Featured content events', 'block_2');
  $handler->override_option('filters', array(
    'type' => array(
      'operator' => 'in',
      'value' => array(
        'featured_content' => 'featured_content',
      ),
      'group' => '0',
      'exposed' => FALSE,
      'expose' => array(
        'operator' => FALSE,
        'label' => '',
      ),
      'id' => 'type',
      'table' => 'node',
      'field' => 'type',
      'relationship' => 'none',
    ),
    'language' => array(
      'operator' => 'in',
      'value' => array(
        '***CURRENT_LANGUAGE***' => '***CURRENT_LANGUAGE***',
      ),
      'group' => '0',
      'exposed' => FALSE,
      'expose' => array(
        'operator' => FALSE,
        'label' => '',
      ),
      'id' => 'language',
      'table' => 'node',
      'field' => 'language',
      'relationship' => 'none',
    ),
    'tid' => array(
      'operator' => 'or',
      'value' => array(
        1 => '1',
      ),
      'group' => '0',
      'exposed' => FALSE,
      'expose' => array(
        'operator' => FALSE,
        'label' => '',
      ),
      'type' => 'select',
      'limit' => TRUE,
      'vid' => '1',
      'id' => 'tid',
      'table' => 'term_node',
      'field' => 'tid',
      'hierarchy' => 0,
      'override' => array(
        'button' => 'Use default',
      ),
      'relationship' => 'none',
      'reduce_duplicates' => 0,
    ),
  ));
  $handler->override_option('block_description', '');
  $handler->override_option('block_caching', -1);

  $views[$view->name] = $view;

  return $views;
}
