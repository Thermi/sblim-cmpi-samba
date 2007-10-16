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
               libcmpiLinux_SambaInvalidUsersForGlobal.la 

################################################################################
# Linux_SambaInvalidUsersForGlobal
libcmpiLinux_SambaInvalidUsersForGlobal_la_SOURCES = \
        CmpiLinux_SambaInvalidUsersForGlobalProvider.cpp \
        Linux_SambaInvalidUsersForGlobalDefaultImplementation.cpp \
        Linux_SambaInvalidUsersForGlobalExternal.cpp \
        Linux_SambaInvalidUsersForGlobalFactory.cpp \
        Linux_SambaInvalidUsersForGlobalInstance.cpp \
        Linux_SambaInvalidUsersForGlobalInstanceName.cpp \
        Linux_SambaInvalidUsersForGlobalManualInstance.cpp \
        Linux_SambaInvalidUsersForGlobalRepositoryExternal.cpp \
        Linux_SambaInvalidUsersForGlobalRepositoryInstance.cpp \
        Linux_SambaInvalidUsersForGlobalResourceAccess.cpp

noinst_HEADERS+= \
        CmpiLinux_SambaInvalidUsersForGlobalProvider.h \
        Linux_SambaInvalidUsersForGlobalDefaultImplementation.h \
        Linux_SambaInvalidUsersForGlobalExternal.h \
        Linux_SambaInvalidUsersForGlobalFactory.h \
        Linux_SambaInvalidUsersForGlobalInstance.h \
        Linux_SambaInvalidUsersForGlobalInstanceName.h \
        Linux_SambaInvalidUsersForGlobalInterface.h \
        Linux_SambaInvalidUsersForGlobalManualInstance.h \
        Linux_SambaInvalidUsersForGlobalRepositoryExternal.h \
        Linux_SambaInvalidUsersForGlobalRepositoryInstance.h \
        Linux_SambaInvalidUsersForGlobalResourceAccess.h

libcmpiLinux_SambaInvalidUsersForGlobal_la_LIBADD = \
        $(top_builddir)/resource-access/libRaToolsSmb.la \
        $(top_builddir)/provider/libIBM_SmbProviderTooling.la \
        $(top_builddir)/provider/libLinux_SmbGeneralProviderBasic.la \
        $(top_builddir)/provider/Linux_SambaGlobalOptions/libcmpiLinux_SambaGlobalOptions.la \
        $(top_builddir)/provider/Linux_SambaUser/libcmpiLinux_SambaUser.la

libcmpiLinux_SambaInvalidUsersForGlobal_la_LDFLAGS = -avoid-version
