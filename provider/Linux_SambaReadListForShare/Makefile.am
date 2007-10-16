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
               libcmpiLinux_SambaReadListForShare.la 

################################################################################
# Linux_SambaReadListForShare
libcmpiLinux_SambaReadListForShare_la_SOURCES = \
        CmpiLinux_SambaReadListForShareProvider.cpp \
        Linux_SambaReadListForShareDefaultImplementation.cpp \
        Linux_SambaReadListForShareExternal.cpp \
        Linux_SambaReadListForShareFactory.cpp \
        Linux_SambaReadListForShareInstance.cpp \
        Linux_SambaReadListForShareInstanceName.cpp \
        Linux_SambaReadListForShareManualInstance.cpp \
        Linux_SambaReadListForShareRepositoryExternal.cpp \
        Linux_SambaReadListForShareRepositoryInstance.cpp \
        Linux_SambaReadListForShareResourceAccess.cpp

noinst_HEADERS+= \
        CmpiLinux_SambaReadListForShareProvider.h \
        Linux_SambaReadListForShareDefaultImplementation.h \
        Linux_SambaReadListForShareExternal.h \
        Linux_SambaReadListForShareFactory.h \
        Linux_SambaReadListForShareInstance.h \
        Linux_SambaReadListForShareInstanceName.h \
        Linux_SambaReadListForShareInterface.h \
        Linux_SambaReadListForShareManualInstance.h \
        Linux_SambaReadListForShareRepositoryExternal.h \
        Linux_SambaReadListForShareRepositoryInstance.h \
        Linux_SambaReadListForShareResourceAccess.h

libcmpiLinux_SambaReadListForShare_la_LIBADD = \
        $(top_builddir)/resource-access/libRaToolsSmb.la \
        $(top_builddir)/provider/libIBM_SmbProviderTooling.la \
        $(top_builddir)/provider/libLinux_SmbGeneralProviderBasic.la \
        $(top_builddir)/provider/Linux_SambaShareOptions/libcmpiLinux_SambaShareOptions.la \
        $(top_builddir)/provider/Linux_SambaUser/libcmpiLinux_SambaUser.la

libcmpiLinux_SambaReadListForShare_la_LDFLAGS = -avoid-version
