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
              -I${srcdir}/../Linux_SambaHost

################################################################################
provider_LTLIBRARIES = \
               libcmpiLinux_SambaDenyHostsForShare.la 

################################################################################
# Linux_SambaDenyHostsForShare
libcmpiLinux_SambaDenyHostsForShare_la_SOURCES = \
        CmpiLinux_SambaDenyHostsForShareProvider.cpp \
        Linux_SambaDenyHostsForShareDefaultImplementation.cpp \
        Linux_SambaDenyHostsForShareExternal.cpp \
        Linux_SambaDenyHostsForShareFactory.cpp \
        Linux_SambaDenyHostsForShareInstance.cpp \
        Linux_SambaDenyHostsForShareInstanceName.cpp \
        Linux_SambaDenyHostsForShareManualInstance.cpp \
        Linux_SambaDenyHostsForShareRepositoryExternal.cpp \
        Linux_SambaDenyHostsForShareRepositoryInstance.cpp \
        Linux_SambaDenyHostsForShareResourceAccess.cpp

noinst_HEADERS+= \
        CmpiLinux_SambaDenyHostsForShareProvider.h \
        Linux_SambaDenyHostsForShareDefaultImplementation.h \
        Linux_SambaDenyHostsForShareExternal.h \
        Linux_SambaDenyHostsForShareFactory.h \
        Linux_SambaDenyHostsForShareInstance.h \
        Linux_SambaDenyHostsForShareInstanceName.h \
        Linux_SambaDenyHostsForShareInterface.h \
        Linux_SambaDenyHostsForShareManualInstance.h \
        Linux_SambaDenyHostsForShareRepositoryExternal.h \
        Linux_SambaDenyHostsForShareRepositoryInstance.h \
        Linux_SambaDenyHostsForShareResourceAccess.h

libcmpiLinux_SambaDenyHostsForShare_la_LIBADD = \
        $(top_builddir)/resource-access/libRaToolsSmb.la \
        $(top_builddir)/provider/libIBM_SmbProviderTooling.la \
        $(top_builddir)/provider/libLinux_SmbGeneralProviderBasic.la \
        $(top_builddir)/provider/Linux_SambaShareOptions/libcmpiLinux_SambaShareOptions.la \
        $(top_builddir)/provider/Linux_SambaHost/libcmpiLinux_SambaHost.la

libcmpiLinux_SambaDenyHostsForShare_la_LDFLAGS = -avoid-version
