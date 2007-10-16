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
              -I${srcdir}/../Linux_SambaPrinterBrowseOptions

################################################################################
provider_LTLIBRARIES = \
               libcmpiLinux_SambaPrinterBrowseForPrinter.la 

################################################################################
# Linux_SambaPrinterBrowseForPrinter
libcmpiLinux_SambaPrinterBrowseForPrinter_la_SOURCES = \
        CmpiLinux_SambaPrinterBrowseForPrinterProvider.cpp \
        Linux_SambaPrinterBrowseForPrinterDefaultImplementation.cpp \
        Linux_SambaPrinterBrowseForPrinterExternal.cpp \
        Linux_SambaPrinterBrowseForPrinterFactory.cpp \
        Linux_SambaPrinterBrowseForPrinterInstance.cpp \
        Linux_SambaPrinterBrowseForPrinterInstanceName.cpp \
        Linux_SambaPrinterBrowseForPrinterManualInstance.cpp \
        Linux_SambaPrinterBrowseForPrinterRepositoryExternal.cpp \
        Linux_SambaPrinterBrowseForPrinterRepositoryInstance.cpp \
        Linux_SambaPrinterBrowseForPrinterResourceAccess.cpp

noinst_HEADERS+= \
        CmpiLinux_SambaPrinterBrowseForPrinterProvider.h \
        Linux_SambaPrinterBrowseForPrinterDefaultImplementation.h \
        Linux_SambaPrinterBrowseForPrinterExternal.h \
        Linux_SambaPrinterBrowseForPrinterFactory.h \
        Linux_SambaPrinterBrowseForPrinterInstance.h \
        Linux_SambaPrinterBrowseForPrinterInstanceName.h \
        Linux_SambaPrinterBrowseForPrinterInterface.h \
        Linux_SambaPrinterBrowseForPrinterManualInstance.h \
        Linux_SambaPrinterBrowseForPrinterRepositoryExternal.h \
        Linux_SambaPrinterBrowseForPrinterRepositoryInstance.h \
        Linux_SambaPrinterBrowseForPrinterResourceAccess.h

libcmpiLinux_SambaPrinterBrowseForPrinter_la_LIBADD = \
        $(top_builddir)/resource-access/libRaToolsSmb.la \
        $(top_builddir)/provider/libIBM_SmbProviderTooling.la \
        $(top_builddir)/provider/libLinux_SmbGeneralProviderBasic.la \
        $(top_builddir)/provider/Linux_SambaPrinterOptions/libcmpiLinux_SambaPrinterOptions.la \
        $(top_builddir)/provider/Linux_SambaPrinterBrowseOptions/libcmpiLinux_SambaPrinterBrowseOptions.la

libcmpiLinux_SambaPrinterBrowseForPrinter_la_LDFLAGS = -avoid-version
