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
               libcmpiLinux_SambaGlobalProtocolOptions.la 

################################################################################
# Linux_SambaGlobalProtocolOptions
libcmpiLinux_SambaGlobalProtocolOptions_la_SOURCES = \
        CmpiLinux_SambaGlobalProtocolOptionsProvider.cpp \
        Linux_SambaGlobalProtocolOptionsDefaultImplementation.cpp \
        Linux_SambaGlobalProtocolOptionsExternal.cpp \
        Linux_SambaGlobalProtocolOptionsFactory.cpp \
        Linux_SambaGlobalProtocolOptionsInstance.cpp \
        Linux_SambaGlobalProtocolOptionsInstanceName.cpp \
        Linux_SambaGlobalProtocolOptionsManualInstance.cpp \
        Linux_SambaGlobalProtocolOptionsRepositoryExternal.cpp \
        Linux_SambaGlobalProtocolOptionsRepositoryInstance.cpp \
        Linux_SambaGlobalProtocolOptionsResourceAccess.cpp

noinst_HEADERS+= \
        CmpiLinux_SambaGlobalProtocolOptionsProvider.h \
        Linux_SambaGlobalProtocolOptionsDefaultImplementation.h \
        Linux_SambaGlobalProtocolOptionsExternal.h \
        Linux_SambaGlobalProtocolOptionsFactory.h \
        Linux_SambaGlobalProtocolOptionsInstance.h \
        Linux_SambaGlobalProtocolOptionsInstanceName.h \
        Linux_SambaGlobalProtocolOptionsInterface.h \
        Linux_SambaGlobalProtocolOptionsManualInstance.h \
        Linux_SambaGlobalProtocolOptionsRepositoryExternal.h \
        Linux_SambaGlobalProtocolOptionsRepositoryInstance.h \
        Linux_SambaGlobalProtocolOptionsResourceAccess.h

libcmpiLinux_SambaGlobalProtocolOptions_la_LIBADD = \
        $(top_builddir)/resource-access/libRaToolsSmb.la \
        $(top_builddir)/provider/libIBM_SmbProviderTooling.la \
        $(top_builddir)/provider/libLinux_SmbGeneralProviderBasic.la

libcmpiLinux_SambaGlobalProtocolOptions_la_LDFLAGS = -avoid-version
