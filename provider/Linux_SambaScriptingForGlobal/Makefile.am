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
              -I${srcdir}/../Linux_SambaGlobalOptions \
              -I${srcdir}/../Linux_SambaScriptingOptions

################################################################################
provider_LTLIBRARIES = \
               libcmpiLinux_SambaScriptingForGlobal.la 

################################################################################
# Linux_SambaScriptingForGlobal
libcmpiLinux_SambaScriptingForGlobal_la_SOURCES = \
        CmpiLinux_SambaScriptingForGlobalProvider.cpp \
        Linux_SambaScriptingForGlobalDefaultImplementation.cpp \
        Linux_SambaScriptingForGlobalExternal.cpp \
        Linux_SambaScriptingForGlobalFactory.cpp \
        Linux_SambaScriptingForGlobalInstance.cpp \
        Linux_SambaScriptingForGlobalInstanceName.cpp \
        Linux_SambaScriptingForGlobalManualInstance.cpp \
        Linux_SambaScriptingForGlobalRepositoryExternal.cpp \
        Linux_SambaScriptingForGlobalRepositoryInstance.cpp \
        Linux_SambaScriptingForGlobalResourceAccess.cpp

noinst_HEADERS+= \
        CmpiLinux_SambaScriptingForGlobalProvider.h \
        Linux_SambaScriptingForGlobalDefaultImplementation.h \
        Linux_SambaScriptingForGlobalExternal.h \
        Linux_SambaScriptingForGlobalFactory.h \
        Linux_SambaScriptingForGlobalInstance.h \
        Linux_SambaScriptingForGlobalInstanceName.h \
        Linux_SambaScriptingForGlobalInterface.h \
        Linux_SambaScriptingForGlobalManualInstance.h \
        Linux_SambaScriptingForGlobalRepositoryExternal.h \
        Linux_SambaScriptingForGlobalRepositoryInstance.h \
        Linux_SambaScriptingForGlobalResourceAccess.h

libcmpiLinux_SambaScriptingForGlobal_la_LIBADD = \
        $(top_builddir)/resource-access/libRaToolsSmb.la \
        $(top_builddir)/provider/libIBM_SmbProviderTooling.la \
        $(top_builddir)/provider/libLinux_SmbGeneralProviderBasic.la \
        $(top_builddir)/provider/Linux_SambaGlobalOptions/libcmpiLinux_SambaGlobalOptions.la \
        $(top_builddir)/provider/Linux_SambaScriptingOptions/libcmpiLinux_SambaScriptingOptions.la

libcmpiLinux_SambaScriptingForGlobal_la_LDFLAGS = -avoid-version
