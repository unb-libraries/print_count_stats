<?php
/**
 * @file
 * print_count_stats.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function print_count_stats_taxonomy_default_vocabularies() {
  return array(
    'libraries' => array(
      'name' => 'Libraries',
      'machine_name' => 'libraries',
      'description' => 'List of supported Libraries',
      'hierarchy' => 1,
      'module' => 'library_hours',
      'weight' => 1,
      'rdf_mapping' => array(
        'rdftype' => array(
          0 => 'skos:ConceptScheme',
        ),
        'name' => array(
          'predicates' => array(
            0 => 'dc:title',
          ),
        ),
        'description' => array(
          'predicates' => array(
            0 => 'rdfs:comment',
          ),
        ),
      ),
    ),
  );
}
