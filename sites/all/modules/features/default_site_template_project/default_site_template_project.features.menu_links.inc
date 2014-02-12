<?php
/**
 * @file
 * default_site_template_project.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function default_site_template_project_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: menu-footer-menu-project_about:node/11
  $menu_links['menu-footer-menu-project_about:node/11'] = array(
    'menu_name' => 'menu-footer-menu-project',
    'link_path' => 'node/11',
    'router_path' => 'node/%',
    'link_title' => 'About',
    'options' => array(
      'cami' => array(
        'pages' => '',
      ),
      'attributes' => array(),
      'identifier' => 'menu-footer-menu-project_about:node/11',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
  );
  // Exported menu link: menu-footer-menu-project_blog:node/17
  $menu_links['menu-footer-menu-project_blog:node/17'] = array(
    'menu_name' => 'menu-footer-menu-project',
    'link_path' => 'node/17',
    'router_path' => 'node/%',
    'link_title' => 'Blog',
    'options' => array(
      'cami' => array(
        'pages' => '',
      ),
      'attributes' => array(),
      'identifier' => 'menu-footer-menu-project_blog:node/17',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 1,
  );
  // Exported menu link: menu-footer-menu-project_faq:faq
  $menu_links['menu-footer-menu-project_faq:faq'] = array(
    'menu_name' => 'menu-footer-menu-project',
    'link_path' => 'faq',
    'router_path' => 'faq',
    'link_title' => 'Faq',
    'options' => array(
      'cami' => array(
        'pages' => '',
      ),
      'attributes' => array(),
      'identifier' => 'menu-footer-menu-project_faq:faq',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -47,
    'customized' => 1,
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('About');
  t('Blog');
  t('Faq');


  return $menu_links;
}