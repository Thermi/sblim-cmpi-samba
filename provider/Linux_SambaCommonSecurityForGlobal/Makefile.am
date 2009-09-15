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
              -I${srcdir}/../Linux_SambaGlobalOptions

################################################################################
provider_LTLIBRARIES = \
               libcmpiLinux_SambaCommonSecurityForGlobal.la 

################################################################################
# Linux_SambaCommonSecurityForGlobal
libcmpiLinux_SambaCommonSecurityForGlobal_la_SOURCES = \
        CmpiLinux_SambaCommonSecurityForGlobalProvider.cpp \
        Linux_SambaCommonSecurityForGlobalDefaultImplementation.cpp \
        Linux_SambaCommonSecurityForGlobalExternal.cpp \
        Linux_SambaCommonSecurityForGlobalFactory.cpp \
        Linux_SambaCommonSecurityForGlobalInstance.cpp \
        Linux_SambaCommonSecurityForGlobalInstanceName.cpp \
        Linux_SambaCommonSecurityForGlobalManualInstance.cpp \
        Linux_SambaCommonSecurityForGlobalRepositoryExternal.cpp \
        Linux_SambaCommonSecurityForGlobalRepositoryInstance.cpp \
        Linux_SambaCommonSecurityForGlobalResourceAccess.cpp

noinst_HEADERS+= \
        CmpiLinux_SambaCommonSecurityForGlobalProvider.h \
        Linux_SambaCommonSecurityForGlobalDefaultImplementation.h \
        Linux_SambaCommonSecurityForGlobalExternal.h \
        Linux_SambaCommonSecurityForGlobalFactory.h \
        Linux_SambaCommonSecurityForGlobalInstance.h \
        Linux_SambaCommonSecurityForGlobalInstanceName.h \
        Linux_SambaCommonSecurityForGlobalInterface.h \
        Linux_SambaCommonSecurityForGlobalManualInstance.h \
        Linux_SambaCommonSecurityForGlobalRepositoryExternal.h \
        Linux_SambaCommonSecurityForGlobalRepositoryInstance.h \
        Linux_SambaCommonSecurityForGlobalResourceAccess.h

libcmpiLinux_SambaCommonSecurityForGlobal_la_LIBADD = \
        $(top_builddir)/resource-access/libRaToolsSmb.la \
        $(top_builddir)/provider/libIBM_SmbProviderTooling.la \
        $(top_builddir)/provider/libLinux_SmbGeneralProviderBasic.la \
        $(top_builddir)/provider/Linux_SambaCommonSecurityOptions/libcmpiLinux_SambaCommonSecurityOptions.la \
        $(top_builddir)/provider/Linux_SambaGlobalOptions/libcmpiLinux_SambaGlobalOptions.la

libcmpiLinux_SambaCommonSecurityForGlobal_la_LDFLAGS = -avoid-version
