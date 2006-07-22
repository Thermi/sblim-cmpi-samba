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
               libcmpiLinux_SambaShareProtocolForShare.la 


################################################################################
# Linux_SambaShareProtocolForShare
libcmpiLinux_SambaShareProtocolForShare_la_SOURCES = \
        CmpiLinux_SambaShareProtocolForShareProvider.cpp \
        Linux_SambaShareProtocolForShareDefaultImplementation.cpp \
        Linux_SambaShareProtocolForShareExternal.cpp \
        Linux_SambaShareProtocolForShareFactory.cpp \
        Linux_SambaShareProtocolForShareInstance.cpp \
        Linux_SambaShareProtocolForShareInstanceName.cpp \
        Linux_SambaShareProtocolForShareManualInstance.cpp \
        Linux_SambaShareProtocolForShareRepositoryExternal.cpp \
        Linux_SambaShareProtocolForShareRepositoryInstance.cpp \
        Linux_SambaShareProtocolForShareResourceAccess.cpp

noinst_HEADERS+= \
        CmpiLinux_SambaShareProtocolForShareProvider.h \
        Linux_SambaShareProtocolForShareDefaultImplementation.h \
        Linux_SambaShareProtocolForShareExternal.h \
        Linux_SambaShareProtocolForShareFactory.h \
        Linux_SambaShareProtocolForShareInstance.h \
        Linux_SambaShareProtocolForShareInstanceName.h \
        Linux_SambaShareProtocolForShareInterface.h \
        Linux_SambaShareProtocolForShareManualInstance.h \
        Linux_SambaShareProtocolForShareRepositoryExternal.h \
        Linux_SambaShareProtocolForShareRepositoryInstance.h \
        Linux_SambaShareProtocolForShareResourceAccess.h

#libcmpiLinux_SambaShareProtocolForShare_la_DEPENDENCIES = \
#        libcmpiLinux_SambaGlobalOptions.la \
#        libcmpiLinux_SambaShareSecurityOptions.la \
#        libcmpiCIM_ConcreteJob.la

libcmpiLinux_SambaShareProtocolForShare_la_LIBADD = \
        -lRaToolsSmb \
        -lIBM_SmbProviderTooling \
        -lLinux_SmbGeneralProviderBasic \
        -lcmpiLinux_SambaShareOptions \
        -lcmpiLinux_SambaShareProtocolOptions \
        -lcmpiCIM_ConcreteJob

libcmpiLinux_SambaShareProtocolForShare_la_LDFLAGS = -avoid-version



