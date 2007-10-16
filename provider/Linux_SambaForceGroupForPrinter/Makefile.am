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
              -I${srcdir}/../Linux_SambaGroup

################################################################################
provider_LTLIBRARIES = \
               libcmpiLinux_SambaForceGroupForPrinter.la 

################################################################################
# Linux_SambaForceGroupForPrinter
libcmpiLinux_SambaForceGroupForPrinter_la_SOURCES = \
        CmpiLinux_SambaForceGroupForPrinterProvider.cpp \
        Linux_SambaForceGroupForPrinterDefaultImplementation.cpp \
        Linux_SambaForceGroupForPrinterExternal.cpp \
        Linux_SambaForceGroupForPrinterFactory.cpp \
        Linux_SambaForceGroupForPrinterInstance.cpp \
        Linux_SambaForceGroupForPrinterInstanceName.cpp \
        Linux_SambaForceGroupForPrinterManualInstance.cpp \
        Linux_SambaForceGroupForPrinterRepositoryExternal.cpp \
        Linux_SambaForceGroupForPrinterRepositoryInstance.cpp \
        Linux_SambaForceGroupForPrinterResourceAccess.cpp

noinst_HEADERS+= \
        CmpiLinux_SambaForceGroupForPrinterProvider.h \
        Linux_SambaForceGroupForPrinterDefaultImplementation.h \
        Linux_SambaForceGroupForPrinterExternal.h \
        Linux_SambaForceGroupForPrinterFactory.h \
        Linux_SambaForceGroupForPrinterInstance.h \
        Linux_SambaForceGroupForPrinterInstanceName.h \
        Linux_SambaForceGroupForPrinterInterface.h \
        Linux_SambaForceGroupForPrinterManualInstance.h \
        Linux_SambaForceGroupForPrinterRepositoryExternal.h \
        Linux_SambaForceGroupForPrinterRepositoryInstance.h \
        Linux_SambaForceGroupForPrinterResourceAccess.h

libcmpiLinux_SambaForceGroupForPrinter_la_LIBADD = \
        $(top_builddir)/resource-access/libRaToolsSmb.la \
        $(top_builddir)/provider/libIBM_SmbProviderTooling.la \
        $(top_builddir)/provider/libLinux_SmbGeneralProviderBasic.la \
        $(top_builddir)/provider/Linux_SambaGroup/libcmpiLinux_SambaGroup.la \
        $(top_builddir)/provider/Linux_SambaPrinterOptions/libcmpiLinux_SambaPrinterOptions.la

libcmpiLinux_SambaForceGroupForPrinter_la_LDFLAGS = -avoid-version
