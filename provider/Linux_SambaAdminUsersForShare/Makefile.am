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
              -I${srcdir}/../Linux_SambaShareOptions \
              -I${srcdir}/../Linux_SambaUser

################################################################################
provider_LTLIBRARIES = \
               libcmpiLinux_SambaAdminUsersForShare.la 

################################################################################
# Linux_SambaAdminUsersForShare
libcmpiLinux_SambaAdminUsersForShare_la_SOURCES = \
        CmpiLinux_SambaAdminUsersForShareProvider.cpp \
        Linux_SambaAdminUsersForShareDefaultImplementation.cpp \
        Linux_SambaAdminUsersForShareExternal.cpp \
        Linux_SambaAdminUsersForShareFactory.cpp \
        Linux_SambaAdminUsersForShareInstance.cpp \
        Linux_SambaAdminUsersForShareInstanceName.cpp \
        Linux_SambaAdminUsersForShareManualInstance.cpp \
        Linux_SambaAdminUsersForShareRepositoryExternal.cpp \
        Linux_SambaAdminUsersForShareRepositoryInstance.cpp \
        Linux_SambaAdminUsersForShareResourceAccess.cpp

noinst_HEADERS+= \
        CmpiLinux_SambaAdminUsersForShareProvider.h \
        Linux_SambaAdminUsersForShareDefaultImplementation.h \
        Linux_SambaAdminUsersForShareExternal.h \
        Linux_SambaAdminUsersForShareFactory.h \
        Linux_SambaAdminUsersForShareInstance.h \
        Linux_SambaAdminUsersForShareInstanceName.h \
        Linux_SambaAdminUsersForShareInterface.h \
        Linux_SambaAdminUsersForShareManualInstance.h \
        Linux_SambaAdminUsersForShareRepositoryExternal.h \
        Linux_SambaAdminUsersForShareRepositoryInstance.h \
        Linux_SambaAdminUsersForShareResourceAccess.h

libcmpiLinux_SambaAdminUsersForShare_la_LIBADD = \
        $(top_builddir)/resource-access/libRaToolsSmb.la \
        $(top_builddir)/provider/libIBM_SmbProviderTooling.la \
        $(top_builddir)/provider/libLinux_SmbGeneralProviderBasic.la \
        $(top_builddir)/provider/Linux_SambaShareOptions/libcmpiLinux_SambaShareOptions.la \
        $(top_builddir)/provider/Linux_SambaUser/libcmpiLinux_SambaUser.la

libcmpiLinux_SambaAdminUsersForShare_la_LDFLAGS = -avoid-version
