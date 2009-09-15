# ==================================================================
# (C) Copyright IBM Corp. 2005
#
# THIS FILE IS PROVIDED UNDER THE TERMS OF THE ECLIPSE PUBLIC LICENSE
# ("AGREEMENT"). ANY USE, REPRODUCTION OR DISTRIBUTION OF THIS FILE
# CONSTITUTES RECIPIENTS ACCEPTANCE OF THE AGREEMENT.
#
# You can obtain a current copy of the Eclipse Public License from
# http://www.opensource.org/licenses/eclipse-1.0.php
#
# Author:       Wolfgang Taphorn <taphorn@de.ibm.com>
# Description:  Automake input file for cmpi provider.
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

AM_CFLAGS = -Wall

AM_CPPFLAGS = \
    -DDEBUG \
    -D_COMPILE_UNIX \
    -DCMPI_STANDALONE \
    -I${srcdir}/../include \
    -I${srcdir}/../../resource-access

################################################################################
provider_LTLIBRARIES = \
               libcmpiLinux_SambaGlobalBrowseOptions.la 

################################################################################
# Linux_SambaGlobalBrowseOptions
libcmpiLinux_SambaGlobalBrowseOptions_la_SOURCES = \
        CmpiLinux_SambaGlobalBrowseOptionsProvider.cpp \
        Linux_SambaGlobalBrowseOptionsDefaultImplementation.cpp \
        Linux_SambaGlobalBrowseOptionsExternal.cpp \
        Linux_SambaGlobalBrowseOptionsFactory.cpp \
        Linux_SambaGlobalBrowseOptionsInstance.cpp \
        Linux_SambaGlobalBrowseOptionsInstanceName.cpp \
        Linux_SambaGlobalBrowseOptionsManualInstance.cpp \
        Linux_SambaGlobalBrowseOptionsRepositoryExternal.cpp \
        Linux_SambaGlobalBrowseOptionsRepositoryInstance.cpp \
        Linux_SambaGlobalBrowseOptionsResourceAccess.cpp

noinst_HEADERS+= \
        CmpiLinux_SambaGlobalBrowseOptionsProvider.h \
        Linux_SambaGlobalBrowseOptionsDefaultImplementation.h \
        Linux_SambaGlobalBrowseOptionsExternal.h \
        Linux_SambaGlobalBrowseOptionsFactory.h \
        Linux_SambaGlobalBrowseOptionsInstance.h \
        Linux_SambaGlobalBrowseOptionsInstanceName.h \
        Linux_SambaGlobalBrowseOptionsInterface.h \
        Linux_SambaGlobalBrowseOptionsManualInstance.h \
        Linux_SambaGlobalBrowseOptionsRepositoryExternal.h \
        Linux_SambaGlobalBrowseOptionsRepositoryInstance.h \
        Linux_SambaGlobalBrowseOptionsResourceAccess.h

libcmpiLinux_SambaGlobalBrowseOptions_la_LIBADD = \
        $(top_builddir)/resource-access/libRaToolsSmb.la \
        $(top_builddir)/provider/libIBM_SmbProviderTooling.la \
        $(top_builddir)/provider/libLinux_SmbGeneralProviderBasic.la

libcmpiLinux_SambaGlobalBrowseOptions_la_LDFLAGS = -avoid-version
