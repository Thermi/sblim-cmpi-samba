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
               libcmpiLinux_SambaForceUserForPrinter.la 

################################################################################
# Linux_SambaForceUserForPrinter
libcmpiLinux_SambaForceUserForPrinter_la_SOURCES = \
        CmpiLinux_SambaForceUserForPrinterProvider.cpp \
        Linux_SambaForceUserForPrinterDefaultImplementation.cpp \
        Linux_SambaForceUserForPrinterExternal.cpp \
        Linux_SambaForceUserForPrinterFactory.cpp \
        Linux_SambaForceUserForPrinterInstance.cpp \
        Linux_SambaForceUserForPrinterInstanceName.cpp \
        Linux_SambaForceUserForPrinterManualInstance.cpp \
        Linux_SambaForceUserForPrinterRepositoryExternal.cpp \
        Linux_SambaForceUserForPrinterRepositoryInstance.cpp \
        Linux_SambaForceUserForPrinterResourceAccess.cpp

noinst_HEADERS+= \
        CmpiLinux_SambaForceUserForPrinterProvider.h \
        Linux_SambaForceUserForPrinterDefaultImplementation.h \
        Linux_SambaForceUserForPrinterExternal.h \
        Linux_SambaForceUserForPrinterFactory.h \
        Linux_SambaForceUserForPrinterInstance.h \
        Linux_SambaForceUserForPrinterInstanceName.h \
        Linux_SambaForceUserForPrinterInterface.h \
        Linux_SambaForceUserForPrinterManualInstance.h \
        Linux_SambaForceUserForPrinterRepositoryExternal.h \
        Linux_SambaForceUserForPrinterRepositoryInstance.h \
        Linux_SambaForceUserForPrinterResourceAccess.h

libcmpiLinux_SambaForceUserForPrinter_la_LIBADD = \
        $(top_builddir)/resource-access/libRaToolsSmb.la \
        $(top_builddir)/provider/libIBM_SmbProviderTooling.la \
        $(top_builddir)/provider/libLinux_SmbGeneralProviderBasic.la \
        $(top_builddir)/provider/Linux_SambaUser/libcmpiLinux_SambaUser.la \
        $(top_builddir)/provider/Linux_SambaPrinterOptions/libcmpiLinux_SambaPrinterOptions.la

libcmpiLinux_SambaForceUserForPrinter_la_LDFLAGS = -avoid-version
