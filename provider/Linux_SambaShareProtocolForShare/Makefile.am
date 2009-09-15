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
              -I${srcdir}/../Linux_SambaShareProtocolOptions

################################################################################
provider_LTLIBRARIES = \
               libcmpiLinux_SambaShareProtocolForShare.la 

################################################################################
# Linux_SambaShareProtocolForShare
libcmpiLinux_SambaShareProtocolForShare_la_SOURCES = \
        CmpiLinux_SambaShareProtocolForShareProvider.cpp \
        Linux_SambaShareProtocolForShareDefaultImplementation.cpp \
        Linux_SambaShareProtocolForShareExternal.cpp \
        Linux_SambaShareProtocolForShareFactory.cpp \
        Linux_SambaShareProtocolForShareInstance.cpp \
        Linux_SambaShareProtocolForShareInstanceName.cpp \
        Linux_SambaShareProtocolForShareManualInstance.cpp \
        Linux_SambaShareProtocolForShareRepositoryExternal.cpp \
        Linux_SambaShareProtocolForShareRepositoryInstance.cpp \
        Linux_SambaShareProtocolForShareResourceAccess.cpp

noinst_HEADERS+= \
        CmpiLinux_SambaShareProtocolForShareProvider.h \
        Linux_SambaShareProtocolForShareDefaultImplementation.h \
        Linux_SambaShareProtocolForShareExternal.h \
        Linux_SambaShareProtocolForShareFactory.h \
        Linux_SambaShareProtocolForShareInstance.h \
        Linux_SambaShareProtocolForShareInstanceName.h \
        Linux_SambaShareProtocolForShareInterface.h \
        Linux_SambaShareProtocolForShareManualInstance.h \
        Linux_SambaShareProtocolForShareRepositoryExternal.h \
        Linux_SambaShareProtocolForShareRepositoryInstance.h \
        Linux_SambaShareProtocolForShareResourceAccess.h

libcmpiLinux_SambaShareProtocolForShare_la_LIBADD = \
        $(top_builddir)/resource-access/libRaToolsSmb.la \
        $(top_builddir)/provider/libIBM_SmbProviderTooling.la \
        $(top_builddir)/provider/libLinux_SmbGeneralProviderBasic.la \
        $(top_builddir)/provider/Linux_SambaShareOptions/libcmpiLinux_SambaShareOptions.la \
        $(top_builddir)/provider/Linux_SambaShareProtocolOptions/libcmpiLinux_SambaShareProtocolOptions.la

libcmpiLinux_SambaShareProtocolForShare_la_LDFLAGS = -avoid-version
