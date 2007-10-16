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
               libcmpiLinux_SambaDenyHostsForGlobal.la 

################################################################################
# Linux_SambaDenyHostsForGlobal
libcmpiLinux_SambaDenyHostsForGlobal_la_SOURCES = \
        CmpiLinux_SambaDenyHostsForGlobalProvider.cpp \
        Linux_SambaDenyHostsForGlobalDefaultImplementation.cpp \
        Linux_SambaDenyHostsForGlobalExternal.cpp \
        Linux_SambaDenyHostsForGlobalFactory.cpp \
        Linux_SambaDenyHostsForGlobalInstance.cpp \
        Linux_SambaDenyHostsForGlobalInstanceName.cpp \
        Linux_SambaDenyHostsForGlobalManualInstance.cpp \
        Linux_SambaDenyHostsForGlobalRepositoryExternal.cpp \
        Linux_SambaDenyHostsForGlobalRepositoryInstance.cpp \
        Linux_SambaDenyHostsForGlobalResourceAccess.cpp

noinst_HEADERS+= \
        CmpiLinux_SambaDenyHostsForGlobalProvider.h \
        Linux_SambaDenyHostsForGlobalDefaultImplementation.h \
        Linux_SambaDenyHostsForGlobalExternal.h \
        Linux_SambaDenyHostsForGlobalFactory.h \
        Linux_SambaDenyHostsForGlobalInstance.h \
        Linux_SambaDenyHostsForGlobalInstanceName.h \
        Linux_SambaDenyHostsForGlobalInterface.h \
        Linux_SambaDenyHostsForGlobalManualInstance.h \
        Linux_SambaDenyHostsForGlobalRepositoryExternal.h \
        Linux_SambaDenyHostsForGlobalRepositoryInstance.h \
        Linux_SambaDenyHostsForGlobalResourceAccess.h

libcmpiLinux_SambaDenyHostsForGlobal_la_LIBADD = \
        $(top_builddir)/resource-access/libRaToolsSmb.la \
        $(top_builddir)/provider/libIBM_SmbProviderTooling.la \
        $(top_builddir)/provider/libLinux_SmbGeneralProviderBasic.la \
        $(top_builddir)/provider/Linux_SambaGlobalOptions/libcmpiLinux_SambaGlobalOptions.la \
        $(top_builddir)/provider/Linux_SambaHost/libcmpiLinux_SambaHost.la

libcmpiLinux_SambaDenyHostsForGlobal_la_LDFLAGS = -avoid-version
