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
               libcmpiLinux_SambaValidUsersForShare.la 

################################################################################
# Linux_SambaValidUsersForShare
libcmpiLinux_SambaValidUsersForShare_la_SOURCES = \
        CmpiLinux_SambaValidUsersForShareProvider.cpp \
        Linux_SambaValidUsersForShareDefaultImplementation.cpp \
        Linux_SambaValidUsersForShareExternal.cpp \
        Linux_SambaValidUsersForShareFactory.cpp \
        Linux_SambaValidUsersForShareInstance.cpp \
        Linux_SambaValidUsersForShareInstanceName.cpp \
        Linux_SambaValidUsersForShareManualInstance.cpp \
        Linux_SambaValidUsersForShareRepositoryExternal.cpp \
        Linux_SambaValidUsersForShareRepositoryInstance.cpp \
        Linux_SambaValidUsersForShareResourceAccess.cpp

noinst_HEADERS+= \
        CmpiLinux_SambaValidUsersForShareProvider.h \
        Linux_SambaValidUsersForShareDefaultImplementation.h \
        Linux_SambaValidUsersForShareExternal.h \
        Linux_SambaValidUsersForShareFactory.h \
        Linux_SambaValidUsersForShareInstance.h \
        Linux_SambaValidUsersForShareInstanceName.h \
        Linux_SambaValidUsersForShareInterface.h \
        Linux_SambaValidUsersForShareManualInstance.h \
        Linux_SambaValidUsersForShareRepositoryExternal.h \
        Linux_SambaValidUsersForShareRepositoryInstance.h \
        Linux_SambaValidUsersForShareResourceAccess.h

libcmpiLinux_SambaValidUsersForShare_la_LIBADD = \
        $(top_builddir)/resource-access/libRaToolsSmb.la \
        $(top_builddir)/provider/libIBM_SmbProviderTooling.la \
        $(top_builddir)/provider/libLinux_SmbGeneralProviderBasic.la \
        $(top_builddir)/provider/Linux_SambaShareOptions/libcmpiLinux_SambaShareOptions.la \
        $(top_builddir)/provider/Linux_SambaUser/libcmpiLinux_SambaUser.la

libcmpiLinux_SambaValidUsersForShare_la_LDFLAGS = -avoid-version
