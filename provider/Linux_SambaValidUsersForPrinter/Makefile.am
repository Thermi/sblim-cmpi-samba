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
              -I${srcdir}/../Linux_SambaPrinterOptions \
              -I${srcdir}/../Linux_SambaUser

################################################################################
provider_LTLIBRARIES = \
               libcmpiLinux_SambaValidUsersForPrinter.la 

################################################################################
# Linux_SambaValidUsersForPrinter
libcmpiLinux_SambaValidUsersForPrinter_la_SOURCES = \
        CmpiLinux_SambaValidUsersForPrinterProvider.cpp \
        Linux_SambaValidUsersForPrinterDefaultImplementation.cpp \
        Linux_SambaValidUsersForPrinterExternal.cpp \
        Linux_SambaValidUsersForPrinterFactory.cpp \
        Linux_SambaValidUsersForPrinterInstance.cpp \
        Linux_SambaValidUsersForPrinterInstanceName.cpp \
        Linux_SambaValidUsersForPrinterManualInstance.cpp \
        Linux_SambaValidUsersForPrinterRepositoryExternal.cpp \
        Linux_SambaValidUsersForPrinterRepositoryInstance.cpp \
        Linux_SambaValidUsersForPrinterResourceAccess.cpp

noinst_HEADERS+= \
        CmpiLinux_SambaValidUsersForPrinterProvider.h \
        Linux_SambaValidUsersForPrinterDefaultImplementation.h \
        Linux_SambaValidUsersForPrinterExternal.h \
        Linux_SambaValidUsersForPrinterFactory.h \
        Linux_SambaValidUsersForPrinterInstance.h \
        Linux_SambaValidUsersForPrinterInstanceName.h \
        Linux_SambaValidUsersForPrinterInterface.h \
        Linux_SambaValidUsersForPrinterManualInstance.h \
        Linux_SambaValidUsersForPrinterRepositoryExternal.h \
        Linux_SambaValidUsersForPrinterRepositoryInstance.h \
        Linux_SambaValidUsersForPrinterResourceAccess.h

libcmpiLinux_SambaValidUsersForPrinter_la_LIBADD = \
        $(top_builddir)/resource-access/libRaToolsSmb.la \
        $(top_builddir)/provider/libIBM_SmbProviderTooling.la \
        $(top_builddir)/provider/libLinux_SmbGeneralProviderBasic.la \
        $(top_builddir)/provider/Linux_SambaPrinterOptions/libcmpiLinux_SambaPrinterOptions.la \
        $(top_builddir)/provider/Linux_SambaUser/libcmpiLinux_SambaUser.la

libcmpiLinux_SambaValidUsersForPrinter_la_LDFLAGS = -avoid-version
