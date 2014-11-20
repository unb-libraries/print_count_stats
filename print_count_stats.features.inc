<?php
/**
 * @file
 * print_count_stats.features.inc
 */

/**
 * Implements hook_node_info().
 */
function print_count_stats_node_info() {
  $items = array(
    'library_printer' => array(
      'name' => t('Printer'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Name'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
