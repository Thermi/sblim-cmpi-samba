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
              -I${srcdir}/../Linux_SambaHost

################################################################################
provider_LTLIBRARIES = \
               libcmpiLinux_SambaAllowHostsForPrinter.la 

################################################################################
# Linux_SambaAllowHostsForPrinter
libcmpiLinux_SambaAllowHostsForPrinter_la_SOURCES = \
        CmpiLinux_SambaAllowHostsForPrinterProvider.cpp \
        Linux_SambaAllowHostsForPrinterDefaultImplementation.cpp \
        Linux_SambaAllowHostsForPrinterExternal.cpp \
        Linux_SambaAllowHostsForPrinterFactory.cpp \
        Linux_SambaAllowHostsForPrinterInstance.cpp \
        Linux_SambaAllowHostsForPrinterInstanceName.cpp \
        Linux_SambaAllowHostsForPrinterManualInstance.cpp \
        Linux_SambaAllowHostsForPrinterRepositoryExternal.cpp \
        Linux_SambaAllowHostsForPrinterRepositoryInstance.cpp \
        Linux_SambaAllowHostsForPrinterResourceAccess.cpp

noinst_HEADERS+= \
        CmpiLinux_SambaAllowHostsForPrinterProvider.h \
        Linux_SambaAllowHostsForPrinterDefaultImplementation.h \
        Linux_SambaAllowHostsForPrinterExternal.h \
        Linux_SambaAllowHostsForPrinterFactory.h \
        Linux_SambaAllowHostsForPrinterInstance.h \
        Linux_SambaAllowHostsForPrinterInstanceName.h \
        Linux_SambaAllowHostsForPrinterInterface.h \
        Linux_SambaAllowHostsForPrinterManualInstance.h \
        Linux_SambaAllowHostsForPrinterRepositoryExternal.h \
        Linux_SambaAllowHostsForPrinterRepositoryInstance.h \
        Linux_SambaAllowHostsForPrinterResourceAccess.h

libcmpiLinux_SambaAllowHostsForPrinter_la_LIBADD = \
        $(top_builddir)/resource-access/libRaToolsSmb.la \
        $(top_builddir)/provider/libIBM_SmbProviderTooling.la \
        $(top_builddir)/provider/libLinux_SmbGeneralProviderBasic.la \
        $(top_builddir)/provider/Linux_SambaPrinterOptions/libcmpiLinux_SambaPrinterOptions.la \
        $(top_builddir)/provider/Linux_SambaHost/libcmpiLinux_SambaHost.la

libcmpiLinux_SambaAllowHostsForPrinter_la_LDFLAGS = -avoid-version
