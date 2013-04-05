<?php
/**
 * @file
 * panopoly_sponsors.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function panopoly_sponsors_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "panelizer" && $api == "panelizer") {
    return array("version" => "1");
  }
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function panopoly_sponsors_views_api() {
  return array("version" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function panopoly_sponsors_node_info() {
  $items = array(
    'panopoly_sponsor' => array(
      'name' => t('Sponsor'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
