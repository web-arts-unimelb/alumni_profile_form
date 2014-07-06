<?php

// hook_form_alter
function alumni_profile_form_form_alter(&$form, &$form_state, $form_id) {
	global $user;

	if($form_id == 'alumni_profile_node_form') {
		if($user->uid === 0) {
			drupal_add_css(drupal_get_path('module', 'alumni_profile_form'). '/css/hide_element.css');
		}
	}
}
