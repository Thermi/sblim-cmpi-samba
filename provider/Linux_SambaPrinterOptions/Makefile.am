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
               libcmpiLinux_SambaPrinterOptions.la 

################################################################################
# Linux_SambaPrinterOptions
libcmpiLinux_SambaPrinterOptions_la_SOURCES = \
        CmpiLinux_SambaPrinterOptionsProvider.cpp \
        Linux_SambaPrinterOptionsDefaultImplementation.cpp \
        Linux_SambaPrinterOptionsExternal.cpp \
        Linux_SambaPrinterOptionsFactory.cpp \
        Linux_SambaPrinterOptionsInstance.cpp \
        Linux_SambaPrinterOptionsInstanceName.cpp \
        Linux_SambaPrinterOptionsManualInstance.cpp \
        Linux_SambaPrinterOptionsRepositoryExternal.cpp \
        Linux_SambaPrinterOptionsRepositoryInstance.cpp \
        Linux_SambaPrinterOptionsResourceAccess.cpp

noinst_HEADERS+= \
        CmpiLinux_SambaPrinterOptionsProvider.h \
        Linux_SambaPrinterOptionsDefaultImplementation.h \
        Linux_SambaPrinterOptionsExternal.h \
        Linux_SambaPrinterOptionsFactory.h \
        Linux_SambaPrinterOptionsInstance.h \
        Linux_SambaPrinterOptionsInstanceName.h \
        Linux_SambaPrinterOptionsInterface.h \
        Linux_SambaPrinterOptionsManualInstance.h \
        Linux_SambaPrinterOptionsRepositoryExternal.h \
        Linux_SambaPrinterOptionsRepositoryInstance.h \
        Linux_SambaPrinterOptionsResourceAccess.h

libcmpiLinux_SambaPrinterOptions_la_LIBADD = \
        $(top_builddir)/resource-access/libRaToolsSmb.la \
        $(top_builddir)/provider/libIBM_SmbProviderTooling.la \
        $(top_builddir)/provider/libLinux_SmbGeneralProviderBasic.la

libcmpiLinux_SambaPrinterOptions_la_LDFLAGS = -avoid-version
