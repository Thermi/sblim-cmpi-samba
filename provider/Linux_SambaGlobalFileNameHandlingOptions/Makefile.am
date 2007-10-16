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
               libcmpiLinux_SambaGlobalFileNameHandlingOptions.la 

################################################################################
# Linux_SambaGlobalFileNameHandlingOptions
libcmpiLinux_SambaGlobalFileNameHandlingOptions_la_SOURCES = \
        CmpiLinux_SambaGlobalFileNameHandlingOptionsProvider.cpp \
        Linux_SambaGlobalFileNameHandlingOptionsDefaultImplementation.cpp \
        Linux_SambaGlobalFileNameHandlingOptionsExternal.cpp \
        Linux_SambaGlobalFileNameHandlingOptionsFactory.cpp \
        Linux_SambaGlobalFileNameHandlingOptionsInstance.cpp \
        Linux_SambaGlobalFileNameHandlingOptionsInstanceName.cpp \
        Linux_SambaGlobalFileNameHandlingOptionsManualInstance.cpp \
        Linux_SambaGlobalFileNameHandlingOptionsRepositoryExternal.cpp \
        Linux_SambaGlobalFileNameHandlingOptionsRepositoryInstance.cpp \
        Linux_SambaGlobalFileNameHandlingOptionsResourceAccess.cpp

noinst_HEADERS+= \
        CmpiLinux_SambaGlobalFileNameHandlingOptionsProvider.h \
        Linux_SambaGlobalFileNameHandlingOptionsDefaultImplementation.h \
        Linux_SambaGlobalFileNameHandlingOptionsExternal.h \
        Linux_SambaGlobalFileNameHandlingOptionsFactory.h \
        Linux_SambaGlobalFileNameHandlingOptionsInstance.h \
        Linux_SambaGlobalFileNameHandlingOptionsInstanceName.h \
        Linux_SambaGlobalFileNameHandlingOptionsInterface.h \
        Linux_SambaGlobalFileNameHandlingOptionsManualInstance.h \
        Linux_SambaGlobalFileNameHandlingOptionsRepositoryExternal.h \
        Linux_SambaGlobalFileNameHandlingOptionsRepositoryInstance.h \
        Linux_SambaGlobalFileNameHandlingOptionsResourceAccess.h

libcmpiLinux_SambaGlobalFileNameHandlingOptions_la_LIBADD = \
        $(top_builddir)/resource-access/libRaToolsSmb.la \
        $(top_builddir)/provider/libIBM_SmbProviderTooling.la \
        $(top_builddir)/provider/libLinux_SmbGeneralProviderBasic.la

libcmpiLinux_SambaGlobalFileNameHandlingOptions_la_LDFLAGS = -avoid-version
