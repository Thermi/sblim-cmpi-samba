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
               libcmpiLinux_SambaWriteListForShare.la 

################################################################################
# Linux_SambaWriteListForShare
libcmpiLinux_SambaWriteListForShare_la_SOURCES = \
        CmpiLinux_SambaWriteListForShareProvider.cpp \
        Linux_SambaWriteListForShareDefaultImplementation.cpp \
        Linux_SambaWriteListForShareExternal.cpp \
        Linux_SambaWriteListForShareFactory.cpp \
        Linux_SambaWriteListForShareInstance.cpp \
        Linux_SambaWriteListForShareInstanceName.cpp \
        Linux_SambaWriteListForShareManualInstance.cpp \
        Linux_SambaWriteListForShareRepositoryExternal.cpp \
        Linux_SambaWriteListForShareRepositoryInstance.cpp \
        Linux_SambaWriteListForShareResourceAccess.cpp

noinst_HEADERS+= \
        CmpiLinux_SambaWriteListForShareProvider.h \
        Linux_SambaWriteListForShareDefaultImplementation.h \
        Linux_SambaWriteListForShareExternal.h \
        Linux_SambaWriteListForShareFactory.h \
        Linux_SambaWriteListForShareInstance.h \
        Linux_SambaWriteListForShareInstanceName.h \
        Linux_SambaWriteListForShareInterface.h \
        Linux_SambaWriteListForShareManualInstance.h \
        Linux_SambaWriteListForShareRepositoryExternal.h \
        Linux_SambaWriteListForShareRepositoryInstance.h \
        Linux_SambaWriteListForShareResourceAccess.h

libcmpiLinux_SambaWriteListForShare_la_LIBADD = \
        $(top_builddir)/resource-access/libRaToolsSmb.la \
        $(top_builddir)/provider/libIBM_SmbProviderTooling.la \
        $(top_builddir)/provider/libLinux_SmbGeneralProviderBasic.la \
        $(top_builddir)/provider/Linux_SambaShareOptions/libcmpiLinux_SambaShareOptions.la \
        $(top_builddir)/provider/Linux_SambaUser/libcmpiLinux_SambaUser.la

libcmpiLinux_SambaWriteListForShare_la_LDFLAGS = -avoid-version
