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
              -I${srcdir}/../Linux_SambaService \
              -I${srcdir}/../Linux_SambaHost

################################################################################
provider_LTLIBRARIES = \
               libcmpiLinux_SambaHostsForService.la 

################################################################################
# Linux_SambaHostsForService
libcmpiLinux_SambaHostsForService_la_SOURCES = \
        CmpiLinux_SambaHostsForServiceProvider.cpp \
        Linux_SambaHostsForServiceDefaultImplementation.cpp \
        Linux_SambaHostsForServiceExternal.cpp \
        Linux_SambaHostsForServiceFactory.cpp \
        Linux_SambaHostsForServiceInstance.cpp \
        Linux_SambaHostsForServiceInstanceName.cpp \
        Linux_SambaHostsForServiceManualInstance.cpp \
        Linux_SambaHostsForServiceRepositoryExternal.cpp \
        Linux_SambaHostsForServiceRepositoryInstance.cpp \
        Linux_SambaHostsForServiceResourceAccess.cpp

noinst_HEADERS+= \
        CmpiLinux_SambaHostsForServiceProvider.h \
        Linux_SambaHostsForServiceDefaultImplementation.h \
        Linux_SambaHostsForServiceExternal.h \
        Linux_SambaHostsForServiceFactory.h \
        Linux_SambaHostsForServiceInstance.h \
        Linux_SambaHostsForServiceInstanceName.h \
        Linux_SambaHostsForServiceInterface.h \
        Linux_SambaHostsForServiceManualInstance.h \
        Linux_SambaHostsForServiceRepositoryExternal.h \
        Linux_SambaHostsForServiceRepositoryInstance.h \
        Linux_SambaHostsForServiceResourceAccess.h

libcmpiLinux_SambaHostsForService_la_LIBADD = \
        $(top_builddir)/resource-access/libRaToolsSmb.la \
        $(top_builddir)/provider/libIBM_SmbProviderTooling.la \
        $(top_builddir)/provider/libLinux_SmbGeneralProviderBasic.la \
        $(top_builddir)/provider/Linux_SambaHost/libcmpiLinux_SambaHost.la \
        $(top_builddir)/provider/Linux_SambaService/libcmpiLinux_SambaService.la

libcmpiLinux_SambaHostsForService_la_LDFLAGS = -avoid-version
