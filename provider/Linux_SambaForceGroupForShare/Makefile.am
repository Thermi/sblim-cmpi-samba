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
              -I${srcdir}/../Linux_SambaGroup

################################################################################
provider_LTLIBRARIES = \
               libcmpiLinux_SambaForceGroupForShare.la 

################################################################################
# Linux_SambaForceGroupForShare
libcmpiLinux_SambaForceGroupForShare_la_SOURCES = \
        CmpiLinux_SambaForceGroupForShareProvider.cpp \
        Linux_SambaForceGroupForShareDefaultImplementation.cpp \
        Linux_SambaForceGroupForShareExternal.cpp \
        Linux_SambaForceGroupForShareFactory.cpp \
        Linux_SambaForceGroupForShareInstance.cpp \
        Linux_SambaForceGroupForShareInstanceName.cpp \
        Linux_SambaForceGroupForShareManualInstance.cpp \
        Linux_SambaForceGroupForShareRepositoryExternal.cpp \
        Linux_SambaForceGroupForShareRepositoryInstance.cpp \
        Linux_SambaForceGroupForShareResourceAccess.cpp

noinst_HEADERS+= \
        CmpiLinux_SambaForceGroupForShareProvider.h \
        Linux_SambaForceGroupForShareDefaultImplementation.h \
        Linux_SambaForceGroupForShareExternal.h \
        Linux_SambaForceGroupForShareFactory.h \
        Linux_SambaForceGroupForShareInstance.h \
        Linux_SambaForceGroupForShareInstanceName.h \
        Linux_SambaForceGroupForShareInterface.h \
        Linux_SambaForceGroupForShareManualInstance.h \
        Linux_SambaForceGroupForShareRepositoryExternal.h \
        Linux_SambaForceGroupForShareRepositoryInstance.h \
        Linux_SambaForceGroupForShareResourceAccess.h

libcmpiLinux_SambaForceGroupForShare_la_LIBADD = \
        $(top_builddir)/resource-access/libRaToolsSmb.la \
        $(top_builddir)/provider/libIBM_SmbProviderTooling.la \
        $(top_builddir)/provider/libLinux_SmbGeneralProviderBasic.la \
        $(top_builddir)/provider/Linux_SambaGroup/libcmpiLinux_SambaGroup.la \
        $(top_builddir)/provider/Linux_SambaShareOptions/libcmpiLinux_SambaShareOptions.la

libcmpiLinux_SambaForceGroupForShare_la_LDFLAGS = -avoid-version
