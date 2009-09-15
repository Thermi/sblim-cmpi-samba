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
              -I${srcdir}/../Linux_SambaCommonSecurityOptions \
              -I${srcdir}/../Linux_SambaPrinterOptions

################################################################################
provider_LTLIBRARIES = \
               libcmpiLinux_SambaCommonSecurityForPrinter.la 

################################################################################
# Linux_SambaCommonSecurityForPrinter
libcmpiLinux_SambaCommonSecurityForPrinter_la_SOURCES = \
        CmpiLinux_SambaCommonSecurityForPrinterProvider.cpp \
        Linux_SambaCommonSecurityForPrinterDefaultImplementation.cpp \
        Linux_SambaCommonSecurityForPrinterExternal.cpp \
        Linux_SambaCommonSecurityForPrinterFactory.cpp \
        Linux_SambaCommonSecurityForPrinterInstance.cpp \
        Linux_SambaCommonSecurityForPrinterInstanceName.cpp \
        Linux_SambaCommonSecurityForPrinterManualInstance.cpp \
        Linux_SambaCommonSecurityForPrinterRepositoryExternal.cpp \
        Linux_SambaCommonSecurityForPrinterRepositoryInstance.cpp \
        Linux_SambaCommonSecurityForPrinterResourceAccess.cpp

noinst_HEADERS+= \
        CmpiLinux_SambaCommonSecurityForPrinterProvider.h \
        Linux_SambaCommonSecurityForPrinterDefaultImplementation.h \
        Linux_SambaCommonSecurityForPrinterExternal.h \
        Linux_SambaCommonSecurityForPrinterFactory.h \
        Linux_SambaCommonSecurityForPrinterInstance.h \
        Linux_SambaCommonSecurityForPrinterInstanceName.h \
        Linux_SambaCommonSecurityForPrinterInterface.h \
        Linux_SambaCommonSecurityForPrinterManualInstance.h \
        Linux_SambaCommonSecurityForPrinterRepositoryExternal.h \
        Linux_SambaCommonSecurityForPrinterRepositoryInstance.h \
        Linux_SambaCommonSecurityForPrinterResourceAccess.h

libcmpiLinux_SambaCommonSecurityForPrinter_la_LIBADD = \
        $(top_builddir)/resource-access/libRaToolsSmb.la \
        $(top_builddir)/provider/libIBM_SmbProviderTooling.la \
        $(top_builddir)/provider/libLinux_SmbGeneralProviderBasic.la \
        $(top_builddir)/provider/Linux_SambaCommonSecurityOptions/libcmpiLinux_SambaCommonSecurityOptions.la \
        $(top_builddir)/provider/Linux_SambaPrinterOptions/libcmpiLinux_SambaPrinterOptions.la

libcmpiLinux_SambaCommonSecurityForPrinter_la_LDFLAGS = -avoid-version
