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
              -I${srcdir}/../Linux_SambaGlobalOptions \
              -I${srcdir}/../Linux_SambaGlobalSecurityOptions

################################################################################
provider_LTLIBRARIES = \
               libcmpiLinux_SambaGlobalSecurityForGlobal.la 

################################################################################
# Linux_SambaGlobalSecurityForGlobal
libcmpiLinux_SambaGlobalSecurityForGlobal_la_SOURCES = \
        CmpiLinux_SambaGlobalSecurityForGlobalProvider.cpp \
        Linux_SambaGlobalSecurityForGlobalDefaultImplementation.cpp \
        Linux_SambaGlobalSecurityForGlobalExternal.cpp \
        Linux_SambaGlobalSecurityForGlobalFactory.cpp \
        Linux_SambaGlobalSecurityForGlobalInstance.cpp \
        Linux_SambaGlobalSecurityForGlobalInstanceName.cpp \
        Linux_SambaGlobalSecurityForGlobalManualInstance.cpp \
        Linux_SambaGlobalSecurityForGlobalRepositoryExternal.cpp \
        Linux_SambaGlobalSecurityForGlobalRepositoryInstance.cpp \
        Linux_SambaGlobalSecurityForGlobalResourceAccess.cpp

noinst_HEADERS+= \
        CmpiLinux_SambaGlobalSecurityForGlobalProvider.h \
        Linux_SambaGlobalSecurityForGlobalDefaultImplementation.h \
        Linux_SambaGlobalSecurityForGlobalExternal.h \
        Linux_SambaGlobalSecurityForGlobalFactory.h \
        Linux_SambaGlobalSecurityForGlobalInstance.h \
        Linux_SambaGlobalSecurityForGlobalInstanceName.h \
        Linux_SambaGlobalSecurityForGlobalInterface.h \
        Linux_SambaGlobalSecurityForGlobalManualInstance.h \
        Linux_SambaGlobalSecurityForGlobalRepositoryExternal.h \
        Linux_SambaGlobalSecurityForGlobalRepositoryInstance.h \
        Linux_SambaGlobalSecurityForGlobalResourceAccess.h

libcmpiLinux_SambaGlobalSecurityForGlobal_la_LIBADD = \
        $(top_builddir)/resource-access/libRaToolsSmb.la \
        $(top_builddir)/provider/libIBM_SmbProviderTooling.la \
        $(top_builddir)/provider/libLinux_SmbGeneralProviderBasic.la \
        $(top_builddir)/provider/Linux_SambaGlobalSecurityOptions/libcmpiLinux_SambaGlobalSecurityOptions.la \
        $(top_builddir)/provider/Linux_SambaGlobalOptions/libcmpiLinux_SambaGlobalOptions.la

libcmpiLinux_SambaGlobalSecurityForGlobal_la_LDFLAGS = -avoid-version
