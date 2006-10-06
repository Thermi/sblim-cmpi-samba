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

#libcmpiLinux_SambaForceGroupForPrinter_la_DEPENDENCIES = \
#        libcmpiLinux_SambaServiceConfiguration.la 
#        libcmpiLinux_SambaService.la \
#        libcmpiCIM_ConcreteJob.la

libcmpiLinux_SambaForceGroupForPrinter_la_LIBADD = \
        -lRaToolsSmb \
        -lIBM_SmbProviderTooling \
        -lLinux_SmbGeneralProviderBasic \
        -lcmpiLinux_SambaPrinterOptions \
        -lcmpiLinux_SambaGroup \
        -lcmpiCIM_ConcreteJob

libcmpiLinux_SambaForceGroupForPrinter_la_LDFLAGS = -avoid-version
