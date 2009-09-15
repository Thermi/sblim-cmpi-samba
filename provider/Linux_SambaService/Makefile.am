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
              -I${srcdir}/../CIM_ConcreteJob

################################################################################
provider_LTLIBRARIES = \
               libcmpiLinux_SambaService.la 

################################################################################
# Linux_SambaService
libcmpiLinux_SambaService_la_SOURCES = \
        CmpiLinux_SambaServiceProvider.cpp \
        Linux_SambaServiceDefaultImplementation.cpp \
        Linux_SambaServiceExternal.cpp \
        Linux_SambaServiceFactory.cpp \
        Linux_SambaServiceInstance.cpp \
        Linux_SambaServiceInstanceName.cpp \
        Linux_SambaServiceManualInstance.cpp \
        Linux_SambaServiceRepositoryExternal.cpp \
        Linux_SambaServiceRepositoryInstance.cpp \
        Linux_SambaServiceResourceAccess.cpp

noinst_HEADERS+= \
        CmpiLinux_SambaServiceProvider.h \
        Linux_SambaServiceDefaultImplementation.h \
        Linux_SambaServiceExternal.h \
        Linux_SambaServiceFactory.h \
        Linux_SambaServiceInstance.h \
        Linux_SambaServiceInstanceName.h \
        Linux_SambaServiceInterface.h \
        Linux_SambaServiceManualInstance.h \
        Linux_SambaServiceRepositoryExternal.h \
        Linux_SambaServiceRepositoryInstance.h \
        Linux_SambaServiceResourceAccess.h

libcmpiLinux_SambaService_la_LIBADD = \
        $(top_builddir)/resource-access/libRaToolsSmb.la \
        $(top_builddir)/provider/libIBM_SmbProviderTooling.la \
        $(top_builddir)/provider/libLinux_SmbGeneralProviderBasic.la \
        $(top_builddir)/provider/libLinux_SmbGeneralProviderBasic.la \
        $(top_builddir)/provider/CIM_ConcreteJob/libcmpiSambaCIM_ConcreteJob.la

libcmpiLinux_SambaService_la_LDFLAGS = -avoid-version




