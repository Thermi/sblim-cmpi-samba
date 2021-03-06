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
               libcmpiLinux_SambaScriptingOptions.la 

################################################################################
# Linux_SambaScriptingOptions
libcmpiLinux_SambaScriptingOptions_la_SOURCES = \
        CmpiLinux_SambaScriptingOptionsProvider.cpp \
        Linux_SambaScriptingOptionsDefaultImplementation.cpp \
        Linux_SambaScriptingOptionsExternal.cpp \
        Linux_SambaScriptingOptionsFactory.cpp \
        Linux_SambaScriptingOptionsInstance.cpp \
        Linux_SambaScriptingOptionsInstanceName.cpp \
        Linux_SambaScriptingOptionsManualInstance.cpp \
        Linux_SambaScriptingOptionsRepositoryExternal.cpp \
        Linux_SambaScriptingOptionsRepositoryInstance.cpp \
        Linux_SambaScriptingOptionsResourceAccess.cpp

noinst_HEADERS+= \
        CmpiLinux_SambaScriptingOptionsProvider.h \
        Linux_SambaScriptingOptionsDefaultImplementation.h \
        Linux_SambaScriptingOptionsExternal.h \
        Linux_SambaScriptingOptionsFactory.h \
        Linux_SambaScriptingOptionsInstance.h \
        Linux_SambaScriptingOptionsInstanceName.h \
        Linux_SambaScriptingOptionsInterface.h \
        Linux_SambaScriptingOptionsManualInstance.h \
        Linux_SambaScriptingOptionsRepositoryExternal.h \
        Linux_SambaScriptingOptionsRepositoryInstance.h \
        Linux_SambaScriptingOptionsResourceAccess.h

libcmpiLinux_SambaScriptingOptions_la_LIBADD = \
        $(top_builddir)/resource-access/libRaToolsSmb.la \
        $(top_builddir)/provider/libIBM_SmbProviderTooling.la \
        $(top_builddir)/provider/libLinux_SmbGeneralProviderBasic.la

libcmpiLinux_SambaScriptingOptions_la_LDFLAGS = -avoid-version
