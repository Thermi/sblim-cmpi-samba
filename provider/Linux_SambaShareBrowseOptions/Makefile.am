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

AM_CPPFLAGS = -DDEBUG \
              -D_COMPILE_UNIX \
              -DCMPI_STANDALONE \
              -I${srcdir}/../include \
              -I${srcdir}/../../resource-access

################################################################################
provider_LTLIBRARIES = \
               libcmpiLinux_SambaShareBrowseOptions.la 

################################################################################
# Linux_SambaShareBrowseOptions
libcmpiLinux_SambaShareBrowseOptions_la_SOURCES = \
        CmpiLinux_SambaShareBrowseOptionsProvider.cpp \
        Linux_SambaShareBrowseOptionsDefaultImplementation.cpp \
        Linux_SambaShareBrowseOptionsExternal.cpp \
        Linux_SambaShareBrowseOptionsFactory.cpp \
        Linux_SambaShareBrowseOptionsInstance.cpp \
        Linux_SambaShareBrowseOptionsInstanceName.cpp \
        Linux_SambaShareBrowseOptionsManualInstance.cpp \
        Linux_SambaShareBrowseOptionsRepositoryExternal.cpp \
        Linux_SambaShareBrowseOptionsRepositoryInstance.cpp \
        Linux_SambaShareBrowseOptionsResourceAccess.cpp

noinst_HEADERS+= \
        CmpiLinux_SambaShareBrowseOptionsProvider.h \
        Linux_SambaShareBrowseOptionsDefaultImplementation.h \
        Linux_SambaShareBrowseOptionsExternal.h \
        Linux_SambaShareBrowseOptionsFactory.h \
        Linux_SambaShareBrowseOptionsInstance.h \
        Linux_SambaShareBrowseOptionsInstanceName.h \
        Linux_SambaShareBrowseOptionsInterface.h \
        Linux_SambaShareBrowseOptionsManualInstance.h \
        Linux_SambaShareBrowseOptionsRepositoryExternal.h \
        Linux_SambaShareBrowseOptionsRepositoryInstance.h \
        Linux_SambaShareBrowseOptionsResourceAccess.h

libcmpiLinux_SambaShareBrowseOptions_la_LIBADD = \
        $(top_builddir)/resource-access/libRaToolsSmb.la \
        $(top_builddir)/provider/libIBM_SmbProviderTooling.la \
        $(top_builddir)/provider/libLinux_SmbGeneralProviderBasic.la

libcmpiLinux_SambaShareBrowseOptions_la_LDFLAGS = -avoid-version
