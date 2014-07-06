<?php
/**
 * @file
 * alumni_profile_form.features.filter.inc
 */

/**
 * Implements hook_filter_default_formats().
 */
function alumni_profile_form_filter_default_formats() {
  $formats = array();

  // Exported format: Complete full html.
  $formats['complete_full_html'] = array(
    'format' => 'complete_full_html',
    'name' => 'Complete full html',
    'cache' => '1',
    'status' => '1',
    'weight' => '-9',
    'filters' => array(),
  );

  return $formats;
}
