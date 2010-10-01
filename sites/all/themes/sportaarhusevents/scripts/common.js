$(document).ready(function() {  

  var $items = $('.view-featured-content .field-featured-image-fid a');

  for (i=0;i<$items.length;i++) {
    if ($($items[i]).text()) {
      //$($items[i]).css('background-image', 'url(' + $($items[i]).text() + ')');
    }
  }

});