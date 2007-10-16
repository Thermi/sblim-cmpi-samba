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
               libcmpiLinux_SambaGlobalOptions.la 

################################################################################
# Linux_SambaGlobalOptions
libcmpiLinux_SambaGlobalOptions_la_SOURCES = \
        CmpiLinux_SambaGlobalOptionsProvider.cpp \
        Linux_SambaGlobalOptionsDefaultImplementation.cpp \
        Linux_SambaGlobalOptionsExternal.cpp \
        Linux_SambaGlobalOptionsFactory.cpp \
        Linux_SambaGlobalOptionsInstance.cpp \
        Linux_SambaGlobalOptionsInstanceName.cpp \
        Linux_SambaGlobalOptionsManualInstance.cpp \
        Linux_SambaGlobalOptionsRepositoryExternal.cpp \
        Linux_SambaGlobalOptionsRepositoryInstance.cpp \
        Linux_SambaGlobalOptionsResourceAccess.cpp

noinst_HEADERS+= \
        CmpiLinux_SambaGlobalOptionsProvider.h \
        Linux_SambaGlobalOptionsDefaultImplementation.h \
        Linux_SambaGlobalOptionsExternal.h \
        Linux_SambaGlobalOptionsFactory.h \
        Linux_SambaGlobalOptionsInstance.h \
        Linux_SambaGlobalOptionsInstanceName.h \
        Linux_SambaGlobalOptionsInterface.h \
        Linux_SambaGlobalOptionsManualInstance.h \
        Linux_SambaGlobalOptionsRepositoryExternal.h \
        Linux_SambaGlobalOptionsRepositoryInstance.h \
        Linux_SambaGlobalOptionsResourceAccess.h

libcmpiLinux_SambaGlobalOptions_la_LIBADD = \
        $(top_builddir)/resource-access/libRaToolsSmb.la \
        $(top_builddir)/provider/libIBM_SmbProviderTooling.la \
        $(top_builddir)/provider/libLinux_SmbGeneralProviderBasic.la

libcmpiLinux_SambaGlobalOptions_la_LDFLAGS = -avoid-version
