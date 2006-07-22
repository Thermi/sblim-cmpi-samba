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
               libcmpiLinux_SambaWriteListForGlobal.la 


################################################################################
# Linux_SambaWriteListForGlobal
libcmpiLinux_SambaWriteListForGlobal_la_SOURCES = \
        CmpiLinux_SambaWriteListForGlobalProvider.cpp \
        Linux_SambaWriteListForGlobalDefaultImplementation.cpp \
        Linux_SambaWriteListForGlobalExternal.cpp \
        Linux_SambaWriteListForGlobalFactory.cpp \
        Linux_SambaWriteListForGlobalInstance.cpp \
        Linux_SambaWriteListForGlobalInstanceName.cpp \
        Linux_SambaWriteListForGlobalManualInstance.cpp \
        Linux_SambaWriteListForGlobalRepositoryExternal.cpp \
        Linux_SambaWriteListForGlobalRepositoryInstance.cpp \
        Linux_SambaWriteListForGlobalResourceAccess.cpp

noinst_HEADERS+= \
        CmpiLinux_SambaWriteListForGlobalProvider.h \
        Linux_SambaWriteListForGlobalDefaultImplementation.h \
        Linux_SambaWriteListForGlobalExternal.h \
        Linux_SambaWriteListForGlobalFactory.h \
        Linux_SambaWriteListForGlobalInstance.h \
        Linux_SambaWriteListForGlobalInstanceName.h \
        Linux_SambaWriteListForGlobalInterface.h \
        Linux_SambaWriteListForGlobalManualInstance.h \
        Linux_SambaWriteListForGlobalRepositoryExternal.h \
        Linux_SambaWriteListForGlobalRepositoryInstance.h \
        Linux_SambaWriteListForGlobalResourceAccess.h

#libcmpiLinux_SambaWriteListForGlobal_la_DEPENDENCIES = \
#        libcmpiLinux_SambaUser.la \
#        libcmpiLinux_SambaGlobalOptions.la \
#        libcmpiCIM_ConcreteJob.la

libcmpiLinux_SambaWriteListForGlobal_la_LIBADD = \
        -lRaToolsSmb \
        -lIBM_SmbProviderTooling \
        -lLinux_SmbGeneralProviderBasic \
        -lcmpiLinux_SambaUser \
        -lcmpiLinux_SambaGlobalOptions \
        -lcmpiCIM_ConcreteJob

libcmpiLinux_SambaWriteListForGlobal_la_LDFLAGS = -avoid-version



