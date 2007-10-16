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
              -I${srcdir}/../Linux_SambaHost

################################################################################
provider_LTLIBRARIES = \
               libcmpiLinux_SambaAllowHostsForGlobal.la 

################################################################################
# Linux_SambaAllowHostsForGlobal
libcmpiLinux_SambaAllowHostsForGlobal_la_SOURCES = \
        CmpiLinux_SambaAllowHostsForGlobalProvider.cpp \
        Linux_SambaAllowHostsForGlobalDefaultImplementation.cpp \
        Linux_SambaAllowHostsForGlobalExternal.cpp \
        Linux_SambaAllowHostsForGlobalFactory.cpp \
        Linux_SambaAllowHostsForGlobalInstance.cpp \
        Linux_SambaAllowHostsForGlobalInstanceName.cpp \
        Linux_SambaAllowHostsForGlobalManualInstance.cpp \
        Linux_SambaAllowHostsForGlobalRepositoryExternal.cpp \
        Linux_SambaAllowHostsForGlobalRepositoryInstance.cpp \
        Linux_SambaAllowHostsForGlobalResourceAccess.cpp

noinst_HEADERS+= \
        CmpiLinux_SambaAllowHostsForGlobalProvider.h \
        Linux_SambaAllowHostsForGlobalDefaultImplementation.h \
        Linux_SambaAllowHostsForGlobalExternal.h \
        Linux_SambaAllowHostsForGlobalFactory.h \
        Linux_SambaAllowHostsForGlobalInstance.h \
        Linux_SambaAllowHostsForGlobalInstanceName.h \
        Linux_SambaAllowHostsForGlobalInterface.h \
        Linux_SambaAllowHostsForGlobalManualInstance.h \
        Linux_SambaAllowHostsForGlobalRepositoryExternal.h \
        Linux_SambaAllowHostsForGlobalRepositoryInstance.h \
        Linux_SambaAllowHostsForGlobalResourceAccess.h

libcmpiLinux_SambaAllowHostsForGlobal_la_LIBADD = \
        $(top_builddir)/resource-access/libRaToolsSmb.la \
        $(top_builddir)/provider/libIBM_SmbProviderTooling.la \
        $(top_builddir)/provider/libLinux_SmbGeneralProviderBasic.la \
        $(top_builddir)/provider/Linux_SambaGlobalOptions/libcmpiLinux_SambaGlobalOptions.la \
        $(top_builddir)/provider/Linux_SambaHost/libcmpiLinux_SambaHost.la

libcmpiLinux_SambaAllowHostsForGlobal_la_LDFLAGS = -avoid-version
