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
              -I${srcdir}/../Linux_SambaCommonSecurityOptions \
              -I${srcdir}/../Linux_SambaShareOptions

################################################################################
provider_LTLIBRARIES = \
               libcmpiLinux_SambaCommonSecurityForShare.la 

################################################################################
# Linux_SambaCommonSecurityForShare
libcmpiLinux_SambaCommonSecurityForShare_la_SOURCES = \
        CmpiLinux_SambaCommonSecurityForShareProvider.cpp \
        Linux_SambaCommonSecurityForShareDefaultImplementation.cpp \
        Linux_SambaCommonSecurityForShareExternal.cpp \
        Linux_SambaCommonSecurityForShareFactory.cpp \
        Linux_SambaCommonSecurityForShareInstance.cpp \
        Linux_SambaCommonSecurityForShareInstanceName.cpp \
        Linux_SambaCommonSecurityForShareManualInstance.cpp \
        Linux_SambaCommonSecurityForShareRepositoryExternal.cpp \
        Linux_SambaCommonSecurityForShareRepositoryInstance.cpp \
        Linux_SambaCommonSecurityForShareResourceAccess.cpp

noinst_HEADERS+= \
        CmpiLinux_SambaCommonSecurityForShareProvider.h \
        Linux_SambaCommonSecurityForShareDefaultImplementation.h \
        Linux_SambaCommonSecurityForShareExternal.h \
        Linux_SambaCommonSecurityForShareFactory.h \
        Linux_SambaCommonSecurityForShareInstance.h \
        Linux_SambaCommonSecurityForShareInstanceName.h \
        Linux_SambaCommonSecurityForShareInterface.h \
        Linux_SambaCommonSecurityForShareManualInstance.h \
        Linux_SambaCommonSecurityForShareRepositoryExternal.h \
        Linux_SambaCommonSecurityForShareRepositoryInstance.h \
        Linux_SambaCommonSecurityForShareResourceAccess.h

libcmpiLinux_SambaCommonSecurityForShare_la_LIBADD = \
        $(top_builddir)/resource-access/libRaToolsSmb.la \
        $(top_builddir)/provider/libIBM_SmbProviderTooling.la \
        $(top_builddir)/provider/libLinux_SmbGeneralProviderBasic.la \
        $(top_builddir)/provider/Linux_SambaCommonSecurityOptions/libcmpiLinux_SambaCommonSecurityOptions.la \
        $(top_builddir)/provider/Linux_SambaShareOptions/libcmpiLinux_SambaShareOptions.la

libcmpiLinux_SambaCommonSecurityForShare_la_LDFLAGS = -avoid-version
