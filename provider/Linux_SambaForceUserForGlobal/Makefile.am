# ==================================================================
# (C) Copyright IBM Corp. 2005
#
# THIS FILE IS PROVIDED UNDER THE TERMS OF THE ECLIPSE PUBLIC LICENSE
# ("AGREEMENT"). ANY USE, REPRODUCTION OR DISTRIBUTION OF THIS FILE
# CONSTITUTES RECIPIENTS ACCEPTANCE OF THE AGREEMENT.
#
# You can obtain a current copy of the Eclipse Public License from
# http://www.opensource.org/licenses/eclipse-1.0.php
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
               libcmpiLinux_SambaForceUserForGlobal.la 

################################################################################
# Linux_SambaForceUserForGlobal
libcmpiLinux_SambaForceUserForGlobal_la_SOURCES = \
        CmpiLinux_SambaForceUserForGlobalProvider.cpp \
        Linux_SambaForceUserForGlobalDefaultImplementation.cpp \
        Linux_SambaForceUserForGlobalExternal.cpp \
        Linux_SambaForceUserForGlobalFactory.cpp \
        Linux_SambaForceUserForGlobalInstance.cpp \
        Linux_SambaForceUserForGlobalInstanceName.cpp \
        Linux_SambaForceUserForGlobalManualInstance.cpp \
        Linux_SambaForceUserForGlobalRepositoryExternal.cpp \
        Linux_SambaForceUserForGlobalRepositoryInstance.cpp \
        Linux_SambaForceUserForGlobalResourceAccess.cpp

noinst_HEADERS+= \
        CmpiLinux_SambaForceUserForGlobalProvider.h \
        Linux_SambaForceUserForGlobalDefaultImplementation.h \
        Linux_SambaForceUserForGlobalExternal.h \
        Linux_SambaForceUserForGlobalFactory.h \
        Linux_SambaForceUserForGlobalInstance.h \
        Linux_SambaForceUserForGlobalInstanceName.h \
        Linux_SambaForceUserForGlobalInterface.h \
        Linux_SambaForceUserForGlobalManualInstance.h \
        Linux_SambaForceUserForGlobalRepositoryExternal.h \
        Linux_SambaForceUserForGlobalRepositoryInstance.h \
        Linux_SambaForceUserForGlobalResourceAccess.h

libcmpiLinux_SambaForceUserForGlobal_la_LIBADD = \
        $(top_builddir)/resource-access/libRaToolsSmb.la \
        $(top_builddir)/provider/libIBM_SmbProviderTooling.la \
        $(top_builddir)/provider/libLinux_SmbGeneralProviderBasic.la \
        $(top_builddir)/provider/Linux_SambaUser/libcmpiLinux_SambaUser.la \
        $(top_builddir)/provider/Linux_SambaGlobalOptions/libcmpiLinux_SambaGlobalOptions.la

libcmpiLinux_SambaForceUserForGlobal_la_LDFLAGS = -avoid-version
