<?php
/**
 * @file
 * vies_hall_of_fame.features.defaultconfig.inc
 */

/**
 * Implements hook_defaultconfig_features().
 */
function vies_hall_of_fame_defaultconfig_features() {
  return array(
    'vies_hall_of_fame' => array(
      'user_default_permissions' => 'user_default_permissions',
    ),
  );
}

/**
 * Implements hook_defaultconfig_user_default_permissions().
 */
function vies_hall_of_fame_defaultconfig_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create vies_hall_of_fame content'.
  $permissions['create vies_hall_of_fame content'] = array(
    'name' => 'create vies_hall_of_fame content',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any vies_hall_of_fame content'.
  $permissions['delete any vies_hall_of_fame content'] = array(
    'name' => 'delete any vies_hall_of_fame content',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own vies_hall_of_fame content'.
  $permissions['delete own vies_hall_of_fame content'] = array(
    'name' => 'delete own vies_hall_of_fame content',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any vies_hall_of_fame content'.
  $permissions['edit any vies_hall_of_fame content'] = array(
    'name' => 'edit any vies_hall_of_fame content',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own vies_hall_of_fame content'.
  $permissions['edit own vies_hall_of_fame content'] = array(
    'name' => 'edit own vies_hall_of_fame content',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'node',
  );

  return $permissions;
}
