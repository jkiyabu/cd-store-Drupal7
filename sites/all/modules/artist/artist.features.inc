<?php
/**
 * @file
 * artist.features.inc
 */

/**
 * Implements hook_node_info().
 */
function artist_node_info() {
  $items = array(
    'artist' => array(
      'name' => t('Artist'),
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
