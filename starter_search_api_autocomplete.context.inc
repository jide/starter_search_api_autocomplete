<?php
/**
 * @file
 * starter_search_api_autocomplete.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function starter_search_api_autocomplete_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'search_api_autocomplete';
  $context->description = '';
  $context->tag = 'starter';
  $context->conditions = array(
    'sitewide' => array(
      'values' => array(
        1 => 1,
      ),
    ),
  );
  $context->reactions = array();
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('starter');
  $export['search_api_autocomplete'] = $context;

  return $export;
}
