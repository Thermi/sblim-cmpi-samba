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
              -I${srcdir}/../../resource-access

################################################################################
provider_LTLIBRARIES = \
               libcmpiLinux_SambaPrinterSecurityOptions.la 

################################################################################
# Linux_SambaPrinterSecurityOptions
libcmpiLinux_SambaPrinterSecurityOptions_la_SOURCES = \
        CmpiLinux_SambaPrinterSecurityOptionsProvider.cpp \
        Linux_SambaPrinterSecurityOptionsDefaultImplementation.cpp \
        Linux_SambaPrinterSecurityOptionsExternal.cpp \
        Linux_SambaPrinterSecurityOptionsFactory.cpp \
        Linux_SambaPrinterSecurityOptionsInstance.cpp \
        Linux_SambaPrinterSecurityOptionsInstanceName.cpp \
        Linux_SambaPrinterSecurityOptionsManualInstance.cpp \
        Linux_SambaPrinterSecurityOptionsRepositoryExternal.cpp \
        Linux_SambaPrinterSecurityOptionsRepositoryInstance.cpp \
        Linux_SambaPrinterSecurityOptionsResourceAccess.cpp

noinst_HEADERS+= \
        CmpiLinux_SambaPrinterSecurityOptionsProvider.h \
        Linux_SambaPrinterSecurityOptionsDefaultImplementation.h \
        Linux_SambaPrinterSecurityOptionsExternal.h \
        Linux_SambaPrinterSecurityOptionsFactory.h \
        Linux_SambaPrinterSecurityOptionsInstance.h \
        Linux_SambaPrinterSecurityOptionsInstanceName.h \
        Linux_SambaPrinterSecurityOptionsInterface.h \
        Linux_SambaPrinterSecurityOptionsManualInstance.h \
        Linux_SambaPrinterSecurityOptionsRepositoryExternal.h \
        Linux_SambaPrinterSecurityOptionsRepositoryInstance.h \
        Linux_SambaPrinterSecurityOptionsResourceAccess.h

libcmpiLinux_SambaPrinterSecurityOptions_la_LIBADD = \
        $(top_builddir)/resource-access/libRaToolsSmb.la \
        $(top_builddir)/provider/libIBM_SmbProviderTooling.la \
        $(top_builddir)/provider/libLinux_SmbGeneralProviderBasic.la

libcmpiLinux_SambaPrinterSecurityOptions_la_LDFLAGS = -avoid-version
