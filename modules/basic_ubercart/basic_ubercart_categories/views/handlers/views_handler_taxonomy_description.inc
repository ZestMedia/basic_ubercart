<?php

/**
 * @file
 * Definition of views_handler_taxonomy_description.
 */

/**
 * Views area text handler.
 *
 * @ingroup views_area_handlers
 */
class views_handler_taxonomy_description extends views_handler_area {

  function render($empty = FALSE) {

    $taxonomy_term = menu_get_object('taxonomy_term', 2);

    if (!empty($taxonomy_term)) {
      return '<div class="taxonomy-term-description">' . $taxonomy_term->description . '</div>';
    }

  return '';

  }

}
