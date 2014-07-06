<?php
/**
 * @file
 * alumni_profile_form.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function alumni_profile_form_user_default_permissions() {
  $permissions = array();

  // Exported permission: create alumni_profile content.
  $permissions['create alumni_profile content'] = array(
    'name' => 'create alumni_profile content',
    'roles' => array(
      0 => 'admin',
      1 => 'anonymous user',
      2 => 'site admin',
    ),
    'module' => 'node',
  );

  // Exported permission: edit own alumni_profile content.
  $permissions['edit own alumni_profile content'] = array(
    'name' => 'edit own alumni_profile content',
    'roles' => array(
      0 => 'admin',
      1 => 'anonymous user',
      2 => 'site admin',
    ),
    'module' => 'node',
  );

  return $permissions;
}
