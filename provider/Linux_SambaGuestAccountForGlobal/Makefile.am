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
               libcmpiLinux_SambaGuestAccountForGlobal.la 

################################################################################
# Linux_SambaGuestAccountForGlobal
libcmpiLinux_SambaGuestAccountForGlobal_la_SOURCES = \
        CmpiLinux_SambaGuestAccountForGlobalProvider.cpp \
        Linux_SambaGuestAccountForGlobalDefaultImplementation.cpp \
        Linux_SambaGuestAccountForGlobalExternal.cpp \
        Linux_SambaGuestAccountForGlobalFactory.cpp \
        Linux_SambaGuestAccountForGlobalInstance.cpp \
        Linux_SambaGuestAccountForGlobalInstanceName.cpp \
        Linux_SambaGuestAccountForGlobalManualInstance.cpp \
        Linux_SambaGuestAccountForGlobalRepositoryExternal.cpp \
        Linux_SambaGuestAccountForGlobalRepositoryInstance.cpp \
        Linux_SambaGuestAccountForGlobalResourceAccess.cpp

noinst_HEADERS+= \
        CmpiLinux_SambaGuestAccountForGlobalProvider.h \
        Linux_SambaGuestAccountForGlobalDefaultImplementation.h \
        Linux_SambaGuestAccountForGlobalExternal.h \
        Linux_SambaGuestAccountForGlobalFactory.h \
        Linux_SambaGuestAccountForGlobalInstance.h \
        Linux_SambaGuestAccountForGlobalInstanceName.h \
        Linux_SambaGuestAccountForGlobalInterface.h \
        Linux_SambaGuestAccountForGlobalManualInstance.h \
        Linux_SambaGuestAccountForGlobalRepositoryExternal.h \
        Linux_SambaGuestAccountForGlobalRepositoryInstance.h \
        Linux_SambaGuestAccountForGlobalResourceAccess.h

libcmpiLinux_SambaGuestAccountForGlobal_la_LIBADD = \
        $(top_builddir)/resource-access/libRaToolsSmb.la \
        $(top_builddir)/provider/libIBM_SmbProviderTooling.la \
        $(top_builddir)/provider/libLinux_SmbGeneralProviderBasic.la \
        $(top_builddir)/provider/Linux_SambaUser/libcmpiLinux_SambaUser.la \
        $(top_builddir)/provider/Linux_SambaGlobalOptions/libcmpiLinux_SambaGlobalOptions.la

libcmpiLinux_SambaGuestAccountForGlobal_la_LDFLAGS = -avoid-version
