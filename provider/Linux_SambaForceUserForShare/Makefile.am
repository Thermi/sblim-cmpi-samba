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
               libcmpiLinux_SambaForceUserForShare.la 

################################################################################
# Linux_SambaForceUserForShare
libcmpiLinux_SambaForceUserForShare_la_SOURCES = \
        CmpiLinux_SambaForceUserForShareProvider.cpp \
        Linux_SambaForceUserForShareDefaultImplementation.cpp \
        Linux_SambaForceUserForShareExternal.cpp \
        Linux_SambaForceUserForShareFactory.cpp \
        Linux_SambaForceUserForShareInstance.cpp \
        Linux_SambaForceUserForShareInstanceName.cpp \
        Linux_SambaForceUserForShareManualInstance.cpp \
        Linux_SambaForceUserForShareRepositoryExternal.cpp \
        Linux_SambaForceUserForShareRepositoryInstance.cpp \
        Linux_SambaForceUserForShareResourceAccess.cpp

noinst_HEADERS+= \
        CmpiLinux_SambaForceUserForShareProvider.h \
        Linux_SambaForceUserForShareDefaultImplementation.h \
        Linux_SambaForceUserForShareExternal.h \
        Linux_SambaForceUserForShareFactory.h \
        Linux_SambaForceUserForShareInstance.h \
        Linux_SambaForceUserForShareInstanceName.h \
        Linux_SambaForceUserForShareInterface.h \
        Linux_SambaForceUserForShareManualInstance.h \
        Linux_SambaForceUserForShareRepositoryExternal.h \
        Linux_SambaForceUserForShareRepositoryInstance.h \
        Linux_SambaForceUserForShareResourceAccess.h

libcmpiLinux_SambaForceUserForShare_la_LIBADD = \
        $(top_builddir)/resource-access/libRaToolsSmb.la \
        $(top_builddir)/provider/libIBM_SmbProviderTooling.la \
        $(top_builddir)/provider/libLinux_SmbGeneralProviderBasic.la \
        $(top_builddir)/provider/Linux_SambaUser/libcmpiLinux_SambaUser.la \
        $(top_builddir)/provider/Linux_SambaShareOptions/libcmpiLinux_SambaShareOptions.la

libcmpiLinux_SambaForceUserForShare_la_LDFLAGS = -avoid-version
