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
              -I${srcdir}/../Linux_SambaPrinterOptions \
              -I${srcdir}/../Linux_SambaUser

################################################################################
provider_LTLIBRARIES = \
               libcmpiLinux_SambaReadListForPrinter.la 

################################################################################
# Linux_SambaReadListForPrinter
libcmpiLinux_SambaReadListForPrinter_la_SOURCES = \
        CmpiLinux_SambaReadListForPrinterProvider.cpp \
        Linux_SambaReadListForPrinterDefaultImplementation.cpp \
        Linux_SambaReadListForPrinterExternal.cpp \
        Linux_SambaReadListForPrinterFactory.cpp \
        Linux_SambaReadListForPrinterInstance.cpp \
        Linux_SambaReadListForPrinterInstanceName.cpp \
        Linux_SambaReadListForPrinterManualInstance.cpp \
        Linux_SambaReadListForPrinterRepositoryExternal.cpp \
        Linux_SambaReadListForPrinterRepositoryInstance.cpp \
        Linux_SambaReadListForPrinterResourceAccess.cpp

noinst_HEADERS+= \
        CmpiLinux_SambaReadListForPrinterProvider.h \
        Linux_SambaReadListForPrinterDefaultImplementation.h \
        Linux_SambaReadListForPrinterExternal.h \
        Linux_SambaReadListForPrinterFactory.h \
        Linux_SambaReadListForPrinterInstance.h \
        Linux_SambaReadListForPrinterInstanceName.h \
        Linux_SambaReadListForPrinterInterface.h \
        Linux_SambaReadListForPrinterManualInstance.h \
        Linux_SambaReadListForPrinterRepositoryExternal.h \
        Linux_SambaReadListForPrinterRepositoryInstance.h \
        Linux_SambaReadListForPrinterResourceAccess.h

libcmpiLinux_SambaReadListForPrinter_la_LIBADD = \
        $(top_builddir)/resource-access/libRaToolsSmb.la \
        $(top_builddir)/provider/libIBM_SmbProviderTooling.la \
        $(top_builddir)/provider/libLinux_SmbGeneralProviderBasic.la \
        $(top_builddir)/provider/Linux_SambaPrinterOptions/libcmpiLinux_SambaPrinterOptions.la \
        $(top_builddir)/provider/Linux_SambaUser/libcmpiLinux_SambaUser.la

libcmpiLinux_SambaReadListForPrinter_la_LDFLAGS = -avoid-version
