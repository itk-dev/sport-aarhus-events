<?php
// $Id$
/**
 * @file
 * views-view.tpl.php
 * Main view template
 *
 * Variables available:
 * - $css_name: A css-safe version of the view name.
 * - $header: The view header
 * - $footer: The view footer
 * - $rows: The results of the view query, if any
 * - $empty: The empty text to display if the view is empty
 * - $pager: The pager next/prev links to display, if any
 * - $exposed: Exposed widget form/info to display
 * - $feed_icon: Feed icon to display, if any
 * - $more: A link to view more, if any
 * - $admin_links: A rendered list of administrative links
 * - $admin_links_raw: A list of administrative links suitable for theme('links')
 *
 * @ingroup views_templates
 */
 
?>

<?php

$view_classes =array();
if (theme_get_setting(mothership_cleanup_views_display_view)) {
  $view_classes[] = "view";  
}
if (theme_get_setting(mothership_cleanup_views_display_cssname)) {
  $view_classes[] = "view-" .$css_name."";
}
if (theme_get_setting(mothership_cleanup_views_display_name)) {
  $view_classes[] = "view-id-" .$name."";
}
if (theme_get_setting(mothership_cleanup_views_display_display_id)) {
  $view_classes[] = "view-display-id-" .$display_id."";
}
if (theme_get_setting(mothership_cleanup_views_display_dom_id)) {
  $view_classes[] = "view-dom-id-" .$dom_id."";
}

  $view_classes[] = "" .$css_class.""; 
//skinr support
$view_classes[] = $skinr;
  
$classes_display = implode(" ", $view_classes);
?>


<!--views-view.tpl.php-->
<div class="<?php print $classes_display; ?>"> <?php /* remember we need the view class for the admin hover */ ?>

<?php if ($admin_links): ?>
  <!--views admin links-->
  <div class="views-admin-links views-hide">
    <?php print $admin_links; ?>
  </div>
  <!--/views  admin links-->
<?php endif; ?>
<?php if ($header): ?>
  <!--views header-->
  <div class="view-header">
    <?php print $header; ?>
  </div>
  <!--/views header-->
<?php endif; ?>
<?php if ($exposed): ?>
  <!--views exposed header-->
  <div class="view-filters">
    <?php print $exposed; ?>
  </div>
  <!--/views exposed header-->
<?php endif; ?>
<?php if ($attachment_before): ?>
  <div class="attachment-before">
    <?php print $attachment_before; ?>
  </div>
<?php endif; ?>

<?php if ($rows): ?>
  <div class="view-content">
    <?php print $rows; ?>
  </div>  
<?php elseif ($empty): ?>
  <div class="view-empty">
    <?php print $empty; ?>
  </div>

<?php endif; ?>
<?php if ($pager): ?>
  <?php print $pager; ?>
<?php endif; ?>
<?php if ($attachment_after): ?>
  <div class="attachment-after">
    <?php print $attachment_after; ?>
  </div>

<?php endif; ?>
<?php if ($more): ?>
  <?php print $more; ?>
<?php endif; ?>
<?php if ($footer): ?>
  <!--views footer-->
  <div class="view-footer">
    <?php print $footer; ?>
  </div>
  <!--/views footer-->
<?php endif; ?>
<?php if ($feed_icon): ?>
  <div class="feed-icon">
    <?php print $feed_icon; ?>
  </div>

<?php endif; ?>
</div>
<?php // class view ?>

<!-- / views-view.tpl.php-->