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
              -I${srcdir}/../Linux_SambaGlobalOptions \
              -I${srcdir}/../Linux_SambaGlobalPrintingOptions

################################################################################
provider_LTLIBRARIES = \
               libcmpiLinux_SambaGlobalPrintingForGlobal.la 

################################################################################
# Linux_SambaGlobalPrintingForGlobal
libcmpiLinux_SambaGlobalPrintingForGlobal_la_SOURCES = \
        CmpiLinux_SambaGlobalPrintingForGlobalProvider.cpp \
        Linux_SambaGlobalPrintingForGlobalDefaultImplementation.cpp \
        Linux_SambaGlobalPrintingForGlobalExternal.cpp \
        Linux_SambaGlobalPrintingForGlobalFactory.cpp \
        Linux_SambaGlobalPrintingForGlobalInstance.cpp \
        Linux_SambaGlobalPrintingForGlobalInstanceName.cpp \
        Linux_SambaGlobalPrintingForGlobalManualInstance.cpp \
        Linux_SambaGlobalPrintingForGlobalRepositoryExternal.cpp \
        Linux_SambaGlobalPrintingForGlobalRepositoryInstance.cpp \
        Linux_SambaGlobalPrintingForGlobalResourceAccess.cpp

noinst_HEADERS+= \
        CmpiLinux_SambaGlobalPrintingForGlobalProvider.h \
        Linux_SambaGlobalPrintingForGlobalDefaultImplementation.h \
        Linux_SambaGlobalPrintingForGlobalExternal.h \
        Linux_SambaGlobalPrintingForGlobalFactory.h \
        Linux_SambaGlobalPrintingForGlobalInstance.h \
        Linux_SambaGlobalPrintingForGlobalInstanceName.h \
        Linux_SambaGlobalPrintingForGlobalInterface.h \
        Linux_SambaGlobalPrintingForGlobalManualInstance.h \
        Linux_SambaGlobalPrintingForGlobalRepositoryExternal.h \
        Linux_SambaGlobalPrintingForGlobalRepositoryInstance.h \
        Linux_SambaGlobalPrintingForGlobalResourceAccess.h

libcmpiLinux_SambaGlobalPrintingForGlobal_la_LIBADD = \
        $(top_builddir)/resource-access/libRaToolsSmb.la \
        $(top_builddir)/provider/libIBM_SmbProviderTooling.la \
        $(top_builddir)/provider/libLinux_SmbGeneralProviderBasic.la \
        $(top_builddir)/provider/Linux_SambaGlobalPrintingOptions/libcmpiLinux_SambaGlobalPrintingOptions.la \
        $(top_builddir)/provider/Linux_SambaGlobalOptions/libcmpiLinux_SambaGlobalOptions.la

libcmpiLinux_SambaGlobalPrintingForGlobal_la_LDFLAGS = -avoid-version
