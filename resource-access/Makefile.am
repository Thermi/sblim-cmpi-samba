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
# Description:  Automake input file for resource access layer.
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


######################################################################################
# sed scriptlets for replacing values in .in files
do_substDir = \
        sed -e 's,[@]SYSCONFDIR[@],$(sysconfdir),g' \
            -e 's,[@]SCRIPTDIR[@],$(pkgdatadir),g'



######################################################################################
# Automake instructions for 'resource-access' dir

BUILT_SOURCES += \
        $(srcdir)/smt_smb_ra_support.conf \
        $(srcdir)/smt_smb_ra_support.h\
        $(srcdir)/scripts/smt_smb_ra_get_defaults.sh

$(srcdir)/smt_smb_ra_support.conf: $(srcdir)/smt_smb_ra_support.conf.in
	$(do_substDir) < $(srcdir)/smt_smb_ra_support.conf.in > $(srcdir)/smt_smb_ra_support.conf

$(srcdir)/scripts/smt_smb_ra_get_defaults.sh: $(srcdir)/scripts/smt_smb_ra_get_defaults.sh.in
	$(do_substDir) < $(srcdir)/scripts/smt_smb_ra_get_defaults.sh.in > $(srcdir)/scripts/smt_smb_ra_get_defaults.sh

$(srcdir)/smt_smb_ra_support.h: $(srcdir)/smt_smb_ra_support.h.in
	$(do_substDir) < $(srcdir)/smt_smb_ra_support.h.in > $(srcdir)/smt_smb_ra_support.h

# Adding new generated files to file list for clean up
CLEANFILES += \
        $(srcdir)/smt_smb_ra_support.conf \
        $(srcdir)/smt_smb_ra_get_support.h \
        $(srcdir)/smt_smb_ra_synonyms.conf \
        $(srcdir)/scripts/smt_smb_ra_support.h.in

# Files for /etc directory
sysconf_DATA += \
        $(srcdir)/smt_smb_ra_support.conf 

#  LibRaTools libraries
lib_LTLIBRARIES += \
        libRaToolsSmb.la 

# LibRaTools sources
libRaToolsSmb_la_SOURCES = \
        $(srcdir)/smt_smb_ra_support.conf.in \
        $(srcdir)/smt_smb_ra_support.c \
        $(srcdir)/smt_smb_ra_data.c \
        $(srcdir)/smt_smb_ra_path.c \
        $(srcdir)/smt_smb_ra_support.h.in \
        $(srcdir)/scripts/smt_smb_ra_get_defaults.sh.in
		
libRaToolsSmb_la_CPPFLAGS = \
        -DUSE_CACHE

libRaToolsSmb_la_LIBADD = \
        -lpthread

# Scripts that are copied to an executable (at least for the libs) directory.
pkgdata_SCRIPTS += \
        $(srcdir)/scripts/smt_smb_ra_add_user_to_group.py \
        $(srcdir)/scripts/smt_smb_ra_create_samba_group.py \
        $(srcdir)/scripts/smt_smb_ra_create_samba_user.py \
        $(srcdir)/scripts/smt_smb_ra_create_sys_user.py \
        $(srcdir)/scripts/smt_smb_ra_delete_samba_group.py \
        $(srcdir)/scripts/smt_smb_ra_delete_samba_user.py \
        $(srcdir)/scripts/smt_smb_ra_delete_service.py \
        $(srcdir)/scripts/smt_smb_ra_disable.py \
        $(srcdir)/scripts/smt_smb_ra_enable.py \
        $(srcdir)/scripts/smt_smb_ra_errors.py \
        $(srcdir)/scripts/smt_smb_ra_get_all_services.py \
        $(srcdir)/scripts/smt_smb_ra_get_db_entries.py \
        $(srcdir)/scripts/smt_smb_ra_get_group_mappings.py \
        $(srcdir)/scripts/smt_smb_ra_get_option.py \
        $(srcdir)/scripts/smt_smb_ra_get_option_merge.py \
        $(srcdir)/scripts/smt_smb_ra_get_service.py \
        $(srcdir)/scripts/smt_smb_ra_get_services_list.py \
        $(srcdir)/scripts/smt_smb_ra_get_synonyms.py \
        $(srcdir)/scripts/smt_smb_ra_get_sys_printers.py \
        $(srcdir)/scripts/smt_smb_ra_get_sys_users.py \
        $(srcdir)/scripts/smt_smb_ra_get_user_mappings.py \
        $(srcdir)/scripts/smt_smb_ra_get_user_sys_groups.py \
        $(srcdir)/scripts/smt_smb_ra_parse-params.py \
        $(srcdir)/scripts/smt_smb_ra_parser.py \
        $(srcdir)/scripts/smt_smb_ra_remove_user_from_group.py \
        $(srcdir)/scripts/smt_smb_ra_set_group_mapping.py \
        $(srcdir)/scripts/smt_smb_ra_set_option.py \
        $(srcdir)/scripts/smt_smb_ra_set_user_mappings.py \
        $(srcdir)/scripts/smt_smb_ra_test.py \
        $(srcdir)/scripts/smt_smb_ra_get_defaults.sh
 
# Installable Header Files
sbliminc_HEADERS += \
        $(srcdir)/smt_smb_ra_support.h

# We must explicity add the list of scripts to the target
EXTRA_DIST += \
        $(pkgdata_SCRIPTS)

