/**
 * @file
 * A JavaScript file for the FAQs view.
 */

// JavaScript should be made compatible with libraries other than jQuery by
// wrapping it with an "anonymous closure". See:
// - http://drupal.org/node/1446420
// - http://www.adequatelygood.com/2010/3/JavaScript-Module-Pattern-In-Depth
(function ($, Drupal, window, document, undefined) {

$(document).ready(function() {

  $('.view-display-id-faqs .views-field-title').click( function() {
    if($(this).hasClass('open')) {
      $(this).removeClass('open');
      $(this).next('div').slideUp();
    }
    else {
      $(this).addClass('open');
      $(this).next('div').slideDown();
    }
  })

});//End of document ready

})(jQuery, Drupal, this, this.document);
