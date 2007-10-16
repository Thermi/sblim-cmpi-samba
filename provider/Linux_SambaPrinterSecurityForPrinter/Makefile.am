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
              -I${srcdir}/../Linux_SambaPrinterSecurityOptions

################################################################################
provider_LTLIBRARIES = \
               libcmpiLinux_SambaPrinterSecurityForPrinter.la 

################################################################################
# Linux_SambaPrinterSecurityForPrinter
libcmpiLinux_SambaPrinterSecurityForPrinter_la_SOURCES = \
        CmpiLinux_SambaPrinterSecurityForPrinterProvider.cpp \
        Linux_SambaPrinterSecurityForPrinterDefaultImplementation.cpp \
        Linux_SambaPrinterSecurityForPrinterExternal.cpp \
        Linux_SambaPrinterSecurityForPrinterFactory.cpp \
        Linux_SambaPrinterSecurityForPrinterInstance.cpp \
        Linux_SambaPrinterSecurityForPrinterInstanceName.cpp \
        Linux_SambaPrinterSecurityForPrinterManualInstance.cpp \
        Linux_SambaPrinterSecurityForPrinterRepositoryExternal.cpp \
        Linux_SambaPrinterSecurityForPrinterRepositoryInstance.cpp \
        Linux_SambaPrinterSecurityForPrinterResourceAccess.cpp

noinst_HEADERS+= \
        CmpiLinux_SambaPrinterSecurityForPrinterProvider.h \
        Linux_SambaPrinterSecurityForPrinterDefaultImplementation.h \
        Linux_SambaPrinterSecurityForPrinterExternal.h \
        Linux_SambaPrinterSecurityForPrinterFactory.h \
        Linux_SambaPrinterSecurityForPrinterInstance.h \
        Linux_SambaPrinterSecurityForPrinterInstanceName.h \
        Linux_SambaPrinterSecurityForPrinterInterface.h \
        Linux_SambaPrinterSecurityForPrinterManualInstance.h \
        Linux_SambaPrinterSecurityForPrinterRepositoryExternal.h \
        Linux_SambaPrinterSecurityForPrinterRepositoryInstance.h \
        Linux_SambaPrinterSecurityForPrinterResourceAccess.h

libcmpiLinux_SambaPrinterSecurityForPrinter_la_LIBADD = \
        $(top_builddir)/resource-access/libRaToolsSmb.la \
        $(top_builddir)/provider/libIBM_SmbProviderTooling.la \
        $(top_builddir)/provider/libLinux_SmbGeneralProviderBasic.la \
        $(top_builddir)/provider/Linux_SambaPrinterOptions/libcmpiLinux_SambaPrinterOptions.la \
        $(top_builddir)/provider/Linux_SambaPrinterSecurityOptions/libcmpiLinux_SambaPrinterSecurityOptions.la

libcmpiLinux_SambaPrinterSecurityForPrinter_la_LDFLAGS = -avoid-version
