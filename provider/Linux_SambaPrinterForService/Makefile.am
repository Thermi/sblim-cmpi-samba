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
              -I${srcdir}/../Linux_SambaPrinterOptions \
              -I${srcdir}/../Linux_SambaService

################################################################################
provider_LTLIBRARIES = \
               libcmpiLinux_SambaPrinterForService.la 

################################################################################
# Linux_SambaPrinterForService
libcmpiLinux_SambaPrinterForService_la_SOURCES = \
        CmpiLinux_SambaPrinterForServiceProvider.cpp \
        Linux_SambaPrinterForServiceDefaultImplementation.cpp \
        Linux_SambaPrinterForServiceExternal.cpp \
        Linux_SambaPrinterForServiceFactory.cpp \
        Linux_SambaPrinterForServiceInstance.cpp \
        Linux_SambaPrinterForServiceInstanceName.cpp \
        Linux_SambaPrinterForServiceManualInstance.cpp \
        Linux_SambaPrinterForServiceRepositoryExternal.cpp \
        Linux_SambaPrinterForServiceRepositoryInstance.cpp \
        Linux_SambaPrinterForServiceResourceAccess.cpp

noinst_HEADERS+= \
        CmpiLinux_SambaPrinterForServiceProvider.h \
        Linux_SambaPrinterForServiceDefaultImplementation.h \
        Linux_SambaPrinterForServiceExternal.h \
        Linux_SambaPrinterForServiceFactory.h \
        Linux_SambaPrinterForServiceInstance.h \
        Linux_SambaPrinterForServiceInstanceName.h \
        Linux_SambaPrinterForServiceInterface.h \
        Linux_SambaPrinterForServiceManualInstance.h \
        Linux_SambaPrinterForServiceRepositoryExternal.h \
        Linux_SambaPrinterForServiceRepositoryInstance.h \
        Linux_SambaPrinterForServiceResourceAccess.h

libcmpiLinux_SambaPrinterForService_la_LIBADD = \
        $(top_builddir)/resource-access/libRaToolsSmb.la \
        $(top_builddir)/provider/libIBM_SmbProviderTooling.la \
        $(top_builddir)/provider/libLinux_SmbGeneralProviderBasic.la \
        $(top_builddir)/provider/Linux_SambaPrinterOptions/libcmpiLinux_SambaPrinterOptions.la \
        $(top_builddir)/provider/Linux_SambaService/libcmpiLinux_SambaService.la

libcmpiLinux_SambaPrinterForService_la_LDFLAGS = -avoid-version
