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
               libcmpiLinux_SambaGroup.la 

################################################################################
# Linux_SambaGroup
libcmpiLinux_SambaGroup_la_SOURCES = \
        CmpiLinux_SambaGroupProvider.cpp \
        Linux_SambaGroupDefaultImplementation.cpp \
        Linux_SambaGroupExternal.cpp \
        Linux_SambaGroupFactory.cpp \
        Linux_SambaGroupInstance.cpp \
        Linux_SambaGroupInstanceName.cpp \
        Linux_SambaGroupManualInstance.cpp \
        Linux_SambaGroupRepositoryExternal.cpp \
        Linux_SambaGroupRepositoryInstance.cpp \
        Linux_SambaGroupResourceAccess.cpp

noinst_HEADERS+= \
        CmpiLinux_SambaGroupProvider.h \
        Linux_SambaGroupDefaultImplementation.h \
        Linux_SambaGroupExternal.h \
        Linux_SambaGroupFactory.h \
        Linux_SambaGroupInstance.h \
        Linux_SambaGroupInstanceName.h \
        Linux_SambaGroupInterface.h \
        Linux_SambaGroupManualInstance.h \
        Linux_SambaGroupRepositoryExternal.h \
        Linux_SambaGroupRepositoryInstance.h \
        Linux_SambaGroupResourceAccess.h

libcmpiLinux_SambaGroup_la_LIBADD = \
        $(top_builddir)/resource-access/libRaToolsSmb.la \
        $(top_builddir)/provider/libIBM_SmbProviderTooling.la \
        $(top_builddir)/provider/libLinux_SmbGeneralProviderBasic.la

libcmpiLinux_SambaGroup_la_LDFLAGS = -avoid-version
