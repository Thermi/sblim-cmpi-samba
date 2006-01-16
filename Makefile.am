# ==================================================================
# (C) Copyright IBM Corp. 2005
#
# THIS FILE IS PROVIDED UNDER THE TERMS OF THE COMMON PUBLIC LICENSE
# ("AGREEMENT"). ANY USE, REPRODUCTION OR DISTRIBUTION OF THIS FILE
# CONSTITUTES RECIPIENTS ACCEPTANCE OF THE AGREEMENT.
#
# You can obtain a current copy of the Common Public License from
# http://www.opensource.org/licenses/cpl1.0.php
#
# Author:       Wolfgang Taphorn <taphorn@de.ibm.com>
# Description:  Automake input file for cmpi provider and resource
#               access layer.
# ==================================================================


# SBLIM Include Directory
sblimincdir = $(includedir)/sblim

# SBLIM Headers to be installed
sbliminc_HEADERS =

# docdir defines where the documentation goes
docdir = $(datadir)/doc/$(PACKAGE)-$(VERSION)

# Non-Installable Header Files
noinst_HEADERS =

# Configuration files
sysconf_DATA =

# Scripts that are used in the libraries
pkgdata_SCRIPTS =

# System wide libraries
lib_LTLIBRARIES =

# providerdir defines where provider libraries will be installed (@PROVIDERDIR@ is set by the configure script). 
providerdir = @PROVIDERDIR@

# Start from an empty list for files to clean up
CLEANFILES =

# Start from an empty extra distribution file list
EXTRA_DIST =

# Pre Build requirements need to be compiled prior anything else
BUILT_SOURCES = 

# Build subdirectories
SUBDIRS = resource-access provider

######################################################################################
# sed scriptlets for replacing values in .in files
do_substDir    = sed -e 's,[@]SYSCONFDIR[@],$(sysconfdir),g' \
                     -e 's,[@]SCRIPTDIR[@],$(pkgdatadir),g'


######################################################################################
# Automake instructions for documentation
doc_DATA = README AUTHORS COPYING 


######################################################################################
# We must explicity add the RPM spec file to the distribution package
EXTRA_DIST += $(PACKAGE).spec


######################################################################################
# Automake instructions for ./model subdir
SCHEMAS = $(srcdir)/model/Linux_Samba.mof 

REGISTRATIONS = $(srcdir)/model/Linux_Samba.registration

# We must explicity add all the schema files to the distribution package
pkgdata_DATA = $(SCHEMAS) $(REGISTRATIONS)

pkgdata_SCRIPTS += $(srcdir)/provider-register.sh

EXTRA_DIST += model $(pkgdata_SCRIPTS)


# Register the provider(s) and class definition(s) to the current CIM server/CIMOM
postinstall:
	sh provider-register.sh -t @CIMSERVER@ -r $(REGISTRATIONS) -m $(SCHEMAS)

preuninstall:
	sh provider-register.sh -d -t @CIMSERVER@ -r $(REGISTRATIONS) -m $(SCHEMAS)

dist-hook:
	test -d "$(distdir)" &&	rm -rf `find $(distdir) -type d -name CVS`