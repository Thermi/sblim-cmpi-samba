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
               libcmpiLinux_SambaPrinterPrintingOptions.la 

################################################################################
# Linux_SambaPrinterPrintingOptions
libcmpiLinux_SambaPrinterPrintingOptions_la_SOURCES = \
        CmpiLinux_SambaPrinterPrintingOptionsProvider.cpp \
        Linux_SambaPrinterPrintingOptionsDefaultImplementation.cpp \
        Linux_SambaPrinterPrintingOptionsExternal.cpp \
        Linux_SambaPrinterPrintingOptionsFactory.cpp \
        Linux_SambaPrinterPrintingOptionsInstance.cpp \
        Linux_SambaPrinterPrintingOptionsInstanceName.cpp \
        Linux_SambaPrinterPrintingOptionsManualInstance.cpp \
        Linux_SambaPrinterPrintingOptionsRepositoryExternal.cpp \
        Linux_SambaPrinterPrintingOptionsRepositoryInstance.cpp \
        Linux_SambaPrinterPrintingOptionsResourceAccess.cpp

noinst_HEADERS+= \
        CmpiLinux_SambaPrinterPrintingOptionsProvider.h \
        Linux_SambaPrinterPrintingOptionsDefaultImplementation.h \
        Linux_SambaPrinterPrintingOptionsExternal.h \
        Linux_SambaPrinterPrintingOptionsFactory.h \
        Linux_SambaPrinterPrintingOptionsInstance.h \
        Linux_SambaPrinterPrintingOptionsInstanceName.h \
        Linux_SambaPrinterPrintingOptionsInterface.h \
        Linux_SambaPrinterPrintingOptionsManualInstance.h \
        Linux_SambaPrinterPrintingOptionsRepositoryExternal.h \
        Linux_SambaPrinterPrintingOptionsRepositoryInstance.h \
        Linux_SambaPrinterPrintingOptionsResourceAccess.h

libcmpiLinux_SambaPrinterPrintingOptions_la_LIBADD = \
        $(top_builddir)/resource-access/libRaToolsSmb.la \
        $(top_builddir)/provider/libIBM_SmbProviderTooling.la \
        $(top_builddir)/provider/libLinux_SmbGeneralProviderBasic.la

libcmpiLinux_SambaPrinterPrintingOptions_la_LDFLAGS = -avoid-version
