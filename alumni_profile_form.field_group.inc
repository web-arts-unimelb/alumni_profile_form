<?php
/**
 * @file
 * alumni_profile_form.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function alumni_profile_form_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_alumni_admin|node|alumni_profile|form';
  $field_group->group_name = 'group_alumni_admin';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'alumni_profile';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Admin',
    'weight' => '2',
    'children' => array(
      0 => 'field_alumni_study_level',
      1 => 'field_alumni_graduate_program',
      2 => 'field_alumni_ugrad_program',
      3 => 'field_alumni_exec_progam',
      4 => 'field_alumni_comm_program',
      5 => 'field_alumni_advance_id',
      6 => 'field_alumni_partnership_id',
      7 => 'field_alumni_awards',
      8 => 'field_alumni_internships',
      9 => 'field_alumni_flag',
      10 => 'field_alumni_department',
      11 => 'field_alumni_pub',
      12 => 'field_alumni_notes',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Admin',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-alumni-admin field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $export['group_alumni_admin|node|alumni_profile|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_alumni_user_fields|node|alumni_profile|form';
  $field_group->group_name = 'group_alumni_user_fields';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'alumni_profile';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Users',
    'weight' => '3',
    'children' => array(
      0 => 'field_alumni_email',
      1 => 'field_alumni_nationality',
      2 => 'field_alumni_country_work',
      3 => 'field_alumni_current_job',
      4 => 'field_alumni_degree_career',
      5 => 'field_alumni_internship',
      6 => 'field_alumni_why_choose_unimelb',
      7 => 'field_alumni_sector',
      8 => 'field_alumni_study_area',
      9 => 'field_alumni_org_placements',
      10 => 'field_alumni_internship_info',
      11 => 'field_alumni_enjoy_unimelb',
      12 => 'field_alumni_enrichment',
      13 => 'field_alumni_employer',
      14 => 'field_alumni_job_title',
      15 => 'field_alumni_preferred_name',
      16 => 'field_alumni_program',
      17 => 'field_alumni_consent',
      18 => 'field_alumni_profile_image',
      19 => 'title',
      20 => 'path',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Users',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-alumni-user-fields field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_alumni_user_fields|node|alumni_profile|form'] = $field_group;

  return $export;
}
