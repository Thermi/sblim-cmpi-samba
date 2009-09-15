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
              -I${srcdir}/../../resource-access \
              -I${srcdir}/../Linux_SambaGlobalOptions \
              -I${srcdir}/../Linux_SambaGlobalBrowseOptions

################################################################################
provider_LTLIBRARIES = \
               libcmpiLinux_SambaGlobalBrowseForGlobal.la 

################################################################################
# Linux_SambaGlobalBrowseForGlobal
libcmpiLinux_SambaGlobalBrowseForGlobal_la_SOURCES = \
        CmpiLinux_SambaGlobalBrowseForGlobalProvider.cpp \
        Linux_SambaGlobalBrowseForGlobalDefaultImplementation.cpp \
        Linux_SambaGlobalBrowseForGlobalExternal.cpp \
        Linux_SambaGlobalBrowseForGlobalFactory.cpp \
        Linux_SambaGlobalBrowseForGlobalInstance.cpp \
        Linux_SambaGlobalBrowseForGlobalInstanceName.cpp \
        Linux_SambaGlobalBrowseForGlobalManualInstance.cpp \
        Linux_SambaGlobalBrowseForGlobalRepositoryExternal.cpp \
        Linux_SambaGlobalBrowseForGlobalRepositoryInstance.cpp \
        Linux_SambaGlobalBrowseForGlobalResourceAccess.cpp

noinst_HEADERS+= \
        CmpiLinux_SambaGlobalBrowseForGlobalProvider.h \
        Linux_SambaGlobalBrowseForGlobalDefaultImplementation.h \
        Linux_SambaGlobalBrowseForGlobalExternal.h \
        Linux_SambaGlobalBrowseForGlobalFactory.h \
        Linux_SambaGlobalBrowseForGlobalInstance.h \
        Linux_SambaGlobalBrowseForGlobalInstanceName.h \
        Linux_SambaGlobalBrowseForGlobalInterface.h \
        Linux_SambaGlobalBrowseForGlobalManualInstance.h \
        Linux_SambaGlobalBrowseForGlobalRepositoryExternal.h \
        Linux_SambaGlobalBrowseForGlobalRepositoryInstance.h \
        Linux_SambaGlobalBrowseForGlobalResourceAccess.h

libcmpiLinux_SambaGlobalBrowseForGlobal_la_LIBADD = \
        $(top_builddir)/resource-access/libRaToolsSmb.la \
        $(top_builddir)/provider/libIBM_SmbProviderTooling.la \
        $(top_builddir)/provider/libLinux_SmbGeneralProviderBasic.la \
        $(top_builddir)/provider/Linux_SambaGlobalBrowseOptions/libcmpiLinux_SambaGlobalBrowseOptions.la \
        $(top_builddir)/provider/Linux_SambaGlobalOptions/libcmpiLinux_SambaGlobalOptions.la

libcmpiLinux_SambaGlobalBrowseForGlobal_la_LDFLAGS = -avoid-version
