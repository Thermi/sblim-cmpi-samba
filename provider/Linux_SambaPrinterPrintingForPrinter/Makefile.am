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
              -I${srcdir}/../Linux_SambaPrinterOptions \
              -I${srcdir}/../Linux_SambaPrinterPrintingOptions

################################################################################
provider_LTLIBRARIES = \
               libcmpiLinux_SambaPrinterPrintingForPrinter.la 

################################################################################
# Linux_SambaPrinterPrintingForPrinter
libcmpiLinux_SambaPrinterPrintingForPrinter_la_SOURCES = \
        CmpiLinux_SambaPrinterPrintingForPrinterProvider.cpp \
        Linux_SambaPrinterPrintingForPrinterDefaultImplementation.cpp \
        Linux_SambaPrinterPrintingForPrinterExternal.cpp \
        Linux_SambaPrinterPrintingForPrinterFactory.cpp \
        Linux_SambaPrinterPrintingForPrinterInstance.cpp \
        Linux_SambaPrinterPrintingForPrinterInstanceName.cpp \
        Linux_SambaPrinterPrintingForPrinterManualInstance.cpp \
        Linux_SambaPrinterPrintingForPrinterRepositoryExternal.cpp \
        Linux_SambaPrinterPrintingForPrinterRepositoryInstance.cpp \
        Linux_SambaPrinterPrintingForPrinterResourceAccess.cpp

noinst_HEADERS+= \
        CmpiLinux_SambaPrinterPrintingForPrinterProvider.h \
        Linux_SambaPrinterPrintingForPrinterDefaultImplementation.h \
        Linux_SambaPrinterPrintingForPrinterExternal.h \
        Linux_SambaPrinterPrintingForPrinterFactory.h \
        Linux_SambaPrinterPrintingForPrinterInstance.h \
        Linux_SambaPrinterPrintingForPrinterInstanceName.h \
        Linux_SambaPrinterPrintingForPrinterInterface.h \
        Linux_SambaPrinterPrintingForPrinterManualInstance.h \
        Linux_SambaPrinterPrintingForPrinterRepositoryExternal.h \
        Linux_SambaPrinterPrintingForPrinterRepositoryInstance.h \
        Linux_SambaPrinterPrintingForPrinterResourceAccess.h

libcmpiLinux_SambaPrinterPrintingForPrinter_la_LIBADD = \
        $(top_builddir)/resource-access/libRaToolsSmb.la \
        $(top_builddir)/provider/libIBM_SmbProviderTooling.la \
        $(top_builddir)/provider/libLinux_SmbGeneralProviderBasic.la \
        $(top_builddir)/provider/Linux_SambaPrinterOptions/libcmpiLinux_SambaPrinterOptions.la \
        $(top_builddir)/provider/Linux_SambaPrinterPrintingOptions/libcmpiLinux_SambaPrinterPrintingOptions.la

libcmpiLinux_SambaPrinterPrintingForPrinter_la_LDFLAGS = -avoid-version
