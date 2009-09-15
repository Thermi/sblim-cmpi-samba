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
               libcmpiLinux_SambaUser.la 

################################################################################
# Linux_SambaUser
libcmpiLinux_SambaUser_la_SOURCES = \
        CmpiLinux_SambaUserProvider.cpp \
        Linux_SambaUserDefaultImplementation.cpp \
        Linux_SambaUserExternal.cpp \
        Linux_SambaUserFactory.cpp \
        Linux_SambaUserInstance.cpp \
        Linux_SambaUserInstanceName.cpp \
        Linux_SambaUserManualInstance.cpp \
        Linux_SambaUserRepositoryExternal.cpp \
        Linux_SambaUserRepositoryInstance.cpp \
        Linux_SambaUserResourceAccess.cpp

noinst_HEADERS+= \
        CmpiLinux_SambaUserProvider.h \
        Linux_SambaUserDefaultImplementation.h \
        Linux_SambaUserExternal.h \
        Linux_SambaUserFactory.h \
        Linux_SambaUserInstance.h \
        Linux_SambaUserInstanceName.h \
        Linux_SambaUserInterface.h \
        Linux_SambaUserManualInstance.h \
        Linux_SambaUserRepositoryExternal.h \
        Linux_SambaUserRepositoryInstance.h \
        Linux_SambaUserResourceAccess.h

libcmpiLinux_SambaUser_la_LIBADD = \
        $(top_builddir)/resource-access/libRaToolsSmb.la \
        $(top_builddir)/provider/libIBM_SmbProviderTooling.la \
        $(top_builddir)/provider/libLinux_SmbGeneralProviderBasic.la

libcmpiLinux_SambaUser_la_LDFLAGS = -avoid-version
