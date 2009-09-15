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
              -I${srcdir}/../Linux_SambaShareFileNameHandlingOptions

################################################################################
provider_LTLIBRARIES = \
               libcmpiLinux_SambaShareFileNameHandlingForShare.la 

################################################################################
# Linux_SambaShareFileNameHandlingForShare
libcmpiLinux_SambaShareFileNameHandlingForShare_la_SOURCES = \
        CmpiLinux_SambaShareFileNameHandlingForShareProvider.cpp \
        Linux_SambaShareFileNameHandlingForShareDefaultImplementation.cpp \
        Linux_SambaShareFileNameHandlingForShareExternal.cpp \
        Linux_SambaShareFileNameHandlingForShareFactory.cpp \
        Linux_SambaShareFileNameHandlingForShareInstance.cpp \
        Linux_SambaShareFileNameHandlingForShareInstanceName.cpp \
        Linux_SambaShareFileNameHandlingForShareManualInstance.cpp \
        Linux_SambaShareFileNameHandlingForShareRepositoryExternal.cpp \
        Linux_SambaShareFileNameHandlingForShareRepositoryInstance.cpp \
        Linux_SambaShareFileNameHandlingForShareResourceAccess.cpp

noinst_HEADERS+= \
        CmpiLinux_SambaShareFileNameHandlingForShareProvider.h \
        Linux_SambaShareFileNameHandlingForShareDefaultImplementation.h \
        Linux_SambaShareFileNameHandlingForShareExternal.h \
        Linux_SambaShareFileNameHandlingForShareFactory.h \
        Linux_SambaShareFileNameHandlingForShareInstance.h \
        Linux_SambaShareFileNameHandlingForShareInstanceName.h \
        Linux_SambaShareFileNameHandlingForShareInterface.h \
        Linux_SambaShareFileNameHandlingForShareManualInstance.h \
        Linux_SambaShareFileNameHandlingForShareRepositoryExternal.h \
        Linux_SambaShareFileNameHandlingForShareRepositoryInstance.h \
        Linux_SambaShareFileNameHandlingForShareResourceAccess.h

libcmpiLinux_SambaShareFileNameHandlingForShare_la_LIBADD = \
        $(top_builddir)/resource-access/libRaToolsSmb.la \
        $(top_builddir)/provider/libIBM_SmbProviderTooling.la \
        $(top_builddir)/provider/libLinux_SmbGeneralProviderBasic.la \
        $(top_builddir)/provider/Linux_SambaShareOptions/libcmpiLinux_SambaShareOptions.la \
        $(top_builddir)/provider/Linux_SambaShareFileNameHandlingOptions/libcmpiLinux_SambaShareFileNameHandlingOptions.la

libcmpiLinux_SambaShareFileNameHandlingForShare_la_LDFLAGS = -avoid-version
