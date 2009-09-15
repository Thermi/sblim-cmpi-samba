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
              -I${srcdir}/../Linux_SambaUser

################################################################################
provider_LTLIBRARIES = \
               libcmpiLinux_SambaUsersForService.la 

################################################################################
# Linux_SambaUsersForService
libcmpiLinux_SambaUsersForService_la_SOURCES = \
        CmpiLinux_SambaUsersForServiceProvider.cpp \
        Linux_SambaUsersForServiceDefaultImplementation.cpp \
        Linux_SambaUsersForServiceExternal.cpp \
        Linux_SambaUsersForServiceFactory.cpp \
        Linux_SambaUsersForServiceInstance.cpp \
        Linux_SambaUsersForServiceInstanceName.cpp \
        Linux_SambaUsersForServiceManualInstance.cpp \
        Linux_SambaUsersForServiceRepositoryExternal.cpp \
        Linux_SambaUsersForServiceRepositoryInstance.cpp \
        Linux_SambaUsersForServiceResourceAccess.cpp

noinst_HEADERS+= \
        CmpiLinux_SambaUsersForServiceProvider.h \
        Linux_SambaUsersForServiceDefaultImplementation.h \
        Linux_SambaUsersForServiceExternal.h \
        Linux_SambaUsersForServiceFactory.h \
        Linux_SambaUsersForServiceInstance.h \
        Linux_SambaUsersForServiceInstanceName.h \
        Linux_SambaUsersForServiceInterface.h \
        Linux_SambaUsersForServiceManualInstance.h \
        Linux_SambaUsersForServiceRepositoryExternal.h \
        Linux_SambaUsersForServiceRepositoryInstance.h \
        Linux_SambaUsersForServiceResourceAccess.h

libcmpiLinux_SambaUsersForService_la_LIBADD = \
        $(top_builddir)/resource-access/libRaToolsSmb.la \
        $(top_builddir)/provider/libIBM_SmbProviderTooling.la \
        $(top_builddir)/provider/libLinux_SmbGeneralProviderBasic.la \
        $(top_builddir)/provider/Linux_SambaService/libcmpiLinux_SambaService.la \
        $(top_builddir)/provider/Linux_SambaUser/libcmpiLinux_SambaUser.la

libcmpiLinux_SambaUsersForService_la_LDFLAGS = -avoid-version
