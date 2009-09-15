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
               libcmpiLinux_SambaDenyHostsForPrinter.la 

################################################################################
# Linux_SambaDenyHostsForPrinter
libcmpiLinux_SambaDenyHostsForPrinter_la_SOURCES = \
        CmpiLinux_SambaDenyHostsForPrinterProvider.cpp \
        Linux_SambaDenyHostsForPrinterDefaultImplementation.cpp \
        Linux_SambaDenyHostsForPrinterExternal.cpp \
        Linux_SambaDenyHostsForPrinterFactory.cpp \
        Linux_SambaDenyHostsForPrinterInstance.cpp \
        Linux_SambaDenyHostsForPrinterInstanceName.cpp \
        Linux_SambaDenyHostsForPrinterManualInstance.cpp \
        Linux_SambaDenyHostsForPrinterRepositoryExternal.cpp \
        Linux_SambaDenyHostsForPrinterRepositoryInstance.cpp \
        Linux_SambaDenyHostsForPrinterResourceAccess.cpp

noinst_HEADERS+= \
        CmpiLinux_SambaDenyHostsForPrinterProvider.h \
        Linux_SambaDenyHostsForPrinterDefaultImplementation.h \
        Linux_SambaDenyHostsForPrinterExternal.h \
        Linux_SambaDenyHostsForPrinterFactory.h \
        Linux_SambaDenyHostsForPrinterInstance.h \
        Linux_SambaDenyHostsForPrinterInstanceName.h \
        Linux_SambaDenyHostsForPrinterInterface.h \
        Linux_SambaDenyHostsForPrinterManualInstance.h \
        Linux_SambaDenyHostsForPrinterRepositoryExternal.h \
        Linux_SambaDenyHostsForPrinterRepositoryInstance.h \
        Linux_SambaDenyHostsForPrinterResourceAccess.h

libcmpiLinux_SambaDenyHostsForPrinter_la_LIBADD = \
        $(top_builddir)/resource-access/libRaToolsSmb.la \
        $(top_builddir)/provider/libIBM_SmbProviderTooling.la \
        $(top_builddir)/provider/libLinux_SmbGeneralProviderBasic.la \
        $(top_builddir)/provider/Linux_SambaPrinterOptions/libcmpiLinux_SambaPrinterOptions.la \
        $(top_builddir)/provider/Linux_SambaHost/libcmpiLinux_SambaHost.la

libcmpiLinux_SambaDenyHostsForPrinter_la_LDFLAGS = -avoid-version
