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
              -I./../include \
              -I./../../resource-access \
              -I./../CIM_ConcreteJob \
              -I./../Linux_SambaCommonSecurityOptions \
              -I./../Linux_SambaGlobalOptions \
              -I./../Linux_SambaGlobalBrowseOptions \
              -I./../Linux_SambaGlobalFileNameHandlingOptions \
              -I./../Linux_SambaGlobalPrintingOptions \
              -I./../Linux_SambaGlobalProtocolOptions \
              -I./../Linux_SambaGlobalSecurityOptions \
              -I./../Linux_SambaPrinterOptions \
              -I./../Linux_SambaPrinterPrintingOptions \
              -I./../Linux_SambaPrinterSecurityOptions \
              -I./../Linux_SambaShareOptions \
              -I./../Linux_SambaShareFileNameHandlingOptions \
              -I./../Linux_SambaShareBrowseOptions \
              -I./../Linux_SambaPrinterBrowseOptions \
              -I./../Linux_SambaShareProtocolOptions \
              -I./../Linux_SambaShareSecurityOptions \
              -I./../Linux_SambaScriptingOptions \
              -I./../Linux_SambaService \
              -I./../Linux_SambaServiceConfiguration \
              -I./../Linux_SambaGroup \
              -I./../Linux_SambaHost \
              -I./../Linux_SambaUser

AM_LDFLAGS = -L./../ \
             -L./../../resource-access \
             -L./../CIM_ConcreteJob \
             -L./../Linux_SambaCommonSecurityOptions \
             -L./../Linux_SambaGlobalOptions \
             -L./../Linux_SambaGlobalBrowseOptions \
             -L./../Linux_SambaGlobalFileNameHandlingOptions \
             -L./../Linux_SambaGlobalPrintingOptions \
             -L./../Linux_SambaGlobalProtocolOptions \
             -L./../Linux_SambaGlobalSecurityOptions \
             -L./../Linux_SambaPrinterOptions \
             -L./../Linux_SambaPrinterPrintingOptions \
             -L./../Linux_SambaPrinterSecurityOptions \
             -L./../Linux_SambaShareOptions \
             -L./../Linux_SambaShareFileNameHandlingOptions \
             -L./../Linux_SambaShareBrowseOptions \
             -L./../Linux_SambaPrinterBrowseOptions \
             -L./../Linux_SambaShareProtocolOptions \
             -L./../Linux_SambaShareSecurityOptions \
             -L./../Linux_SambaScriptingOptions \
             -L./../Linux_SambaService \
             -L./../Linux_SambaServiceConfiguration \
             -L./../Linux_SambaGroup \
             -L./../Linux_SambaHost \
             -L./../Linux_SambaUser


################################################################################
provider_LTLIBRARIES = \
               libcmpiLinux_SambaPrinterPrintingOptions.la 


################################################################################
# Linux_SambaPrinterPrintingOptions
libcmpiLinux_SambaPrinterPrintingOptions_la_SOURCES = \
        CmpiLinux_SambaPrinterPrintingOptionsProvider.cpp \
        Linux_SambaPrinterPrintingOptionsDefaultImplementation.cpp \
        Linux_SambaPrinterPrintingOptionsExternal.cpp \
        Linux_SambaPrinterPrintingOptionsFactory.cpp \
        Linux_SambaPrinterPrintingOptionsInstance.cpp \
        Linux_SambaPrinterPrintingOptionsInstanceName.cpp \
        Linux_SambaPrinterPrintingOptionsManualInstance.cpp \
        Linux_SambaPrinterPrintingOptionsRepositoryExternal.cpp \
        Linux_SambaPrinterPrintingOptionsRepositoryInstance.cpp \
        Linux_SambaPrinterPrintingOptionsResourceAccess.cpp

noinst_HEADERS+= \
        CmpiLinux_SambaPrinterPrintingOptionsProvider.h \
        Linux_SambaPrinterPrintingOptionsDefaultImplementation.h \
        Linux_SambaPrinterPrintingOptionsExternal.h \
        Linux_SambaPrinterPrintingOptionsFactory.h \
        Linux_SambaPrinterPrintingOptionsInstance.h \
        Linux_SambaPrinterPrintingOptionsInstanceName.h \
        Linux_SambaPrinterPrintingOptionsInterface.h \
        Linux_SambaPrinterPrintingOptionsManualInstance.h \
        Linux_SambaPrinterPrintingOptionsRepositoryExternal.h \
        Linux_SambaPrinterPrintingOptionsRepositoryInstance.h \
        Linux_SambaPrinterPrintingOptionsResourceAccess.h

#libcmpiLinux_SambaPrinterPrintingOptions_la_DEPENDENCIES = \
#        libcmpiLinux_SambaPrinterPrintingOptions.la \
#        libcmpiLinux_SambaGlobalOptions.la \
#        libcmpiCIM_ConcreteJob.la

libcmpiLinux_SambaPrinterPrintingOptions_la_LIBADD = \
        -lRaToolsSmb \
        -lIBM_SmbProviderTooling \
        -lLinux_SmbGeneralProviderBasic \
        -lcmpiCIM_ConcreteJob

libcmpiLinux_SambaPrinterPrintingOptions_la_LDFLAGS = -avoid-version




