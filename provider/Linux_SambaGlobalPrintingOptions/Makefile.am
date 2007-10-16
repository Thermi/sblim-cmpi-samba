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

AM_CPPFLAGS = \
    -DDEBUG \
    -D_COMPILE_UNIX \
    -DCMPI_STANDALONE \
    -I${srcdir}/../include \
    -I${srcdir}/../../resource-access

################################################################################
provider_LTLIBRARIES = \
               libcmpiLinux_SambaGlobalPrintingOptions.la 

################################################################################
# Linux_SambaGlobalPrintingOptions
libcmpiLinux_SambaGlobalPrintingOptions_la_SOURCES = \
        CmpiLinux_SambaGlobalPrintingOptionsProvider.cpp \
        Linux_SambaGlobalPrintingOptionsDefaultImplementation.cpp \
        Linux_SambaGlobalPrintingOptionsExternal.cpp \
        Linux_SambaGlobalPrintingOptionsFactory.cpp \
        Linux_SambaGlobalPrintingOptionsInstance.cpp \
        Linux_SambaGlobalPrintingOptionsInstanceName.cpp \
        Linux_SambaGlobalPrintingOptionsManualInstance.cpp \
        Linux_SambaGlobalPrintingOptionsRepositoryExternal.cpp \
        Linux_SambaGlobalPrintingOptionsRepositoryInstance.cpp \
        Linux_SambaGlobalPrintingOptionsResourceAccess.cpp

noinst_HEADERS+= \
        CmpiLinux_SambaGlobalPrintingOptionsProvider.h \
        Linux_SambaGlobalPrintingOptionsDefaultImplementation.h \
        Linux_SambaGlobalPrintingOptionsExternal.h \
        Linux_SambaGlobalPrintingOptionsFactory.h \
        Linux_SambaGlobalPrintingOptionsInstance.h \
        Linux_SambaGlobalPrintingOptionsInstanceName.h \
        Linux_SambaGlobalPrintingOptionsInterface.h \
        Linux_SambaGlobalPrintingOptionsManualInstance.h \
        Linux_SambaGlobalPrintingOptionsRepositoryExternal.h \
        Linux_SambaGlobalPrintingOptionsRepositoryInstance.h \
        Linux_SambaGlobalPrintingOptionsResourceAccess.h

libcmpiLinux_SambaGlobalPrintingOptions_la_LIBADD = \
        $(top_builddir)/resource-access/libRaToolsSmb.la \
        $(top_builddir)/provider/libIBM_SmbProviderTooling.la \
        $(top_builddir)/provider/libLinux_SmbGeneralProviderBasic.la

libcmpiLinux_SambaGlobalPrintingOptions_la_LDFLAGS = -avoid-version
