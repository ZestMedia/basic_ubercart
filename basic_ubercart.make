; ----------------
; Generated makefile from http://drushmake.me
; Permanent URL: http://drushmake.me/file.php?token=4509d2375595
; ----------------
;
; This is a working makefile - try it! Any line starting with a `;` is a comment.

; Core version
; ------------
; Each makefile should begin by declaring the core version of Drupal that all
; projects should be compatible with.

core = 7.x

; API version
; ------------
; Every makefile needs to declare its Drush Make API version. This version of
; drush make uses API version `2`.

api = 2

; Core project
; ------------
; In order for your makefile to generate a full Drupal site, you must include
; a core project. This is usually Drupal core, but you can also specify
; alternative core projects like Pressflow. Note that makefiles included with
; install profiles *should not* include a core project.

; Drupal 7.x. Requires the `core` property to be set to 7.x.
projects[drupal][version] = 7

; Patches
; --------

; Webform UUID: https://drupal.org/node/2076483
projects[webform][patch][] = https://drupal.org/files/webform_uuid_0.patch

; Modules
; --------
projects[admin_menu][version] = 3.0-rc4
projects[admin_menu][type] = "module"
projects[admin_menu][subdir] = "contrib"
projects[ckeditor][version] = 1.13
projects[ckeditor][type] = "module"
projects[ckeditor][subdir] = "contrib"

; Get colorbox via git because d.o version doesn't have make file.
;projects[colorbox][colorbox][download][branch] = 7.x-2.x
;projects[colorbox][type] = "module"
;projects[colorbox][subdir] = "contrib"
;projects[colorbox][download][type] = git
;projects[colorbox][download][url] = http://git.drupal.org/project/colorbox.git
;projects[colorbox][patch][2088137] = https://drupal.org/files/issues/colorbox-drush_make_master-2088137-6.patch

projects[colorbox][version] = 2.5
projects[colorbox][type] = "module"
projects[colorbox][subdir] = "contrib"

projects[comment_limit][version] = 1.x-dev
projects[comment_limit][type] = "module"
projects[comment_limit][subdir] = "contrib"
projects[context][version] = 3.1
projects[context][type] = "module"
projects[context][subdir] = "contrib"
projects[ctools][version] = 1.3
projects[ctools][type] = "module"
projects[ctools][subdir] = "contrib"
projects[date][version] = 2.7
projects[date][type] = "module"
projects[date][subdir] = "contrib"
projects[double_field][version] = 2.3
projects[double_field][type] = "module"
projects[double_field][subdir] = "contrib"
projects[features][version] = 2.0
projects[features][type] = "module"
projects[features][subdir] = "contrib"
projects[galleryformatter][version] = 1.3
projects[galleryformatter][type] = "module"
projects[galleryformatter][subdir] = "contrib"
projects[email][version] = 1.2
projects[email][type] = "module"
projects[email][subdir] = "contrib"
projects[entity][version] = 1.2
projects[entity][type] = "module"
projects[entity][subdir] = "contrib"
projects[entityreference][version] = 1.1
projects[entityreference][type] = "module"
projects[entityreference][subdir] = "contrib"
projects[features][version] = 2.0-rc3
projects[features][type] = "module"
projects[features][subdir] = "contrib"
projects[features_extra][version] = 1.0-beta1
projects[features_extra][type] = "module"
projects[features_extra][subdir] = "contrib"
projects[features_override][version] = 2.0-rc1
projects[features_override][type] = "module"
projects[features_override][subdir] = "contrib"
projects[field_group][version] = 1.3
projects[field_group][type] = "module"
projects[field_group][subdir] = "contrib"
projects[fivestar][version] = 2.0-alpha2
projects[fivestar][type] = "module"
projects[fivestar][subdir] = "contrib"
projects[google_analytics][version] = 1.4
projects[google_analytics][type] = "module"
projects[google_analytics][subdir] = "contrib"
projects[jquery_update][version] = 2.x-dev
projects[jquery_update][type] = "module"
projects[jquery_update][subdir] = "contrib"
projects[libraries][version] = 2.1
projects[libraries][type] = "module"
projects[libraries][subdir] = "contrib"
projects[logintoboggan][version] = 1.3
projects[logintoboggan][type] = "module"
projects[logintoboggan][subdir] = "contrib"
; Possibly add modernizr later as I'm not sure what components should be included.
; projects[modernizr][version] = 3.1
; projects[modernizr][type] = "module"
; projects[modernizr][subdir] = "contrib"
projects[module_filter][version] = 2.0-alpha2
projects[module_filter][type] = "module"
projects[module_filter][subdir] = "contrib"
projects[pathauto][version] = 1.2
projects[pathauto][type] = "module"
projects[pathauto][subdir] = "contrib"
projects[print][version] = 1.2
projects[print][type] = "module"
projects[print][subdir] = "contrib"
projects[rules][version] = 2.6
projects[rules][type] = "module"
projects[rules][subdir] = "contrib"
projects[social-share][version] = 2.1
projects[social-share][type] = "module"
projects[social-share][subdir] = "contrib"
projects[strongarm][version] = 2.0
projects[strongarm][type] = "module"
projects[strongarm][subdir] = "contrib"
projects[taxonomy_menu][version] = 1.4
projects[taxonomy_menu][type] = "module"
projects[taxonomy_menu][subdir] = "contrib"
projects[token][version] = 1.5
projects[token][type] = "module"
projects[token][subdir] = "contrib"
projects[tvi][version] = 1.0-beta4
projects[tvi][type] = "module"
projects[tvi][subdir] = "contrib"
projects[ubercart][version] = 3.6
projects[ubercart][type] = "module"
projects[ubercart][subdir] = "contrib"
projects[uc_out_of_stock][version] = 1.0
projects[uc_out_of_stock][type] = "module"
projects[uc_out_of_stock][subdir] = "contrib"
projects[uuid][version] = 1.0-alpha5
projects[uuid][type] = "module"
projects[uuid][subdir] = "contrib"
projects[uuid_features][version] = 1.0-alpha3
projects[uuid_features][type] = "module"
projects[uuid_features][subdir] = "contrib"
projects[views][version] = 3.7
projects[views][type] = "module"
projects[views][subdir] = "contrib"
projects[votingapi][version] = 2.11
projects[votingapi][type] = "module"
projects[votingapi][subdir] = "contrib"
projects[webform][version] = 3.19
projects[webform][type] = "module"
projects[webform][subdir] = "contrib"
projects[webform_features][version] = 3.0-beta2
projects[webform_features][type] = "module"
projects[webform_features][subdir] = "contrib"
projects[xmlsitemap][version] = 2.0-rc2
projects[xmlsitemap][type] = "module"
projects[xmlsitemap][subdir] = "contrib"

; Git Modules
; --------
projects[uniform][type] = module
projects[uniform][subdir] = "contrib"
projects[uniform][download][type] = git
projects[uniform][download][url] = http://git.drupal.org/project/uniform.git
projects[uniform][download][branch] = 7.x-2.x

; Development
; --------
projects[devel][version] = 1.3
projects[devel][type] = "module"
projects[devel][subdir] = "contrib"
projects[diff][version] = 3.2
projects[diff][type] = "module"
projects[diff][subdir] = "contrib"

; Zest Modules
; --------
projects[zest_reroute_email][type] = module
projects[zest_reroute_email][subdir] = zest
projects[zest_reroute_email][download][type] = git
projects[zest_reroute_email][download][url] = http://git.drupal.org/sandbox/leex/2068537.git
projects[zest_reroute_email][download][branch] = master

; Themes
; --------
projects[zest][type] = theme
projects[zest][download][type] = git
projects[zest][download][url] = https://github.com/ZestMedia/zest-zen.git
projects[zest][download][branch] = master


; Libraries
; ---------

; CKEditor
; --------
libraries[ckeditor][download][type] = "get"
libraries[ckeditor][download][url] = "http://download.cksource.com/CKEditor/CKEditor/CKEditor%204.2/ckeditor_4.2_standard.tar.gz"
