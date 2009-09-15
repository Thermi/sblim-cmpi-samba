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
              -I${srcdir}/../../resource-access

################################################################################
provider_LTLIBRARIES = \
               libcmpiLinux_SambaShareFileNameHandlingOptions.la 

################################################################################
# Linux_SambaShareFileNameHandlingOptions
libcmpiLinux_SambaShareFileNameHandlingOptions_la_SOURCES = \
        CmpiLinux_SambaShareFileNameHandlingOptionsProvider.cpp \
        Linux_SambaShareFileNameHandlingOptionsDefaultImplementation.cpp \
        Linux_SambaShareFileNameHandlingOptionsExternal.cpp \
        Linux_SambaShareFileNameHandlingOptionsFactory.cpp \
        Linux_SambaShareFileNameHandlingOptionsInstance.cpp \
        Linux_SambaShareFileNameHandlingOptionsInstanceName.cpp \
        Linux_SambaShareFileNameHandlingOptionsManualInstance.cpp \
        Linux_SambaShareFileNameHandlingOptionsRepositoryExternal.cpp \
        Linux_SambaShareFileNameHandlingOptionsRepositoryInstance.cpp \
        Linux_SambaShareFileNameHandlingOptionsResourceAccess.cpp

noinst_HEADERS+= \
        CmpiLinux_SambaShareFileNameHandlingOptionsProvider.h \
        Linux_SambaShareFileNameHandlingOptionsDefaultImplementation.h \
        Linux_SambaShareFileNameHandlingOptionsExternal.h \
        Linux_SambaShareFileNameHandlingOptionsFactory.h \
        Linux_SambaShareFileNameHandlingOptionsInstance.h \
        Linux_SambaShareFileNameHandlingOptionsInstanceName.h \
        Linux_SambaShareFileNameHandlingOptionsInterface.h \
        Linux_SambaShareFileNameHandlingOptionsManualInstance.h \
        Linux_SambaShareFileNameHandlingOptionsRepositoryExternal.h \
        Linux_SambaShareFileNameHandlingOptionsRepositoryInstance.h \
        Linux_SambaShareFileNameHandlingOptionsResourceAccess.h

libcmpiLinux_SambaShareFileNameHandlingOptions_la_LIBADD = \
        $(top_builddir)/resource-access/libRaToolsSmb.la \
        $(top_builddir)/provider/libIBM_SmbProviderTooling.la \
        $(top_builddir)/provider/libLinux_SmbGeneralProviderBasic.la

libcmpiLinux_SambaShareFileNameHandlingOptions_la_LDFLAGS = -avoid-version
