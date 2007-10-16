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
              -I${srcdir}/../Linux_SambaGlobalOptions \
              -I${srcdir}/../Linux_SambaService

################################################################################
provider_LTLIBRARIES = \
               libcmpiLinux_SambaGlobalForService.la 

################################################################################
# Linux_SambaGlobalForService
libcmpiLinux_SambaGlobalForService_la_SOURCES = \
        CmpiLinux_SambaGlobalForServiceProvider.cpp \
        Linux_SambaGlobalForServiceDefaultImplementation.cpp \
        Linux_SambaGlobalForServiceExternal.cpp \
        Linux_SambaGlobalForServiceFactory.cpp \
        Linux_SambaGlobalForServiceInstance.cpp \
        Linux_SambaGlobalForServiceInstanceName.cpp \
        Linux_SambaGlobalForServiceManualInstance.cpp \
        Linux_SambaGlobalForServiceRepositoryExternal.cpp \
        Linux_SambaGlobalForServiceRepositoryInstance.cpp \
        Linux_SambaGlobalForServiceResourceAccess.cpp

noinst_HEADERS+= \
        CmpiLinux_SambaGlobalForServiceProvider.h \
        Linux_SambaGlobalForServiceDefaultImplementation.h \
        Linux_SambaGlobalForServiceExternal.h \
        Linux_SambaGlobalForServiceFactory.h \
        Linux_SambaGlobalForServiceInstance.h \
        Linux_SambaGlobalForServiceInstanceName.h \
        Linux_SambaGlobalForServiceInterface.h \
        Linux_SambaGlobalForServiceManualInstance.h \
        Linux_SambaGlobalForServiceRepositoryExternal.h \
        Linux_SambaGlobalForServiceRepositoryInstance.h \
        Linux_SambaGlobalForServiceResourceAccess.h

libcmpiLinux_SambaGlobalForService_la_LIBADD = \
        $(top_builddir)/resource-access/libRaToolsSmb.la \
        $(top_builddir)/provider/libIBM_SmbProviderTooling.la \
        $(top_builddir)/provider/libLinux_SmbGeneralProviderBasic.la \
        $(top_builddir)/provider/Linux_SambaService/libcmpiLinux_SambaService.la \
        $(top_builddir)/provider/Linux_SambaGlobalOptions/libcmpiLinux_SambaGlobalOptions.la

libcmpiLinux_SambaGlobalForService_la_LDFLAGS = -avoid-version
