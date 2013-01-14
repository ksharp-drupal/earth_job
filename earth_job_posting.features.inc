<?php

/**
 * Implementation of hook_ctools_plugin_api().
 */
function earth_job_posting_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => 1);
  }
}

/**
 * Implementation of hook_node_info().
 */
function earth_job_posting_node_info() {
  $items = array(
    'job' => array(
      'name' => t('Misc (Job)'),
      'module' => 'features',
      'description' => t('Earth Science Employment Opportunities'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'has_body' => '1',
      'body_label' => t('Description'),
      'min_word_count' => '0',
      'help' => '',
    ),
  );
  return $items;
}

/**
 * Implementation of hook_views_api().
 */
function earth_job_posting_views_api() {
  return array(
    'api' => '2',
  );
}
