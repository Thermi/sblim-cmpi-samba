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
              -I${srcdir}/../CIM_ConcreteJob \
              -I${srcdir}/../Linux_SambaCommonSecurityOptions \
              -I${srcdir}/../Linux_SambaGlobalOptions \
              -I${srcdir}/../Linux_SambaGlobalBrowseOptions \
              -I${srcdir}/../Linux_SambaGlobalFileNameHandlingOptions \
              -I${srcdir}/../Linux_SambaGlobalPrintingOptions \
              -I${srcdir}/../Linux_SambaGlobalProtocolOptions \
              -I${srcdir}/../Linux_SambaGlobalSecurityOptions \
              -I${srcdir}/../Linux_SambaPrinterOptions \
              -I${srcdir}/../Linux_SambaPrinterPrintingOptions \
              -I${srcdir}/../Linux_SambaPrinterSecurityOptions \
              -I${srcdir}/../Linux_SambaShareOptions \
              -I${srcdir}/../Linux_SambaShareFileNameHandlingOptions \
              -I${srcdir}/../Linux_SambaShareBrowseOptions \
              -I${srcdir}/../Linux_SambaPrinterBrowseOptions \
              -I${srcdir}/../Linux_SambaShareProtocolOptions \
              -I${srcdir}/../Linux_SambaShareSecurityOptions \
              -I${srcdir}/../Linux_SambaScriptingOptions \
              -I${srcdir}/../Linux_SambaService \
              -I${srcdir}/../Linux_SambaServiceConfiguration \
              -I${srcdir}/../Linux_SambaGroup \
              -I${srcdir}/../Linux_SambaHost \
              -I${srcdir}/../Linux_SambaUser

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
               libcmpiLinux_SambaGlobalFileNameHandlingForGlobal.la 


################################################################################
# Linux_SambaGlobalFileNameHandlingForGlobal
libcmpiLinux_SambaGlobalFileNameHandlingForGlobal_la_SOURCES = \
        CmpiLinux_SambaGlobalFileNameHandlingForGlobalProvider.cpp \
        Linux_SambaGlobalFileNameHandlingForGlobalDefaultImplementation.cpp \
        Linux_SambaGlobalFileNameHandlingForGlobalExternal.cpp \
        Linux_SambaGlobalFileNameHandlingForGlobalFactory.cpp \
        Linux_SambaGlobalFileNameHandlingForGlobalInstance.cpp \
        Linux_SambaGlobalFileNameHandlingForGlobalInstanceName.cpp \
        Linux_SambaGlobalFileNameHandlingForGlobalManualInstance.cpp \
        Linux_SambaGlobalFileNameHandlingForGlobalRepositoryExternal.cpp \
        Linux_SambaGlobalFileNameHandlingForGlobalRepositoryInstance.cpp \
        Linux_SambaGlobalFileNameHandlingForGlobalResourceAccess.cpp

noinst_HEADERS+= \
        CmpiLinux_SambaGlobalFileNameHandlingForGlobalProvider.h \
        Linux_SambaGlobalFileNameHandlingForGlobalDefaultImplementation.h \
        Linux_SambaGlobalFileNameHandlingForGlobalExternal.h \
        Linux_SambaGlobalFileNameHandlingForGlobalFactory.h \
        Linux_SambaGlobalFileNameHandlingForGlobalInstance.h \
        Linux_SambaGlobalFileNameHandlingForGlobalInstanceName.h \
        Linux_SambaGlobalFileNameHandlingForGlobalInterface.h \
        Linux_SambaGlobalFileNameHandlingForGlobalManualInstance.h \
        Linux_SambaGlobalFileNameHandlingForGlobalRepositoryExternal.h \
        Linux_SambaGlobalFileNameHandlingForGlobalRepositoryInstance.h \
        Linux_SambaGlobalFileNameHandlingForGlobalResourceAccess.h

#libcmpiLinux_SambaGlobalFileNameHandlingForGlobal_la_DEPENDENCIES = \
#        libcmpiLinux_SambaServiceConfiguration.la 
#        libcmpiLinux_SambaService.la \
#        libcmpiCIM_ConcreteJob.la

libcmpiLinux_SambaGlobalFileNameHandlingForGlobal_la_LIBADD = \
        -lRaToolsSmb \
        -lIBM_SmbProviderTooling \
        -lLinux_SmbGeneralProviderBasic \
        -lcmpiLinux_SambaGlobalOptions \
        -lcmpiLinux_SambaGlobalFileNameHandlingOptions \
        -lcmpiCIM_ConcreteJob

libcmpiLinux_SambaGlobalFileNameHandlingForGlobal_la_LDFLAGS = -avoid-version

