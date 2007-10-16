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
              -I${srcdir}/../Linux_SambaShareOptions \
              -I${srcdir}/../Linux_SambaUser

################################################################################
provider_LTLIBRARIES = \
               libcmpiLinux_SambaInvalidUsersForShare.la 

################################################################################
# Linux_SambaInvalidUsersForShare
libcmpiLinux_SambaInvalidUsersForShare_la_SOURCES = \
        CmpiLinux_SambaInvalidUsersForShareProvider.cpp \
        Linux_SambaInvalidUsersForShareDefaultImplementation.cpp \
        Linux_SambaInvalidUsersForShareExternal.cpp \
        Linux_SambaInvalidUsersForShareFactory.cpp \
        Linux_SambaInvalidUsersForShareInstance.cpp \
        Linux_SambaInvalidUsersForShareInstanceName.cpp \
        Linux_SambaInvalidUsersForShareManualInstance.cpp \
        Linux_SambaInvalidUsersForShareRepositoryExternal.cpp \
        Linux_SambaInvalidUsersForShareRepositoryInstance.cpp \
        Linux_SambaInvalidUsersForShareResourceAccess.cpp

noinst_HEADERS+= \
        CmpiLinux_SambaInvalidUsersForShareProvider.h \
        Linux_SambaInvalidUsersForShareDefaultImplementation.h \
        Linux_SambaInvalidUsersForShareExternal.h \
        Linux_SambaInvalidUsersForShareFactory.h \
        Linux_SambaInvalidUsersForShareInstance.h \
        Linux_SambaInvalidUsersForShareInstanceName.h \
        Linux_SambaInvalidUsersForShareInterface.h \
        Linux_SambaInvalidUsersForShareManualInstance.h \
        Linux_SambaInvalidUsersForShareRepositoryExternal.h \
        Linux_SambaInvalidUsersForShareRepositoryInstance.h \
        Linux_SambaInvalidUsersForShareResourceAccess.h

libcmpiLinux_SambaInvalidUsersForShare_la_LIBADD = \
        $(top_builddir)/resource-access/libRaToolsSmb.la \
        $(top_builddir)/provider/libIBM_SmbProviderTooling.la \
        $(top_builddir)/provider/libLinux_SmbGeneralProviderBasic.la \
        $(top_builddir)/provider/Linux_SambaShareOptions/libcmpiLinux_SambaShareOptions.la \
        $(top_builddir)/provider/Linux_SambaUser/libcmpiLinux_SambaUser.la

libcmpiLinux_SambaInvalidUsersForShare_la_LDFLAGS = -avoid-version
