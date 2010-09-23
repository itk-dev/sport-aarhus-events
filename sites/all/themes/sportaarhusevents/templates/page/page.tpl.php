<?php
// $Id: 
?>
<!DOCTYPE html PUBLIC "-//W3C//DTD XHTML 1.0 Strict//EN"
  "http://www.w3.org/TR/xhtml1/DTD/xhtml1-strict.dtd">
<html xmlns="http://www.w3.org/1999/xhtml" xml:lang="<?php print $language->language ?>" lang="<?php print $language->language ?>" dir="<?php print $language->dir ?>">

<head>
  <title><?php print $head_title; ?></title>
  <?php print $head; ?>
  <?php print $styles; ?>
  <?php print $scripts; ?>
</head>

<body class="<?php print $body_classes; ?>"<?php print $background_image ?>>
  <p><a name="top" id="top"></a></p>
  <div id="wrapper">
    <div id="page" class="container-16 clear-block">
    <div id="header" class="clear-block">
      <div id="header-inner">
        <?php if ($site_logo): ?>
          <div id="logo"><?php print $site_logo; ?></div>
        <?php endif; ?>
        <?php print $header ?>
      </div> <!--/#header-inner -->
    </div> <!--/#header -->

    <?php if ($main_menu_links || $secondary_menu_links): ?>
    <div id="site-menu" class="grid-12">
      <div id="navbar-inner">
        <?php print $main_menu_links; ?>
        <?php print $secondary_menu_links; ?>
      </div> <!--/#navbar-inner -->
    </div> <!--/#site-menu -->
    <?php endif; ?>

    <?php if ($search_box): ?>
      <div id="search-box" class="grid-6 prefix-10"><?php print $search_box; ?></div>
    <?php endif; ?>

    <?php if ($mainmenu): ?>
      <div id="main-menu" class="container-16 clear-block">
        <div id="main-menu-inner">
          <?php print $mainmenu; ?>          
        </div>
      </div> <!--//end #main-menu -->
    <?php endif; ?>    

    <div id="main" class="clear-block">

      <div id="main-wrapper" class="clear-block">

        <?php print $breadcrumb; ?>

        <?php print $messages; ?>
        <?php print $help; ?>

        <?php if ($left && !$is_front): ?>
          <div id="sidebar-left" class="column sidebar region grid-5">
                  <div id="sidebar-left-inner">
              <?php print $left; ?>
            </div>
          </div> <!-- //end #sidebar-left-inner -->
        <?php endif; ?>

        <div id="content" class="column <?php $is_front ? print 'grid-10' : print 'grid-11' ?> clear-block">
          <div id="content-inner">
            <div id="main-content" class="region">
              <?php if ($tabs): ?>
                <div class="tabs clear-block"><?php print $tabs; ?></div>
              <?php endif; ?>
              <?php print $content; ?>
            </div> <!-- /#main-content -->

          </div> <!-- // #content-inner -->
        </div> <!-- //#content -->

        <?php if ($right && $is_front): ?>
          <div id="sidebar-right" class="column sidebar region grid-6">
            <div id="sidebar-right-inner">
              <?php print $right; ?>
            </div>
          </div> <!--//end #sidebar-right -->
        <?php endif; ?>

        </div> <!-- //end #main-wrapper -->

        <div id="footer-wrapper" class="clear-block">
          <?php if ($footer_blocks): ?>
            <div id="footer-blocks" class="clear-block">
              <?php print $footer_blocks; ?>
            </div><!-- /#footer-blocks -->
          <?php endif; ?>

          <?php if ($footer): ?>
            <div id="footer" class="clear-block">
              <?php print $footer; ?>
            </div>
          <?php endif; ?>
        </div>

      </div> <!-- //end #main -->

    </div> <!-- /#page -->

  <?php print $closure; ?>
  
  </div>
</body>
</html>