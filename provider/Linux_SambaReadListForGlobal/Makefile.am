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
              -I${srcdir}/../Linux_SambaUser

################################################################################
provider_LTLIBRARIES = \
               libcmpiLinux_SambaReadListForGlobal.la 

################################################################################
# Linux_SambaReadListForGlobal
libcmpiLinux_SambaReadListForGlobal_la_SOURCES = \
        CmpiLinux_SambaReadListForGlobalProvider.cpp \
        Linux_SambaReadListForGlobalDefaultImplementation.cpp \
        Linux_SambaReadListForGlobalExternal.cpp \
        Linux_SambaReadListForGlobalFactory.cpp \
        Linux_SambaReadListForGlobalInstance.cpp \
        Linux_SambaReadListForGlobalInstanceName.cpp \
        Linux_SambaReadListForGlobalManualInstance.cpp \
        Linux_SambaReadListForGlobalRepositoryExternal.cpp \
        Linux_SambaReadListForGlobalRepositoryInstance.cpp \
        Linux_SambaReadListForGlobalResourceAccess.cpp

noinst_HEADERS+= \
        CmpiLinux_SambaReadListForGlobalProvider.h \
        Linux_SambaReadListForGlobalDefaultImplementation.h \
        Linux_SambaReadListForGlobalExternal.h \
        Linux_SambaReadListForGlobalFactory.h \
        Linux_SambaReadListForGlobalInstance.h \
        Linux_SambaReadListForGlobalInstanceName.h \
        Linux_SambaReadListForGlobalInterface.h \
        Linux_SambaReadListForGlobalManualInstance.h \
        Linux_SambaReadListForGlobalRepositoryExternal.h \
        Linux_SambaReadListForGlobalRepositoryInstance.h \
        Linux_SambaReadListForGlobalResourceAccess.h

libcmpiLinux_SambaReadListForGlobal_la_LIBADD = \
        $(top_builddir)/resource-access/libRaToolsSmb.la \
        $(top_builddir)/provider/libIBM_SmbProviderTooling.la \
        $(top_builddir)/provider/libLinux_SmbGeneralProviderBasic.la \
        $(top_builddir)/provider/Linux_SambaGlobalOptions/libcmpiLinux_SambaGlobalOptions.la \
        $(top_builddir)/provider/Linux_SambaUser/libcmpiLinux_SambaUser.la

libcmpiLinux_SambaReadListForGlobal_la_LDFLAGS = -avoid-version
