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
              -I${srcdir}/../Linux_SambaUser

################################################################################
provider_LTLIBRARIES = \
               libcmpiLinux_SambaPrinterAdminForGlobal.la 

################################################################################
# Linux_SambaPrinterAdminForGlobal
libcmpiLinux_SambaPrinterAdminForGlobal_la_SOURCES = \
        CmpiLinux_SambaPrinterAdminForGlobalProvider.cpp \
        Linux_SambaPrinterAdminForGlobalDefaultImplementation.cpp \
        Linux_SambaPrinterAdminForGlobalExternal.cpp \
        Linux_SambaPrinterAdminForGlobalFactory.cpp \
        Linux_SambaPrinterAdminForGlobalInstance.cpp \
        Linux_SambaPrinterAdminForGlobalInstanceName.cpp \
        Linux_SambaPrinterAdminForGlobalManualInstance.cpp \
        Linux_SambaPrinterAdminForGlobalRepositoryExternal.cpp \
        Linux_SambaPrinterAdminForGlobalRepositoryInstance.cpp \
        Linux_SambaPrinterAdminForGlobalResourceAccess.cpp

noinst_HEADERS+= \
        CmpiLinux_SambaPrinterAdminForGlobalProvider.h \
        Linux_SambaPrinterAdminForGlobalDefaultImplementation.h \
        Linux_SambaPrinterAdminForGlobalExternal.h \
        Linux_SambaPrinterAdminForGlobalFactory.h \
        Linux_SambaPrinterAdminForGlobalInstance.h \
        Linux_SambaPrinterAdminForGlobalInstanceName.h \
        Linux_SambaPrinterAdminForGlobalInterface.h \
        Linux_SambaPrinterAdminForGlobalManualInstance.h \
        Linux_SambaPrinterAdminForGlobalRepositoryExternal.h \
        Linux_SambaPrinterAdminForGlobalRepositoryInstance.h \
        Linux_SambaPrinterAdminForGlobalResourceAccess.h

#libcmpiLinux_SambaPrinterAdminForGlobal_la_DEPENDENCIES = \
#        libcmpiLinux_SambaServiceConfiguration.la 
#        libcmpiLinux_SambaService.la \
#        libcmpiCIM_ConcreteJob.la

libcmpiLinux_SambaPrinterAdminForGlobal_la_LIBADD = \
        $(top_builddir)/resource-access/libRaToolsSmb.la \
        $(top_builddir)/provider/libIBM_SmbProviderTooling.la \
        $(top_builddir)/provider/libLinux_SmbGeneralProviderBasic.la \
        $(top_builddir)/provider/Linux_SambaGlobalOptions/libcmpiLinux_SambaGlobalOptions.la \
        $(top_builddir)/provider/Linux_SambaUser/libcmpiLinux_SambaUser.la

libcmpiLinux_SambaPrinterAdminForGlobal_la_LDFLAGS = -avoid-version
