<?php
// $Id: node-nodeblock-default.tpl.php,v 1.1 2009/04/01 03:12:10 rz Exp $

/**
 * @file node-nodeblock-default.tpl.php
 *
 * Theme implementation to display a nodeblock enabled block. This template is
 * provided as a default implementation that will be called if no other node
 * template is provided. Any node-[type] templates defined by the theme will
 * take priority over this template. Also, a theme can override this template
 * file to provide its own default nodeblock theme.
 *
 * Additional variables:
 * - $nodeblock: Flag for the nodeblock context.
 */
?>
<div class="quote<?php if (!$status) { print ' node-unpublished'; } ?> clear-block">

  <div class="content">
    <?php print $content ?>
  </div>

</div>