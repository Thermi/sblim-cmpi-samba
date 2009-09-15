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
               libcmpiLinux_SambaShareSecurityOptions.la 

################################################################################
# Linux_SambaShareSecurityOptions
libcmpiLinux_SambaShareSecurityOptions_la_SOURCES = \
        CmpiLinux_SambaShareSecurityOptionsProvider.cpp \
        Linux_SambaShareSecurityOptionsDefaultImplementation.cpp \
        Linux_SambaShareSecurityOptionsExternal.cpp \
        Linux_SambaShareSecurityOptionsFactory.cpp \
        Linux_SambaShareSecurityOptionsInstance.cpp \
        Linux_SambaShareSecurityOptionsInstanceName.cpp \
        Linux_SambaShareSecurityOptionsManualInstance.cpp \
        Linux_SambaShareSecurityOptionsRepositoryExternal.cpp \
        Linux_SambaShareSecurityOptionsRepositoryInstance.cpp \
        Linux_SambaShareSecurityOptionsResourceAccess.cpp

noinst_HEADERS+= \
        CmpiLinux_SambaShareSecurityOptionsProvider.h \
        Linux_SambaShareSecurityOptionsDefaultImplementation.h \
        Linux_SambaShareSecurityOptionsExternal.h \
        Linux_SambaShareSecurityOptionsFactory.h \
        Linux_SambaShareSecurityOptionsInstance.h \
        Linux_SambaShareSecurityOptionsInstanceName.h \
        Linux_SambaShareSecurityOptionsInterface.h \
        Linux_SambaShareSecurityOptionsManualInstance.h \
        Linux_SambaShareSecurityOptionsRepositoryExternal.h \
        Linux_SambaShareSecurityOptionsRepositoryInstance.h \
        Linux_SambaShareSecurityOptionsResourceAccess.h

libcmpiLinux_SambaShareSecurityOptions_la_LIBADD = \
        $(top_builddir)/resource-access/libRaToolsSmb.la \
        $(top_builddir)/provider/libIBM_SmbProviderTooling.la \
        $(top_builddir)/provider/libLinux_SmbGeneralProviderBasic.la

libcmpiLinux_SambaShareSecurityOptions_la_LDFLAGS = -avoid-version
