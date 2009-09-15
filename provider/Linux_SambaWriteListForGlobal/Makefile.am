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
              -I${srcdir}/../Linux_SambaUser

################################################################################
provider_LTLIBRARIES = \
               libcmpiLinux_SambaWriteListForGlobal.la 

################################################################################
# Linux_SambaWriteListForGlobal
libcmpiLinux_SambaWriteListForGlobal_la_SOURCES = \
        CmpiLinux_SambaWriteListForGlobalProvider.cpp \
        Linux_SambaWriteListForGlobalDefaultImplementation.cpp \
        Linux_SambaWriteListForGlobalExternal.cpp \
        Linux_SambaWriteListForGlobalFactory.cpp \
        Linux_SambaWriteListForGlobalInstance.cpp \
        Linux_SambaWriteListForGlobalInstanceName.cpp \
        Linux_SambaWriteListForGlobalManualInstance.cpp \
        Linux_SambaWriteListForGlobalRepositoryExternal.cpp \
        Linux_SambaWriteListForGlobalRepositoryInstance.cpp \
        Linux_SambaWriteListForGlobalResourceAccess.cpp

noinst_HEADERS+= \
        CmpiLinux_SambaWriteListForGlobalProvider.h \
        Linux_SambaWriteListForGlobalDefaultImplementation.h \
        Linux_SambaWriteListForGlobalExternal.h \
        Linux_SambaWriteListForGlobalFactory.h \
        Linux_SambaWriteListForGlobalInstance.h \
        Linux_SambaWriteListForGlobalInstanceName.h \
        Linux_SambaWriteListForGlobalInterface.h \
        Linux_SambaWriteListForGlobalManualInstance.h \
        Linux_SambaWriteListForGlobalRepositoryExternal.h \
        Linux_SambaWriteListForGlobalRepositoryInstance.h \
        Linux_SambaWriteListForGlobalResourceAccess.h

libcmpiLinux_SambaWriteListForGlobal_la_LIBADD = \
        $(top_builddir)/resource-access/libRaToolsSmb.la \
        $(top_builddir)/provider/libIBM_SmbProviderTooling.la \
        $(top_builddir)/provider/libLinux_SmbGeneralProviderBasic.la \
        $(top_builddir)/provider/Linux_SambaGlobalOptions/libcmpiLinux_SambaGlobalOptions.la \
        $(top_builddir)/provider/Linux_SambaUser/libcmpiLinux_SambaUser.la

libcmpiLinux_SambaWriteListForGlobal_la_LDFLAGS = -avoid-version
