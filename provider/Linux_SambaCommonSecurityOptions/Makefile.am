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

AM_CPPFLAGS = \
    -DDEBUG \
    -D_COMPILE_UNIX \
    -DCMPI_STANDALONE \
    -I${srcdir}/../include \
    -I${srcdir}/../../resource-access

################################################################################
provider_LTLIBRARIES = \
               libcmpiLinux_SambaCommonSecurityOptions.la 

################################################################################
# Linux_SambaCommonSecurityOptions
libcmpiLinux_SambaCommonSecurityOptions_la_SOURCES = \
        CmpiLinux_SambaCommonSecurityOptionsProvider.cpp \
        Linux_SambaCommonSecurityOptionsDefaultImplementation.cpp \
        Linux_SambaCommonSecurityOptionsExternal.cpp \
        Linux_SambaCommonSecurityOptionsFactory.cpp \
        Linux_SambaCommonSecurityOptionsInstance.cpp \
        Linux_SambaCommonSecurityOptionsInstanceName.cpp \
        Linux_SambaCommonSecurityOptionsManualInstance.cpp \
        Linux_SambaCommonSecurityOptionsRepositoryExternal.cpp \
        Linux_SambaCommonSecurityOptionsRepositoryInstance.cpp \
        Linux_SambaCommonSecurityOptionsResourceAccess.cpp

noinst_HEADERS+= \
        CmpiLinux_SambaCommonSecurityOptionsProvider.h \
        Linux_SambaCommonSecurityOptionsDefaultImplementation.h \
        Linux_SambaCommonSecurityOptionsExternal.h \
        Linux_SambaCommonSecurityOptionsFactory.h \
        Linux_SambaCommonSecurityOptionsInstance.h \
        Linux_SambaCommonSecurityOptionsInstanceName.h \
        Linux_SambaCommonSecurityOptionsInterface.h \
        Linux_SambaCommonSecurityOptionsManualInstance.h \
        Linux_SambaCommonSecurityOptionsRepositoryExternal.h \
        Linux_SambaCommonSecurityOptionsRepositoryInstance.h \
        Linux_SambaCommonSecurityOptionsResourceAccess.h

libcmpiLinux_SambaCommonSecurityOptions_la_LIBADD = \
        $(top_builddir)/resource-access/libRaToolsSmb.la \
        $(top_builddir)/provider/libIBM_SmbProviderTooling.la \
        $(top_builddir)/provider/libLinux_SmbGeneralProviderBasic.la

libcmpiLinux_SambaCommonSecurityOptions_la_LDFLAGS = -avoid-version
