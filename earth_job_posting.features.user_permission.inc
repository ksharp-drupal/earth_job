<?php

/**
 * Implementation of hook_user_default_permissions().
 */
function earth_job_posting_user_default_permissions() {
  $permissions = array();

  // Exported permission: edit field_jobtype
  $permissions['edit field_jobtype'] = array(
    'name' => 'edit field_jobtype',
    'roles' => array(
      '0' => 'SUNet User',
      '1' => 'webeditor',
      '2' => 'webmaster',
    ),
  );

  // Exported permission: view field_jobtype
  $permissions['view field_jobtype'] = array(
    'name' => 'view field_jobtype',
    'roles' => array(
      '0' => 'SUNet User',
      '1' => 'anonymous user',
      '2' => 'authenticated user',
      '3' => 'webeditor',
      '4' => 'webmaster',
    ),
  );

  return $permissions;
}
