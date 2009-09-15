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
               libcmpiLinux_SambaShareOptions.la 

################################################################################
# Linux_SambaShareOptions
libcmpiLinux_SambaShareOptions_la_SOURCES = \
        CmpiLinux_SambaShareOptionsProvider.cpp \
        Linux_SambaShareOptionsDefaultImplementation.cpp \
        Linux_SambaShareOptionsExternal.cpp \
        Linux_SambaShareOptionsFactory.cpp \
        Linux_SambaShareOptionsInstance.cpp \
        Linux_SambaShareOptionsInstanceName.cpp \
        Linux_SambaShareOptionsManualInstance.cpp \
        Linux_SambaShareOptionsRepositoryExternal.cpp \
        Linux_SambaShareOptionsRepositoryInstance.cpp \
        Linux_SambaShareOptionsResourceAccess.cpp

noinst_HEADERS+= \
        CmpiLinux_SambaShareOptionsProvider.h \
        Linux_SambaShareOptionsDefaultImplementation.h \
        Linux_SambaShareOptionsExternal.h \
        Linux_SambaShareOptionsFactory.h \
        Linux_SambaShareOptionsInstance.h \
        Linux_SambaShareOptionsInstanceName.h \
        Linux_SambaShareOptionsInterface.h \
        Linux_SambaShareOptionsManualInstance.h \
        Linux_SambaShareOptionsRepositoryExternal.h \
        Linux_SambaShareOptionsRepositoryInstance.h \
        Linux_SambaShareOptionsResourceAccess.h

libcmpiLinux_SambaShareOptions_la_LIBADD = \
        $(top_builddir)/resource-access/libRaToolsSmb.la \
        $(top_builddir)/provider/libIBM_SmbProviderTooling.la \
        $(top_builddir)/provider/libLinux_SmbGeneralProviderBasic.la

libcmpiLinux_SambaShareOptions_la_LDFLAGS = -avoid-version
