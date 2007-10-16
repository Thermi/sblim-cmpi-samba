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
              -I${srcdir}/../Linux_SambaService

################################################################################
provider_LTLIBRARIES = \
               libcmpiLinux_SambaShareForService.la 

################################################################################
# Linux_SambaShareForService
libcmpiLinux_SambaShareForService_la_SOURCES = \
        CmpiLinux_SambaShareForServiceProvider.cpp \
        Linux_SambaShareForServiceDefaultImplementation.cpp \
        Linux_SambaShareForServiceExternal.cpp \
        Linux_SambaShareForServiceFactory.cpp \
        Linux_SambaShareForServiceInstance.cpp \
        Linux_SambaShareForServiceInstanceName.cpp \
        Linux_SambaShareForServiceManualInstance.cpp \
        Linux_SambaShareForServiceRepositoryExternal.cpp \
        Linux_SambaShareForServiceRepositoryInstance.cpp \
        Linux_SambaShareForServiceResourceAccess.cpp

noinst_HEADERS+= \
        CmpiLinux_SambaShareForServiceProvider.h \
        Linux_SambaShareForServiceDefaultImplementation.h \
        Linux_SambaShareForServiceExternal.h \
        Linux_SambaShareForServiceFactory.h \
        Linux_SambaShareForServiceInstance.h \
        Linux_SambaShareForServiceInstanceName.h \
        Linux_SambaShareForServiceInterface.h \
        Linux_SambaShareForServiceManualInstance.h \
        Linux_SambaShareForServiceRepositoryExternal.h \
        Linux_SambaShareForServiceRepositoryInstance.h \
        Linux_SambaShareForServiceResourceAccess.h

libcmpiLinux_SambaShareForService_la_LIBADD = \
        $(top_builddir)/resource-access/libRaToolsSmb.la \
        $(top_builddir)/provider/libIBM_SmbProviderTooling.la \
        $(top_builddir)/provider/libLinux_SmbGeneralProviderBasic.la \
        $(top_builddir)/provider/Linux_SambaShareOptions/libcmpiLinux_SambaShareOptions.la \
        $(top_builddir)/provider/Linux_SambaService/libcmpiLinux_SambaService.la

libcmpiLinux_SambaShareForService_la_LDFLAGS = -avoid-version
