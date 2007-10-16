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
               libcmpiLinux_SambaGlobalSecurityOptions.la 

################################################################################
# Linux_SambaGlobalSecurityOptions
libcmpiLinux_SambaGlobalSecurityOptions_la_SOURCES = \
        CmpiLinux_SambaGlobalSecurityOptionsProvider.cpp \
        Linux_SambaGlobalSecurityOptionsDefaultImplementation.cpp \
        Linux_SambaGlobalSecurityOptionsExternal.cpp \
        Linux_SambaGlobalSecurityOptionsFactory.cpp \
        Linux_SambaGlobalSecurityOptionsInstance.cpp \
        Linux_SambaGlobalSecurityOptionsInstanceName.cpp \
        Linux_SambaGlobalSecurityOptionsManualInstance.cpp \
        Linux_SambaGlobalSecurityOptionsRepositoryExternal.cpp \
        Linux_SambaGlobalSecurityOptionsRepositoryInstance.cpp \
        Linux_SambaGlobalSecurityOptionsResourceAccess.cpp

noinst_HEADERS+= \
        CmpiLinux_SambaGlobalSecurityOptionsProvider.h \
        Linux_SambaGlobalSecurityOptionsDefaultImplementation.h \
        Linux_SambaGlobalSecurityOptionsExternal.h \
        Linux_SambaGlobalSecurityOptionsFactory.h \
        Linux_SambaGlobalSecurityOptionsInstance.h \
        Linux_SambaGlobalSecurityOptionsInstanceName.h \
        Linux_SambaGlobalSecurityOptionsInterface.h \
        Linux_SambaGlobalSecurityOptionsManualInstance.h \
        Linux_SambaGlobalSecurityOptionsRepositoryExternal.h \
        Linux_SambaGlobalSecurityOptionsRepositoryInstance.h \
        Linux_SambaGlobalSecurityOptionsResourceAccess.h

libcmpiLinux_SambaGlobalSecurityOptions_la_LIBADD = \
        $(top_builddir)/resource-access/libRaToolsSmb.la \
        $(top_builddir)/provider/libIBM_SmbProviderTooling.la \
        $(top_builddir)/provider/libLinux_SmbGeneralProviderBasic.la

libcmpiLinux_SambaGlobalSecurityOptions_la_LDFLAGS = -avoid-version
