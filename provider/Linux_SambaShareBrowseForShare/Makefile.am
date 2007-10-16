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
              -I${srcdir}/../../resource-access \
              -I${srcdir}/../Linux_SambaShareOptions \
              -I${srcdir}/../Linux_SambaShareBrowseOptions

################################################################################
provider_LTLIBRARIES = \
               libcmpiLinux_SambaShareBrowseForShare.la 

################################################################################
# Linux_SambaShareBrowseForShare
libcmpiLinux_SambaShareBrowseForShare_la_SOURCES = \
        CmpiLinux_SambaShareBrowseForShareProvider.cpp \
        Linux_SambaShareBrowseForShareDefaultImplementation.cpp \
        Linux_SambaShareBrowseForShareExternal.cpp \
        Linux_SambaShareBrowseForShareFactory.cpp \
        Linux_SambaShareBrowseForShareInstance.cpp \
        Linux_SambaShareBrowseForShareInstanceName.cpp \
        Linux_SambaShareBrowseForShareManualInstance.cpp \
        Linux_SambaShareBrowseForShareRepositoryExternal.cpp \
        Linux_SambaShareBrowseForShareRepositoryInstance.cpp \
        Linux_SambaShareBrowseForShareResourceAccess.cpp

noinst_HEADERS+= \
        CmpiLinux_SambaShareBrowseForShareProvider.h \
        Linux_SambaShareBrowseForShareDefaultImplementation.h \
        Linux_SambaShareBrowseForShareExternal.h \
        Linux_SambaShareBrowseForShareFactory.h \
        Linux_SambaShareBrowseForShareInstance.h \
        Linux_SambaShareBrowseForShareInstanceName.h \
        Linux_SambaShareBrowseForShareInterface.h \
        Linux_SambaShareBrowseForShareManualInstance.h \
        Linux_SambaShareBrowseForShareRepositoryExternal.h \
        Linux_SambaShareBrowseForShareRepositoryInstance.h \
        Linux_SambaShareBrowseForShareResourceAccess.h

libcmpiLinux_SambaShareBrowseForShare_la_LIBADD = \
        $(top_builddir)/resource-access/libRaToolsSmb.la \
        $(top_builddir)/provider/libIBM_SmbProviderTooling.la \
        $(top_builddir)/provider/libLinux_SmbGeneralProviderBasic.la \
        $(top_builddir)/provider/Linux_SambaShareOptions/libcmpiLinux_SambaShareOptions.la \
        $(top_builddir)/provider/Linux_SambaShareBrowseOptions/libcmpiLinux_SambaShareBrowseOptions.la

libcmpiLinux_SambaShareBrowseForShare_la_LDFLAGS = -avoid-version
