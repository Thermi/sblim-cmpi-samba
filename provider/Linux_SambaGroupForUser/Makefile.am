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
              -I${srcdir}/../Linux_SambaGroup \
              -I${srcdir}/../Linux_SambaUser

################################################################################
provider_LTLIBRARIES = \
               libcmpiLinux_SambaGroupForUser.la 

################################################################################
# Linux_SambaGroupForUser
libcmpiLinux_SambaGroupForUser_la_SOURCES = \
        CmpiLinux_SambaGroupForUserProvider.cpp \
        Linux_SambaGroupForUserDefaultImplementation.cpp \
        Linux_SambaGroupForUserExternal.cpp \
        Linux_SambaGroupForUserFactory.cpp \
        Linux_SambaGroupForUserInstance.cpp \
        Linux_SambaGroupForUserInstanceName.cpp \
        Linux_SambaGroupForUserManualInstance.cpp \
        Linux_SambaGroupForUserRepositoryExternal.cpp \
        Linux_SambaGroupForUserRepositoryInstance.cpp \
        Linux_SambaGroupForUserResourceAccess.cpp

noinst_HEADERS+= \
        CmpiLinux_SambaGroupForUserProvider.h \
        Linux_SambaGroupForUserDefaultImplementation.h \
        Linux_SambaGroupForUserExternal.h \
        Linux_SambaGroupForUserFactory.h \
        Linux_SambaGroupForUserInstance.h \
        Linux_SambaGroupForUserInstanceName.h \
        Linux_SambaGroupForUserInterface.h \
        Linux_SambaGroupForUserManualInstance.h \
        Linux_SambaGroupForUserRepositoryExternal.h \
        Linux_SambaGroupForUserRepositoryInstance.h \
        Linux_SambaGroupForUserResourceAccess.h

libcmpiLinux_SambaGroupForUser_la_LIBADD = \
        $(top_builddir)/resource-access/libRaToolsSmb.la \
        $(top_builddir)/provider/libIBM_SmbProviderTooling.la \
        $(top_builddir)/provider/libLinux_SmbGeneralProviderBasic.la \
        $(top_builddir)/provider/Linux_SambaGroup/libcmpiLinux_SambaGroup.la \
        $(top_builddir)/provider/Linux_SambaUser/libcmpiLinux_SambaUser.la

libcmpiLinux_SambaGroupForUser_la_LDFLAGS = -avoid-version
