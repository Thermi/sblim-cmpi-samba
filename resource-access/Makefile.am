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

# Scripts that are used in the libraries but are not content of the tar ball
nodist_pkgdata_SCRIPTS =

# Scripts that are used in the libraries but are not content of the tar ball
nodist_pkgdata_DATA =

# System wide libraries
lib_LTLIBRARIES =

# providerdir defines where provider libraries will be installed (@PROVIDERDIR@ is set by the configure script).
providerdir = @PROVIDERDIR@

# Start from an empty list for files to clean up
CLEANFILES =

# Start from an empty extra distribution file list
EXTRA_DIST =


######################################################################################
# Automake instructions for 'resource-access' dir

smt_smb_ra_support.conf: smt_smb_ra_support.conf.pre
	sed -e 's,[@]SCRIPTDIR[@],$(pkgdatadir),g' -e s?$$\{prefix\}?$(prefix)?g -e s?$$\{exec_prefix\}?$(prefix)?g $< > $@

scripts/smt_smb_ra_get_defaults.sh: scripts/smt_smb_ra_get_defaults.sh.pre
	sed -e s?$$\{prefix\}?$(prefix)?g -e s?$$\{exec_prefix\}?$(prefix)?g $< > $@

# Adding new generated files to file list for clean up
CLEANFILES += \
        smt_smb_ra_support.conf \
        scripts/smt_smb_ra_get_defaults.sh 

# Files for /etc directory
sysconf_DATA += \
        smt_smb_ra_support.conf \
	smt_smb_ra_synonyms.conf 

#  LibRaTools libraries
lib_LTLIBRARIES += \
        libRaToolsSmb.la 

# LibRaTools sources
libRaToolsSmb_la_SOURCES = \
        smt_smb_ra_synonyms.conf \
        smt_smb_ra_support.c \
        smt_smb_ra_support.h \
        smt_smb_ra_data.c \
        smt_smb_ra_path.c \
        smt_smb_ra_path.h 

libRaToolsSmb_la_CPPFLAGS = \
        -DUSE_CACHE \
        -DCONFFILE=\"$(sysconfdir)/smt_smb_ra_support.conf\" \
        -D_GNU_SOURCE

libRaToolsSmb_la_LIBADD = \
        -lpthread

# Scripts that are copied to an executable (at least for the libs) directory.
pkgdata_SCRIPTS += \
        scripts/smt_smb_ra_add_user_to_group.py \
        scripts/smt_smb_ra_create_samba_group.py \
        scripts/smt_smb_ra_create_samba_user.py \
        scripts/smt_smb_ra_create_sys_user.py \
        scripts/smt_smb_ra_delete_samba_group.py \
        scripts/smt_smb_ra_delete_samba_user.py \
        scripts/smt_smb_ra_delete_service.py \
        scripts/smt_smb_ra_disable.py \
        scripts/smt_smb_ra_enable.py \
        scripts/smt_smb_ra_errors.py \
        scripts/smt_smb_ra_get_all_services.py \
        scripts/smt_smb_ra_get_db_entries.py \
        scripts/smt_smb_ra_get_group_mappings.py \
        scripts/smt_smb_ra_get_option.py \
        scripts/smt_smb_ra_get_option_merge.py \
        scripts/smt_smb_ra_get_service.py \
        scripts/smt_smb_ra_get_services_list.py \
        scripts/smt_smb_ra_get_synonyms.py \
        scripts/smt_smb_ra_get_sys_printers.py \
        scripts/smt_smb_ra_get_sys_users.py \
        scripts/smt_smb_ra_get_user_mappings.py \
        scripts/smt_smb_ra_get_user_sys_groups.py \
        scripts/smt_smb_ra_parse-params.py \
        scripts/smt_smb_ra_parser.py \
        scripts/smt_smb_ra_remove_user_from_group.py \
        scripts/smt_smb_ra_set_group_mapping.py \
        scripts/smt_smb_ra_set_option.py \
        scripts/smt_smb_ra_set_user_mappings.py \
        scripts/smt_smb_ra_test.py 

# Non distributed files
nodist_pkgdata_SCRIPTS += \
        scripts/smt_smb_ra_get_defaults.sh

 
# Installable Header Files
sbliminc_HEADERS += \
        smt_smb_ra_path.h \
        smt_smb_ra_support.h

# We must explicity add the list of scripts to the target
EXTRA_DIST += \
	$(pkgdata_SCRIPTS)

