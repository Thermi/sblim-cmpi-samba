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
               libcmpiLinux_SambaForceUserForShare.la 


################################################################################
# Linux_SambaForceUserForShare
libcmpiLinux_SambaForceUserForShare_la_SOURCES = \
        CmpiLinux_SambaForceUserForShareProvider.cpp \
        Linux_SambaForceUserForShareDefaultImplementation.cpp \
        Linux_SambaForceUserForShareExternal.cpp \
        Linux_SambaForceUserForShareFactory.cpp \
        Linux_SambaForceUserForShareInstance.cpp \
        Linux_SambaForceUserForShareInstanceName.cpp \
        Linux_SambaForceUserForShareManualInstance.cpp \
        Linux_SambaForceUserForShareRepositoryExternal.cpp \
        Linux_SambaForceUserForShareRepositoryInstance.cpp \
        Linux_SambaForceUserForShareResourceAccess.cpp

noinst_HEADERS+= \
        CmpiLinux_SambaForceUserForShareProvider.h \
        Linux_SambaForceUserForShareDefaultImplementation.h \
        Linux_SambaForceUserForShareExternal.h \
        Linux_SambaForceUserForShareFactory.h \
        Linux_SambaForceUserForShareInstance.h \
        Linux_SambaForceUserForShareInstanceName.h \
        Linux_SambaForceUserForShareInterface.h \
        Linux_SambaForceUserForShareManualInstance.h \
        Linux_SambaForceUserForShareRepositoryExternal.h \
        Linux_SambaForceUserForShareRepositoryInstance.h \
        Linux_SambaForceUserForShareResourceAccess.h

#libcmpiLinux_SambaForceUserForShare_la_DEPENDENCIES = \
#        libcmpiLinux_SambaServiceConfiguration.la 
#        libcmpiLinux_SambaService.la \
#        libcmpiCIM_ConcreteJob.la

libcmpiLinux_SambaForceUserForShare_la_LIBADD = \
        -lRaToolsSmb \
        -lIBM_SmbProviderTooling \
        -lLinux_SmbGeneralProviderBasic \
        -lcmpiLinux_SambaShareOptions \
        -lcmpiLinux_SambaUser \
        -lcmpiCIM_ConcreteJob

libcmpiLinux_SambaForceUserForShare_la_LDFLAGS = -avoid-version

