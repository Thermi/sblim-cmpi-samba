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
              -I${srcdir}/../Linux_SambaGlobalProtocolOptions

################################################################################
provider_LTLIBRARIES = \
               libcmpiLinux_SambaGlobalProtocolForGlobal.la 

################################################################################
# Linux_SambaGlobalProtocolForGlobal
libcmpiLinux_SambaGlobalProtocolForGlobal_la_SOURCES = \
        CmpiLinux_SambaGlobalProtocolForGlobalProvider.cpp \
        Linux_SambaGlobalProtocolForGlobalDefaultImplementation.cpp \
        Linux_SambaGlobalProtocolForGlobalExternal.cpp \
        Linux_SambaGlobalProtocolForGlobalFactory.cpp \
        Linux_SambaGlobalProtocolForGlobalInstance.cpp \
        Linux_SambaGlobalProtocolForGlobalInstanceName.cpp \
        Linux_SambaGlobalProtocolForGlobalManualInstance.cpp \
        Linux_SambaGlobalProtocolForGlobalRepositoryExternal.cpp \
        Linux_SambaGlobalProtocolForGlobalRepositoryInstance.cpp \
        Linux_SambaGlobalProtocolForGlobalResourceAccess.cpp

noinst_HEADERS+= \
        CmpiLinux_SambaGlobalProtocolForGlobalProvider.h \
        Linux_SambaGlobalProtocolForGlobalDefaultImplementation.h \
        Linux_SambaGlobalProtocolForGlobalExternal.h \
        Linux_SambaGlobalProtocolForGlobalFactory.h \
        Linux_SambaGlobalProtocolForGlobalInstance.h \
        Linux_SambaGlobalProtocolForGlobalInstanceName.h \
        Linux_SambaGlobalProtocolForGlobalInterface.h \
        Linux_SambaGlobalProtocolForGlobalManualInstance.h \
        Linux_SambaGlobalProtocolForGlobalRepositoryExternal.h \
        Linux_SambaGlobalProtocolForGlobalRepositoryInstance.h \
        Linux_SambaGlobalProtocolForGlobalResourceAccess.h

libcmpiLinux_SambaGlobalProtocolForGlobal_la_LIBADD = \
        $(top_builddir)/resource-access/libRaToolsSmb.la \
        $(top_builddir)/provider/libIBM_SmbProviderTooling.la \
        $(top_builddir)/provider/libLinux_SmbGeneralProviderBasic.la \
        $(top_builddir)/provider/Linux_SambaGlobalProtocolOptions/libcmpiLinux_SambaGlobalProtocolOptions.la \
        $(top_builddir)/provider/Linux_SambaGlobalOptions/libcmpiLinux_SambaGlobalOptions.la

libcmpiLinux_SambaGlobalProtocolForGlobal_la_LDFLAGS = -avoid-version
