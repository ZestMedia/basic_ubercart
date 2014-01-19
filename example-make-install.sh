#!/bin/bash -x

# Run the make file
# Basically we're beginning the site build process,
# downloading all the modules we've specified.
# We use the --no-core flag so we don't download core everytime. However one
# will need to do this if core isn't already downloaded.
drush make --no-core profiles/basic_ubercart/basic_ubercart.make --contrib-destination=profiles/basic_ubercart/

#mkdir sites
#mkdir sites/all
#mkdir sites/all/themes

# Run a drush site install using the basic_ubercart profile.
# We specify the database details and a default password for the admin account.

chmod 755 sites/default/files

#read -p "Database Name? " -e database
database="shelterstation"

#read -p "Website Human Name? " -e sitehumanname
sitehumanname="Shelter Station"

# Create a machine name from the human name
sitemachinename=${sitehumanname/ /_}
sitemachinename=${sitemachinename,,}

drush site-install basic_ubercart --db-url=mysql://zest:5drxhawk@localhost/$database --account-name="admin" --account-pass="zestygeck0" --account-mail="test+$sitemachinename@zestmedia.co.nz" --site-name="$sitehumanname"
# Clear cache
drush cc all

# Add some dummy content programmatically created.
drush en -y basic_ubercart_dummy_content

# Generate some dummy content
drush generate-content 10 0 --types=product
drush generate-content 10 0 --types=faqs
