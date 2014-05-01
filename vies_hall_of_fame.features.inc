<?php
/**
 * @file
 * vies_hall_of_fame.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function vies_hall_of_fame_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function vies_hall_of_fame_node_info() {
  $items = array(
    'vies_hall_of_fame' => array(
      'name' => t('Hall of Fame'),
      'base' => 'node_content',
      'description' => t('Used for students who has excelled in their career.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
