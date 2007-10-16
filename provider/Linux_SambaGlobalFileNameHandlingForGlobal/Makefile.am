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
              -I${srcdir}/../Linux_SambaGlobalFileNameHandlingOptions

################################################################################
provider_LTLIBRARIES = \
               libcmpiLinux_SambaGlobalFileNameHandlingForGlobal.la 

################################################################################
# Linux_SambaGlobalFileNameHandlingForGlobal
libcmpiLinux_SambaGlobalFileNameHandlingForGlobal_la_SOURCES = \
        CmpiLinux_SambaGlobalFileNameHandlingForGlobalProvider.cpp \
        Linux_SambaGlobalFileNameHandlingForGlobalDefaultImplementation.cpp \
        Linux_SambaGlobalFileNameHandlingForGlobalExternal.cpp \
        Linux_SambaGlobalFileNameHandlingForGlobalFactory.cpp \
        Linux_SambaGlobalFileNameHandlingForGlobalInstance.cpp \
        Linux_SambaGlobalFileNameHandlingForGlobalInstanceName.cpp \
        Linux_SambaGlobalFileNameHandlingForGlobalManualInstance.cpp \
        Linux_SambaGlobalFileNameHandlingForGlobalRepositoryExternal.cpp \
        Linux_SambaGlobalFileNameHandlingForGlobalRepositoryInstance.cpp \
        Linux_SambaGlobalFileNameHandlingForGlobalResourceAccess.cpp

noinst_HEADERS+= \
        CmpiLinux_SambaGlobalFileNameHandlingForGlobalProvider.h \
        Linux_SambaGlobalFileNameHandlingForGlobalDefaultImplementation.h \
        Linux_SambaGlobalFileNameHandlingForGlobalExternal.h \
        Linux_SambaGlobalFileNameHandlingForGlobalFactory.h \
        Linux_SambaGlobalFileNameHandlingForGlobalInstance.h \
        Linux_SambaGlobalFileNameHandlingForGlobalInstanceName.h \
        Linux_SambaGlobalFileNameHandlingForGlobalInterface.h \
        Linux_SambaGlobalFileNameHandlingForGlobalManualInstance.h \
        Linux_SambaGlobalFileNameHandlingForGlobalRepositoryExternal.h \
        Linux_SambaGlobalFileNameHandlingForGlobalRepositoryInstance.h \
        Linux_SambaGlobalFileNameHandlingForGlobalResourceAccess.h

libcmpiLinux_SambaGlobalFileNameHandlingForGlobal_la_LIBADD = \
        $(top_builddir)/resource-access/libRaToolsSmb.la \
        $(top_builddir)/provider/libIBM_SmbProviderTooling.la \
        $(top_builddir)/provider/libLinux_SmbGeneralProviderBasic.la \
        $(top_builddir)/provider/Linux_SambaGlobalFileNameHandlingOptions/libcmpiLinux_SambaGlobalFileNameHandlingOptions.la \
        $(top_builddir)/provider/Linux_SambaGlobalOptions/libcmpiLinux_SambaGlobalOptions.la

libcmpiLinux_SambaGlobalFileNameHandlingForGlobal_la_LDFLAGS = -avoid-version
