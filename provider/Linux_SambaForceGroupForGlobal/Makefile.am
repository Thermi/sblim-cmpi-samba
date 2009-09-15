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
              -I${srcdir}/../Linux_SambaGroup

################################################################################
provider_LTLIBRARIES = \
               libcmpiLinux_SambaForceGroupForGlobal.la 

################################################################################
# Linux_SambaForceGroupForGlobal
libcmpiLinux_SambaForceGroupForGlobal_la_SOURCES = \
        CmpiLinux_SambaForceGroupForGlobalProvider.cpp \
        Linux_SambaForceGroupForGlobalDefaultImplementation.cpp \
        Linux_SambaForceGroupForGlobalExternal.cpp \
        Linux_SambaForceGroupForGlobalFactory.cpp \
        Linux_SambaForceGroupForGlobalInstance.cpp \
        Linux_SambaForceGroupForGlobalInstanceName.cpp \
        Linux_SambaForceGroupForGlobalManualInstance.cpp \
        Linux_SambaForceGroupForGlobalRepositoryExternal.cpp \
        Linux_SambaForceGroupForGlobalRepositoryInstance.cpp \
        Linux_SambaForceGroupForGlobalResourceAccess.cpp

noinst_HEADERS+= \
        CmpiLinux_SambaForceGroupForGlobalProvider.h \
        Linux_SambaForceGroupForGlobalDefaultImplementation.h \
        Linux_SambaForceGroupForGlobalExternal.h \
        Linux_SambaForceGroupForGlobalFactory.h \
        Linux_SambaForceGroupForGlobalInstance.h \
        Linux_SambaForceGroupForGlobalInstanceName.h \
        Linux_SambaForceGroupForGlobalInterface.h \
        Linux_SambaForceGroupForGlobalManualInstance.h \
        Linux_SambaForceGroupForGlobalRepositoryExternal.h \
        Linux_SambaForceGroupForGlobalRepositoryInstance.h \
        Linux_SambaForceGroupForGlobalResourceAccess.h

libcmpiLinux_SambaForceGroupForGlobal_la_LIBADD = \
        $(top_builddir)/resource-access/libRaToolsSmb.la \
        $(top_builddir)/provider/libIBM_SmbProviderTooling.la \
        $(top_builddir)/provider/libLinux_SmbGeneralProviderBasic.la \
        $(top_builddir)/provider/Linux_SambaGroup/libcmpiLinux_SambaGroup.la \
        $(top_builddir)/provider/Linux_SambaGlobalOptions/libcmpiLinux_SambaGlobalOptions.la

libcmpiLinux_SambaForceGroupForGlobal_la_LDFLAGS = -avoid-version
