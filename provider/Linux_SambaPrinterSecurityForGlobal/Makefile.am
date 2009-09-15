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
              -I${srcdir}/../Linux_SambaPrinterSecurityOptions

################################################################################
provider_LTLIBRARIES = \
               libcmpiLinux_SambaPrinterSecurityForGlobal.la 

################################################################################
# Linux_SambaPrinterSecurityForGlobal
libcmpiLinux_SambaPrinterSecurityForGlobal_la_SOURCES = \
        CmpiLinux_SambaPrinterSecurityForGlobalProvider.cpp \
        Linux_SambaPrinterSecurityForGlobalDefaultImplementation.cpp \
        Linux_SambaPrinterSecurityForGlobalExternal.cpp \
        Linux_SambaPrinterSecurityForGlobalFactory.cpp \
        Linux_SambaPrinterSecurityForGlobalInstance.cpp \
        Linux_SambaPrinterSecurityForGlobalInstanceName.cpp \
        Linux_SambaPrinterSecurityForGlobalManualInstance.cpp \
        Linux_SambaPrinterSecurityForGlobalRepositoryExternal.cpp \
        Linux_SambaPrinterSecurityForGlobalRepositoryInstance.cpp \
        Linux_SambaPrinterSecurityForGlobalResourceAccess.cpp

noinst_HEADERS+= \
        CmpiLinux_SambaPrinterSecurityForGlobalProvider.h \
        Linux_SambaPrinterSecurityForGlobalDefaultImplementation.h \
        Linux_SambaPrinterSecurityForGlobalExternal.h \
        Linux_SambaPrinterSecurityForGlobalFactory.h \
        Linux_SambaPrinterSecurityForGlobalInstance.h \
        Linux_SambaPrinterSecurityForGlobalInstanceName.h \
        Linux_SambaPrinterSecurityForGlobalInterface.h \
        Linux_SambaPrinterSecurityForGlobalManualInstance.h \
        Linux_SambaPrinterSecurityForGlobalRepositoryExternal.h \
        Linux_SambaPrinterSecurityForGlobalRepositoryInstance.h \
        Linux_SambaPrinterSecurityForGlobalResourceAccess.h

libcmpiLinux_SambaPrinterSecurityForGlobal_la_LIBADD = \
        $(top_builddir)/resource-access/libRaToolsSmb.la \
        $(top_builddir)/provider/libIBM_SmbProviderTooling.la \
        $(top_builddir)/provider/libLinux_SmbGeneralProviderBasic.la \
        $(top_builddir)/provider/Linux_SambaGlobalOptions/libcmpiLinux_SambaGlobalOptions.la \
        $(top_builddir)/provider/Linux_SambaPrinterSecurityOptions/libcmpiLinux_SambaPrinterSecurityOptions.la

libcmpiLinux_SambaPrinterSecurityForGlobal_la_LDFLAGS = -avoid-version
