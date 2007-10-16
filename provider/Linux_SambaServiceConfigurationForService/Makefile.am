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
              -I${srcdir}/../Linux_SambaService \
              -I${srcdir}/../Linux_SambaServiceConfiguration

################################################################################
provider_LTLIBRARIES = \
               libcmpiLinux_SambaServiceConfigurationForService.la 

################################################################################
# Linux_SambaServiceConfigurationForService
libcmpiLinux_SambaServiceConfigurationForService_la_SOURCES = \
        CmpiLinux_SambaServiceConfigurationForServiceProvider.cpp \
        Linux_SambaServiceConfigurationForServiceDefaultImplementation.cpp \
        Linux_SambaServiceConfigurationForServiceExternal.cpp \
        Linux_SambaServiceConfigurationForServiceFactory.cpp \
        Linux_SambaServiceConfigurationForServiceInstance.cpp \
        Linux_SambaServiceConfigurationForServiceInstanceName.cpp \
        Linux_SambaServiceConfigurationForServiceManualInstance.cpp \
        Linux_SambaServiceConfigurationForServiceRepositoryExternal.cpp \
        Linux_SambaServiceConfigurationForServiceRepositoryInstance.cpp \
        Linux_SambaServiceConfigurationForServiceResourceAccess.cpp

noinst_HEADERS+= \
        CmpiLinux_SambaServiceConfigurationForServiceProvider.h \
        Linux_SambaServiceConfigurationForServiceDefaultImplementation.h \
        Linux_SambaServiceConfigurationForServiceExternal.h \
        Linux_SambaServiceConfigurationForServiceFactory.h \
        Linux_SambaServiceConfigurationForServiceInstance.h \
        Linux_SambaServiceConfigurationForServiceInstanceName.h \
        Linux_SambaServiceConfigurationForServiceInterface.h \
        Linux_SambaServiceConfigurationForServiceManualInstance.h \
        Linux_SambaServiceConfigurationForServiceRepositoryExternal.h \
        Linux_SambaServiceConfigurationForServiceRepositoryInstance.h \
        Linux_SambaServiceConfigurationForServiceResourceAccess.h

libcmpiLinux_SambaServiceConfigurationForService_la_LIBADD = \
        $(top_builddir)/resource-access/libRaToolsSmb.la \
        $(top_builddir)/provider/libIBM_SmbProviderTooling.la \
        $(top_builddir)/provider/libLinux_SmbGeneralProviderBasic.la \
        $(top_builddir)/provider/Linux_SambaService/libcmpiLinux_SambaService.la \
        $(top_builddir)/provider/Linux_SambaServiceConfiguration/libcmpiLinux_SambaServiceConfiguration.la

libcmpiLinux_SambaServiceConfigurationForService_la_LDFLAGS = -avoid-version
