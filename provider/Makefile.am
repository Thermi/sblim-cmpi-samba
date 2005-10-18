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

# Start from an empty list for files to clean up
CLEANFILES =

# Start from an empty extra distribution file list
EXTRA_DIST =

# Pre Build requirements need to be compiled prior anything else
BUILT_SOURCES =

################################################################################
#
lib_LTLIBRARIES += \
		libIBM_SmbProviderTooling.la \
		libLinux_SmbGeneralProviderBasic.la 


################################################################################
# General required provider parts
libIBM_SmbProviderTooling_la_SOURCES = \
		$(srcdir)/support/ArrayConverter.cpp \
		$(srcdir)/support/CmpiErrorFormater.cpp

noinst_HEADERS += \
		$(srcdir)/include/ArrayConverter.h \
		$(srcdir)/include/CmpiErrorFormater.h 

libIBM_SmbProviderTooling_la_LIBADD = \
        -L../resource-access\
        -lRaToolsSmb

libIBM_SmbProviderTooling_la_CPPFLAGS = \
        -D_COMPILE_UNIX -DCMPI_STANDALONE \
		-I$(srcdir)/include 



################################################################################
# General Dns required parts
libLinux_SmbGeneralProviderBasic_la_SOURCES = \
		$(srcdir)/support/smt_smb_array.cpp 

sbliminc_HEADERS += \
		$(srcdir)/include/smt_smb_array.h \
		$(srcdir)/include/smt_smb_defaultvalues.h 

libLinux_SmbGeneralProviderBasic_la_LIBADD   = \
        -L../resource-access\
        -lRaToolsSmb
        
libLinux_SmbGeneralProviderBasic_la_CPPFLAGS = \
        -D_COMPILE_UNIX -DCMPI_STANDALONE \
		-I$(srcdir)/include 



################################################################################
# *The* library build config...
provider_LTLIBRARIES = \
		libcmpiCIM_ConcreteJob.la \
		libcmpiLinux_SambaGlobalOptions.la \
		libcmpiLinux_SambaShareOptions.la \
		libcmpiLinux_SambaCommonSecurityOptions.la \
		libcmpiLinux_SambaGlobalBrowseOptions.la \
		libcmpiLinux_SambaGlobalFileNameHandlingOptions.la \
		libcmpiLinux_SambaGlobalPrintingOptions.la \
		libcmpiLinux_SambaGlobalProtocolOptions.la \
		libcmpiLinux_SambaGlobalSecurityOptions.la \
		libcmpiLinux_SambaPrinterOptions.la \
		libcmpiLinux_SambaPrinterPrintingOptions.la \
		libcmpiLinux_SambaPrinterSecurityOptions.la \
		libcmpiLinux_SambaScriptingOptions.la \
		libcmpiLinux_SambaShareFileNameHandlingOptions.la \
		libcmpiLinux_SambaSharePrinterBrowseOptions.la \
		libcmpiLinux_SambaShareProtocolOptions.la \
		libcmpiLinux_SambaShareSecurityOptions.la \
		libcmpiLinux_SambaGroup.la \
		libcmpiLinux_SambaService.la \
		libcmpiLinux_SambaServiceConfiguration.la \
		libcmpiLinux_SambaUser.la \
		libcmpiLinux_SambaAdminUsersForGlobal.la \
		libcmpiLinux_SambaAdminUsersForShare.la \
		libcmpiLinux_SambaCommonSecurityForGlobal.la \
		libcmpiLinux_SambaCommonSecurityForPrinter.la \
		libcmpiLinux_SambaCommonSecurityForShare.la \
		libcmpiLinux_SambaForceGroupForGlobal.la \
		libcmpiLinux_SambaForceGroupForPrinter.la \
		libcmpiLinux_SambaForceGroupForShare.la \
		libcmpiLinux_SambaForceUserForGlobal.la \
		libcmpiLinux_SambaForceUserForPrinter.la \
		libcmpiLinux_SambaForceUserForShare.la \
		libcmpiLinux_SambaGlobalBrowseForGlobal.la \
		libcmpiLinux_SambaGlobalFileNameHandlingForGlobal.la \
		libcmpiLinux_SambaGlobalForService.la \
		libcmpiLinux_SambaGlobalPrintingForGlobal.la \
		libcmpiLinux_SambaGlobalProtocolForGlobal.la \
		libcmpiLinux_SambaGlobalSecurityForGlobal.la \
		libcmpiLinux_SambaGroupForUser.la \
		libcmpiLinux_SambaGuestAccountForGlobal.la \
		libcmpiLinux_SambaInvalidUsersForGlobal.la \
		libcmpiLinux_SambaInvalidUsersForPrinter.la \
		libcmpiLinux_SambaInvalidUsersForShare.la \
		libcmpiLinux_SambaPrinterAdminForGlobal.la \
		libcmpiLinux_SambaPrinterAdminForPrinter.la \
		libcmpiLinux_SambaPrinterForService.la \
		libcmpiLinux_SambaPrinterPrintingForPrinter.la \
		libcmpiLinux_SambaPrinterSecurityForGlobal.la \
		libcmpiLinux_SambaPrinterSecurityForPrinter.la \
		libcmpiLinux_SambaReadListForGlobal.la \
		libcmpiLinux_SambaReadListForPrinter.la \
		libcmpiLinux_SambaReadListForShare.la \
		libcmpiLinux_SambaScriptingForGlobal.la \
		libcmpiLinux_SambaServiceConfigurationForService.la \
		libcmpiLinux_SambaShareFileNameHandlingForShare.la \
		libcmpiLinux_SambaShareForService.la \
		libcmpiLinux_SambaSharePrinterBrowseForPrinter.la \
		libcmpiLinux_SambaSharePrinterBrowseForShare.la \
		libcmpiLinux_SambaShareProtocolForShare.la \
		libcmpiLinux_SambaShareSecurityForGlobal.la \
		libcmpiLinux_SambaShareSecurityForShare.la \
		libcmpiLinux_SambaUsersForService.la \
		libcmpiLinux_SambaValidUsersForGlobal.la \
		libcmpiLinux_SambaValidUsersForPrinter.la \
		libcmpiLinux_SambaValidUsersForShare.la \
		libcmpiLinux_SambaWriteListForGlobal.la \
		libcmpiLinux_SambaWriteListForPrinter.la \
		libcmpiLinux_SambaWriteListForShare.la



################################################################################
# CIM_ConcreteJob
libcmpiCIM_ConcreteJob_la_SOURCES = \
		$(srcdir)/CIM_ConcreteJob/CIM_ConcreteJobExternal.cpp \
		$(srcdir)/CIM_ConcreteJob/CIM_ConcreteJobInstance.cpp \
		$(srcdir)/CIM_ConcreteJob/CIM_ConcreteJobInstanceName.cpp 

noinst_HEADERS+= \
		$(srcdir)/CIM_ConcreteJob/CIM_ConcreteJobExternal.h \
		$(srcdir)/CIM_ConcreteJob/CIM_ConcreteJobInstance.h \
		$(srcdir)/CIM_ConcreteJob/CIM_ConcreteJobInstanceName.h 

libcmpiCIM_ConcreteJob_la_LIBADD = \
        -L../resource-access\
        -lRaToolsSmb \
        -lIBM_SmbProviderTooling \
        -lLinux_SmbGeneralProviderBasic
                                     
libcmpiCIM_ConcreteJob_la_CPPFLAGS = \
        -D_COMPILE_UNIX -DCMPI_STANDALONE \
		-I$(srcdir)/include

libcmpiCIM_ConcreteJob_la_LDFLAGS = -avoid-version



################################################################################
# Linux_SambaAdminUsersForGlobal
libcmpiLinux_SambaAdminUsersForGlobal_la_SOURCES = \
        $(srcdir)/Linux_SambaAdminUsersForGlobal/CmpiLinux_SambaAdminUsersForGlobalProvider.cpp \
        $(srcdir)/Linux_SambaAdminUsersForGlobal/Linux_SambaAdminUsersForGlobalDefaultImplementation.cpp \
        $(srcdir)/Linux_SambaAdminUsersForGlobal/Linux_SambaAdminUsersForGlobalExternal.cpp \
        $(srcdir)/Linux_SambaAdminUsersForGlobal/Linux_SambaAdminUsersForGlobalFactory.cpp \
        $(srcdir)/Linux_SambaAdminUsersForGlobal/Linux_SambaAdminUsersForGlobalInstance.cpp \
        $(srcdir)/Linux_SambaAdminUsersForGlobal/Linux_SambaAdminUsersForGlobalInstanceName.cpp \
        $(srcdir)/Linux_SambaAdminUsersForGlobal/Linux_SambaAdminUsersForGlobalManualInstance.cpp \
        $(srcdir)/Linux_SambaAdminUsersForGlobal/Linux_SambaAdminUsersForGlobalRepositoryExternal.cpp \
        $(srcdir)/Linux_SambaAdminUsersForGlobal/Linux_SambaAdminUsersForGlobalRepositoryInstance.cpp \
        $(srcdir)/Linux_SambaAdminUsersForGlobal/Linux_SambaAdminUsersForGlobalResourceAccess.cpp
        
noinst_HEADERS+= \
        $(srcdir)/Linux_SambaAdminUsersForGlobal/CmpiLinux_SambaAdminUsersForGlobalProvider.h \
        $(srcdir)/Linux_SambaAdminUsersForGlobal/Linux_SambaAdminUsersForGlobalDefaultImplementation.h \
        $(srcdir)/Linux_SambaAdminUsersForGlobal/Linux_SambaAdminUsersForGlobalExternal.h \
        $(srcdir)/Linux_SambaAdminUsersForGlobal/Linux_SambaAdminUsersForGlobalFactory.h \
        $(srcdir)/Linux_SambaAdminUsersForGlobal/Linux_SambaAdminUsersForGlobalInstance.h \
        $(srcdir)/Linux_SambaAdminUsersForGlobal/Linux_SambaAdminUsersForGlobalInstanceName.h \
        $(srcdir)/Linux_SambaAdminUsersForGlobal/Linux_SambaAdminUsersForGlobalInterface.h \
        $(srcdir)/Linux_SambaAdminUsersForGlobal/Linux_SambaAdminUsersForGlobalManualInstance.h \
        $(srcdir)/Linux_SambaAdminUsersForGlobal/Linux_SambaAdminUsersForGlobalRepositoryExternal.h \
        $(srcdir)/Linux_SambaAdminUsersForGlobal/Linux_SambaAdminUsersForGlobalRepositoryInstance.h \
        $(srcdir)/Linux_SambaAdminUsersForGlobal/Linux_SambaAdminUsersForGlobalResourceAccess.h

libcmpiLinux_SambaAdminUsersForGlobal_la_LIBADD = \
        -L../resource-access\
        -lRaToolsSmb \
        -lIBM_SmbProviderTooling \
        -lLinux_SmbGeneralProviderBasic \
        -lcmpiLinux_SambaGlobalOptions \
        -lcmpiLinux_SambaUser

libcmpiLinux_SambaAdminUsersForGlobal_la_CPPFLAGS = \
        -D_COMPILE_UNIX -DCMPI_STANDALONE \
		-I$(srcdir)/../resource-access \
		-I$(srcdir)/include \
		-I$(srcdir)/Linux_SambaGlobalOptions \
		-I$(srcdir)/Linux_SambaUser



################################################################################
# Linux_SambaAdminUsersForShare
libcmpiLinux_SambaAdminUsersForShare_la_SOURCES = \
        $(srcdir)/Linux_SambaAdminUsersForShare/CmpiLinux_SambaAdminUsersForShareProvider.cpp \
        $(srcdir)/Linux_SambaAdminUsersForShare/Linux_SambaAdminUsersForShareDefaultImplementation.cpp \
        $(srcdir)/Linux_SambaAdminUsersForShare/Linux_SambaAdminUsersForShareExternal.cpp \
        $(srcdir)/Linux_SambaAdminUsersForShare/Linux_SambaAdminUsersForShareFactory.cpp \
        $(srcdir)/Linux_SambaAdminUsersForShare/Linux_SambaAdminUsersForShareInstance.cpp \
        $(srcdir)/Linux_SambaAdminUsersForShare/Linux_SambaAdminUsersForShareInstanceName.cpp \
        $(srcdir)/Linux_SambaAdminUsersForShare/Linux_SambaAdminUsersForShareManualInstance.cpp \
        $(srcdir)/Linux_SambaAdminUsersForShare/Linux_SambaAdminUsersForShareRepositoryExternal.cpp \
        $(srcdir)/Linux_SambaAdminUsersForShare/Linux_SambaAdminUsersForShareRepositoryInstance.cpp \
        $(srcdir)/Linux_SambaAdminUsersForShare/Linux_SambaAdminUsersForShareResourceAccess.cpp

noinst_HEADERS+= \
        $(srcdir)/Linux_SambaAdminUsersForShare/CmpiLinux_SambaAdminUsersForShareProvider.h \
        $(srcdir)/Linux_SambaAdminUsersForShare/Linux_SambaAdminUsersForShareDefaultImplementation.h \
        $(srcdir)/Linux_SambaAdminUsersForShare/Linux_SambaAdminUsersForShareExternal.h \
        $(srcdir)/Linux_SambaAdminUsersForShare/Linux_SambaAdminUsersForShareFactory.h \
        $(srcdir)/Linux_SambaAdminUsersForShare/Linux_SambaAdminUsersForShareInstance.h \
        $(srcdir)/Linux_SambaAdminUsersForShare/Linux_SambaAdminUsersForShareInstanceName.h \
        $(srcdir)/Linux_SambaAdminUsersForShare/Linux_SambaAdminUsersForShareInterface.h \
        $(srcdir)/Linux_SambaAdminUsersForShare/Linux_SambaAdminUsersForShareManualInstance.h \
        $(srcdir)/Linux_SambaAdminUsersForShare/Linux_SambaAdminUsersForShareRepositoryExternal.h \
        $(srcdir)/Linux_SambaAdminUsersForShare/Linux_SambaAdminUsersForShareRepositoryInstance.h \
        $(srcdir)/Linux_SambaAdminUsersForShare/Linux_SambaAdminUsersForShareResourceAccess.h

libcmpiLinux_SambaAdminUsersForShare_la_LIBADD = \
        -L../resource-access\
        -lRaToolsSmb \
        -lIBM_SmbProviderTooling \
        -lLinux_SmbGeneralProviderBasic \
        -lcmpiLinux_SambaShareOptions \
        -lcmpiLinux_SambaUser

libcmpiLinux_SambaAdminUsersForShare_la_CPPFLAGS = \
        -D_COMPILE_UNIX -DCMPI_STANDALONE \
		-I$(srcdir)/../resource-access \
		-I$(srcdir)/include \
		-I$(srcdir)/Linux_SambaShareOptions \
		-I$(srcdir)/Linux_SambaUser



################################################################################
# Linux_SambaCommonSecurityForGlobal
libcmpiLinux_SambaCommonSecurityForGlobal_la_SOURCES = \
        $(srcdir)/Linux_SambaCommonSecurityForGlobal/CmpiLinux_SambaCommonSecurityForGlobalProvider.cpp \
        $(srcdir)/Linux_SambaCommonSecurityForGlobal/Linux_SambaCommonSecurityForGlobalDefaultImplementation.cpp \
        $(srcdir)/Linux_SambaCommonSecurityForGlobal/Linux_SambaCommonSecurityForGlobalExternal.cpp \
        $(srcdir)/Linux_SambaCommonSecurityForGlobal/Linux_SambaCommonSecurityForGlobalFactory.cpp \
        $(srcdir)/Linux_SambaCommonSecurityForGlobal/Linux_SambaCommonSecurityForGlobalInstance.cpp \
        $(srcdir)/Linux_SambaCommonSecurityForGlobal/Linux_SambaCommonSecurityForGlobalInstanceName.cpp \
        $(srcdir)/Linux_SambaCommonSecurityForGlobal/Linux_SambaCommonSecurityForGlobalManualInstance.cpp \
        $(srcdir)/Linux_SambaCommonSecurityForGlobal/Linux_SambaCommonSecurityForGlobalRepositoryExternal.cpp \
        $(srcdir)/Linux_SambaCommonSecurityForGlobal/Linux_SambaCommonSecurityForGlobalRepositoryInstance.cpp \
        $(srcdir)/Linux_SambaCommonSecurityForGlobal/Linux_SambaCommonSecurityForGlobalResourceAccess.cpp

noinst_HEADERS+= \
        $(srcdir)/Linux_SambaCommonSecurityForGlobal/CmpiLinux_SambaCommonSecurityForGlobalProvider.h \
        $(srcdir)/Linux_SambaCommonSecurityForGlobal/Linux_SambaCommonSecurityForGlobalDefaultImplementation.h \
        $(srcdir)/Linux_SambaCommonSecurityForGlobal/Linux_SambaCommonSecurityForGlobalExternal.h \
        $(srcdir)/Linux_SambaCommonSecurityForGlobal/Linux_SambaCommonSecurityForGlobalFactory.h \
        $(srcdir)/Linux_SambaCommonSecurityForGlobal/Linux_SambaCommonSecurityForGlobalInstance.h \
        $(srcdir)/Linux_SambaCommonSecurityForGlobal/Linux_SambaCommonSecurityForGlobalInstanceName.h \
        $(srcdir)/Linux_SambaCommonSecurityForGlobal/Linux_SambaCommonSecurityForGlobalInterface.h \
        $(srcdir)/Linux_SambaCommonSecurityForGlobal/Linux_SambaCommonSecurityForGlobalManualInstance.h \
        $(srcdir)/Linux_SambaCommonSecurityForGlobal/Linux_SambaCommonSecurityForGlobalRepositoryExternal.h \
        $(srcdir)/Linux_SambaCommonSecurityForGlobal/Linux_SambaCommonSecurityForGlobalRepositoryInstance.h \
        $(srcdir)/Linux_SambaCommonSecurityForGlobal/Linux_SambaCommonSecurityForGlobalResourceAccess.h

libcmpiLinux_SambaCommonSecurityForGlobal_la_LIBADD = \
        -L../resource-access\
        -lRaToolsSmb \
        -lIBM_SmbProviderTooling \
        -lLinux_SmbGeneralProviderBasic \
        -lcmpiLinux_SambaGlobalOptions \
        -lcmpiLinux_SambaCommonSecurityOptions

libcmpiLinux_SambaCommonSecurityForGlobal_la_CPPFLAGS = \
        -D_COMPILE_UNIX -DCMPI_STANDALONE \
		-I$(srcdir)/../resource-access \
		-I$(srcdir)/include \
		-I$(srcdir)/Linux_SambaGlobalOptions \
		-I$(srcdir)/Linux_SambaCommonSecurityOptions 



################################################################################
# Linux_SambaCommonSecurityForPrinter
libcmpiLinux_SambaCommonSecurityForPrinter_la_SOURCES = \
        $(srcdir)/Linux_SambaCommonSecurityForPrinter/CmpiLinux_SambaCommonSecurityForPrinterProvider.cpp \
        $(srcdir)/Linux_SambaCommonSecurityForPrinter/Linux_SambaCommonSecurityForPrinterDefaultImplementation.cpp \
        $(srcdir)/Linux_SambaCommonSecurityForPrinter/Linux_SambaCommonSecurityForPrinterExternal.cpp \
        $(srcdir)/Linux_SambaCommonSecurityForPrinter/Linux_SambaCommonSecurityForPrinterFactory.cpp \
        $(srcdir)/Linux_SambaCommonSecurityForPrinter/Linux_SambaCommonSecurityForPrinterInstance.cpp \
        $(srcdir)/Linux_SambaCommonSecurityForPrinter/Linux_SambaCommonSecurityForPrinterInstanceName.cpp \
        $(srcdir)/Linux_SambaCommonSecurityForPrinter/Linux_SambaCommonSecurityForPrinterManualInstance.cpp \
        $(srcdir)/Linux_SambaCommonSecurityForPrinter/Linux_SambaCommonSecurityForPrinterRepositoryExternal.cpp \
        $(srcdir)/Linux_SambaCommonSecurityForPrinter/Linux_SambaCommonSecurityForPrinterRepositoryInstance.cpp \
        $(srcdir)/Linux_SambaCommonSecurityForPrinter/Linux_SambaCommonSecurityForPrinterResourceAccess.cpp
        
noinst_HEADERS+= \
        $(srcdir)/Linux_SambaCommonSecurityForPrinter/CmpiLinux_SambaCommonSecurityForPrinterProvider.h \
        $(srcdir)/Linux_SambaCommonSecurityForPrinter/Linux_SambaCommonSecurityForPrinterDefaultImplementation.h \
        $(srcdir)/Linux_SambaCommonSecurityForPrinter/Linux_SambaCommonSecurityForPrinterExternal.h \
        $(srcdir)/Linux_SambaCommonSecurityForPrinter/Linux_SambaCommonSecurityForPrinterFactory.h \
        $(srcdir)/Linux_SambaCommonSecurityForPrinter/Linux_SambaCommonSecurityForPrinterInstance.h \
        $(srcdir)/Linux_SambaCommonSecurityForPrinter/Linux_SambaCommonSecurityForPrinterInstanceName.h \
        $(srcdir)/Linux_SambaCommonSecurityForPrinter/Linux_SambaCommonSecurityForPrinterInterface.h \
        $(srcdir)/Linux_SambaCommonSecurityForPrinter/Linux_SambaCommonSecurityForPrinterManualInstance.h \
        $(srcdir)/Linux_SambaCommonSecurityForPrinter/Linux_SambaCommonSecurityForPrinterRepositoryExternal.h \
        $(srcdir)/Linux_SambaCommonSecurityForPrinter/Linux_SambaCommonSecurityForPrinterRepositoryInstance.h \
        $(srcdir)/Linux_SambaCommonSecurityForPrinter/Linux_SambaCommonSecurityForPrinterResourceAccess.h

libcmpiLinux_SambaCommonSecurityForPrinter_la_LIBADD = \
        -L../resource-access\
        -lRaToolsSmb \
        -lIBM_SmbProviderTooling \
        -lLinux_SmbGeneralProviderBasic \
        -lcmpiLinux_SambaPrinterOptions \
        -lcmpiLinux_SambaCommonSecurityOptions

libcmpiLinux_SambaCommonSecurityForPrinter_la_CPPFLAGS = \
        -D_COMPILE_UNIX -DCMPI_STANDALONE \
		-I$(srcdir)/../resource-access \
		-I$(srcdir)/include \
		-I$(srcdir)/Linux_SambaPrinterOptions \
		-I$(srcdir)/Linux_SambaCommonSecurityOptions 



################################################################################
# Linux_SambaCommonSecurityForShare
libcmpiLinux_SambaCommonSecurityForShare_la_SOURCES = \
        $(srcdir)/Linux_SambaCommonSecurityForShare/CmpiLinux_SambaCommonSecurityForShareProvider.cpp \
        $(srcdir)/Linux_SambaCommonSecurityForShare/Linux_SambaCommonSecurityForShareDefaultImplementation.cpp \
        $(srcdir)/Linux_SambaCommonSecurityForShare/Linux_SambaCommonSecurityForShareExternal.cpp \
        $(srcdir)/Linux_SambaCommonSecurityForShare/Linux_SambaCommonSecurityForShareFactory.cpp \
        $(srcdir)/Linux_SambaCommonSecurityForShare/Linux_SambaCommonSecurityForShareInstance.cpp \
        $(srcdir)/Linux_SambaCommonSecurityForShare/Linux_SambaCommonSecurityForShareInstanceName.cpp \
        $(srcdir)/Linux_SambaCommonSecurityForShare/Linux_SambaCommonSecurityForShareManualInstance.cpp \
        $(srcdir)/Linux_SambaCommonSecurityForShare/Linux_SambaCommonSecurityForShareRepositoryExternal.cpp \
        $(srcdir)/Linux_SambaCommonSecurityForShare/Linux_SambaCommonSecurityForShareRepositoryInstance.cpp \
        $(srcdir)/Linux_SambaCommonSecurityForShare/Linux_SambaCommonSecurityForShareResourceAccess.cpp

noinst_HEADERS+= \
        $(srcdir)/Linux_SambaCommonSecurityForShare/CmpiLinux_SambaCommonSecurityForShareProvider.h \
        $(srcdir)/Linux_SambaCommonSecurityForShare/Linux_SambaCommonSecurityForShareDefaultImplementation.h \
        $(srcdir)/Linux_SambaCommonSecurityForShare/Linux_SambaCommonSecurityForShareExternal.h \
        $(srcdir)/Linux_SambaCommonSecurityForShare/Linux_SambaCommonSecurityForShareFactory.h \
        $(srcdir)/Linux_SambaCommonSecurityForShare/Linux_SambaCommonSecurityForShareInstance.h \
        $(srcdir)/Linux_SambaCommonSecurityForShare/Linux_SambaCommonSecurityForShareInstanceName.h \
        $(srcdir)/Linux_SambaCommonSecurityForShare/Linux_SambaCommonSecurityForShareInterface.h \
        $(srcdir)/Linux_SambaCommonSecurityForShare/Linux_SambaCommonSecurityForShareManualInstance.h \
        $(srcdir)/Linux_SambaCommonSecurityForShare/Linux_SambaCommonSecurityForShareRepositoryExternal.h \
        $(srcdir)/Linux_SambaCommonSecurityForShare/Linux_SambaCommonSecurityForShareRepositoryInstance.h \
        $(srcdir)/Linux_SambaCommonSecurityForShare/Linux_SambaCommonSecurityForShareResourceAccess.h

libcmpiLinux_SambaCommonSecurityForShare_la_LIBADD = \
        -L../resource-access\
        -lRaToolsSmb \
        -lIBM_SmbProviderTooling \
        -lLinux_SmbGeneralProviderBasic \
        -lcmpiLinux_SambaPrinterOptions \
        -lcmpiLinux_SambaCommonSecurityOptions

libcmpiLinux_SambaCommonSecurityForShare_la_CPPFLAGS = \
        -D_COMPILE_UNIX -DCMPI_STANDALONE \
		-I$(srcdir)/../resource-access \
		-I$(srcdir)/include \
		-I$(srcdir)/Linux_SambaShareOptions \
		-I$(srcdir)/Linux_SambaCommonSecurityOptions 



################################################################################
# Linux_SambaCommonSecurityOptions
libcmpiLinux_SambaCommonSecurityOptions_la_SOURCES = \
        $(srcdir)/Linux_SambaCommonSecurityOptions/CmpiLinux_SambaCommonSecurityOptionsProvider.cpp \
        $(srcdir)/Linux_SambaCommonSecurityOptions/Linux_SambaCommonSecurityOptionsDefaultImplementation.cpp \
        $(srcdir)/Linux_SambaCommonSecurityOptions/Linux_SambaCommonSecurityOptionsExternal.cpp \
        $(srcdir)/Linux_SambaCommonSecurityOptions/Linux_SambaCommonSecurityOptionsFactory.cpp \
        $(srcdir)/Linux_SambaCommonSecurityOptions/Linux_SambaCommonSecurityOptionsInstance.cpp \
        $(srcdir)/Linux_SambaCommonSecurityOptions/Linux_SambaCommonSecurityOptionsInstanceName.cpp \
        $(srcdir)/Linux_SambaCommonSecurityOptions/Linux_SambaCommonSecurityOptionsManualInstance.cpp \
        $(srcdir)/Linux_SambaCommonSecurityOptions/Linux_SambaCommonSecurityOptionsRepositoryExternal.cpp \
        $(srcdir)/Linux_SambaCommonSecurityOptions/Linux_SambaCommonSecurityOptionsRepositoryInstance.cpp \
        $(srcdir)/Linux_SambaCommonSecurityOptions/Linux_SambaCommonSecurityOptionsResourceAccess.cpp

noinst_HEADERS+= \
        $(srcdir)/Linux_SambaCommonSecurityOptions/CmpiLinux_SambaCommonSecurityOptionsProvider.h \
        $(srcdir)/Linux_SambaCommonSecurityOptions/Linux_SambaCommonSecurityOptionsDefaultImplementation.h \
        $(srcdir)/Linux_SambaCommonSecurityOptions/Linux_SambaCommonSecurityOptionsExternal.h \
        $(srcdir)/Linux_SambaCommonSecurityOptions/Linux_SambaCommonSecurityOptionsFactory.h \
        $(srcdir)/Linux_SambaCommonSecurityOptions/Linux_SambaCommonSecurityOptionsInstance.h \
        $(srcdir)/Linux_SambaCommonSecurityOptions/Linux_SambaCommonSecurityOptionsInstanceName.h \
        $(srcdir)/Linux_SambaCommonSecurityOptions/Linux_SambaCommonSecurityOptionsInterface.h \
        $(srcdir)/Linux_SambaCommonSecurityOptions/Linux_SambaCommonSecurityOptionsManualInstance.h \
        $(srcdir)/Linux_SambaCommonSecurityOptions/Linux_SambaCommonSecurityOptionsRepositoryExternal.h \
        $(srcdir)/Linux_SambaCommonSecurityOptions/Linux_SambaCommonSecurityOptionsRepositoryInstance.h \
        $(srcdir)/Linux_SambaCommonSecurityOptions/Linux_SambaCommonSecurityOptionsResourceAccess.h

libcmpiLinux_SambaCommonSecurityOptions_la_LIBADD = \
        -L../resource-access\
        -lRaToolsSmb \
        -lIBM_SmbProviderTooling \
        -lLinux_SmbGeneralProviderBasic

libcmpiLinux_SambaCommonSecurityOptions_la_CPPFLAGS = \
        -D_COMPILE_UNIX -DCMPI_STANDALONE \
		-I$(srcdir)/../resource-access \
		-I$(srcdir)/include



################################################################################
# Linux_SambaForceGroupForGlobal
libcmpiLinux_SambaForceGroupForGlobal_la_SOURCES = \
        $(srcdir)/Linux_SambaForceGroupForGlobal/CmpiLinux_SambaForceGroupForGlobalProvider.cpp \
        $(srcdir)/Linux_SambaForceGroupForGlobal/Linux_SambaForceGroupForGlobalDefaultImplementation.cpp \
        $(srcdir)/Linux_SambaForceGroupForGlobal/Linux_SambaForceGroupForGlobalExternal.cpp \
        $(srcdir)/Linux_SambaForceGroupForGlobal/Linux_SambaForceGroupForGlobalFactory.cpp \
        $(srcdir)/Linux_SambaForceGroupForGlobal/Linux_SambaForceGroupForGlobalInstance.cpp \
        $(srcdir)/Linux_SambaForceGroupForGlobal/Linux_SambaForceGroupForGlobalInstanceName.cpp \
        $(srcdir)/Linux_SambaForceGroupForGlobal/Linux_SambaForceGroupForGlobalManualInstance.cpp \
        $(srcdir)/Linux_SambaForceGroupForGlobal/Linux_SambaForceGroupForGlobalRepositoryExternal.cpp \
        $(srcdir)/Linux_SambaForceGroupForGlobal/Linux_SambaForceGroupForGlobalRepositoryInstance.cpp \
        $(srcdir)/Linux_SambaForceGroupForGlobal/Linux_SambaForceGroupForGlobalResourceAccess.cpp

noinst_HEADERS+= \
        $(srcdir)/Linux_SambaForceGroupForGlobal/CmpiLinux_SambaForceGroupForGlobalProvider.h \
        $(srcdir)/Linux_SambaForceGroupForGlobal/Linux_SambaForceGroupForGlobalDefaultImplementation.h \
        $(srcdir)/Linux_SambaForceGroupForGlobal/Linux_SambaForceGroupForGlobalExternal.h \
        $(srcdir)/Linux_SambaForceGroupForGlobal/Linux_SambaForceGroupForGlobalFactory.h \
        $(srcdir)/Linux_SambaForceGroupForGlobal/Linux_SambaForceGroupForGlobalInstance.h \
        $(srcdir)/Linux_SambaForceGroupForGlobal/Linux_SambaForceGroupForGlobalInstanceName.h \
        $(srcdir)/Linux_SambaForceGroupForGlobal/Linux_SambaForceGroupForGlobalInterface.h \
        $(srcdir)/Linux_SambaForceGroupForGlobal/Linux_SambaForceGroupForGlobalManualInstance.h \
        $(srcdir)/Linux_SambaForceGroupForGlobal/Linux_SambaForceGroupForGlobalRepositoryExternal.h \
        $(srcdir)/Linux_SambaForceGroupForGlobal/Linux_SambaForceGroupForGlobalRepositoryInstance.h \
        $(srcdir)/Linux_SambaForceGroupForGlobal/Linux_SambaForceGroupForGlobalResourceAccess.h

libcmpiLinux_SambaForceGroupForGlobal_la_LIBADD = \
        -L../resource-access\
        -lRaToolsSmb \
        -lIBM_SmbProviderTooling \
        -lLinux_SmbGeneralProviderBasic \
        -lcmpiLinux_SambaGlobalOptions \
        -lcmpiLinux_SambaGroup

libcmpiLinux_SambaForceGroupForGlobal_la_CPPFLAGS = \
        -D_COMPILE_UNIX -DCMPI_STANDALONE \
		-I$(srcdir)/../resource-access \
		-I$(srcdir)/include \
		-I$(srcdir)/Linux_SambaGlobalOptions \
		-I$(srcdir)/Linux_SambaGroup



################################################################################
# Linux_SambaForceGroupForPrinter
libcmpiLinux_SambaForceGroupForPrinter_la_SOURCES = \
        $(srcdir)/Linux_SambaForceGroupForPrinter/CmpiLinux_SambaForceGroupForPrinterProvider.cpp \
        $(srcdir)/Linux_SambaForceGroupForPrinter/Linux_SambaForceGroupForPrinterDefaultImplementation.cpp \
        $(srcdir)/Linux_SambaForceGroupForPrinter/Linux_SambaForceGroupForPrinterExternal.cpp \
        $(srcdir)/Linux_SambaForceGroupForPrinter/Linux_SambaForceGroupForPrinterFactory.cpp \
        $(srcdir)/Linux_SambaForceGroupForPrinter/Linux_SambaForceGroupForPrinterInstance.cpp \
        $(srcdir)/Linux_SambaForceGroupForPrinter/Linux_SambaForceGroupForPrinterInstanceName.cpp \
        $(srcdir)/Linux_SambaForceGroupForPrinter/Linux_SambaForceGroupForPrinterManualInstance.cpp \
        $(srcdir)/Linux_SambaForceGroupForPrinter/Linux_SambaForceGroupForPrinterRepositoryExternal.cpp \
        $(srcdir)/Linux_SambaForceGroupForPrinter/Linux_SambaForceGroupForPrinterRepositoryInstance.cpp \
        $(srcdir)/Linux_SambaForceGroupForPrinter/Linux_SambaForceGroupForPrinterResourceAccess.cpp

noinst_HEADERS+= \
        $(srcdir)/Linux_SambaForceGroupForPrinter/CmpiLinux_SambaForceGroupForPrinterProvider.h \
        $(srcdir)/Linux_SambaForceGroupForPrinter/Linux_SambaForceGroupForPrinterDefaultImplementation.h \
        $(srcdir)/Linux_SambaForceGroupForPrinter/Linux_SambaForceGroupForPrinterExternal.h \
        $(srcdir)/Linux_SambaForceGroupForPrinter/Linux_SambaForceGroupForPrinterFactory.h \
        $(srcdir)/Linux_SambaForceGroupForPrinter/Linux_SambaForceGroupForPrinterInstance.h \
        $(srcdir)/Linux_SambaForceGroupForPrinter/Linux_SambaForceGroupForPrinterInstanceName.h \
        $(srcdir)/Linux_SambaForceGroupForPrinter/Linux_SambaForceGroupForPrinterInterface.h \
        $(srcdir)/Linux_SambaForceGroupForPrinter/Linux_SambaForceGroupForPrinterManualInstance.h \
        $(srcdir)/Linux_SambaForceGroupForPrinter/Linux_SambaForceGroupForPrinterRepositoryExternal.h \
        $(srcdir)/Linux_SambaForceGroupForPrinter/Linux_SambaForceGroupForPrinterRepositoryInstance.h \
        $(srcdir)/Linux_SambaForceGroupForPrinter/Linux_SambaForceGroupForPrinterResourceAccess.h

libcmpiLinux_SambaForceGroupForPrinter_la_LIBADD = \
        -L../resource-access\
        -lRaToolsSmb \
        -lIBM_SmbProviderTooling \
        -lLinux_SmbGeneralProviderBasic \
        -lcmpiLinux_SambaPrinterOptions \
        -lcmpiLinux_SambaGroup

libcmpiLinux_SambaForceGroupForPrinter_la_CPPFLAGS = \
        -D_COMPILE_UNIX -DCMPI_STANDALONE \
		-I$(srcdir)/../resource-access \
		-I$(srcdir)/include \
		-I$(srcdir)/Linux_SambaPrinterOptions \
		-I$(srcdir)/Linux_SambaGroup



################################################################################
# Linux_SambaForceGroupForShare
libcmpiLinux_SambaForceGroupForShare_la_SOURCES = \
        $(srcdir)/Linux_SambaForceGroupForShare/CmpiLinux_SambaForceGroupForShareProvider.cpp \
        $(srcdir)/Linux_SambaForceGroupForShare/Linux_SambaForceGroupForShareDefaultImplementation.cpp \
        $(srcdir)/Linux_SambaForceGroupForShare/Linux_SambaForceGroupForShareExternal.cpp \
        $(srcdir)/Linux_SambaForceGroupForShare/Linux_SambaForceGroupForShareFactory.cpp \
        $(srcdir)/Linux_SambaForceGroupForShare/Linux_SambaForceGroupForShareInstance.cpp \
        $(srcdir)/Linux_SambaForceGroupForShare/Linux_SambaForceGroupForShareInstanceName.cpp \
        $(srcdir)/Linux_SambaForceGroupForShare/Linux_SambaForceGroupForShareManualInstance.cpp \
        $(srcdir)/Linux_SambaForceGroupForShare/Linux_SambaForceGroupForShareRepositoryExternal.cpp \
        $(srcdir)/Linux_SambaForceGroupForShare/Linux_SambaForceGroupForShareRepositoryInstance.cpp \
        $(srcdir)/Linux_SambaForceGroupForShare/Linux_SambaForceGroupForShareResourceAccess.cpp

noinst_HEADERS+= \
        $(srcdir)/Linux_SambaForceGroupForShare/CmpiLinux_SambaForceGroupForShareProvider.h \
        $(srcdir)/Linux_SambaForceGroupForShare/Linux_SambaForceGroupForShareDefaultImplementation.h \
        $(srcdir)/Linux_SambaForceGroupForShare/Linux_SambaForceGroupForShareExternal.h \
        $(srcdir)/Linux_SambaForceGroupForShare/Linux_SambaForceGroupForShareFactory.h \
        $(srcdir)/Linux_SambaForceGroupForShare/Linux_SambaForceGroupForShareInstance.h \
        $(srcdir)/Linux_SambaForceGroupForShare/Linux_SambaForceGroupForShareInstanceName.h \
        $(srcdir)/Linux_SambaForceGroupForShare/Linux_SambaForceGroupForShareInterface.h \
        $(srcdir)/Linux_SambaForceGroupForShare/Linux_SambaForceGroupForShareManualInstance.h \
        $(srcdir)/Linux_SambaForceGroupForShare/Linux_SambaForceGroupForShareRepositoryExternal.h \
        $(srcdir)/Linux_SambaForceGroupForShare/Linux_SambaForceGroupForShareRepositoryInstance.h \
        $(srcdir)/Linux_SambaForceGroupForShare/Linux_SambaForceGroupForShareResourceAccess.h

libcmpiLinux_SambaForceGroupForShare_la_LIBADD = \
        -L../resource-access\
        -lRaToolsSmb \
        -lIBM_SmbProviderTooling \
        -lLinux_SmbGeneralProviderBasic \
        -lcmpiLinux_SambaShareOptions \
        -lcmpiLinux_SambaGroup

libcmpiLinux_SambaForceGroupForShare_la_CPPFLAGS = \
        -D_COMPILE_UNIX -DCMPI_STANDALONE \
		-I$(srcdir)/../resource-access \
		-I$(srcdir)/include \
		-I$(srcdir)/Linux_SambaShareOptions \
		-I$(srcdir)/Linux_SambaGroup



################################################################################
# Linux_SambaForceUserForGlobal
libcmpiLinux_SambaForceUserForGlobal_la_SOURCES = \
        $(srcdir)/Linux_SambaForceUserForGlobal/CmpiLinux_SambaForceUserForGlobalProvider.cpp \
        $(srcdir)/Linux_SambaForceUserForGlobal/Linux_SambaForceUserForGlobalDefaultImplementation.cpp \
        $(srcdir)/Linux_SambaForceUserForGlobal/Linux_SambaForceUserForGlobalExternal.cpp \
        $(srcdir)/Linux_SambaForceUserForGlobal/Linux_SambaForceUserForGlobalFactory.cpp \
        $(srcdir)/Linux_SambaForceUserForGlobal/Linux_SambaForceUserForGlobalInstance.cpp \
        $(srcdir)/Linux_SambaForceUserForGlobal/Linux_SambaForceUserForGlobalInstanceName.cpp \
        $(srcdir)/Linux_SambaForceUserForGlobal/Linux_SambaForceUserForGlobalManualInstance.cpp \
        $(srcdir)/Linux_SambaForceUserForGlobal/Linux_SambaForceUserForGlobalRepositoryExternal.cpp \
        $(srcdir)/Linux_SambaForceUserForGlobal/Linux_SambaForceUserForGlobalRepositoryInstance.cpp \
        $(srcdir)/Linux_SambaForceUserForGlobal/Linux_SambaForceUserForGlobalResourceAccess.cpp

noinst_HEADERS+= \
        $(srcdir)/Linux_SambaForceUserForGlobal/CmpiLinux_SambaForceUserForGlobalProvider.h \
        $(srcdir)/Linux_SambaForceUserForGlobal/Linux_SambaForceUserForGlobalDefaultImplementation.h \
        $(srcdir)/Linux_SambaForceUserForGlobal/Linux_SambaForceUserForGlobalExternal.h \
        $(srcdir)/Linux_SambaForceUserForGlobal/Linux_SambaForceUserForGlobalFactory.h \
        $(srcdir)/Linux_SambaForceUserForGlobal/Linux_SambaForceUserForGlobalInstance.h \
        $(srcdir)/Linux_SambaForceUserForGlobal/Linux_SambaForceUserForGlobalInstanceName.h \
        $(srcdir)/Linux_SambaForceUserForGlobal/Linux_SambaForceUserForGlobalInterface.h \
        $(srcdir)/Linux_SambaForceUserForGlobal/Linux_SambaForceUserForGlobalManualInstance.h \
        $(srcdir)/Linux_SambaForceUserForGlobal/Linux_SambaForceUserForGlobalRepositoryExternal.h \
        $(srcdir)/Linux_SambaForceUserForGlobal/Linux_SambaForceUserForGlobalRepositoryInstance.h \
        $(srcdir)/Linux_SambaForceUserForGlobal/Linux_SambaForceUserForGlobalResourceAccess.h

libcmpiLinux_SambaForceUserForGlobal_la_LIBADD = \
        -L../resource-access\
        -lRaToolsSmb \
        -lIBM_SmbProviderTooling \
        -lLinux_SmbGeneralProviderBasic \
        -lcmpiLinux_SambaGlobalOptions \
        -lcmpiLinux_SambaUser

libcmpiLinux_SambaForceUserForGlobal_la_CPPFLAGS = \
        -D_COMPILE_UNIX -DCMPI_STANDALONE \
		-I$(srcdir)/../resource-access \
		-I$(srcdir)/include \
		-I$(srcdir)/Linux_SambaGlobalOptions \
		-I$(srcdir)/Linux_SambaUser



################################################################################
# Linux_SambaForceUserForPrinter
libcmpiLinux_SambaForceUserForPrinter_la_SOURCES = \
        $(srcdir)/Linux_SambaForceUserForPrinter/CmpiLinux_SambaForceUserForPrinterProvider.cpp \
        $(srcdir)/Linux_SambaForceUserForPrinter/Linux_SambaForceUserForPrinterDefaultImplementation.cpp \
        $(srcdir)/Linux_SambaForceUserForPrinter/Linux_SambaForceUserForPrinterExternal.cpp \
        $(srcdir)/Linux_SambaForceUserForPrinter/Linux_SambaForceUserForPrinterFactory.cpp \
        $(srcdir)/Linux_SambaForceUserForPrinter/Linux_SambaForceUserForPrinterInstance.cpp \
        $(srcdir)/Linux_SambaForceUserForPrinter/Linux_SambaForceUserForPrinterInstanceName.cpp \
        $(srcdir)/Linux_SambaForceUserForPrinter/Linux_SambaForceUserForPrinterManualInstance.cpp \
        $(srcdir)/Linux_SambaForceUserForPrinter/Linux_SambaForceUserForPrinterRepositoryExternal.cpp \
        $(srcdir)/Linux_SambaForceUserForPrinter/Linux_SambaForceUserForPrinterRepositoryInstance.cpp \
        $(srcdir)/Linux_SambaForceUserForPrinter/Linux_SambaForceUserForPrinterResourceAccess.cpp

noinst_HEADERS+= \
        $(srcdir)/Linux_SambaForceUserForPrinter/CmpiLinux_SambaForceUserForPrinterProvider.h \
        $(srcdir)/Linux_SambaForceUserForPrinter/Linux_SambaForceUserForPrinterDefaultImplementation.h \
        $(srcdir)/Linux_SambaForceUserForPrinter/Linux_SambaForceUserForPrinterExternal.h \
        $(srcdir)/Linux_SambaForceUserForPrinter/Linux_SambaForceUserForPrinterFactory.h \
        $(srcdir)/Linux_SambaForceUserForPrinter/Linux_SambaForceUserForPrinterInstance.h \
        $(srcdir)/Linux_SambaForceUserForPrinter/Linux_SambaForceUserForPrinterInstanceName.h \
        $(srcdir)/Linux_SambaForceUserForPrinter/Linux_SambaForceUserForPrinterInterface.h \
        $(srcdir)/Linux_SambaForceUserForPrinter/Linux_SambaForceUserForPrinterManualInstance.h \
        $(srcdir)/Linux_SambaForceUserForPrinter/Linux_SambaForceUserForPrinterRepositoryExternal.h \
        $(srcdir)/Linux_SambaForceUserForPrinter/Linux_SambaForceUserForPrinterRepositoryInstance.h \
        $(srcdir)/Linux_SambaForceUserForPrinter/Linux_SambaForceUserForPrinterResourceAccess.h

libcmpiLinux_SambaForceUserForPrinter_la_LIBADD = \
        -L../resource-access\
        -lRaToolsSmb \
        -lIBM_SmbProviderTooling \
        -lLinux_SmbGeneralProviderBasic \
        -lcmpiLinux_SambaPrinterOptions \
        -lcmpiLinux_SambaUser

libcmpiLinux_SambaForceUserForPrinter_la_CPPFLAGS = \
        -D_COMPILE_UNIX -DCMPI_STANDALONE \
		-I$(srcdir)/../resource-access \
		-I$(srcdir)/include \
		-I$(srcdir)/Linux_SambaPrinterOptions \
		-I$(srcdir)/Linux_SambaUser



################################################################################
# Linux_SambaForceUserForShare
libcmpiLinux_SambaForceUserForShare_la_SOURCES = \
        $(srcdir)/Linux_SambaForceUserForShare/CmpiLinux_SambaForceUserForShareProvider.cpp \
        $(srcdir)/Linux_SambaForceUserForShare/Linux_SambaForceUserForShareDefaultImplementation.cpp \
        $(srcdir)/Linux_SambaForceUserForShare/Linux_SambaForceUserForShareExternal.cpp \
        $(srcdir)/Linux_SambaForceUserForShare/Linux_SambaForceUserForShareFactory.cpp \
        $(srcdir)/Linux_SambaForceUserForShare/Linux_SambaForceUserForShareInstance.cpp \
        $(srcdir)/Linux_SambaForceUserForShare/Linux_SambaForceUserForShareInstanceName.cpp \
        $(srcdir)/Linux_SambaForceUserForShare/Linux_SambaForceUserForShareManualInstance.cpp \
        $(srcdir)/Linux_SambaForceUserForShare/Linux_SambaForceUserForShareRepositoryExternal.cpp \
        $(srcdir)/Linux_SambaForceUserForShare/Linux_SambaForceUserForShareRepositoryInstance.cpp \
        $(srcdir)/Linux_SambaForceUserForShare/Linux_SambaForceUserForShareResourceAccess.cpp

noinst_HEADERS+= \
        $(srcdir)/Linux_SambaForceUserForShare/CmpiLinux_SambaForceUserForShareProvider.h \
        $(srcdir)/Linux_SambaForceUserForShare/Linux_SambaForceUserForShareDefaultImplementation.h \
        $(srcdir)/Linux_SambaForceUserForShare/Linux_SambaForceUserForShareExternal.h \
        $(srcdir)/Linux_SambaForceUserForShare/Linux_SambaForceUserForShareFactory.h \
        $(srcdir)/Linux_SambaForceUserForShare/Linux_SambaForceUserForShareInstance.h \
        $(srcdir)/Linux_SambaForceUserForShare/Linux_SambaForceUserForShareInstanceName.h \
        $(srcdir)/Linux_SambaForceUserForShare/Linux_SambaForceUserForShareInterface.h \
        $(srcdir)/Linux_SambaForceUserForShare/Linux_SambaForceUserForShareManualInstance.h \
        $(srcdir)/Linux_SambaForceUserForShare/Linux_SambaForceUserForShareRepositoryExternal.h \
        $(srcdir)/Linux_SambaForceUserForShare/Linux_SambaForceUserForShareRepositoryInstance.h \
        $(srcdir)/Linux_SambaForceUserForShare/Linux_SambaForceUserForShareResourceAccess.h

libcmpiLinux_SambaForceUserForShare_la_LIBADD = \
        -L../resource-access\
        -lRaToolsSmb \
        -lIBM_SmbProviderTooling \
        -lLinux_SmbGeneralProviderBasic \
        -lcmpiLinux_SambaShareOptions \
        -lcmpiLinux_SambaUser

libcmpiLinux_SambaForceUserForShare_la_CPPFLAGS = \
        -D_COMPILE_UNIX -DCMPI_STANDALONE \
		-I$(srcdir)/../resource-access \
		-I$(srcdir)/include \
		-I$(srcdir)/Linux_SambaShareOptions \
		-I$(srcdir)/Linux_SambaUser



################################################################################
# Linux_SambaGlobalBrowseForGlobal
libcmpiLinux_SambaGlobalBrowseForGlobal_la_SOURCES = \
        $(srcdir)/Linux_SambaGlobalBrowseForGlobal/CmpiLinux_SambaGlobalBrowseForGlobalProvider.cpp \
        $(srcdir)/Linux_SambaGlobalBrowseForGlobal/Linux_SambaGlobalBrowseForGlobalDefaultImplementation.cpp \
        $(srcdir)/Linux_SambaGlobalBrowseForGlobal/Linux_SambaGlobalBrowseForGlobalExternal.cpp \
        $(srcdir)/Linux_SambaGlobalBrowseForGlobal/Linux_SambaGlobalBrowseForGlobalFactory.cpp \
        $(srcdir)/Linux_SambaGlobalBrowseForGlobal/Linux_SambaGlobalBrowseForGlobalInstance.cpp \
        $(srcdir)/Linux_SambaGlobalBrowseForGlobal/Linux_SambaGlobalBrowseForGlobalInstanceName.cpp \
        $(srcdir)/Linux_SambaGlobalBrowseForGlobal/Linux_SambaGlobalBrowseForGlobalManualInstance.cpp \
        $(srcdir)/Linux_SambaGlobalBrowseForGlobal/Linux_SambaGlobalBrowseForGlobalRepositoryExternal.cpp \
        $(srcdir)/Linux_SambaGlobalBrowseForGlobal/Linux_SambaGlobalBrowseForGlobalRepositoryInstance.cpp \
        $(srcdir)/Linux_SambaGlobalBrowseForGlobal/Linux_SambaGlobalBrowseForGlobalResourceAccess.cpp

noinst_HEADERS+= \
        $(srcdir)/Linux_SambaGlobalBrowseForGlobal/CmpiLinux_SambaGlobalBrowseForGlobalProvider.h \
        $(srcdir)/Linux_SambaGlobalBrowseForGlobal/Linux_SambaGlobalBrowseForGlobalDefaultImplementation.h \
        $(srcdir)/Linux_SambaGlobalBrowseForGlobal/Linux_SambaGlobalBrowseForGlobalExternal.h \
        $(srcdir)/Linux_SambaGlobalBrowseForGlobal/Linux_SambaGlobalBrowseForGlobalFactory.h \
        $(srcdir)/Linux_SambaGlobalBrowseForGlobal/Linux_SambaGlobalBrowseForGlobalInstance.h \
        $(srcdir)/Linux_SambaGlobalBrowseForGlobal/Linux_SambaGlobalBrowseForGlobalInstanceName.h \
        $(srcdir)/Linux_SambaGlobalBrowseForGlobal/Linux_SambaGlobalBrowseForGlobalInterface.h \
        $(srcdir)/Linux_SambaGlobalBrowseForGlobal/Linux_SambaGlobalBrowseForGlobalManualInstance.h \
        $(srcdir)/Linux_SambaGlobalBrowseForGlobal/Linux_SambaGlobalBrowseForGlobalRepositoryExternal.h \
        $(srcdir)/Linux_SambaGlobalBrowseForGlobal/Linux_SambaGlobalBrowseForGlobalRepositoryInstance.h \
        $(srcdir)/Linux_SambaGlobalBrowseForGlobal/Linux_SambaGlobalBrowseForGlobalResourceAccess.h

libcmpiLinux_SambaGlobalBrowseForGlobal_la_LIBADD = \
        -L../resource-access\
        -lRaToolsSmb \
        -lIBM_SmbProviderTooling \
        -lLinux_SmbGeneralProviderBasic \
        -lcmpiLinux_SambaGlobalBrowseOptions \
        -lcmpiLinux_SambaGlobalOptions

libcmpiLinux_SambaGlobalBrowseForGlobal_la_CPPFLAGS = \
        -D_COMPILE_UNIX -DCMPI_STANDALONE \
		-I$(srcdir)/../resource-access \
		-I$(srcdir)/include \
		-I$(srcdir)/Linux_SambaGlobalBrowseOptions \
		-I$(srcdir)/Linux_SambaGlobalOptions 



################################################################################
# Linux_SambaGlobalBrowseOptions
libcmpiLinux_SambaGlobalBrowseOptions_la_SOURCES = \
        $(srcdir)/Linux_SambaGlobalBrowseOptions/CmpiLinux_SambaGlobalBrowseOptionsProvider.cpp \
        $(srcdir)/Linux_SambaGlobalBrowseOptions/Linux_SambaGlobalBrowseOptionsDefaultImplementation.cpp \
        $(srcdir)/Linux_SambaGlobalBrowseOptions/Linux_SambaGlobalBrowseOptionsExternal.cpp \
        $(srcdir)/Linux_SambaGlobalBrowseOptions/Linux_SambaGlobalBrowseOptionsFactory.cpp \
        $(srcdir)/Linux_SambaGlobalBrowseOptions/Linux_SambaGlobalBrowseOptionsInstance.cpp \
        $(srcdir)/Linux_SambaGlobalBrowseOptions/Linux_SambaGlobalBrowseOptionsInstanceName.cpp \
        $(srcdir)/Linux_SambaGlobalBrowseOptions/Linux_SambaGlobalBrowseOptionsManualInstance.cpp \
        $(srcdir)/Linux_SambaGlobalBrowseOptions/Linux_SambaGlobalBrowseOptionsRepositoryExternal.cpp \
        $(srcdir)/Linux_SambaGlobalBrowseOptions/Linux_SambaGlobalBrowseOptionsRepositoryInstance.cpp \
        $(srcdir)/Linux_SambaGlobalBrowseOptions/Linux_SambaGlobalBrowseOptionsResourceAccess.cpp

noinst_HEADERS+= \
        $(srcdir)/Linux_SambaGlobalBrowseOptions/CmpiLinux_SambaGlobalBrowseOptionsProvider.h \
        $(srcdir)/Linux_SambaGlobalBrowseOptions/Linux_SambaGlobalBrowseOptionsDefaultImplementation.h \
        $(srcdir)/Linux_SambaGlobalBrowseOptions/Linux_SambaGlobalBrowseOptionsExternal.h \
        $(srcdir)/Linux_SambaGlobalBrowseOptions/Linux_SambaGlobalBrowseOptionsFactory.h \
        $(srcdir)/Linux_SambaGlobalBrowseOptions/Linux_SambaGlobalBrowseOptionsInstance.h \
        $(srcdir)/Linux_SambaGlobalBrowseOptions/Linux_SambaGlobalBrowseOptionsInstanceName.h \
        $(srcdir)/Linux_SambaGlobalBrowseOptions/Linux_SambaGlobalBrowseOptionsInterface.h \
        $(srcdir)/Linux_SambaGlobalBrowseOptions/Linux_SambaGlobalBrowseOptionsManualInstance.h \
        $(srcdir)/Linux_SambaGlobalBrowseOptions/Linux_SambaGlobalBrowseOptionsRepositoryExternal.h \
        $(srcdir)/Linux_SambaGlobalBrowseOptions/Linux_SambaGlobalBrowseOptionsRepositoryInstance.h \
        $(srcdir)/Linux_SambaGlobalBrowseOptions/Linux_SambaGlobalBrowseOptionsResourceAccess.h

libcmpiLinux_SambaGlobalBrowseOptions_la_LIBADD = \
        -L../resource-access\
        -lRaToolsSmb \
        -lIBM_SmbProviderTooling \
        -lLinux_SmbGeneralProviderBasic

libcmpiLinux_SambaGlobalBrowseOptions_la_CPPFLAGS = \
        -D_COMPILE_UNIX -DCMPI_STANDALONE \
		-I$(srcdir)/../resource-access \
		-I$(srcdir)/include



################################################################################
# Linux_SambaGlobalFileNameHandlingForGlobal
libcmpiLinux_SambaGlobalFileNameHandlingForGlobal_la_SOURCES = \
        $(srcdir)/Linux_SambaGlobalFileNameHandlingForGlobal/CmpiLinux_SambaGlobalFileNameHandlingForGlobalProvider.cpp \
        $(srcdir)/Linux_SambaGlobalFileNameHandlingForGlobal/Linux_SambaGlobalFileNameHandlingForGlobalDefaultImplementation.cpp \
        $(srcdir)/Linux_SambaGlobalFileNameHandlingForGlobal/Linux_SambaGlobalFileNameHandlingForGlobalExternal.cpp \
        $(srcdir)/Linux_SambaGlobalFileNameHandlingForGlobal/Linux_SambaGlobalFileNameHandlingForGlobalFactory.cpp \
        $(srcdir)/Linux_SambaGlobalFileNameHandlingForGlobal/Linux_SambaGlobalFileNameHandlingForGlobalInstance.cpp \
        $(srcdir)/Linux_SambaGlobalFileNameHandlingForGlobal/Linux_SambaGlobalFileNameHandlingForGlobalInstanceName.cpp \
        $(srcdir)/Linux_SambaGlobalFileNameHandlingForGlobal/Linux_SambaGlobalFileNameHandlingForGlobalManualInstance.cpp \
        $(srcdir)/Linux_SambaGlobalFileNameHandlingForGlobal/Linux_SambaGlobalFileNameHandlingForGlobalRepositoryExternal.cpp \
        $(srcdir)/Linux_SambaGlobalFileNameHandlingForGlobal/Linux_SambaGlobalFileNameHandlingForGlobalRepositoryInstance.cpp \
        $(srcdir)/Linux_SambaGlobalFileNameHandlingForGlobal/Linux_SambaGlobalFileNameHandlingForGlobalResourceAccess.cpp

noinst_HEADERS+= \
        $(srcdir)/Linux_SambaGlobalFileNameHandlingForGlobal/CmpiLinux_SambaGlobalFileNameHandlingForGlobalProvider.h \
        $(srcdir)/Linux_SambaGlobalFileNameHandlingForGlobal/Linux_SambaGlobalFileNameHandlingForGlobalDefaultImplementation.h \
        $(srcdir)/Linux_SambaGlobalFileNameHandlingForGlobal/Linux_SambaGlobalFileNameHandlingForGlobalExternal.h \
        $(srcdir)/Linux_SambaGlobalFileNameHandlingForGlobal/Linux_SambaGlobalFileNameHandlingForGlobalFactory.h \
        $(srcdir)/Linux_SambaGlobalFileNameHandlingForGlobal/Linux_SambaGlobalFileNameHandlingForGlobalInstance.h \
        $(srcdir)/Linux_SambaGlobalFileNameHandlingForGlobal/Linux_SambaGlobalFileNameHandlingForGlobalInstanceName.h \
        $(srcdir)/Linux_SambaGlobalFileNameHandlingForGlobal/Linux_SambaGlobalFileNameHandlingForGlobalInterface.h \
        $(srcdir)/Linux_SambaGlobalFileNameHandlingForGlobal/Linux_SambaGlobalFileNameHandlingForGlobalManualInstance.h \
        $(srcdir)/Linux_SambaGlobalFileNameHandlingForGlobal/Linux_SambaGlobalFileNameHandlingForGlobalRepositoryExternal.h \
        $(srcdir)/Linux_SambaGlobalFileNameHandlingForGlobal/Linux_SambaGlobalFileNameHandlingForGlobalRepositoryInstance.h \
        $(srcdir)/Linux_SambaGlobalFileNameHandlingForGlobal/Linux_SambaGlobalFileNameHandlingForGlobalResourceAccess.h

libcmpiLinux_SambaGlobalFileNameHandlingForGlobal_la_LIBADD = \
        -L../resource-access\
        -lRaToolsSmb \
        -lIBM_SmbProviderTooling \
        -lLinux_SmbGeneralProviderBasic \
        -lcmpiLinux_SambaGlobalFileNameHandlingOptions \
        -lcmpiLinux_SambaGlobalOptions \
        -lcmpiCIM_ConcreteJob

libcmpiLinux_SambaGlobalFileNameHandlingForGlobal_la_CPPFLAGS = \
        -D_COMPILE_UNIX -DCMPI_STANDALONE \
		-I$(srcdir)/../resource-access \
		-I$(srcdir)/include \
		-I$(srcdir)/CIM_ConcreteJob \
        -I$(srcdir)/Linux_SambaGlobalFileNameHandlingOptions \
        -I$(srcdir)/Linux_SambaGlobalOptions



################################################################################
# Linux_SambaGlobalFileNameHandlingOptions
libcmpiLinux_SambaGlobalFileNameHandlingOptions_la_SOURCES = \
        $(srcdir)/Linux_SambaGlobalFileNameHandlingOptions/CmpiLinux_SambaGlobalFileNameHandlingOptionsProvider.cpp \
        $(srcdir)/Linux_SambaGlobalFileNameHandlingOptions/Linux_SambaGlobalFileNameHandlingOptionsDefaultImplementation.cpp \
        $(srcdir)/Linux_SambaGlobalFileNameHandlingOptions/Linux_SambaGlobalFileNameHandlingOptionsExternal.cpp \
        $(srcdir)/Linux_SambaGlobalFileNameHandlingOptions/Linux_SambaGlobalFileNameHandlingOptionsFactory.cpp \
        $(srcdir)/Linux_SambaGlobalFileNameHandlingOptions/Linux_SambaGlobalFileNameHandlingOptionsInstance.cpp \
        $(srcdir)/Linux_SambaGlobalFileNameHandlingOptions/Linux_SambaGlobalFileNameHandlingOptionsInstanceName.cpp \
        $(srcdir)/Linux_SambaGlobalFileNameHandlingOptions/Linux_SambaGlobalFileNameHandlingOptionsManualInstance.cpp \
        $(srcdir)/Linux_SambaGlobalFileNameHandlingOptions/Linux_SambaGlobalFileNameHandlingOptionsRepositoryExternal.cpp \
        $(srcdir)/Linux_SambaGlobalFileNameHandlingOptions/Linux_SambaGlobalFileNameHandlingOptionsRepositoryInstance.cpp \
        $(srcdir)/Linux_SambaGlobalFileNameHandlingOptions/Linux_SambaGlobalFileNameHandlingOptionsResourceAccess.cpp

noinst_HEADERS+= \
        $(srcdir)/Linux_SambaGlobalFileNameHandlingOptions/CmpiLinux_SambaGlobalFileNameHandlingOptionsProvider.h \
        $(srcdir)/Linux_SambaGlobalFileNameHandlingOptions/Linux_SambaGlobalFileNameHandlingOptionsDefaultImplementation.h \
        $(srcdir)/Linux_SambaGlobalFileNameHandlingOptions/Linux_SambaGlobalFileNameHandlingOptionsExternal.h \
        $(srcdir)/Linux_SambaGlobalFileNameHandlingOptions/Linux_SambaGlobalFileNameHandlingOptionsFactory.h \
        $(srcdir)/Linux_SambaGlobalFileNameHandlingOptions/Linux_SambaGlobalFileNameHandlingOptionsInstance.h \
        $(srcdir)/Linux_SambaGlobalFileNameHandlingOptions/Linux_SambaGlobalFileNameHandlingOptionsInstanceName.h \
        $(srcdir)/Linux_SambaGlobalFileNameHandlingOptions/Linux_SambaGlobalFileNameHandlingOptionsInterface.h \
        $(srcdir)/Linux_SambaGlobalFileNameHandlingOptions/Linux_SambaGlobalFileNameHandlingOptionsManualInstance.h \
        $(srcdir)/Linux_SambaGlobalFileNameHandlingOptions/Linux_SambaGlobalFileNameHandlingOptionsRepositoryExternal.h \
        $(srcdir)/Linux_SambaGlobalFileNameHandlingOptions/Linux_SambaGlobalFileNameHandlingOptionsRepositoryInstance.h \
        $(srcdir)/Linux_SambaGlobalFileNameHandlingOptions/Linux_SambaGlobalFileNameHandlingOptionsResourceAccess.h

libcmpiLinux_SambaGlobalFileNameHandlingOptions_la_LIBADD = \
        -L../resource-access\
        -lRaToolsSmb \
        -lIBM_SmbProviderTooling \
        -lLinux_SmbGeneralProviderBasic \
        -lcmpiCIM_ConcreteJob

libcmpiLinux_SambaGlobalFileNameHandlingOptions_la_CPPFLAGS = \
        -D_COMPILE_UNIX -DCMPI_STANDALONE \
		-I$(srcdir)/../resource-access \
		-I$(srcdir)/include \
		-I$(srcdir)/CIM_ConcreteJob 



################################################################################
# Linux_SambaGlobalForService
libcmpiLinux_SambaGlobalForService_la_SOURCES = \
        $(srcdir)/Linux_SambaGlobalForService/CmpiLinux_SambaGlobalForServiceProvider.cpp \
        $(srcdir)/Linux_SambaGlobalForService/Linux_SambaGlobalForServiceDefaultImplementation.cpp \
        $(srcdir)/Linux_SambaGlobalForService/Linux_SambaGlobalForServiceExternal.cpp \
        $(srcdir)/Linux_SambaGlobalForService/Linux_SambaGlobalForServiceFactory.cpp \
        $(srcdir)/Linux_SambaGlobalForService/Linux_SambaGlobalForServiceInstance.cpp \
        $(srcdir)/Linux_SambaGlobalForService/Linux_SambaGlobalForServiceInstanceName.cpp \
        $(srcdir)/Linux_SambaGlobalForService/Linux_SambaGlobalForServiceManualInstance.cpp \
        $(srcdir)/Linux_SambaGlobalForService/Linux_SambaGlobalForServiceRepositoryExternal.cpp \
        $(srcdir)/Linux_SambaGlobalForService/Linux_SambaGlobalForServiceRepositoryInstance.cpp \
        $(srcdir)/Linux_SambaGlobalForService/Linux_SambaGlobalForServiceResourceAccess.cpp

noinst_HEADERS+= \
        $(srcdir)/Linux_SambaGlobalForService/CmpiLinux_SambaGlobalForServiceProvider.h \
        $(srcdir)/Linux_SambaGlobalForService/Linux_SambaGlobalForServiceDefaultImplementation.h \
        $(srcdir)/Linux_SambaGlobalForService/Linux_SambaGlobalForServiceExternal.h \
        $(srcdir)/Linux_SambaGlobalForService/Linux_SambaGlobalForServiceFactory.h \
        $(srcdir)/Linux_SambaGlobalForService/Linux_SambaGlobalForServiceInstance.h \
        $(srcdir)/Linux_SambaGlobalForService/Linux_SambaGlobalForServiceInstanceName.h \
        $(srcdir)/Linux_SambaGlobalForService/Linux_SambaGlobalForServiceInterface.h \
        $(srcdir)/Linux_SambaGlobalForService/Linux_SambaGlobalForServiceManualInstance.h \
        $(srcdir)/Linux_SambaGlobalForService/Linux_SambaGlobalForServiceRepositoryExternal.h \
        $(srcdir)/Linux_SambaGlobalForService/Linux_SambaGlobalForServiceRepositoryInstance.h \
        $(srcdir)/Linux_SambaGlobalForService/Linux_SambaGlobalForServiceResourceAccess.h

libcmpiLinux_SambaGlobalForService_la_LIBADD = \
        -L../resource-access\
        -lRaToolsSmb \
        -lIBM_SmbProviderTooling \
        -lLinux_SmbGeneralProviderBasic \
        -lcmpiLinux_SambaGlobalOptions \
        -lcmpiLinux_SambaService \
        -lcmpiCIM_ConcreteJob

libcmpiLinux_SambaGlobalForService_la_CPPFLAGS = \
        -D_COMPILE_UNIX -DCMPI_STANDALONE \
		-I$(srcdir)/../resource-access \
		-I$(srcdir)/include \
		-I$(srcdir)/CIM_ConcreteJob \
        -I$(srcdir)/Linux_SambaGlobalOptions \
        -I$(srcdir)/Linux_SambaService



################################################################################
# Linux_SambaGlobalOptions
libcmpiLinux_SambaGlobalOptions_la_SOURCES = \
        $(srcdir)/Linux_SambaGlobalOptions/CmpiLinux_SambaGlobalOptionsProvider.cpp \
        $(srcdir)/Linux_SambaGlobalOptions/Linux_SambaGlobalOptionsDefaultImplementation.cpp \
        $(srcdir)/Linux_SambaGlobalOptions/Linux_SambaGlobalOptionsExternal.cpp \
        $(srcdir)/Linux_SambaGlobalOptions/Linux_SambaGlobalOptionsFactory.cpp \
        $(srcdir)/Linux_SambaGlobalOptions/Linux_SambaGlobalOptionsInstance.cpp \
        $(srcdir)/Linux_SambaGlobalOptions/Linux_SambaGlobalOptionsInstanceName.cpp \
        $(srcdir)/Linux_SambaGlobalOptions/Linux_SambaGlobalOptionsManualInstance.cpp \
        $(srcdir)/Linux_SambaGlobalOptions/Linux_SambaGlobalOptionsRepositoryExternal.cpp \
        $(srcdir)/Linux_SambaGlobalOptions/Linux_SambaGlobalOptionsRepositoryInstance.cpp \
        $(srcdir)/Linux_SambaGlobalOptions/Linux_SambaGlobalOptionsResourceAccess.cpp

noinst_HEADERS+= \
        $(srcdir)/Linux_SambaGlobalOptions/CmpiLinux_SambaGlobalOptionsProvider.h \
        $(srcdir)/Linux_SambaGlobalOptions/Linux_SambaGlobalOptionsDefaultImplementation.h \
        $(srcdir)/Linux_SambaGlobalOptions/Linux_SambaGlobalOptionsExternal.h \
        $(srcdir)/Linux_SambaGlobalOptions/Linux_SambaGlobalOptionsFactory.h \
        $(srcdir)/Linux_SambaGlobalOptions/Linux_SambaGlobalOptionsInstance.h \
        $(srcdir)/Linux_SambaGlobalOptions/Linux_SambaGlobalOptionsInstanceName.h \
        $(srcdir)/Linux_SambaGlobalOptions/Linux_SambaGlobalOptionsInterface.h \
        $(srcdir)/Linux_SambaGlobalOptions/Linux_SambaGlobalOptionsManualInstance.h \
        $(srcdir)/Linux_SambaGlobalOptions/Linux_SambaGlobalOptionsRepositoryExternal.h \
        $(srcdir)/Linux_SambaGlobalOptions/Linux_SambaGlobalOptionsRepositoryInstance.h \
        $(srcdir)/Linux_SambaGlobalOptions/Linux_SambaGlobalOptionsResourceAccess.h

libcmpiLinux_SambaGlobalOptions_la_LIBADD = \
        -L../resource-access\
        -lRaToolsSmb \
        -lIBM_SmbProviderTooling \
        -lLinux_SmbGeneralProviderBasic \
        -lcmpiCIM_ConcreteJob

libcmpiLinux_SambaGlobalOptions_la_CPPFLAGS = \
        -D_COMPILE_UNIX -DCMPI_STANDALONE \
		-I$(srcdir)/../resource-access \
		-I$(srcdir)/include \
		-I$(srcdir)/CIM_ConcreteJob 



################################################################################
# Linux_SambaGlobalPrintingForGlobal
libcmpiLinux_SambaGlobalPrintingForGlobal_la_SOURCES = \
        $(srcdir)/Linux_SambaGlobalPrintingForGlobal/CmpiLinux_SambaGlobalPrintingForGlobalProvider.cpp \
        $(srcdir)/Linux_SambaGlobalPrintingForGlobal/Linux_SambaGlobalPrintingForGlobalDefaultImplementation.cpp \
        $(srcdir)/Linux_SambaGlobalPrintingForGlobal/Linux_SambaGlobalPrintingForGlobalExternal.cpp \
        $(srcdir)/Linux_SambaGlobalPrintingForGlobal/Linux_SambaGlobalPrintingForGlobalFactory.cpp \
        $(srcdir)/Linux_SambaGlobalPrintingForGlobal/Linux_SambaGlobalPrintingForGlobalInstance.cpp \
        $(srcdir)/Linux_SambaGlobalPrintingForGlobal/Linux_SambaGlobalPrintingForGlobalInstanceName.cpp \
        $(srcdir)/Linux_SambaGlobalPrintingForGlobal/Linux_SambaGlobalPrintingForGlobalManualInstance.cpp \
        $(srcdir)/Linux_SambaGlobalPrintingForGlobal/Linux_SambaGlobalPrintingForGlobalRepositoryExternal.cpp \
        $(srcdir)/Linux_SambaGlobalPrintingForGlobal/Linux_SambaGlobalPrintingForGlobalRepositoryInstance.cpp \
        $(srcdir)/Linux_SambaGlobalPrintingForGlobal/Linux_SambaGlobalPrintingForGlobalResourceAccess.cpp

noinst_HEADERS+= \
        $(srcdir)/Linux_SambaGlobalPrintingForGlobal/CmpiLinux_SambaGlobalPrintingForGlobalProvider.h \
        $(srcdir)/Linux_SambaGlobalPrintingForGlobal/Linux_SambaGlobalPrintingForGlobalDefaultImplementation.h \
        $(srcdir)/Linux_SambaGlobalPrintingForGlobal/Linux_SambaGlobalPrintingForGlobalExternal.h \
        $(srcdir)/Linux_SambaGlobalPrintingForGlobal/Linux_SambaGlobalPrintingForGlobalFactory.h \
        $(srcdir)/Linux_SambaGlobalPrintingForGlobal/Linux_SambaGlobalPrintingForGlobalInstance.h \
        $(srcdir)/Linux_SambaGlobalPrintingForGlobal/Linux_SambaGlobalPrintingForGlobalInstanceName.h \
        $(srcdir)/Linux_SambaGlobalPrintingForGlobal/Linux_SambaGlobalPrintingForGlobalInterface.h \
        $(srcdir)/Linux_SambaGlobalPrintingForGlobal/Linux_SambaGlobalPrintingForGlobalManualInstance.h \
        $(srcdir)/Linux_SambaGlobalPrintingForGlobal/Linux_SambaGlobalPrintingForGlobalRepositoryExternal.h \
        $(srcdir)/Linux_SambaGlobalPrintingForGlobal/Linux_SambaGlobalPrintingForGlobalRepositoryInstance.h \
        $(srcdir)/Linux_SambaGlobalPrintingForGlobal/Linux_SambaGlobalPrintingForGlobalResourceAccess.h

libcmpiLinux_SambaGlobalPrintingForGlobal_la_LIBADD = \
        -L../resource-access\
        -lRaToolsSmb \
        -lIBM_SmbProviderTooling \
        -lLinux_SmbGeneralProviderBasic \
        -lcmpiLinux_SambaGlobalOptions \
        -lcmpiLinux_SambaGlobalPrintingOptions \
        -lcmpiCIM_ConcreteJob

libcmpiLinux_SambaGlobalPrintingForGlobal_la_CPPFLAGS = \
        -D_COMPILE_UNIX -DCMPI_STANDALONE \
		-I$(srcdir)/../resource-access \
		-I$(srcdir)/include \
		-I$(srcdir)/CIM_ConcreteJob \
        -I$(srcdir)/Linux_SambaGlobalOptions \
        -I$(srcdir)/Linux_SambaGlobalPrintingOptions



################################################################################
# Linux_SambaGlobalPrintingOptions
libcmpiLinux_SambaGlobalPrintingOptions_la_SOURCES = \
        $(srcdir)/Linux_SambaGlobalPrintingOptions/CmpiLinux_SambaGlobalPrintingOptionsProvider.cpp \
        $(srcdir)/Linux_SambaGlobalPrintingOptions/Linux_SambaGlobalPrintingOptionsDefaultImplementation.cpp \
        $(srcdir)/Linux_SambaGlobalPrintingOptions/Linux_SambaGlobalPrintingOptionsExternal.cpp \
        $(srcdir)/Linux_SambaGlobalPrintingOptions/Linux_SambaGlobalPrintingOptionsFactory.cpp \
        $(srcdir)/Linux_SambaGlobalPrintingOptions/Linux_SambaGlobalPrintingOptionsInstance.cpp \
        $(srcdir)/Linux_SambaGlobalPrintingOptions/Linux_SambaGlobalPrintingOptionsInstanceName.cpp \
        $(srcdir)/Linux_SambaGlobalPrintingOptions/Linux_SambaGlobalPrintingOptionsManualInstance.cpp \
        $(srcdir)/Linux_SambaGlobalPrintingOptions/Linux_SambaGlobalPrintingOptionsRepositoryExternal.cpp \
        $(srcdir)/Linux_SambaGlobalPrintingOptions/Linux_SambaGlobalPrintingOptionsRepositoryInstance.cpp \
        $(srcdir)/Linux_SambaGlobalPrintingOptions/Linux_SambaGlobalPrintingOptionsResourceAccess.cpp

noinst_HEADERS+= \
        $(srcdir)/Linux_SambaGlobalPrintingOptions/CmpiLinux_SambaGlobalPrintingOptionsProvider.h \
        $(srcdir)/Linux_SambaGlobalPrintingOptions/Linux_SambaGlobalPrintingOptionsDefaultImplementation.h \
        $(srcdir)/Linux_SambaGlobalPrintingOptions/Linux_SambaGlobalPrintingOptionsExternal.h \
        $(srcdir)/Linux_SambaGlobalPrintingOptions/Linux_SambaGlobalPrintingOptionsFactory.h \
        $(srcdir)/Linux_SambaGlobalPrintingOptions/Linux_SambaGlobalPrintingOptionsInstance.h \
        $(srcdir)/Linux_SambaGlobalPrintingOptions/Linux_SambaGlobalPrintingOptionsInstanceName.h \
        $(srcdir)/Linux_SambaGlobalPrintingOptions/Linux_SambaGlobalPrintingOptionsInterface.h \
        $(srcdir)/Linux_SambaGlobalPrintingOptions/Linux_SambaGlobalPrintingOptionsManualInstance.h \
        $(srcdir)/Linux_SambaGlobalPrintingOptions/Linux_SambaGlobalPrintingOptionsRepositoryExternal.h \
        $(srcdir)/Linux_SambaGlobalPrintingOptions/Linux_SambaGlobalPrintingOptionsRepositoryInstance.h \
        $(srcdir)/Linux_SambaGlobalPrintingOptions/Linux_SambaGlobalPrintingOptionsResourceAccess.h

libcmpiLinux_SambaGlobalPrintingOptions_la_LIBADD = \
        -L../resource-access\
        -lRaToolsSmb \
        -lIBM_SmbProviderTooling \
        -lLinux_SmbGeneralProviderBasic \
        -lcmpiCIM_ConcreteJob

libcmpiLinux_SambaGlobalPrintingOptions_la_CPPFLAGS = \
        -D_COMPILE_UNIX -DCMPI_STANDALONE \
		-I$(srcdir)/../resource-access \
		-I$(srcdir)/include \
		-I$(srcdir)/CIM_ConcreteJob 



################################################################################
# Linux_SambaGlobalProtocolForGlobal
libcmpiLinux_SambaGlobalProtocolForGlobal_la_SOURCES = \
        $(srcdir)/Linux_SambaGlobalProtocolForGlobal/CmpiLinux_SambaGlobalProtocolForGlobalProvider.cpp \
        $(srcdir)/Linux_SambaGlobalProtocolForGlobal/Linux_SambaGlobalProtocolForGlobalDefaultImplementation.cpp \
        $(srcdir)/Linux_SambaGlobalProtocolForGlobal/Linux_SambaGlobalProtocolForGlobalExternal.cpp \
        $(srcdir)/Linux_SambaGlobalProtocolForGlobal/Linux_SambaGlobalProtocolForGlobalFactory.cpp \
        $(srcdir)/Linux_SambaGlobalProtocolForGlobal/Linux_SambaGlobalProtocolForGlobalInstance.cpp \
        $(srcdir)/Linux_SambaGlobalProtocolForGlobal/Linux_SambaGlobalProtocolForGlobalInstanceName.cpp \
        $(srcdir)/Linux_SambaGlobalProtocolForGlobal/Linux_SambaGlobalProtocolForGlobalManualInstance.cpp \
        $(srcdir)/Linux_SambaGlobalProtocolForGlobal/Linux_SambaGlobalProtocolForGlobalRepositoryExternal.cpp \
        $(srcdir)/Linux_SambaGlobalProtocolForGlobal/Linux_SambaGlobalProtocolForGlobalRepositoryInstance.cpp \
        $(srcdir)/Linux_SambaGlobalProtocolForGlobal/Linux_SambaGlobalProtocolForGlobalResourceAccess.cpp

noinst_HEADERS+= \
        $(srcdir)/Linux_SambaGlobalProtocolForGlobal/CmpiLinux_SambaGlobalProtocolForGlobalProvider.h \
        $(srcdir)/Linux_SambaGlobalProtocolForGlobal/Linux_SambaGlobalProtocolForGlobalDefaultImplementation.h \
        $(srcdir)/Linux_SambaGlobalProtocolForGlobal/Linux_SambaGlobalProtocolForGlobalExternal.h \
        $(srcdir)/Linux_SambaGlobalProtocolForGlobal/Linux_SambaGlobalProtocolForGlobalFactory.h \
        $(srcdir)/Linux_SambaGlobalProtocolForGlobal/Linux_SambaGlobalProtocolForGlobalInstance.h \
        $(srcdir)/Linux_SambaGlobalProtocolForGlobal/Linux_SambaGlobalProtocolForGlobalInstanceName.h \
        $(srcdir)/Linux_SambaGlobalProtocolForGlobal/Linux_SambaGlobalProtocolForGlobalInterface.h \
        $(srcdir)/Linux_SambaGlobalProtocolForGlobal/Linux_SambaGlobalProtocolForGlobalManualInstance.h \
        $(srcdir)/Linux_SambaGlobalProtocolForGlobal/Linux_SambaGlobalProtocolForGlobalRepositoryExternal.h \
        $(srcdir)/Linux_SambaGlobalProtocolForGlobal/Linux_SambaGlobalProtocolForGlobalRepositoryInstance.h \
        $(srcdir)/Linux_SambaGlobalProtocolForGlobal/Linux_SambaGlobalProtocolForGlobalResourceAccess.h

libcmpiLinux_SambaGlobalProtocolForGlobal_la_LIBADD = \
        -L../resource-access\
        -lRaToolsSmb \
        -lIBM_SmbProviderTooling \
        -lLinux_SmbGeneralProviderBasic \
        -lcmpiLinux_SambaGlobalOptions \
        -lcmpiLinux_SambaGlobalProtocolOptions \
        -lcmpiCIM_ConcreteJob

libcmpiLinux_SambaGlobalProtocolForGlobal_la_CPPFLAGS = \
        -D_COMPILE_UNIX -DCMPI_STANDALONE \
		-I$(srcdir)/../resource-access \
		-I$(srcdir)/include \
		-I$(srcdir)/CIM_ConcreteJob \
        -I$(srcdir)/Linux_SambaGlobalOptions \
        -I$(srcdir)/Linux_SambaGlobalProtocolOptions



################################################################################
# Linux_SambaGlobalProtocolOptions
libcmpiLinux_SambaGlobalProtocolOptions_la_SOURCES = \
        $(srcdir)/Linux_SambaGlobalProtocolOptions/CmpiLinux_SambaGlobalProtocolOptionsProvider.cpp \
        $(srcdir)/Linux_SambaGlobalProtocolOptions/Linux_SambaGlobalProtocolOptionsDefaultImplementation.cpp \
        $(srcdir)/Linux_SambaGlobalProtocolOptions/Linux_SambaGlobalProtocolOptionsExternal.cpp \
        $(srcdir)/Linux_SambaGlobalProtocolOptions/Linux_SambaGlobalProtocolOptionsFactory.cpp \
        $(srcdir)/Linux_SambaGlobalProtocolOptions/Linux_SambaGlobalProtocolOptionsInstance.cpp \
        $(srcdir)/Linux_SambaGlobalProtocolOptions/Linux_SambaGlobalProtocolOptionsInstanceName.cpp \
        $(srcdir)/Linux_SambaGlobalProtocolOptions/Linux_SambaGlobalProtocolOptionsManualInstance.cpp \
        $(srcdir)/Linux_SambaGlobalProtocolOptions/Linux_SambaGlobalProtocolOptionsRepositoryExternal.cpp \
        $(srcdir)/Linux_SambaGlobalProtocolOptions/Linux_SambaGlobalProtocolOptionsRepositoryInstance.cpp \
        $(srcdir)/Linux_SambaGlobalProtocolOptions/Linux_SambaGlobalProtocolOptionsResourceAccess.cpp

noinst_HEADERS+= \
        $(srcdir)/Linux_SambaGlobalProtocolOptions/CmpiLinux_SambaGlobalProtocolOptionsProvider.h \
        $(srcdir)/Linux_SambaGlobalProtocolOptions/Linux_SambaGlobalProtocolOptionsDefaultImplementation.h \
        $(srcdir)/Linux_SambaGlobalProtocolOptions/Linux_SambaGlobalProtocolOptionsExternal.h \
        $(srcdir)/Linux_SambaGlobalProtocolOptions/Linux_SambaGlobalProtocolOptionsFactory.h \
        $(srcdir)/Linux_SambaGlobalProtocolOptions/Linux_SambaGlobalProtocolOptionsInstance.h \
        $(srcdir)/Linux_SambaGlobalProtocolOptions/Linux_SambaGlobalProtocolOptionsInstanceName.h \
        $(srcdir)/Linux_SambaGlobalProtocolOptions/Linux_SambaGlobalProtocolOptionsInterface.h \
        $(srcdir)/Linux_SambaGlobalProtocolOptions/Linux_SambaGlobalProtocolOptionsManualInstance.h \
        $(srcdir)/Linux_SambaGlobalProtocolOptions/Linux_SambaGlobalProtocolOptionsRepositoryExternal.h \
        $(srcdir)/Linux_SambaGlobalProtocolOptions/Linux_SambaGlobalProtocolOptionsRepositoryInstance.h \
        $(srcdir)/Linux_SambaGlobalProtocolOptions/Linux_SambaGlobalProtocolOptionsResourceAccess.h

libcmpiLinux_SambaGlobalProtocolOptions_la_LIBADD = \
        -L../resource-access\
        -lRaToolsSmb \
        -lIBM_SmbProviderTooling \
        -lLinux_SmbGeneralProviderBasic \
        -lcmpiCIM_ConcreteJob

libcmpiLinux_SambaGlobalProtocolOptions_la_CPPFLAGS = \
        -D_COMPILE_UNIX -DCMPI_STANDALONE \
		-I$(srcdir)/../resource-access \
		-I$(srcdir)/include \
		-I$(srcdir)/CIM_ConcreteJob 



################################################################################
# Linux_SambaGlobalSecurityForGlobal
libcmpiLinux_SambaGlobalSecurityForGlobal_la_SOURCES = \
        $(srcdir)/Linux_SambaGlobalSecurityForGlobal/CmpiLinux_SambaGlobalSecurityForGlobalProvider.cpp \
        $(srcdir)/Linux_SambaGlobalSecurityForGlobal/Linux_SambaGlobalSecurityForGlobalDefaultImplementation.cpp \
        $(srcdir)/Linux_SambaGlobalSecurityForGlobal/Linux_SambaGlobalSecurityForGlobalExternal.cpp \
        $(srcdir)/Linux_SambaGlobalSecurityForGlobal/Linux_SambaGlobalSecurityForGlobalFactory.cpp \
        $(srcdir)/Linux_SambaGlobalSecurityForGlobal/Linux_SambaGlobalSecurityForGlobalInstance.cpp \
        $(srcdir)/Linux_SambaGlobalSecurityForGlobal/Linux_SambaGlobalSecurityForGlobalInstanceName.cpp \
        $(srcdir)/Linux_SambaGlobalSecurityForGlobal/Linux_SambaGlobalSecurityForGlobalManualInstance.cpp \
        $(srcdir)/Linux_SambaGlobalSecurityForGlobal/Linux_SambaGlobalSecurityForGlobalRepositoryExternal.cpp \
        $(srcdir)/Linux_SambaGlobalSecurityForGlobal/Linux_SambaGlobalSecurityForGlobalRepositoryInstance.cpp \
        $(srcdir)/Linux_SambaGlobalSecurityForGlobal/Linux_SambaGlobalSecurityForGlobalResourceAccess.cpp

noinst_HEADERS+= \
        $(srcdir)/Linux_SambaGlobalSecurityForGlobal/CmpiLinux_SambaGlobalSecurityForGlobalProvider.h \
        $(srcdir)/Linux_SambaGlobalSecurityForGlobal/Linux_SambaGlobalSecurityForGlobalDefaultImplementation.h \
        $(srcdir)/Linux_SambaGlobalSecurityForGlobal/Linux_SambaGlobalSecurityForGlobalExternal.h \
        $(srcdir)/Linux_SambaGlobalSecurityForGlobal/Linux_SambaGlobalSecurityForGlobalFactory.h \
        $(srcdir)/Linux_SambaGlobalSecurityForGlobal/Linux_SambaGlobalSecurityForGlobalInstance.h \
        $(srcdir)/Linux_SambaGlobalSecurityForGlobal/Linux_SambaGlobalSecurityForGlobalInstanceName.h \
        $(srcdir)/Linux_SambaGlobalSecurityForGlobal/Linux_SambaGlobalSecurityForGlobalInterface.h \
        $(srcdir)/Linux_SambaGlobalSecurityForGlobal/Linux_SambaGlobalSecurityForGlobalManualInstance.h \
        $(srcdir)/Linux_SambaGlobalSecurityForGlobal/Linux_SambaGlobalSecurityForGlobalRepositoryExternal.h \
        $(srcdir)/Linux_SambaGlobalSecurityForGlobal/Linux_SambaGlobalSecurityForGlobalRepositoryInstance.h \
        $(srcdir)/Linux_SambaGlobalSecurityForGlobal/Linux_SambaGlobalSecurityForGlobalResourceAccess.h

libcmpiLinux_SambaGlobalSecurityForGlobal_la_LIBADD = \
        -L../resource-access\
        -lRaToolsSmb \
        -lIBM_SmbProviderTooling \
        -lLinux_SmbGeneralProviderBasic \
        -lcmpiLinux_SambaGlobalOptions \
        -lcmpiLinux_SambaGlobalSecurityOptions \
        -lcmpiCIM_ConcreteJob

libcmpiLinux_SambaGlobalSecurityForGlobal_la_CPPFLAGS = \
        -D_COMPILE_UNIX -DCMPI_STANDALONE \
		-I$(srcdir)/../resource-access \
		-I$(srcdir)/include \
		-I$(srcdir)/CIM_ConcreteJob \
        -I$(srcdir)/Linux_SambaGlobalOptions \
        -I$(srcdir)/Linux_SambaGlobalSecurityOptions



################################################################################
# Linux_SambaGlobalSecurityOptions
libcmpiLinux_SambaGlobalSecurityOptions_la_SOURCES = \
        $(srcdir)/Linux_SambaGlobalSecurityOptions/CmpiLinux_SambaGlobalSecurityOptionsProvider.cpp \
        $(srcdir)/Linux_SambaGlobalSecurityOptions/Linux_SambaGlobalSecurityOptionsDefaultImplementation.cpp \
        $(srcdir)/Linux_SambaGlobalSecurityOptions/Linux_SambaGlobalSecurityOptionsExternal.cpp \
        $(srcdir)/Linux_SambaGlobalSecurityOptions/Linux_SambaGlobalSecurityOptionsFactory.cpp \
        $(srcdir)/Linux_SambaGlobalSecurityOptions/Linux_SambaGlobalSecurityOptionsInstance.cpp \
        $(srcdir)/Linux_SambaGlobalSecurityOptions/Linux_SambaGlobalSecurityOptionsInstanceName.cpp \
        $(srcdir)/Linux_SambaGlobalSecurityOptions/Linux_SambaGlobalSecurityOptionsManualInstance.cpp \
        $(srcdir)/Linux_SambaGlobalSecurityOptions/Linux_SambaGlobalSecurityOptionsRepositoryExternal.cpp \
        $(srcdir)/Linux_SambaGlobalSecurityOptions/Linux_SambaGlobalSecurityOptionsRepositoryInstance.cpp \
        $(srcdir)/Linux_SambaGlobalSecurityOptions/Linux_SambaGlobalSecurityOptionsResourceAccess.cpp

noinst_HEADERS+= \
        $(srcdir)/Linux_SambaGlobalSecurityOptions/CmpiLinux_SambaGlobalSecurityOptionsProvider.h \
        $(srcdir)/Linux_SambaGlobalSecurityOptions/Linux_SambaGlobalSecurityOptionsDefaultImplementation.h \
        $(srcdir)/Linux_SambaGlobalSecurityOptions/Linux_SambaGlobalSecurityOptionsExternal.h \
        $(srcdir)/Linux_SambaGlobalSecurityOptions/Linux_SambaGlobalSecurityOptionsFactory.h \
        $(srcdir)/Linux_SambaGlobalSecurityOptions/Linux_SambaGlobalSecurityOptionsInstance.h \
        $(srcdir)/Linux_SambaGlobalSecurityOptions/Linux_SambaGlobalSecurityOptionsInstanceName.h \
        $(srcdir)/Linux_SambaGlobalSecurityOptions/Linux_SambaGlobalSecurityOptionsInterface.h \
        $(srcdir)/Linux_SambaGlobalSecurityOptions/Linux_SambaGlobalSecurityOptionsManualInstance.h \
        $(srcdir)/Linux_SambaGlobalSecurityOptions/Linux_SambaGlobalSecurityOptionsRepositoryExternal.h \
        $(srcdir)/Linux_SambaGlobalSecurityOptions/Linux_SambaGlobalSecurityOptionsRepositoryInstance.h \
        $(srcdir)/Linux_SambaGlobalSecurityOptions/Linux_SambaGlobalSecurityOptionsResourceAccess.h

libcmpiLinux_SambaGlobalSecurityOptions_la_LIBADD = \
        -L../resource-access\
        -lRaToolsSmb \
        -lIBM_SmbProviderTooling \
        -lLinux_SmbGeneralProviderBasic \
        -lcmpiCIM_ConcreteJob

libcmpiLinux_SambaGlobalSecurityOptions_la_CPPFLAGS = \
        -D_COMPILE_UNIX -DCMPI_STANDALONE \
		-I$(srcdir)/../resource-access \
		-I$(srcdir)/include \
		-I$(srcdir)/CIM_ConcreteJob 



################################################################################
# Linux_SambaGroup
libcmpiLinux_SambaGroup_la_SOURCES = \
        $(srcdir)/Linux_SambaGroup/CmpiLinux_SambaGroupProvider.cpp \
        $(srcdir)/Linux_SambaGroup/Linux_SambaGroupDefaultImplementation.cpp \
        $(srcdir)/Linux_SambaGroup/Linux_SambaGroupExternal.cpp \
        $(srcdir)/Linux_SambaGroup/Linux_SambaGroupFactory.cpp \
        $(srcdir)/Linux_SambaGroup/Linux_SambaGroupInstance.cpp \
        $(srcdir)/Linux_SambaGroup/Linux_SambaGroupInstanceName.cpp \
        $(srcdir)/Linux_SambaGroup/Linux_SambaGroupManualInstance.cpp \
        $(srcdir)/Linux_SambaGroup/Linux_SambaGroupRepositoryExternal.cpp \
        $(srcdir)/Linux_SambaGroup/Linux_SambaGroupRepositoryInstance.cpp \
        $(srcdir)/Linux_SambaGroup/Linux_SambaGroupResourceAccess.cpp

noinst_HEADERS+= \
        $(srcdir)/Linux_SambaGroup/CmpiLinux_SambaGroupProvider.h \
        $(srcdir)/Linux_SambaGroup/Linux_SambaGroupDefaultImplementation.h \
        $(srcdir)/Linux_SambaGroup/Linux_SambaGroupExternal.h \
        $(srcdir)/Linux_SambaGroup/Linux_SambaGroupFactory.h \
        $(srcdir)/Linux_SambaGroup/Linux_SambaGroupInstance.h \
        $(srcdir)/Linux_SambaGroup/Linux_SambaGroupInstanceName.h \
        $(srcdir)/Linux_SambaGroup/Linux_SambaGroupInterface.h \
        $(srcdir)/Linux_SambaGroup/Linux_SambaGroupManualInstance.h \
        $(srcdir)/Linux_SambaGroup/Linux_SambaGroupRepositoryExternal.h \
        $(srcdir)/Linux_SambaGroup/Linux_SambaGroupRepositoryInstance.h \
        $(srcdir)/Linux_SambaGroup/Linux_SambaGroupResourceAccess.h

libcmpiLinux_SambaGroup_la_LIBADD = \
        -L../resource-access\
        -lRaToolsSmb \
        -lIBM_SmbProviderTooling \
        -lLinux_SmbGeneralProviderBasic \
        -lcmpiCIM_ConcreteJob

libcmpiLinux_SambaGroup_la_CPPFLAGS = \
        -D_COMPILE_UNIX -DCMPI_STANDALONE \
		-I$(srcdir)/../resource-access \
		-I$(srcdir)/include \
		-I$(srcdir)/CIM_ConcreteJob 



################################################################################
# Linux_SambaGroupForUser
libcmpiLinux_SambaGroupForUser_la_SOURCES = \
        $(srcdir)/Linux_SambaGroupForUser/CmpiLinux_SambaGroupForUserProvider.cpp \
        $(srcdir)/Linux_SambaGroupForUser/Linux_SambaGroupForUserDefaultImplementation.cpp \
        $(srcdir)/Linux_SambaGroupForUser/Linux_SambaGroupForUserExternal.cpp \
        $(srcdir)/Linux_SambaGroupForUser/Linux_SambaGroupForUserFactory.cpp \
        $(srcdir)/Linux_SambaGroupForUser/Linux_SambaGroupForUserInstance.cpp \
        $(srcdir)/Linux_SambaGroupForUser/Linux_SambaGroupForUserInstanceName.cpp \
        $(srcdir)/Linux_SambaGroupForUser/Linux_SambaGroupForUserManualInstance.cpp \
        $(srcdir)/Linux_SambaGroupForUser/Linux_SambaGroupForUserRepositoryExternal.cpp \
        $(srcdir)/Linux_SambaGroupForUser/Linux_SambaGroupForUserRepositoryInstance.cpp \
        $(srcdir)/Linux_SambaGroupForUser/Linux_SambaGroupForUserResourceAccess.cpp

noinst_HEADERS+= \
        $(srcdir)/Linux_SambaGroupForUser/CmpiLinux_SambaGroupForUserProvider.h \
        $(srcdir)/Linux_SambaGroupForUser/Linux_SambaGroupForUserDefaultImplementation.h \
        $(srcdir)/Linux_SambaGroupForUser/Linux_SambaGroupForUserExternal.h \
        $(srcdir)/Linux_SambaGroupForUser/Linux_SambaGroupForUserFactory.h \
        $(srcdir)/Linux_SambaGroupForUser/Linux_SambaGroupForUserInstance.h \
        $(srcdir)/Linux_SambaGroupForUser/Linux_SambaGroupForUserInstanceName.h \
        $(srcdir)/Linux_SambaGroupForUser/Linux_SambaGroupForUserInterface.h \
        $(srcdir)/Linux_SambaGroupForUser/Linux_SambaGroupForUserManualInstance.h \
        $(srcdir)/Linux_SambaGroupForUser/Linux_SambaGroupForUserRepositoryExternal.h \
        $(srcdir)/Linux_SambaGroupForUser/Linux_SambaGroupForUserRepositoryInstance.h \
        $(srcdir)/Linux_SambaGroupForUser/Linux_SambaGroupForUserResourceAccess.h 

libcmpiLinux_SambaGroupForUser_la_LIBADD = \
        -L../resource-access\
        -lRaToolsSmb \
        -lIBM_SmbProviderTooling \
        -lLinux_SmbGeneralProviderBasic \
        -lcmpiLinux_SambaGroup \
        -lcmpiLinux_SambaUser \
        -lcmpiCIM_ConcreteJob

libcmpiLinux_SambaGroupForUser_la_CPPFLAGS = \
        -D_COMPILE_UNIX -DCMPI_STANDALONE \
		-I$(srcdir)/../resource-access \
		-I$(srcdir)/include \
		-I$(srcdir)/CIM_ConcreteJob \
        -I$(srcdir)/Linux_SambaGroup \
        -I$(srcdir)/Linux_SambaUser



################################################################################
# Linux_SambaGuestAccountForGlobal
libcmpiLinux_SambaGuestAccountForGlobal_la_SOURCES = \
        $(srcdir)/Linux_SambaGuestAccountForGlobal/CmpiLinux_SambaGuestAccountForGlobalProvider.cpp \
        $(srcdir)/Linux_SambaGuestAccountForGlobal/Linux_SambaGuestAccountForGlobalDefaultImplementation.cpp \
        $(srcdir)/Linux_SambaGuestAccountForGlobal/Linux_SambaGuestAccountForGlobalExternal.cpp \
        $(srcdir)/Linux_SambaGuestAccountForGlobal/Linux_SambaGuestAccountForGlobalFactory.cpp \
        $(srcdir)/Linux_SambaGuestAccountForGlobal/Linux_SambaGuestAccountForGlobalInstance.cpp \
        $(srcdir)/Linux_SambaGuestAccountForGlobal/Linux_SambaGuestAccountForGlobalInstanceName.cpp \
        $(srcdir)/Linux_SambaGuestAccountForGlobal/Linux_SambaGuestAccountForGlobalManualInstance.cpp \
        $(srcdir)/Linux_SambaGuestAccountForGlobal/Linux_SambaGuestAccountForGlobalRepositoryExternal.cpp \
        $(srcdir)/Linux_SambaGuestAccountForGlobal/Linux_SambaGuestAccountForGlobalRepositoryInstance.cpp \
        $(srcdir)/Linux_SambaGuestAccountForGlobal/Linux_SambaGuestAccountForGlobalResourceAccess.cpp

noinst_HEADERS+= \
        $(srcdir)/Linux_SambaGuestAccountForGlobal/CmpiLinux_SambaGuestAccountForGlobalProvider.h \
        $(srcdir)/Linux_SambaGuestAccountForGlobal/Linux_SambaGuestAccountForGlobalDefaultImplementation.h \
        $(srcdir)/Linux_SambaGuestAccountForGlobal/Linux_SambaGuestAccountForGlobalExternal.h \
        $(srcdir)/Linux_SambaGuestAccountForGlobal/Linux_SambaGuestAccountForGlobalFactory.h \
        $(srcdir)/Linux_SambaGuestAccountForGlobal/Linux_SambaGuestAccountForGlobalInstance.h \
        $(srcdir)/Linux_SambaGuestAccountForGlobal/Linux_SambaGuestAccountForGlobalInstanceName.h \
        $(srcdir)/Linux_SambaGuestAccountForGlobal/Linux_SambaGuestAccountForGlobalInterface.h \
        $(srcdir)/Linux_SambaGuestAccountForGlobal/Linux_SambaGuestAccountForGlobalManualInstance.h \
        $(srcdir)/Linux_SambaGuestAccountForGlobal/Linux_SambaGuestAccountForGlobalRepositoryExternal.h \
        $(srcdir)/Linux_SambaGuestAccountForGlobal/Linux_SambaGuestAccountForGlobalRepositoryInstance.h \
        $(srcdir)/Linux_SambaGuestAccountForGlobal/Linux_SambaGuestAccountForGlobalResourceAccess.h

libcmpiLinux_SambaGuestAccountForGlobal_la_LIBADD = \
        -L../resource-access\
        -lRaToolsSmb \
        -lIBM_SmbProviderTooling \
        -lLinux_SmbGeneralProviderBasic \
        -lcmpiLinux_SambaGlobalOptions \
        -lcmpiLinux_SambaUser \
        -lcmpiCIM_ConcreteJob

libcmpiLinux_SambaGuestAccountForGlobal_la_CPPFLAGS = \
        -D_COMPILE_UNIX -DCMPI_STANDALONE \
		-I$(srcdir)/../resource-access \
		-I$(srcdir)/include \
		-I$(srcdir)/CIM_ConcreteJob \
        -I$(srcdir)/Linux_SambaGlobalOptions \
        -I$(srcdir)/Linux_SambaUser



################################################################################
# Linux_SambaInvalidUsersForGlobal
libcmpiLinux_SambaInvalidUsersForGlobal_la_SOURCES = \
        $(srcdir)/Linux_SambaInvalidUsersForGlobal/CmpiLinux_SambaInvalidUsersForGlobalProvider.cpp \
        $(srcdir)/Linux_SambaInvalidUsersForGlobal/Linux_SambaInvalidUsersForGlobalDefaultImplementation.cpp \
        $(srcdir)/Linux_SambaInvalidUsersForGlobal/Linux_SambaInvalidUsersForGlobalExternal.cpp \
        $(srcdir)/Linux_SambaInvalidUsersForGlobal/Linux_SambaInvalidUsersForGlobalFactory.cpp \
        $(srcdir)/Linux_SambaInvalidUsersForGlobal/Linux_SambaInvalidUsersForGlobalInstance.cpp \
        $(srcdir)/Linux_SambaInvalidUsersForGlobal/Linux_SambaInvalidUsersForGlobalInstanceName.cpp \
        $(srcdir)/Linux_SambaInvalidUsersForGlobal/Linux_SambaInvalidUsersForGlobalManualInstance.cpp \
        $(srcdir)/Linux_SambaInvalidUsersForGlobal/Linux_SambaInvalidUsersForGlobalRepositoryExternal.cpp \
        $(srcdir)/Linux_SambaInvalidUsersForGlobal/Linux_SambaInvalidUsersForGlobalRepositoryInstance.cpp \
        $(srcdir)/Linux_SambaInvalidUsersForGlobal/Linux_SambaInvalidUsersForGlobalResourceAccess.cpp

noinst_HEADERS+= \
        $(srcdir)/Linux_SambaInvalidUsersForGlobal/CmpiLinux_SambaInvalidUsersForGlobalProvider.h \
        $(srcdir)/Linux_SambaInvalidUsersForGlobal/Linux_SambaInvalidUsersForGlobalDefaultImplementation.h \
        $(srcdir)/Linux_SambaInvalidUsersForGlobal/Linux_SambaInvalidUsersForGlobalExternal.h \
        $(srcdir)/Linux_SambaInvalidUsersForGlobal/Linux_SambaInvalidUsersForGlobalFactory.h \
        $(srcdir)/Linux_SambaInvalidUsersForGlobal/Linux_SambaInvalidUsersForGlobalInstance.h \
        $(srcdir)/Linux_SambaInvalidUsersForGlobal/Linux_SambaInvalidUsersForGlobalInstanceName.h \
        $(srcdir)/Linux_SambaInvalidUsersForGlobal/Linux_SambaInvalidUsersForGlobalInterface.h \
        $(srcdir)/Linux_SambaInvalidUsersForGlobal/Linux_SambaInvalidUsersForGlobalManualInstance.h \
        $(srcdir)/Linux_SambaInvalidUsersForGlobal/Linux_SambaInvalidUsersForGlobalRepositoryExternal.h \
        $(srcdir)/Linux_SambaInvalidUsersForGlobal/Linux_SambaInvalidUsersForGlobalRepositoryInstance.h \
        $(srcdir)/Linux_SambaInvalidUsersForGlobal/Linux_SambaInvalidUsersForGlobalResourceAccess.h

libcmpiLinux_SambaInvalidUsersForGlobal_la_LIBADD = \
        -L../resource-access\
        -lRaToolsSmb \
        -lIBM_SmbProviderTooling \
        -lLinux_SmbGeneralProviderBasic \
        -lcmpiLinux_SambaGlobalOptions \
        -lcmpiLinux_SambaUser \
        -lcmpiCIM_ConcreteJob

libcmpiLinux_SambaInvalidUsersForGlobal_la_CPPFLAGS = \
        -D_COMPILE_UNIX -DCMPI_STANDALONE \
		-I$(srcdir)/../resource-access \
		-I$(srcdir)/include \
		-I$(srcdir)/CIM_ConcreteJob \
        -I$(srcdir)/Linux_SambaGlobalOptions \
        -I$(srcdir)/Linux_SambaUser



################################################################################
# Linux_SambaInvalidUsersForPrinter
libcmpiLinux_SambaInvalidUsersForPrinter_la_SOURCES = \
        $(srcdir)/Linux_SambaInvalidUsersForPrinter/CmpiLinux_SambaInvalidUsersForPrinterProvider.cpp \
        $(srcdir)/Linux_SambaInvalidUsersForPrinter/Linux_SambaInvalidUsersForPrinterDefaultImplementation.cpp \
        $(srcdir)/Linux_SambaInvalidUsersForPrinter/Linux_SambaInvalidUsersForPrinterExternal.cpp \
        $(srcdir)/Linux_SambaInvalidUsersForPrinter/Linux_SambaInvalidUsersForPrinterFactory.cpp \
        $(srcdir)/Linux_SambaInvalidUsersForPrinter/Linux_SambaInvalidUsersForPrinterInstance.cpp \
        $(srcdir)/Linux_SambaInvalidUsersForPrinter/Linux_SambaInvalidUsersForPrinterInstanceName.cpp \
        $(srcdir)/Linux_SambaInvalidUsersForPrinter/Linux_SambaInvalidUsersForPrinterManualInstance.cpp \
        $(srcdir)/Linux_SambaInvalidUsersForPrinter/Linux_SambaInvalidUsersForPrinterRepositoryExternal.cpp \
        $(srcdir)/Linux_SambaInvalidUsersForPrinter/Linux_SambaInvalidUsersForPrinterRepositoryInstance.cpp \
        $(srcdir)/Linux_SambaInvalidUsersForPrinter/Linux_SambaInvalidUsersForPrinterResourceAccess.cpp

noinst_HEADERS+= \
        $(srcdir)/Linux_SambaInvalidUsersForPrinter/CmpiLinux_SambaInvalidUsersForPrinterProvider.h \
        $(srcdir)/Linux_SambaInvalidUsersForPrinter/Linux_SambaInvalidUsersForPrinterDefaultImplementation.h \
        $(srcdir)/Linux_SambaInvalidUsersForPrinter/Linux_SambaInvalidUsersForPrinterExternal.h \
        $(srcdir)/Linux_SambaInvalidUsersForPrinter/Linux_SambaInvalidUsersForPrinterFactory.h \
        $(srcdir)/Linux_SambaInvalidUsersForPrinter/Linux_SambaInvalidUsersForPrinterInstance.h \
        $(srcdir)/Linux_SambaInvalidUsersForPrinter/Linux_SambaInvalidUsersForPrinterInstanceName.h \
        $(srcdir)/Linux_SambaInvalidUsersForPrinter/Linux_SambaInvalidUsersForPrinterInterface.h \
        $(srcdir)/Linux_SambaInvalidUsersForPrinter/Linux_SambaInvalidUsersForPrinterManualInstance.h \
        $(srcdir)/Linux_SambaInvalidUsersForPrinter/Linux_SambaInvalidUsersForPrinterRepositoryExternal.h \
        $(srcdir)/Linux_SambaInvalidUsersForPrinter/Linux_SambaInvalidUsersForPrinterRepositoryInstance.h \
        $(srcdir)/Linux_SambaInvalidUsersForPrinter/Linux_SambaInvalidUsersForPrinterResourceAccess.h

libcmpiLinux_SambaInvalidUsersForPrinter_la_LIBADD = \
        -L../resource-access\
        -lRaToolsSmb \
        -lIBM_SmbProviderTooling \
        -lLinux_SmbGeneralProviderBasic \
        -lcmpiLinux_SambaPrinterOptions \
        -lcmpiLinux_SambaUser \
        -lcmpiCIM_ConcreteJob

libcmpiLinux_SambaInvalidUsersForPrinter_la_CPPFLAGS = \
        -D_COMPILE_UNIX -DCMPI_STANDALONE \
		-I$(srcdir)/../resource-access \
		-I$(srcdir)/include \
		-I$(srcdir)/CIM_ConcreteJob \
        -I$(srcdir)/Linux_SambaPrinterOptions \
        -I$(srcdir)/Linux_SambaUser



################################################################################
# Linux_SambaInvalidUsersForShare
libcmpiLinux_SambaInvalidUsersForShare_la_SOURCES = \
        $(srcdir)/Linux_SambaInvalidUsersForShare/CmpiLinux_SambaInvalidUsersForShareProvider.cpp \
        $(srcdir)/Linux_SambaInvalidUsersForShare/Linux_SambaInvalidUsersForShareDefaultImplementation.cpp \
        $(srcdir)/Linux_SambaInvalidUsersForShare/Linux_SambaInvalidUsersForShareExternal.cpp \
        $(srcdir)/Linux_SambaInvalidUsersForShare/Linux_SambaInvalidUsersForShareFactory.cpp \
        $(srcdir)/Linux_SambaInvalidUsersForShare/Linux_SambaInvalidUsersForShareInstance.cpp \
        $(srcdir)/Linux_SambaInvalidUsersForShare/Linux_SambaInvalidUsersForShareInstanceName.cpp \
        $(srcdir)/Linux_SambaInvalidUsersForShare/Linux_SambaInvalidUsersForShareManualInstance.cpp \
        $(srcdir)/Linux_SambaInvalidUsersForShare/Linux_SambaInvalidUsersForShareRepositoryExternal.cpp \
        $(srcdir)/Linux_SambaInvalidUsersForShare/Linux_SambaInvalidUsersForShareRepositoryInstance.cpp \
        $(srcdir)/Linux_SambaInvalidUsersForShare/Linux_SambaInvalidUsersForShareResourceAccess.cpp

noinst_HEADERS+= \
        $(srcdir)/Linux_SambaInvalidUsersForShare/CmpiLinux_SambaInvalidUsersForShareProvider.h \
        $(srcdir)/Linux_SambaInvalidUsersForShare/Linux_SambaInvalidUsersForShareDefaultImplementation.h \
        $(srcdir)/Linux_SambaInvalidUsersForShare/Linux_SambaInvalidUsersForShareExternal.h \
        $(srcdir)/Linux_SambaInvalidUsersForShare/Linux_SambaInvalidUsersForShareFactory.h \
        $(srcdir)/Linux_SambaInvalidUsersForShare/Linux_SambaInvalidUsersForShareInstance.h \
        $(srcdir)/Linux_SambaInvalidUsersForShare/Linux_SambaInvalidUsersForShareInstanceName.h \
        $(srcdir)/Linux_SambaInvalidUsersForShare/Linux_SambaInvalidUsersForShareInterface.h \
        $(srcdir)/Linux_SambaInvalidUsersForShare/Linux_SambaInvalidUsersForShareManualInstance.h \
        $(srcdir)/Linux_SambaInvalidUsersForShare/Linux_SambaInvalidUsersForShareRepositoryExternal.h \
        $(srcdir)/Linux_SambaInvalidUsersForShare/Linux_SambaInvalidUsersForShareRepositoryInstance.h \
        $(srcdir)/Linux_SambaInvalidUsersForShare/Linux_SambaInvalidUsersForShareResourceAccess.h

libcmpiLinux_SambaInvalidUsersForShare_la_LIBADD = \
        -L../resource-access\
        -lRaToolsSmb \
        -lIBM_SmbProviderTooling \
        -lLinux_SmbGeneralProviderBasic \
        -lcmpiLinux_SambaShareOptions \
        -lcmpiLinux_SambaUser \
        -lcmpiCIM_ConcreteJob

libcmpiLinux_SambaInvalidUsersForShare_la_CPPFLAGS = \
        -D_COMPILE_UNIX -DCMPI_STANDALONE \
		-I$(srcdir)/../resource-access \
		-I$(srcdir)/include \
		-I$(srcdir)/CIM_ConcreteJob \
        -I$(srcdir)/Linux_SambaShareOptions \
        -I$(srcdir)/Linux_SambaUser



################################################################################
# Linux_SambaPrinterAdminForGlobal
libcmpiLinux_SambaPrinterAdminForGlobal_la_SOURCES = \
        $(srcdir)/Linux_SambaPrinterAdminForGlobal/CmpiLinux_SambaPrinterAdminForGlobalProvider.cpp \
        $(srcdir)/Linux_SambaPrinterAdminForGlobal/Linux_SambaPrinterAdminForGlobalDefaultImplementation.cpp \
        $(srcdir)/Linux_SambaPrinterAdminForGlobal/Linux_SambaPrinterAdminForGlobalExternal.cpp \
        $(srcdir)/Linux_SambaPrinterAdminForGlobal/Linux_SambaPrinterAdminForGlobalFactory.cpp \
        $(srcdir)/Linux_SambaPrinterAdminForGlobal/Linux_SambaPrinterAdminForGlobalInstance.cpp \
        $(srcdir)/Linux_SambaPrinterAdminForGlobal/Linux_SambaPrinterAdminForGlobalInstanceName.cpp \
        $(srcdir)/Linux_SambaPrinterAdminForGlobal/Linux_SambaPrinterAdminForGlobalManualInstance.cpp \
        $(srcdir)/Linux_SambaPrinterAdminForGlobal/Linux_SambaPrinterAdminForGlobalRepositoryExternal.cpp \
        $(srcdir)/Linux_SambaPrinterAdminForGlobal/Linux_SambaPrinterAdminForGlobalRepositoryInstance.cpp \
        $(srcdir)/Linux_SambaPrinterAdminForGlobal/Linux_SambaPrinterAdminForGlobalResourceAccess.cpp

noinst_HEADERS+= \
        $(srcdir)/Linux_SambaPrinterAdminForGlobal/CmpiLinux_SambaPrinterAdminForGlobalProvider.h \
        $(srcdir)/Linux_SambaPrinterAdminForGlobal/Linux_SambaPrinterAdminForGlobalDefaultImplementation.h \
        $(srcdir)/Linux_SambaPrinterAdminForGlobal/Linux_SambaPrinterAdminForGlobalExternal.h \
        $(srcdir)/Linux_SambaPrinterAdminForGlobal/Linux_SambaPrinterAdminForGlobalFactory.h \
        $(srcdir)/Linux_SambaPrinterAdminForGlobal/Linux_SambaPrinterAdminForGlobalInstance.h \
        $(srcdir)/Linux_SambaPrinterAdminForGlobal/Linux_SambaPrinterAdminForGlobalInstanceName.h \
        $(srcdir)/Linux_SambaPrinterAdminForGlobal/Linux_SambaPrinterAdminForGlobalInterface.h \
        $(srcdir)/Linux_SambaPrinterAdminForGlobal/Linux_SambaPrinterAdminForGlobalManualInstance.h \
        $(srcdir)/Linux_SambaPrinterAdminForGlobal/Linux_SambaPrinterAdminForGlobalRepositoryExternal.h \
        $(srcdir)/Linux_SambaPrinterAdminForGlobal/Linux_SambaPrinterAdminForGlobalRepositoryInstance.h \
        $(srcdir)/Linux_SambaPrinterAdminForGlobal/Linux_SambaPrinterAdminForGlobalResourceAccess.h

libcmpiLinux_SambaPrinterAdminForGlobal_la_LIBADD = \
        -L../resource-access\
        -lRaToolsSmb \
        -lIBM_SmbProviderTooling \
        -lLinux_SmbGeneralProviderBasic \
        -lcmpiLinux_SambaGlobalOptions \
        -lcmpiLinux_SambaUser \
        -lcmpiCIM_ConcreteJob

libcmpiLinux_SambaPrinterAdminForGlobal_la_CPPFLAGS = \
        -D_COMPILE_UNIX -DCMPI_STANDALONE \
		-I$(srcdir)/../resource-access \
		-I$(srcdir)/include \
		-I$(srcdir)/CIM_ConcreteJob \
        -I$(srcdir)/Linux_SambaGlobalOptions \
        -I$(srcdir)/Linux_SambaUser



################################################################################
# Linux_SambaPrinterAdminForPrinter
libcmpiLinux_SambaPrinterAdminForPrinter_la_SOURCES = \
        $(srcdir)/Linux_SambaPrinterAdminForPrinter/CmpiLinux_SambaPrinterAdminForPrinterProvider.cpp \
        $(srcdir)/Linux_SambaPrinterAdminForPrinter/Linux_SambaPrinterAdminForPrinterDefaultImplementation.cpp \
        $(srcdir)/Linux_SambaPrinterAdminForPrinter/Linux_SambaPrinterAdminForPrinterExternal.cpp \
        $(srcdir)/Linux_SambaPrinterAdminForPrinter/Linux_SambaPrinterAdminForPrinterFactory.cpp \
        $(srcdir)/Linux_SambaPrinterAdminForPrinter/Linux_SambaPrinterAdminForPrinterInstance.cpp \
        $(srcdir)/Linux_SambaPrinterAdminForPrinter/Linux_SambaPrinterAdminForPrinterInstanceName.cpp \
        $(srcdir)/Linux_SambaPrinterAdminForPrinter/Linux_SambaPrinterAdminForPrinterManualInstance.cpp \
        $(srcdir)/Linux_SambaPrinterAdminForPrinter/Linux_SambaPrinterAdminForPrinterRepositoryExternal.cpp \
        $(srcdir)/Linux_SambaPrinterAdminForPrinter/Linux_SambaPrinterAdminForPrinterRepositoryInstance.cpp \
        $(srcdir)/Linux_SambaPrinterAdminForPrinter/Linux_SambaPrinterAdminForPrinterResourceAccess.cpp

noinst_HEADERS+= \
        $(srcdir)/Linux_SambaPrinterAdminForPrinter/CmpiLinux_SambaPrinterAdminForPrinterProvider.h \
        $(srcdir)/Linux_SambaPrinterAdminForPrinter/Linux_SambaPrinterAdminForPrinterDefaultImplementation.h \
        $(srcdir)/Linux_SambaPrinterAdminForPrinter/Linux_SambaPrinterAdminForPrinterExternal.h \
        $(srcdir)/Linux_SambaPrinterAdminForPrinter/Linux_SambaPrinterAdminForPrinterFactory.h \
        $(srcdir)/Linux_SambaPrinterAdminForPrinter/Linux_SambaPrinterAdminForPrinterInstance.h \
        $(srcdir)/Linux_SambaPrinterAdminForPrinter/Linux_SambaPrinterAdminForPrinterInstanceName.h \
        $(srcdir)/Linux_SambaPrinterAdminForPrinter/Linux_SambaPrinterAdminForPrinterInterface.h \
        $(srcdir)/Linux_SambaPrinterAdminForPrinter/Linux_SambaPrinterAdminForPrinterManualInstance.h \
        $(srcdir)/Linux_SambaPrinterAdminForPrinter/Linux_SambaPrinterAdminForPrinterRepositoryExternal.h \
        $(srcdir)/Linux_SambaPrinterAdminForPrinter/Linux_SambaPrinterAdminForPrinterRepositoryInstance.h \
        $(srcdir)/Linux_SambaPrinterAdminForPrinter/Linux_SambaPrinterAdminForPrinterResourceAccess.h

libcmpiLinux_SambaPrinterAdminForPrinter_la_LIBADD = \
        -L../resource-access\
        -lRaToolsSmb \
        -lIBM_SmbProviderTooling \
        -lLinux_SmbGeneralProviderBasic \
        -lcmpiLinux_SambaPrinterOptions \
        -lcmpiLinux_SambaUser \
        -lcmpiCIM_ConcreteJob

libcmpiLinux_SambaPrinterAdminForPrinter_la_CPPFLAGS = \
        -D_COMPILE_UNIX -DCMPI_STANDALONE \
		-I$(srcdir)/../resource-access \
		-I$(srcdir)/include \
		-I$(srcdir)/CIM_ConcreteJob \
        -I$(srcdir)/Linux_SambaPrinterOptions \
        -I$(srcdir)/Linux_SambaUser



################################################################################
# Linux_SambaPrinterForService
libcmpiLinux_SambaPrinterForService_la_SOURCES = \
        $(srcdir)/Linux_SambaPrinterForService/CmpiLinux_SambaPrinterForServiceProvider.cpp \
        $(srcdir)/Linux_SambaPrinterForService/Linux_SambaPrinterForServiceDefaultImplementation.cpp \
        $(srcdir)/Linux_SambaPrinterForService/Linux_SambaPrinterForServiceExternal.cpp \
        $(srcdir)/Linux_SambaPrinterForService/Linux_SambaPrinterForServiceFactory.cpp \
        $(srcdir)/Linux_SambaPrinterForService/Linux_SambaPrinterForServiceInstance.cpp \
        $(srcdir)/Linux_SambaPrinterForService/Linux_SambaPrinterForServiceInstanceName.cpp \
        $(srcdir)/Linux_SambaPrinterForService/Linux_SambaPrinterForServiceManualInstance.cpp \
        $(srcdir)/Linux_SambaPrinterForService/Linux_SambaPrinterForServiceRepositoryExternal.cpp \
        $(srcdir)/Linux_SambaPrinterForService/Linux_SambaPrinterForServiceRepositoryInstance.cpp \
        $(srcdir)/Linux_SambaPrinterForService/Linux_SambaPrinterForServiceResourceAccess.cpp

noinst_HEADERS+= \
        $(srcdir)/Linux_SambaPrinterForService/CmpiLinux_SambaPrinterForServiceProvider.h \
        $(srcdir)/Linux_SambaPrinterForService/Linux_SambaPrinterForServiceDefaultImplementation.h \
        $(srcdir)/Linux_SambaPrinterForService/Linux_SambaPrinterForServiceExternal.h \
        $(srcdir)/Linux_SambaPrinterForService/Linux_SambaPrinterForServiceFactory.h \
        $(srcdir)/Linux_SambaPrinterForService/Linux_SambaPrinterForServiceInstance.h \
        $(srcdir)/Linux_SambaPrinterForService/Linux_SambaPrinterForServiceInstanceName.h \
        $(srcdir)/Linux_SambaPrinterForService/Linux_SambaPrinterForServiceInterface.h \
        $(srcdir)/Linux_SambaPrinterForService/Linux_SambaPrinterForServiceManualInstance.h \
        $(srcdir)/Linux_SambaPrinterForService/Linux_SambaPrinterForServiceRepositoryExternal.h \
        $(srcdir)/Linux_SambaPrinterForService/Linux_SambaPrinterForServiceRepositoryInstance.h \
        $(srcdir)/Linux_SambaPrinterForService/Linux_SambaPrinterForServiceResourceAccess.h

libcmpiLinux_SambaPrinterForService_la_LIBADD = \
        -L../resource-access\
        -lRaToolsSmb \
        -lIBM_SmbProviderTooling \
        -lLinux_SmbGeneralProviderBasic \
        -lcmpiLinux_SambaPrinterOptions \
        -lcmpiLinux_SambaService \
        -lcmpiCIM_ConcreteJob

libcmpiLinux_SambaPrinterForService_la_CPPFLAGS = \
        -D_COMPILE_UNIX -DCMPI_STANDALONE \
		-I$(srcdir)/../resource-access \
		-I$(srcdir)/include \
		-I$(srcdir)/CIM_ConcreteJob \
        -I$(srcdir)/Linux_SambaPrinterOptions \
        -I$(srcdir)/Linux_SambaService



################################################################################
# Linux_SambaPrinterOptions
libcmpiLinux_SambaPrinterOptions_la_SOURCES = \
        $(srcdir)/Linux_SambaPrinterOptions/CmpiLinux_SambaPrinterOptionsProvider.cpp \
        $(srcdir)/Linux_SambaPrinterOptions/Linux_SambaPrinterOptionsDefaultImplementation.cpp \
        $(srcdir)/Linux_SambaPrinterOptions/Linux_SambaPrinterOptionsExternal.cpp \
        $(srcdir)/Linux_SambaPrinterOptions/Linux_SambaPrinterOptionsFactory.cpp \
        $(srcdir)/Linux_SambaPrinterOptions/Linux_SambaPrinterOptionsInstance.cpp \
        $(srcdir)/Linux_SambaPrinterOptions/Linux_SambaPrinterOptionsInstanceName.cpp \
        $(srcdir)/Linux_SambaPrinterOptions/Linux_SambaPrinterOptionsManualInstance.cpp \
        $(srcdir)/Linux_SambaPrinterOptions/Linux_SambaPrinterOptionsRepositoryExternal.cpp \
        $(srcdir)/Linux_SambaPrinterOptions/Linux_SambaPrinterOptionsRepositoryInstance.cpp \
        $(srcdir)/Linux_SambaPrinterOptions/Linux_SambaPrinterOptionsResourceAccess.cpp

noinst_HEADERS+= \
        $(srcdir)/Linux_SambaPrinterOptions/CmpiLinux_SambaPrinterOptionsProvider.h \
        $(srcdir)/Linux_SambaPrinterOptions/Linux_SambaPrinterOptionsDefaultImplementation.h \
        $(srcdir)/Linux_SambaPrinterOptions/Linux_SambaPrinterOptionsExternal.h \
        $(srcdir)/Linux_SambaPrinterOptions/Linux_SambaPrinterOptionsFactory.h \
        $(srcdir)/Linux_SambaPrinterOptions/Linux_SambaPrinterOptionsInstance.h \
        $(srcdir)/Linux_SambaPrinterOptions/Linux_SambaPrinterOptionsInstanceName.h \
        $(srcdir)/Linux_SambaPrinterOptions/Linux_SambaPrinterOptionsInterface.h \
        $(srcdir)/Linux_SambaPrinterOptions/Linux_SambaPrinterOptionsManualInstance.h \
        $(srcdir)/Linux_SambaPrinterOptions/Linux_SambaPrinterOptionsRepositoryExternal.h \
        $(srcdir)/Linux_SambaPrinterOptions/Linux_SambaPrinterOptionsRepositoryInstance.h \
        $(srcdir)/Linux_SambaPrinterOptions/Linux_SambaPrinterOptionsResourceAccess.h

libcmpiLinux_SambaPrinterOptions_la_LIBADD = \
        -L../resource-access\
        -lRaToolsSmb \
        -lIBM_SmbProviderTooling \
        -lLinux_SmbGeneralProviderBasic \
        -lcmpiCIM_ConcreteJob

libcmpiLinux_SambaPrinterOptions_la_CPPFLAGS = \
        -D_COMPILE_UNIX -DCMPI_STANDALONE \
		-I$(srcdir)/../resource-access \
		-I$(srcdir)/include \
		-I$(srcdir)/CIM_ConcreteJob 



################################################################################
# Linux_SambaPrinterPrintingForPrinter
libcmpiLinux_SambaPrinterPrintingForPrinter_la_SOURCES = \
        $(srcdir)/Linux_SambaPrinterPrintingForPrinter/CmpiLinux_SambaPrinterPrintingForPrinterProvider.cpp \
        $(srcdir)/Linux_SambaPrinterPrintingForPrinter/Linux_SambaPrinterPrintingForPrinterDefaultImplementation.cpp \
        $(srcdir)/Linux_SambaPrinterPrintingForPrinter/Linux_SambaPrinterPrintingForPrinterExternal.cpp \
        $(srcdir)/Linux_SambaPrinterPrintingForPrinter/Linux_SambaPrinterPrintingForPrinterFactory.cpp \
        $(srcdir)/Linux_SambaPrinterPrintingForPrinter/Linux_SambaPrinterPrintingForPrinterInstance.cpp \
        $(srcdir)/Linux_SambaPrinterPrintingForPrinter/Linux_SambaPrinterPrintingForPrinterInstanceName.cpp \
        $(srcdir)/Linux_SambaPrinterPrintingForPrinter/Linux_SambaPrinterPrintingForPrinterManualInstance.cpp \
        $(srcdir)/Linux_SambaPrinterPrintingForPrinter/Linux_SambaPrinterPrintingForPrinterRepositoryExternal.cpp \
        $(srcdir)/Linux_SambaPrinterPrintingForPrinter/Linux_SambaPrinterPrintingForPrinterRepositoryInstance.cpp \
        $(srcdir)/Linux_SambaPrinterPrintingForPrinter/Linux_SambaPrinterPrintingForPrinterResourceAccess.cpp

noinst_HEADERS+= \
        $(srcdir)/Linux_SambaPrinterPrintingForPrinter/CmpiLinux_SambaPrinterPrintingForPrinterProvider.h \
        $(srcdir)/Linux_SambaPrinterPrintingForPrinter/Linux_SambaPrinterPrintingForPrinterDefaultImplementation.h \
        $(srcdir)/Linux_SambaPrinterPrintingForPrinter/Linux_SambaPrinterPrintingForPrinterExternal.h \
        $(srcdir)/Linux_SambaPrinterPrintingForPrinter/Linux_SambaPrinterPrintingForPrinterFactory.h \
        $(srcdir)/Linux_SambaPrinterPrintingForPrinter/Linux_SambaPrinterPrintingForPrinterInstance.h \
        $(srcdir)/Linux_SambaPrinterPrintingForPrinter/Linux_SambaPrinterPrintingForPrinterInstanceName.h \
        $(srcdir)/Linux_SambaPrinterPrintingForPrinter/Linux_SambaPrinterPrintingForPrinterInterface.h \
        $(srcdir)/Linux_SambaPrinterPrintingForPrinter/Linux_SambaPrinterPrintingForPrinterManualInstance.h \
        $(srcdir)/Linux_SambaPrinterPrintingForPrinter/Linux_SambaPrinterPrintingForPrinterRepositoryExternal.h \
        $(srcdir)/Linux_SambaPrinterPrintingForPrinter/Linux_SambaPrinterPrintingForPrinterRepositoryInstance.h \
        $(srcdir)/Linux_SambaPrinterPrintingForPrinter/Linux_SambaPrinterPrintingForPrinterResourceAccess.h

libcmpiLinux_SambaPrinterPrintingForPrinter_la_LIBADD = \
        -L../resource-access\
        -lRaToolsSmb \
        -lIBM_SmbProviderTooling \
        -lLinux_SmbGeneralProviderBasic \
        -lcmpiLinux_SambaPrinterOptions \
        -lcmpiLinux_SambaPrinterPrintingOptions \
        -lcmpiCIM_ConcreteJob

libcmpiLinux_SambaPrinterPrintingForPrinter_la_CPPFLAGS = \
        -D_COMPILE_UNIX -DCMPI_STANDALONE \
		-I$(srcdir)/../resource-access \
		-I$(srcdir)/include \
		-I$(srcdir)/CIM_ConcreteJob \
        -I$(srcdir)/Linux_SambaPrinterOptions \
        -I$(srcdir)/Linux_SambaPrinterPrintingOptions



################################################################################
# Linux_SambaPrinterPrintingOptions
libcmpiLinux_SambaPrinterPrintingOptions_la_SOURCES = \
        $(srcdir)/Linux_SambaPrinterPrintingOptions/CmpiLinux_SambaPrinterPrintingOptionsProvider.cpp \
        $(srcdir)/Linux_SambaPrinterPrintingOptions/Linux_SambaPrinterPrintingOptionsDefaultImplementation.cpp \
        $(srcdir)/Linux_SambaPrinterPrintingOptions/Linux_SambaPrinterPrintingOptionsExternal.cpp \
        $(srcdir)/Linux_SambaPrinterPrintingOptions/Linux_SambaPrinterPrintingOptionsFactory.cpp \
        $(srcdir)/Linux_SambaPrinterPrintingOptions/Linux_SambaPrinterPrintingOptionsInstance.cpp \
        $(srcdir)/Linux_SambaPrinterPrintingOptions/Linux_SambaPrinterPrintingOptionsInstanceName.cpp \
        $(srcdir)/Linux_SambaPrinterPrintingOptions/Linux_SambaPrinterPrintingOptionsManualInstance.cpp \
        $(srcdir)/Linux_SambaPrinterPrintingOptions/Linux_SambaPrinterPrintingOptionsRepositoryExternal.cpp \
        $(srcdir)/Linux_SambaPrinterPrintingOptions/Linux_SambaPrinterPrintingOptionsRepositoryInstance.cpp \
        $(srcdir)/Linux_SambaPrinterPrintingOptions/Linux_SambaPrinterPrintingOptionsResourceAccess.cpp

noinst_HEADERS+= \
        $(srcdir)/Linux_SambaPrinterPrintingOptions/CmpiLinux_SambaPrinterPrintingOptionsProvider.h \
        $(srcdir)/Linux_SambaPrinterPrintingOptions/Linux_SambaPrinterPrintingOptionsDefaultImplementation.h \
        $(srcdir)/Linux_SambaPrinterPrintingOptions/Linux_SambaPrinterPrintingOptionsExternal.h \
        $(srcdir)/Linux_SambaPrinterPrintingOptions/Linux_SambaPrinterPrintingOptionsFactory.h \
        $(srcdir)/Linux_SambaPrinterPrintingOptions/Linux_SambaPrinterPrintingOptionsInstance.h \
        $(srcdir)/Linux_SambaPrinterPrintingOptions/Linux_SambaPrinterPrintingOptionsInstanceName.h \
        $(srcdir)/Linux_SambaPrinterPrintingOptions/Linux_SambaPrinterPrintingOptionsInterface.h \
        $(srcdir)/Linux_SambaPrinterPrintingOptions/Linux_SambaPrinterPrintingOptionsManualInstance.h \
        $(srcdir)/Linux_SambaPrinterPrintingOptions/Linux_SambaPrinterPrintingOptionsRepositoryExternal.h \
        $(srcdir)/Linux_SambaPrinterPrintingOptions/Linux_SambaPrinterPrintingOptionsRepositoryInstance.h \
        $(srcdir)/Linux_SambaPrinterPrintingOptions/Linux_SambaPrinterPrintingOptionsResourceAccess.h

libcmpiLinux_SambaPrinterPrintingOptions_la_LIBADD = \
        -L../resource-access\
        -lRaToolsSmb \
        -lIBM_SmbProviderTooling \
        -lLinux_SmbGeneralProviderBasic \
        -lcmpiCIM_ConcreteJob

libcmpiLinux_SambaPrinterPrintingOptions_la_CPPFLAGS = \
        -D_COMPILE_UNIX -DCMPI_STANDALONE \
		-I$(srcdir)/../resource-access \
		-I$(srcdir)/include \
		-I$(srcdir)/CIM_ConcreteJob 



################################################################################
# Linux_SambaPrinterSecurityForGlobal
libcmpiLinux_SambaPrinterSecurityForGlobal_la_SOURCES = \
        $(srcdir)/Linux_SambaPrinterSecurityForGlobal/CmpiLinux_SambaPrinterSecurityForGlobalProvider.cpp \
        $(srcdir)/Linux_SambaPrinterSecurityForGlobal/Linux_SambaPrinterSecurityForGlobalDefaultImplementation.cpp \
        $(srcdir)/Linux_SambaPrinterSecurityForGlobal/Linux_SambaPrinterSecurityForGlobalExternal.cpp \
        $(srcdir)/Linux_SambaPrinterSecurityForGlobal/Linux_SambaPrinterSecurityForGlobalFactory.cpp \
        $(srcdir)/Linux_SambaPrinterSecurityForGlobal/Linux_SambaPrinterSecurityForGlobalInstance.cpp \
        $(srcdir)/Linux_SambaPrinterSecurityForGlobal/Linux_SambaPrinterSecurityForGlobalInstanceName.cpp \
        $(srcdir)/Linux_SambaPrinterSecurityForGlobal/Linux_SambaPrinterSecurityForGlobalManualInstance.cpp \
        $(srcdir)/Linux_SambaPrinterSecurityForGlobal/Linux_SambaPrinterSecurityForGlobalRepositoryExternal.cpp \
        $(srcdir)/Linux_SambaPrinterSecurityForGlobal/Linux_SambaPrinterSecurityForGlobalRepositoryInstance.cpp \
        $(srcdir)/Linux_SambaPrinterSecurityForGlobal/Linux_SambaPrinterSecurityForGlobalResourceAccess.cpp

noinst_HEADERS+= \
        $(srcdir)/Linux_SambaPrinterSecurityForGlobal/CmpiLinux_SambaPrinterSecurityForGlobalProvider.h \
        $(srcdir)/Linux_SambaPrinterSecurityForGlobal/Linux_SambaPrinterSecurityForGlobalDefaultImplementation.h \
        $(srcdir)/Linux_SambaPrinterSecurityForGlobal/Linux_SambaPrinterSecurityForGlobalExternal.h \
        $(srcdir)/Linux_SambaPrinterSecurityForGlobal/Linux_SambaPrinterSecurityForGlobalFactory.h \
        $(srcdir)/Linux_SambaPrinterSecurityForGlobal/Linux_SambaPrinterSecurityForGlobalInstance.h \
        $(srcdir)/Linux_SambaPrinterSecurityForGlobal/Linux_SambaPrinterSecurityForGlobalInstanceName.h \
        $(srcdir)/Linux_SambaPrinterSecurityForGlobal/Linux_SambaPrinterSecurityForGlobalInterface.h \
        $(srcdir)/Linux_SambaPrinterSecurityForGlobal/Linux_SambaPrinterSecurityForGlobalManualInstance.h \
        $(srcdir)/Linux_SambaPrinterSecurityForGlobal/Linux_SambaPrinterSecurityForGlobalRepositoryExternal.h \
        $(srcdir)/Linux_SambaPrinterSecurityForGlobal/Linux_SambaPrinterSecurityForGlobalRepositoryInstance.h \
        $(srcdir)/Linux_SambaPrinterSecurityForGlobal/Linux_SambaPrinterSecurityForGlobalResourceAccess.h

libcmpiLinux_SambaPrinterSecurityForGlobal_la_LIBADD = \
        -L../resource-access\
        -lRaToolsSmb \
        -lIBM_SmbProviderTooling \
        -lLinux_SmbGeneralProviderBasic \
        -lcmpiLinux_SambaGlobalOptions \
        -lcmpiLinux_SambaPrinterSecurityOptions \
        -lcmpiCIM_ConcreteJob

libcmpiLinux_SambaPrinterSecurityForGlobal_la_CPPFLAGS = \
        -D_COMPILE_UNIX -DCMPI_STANDALONE \
		-I$(srcdir)/../resource-access \
		-I$(srcdir)/include \
		-I$(srcdir)/CIM_ConcreteJob \
        -I$(srcdir)/Linux_SambaGlobalOptions \
        -I$(srcdir)/Linux_SambaPrinterSecurityOptions



################################################################################
# Linux_SambaPrinterSecurityForPrinter
libcmpiLinux_SambaPrinterSecurityForPrinter_la_SOURCES = \
        $(srcdir)/Linux_SambaPrinterSecurityForPrinter/CmpiLinux_SambaPrinterSecurityForPrinterProvider.cpp \
        $(srcdir)/Linux_SambaPrinterSecurityForPrinter/Linux_SambaPrinterSecurityForPrinterDefaultImplementation.cpp \
        $(srcdir)/Linux_SambaPrinterSecurityForPrinter/Linux_SambaPrinterSecurityForPrinterExternal.cpp \
        $(srcdir)/Linux_SambaPrinterSecurityForPrinter/Linux_SambaPrinterSecurityForPrinterFactory.cpp \
        $(srcdir)/Linux_SambaPrinterSecurityForPrinter/Linux_SambaPrinterSecurityForPrinterInstance.cpp \
        $(srcdir)/Linux_SambaPrinterSecurityForPrinter/Linux_SambaPrinterSecurityForPrinterInstanceName.cpp \
        $(srcdir)/Linux_SambaPrinterSecurityForPrinter/Linux_SambaPrinterSecurityForPrinterManualInstance.cpp \
        $(srcdir)/Linux_SambaPrinterSecurityForPrinter/Linux_SambaPrinterSecurityForPrinterRepositoryExternal.cpp \
        $(srcdir)/Linux_SambaPrinterSecurityForPrinter/Linux_SambaPrinterSecurityForPrinterRepositoryInstance.cpp \
        $(srcdir)/Linux_SambaPrinterSecurityForPrinter/Linux_SambaPrinterSecurityForPrinterResourceAccess.cpp

noinst_HEADERS+= \
        $(srcdir)/Linux_SambaPrinterSecurityForPrinter/CmpiLinux_SambaPrinterSecurityForPrinterProvider.h \
        $(srcdir)/Linux_SambaPrinterSecurityForPrinter/Linux_SambaPrinterSecurityForPrinterDefaultImplementation.h \
        $(srcdir)/Linux_SambaPrinterSecurityForPrinter/Linux_SambaPrinterSecurityForPrinterExternal.h \
        $(srcdir)/Linux_SambaPrinterSecurityForPrinter/Linux_SambaPrinterSecurityForPrinterFactory.h \
        $(srcdir)/Linux_SambaPrinterSecurityForPrinter/Linux_SambaPrinterSecurityForPrinterInstance.h \
        $(srcdir)/Linux_SambaPrinterSecurityForPrinter/Linux_SambaPrinterSecurityForPrinterInstanceName.h \
        $(srcdir)/Linux_SambaPrinterSecurityForPrinter/Linux_SambaPrinterSecurityForPrinterInterface.h \
        $(srcdir)/Linux_SambaPrinterSecurityForPrinter/Linux_SambaPrinterSecurityForPrinterManualInstance.h \
        $(srcdir)/Linux_SambaPrinterSecurityForPrinter/Linux_SambaPrinterSecurityForPrinterRepositoryExternal.h \
        $(srcdir)/Linux_SambaPrinterSecurityForPrinter/Linux_SambaPrinterSecurityForPrinterRepositoryInstance.h \
        $(srcdir)/Linux_SambaPrinterSecurityForPrinter/Linux_SambaPrinterSecurityForPrinterResourceAccess.h

libcmpiLinux_SambaPrinterSecurityForPrinter_la_LIBADD = \
        -L../resource-access\
        -lRaToolsSmb \
        -lIBM_SmbProviderTooling \
        -lLinux_SmbGeneralProviderBasic \
        -lcmpiLinux_SambaPrinterOptions \
        -lcmpiLinux_SambaPrinterSecurityOptions \
        -lcmpiCIM_ConcreteJob

libcmpiLinux_SambaPrinterSecurityForPrinter_la_CPPFLAGS = \
        -D_COMPILE_UNIX -DCMPI_STANDALONE \
		-I$(srcdir)/../resource-access \
		-I$(srcdir)/include \
		-I$(srcdir)/CIM_ConcreteJob \
        -I$(srcdir)/Linux_SambaPrinterOptions \
        -I$(srcdir)/Linux_SambaPrinterSecurityOptions



################################################################################
# Linux_SambaPrinterSecurityOptions
libcmpiLinux_SambaPrinterSecurityOptions_la_SOURCES = \
        $(srcdir)/Linux_SambaPrinterSecurityOptions/CmpiLinux_SambaPrinterSecurityOptionsProvider.cpp \
        $(srcdir)/Linux_SambaPrinterSecurityOptions/Linux_SambaPrinterSecurityOptionsDefaultImplementation.cpp \
        $(srcdir)/Linux_SambaPrinterSecurityOptions/Linux_SambaPrinterSecurityOptionsExternal.cpp \
        $(srcdir)/Linux_SambaPrinterSecurityOptions/Linux_SambaPrinterSecurityOptionsFactory.cpp \
        $(srcdir)/Linux_SambaPrinterSecurityOptions/Linux_SambaPrinterSecurityOptionsInstance.cpp \
        $(srcdir)/Linux_SambaPrinterSecurityOptions/Linux_SambaPrinterSecurityOptionsInstanceName.cpp \
        $(srcdir)/Linux_SambaPrinterSecurityOptions/Linux_SambaPrinterSecurityOptionsManualInstance.cpp \
        $(srcdir)/Linux_SambaPrinterSecurityOptions/Linux_SambaPrinterSecurityOptionsRepositoryExternal.cpp \
        $(srcdir)/Linux_SambaPrinterSecurityOptions/Linux_SambaPrinterSecurityOptionsRepositoryInstance.cpp \
        $(srcdir)/Linux_SambaPrinterSecurityOptions/Linux_SambaPrinterSecurityOptionsResourceAccess.cpp

noinst_HEADERS+= \
        $(srcdir)/Linux_SambaPrinterSecurityOptions/CmpiLinux_SambaPrinterSecurityOptionsProvider.h \
        $(srcdir)/Linux_SambaPrinterSecurityOptions/Linux_SambaPrinterSecurityOptionsDefaultImplementation.h \
        $(srcdir)/Linux_SambaPrinterSecurityOptions/Linux_SambaPrinterSecurityOptionsExternal.h \
        $(srcdir)/Linux_SambaPrinterSecurityOptions/Linux_SambaPrinterSecurityOptionsFactory.h \
        $(srcdir)/Linux_SambaPrinterSecurityOptions/Linux_SambaPrinterSecurityOptionsInstance.h \
        $(srcdir)/Linux_SambaPrinterSecurityOptions/Linux_SambaPrinterSecurityOptionsInstanceName.h \
        $(srcdir)/Linux_SambaPrinterSecurityOptions/Linux_SambaPrinterSecurityOptionsInterface.h \
        $(srcdir)/Linux_SambaPrinterSecurityOptions/Linux_SambaPrinterSecurityOptionsManualInstance.h \
        $(srcdir)/Linux_SambaPrinterSecurityOptions/Linux_SambaPrinterSecurityOptionsRepositoryExternal.h \
        $(srcdir)/Linux_SambaPrinterSecurityOptions/Linux_SambaPrinterSecurityOptionsRepositoryInstance.h \
        $(srcdir)/Linux_SambaPrinterSecurityOptions/Linux_SambaPrinterSecurityOptionsResourceAccess.h

libcmpiLinux_SambaPrinterSecurityOptions_la_LIBADD = \
        -L../resource-access\
        -lRaToolsSmb \
        -lIBM_SmbProviderTooling \
        -lLinux_SmbGeneralProviderBasic \
        -lcmpiCIM_ConcreteJob

libcmpiLinux_SambaPrinterSecurityOptions_la_CPPFLAGS = \
        -D_COMPILE_UNIX -DCMPI_STANDALONE \
		-I$(srcdir)/../resource-access \
		-I$(srcdir)/include \
		-I$(srcdir)/CIM_ConcreteJob 



################################################################################
# Linux_SambaReadListForGlobal
libcmpiLinux_SambaReadListForGlobal_la_SOURCES = \
        $(srcdir)/Linux_SambaReadListForGlobal/CmpiLinux_SambaReadListForGlobalProvider.cpp \
        $(srcdir)/Linux_SambaReadListForGlobal/Linux_SambaReadListForGlobalDefaultImplementation.cpp \
        $(srcdir)/Linux_SambaReadListForGlobal/Linux_SambaReadListForGlobalExternal.cpp \
        $(srcdir)/Linux_SambaReadListForGlobal/Linux_SambaReadListForGlobalFactory.cpp \
        $(srcdir)/Linux_SambaReadListForGlobal/Linux_SambaReadListForGlobalInstance.cpp \
        $(srcdir)/Linux_SambaReadListForGlobal/Linux_SambaReadListForGlobalInstanceName.cpp \
        $(srcdir)/Linux_SambaReadListForGlobal/Linux_SambaReadListForGlobalManualInstance.cpp \
        $(srcdir)/Linux_SambaReadListForGlobal/Linux_SambaReadListForGlobalRepositoryExternal.cpp \
        $(srcdir)/Linux_SambaReadListForGlobal/Linux_SambaReadListForGlobalRepositoryInstance.cpp \
        $(srcdir)/Linux_SambaReadListForGlobal/Linux_SambaReadListForGlobalResourceAccess.cpp

noinst_HEADERS+= \
        $(srcdir)/Linux_SambaReadListForGlobal/CmpiLinux_SambaReadListForGlobalProvider.h \
        $(srcdir)/Linux_SambaReadListForGlobal/Linux_SambaReadListForGlobalDefaultImplementation.h \
        $(srcdir)/Linux_SambaReadListForGlobal/Linux_SambaReadListForGlobalExternal.h \
        $(srcdir)/Linux_SambaReadListForGlobal/Linux_SambaReadListForGlobalFactory.h \
        $(srcdir)/Linux_SambaReadListForGlobal/Linux_SambaReadListForGlobalInstance.h \
        $(srcdir)/Linux_SambaReadListForGlobal/Linux_SambaReadListForGlobalInstanceName.h \
        $(srcdir)/Linux_SambaReadListForGlobal/Linux_SambaReadListForGlobalInterface.h \
        $(srcdir)/Linux_SambaReadListForGlobal/Linux_SambaReadListForGlobalManualInstance.h \
        $(srcdir)/Linux_SambaReadListForGlobal/Linux_SambaReadListForGlobalRepositoryExternal.h \
        $(srcdir)/Linux_SambaReadListForGlobal/Linux_SambaReadListForGlobalRepositoryInstance.h \
        $(srcdir)/Linux_SambaReadListForGlobal/Linux_SambaReadListForGlobalResourceAccess.h

libcmpiLinux_SambaReadListForGlobal_la_LIBADD = \
        -L../resource-access\
        -lRaToolsSmb \
        -lIBM_SmbProviderTooling \
        -lLinux_SmbGeneralProviderBasic \
        -lcmpiLinux_SambaGlobalOptions \
        -lcmpiLinux_SambaUser \
        -lcmpiCIM_ConcreteJob

libcmpiLinux_SambaReadListForGlobal_la_CPPFLAGS = \
        -D_COMPILE_UNIX -DCMPI_STANDALONE \
		-I$(srcdir)/../resource-access \
		-I$(srcdir)/include \
		-I$(srcdir)/CIM_ConcreteJob \
        -I$(srcdir)/Linux_SambaGlobalOptions \
        -I$(srcdir)/Linux_SambaUser



################################################################################
# Linux_SambaReadListForPrinter
libcmpiLinux_SambaReadListForPrinter_la_SOURCES = \
        $(srcdir)/Linux_SambaReadListForPrinter/CmpiLinux_SambaReadListForPrinterProvider.cpp \
        $(srcdir)/Linux_SambaReadListForPrinter/Linux_SambaReadListForPrinterDefaultImplementation.cpp \
        $(srcdir)/Linux_SambaReadListForPrinter/Linux_SambaReadListForPrinterExternal.cpp \
        $(srcdir)/Linux_SambaReadListForPrinter/Linux_SambaReadListForPrinterFactory.cpp \
        $(srcdir)/Linux_SambaReadListForPrinter/Linux_SambaReadListForPrinterInstance.cpp \
        $(srcdir)/Linux_SambaReadListForPrinter/Linux_SambaReadListForPrinterInstanceName.cpp \
        $(srcdir)/Linux_SambaReadListForPrinter/Linux_SambaReadListForPrinterManualInstance.cpp \
        $(srcdir)/Linux_SambaReadListForPrinter/Linux_SambaReadListForPrinterRepositoryExternal.cpp \
        $(srcdir)/Linux_SambaReadListForPrinter/Linux_SambaReadListForPrinterRepositoryInstance.cpp \
        $(srcdir)/Linux_SambaReadListForPrinter/Linux_SambaReadListForPrinterResourceAccess.cpp

noinst_HEADERS+= \
        $(srcdir)/Linux_SambaReadListForPrinter/CmpiLinux_SambaReadListForPrinterProvider.h \
        $(srcdir)/Linux_SambaReadListForPrinter/Linux_SambaReadListForPrinterDefaultImplementation.h \
        $(srcdir)/Linux_SambaReadListForPrinter/Linux_SambaReadListForPrinterExternal.h \
        $(srcdir)/Linux_SambaReadListForPrinter/Linux_SambaReadListForPrinterFactory.h \
        $(srcdir)/Linux_SambaReadListForPrinter/Linux_SambaReadListForPrinterInstance.h \
        $(srcdir)/Linux_SambaReadListForPrinter/Linux_SambaReadListForPrinterInstanceName.h \
        $(srcdir)/Linux_SambaReadListForPrinter/Linux_SambaReadListForPrinterInterface.h \
        $(srcdir)/Linux_SambaReadListForPrinter/Linux_SambaReadListForPrinterManualInstance.h \
        $(srcdir)/Linux_SambaReadListForPrinter/Linux_SambaReadListForPrinterRepositoryExternal.h \
        $(srcdir)/Linux_SambaReadListForPrinter/Linux_SambaReadListForPrinterRepositoryInstance.h \
        $(srcdir)/Linux_SambaReadListForPrinter/Linux_SambaReadListForPrinterResourceAccess.h

libcmpiLinux_SambaReadListForPrinter_la_LIBADD = \
        -L../resource-access\
        -lRaToolsSmb \
        -lIBM_SmbProviderTooling \
        -lLinux_SmbGeneralProviderBasic \
        -lcmpiLinux_SambaPrinterOptions \
        -lcmpiLinux_SambaUser \
        -lcmpiCIM_ConcreteJob

libcmpiLinux_SambaReadListForPrinter_la_CPPFLAGS = \
        -D_COMPILE_UNIX -DCMPI_STANDALONE \
		-I$(srcdir)/../resource-access \
		-I$(srcdir)/include \
		-I$(srcdir)/CIM_ConcreteJob \
        -I$(srcdir)/Linux_SambaPrinterOptions \
        -I$(srcdir)/Linux_SambaUser



################################################################################
# Linux_SambaReadListForShare
libcmpiLinux_SambaReadListForShare_la_SOURCES = \
        $(srcdir)/Linux_SambaReadListForShare/CmpiLinux_SambaReadListForShareProvider.cpp \
        $(srcdir)/Linux_SambaReadListForShare/Linux_SambaReadListForShareDefaultImplementation.cpp \
        $(srcdir)/Linux_SambaReadListForShare/Linux_SambaReadListForShareExternal.cpp \
        $(srcdir)/Linux_SambaReadListForShare/Linux_SambaReadListForShareFactory.cpp \
        $(srcdir)/Linux_SambaReadListForShare/Linux_SambaReadListForShareInstance.cpp \
        $(srcdir)/Linux_SambaReadListForShare/Linux_SambaReadListForShareInstanceName.cpp \
        $(srcdir)/Linux_SambaReadListForShare/Linux_SambaReadListForShareManualInstance.cpp \
        $(srcdir)/Linux_SambaReadListForShare/Linux_SambaReadListForShareRepositoryExternal.cpp \
        $(srcdir)/Linux_SambaReadListForShare/Linux_SambaReadListForShareRepositoryInstance.cpp \
        $(srcdir)/Linux_SambaReadListForShare/Linux_SambaReadListForShareResourceAccess.cpp

noinst_HEADERS+= \
        $(srcdir)/Linux_SambaReadListForShare/CmpiLinux_SambaReadListForShareProvider.h \
        $(srcdir)/Linux_SambaReadListForShare/Linux_SambaReadListForShareDefaultImplementation.h \
        $(srcdir)/Linux_SambaReadListForShare/Linux_SambaReadListForShareExternal.h \
        $(srcdir)/Linux_SambaReadListForShare/Linux_SambaReadListForShareFactory.h \
        $(srcdir)/Linux_SambaReadListForShare/Linux_SambaReadListForShareInstance.h \
        $(srcdir)/Linux_SambaReadListForShare/Linux_SambaReadListForShareInstanceName.h \
        $(srcdir)/Linux_SambaReadListForShare/Linux_SambaReadListForShareInterface.h \
        $(srcdir)/Linux_SambaReadListForShare/Linux_SambaReadListForShareManualInstance.h \
        $(srcdir)/Linux_SambaReadListForShare/Linux_SambaReadListForShareRepositoryExternal.h \
        $(srcdir)/Linux_SambaReadListForShare/Linux_SambaReadListForShareRepositoryInstance.h \
        $(srcdir)/Linux_SambaReadListForShare/Linux_SambaReadListForShareResourceAccess.h

libcmpiLinux_SambaReadListForShare_la_LIBADD = \
        -L../resource-access\
        -lRaToolsSmb \
        -lIBM_SmbProviderTooling \
        -lLinux_SmbGeneralProviderBasic \
        -lcmpiLinux_SambaShareOptions \
        -lcmpiLinux_SambaUser \
        -lcmpiCIM_ConcreteJob

libcmpiLinux_SambaReadListForShare_la_CPPFLAGS = \
        -D_COMPILE_UNIX -DCMPI_STANDALONE \
		-I$(srcdir)/../resource-access \
		-I$(srcdir)/include \
		-I$(srcdir)/CIM_ConcreteJob \
        -I$(srcdir)/Linux_SambaShareOptions \
        -I$(srcdir)/Linux_SambaUser



################################################################################
# Linux_SambaScriptingForGlobal
libcmpiLinux_SambaScriptingForGlobal_la_SOURCES = \
        $(srcdir)/Linux_SambaScriptingForGlobal/CmpiLinux_SambaScriptingForGlobalProvider.cpp \
        $(srcdir)/Linux_SambaScriptingForGlobal/Linux_SambaScriptingForGlobalDefaultImplementation.cpp \
        $(srcdir)/Linux_SambaScriptingForGlobal/Linux_SambaScriptingForGlobalExternal.cpp \
        $(srcdir)/Linux_SambaScriptingForGlobal/Linux_SambaScriptingForGlobalFactory.cpp \
        $(srcdir)/Linux_SambaScriptingForGlobal/Linux_SambaScriptingForGlobalInstance.cpp \
        $(srcdir)/Linux_SambaScriptingForGlobal/Linux_SambaScriptingForGlobalInstanceName.cpp \
        $(srcdir)/Linux_SambaScriptingForGlobal/Linux_SambaScriptingForGlobalManualInstance.cpp \
        $(srcdir)/Linux_SambaScriptingForGlobal/Linux_SambaScriptingForGlobalRepositoryExternal.cpp \
        $(srcdir)/Linux_SambaScriptingForGlobal/Linux_SambaScriptingForGlobalRepositoryInstance.cpp \
        $(srcdir)/Linux_SambaScriptingForGlobal/Linux_SambaScriptingForGlobalResourceAccess.cpp

noinst_HEADERS+= \
        $(srcdir)/Linux_SambaScriptingForGlobal/CmpiLinux_SambaScriptingForGlobalProvider.h \
        $(srcdir)/Linux_SambaScriptingForGlobal/Linux_SambaScriptingForGlobalDefaultImplementation.h \
        $(srcdir)/Linux_SambaScriptingForGlobal/Linux_SambaScriptingForGlobalExternal.h \
        $(srcdir)/Linux_SambaScriptingForGlobal/Linux_SambaScriptingForGlobalFactory.h \
        $(srcdir)/Linux_SambaScriptingForGlobal/Linux_SambaScriptingForGlobalInstance.h \
        $(srcdir)/Linux_SambaScriptingForGlobal/Linux_SambaScriptingForGlobalInstanceName.h \
        $(srcdir)/Linux_SambaScriptingForGlobal/Linux_SambaScriptingForGlobalInterface.h \
        $(srcdir)/Linux_SambaScriptingForGlobal/Linux_SambaScriptingForGlobalManualInstance.h \
        $(srcdir)/Linux_SambaScriptingForGlobal/Linux_SambaScriptingForGlobalRepositoryExternal.h \
        $(srcdir)/Linux_SambaScriptingForGlobal/Linux_SambaScriptingForGlobalRepositoryInstance.h \
        $(srcdir)/Linux_SambaScriptingForGlobal/Linux_SambaScriptingForGlobalResourceAccess.h

libcmpiLinux_SambaScriptingForGlobal_la_LIBADD = \
        -L../resource-access\
        -lRaToolsSmb \
        -lIBM_SmbProviderTooling \
        -lLinux_SmbGeneralProviderBasic \
        -lcmpiLinux_SambaScriptingOptions \
        -lcmpiLinux_SambaGlobalOptions \
        -lcmpiCIM_ConcreteJob

libcmpiLinux_SambaScriptingForGlobal_la_CPPFLAGS = \
        -D_COMPILE_UNIX -DCMPI_STANDALONE \
		-I$(srcdir)/../resource-access \
		-I$(srcdir)/include \
		-I$(srcdir)/CIM_ConcreteJob \
        -I$(srcdir)/Linux_SambaScriptingOptions \
        -I$(srcdir)/Linux_SambaGlobalOptions



################################################################################
# Linux_SambaScriptingOptions
libcmpiLinux_SambaScriptingOptions_la_SOURCES = \
        $(srcdir)/Linux_SambaScriptingOptions/CmpiLinux_SambaScriptingOptionsProvider.cpp \
        $(srcdir)/Linux_SambaScriptingOptions/Linux_SambaScriptingOptionsDefaultImplementation.cpp \
        $(srcdir)/Linux_SambaScriptingOptions/Linux_SambaScriptingOptionsExternal.cpp \
        $(srcdir)/Linux_SambaScriptingOptions/Linux_SambaScriptingOptionsFactory.cpp \
        $(srcdir)/Linux_SambaScriptingOptions/Linux_SambaScriptingOptionsInstance.cpp \
        $(srcdir)/Linux_SambaScriptingOptions/Linux_SambaScriptingOptionsInstanceName.cpp \
        $(srcdir)/Linux_SambaScriptingOptions/Linux_SambaScriptingOptionsManualInstance.cpp \
        $(srcdir)/Linux_SambaScriptingOptions/Linux_SambaScriptingOptionsRepositoryExternal.cpp \
        $(srcdir)/Linux_SambaScriptingOptions/Linux_SambaScriptingOptionsRepositoryInstance.cpp \
        $(srcdir)/Linux_SambaScriptingOptions/Linux_SambaScriptingOptionsResourceAccess.cpp

noinst_HEADERS+= \
        $(srcdir)/Linux_SambaScriptingOptions/CmpiLinux_SambaScriptingOptionsProvider.h \
        $(srcdir)/Linux_SambaScriptingOptions/Linux_SambaScriptingOptionsDefaultImplementation.h \
        $(srcdir)/Linux_SambaScriptingOptions/Linux_SambaScriptingOptionsExternal.h \
        $(srcdir)/Linux_SambaScriptingOptions/Linux_SambaScriptingOptionsFactory.h \
        $(srcdir)/Linux_SambaScriptingOptions/Linux_SambaScriptingOptionsInstance.h \
        $(srcdir)/Linux_SambaScriptingOptions/Linux_SambaScriptingOptionsInstanceName.h \
        $(srcdir)/Linux_SambaScriptingOptions/Linux_SambaScriptingOptionsInterface.h \
        $(srcdir)/Linux_SambaScriptingOptions/Linux_SambaScriptingOptionsManualInstance.h \
        $(srcdir)/Linux_SambaScriptingOptions/Linux_SambaScriptingOptionsRepositoryExternal.h \
        $(srcdir)/Linux_SambaScriptingOptions/Linux_SambaScriptingOptionsRepositoryInstance.h \
        $(srcdir)/Linux_SambaScriptingOptions/Linux_SambaScriptingOptionsResourceAccess.h

libcmpiLinux_SambaScriptingOptions_la_LIBADD = \
        -L../resource-access\
        -lRaToolsSmb \
        -lIBM_SmbProviderTooling \
        -lLinux_SmbGeneralProviderBasic \
        -lcmpiCIM_ConcreteJob

libcmpiLinux_SambaScriptingOptions_la_CPPFLAGS = \
        -D_COMPILE_UNIX -DCMPI_STANDALONE \
		-I$(srcdir)/../resource-access \
		-I$(srcdir)/include \
		-I$(srcdir)/CIM_ConcreteJob 



################################################################################
# Linux_SambaService
libcmpiLinux_SambaService_la_SOURCES = \
        $(srcdir)/Linux_SambaService/CmpiLinux_SambaServiceProvider.cpp \
        $(srcdir)/Linux_SambaService/Linux_SambaServiceDefaultImplementation.cpp \
        $(srcdir)/Linux_SambaService/Linux_SambaServiceExternal.cpp \
        $(srcdir)/Linux_SambaService/Linux_SambaServiceFactory.cpp \
        $(srcdir)/Linux_SambaService/Linux_SambaServiceInstance.cpp \
        $(srcdir)/Linux_SambaService/Linux_SambaServiceInstanceName.cpp \
        $(srcdir)/Linux_SambaService/Linux_SambaServiceManualInstance.cpp \
        $(srcdir)/Linux_SambaService/Linux_SambaServiceRepositoryExternal.cpp \
        $(srcdir)/Linux_SambaService/Linux_SambaServiceRepositoryInstance.cpp \
        $(srcdir)/Linux_SambaService/Linux_SambaServiceResourceAccess.cpp

noinst_HEADERS+= \
        $(srcdir)/Linux_SambaService/CmpiLinux_SambaServiceProvider.h \
        $(srcdir)/Linux_SambaService/Linux_SambaServiceDefaultImplementation.h \
        $(srcdir)/Linux_SambaService/Linux_SambaServiceExternal.h \
        $(srcdir)/Linux_SambaService/Linux_SambaServiceFactory.h \
        $(srcdir)/Linux_SambaService/Linux_SambaServiceInstance.h \
        $(srcdir)/Linux_SambaService/Linux_SambaServiceInstanceName.h \
        $(srcdir)/Linux_SambaService/Linux_SambaServiceInterface.h \
        $(srcdir)/Linux_SambaService/Linux_SambaServiceManualInstance.h \
        $(srcdir)/Linux_SambaService/Linux_SambaServiceRepositoryExternal.h \
        $(srcdir)/Linux_SambaService/Linux_SambaServiceRepositoryInstance.h \
        $(srcdir)/Linux_SambaService/Linux_SambaServiceResourceAccess.h

libcmpiLinux_SambaService_la_LIBADD = \
        -L../resource-access\
        -lRaToolsSmb \
        -lIBM_SmbProviderTooling \
        -lLinux_SmbGeneralProviderBasic \
        -lcmpiCIM_ConcreteJob

libcmpiLinux_SambaService_la_CPPFLAGS = \
        -D_COMPILE_UNIX -DCMPI_STANDALONE \
		-I$(srcdir)/../resource-access \
		-I$(srcdir)/include \
		-I$(srcdir)/CIM_ConcreteJob 



################################################################################
# Linux_SambaServiceConfiguration
libcmpiLinux_SambaServiceConfiguration_la_SOURCES = \
        $(srcdir)/Linux_SambaServiceConfiguration/CmpiLinux_SambaServiceConfigurationProvider.cpp \
        $(srcdir)/Linux_SambaServiceConfiguration/Linux_SambaServiceConfigurationDefaultImplementation.cpp \
        $(srcdir)/Linux_SambaServiceConfiguration/Linux_SambaServiceConfigurationExternal.cpp \
        $(srcdir)/Linux_SambaServiceConfiguration/Linux_SambaServiceConfigurationFactory.cpp \
        $(srcdir)/Linux_SambaServiceConfiguration/Linux_SambaServiceConfigurationInstance.cpp \
        $(srcdir)/Linux_SambaServiceConfiguration/Linux_SambaServiceConfigurationInstanceName.cpp \
        $(srcdir)/Linux_SambaServiceConfiguration/Linux_SambaServiceConfigurationManualInstance.cpp \
        $(srcdir)/Linux_SambaServiceConfiguration/Linux_SambaServiceConfigurationRepositoryExternal.cpp \
        $(srcdir)/Linux_SambaServiceConfiguration/Linux_SambaServiceConfigurationRepositoryInstance.cpp \
        $(srcdir)/Linux_SambaServiceConfiguration/Linux_SambaServiceConfigurationResourceAccess.cpp

noinst_HEADERS+= \
        $(srcdir)/Linux_SambaServiceConfiguration/CmpiLinux_SambaServiceConfigurationProvider.h \
        $(srcdir)/Linux_SambaServiceConfiguration/Linux_SambaServiceConfigurationDefaultImplementation.h \
        $(srcdir)/Linux_SambaServiceConfiguration/Linux_SambaServiceConfigurationExternal.h \
        $(srcdir)/Linux_SambaServiceConfiguration/Linux_SambaServiceConfigurationFactory.h \
        $(srcdir)/Linux_SambaServiceConfiguration/Linux_SambaServiceConfigurationInstance.h \
        $(srcdir)/Linux_SambaServiceConfiguration/Linux_SambaServiceConfigurationInstanceName.h \
        $(srcdir)/Linux_SambaServiceConfiguration/Linux_SambaServiceConfigurationInterface.h \
        $(srcdir)/Linux_SambaServiceConfiguration/Linux_SambaServiceConfigurationManualInstance.h \
        $(srcdir)/Linux_SambaServiceConfiguration/Linux_SambaServiceConfigurationRepositoryExternal.h \
        $(srcdir)/Linux_SambaServiceConfiguration/Linux_SambaServiceConfigurationRepositoryInstance.h \
        $(srcdir)/Linux_SambaServiceConfiguration/Linux_SambaServiceConfigurationResourceAccess.h

libcmpiLinux_SambaServiceConfiguration_la_LIBADD = \
        -L../resource-access\
        -lRaToolsSmb \
        -lIBM_SmbProviderTooling \
        -lLinux_SmbGeneralProviderBasic \
        -lcmpiCIM_ConcreteJob

libcmpiLinux_SambaServiceConfiguration_la_CPPFLAGS = \
        -D_COMPILE_UNIX -DCMPI_STANDALONE \
		-I$(srcdir)/../resource-access \
		-I$(srcdir)/include \
		-I$(srcdir)/CIM_ConcreteJob 



################################################################################
# Linux_SambaServiceConfigurationForService
libcmpiLinux_SambaServiceConfigurationForService_la_SOURCES = \
        $(srcdir)/Linux_SambaServiceConfigurationForService/CmpiLinux_SambaServiceConfigurationForServiceProvider.cpp \
        $(srcdir)/Linux_SambaServiceConfigurationForService/Linux_SambaServiceConfigurationForServiceDefaultImplementation.cpp \
        $(srcdir)/Linux_SambaServiceConfigurationForService/Linux_SambaServiceConfigurationForServiceExternal.cpp \
        $(srcdir)/Linux_SambaServiceConfigurationForService/Linux_SambaServiceConfigurationForServiceFactory.cpp \
        $(srcdir)/Linux_SambaServiceConfigurationForService/Linux_SambaServiceConfigurationForServiceInstance.cpp \
        $(srcdir)/Linux_SambaServiceConfigurationForService/Linux_SambaServiceConfigurationForServiceInstanceName.cpp \
        $(srcdir)/Linux_SambaServiceConfigurationForService/Linux_SambaServiceConfigurationForServiceManualInstance.cpp \
        $(srcdir)/Linux_SambaServiceConfigurationForService/Linux_SambaServiceConfigurationForServiceRepositoryExternal.cpp \
        $(srcdir)/Linux_SambaServiceConfigurationForService/Linux_SambaServiceConfigurationForServiceRepositoryInstance.cpp \
        $(srcdir)/Linux_SambaServiceConfigurationForService/Linux_SambaServiceConfigurationForServiceResourceAccess.cpp

noinst_HEADERS+= \
        $(srcdir)/Linux_SambaServiceConfigurationForService/CmpiLinux_SambaServiceConfigurationForServiceProvider.h \
        $(srcdir)/Linux_SambaServiceConfigurationForService/Linux_SambaServiceConfigurationForServiceDefaultImplementation.h \
        $(srcdir)/Linux_SambaServiceConfigurationForService/Linux_SambaServiceConfigurationForServiceExternal.h \
        $(srcdir)/Linux_SambaServiceConfigurationForService/Linux_SambaServiceConfigurationForServiceFactory.h \
        $(srcdir)/Linux_SambaServiceConfigurationForService/Linux_SambaServiceConfigurationForServiceInstance.h \
        $(srcdir)/Linux_SambaServiceConfigurationForService/Linux_SambaServiceConfigurationForServiceInstanceName.h \
        $(srcdir)/Linux_SambaServiceConfigurationForService/Linux_SambaServiceConfigurationForServiceInterface.h \
        $(srcdir)/Linux_SambaServiceConfigurationForService/Linux_SambaServiceConfigurationForServiceManualInstance.h \
        $(srcdir)/Linux_SambaServiceConfigurationForService/Linux_SambaServiceConfigurationForServiceRepositoryExternal.h \
        $(srcdir)/Linux_SambaServiceConfigurationForService/Linux_SambaServiceConfigurationForServiceRepositoryInstance.h \
        $(srcdir)/Linux_SambaServiceConfigurationForService/Linux_SambaServiceConfigurationForServiceResourceAccess.h

libcmpiLinux_SambaServiceConfigurationForService_la_LIBADD = \
        -L../resource-access\
        -lRaToolsSmb \
        -lIBM_SmbProviderTooling \
        -lLinux_SmbGeneralProviderBasic \
        -lcmpiLinux_SambaServiceConfiguration \
        -lcmpiLinux_SambaService \
        -lcmpiCIM_ConcreteJob

libcmpiLinux_SambaServiceConfigurationForService_la_CPPFLAGS = \
        -D_COMPILE_UNIX -DCMPI_STANDALONE \
		-I$(srcdir)/../resource-access \
		-I$(srcdir)/include \
		-I$(srcdir)/CIM_ConcreteJob \
        -I$(srcdir)/Linux_SambaServiceConfiguration \
        -I$(srcdir)/Linux_SambaService



################################################################################
# Linux_SambaShareFileNameHandlingForShare
libcmpiLinux_SambaShareFileNameHandlingForShare_la_SOURCES = \
        $(srcdir)/Linux_SambaShareFileNameHandlingForShare/CmpiLinux_SambaShareFileNameHandlingForShareProvider.cpp \
        $(srcdir)/Linux_SambaShareFileNameHandlingForShare/Linux_SambaShareFileNameHandlingForShareDefaultImplementation.cpp \
        $(srcdir)/Linux_SambaShareFileNameHandlingForShare/Linux_SambaShareFileNameHandlingForShareExternal.cpp \
        $(srcdir)/Linux_SambaShareFileNameHandlingForShare/Linux_SambaShareFileNameHandlingForShareFactory.cpp \
        $(srcdir)/Linux_SambaShareFileNameHandlingForShare/Linux_SambaShareFileNameHandlingForShareInstance.cpp \
        $(srcdir)/Linux_SambaShareFileNameHandlingForShare/Linux_SambaShareFileNameHandlingForShareInstanceName.cpp \
        $(srcdir)/Linux_SambaShareFileNameHandlingForShare/Linux_SambaShareFileNameHandlingForShareManualInstance.cpp \
        $(srcdir)/Linux_SambaShareFileNameHandlingForShare/Linux_SambaShareFileNameHandlingForShareRepositoryExternal.cpp \
        $(srcdir)/Linux_SambaShareFileNameHandlingForShare/Linux_SambaShareFileNameHandlingForShareRepositoryInstance.cpp \
        $(srcdir)/Linux_SambaShareFileNameHandlingForShare/Linux_SambaShareFileNameHandlingForShareResourceAccess.cpp

noinst_HEADERS+= \
        $(srcdir)/Linux_SambaShareFileNameHandlingForShare/CmpiLinux_SambaShareFileNameHandlingForShareProvider.h \
        $(srcdir)/Linux_SambaShareFileNameHandlingForShare/Linux_SambaShareFileNameHandlingForShareDefaultImplementation.h \
        $(srcdir)/Linux_SambaShareFileNameHandlingForShare/Linux_SambaShareFileNameHandlingForShareExternal.h \
        $(srcdir)/Linux_SambaShareFileNameHandlingForShare/Linux_SambaShareFileNameHandlingForShareFactory.h \
        $(srcdir)/Linux_SambaShareFileNameHandlingForShare/Linux_SambaShareFileNameHandlingForShareInstance.h \
        $(srcdir)/Linux_SambaShareFileNameHandlingForShare/Linux_SambaShareFileNameHandlingForShareInstanceName.h \
        $(srcdir)/Linux_SambaShareFileNameHandlingForShare/Linux_SambaShareFileNameHandlingForShareInterface.h \
        $(srcdir)/Linux_SambaShareFileNameHandlingForShare/Linux_SambaShareFileNameHandlingForShareManualInstance.h \
        $(srcdir)/Linux_SambaShareFileNameHandlingForShare/Linux_SambaShareFileNameHandlingForShareRepositoryExternal.h \
        $(srcdir)/Linux_SambaShareFileNameHandlingForShare/Linux_SambaShareFileNameHandlingForShareRepositoryInstance.h \
        $(srcdir)/Linux_SambaShareFileNameHandlingForShare/Linux_SambaShareFileNameHandlingForShareResourceAccess.h

libcmpiLinux_SambaShareFileNameHandlingForShare_la_LIBADD = \
        -L../resource-access\
        -lRaToolsSmb \
        -lIBM_SmbProviderTooling \
        -lLinux_SmbGeneralProviderBasic \
        -lcmpiLinux_SambaShareFileNameHandlingOptions \
        -lcmpiLinux_SambaShareOptions \
        -lcmpiCIM_ConcreteJob

libcmpiLinux_SambaShareFileNameHandlingForShare_la_CPPFLAGS = \
        -D_COMPILE_UNIX -DCMPI_STANDALONE \
		-I$(srcdir)/../resource-access \
		-I$(srcdir)/include \
		-I$(srcdir)/CIM_ConcreteJob \
        -I$(srcdir)/Linux_SambaShareFileNameHandlingOptions \
        -I$(srcdir)/Linux_SambaShareOptions



################################################################################
# Linux_SambaShareFileNameHandlingOptions
libcmpiLinux_SambaShareFileNameHandlingOptions_la_SOURCES = \
        $(srcdir)/Linux_SambaShareFileNameHandlingOptions/CmpiLinux_SambaShareFileNameHandlingOptionsProvider.cpp \
        $(srcdir)/Linux_SambaShareFileNameHandlingOptions/Linux_SambaShareFileNameHandlingOptionsDefaultImplementation.cpp \
        $(srcdir)/Linux_SambaShareFileNameHandlingOptions/Linux_SambaShareFileNameHandlingOptionsExternal.cpp \
        $(srcdir)/Linux_SambaShareFileNameHandlingOptions/Linux_SambaShareFileNameHandlingOptionsFactory.cpp \
        $(srcdir)/Linux_SambaShareFileNameHandlingOptions/Linux_SambaShareFileNameHandlingOptionsInstance.cpp \
        $(srcdir)/Linux_SambaShareFileNameHandlingOptions/Linux_SambaShareFileNameHandlingOptionsInstanceName.cpp \
        $(srcdir)/Linux_SambaShareFileNameHandlingOptions/Linux_SambaShareFileNameHandlingOptionsManualInstance.cpp \
        $(srcdir)/Linux_SambaShareFileNameHandlingOptions/Linux_SambaShareFileNameHandlingOptionsRepositoryExternal.cpp \
        $(srcdir)/Linux_SambaShareFileNameHandlingOptions/Linux_SambaShareFileNameHandlingOptionsRepositoryInstance.cpp \
        $(srcdir)/Linux_SambaShareFileNameHandlingOptions/Linux_SambaShareFileNameHandlingOptionsResourceAccess.cpp

noinst_HEADERS+= \
        $(srcdir)/Linux_SambaShareFileNameHandlingOptions/CmpiLinux_SambaShareFileNameHandlingOptionsProvider.h \
        $(srcdir)/Linux_SambaShareFileNameHandlingOptions/Linux_SambaShareFileNameHandlingOptionsDefaultImplementation.h \
        $(srcdir)/Linux_SambaShareFileNameHandlingOptions/Linux_SambaShareFileNameHandlingOptionsExternal.h \
        $(srcdir)/Linux_SambaShareFileNameHandlingOptions/Linux_SambaShareFileNameHandlingOptionsFactory.h \
        $(srcdir)/Linux_SambaShareFileNameHandlingOptions/Linux_SambaShareFileNameHandlingOptionsInstance.h \
        $(srcdir)/Linux_SambaShareFileNameHandlingOptions/Linux_SambaShareFileNameHandlingOptionsInstanceName.h \
        $(srcdir)/Linux_SambaShareFileNameHandlingOptions/Linux_SambaShareFileNameHandlingOptionsInterface.h \
        $(srcdir)/Linux_SambaShareFileNameHandlingOptions/Linux_SambaShareFileNameHandlingOptionsManualInstance.h \
        $(srcdir)/Linux_SambaShareFileNameHandlingOptions/Linux_SambaShareFileNameHandlingOptionsRepositoryExternal.h \
        $(srcdir)/Linux_SambaShareFileNameHandlingOptions/Linux_SambaShareFileNameHandlingOptionsRepositoryInstance.h \
        $(srcdir)/Linux_SambaShareFileNameHandlingOptions/Linux_SambaShareFileNameHandlingOptionsResourceAccess.h

libcmpiLinux_SambaShareFileNameHandlingOptions_la_LIBADD = \
        -L../resource-access\
        -lRaToolsSmb \
        -lIBM_SmbProviderTooling \
        -lLinux_SmbGeneralProviderBasic \
        -lcmpiCIM_ConcreteJob

libcmpiLinux_SambaShareFileNameHandlingOptions_la_CPPFLAGS = \
        -D_COMPILE_UNIX -DCMPI_STANDALONE \
		-I$(srcdir)/../resource-access \
		-I$(srcdir)/include \
		-I$(srcdir)/CIM_ConcreteJob 



################################################################################
# Linux_SambaShareForService
libcmpiLinux_SambaShareForService_la_SOURCES = \
        $(srcdir)/Linux_SambaShareForService/CmpiLinux_SambaShareForServiceProvider.cpp \
        $(srcdir)/Linux_SambaShareForService/Linux_SambaShareForServiceDefaultImplementation.cpp \
        $(srcdir)/Linux_SambaShareForService/Linux_SambaShareForServiceExternal.cpp \
        $(srcdir)/Linux_SambaShareForService/Linux_SambaShareForServiceFactory.cpp \
        $(srcdir)/Linux_SambaShareForService/Linux_SambaShareForServiceInstance.cpp \
        $(srcdir)/Linux_SambaShareForService/Linux_SambaShareForServiceInstanceName.cpp \
        $(srcdir)/Linux_SambaShareForService/Linux_SambaShareForServiceManualInstance.cpp \
        $(srcdir)/Linux_SambaShareForService/Linux_SambaShareForServiceRepositoryExternal.cpp \
        $(srcdir)/Linux_SambaShareForService/Linux_SambaShareForServiceRepositoryInstance.cpp \
        $(srcdir)/Linux_SambaShareForService/Linux_SambaShareForServiceResourceAccess.cpp

noinst_HEADERS+= \
        $(srcdir)/Linux_SambaShareForService/CmpiLinux_SambaShareForServiceProvider.h \
        $(srcdir)/Linux_SambaShareForService/Linux_SambaShareForServiceDefaultImplementation.h \
        $(srcdir)/Linux_SambaShareForService/Linux_SambaShareForServiceExternal.h \
        $(srcdir)/Linux_SambaShareForService/Linux_SambaShareForServiceFactory.h \
        $(srcdir)/Linux_SambaShareForService/Linux_SambaShareForServiceInstance.h \
        $(srcdir)/Linux_SambaShareForService/Linux_SambaShareForServiceInstanceName.h \
        $(srcdir)/Linux_SambaShareForService/Linux_SambaShareForServiceInterface.h \
        $(srcdir)/Linux_SambaShareForService/Linux_SambaShareForServiceManualInstance.h \
        $(srcdir)/Linux_SambaShareForService/Linux_SambaShareForServiceRepositoryExternal.h \
        $(srcdir)/Linux_SambaShareForService/Linux_SambaShareForServiceRepositoryInstance.h \
        $(srcdir)/Linux_SambaShareForService/Linux_SambaShareForServiceResourceAccess.h

libcmpiLinux_SambaShareForService_la_LIBADD = \
        -L../resource-access\
        -lRaToolsSmb \
        -lIBM_SmbProviderTooling \
        -lLinux_SmbGeneralProviderBasic \
        -lcmpiLinux_SambaShareOptions \
        -lcmpiLinux_SambaService \
        -lcmpiCIM_ConcreteJob

libcmpiLinux_SambaShareForService_la_CPPFLAGS = \
        -D_COMPILE_UNIX -DCMPI_STANDALONE \
		-I$(srcdir)/../resource-access \
		-I$(srcdir)/include \
		-I$(srcdir)/CIM_ConcreteJob \
        -I$(srcdir)/Linux_SambaShareOptions \
        -I$(srcdir)/Linux_SambaService



################################################################################
# Linux_SambaShareOptions
libcmpiLinux_SambaShareOptions_la_SOURCES = \
        $(srcdir)/Linux_SambaShareOptions/CmpiLinux_SambaShareOptionsProvider.cpp \
        $(srcdir)/Linux_SambaShareOptions/Linux_SambaShareOptionsDefaultImplementation.cpp \
        $(srcdir)/Linux_SambaShareOptions/Linux_SambaShareOptionsExternal.cpp \
        $(srcdir)/Linux_SambaShareOptions/Linux_SambaShareOptionsFactory.cpp \
        $(srcdir)/Linux_SambaShareOptions/Linux_SambaShareOptionsInstance.cpp \
        $(srcdir)/Linux_SambaShareOptions/Linux_SambaShareOptionsInstanceName.cpp \
        $(srcdir)/Linux_SambaShareOptions/Linux_SambaShareOptionsManualInstance.cpp \
        $(srcdir)/Linux_SambaShareOptions/Linux_SambaShareOptionsRepositoryExternal.cpp \
        $(srcdir)/Linux_SambaShareOptions/Linux_SambaShareOptionsRepositoryInstance.cpp \
        $(srcdir)/Linux_SambaShareOptions/Linux_SambaShareOptionsResourceAccess.cpp

noinst_HEADERS+= \
        $(srcdir)/Linux_SambaShareOptions/CmpiLinux_SambaShareOptionsProvider.h \
        $(srcdir)/Linux_SambaShareOptions/Linux_SambaShareOptionsDefaultImplementation.h \
        $(srcdir)/Linux_SambaShareOptions/Linux_SambaShareOptionsExternal.h \
        $(srcdir)/Linux_SambaShareOptions/Linux_SambaShareOptionsFactory.h \
        $(srcdir)/Linux_SambaShareOptions/Linux_SambaShareOptionsInstance.h \
        $(srcdir)/Linux_SambaShareOptions/Linux_SambaShareOptionsInstanceName.h \
        $(srcdir)/Linux_SambaShareOptions/Linux_SambaShareOptionsInterface.h \
        $(srcdir)/Linux_SambaShareOptions/Linux_SambaShareOptionsManualInstance.h \
        $(srcdir)/Linux_SambaShareOptions/Linux_SambaShareOptionsRepositoryExternal.h \
        $(srcdir)/Linux_SambaShareOptions/Linux_SambaShareOptionsRepositoryInstance.h \
        $(srcdir)/Linux_SambaShareOptions/Linux_SambaShareOptionsResourceAccess.h

libcmpiLinux_SambaShareOptions_la_LIBADD = \
        -L../resource-access\
        -lRaToolsSmb \
        -lIBM_SmbProviderTooling \
        -lLinux_SmbGeneralProviderBasic \
        -lcmpiCIM_ConcreteJob

libcmpiLinux_SambaShareOptions_la_CPPFLAGS = \
        -D_COMPILE_UNIX -DCMPI_STANDALONE \
		-I$(srcdir)/../resource-access \
		-I$(srcdir)/include \
		-I$(srcdir)/CIM_ConcreteJob 



################################################################################
# Linux_SambaSharePrinterBrowseForPrinter
libcmpiLinux_SambaSharePrinterBrowseForPrinter_la_SOURCES = \
        $(srcdir)/Linux_SambaSharePrinterBrowseForPrinter/CmpiLinux_SambaSharePrinterBrowseForPrinterProvider.cpp \
        $(srcdir)/Linux_SambaSharePrinterBrowseForPrinter/Linux_SambaSharePrinterBrowseForPrinterDefaultImplementation.cpp \
        $(srcdir)/Linux_SambaSharePrinterBrowseForPrinter/Linux_SambaSharePrinterBrowseForPrinterExternal.cpp \
        $(srcdir)/Linux_SambaSharePrinterBrowseForPrinter/Linux_SambaSharePrinterBrowseForPrinterFactory.cpp \
        $(srcdir)/Linux_SambaSharePrinterBrowseForPrinter/Linux_SambaSharePrinterBrowseForPrinterInstance.cpp \
        $(srcdir)/Linux_SambaSharePrinterBrowseForPrinter/Linux_SambaSharePrinterBrowseForPrinterInstanceName.cpp \
        $(srcdir)/Linux_SambaSharePrinterBrowseForPrinter/Linux_SambaSharePrinterBrowseForPrinterManualInstance.cpp \
        $(srcdir)/Linux_SambaSharePrinterBrowseForPrinter/Linux_SambaSharePrinterBrowseForPrinterRepositoryExternal.cpp \
        $(srcdir)/Linux_SambaSharePrinterBrowseForPrinter/Linux_SambaSharePrinterBrowseForPrinterRepositoryInstance.cpp \
        $(srcdir)/Linux_SambaSharePrinterBrowseForPrinter/Linux_SambaSharePrinterBrowseForPrinterResourceAccess.cpp

noinst_HEADERS+= \
        $(srcdir)/Linux_SambaSharePrinterBrowseForPrinter/CmpiLinux_SambaSharePrinterBrowseForPrinterProvider.h \
        $(srcdir)/Linux_SambaSharePrinterBrowseForPrinter/Linux_SambaSharePrinterBrowseForPrinterDefaultImplementation.h \
        $(srcdir)/Linux_SambaSharePrinterBrowseForPrinter/Linux_SambaSharePrinterBrowseForPrinterExternal.h \
        $(srcdir)/Linux_SambaSharePrinterBrowseForPrinter/Linux_SambaSharePrinterBrowseForPrinterFactory.h \
        $(srcdir)/Linux_SambaSharePrinterBrowseForPrinter/Linux_SambaSharePrinterBrowseForPrinterInstance.h \
        $(srcdir)/Linux_SambaSharePrinterBrowseForPrinter/Linux_SambaSharePrinterBrowseForPrinterInstanceName.h \
        $(srcdir)/Linux_SambaSharePrinterBrowseForPrinter/Linux_SambaSharePrinterBrowseForPrinterInterface.h \
        $(srcdir)/Linux_SambaSharePrinterBrowseForPrinter/Linux_SambaSharePrinterBrowseForPrinterManualInstance.h \
        $(srcdir)/Linux_SambaSharePrinterBrowseForPrinter/Linux_SambaSharePrinterBrowseForPrinterRepositoryExternal.h \
        $(srcdir)/Linux_SambaSharePrinterBrowseForPrinter/Linux_SambaSharePrinterBrowseForPrinterRepositoryInstance.h \
        $(srcdir)/Linux_SambaSharePrinterBrowseForPrinter/Linux_SambaSharePrinterBrowseForPrinterResourceAccess.h

libcmpiLinux_SambaSharePrinterBrowseForPrinter_la_LIBADD = \
        -L../resource-access\
        -lRaToolsSmb \
        -lIBM_SmbProviderTooling \
        -lLinux_SmbGeneralProviderBasic \
        -lcmpiLinux_SambaSharePrinterBrowseOptions \
        -lcmpiLinux_SambaPrinterOptions \
        -lcmpiCIM_ConcreteJob

libcmpiLinux_SambaSharePrinterBrowseForPrinter_la_CPPFLAGS = \
        -D_COMPILE_UNIX -DCMPI_STANDALONE \
		-I$(srcdir)/../resource-access \
		-I$(srcdir)/include \
		-I$(srcdir)/CIM_ConcreteJob \
        -I$(srcdir)/Linux_SambaSharePrinterBrowseOptions \
        -I$(srcdir)/Linux_SambaPrinterOptions



################################################################################
# Linux_SambaSharePrinterBrowseForShare
libcmpiLinux_SambaSharePrinterBrowseForShare_la_SOURCES = \
        $(srcdir)/Linux_SambaSharePrinterBrowseForShare/CmpiLinux_SambaSharePrinterBrowseForShareProvider.cpp \
        $(srcdir)/Linux_SambaSharePrinterBrowseForShare/Linux_SambaSharePrinterBrowseForShareDefaultImplementation.cpp \
        $(srcdir)/Linux_SambaSharePrinterBrowseForShare/Linux_SambaSharePrinterBrowseForShareExternal.cpp \
        $(srcdir)/Linux_SambaSharePrinterBrowseForShare/Linux_SambaSharePrinterBrowseForShareFactory.cpp \
        $(srcdir)/Linux_SambaSharePrinterBrowseForShare/Linux_SambaSharePrinterBrowseForShareInstance.cpp \
        $(srcdir)/Linux_SambaSharePrinterBrowseForShare/Linux_SambaSharePrinterBrowseForShareInstanceName.cpp \
        $(srcdir)/Linux_SambaSharePrinterBrowseForShare/Linux_SambaSharePrinterBrowseForShareManualInstance.cpp \
        $(srcdir)/Linux_SambaSharePrinterBrowseForShare/Linux_SambaSharePrinterBrowseForShareRepositoryExternal.cpp \
        $(srcdir)/Linux_SambaSharePrinterBrowseForShare/Linux_SambaSharePrinterBrowseForShareRepositoryInstance.cpp \
        $(srcdir)/Linux_SambaSharePrinterBrowseForShare/Linux_SambaSharePrinterBrowseForShareResourceAccess.cpp

noinst_HEADERS+= \
        $(srcdir)/Linux_SambaSharePrinterBrowseForShare/CmpiLinux_SambaSharePrinterBrowseForShareProvider.h \
        $(srcdir)/Linux_SambaSharePrinterBrowseForShare/Linux_SambaSharePrinterBrowseForShareDefaultImplementation.h \
        $(srcdir)/Linux_SambaSharePrinterBrowseForShare/Linux_SambaSharePrinterBrowseForShareExternal.h \
        $(srcdir)/Linux_SambaSharePrinterBrowseForShare/Linux_SambaSharePrinterBrowseForShareFactory.h \
        $(srcdir)/Linux_SambaSharePrinterBrowseForShare/Linux_SambaSharePrinterBrowseForShareInstance.h \
        $(srcdir)/Linux_SambaSharePrinterBrowseForShare/Linux_SambaSharePrinterBrowseForShareInstanceName.h \
        $(srcdir)/Linux_SambaSharePrinterBrowseForShare/Linux_SambaSharePrinterBrowseForShareInterface.h \
        $(srcdir)/Linux_SambaSharePrinterBrowseForShare/Linux_SambaSharePrinterBrowseForShareManualInstance.h \
        $(srcdir)/Linux_SambaSharePrinterBrowseForShare/Linux_SambaSharePrinterBrowseForShareRepositoryExternal.h \
        $(srcdir)/Linux_SambaSharePrinterBrowseForShare/Linux_SambaSharePrinterBrowseForShareRepositoryInstance.h \
        $(srcdir)/Linux_SambaSharePrinterBrowseForShare/Linux_SambaSharePrinterBrowseForShareResourceAccess.h

libcmpiLinux_SambaSharePrinterBrowseForShare_la_LIBADD = \
        -L../resource-access\
        -lRaToolsSmb \
        -lIBM_SmbProviderTooling \
        -lLinux_SmbGeneralProviderBasic \
        -lcmpiLinux_SambaShareOptions \
        -lcmpiLinux_SambaSharePrinterBrowseOptions \
        -lcmpiCIM_ConcreteJob

libcmpiLinux_SambaSharePrinterBrowseForShare_la_CPPFLAGS = \
        -D_COMPILE_UNIX -DCMPI_STANDALONE \
		-I$(srcdir)/../resource-access \
		-I$(srcdir)/include \
		-I$(srcdir)/CIM_ConcreteJob \
        -I$(srcdir)/Linux_SambaShareOptions \
        -I$(srcdir)/Linux_SambaSharePrinterBrowseOptions



################################################################################
# Linux_SambaSharePrinterBrowseOptions
libcmpiLinux_SambaSharePrinterBrowseOptions_la_SOURCES = \
        $(srcdir)/Linux_SambaSharePrinterBrowseOptions/CmpiLinux_SambaSharePrinterBrowseOptionsProvider.cpp \
        $(srcdir)/Linux_SambaSharePrinterBrowseOptions/Linux_SambaSharePrinterBrowseOptionsDefaultImplementation.cpp \
        $(srcdir)/Linux_SambaSharePrinterBrowseOptions/Linux_SambaSharePrinterBrowseOptionsExternal.cpp \
        $(srcdir)/Linux_SambaSharePrinterBrowseOptions/Linux_SambaSharePrinterBrowseOptionsFactory.cpp \
        $(srcdir)/Linux_SambaSharePrinterBrowseOptions/Linux_SambaSharePrinterBrowseOptionsInstance.cpp \
        $(srcdir)/Linux_SambaSharePrinterBrowseOptions/Linux_SambaSharePrinterBrowseOptionsInstanceName.cpp \
        $(srcdir)/Linux_SambaSharePrinterBrowseOptions/Linux_SambaSharePrinterBrowseOptionsManualInstance.cpp \
        $(srcdir)/Linux_SambaSharePrinterBrowseOptions/Linux_SambaSharePrinterBrowseOptionsRepositoryExternal.cpp \
        $(srcdir)/Linux_SambaSharePrinterBrowseOptions/Linux_SambaSharePrinterBrowseOptionsRepositoryInstance.cpp \
        $(srcdir)/Linux_SambaSharePrinterBrowseOptions/Linux_SambaSharePrinterBrowseOptionsResourceAccess.cpp

noinst_HEADERS+= \
        $(srcdir)/Linux_SambaSharePrinterBrowseOptions/CmpiLinux_SambaSharePrinterBrowseOptionsProvider.h \
        $(srcdir)/Linux_SambaSharePrinterBrowseOptions/Linux_SambaSharePrinterBrowseOptionsDefaultImplementation.h \
        $(srcdir)/Linux_SambaSharePrinterBrowseOptions/Linux_SambaSharePrinterBrowseOptionsExternal.h \
        $(srcdir)/Linux_SambaSharePrinterBrowseOptions/Linux_SambaSharePrinterBrowseOptionsFactory.h \
        $(srcdir)/Linux_SambaSharePrinterBrowseOptions/Linux_SambaSharePrinterBrowseOptionsInstance.h \
        $(srcdir)/Linux_SambaSharePrinterBrowseOptions/Linux_SambaSharePrinterBrowseOptionsInstanceName.h \
        $(srcdir)/Linux_SambaSharePrinterBrowseOptions/Linux_SambaSharePrinterBrowseOptionsInterface.h \
        $(srcdir)/Linux_SambaSharePrinterBrowseOptions/Linux_SambaSharePrinterBrowseOptionsManualInstance.h \
        $(srcdir)/Linux_SambaSharePrinterBrowseOptions/Linux_SambaSharePrinterBrowseOptionsRepositoryExternal.h \
        $(srcdir)/Linux_SambaSharePrinterBrowseOptions/Linux_SambaSharePrinterBrowseOptionsRepositoryInstance.h \
        $(srcdir)/Linux_SambaSharePrinterBrowseOptions/Linux_SambaSharePrinterBrowseOptionsResourceAccess.h

libcmpiLinux_SambaSharePrinterBrowseOptions_la_LIBADD = \
        -L../resource-access\
        -lRaToolsSmb \
        -lIBM_SmbProviderTooling \
        -lLinux_SmbGeneralProviderBasic \
        -lcmpiCIM_ConcreteJob

libcmpiLinux_SambaSharePrinterBrowseOptions_la_CPPFLAGS = \
        -D_COMPILE_UNIX -DCMPI_STANDALONE \
		-I$(srcdir)/../resource-access \
		-I$(srcdir)/include \
		-I$(srcdir)/CIM_ConcreteJob 



################################################################################
# Linux_SambaShareProtocolForShare
libcmpiLinux_SambaShareProtocolForShare_la_SOURCES = \
        $(srcdir)/Linux_SambaShareProtocolForShare/CmpiLinux_SambaShareProtocolForShareProvider.cpp \
        $(srcdir)/Linux_SambaShareProtocolForShare/Linux_SambaShareProtocolForShareDefaultImplementation.cpp \
        $(srcdir)/Linux_SambaShareProtocolForShare/Linux_SambaShareProtocolForShareExternal.cpp \
        $(srcdir)/Linux_SambaShareProtocolForShare/Linux_SambaShareProtocolForShareFactory.cpp \
        $(srcdir)/Linux_SambaShareProtocolForShare/Linux_SambaShareProtocolForShareInstance.cpp \
        $(srcdir)/Linux_SambaShareProtocolForShare/Linux_SambaShareProtocolForShareInstanceName.cpp \
        $(srcdir)/Linux_SambaShareProtocolForShare/Linux_SambaShareProtocolForShareManualInstance.cpp \
        $(srcdir)/Linux_SambaShareProtocolForShare/Linux_SambaShareProtocolForShareRepositoryExternal.cpp \
        $(srcdir)/Linux_SambaShareProtocolForShare/Linux_SambaShareProtocolForShareRepositoryInstance.cpp \
        $(srcdir)/Linux_SambaShareProtocolForShare/Linux_SambaShareProtocolForShareResourceAccess.cpp

noinst_HEADERS+= \
        $(srcdir)/Linux_SambaShareProtocolForShare/CmpiLinux_SambaShareProtocolForShareProvider.h \
        $(srcdir)/Linux_SambaShareProtocolForShare/Linux_SambaShareProtocolForShareDefaultImplementation.h \
        $(srcdir)/Linux_SambaShareProtocolForShare/Linux_SambaShareProtocolForShareExternal.h \
        $(srcdir)/Linux_SambaShareProtocolForShare/Linux_SambaShareProtocolForShareFactory.h \
        $(srcdir)/Linux_SambaShareProtocolForShare/Linux_SambaShareProtocolForShareInstance.h \
        $(srcdir)/Linux_SambaShareProtocolForShare/Linux_SambaShareProtocolForShareInstanceName.h \
        $(srcdir)/Linux_SambaShareProtocolForShare/Linux_SambaShareProtocolForShareInterface.h \
        $(srcdir)/Linux_SambaShareProtocolForShare/Linux_SambaShareProtocolForShareManualInstance.h \
        $(srcdir)/Linux_SambaShareProtocolForShare/Linux_SambaShareProtocolForShareRepositoryExternal.h \
        $(srcdir)/Linux_SambaShareProtocolForShare/Linux_SambaShareProtocolForShareRepositoryInstance.h \
        $(srcdir)/Linux_SambaShareProtocolForShare/Linux_SambaShareProtocolForShareResourceAccess.h

libcmpiLinux_SambaShareProtocolForShare_la_LIBADD = \
        -L../resource-access\
        -lRaToolsSmb \
        -lIBM_SmbProviderTooling \
        -lLinux_SmbGeneralProviderBasic \
        -lcmpiLinux_SambaShareProtocolOptions \
        -lcmpiLinux_SambaShareOptions \
        -lcmpiCIM_ConcreteJob

libcmpiLinux_SambaShareProtocolForShare_la_CPPFLAGS = \
        -D_COMPILE_UNIX -DCMPI_STANDALONE \
		-I$(srcdir)/../resource-access \
		-I$(srcdir)/include \
		-I$(srcdir)/CIM_ConcreteJob \
        -I$(srcdir)/Linux_SambaShareProtocolOptions \
        -I$(srcdir)/Linux_SambaShareOptions



################################################################################
# Linux_SambaShareProtocolOptions
libcmpiLinux_SambaShareProtocolOptions_la_SOURCES = \
        $(srcdir)/Linux_SambaShareProtocolOptions/CmpiLinux_SambaShareProtocolOptionsProvider.cpp \
        $(srcdir)/Linux_SambaShareProtocolOptions/Linux_SambaShareProtocolOptionsDefaultImplementation.cpp \
        $(srcdir)/Linux_SambaShareProtocolOptions/Linux_SambaShareProtocolOptionsExternal.cpp \
        $(srcdir)/Linux_SambaShareProtocolOptions/Linux_SambaShareProtocolOptionsFactory.cpp \
        $(srcdir)/Linux_SambaShareProtocolOptions/Linux_SambaShareProtocolOptionsInstance.cpp \
        $(srcdir)/Linux_SambaShareProtocolOptions/Linux_SambaShareProtocolOptionsInstanceName.cpp \
        $(srcdir)/Linux_SambaShareProtocolOptions/Linux_SambaShareProtocolOptionsManualInstance.cpp \
        $(srcdir)/Linux_SambaShareProtocolOptions/Linux_SambaShareProtocolOptionsRepositoryExternal.cpp \
        $(srcdir)/Linux_SambaShareProtocolOptions/Linux_SambaShareProtocolOptionsRepositoryInstance.cpp \
        $(srcdir)/Linux_SambaShareProtocolOptions/Linux_SambaShareProtocolOptionsResourceAccess.cpp

noinst_HEADERS+= \
        $(srcdir)/Linux_SambaShareProtocolOptions/CmpiLinux_SambaShareProtocolOptionsProvider.h \
        $(srcdir)/Linux_SambaShareProtocolOptions/Linux_SambaShareProtocolOptionsDefaultImplementation.h \
        $(srcdir)/Linux_SambaShareProtocolOptions/Linux_SambaShareProtocolOptionsExternal.h \
        $(srcdir)/Linux_SambaShareProtocolOptions/Linux_SambaShareProtocolOptionsFactory.h \
        $(srcdir)/Linux_SambaShareProtocolOptions/Linux_SambaShareProtocolOptionsInstance.h \
        $(srcdir)/Linux_SambaShareProtocolOptions/Linux_SambaShareProtocolOptionsInstanceName.h \
        $(srcdir)/Linux_SambaShareProtocolOptions/Linux_SambaShareProtocolOptionsInterface.h \
        $(srcdir)/Linux_SambaShareProtocolOptions/Linux_SambaShareProtocolOptionsManualInstance.h \
        $(srcdir)/Linux_SambaShareProtocolOptions/Linux_SambaShareProtocolOptionsRepositoryExternal.h \
        $(srcdir)/Linux_SambaShareProtocolOptions/Linux_SambaShareProtocolOptionsRepositoryInstance.h \
        $(srcdir)/Linux_SambaShareProtocolOptions/Linux_SambaShareProtocolOptionsResourceAccess.h

libcmpiLinux_SambaShareProtocolOptions_la_LIBADD = \
        -L../resource-access\
        -lRaToolsSmb \
        -lIBM_SmbProviderTooling \
        -lLinux_SmbGeneralProviderBasic \
        -lcmpiCIM_ConcreteJob

libcmpiLinux_SambaShareProtocolOptions_la_CPPFLAGS = \
        -D_COMPILE_UNIX -DCMPI_STANDALONE \
		-I$(srcdir)/../resource-access \
		-I$(srcdir)/include \
		-I$(srcdir)/CIM_ConcreteJob 



################################################################################
# Linux_SambaShareSecurityForGlobal
libcmpiLinux_SambaShareSecurityForGlobal_la_SOURCES = \
        $(srcdir)/Linux_SambaShareSecurityForGlobal/CmpiLinux_SambaShareSecurityForGlobalProvider.cpp \
        $(srcdir)/Linux_SambaShareSecurityForGlobal/Linux_SambaShareSecurityForGlobalDefaultImplementation.cpp \
        $(srcdir)/Linux_SambaShareSecurityForGlobal/Linux_SambaShareSecurityForGlobalExternal.cpp \
        $(srcdir)/Linux_SambaShareSecurityForGlobal/Linux_SambaShareSecurityForGlobalFactory.cpp \
        $(srcdir)/Linux_SambaShareSecurityForGlobal/Linux_SambaShareSecurityForGlobalInstance.cpp \
        $(srcdir)/Linux_SambaShareSecurityForGlobal/Linux_SambaShareSecurityForGlobalInstanceName.cpp \
        $(srcdir)/Linux_SambaShareSecurityForGlobal/Linux_SambaShareSecurityForGlobalManualInstance.cpp \
        $(srcdir)/Linux_SambaShareSecurityForGlobal/Linux_SambaShareSecurityForGlobalRepositoryExternal.cpp \
        $(srcdir)/Linux_SambaShareSecurityForGlobal/Linux_SambaShareSecurityForGlobalRepositoryInstance.cpp \
        $(srcdir)/Linux_SambaShareSecurityForGlobal/Linux_SambaShareSecurityForGlobalResourceAccess.cpp

noinst_HEADERS+= \
        $(srcdir)/Linux_SambaShareSecurityForGlobal/CmpiLinux_SambaShareSecurityForGlobalProvider.h \
        $(srcdir)/Linux_SambaShareSecurityForGlobal/Linux_SambaShareSecurityForGlobalDefaultImplementation.h \
        $(srcdir)/Linux_SambaShareSecurityForGlobal/Linux_SambaShareSecurityForGlobalExternal.h \
        $(srcdir)/Linux_SambaShareSecurityForGlobal/Linux_SambaShareSecurityForGlobalFactory.h \
        $(srcdir)/Linux_SambaShareSecurityForGlobal/Linux_SambaShareSecurityForGlobalInstance.h \
        $(srcdir)/Linux_SambaShareSecurityForGlobal/Linux_SambaShareSecurityForGlobalInstanceName.h \
        $(srcdir)/Linux_SambaShareSecurityForGlobal/Linux_SambaShareSecurityForGlobalInterface.h \
        $(srcdir)/Linux_SambaShareSecurityForGlobal/Linux_SambaShareSecurityForGlobalManualInstance.h \
        $(srcdir)/Linux_SambaShareSecurityForGlobal/Linux_SambaShareSecurityForGlobalRepositoryExternal.h \
        $(srcdir)/Linux_SambaShareSecurityForGlobal/Linux_SambaShareSecurityForGlobalRepositoryInstance.h \
        $(srcdir)/Linux_SambaShareSecurityForGlobal/Linux_SambaShareSecurityForGlobalResourceAccess.h

libcmpiLinux_SambaShareSecurityForGlobal_la_LIBADD = \
        -L../resource-access\
        -lRaToolsSmb \
        -lIBM_SmbProviderTooling \
        -lLinux_SmbGeneralProviderBasic \
        -lcmpiLinux_SambaGlobalOptions \
        -lcmpiLinux_SambaShareSecurityOptions \
        -lcmpiCIM_ConcreteJob

libcmpiLinux_SambaShareSecurityForGlobal_la_CPPFLAGS = \
        -D_COMPILE_UNIX -DCMPI_STANDALONE \
		-I$(srcdir)/../resource-access \
		-I$(srcdir)/include \
		-I$(srcdir)/CIM_ConcreteJob \
        -I$(srcdir)/Linux_SambaGlobalOptions \
        -I$(srcdir)/Linux_SambaShareSecurityOptions



################################################################################
# Linux_SambaShareSecurityForShare
libcmpiLinux_SambaShareSecurityForShare_la_SOURCES = \
        $(srcdir)/Linux_SambaShareSecurityForShare/CmpiLinux_SambaShareSecurityForShareProvider.cpp \
        $(srcdir)/Linux_SambaShareSecurityForShare/Linux_SambaShareSecurityForShareDefaultImplementation.cpp \
        $(srcdir)/Linux_SambaShareSecurityForShare/Linux_SambaShareSecurityForShareExternal.cpp \
        $(srcdir)/Linux_SambaShareSecurityForShare/Linux_SambaShareSecurityForShareFactory.cpp \
        $(srcdir)/Linux_SambaShareSecurityForShare/Linux_SambaShareSecurityForShareInstance.cpp \
        $(srcdir)/Linux_SambaShareSecurityForShare/Linux_SambaShareSecurityForShareInstanceName.cpp \
        $(srcdir)/Linux_SambaShareSecurityForShare/Linux_SambaShareSecurityForShareManualInstance.cpp \
        $(srcdir)/Linux_SambaShareSecurityForShare/Linux_SambaShareSecurityForShareRepositoryExternal.cpp \
        $(srcdir)/Linux_SambaShareSecurityForShare/Linux_SambaShareSecurityForShareRepositoryInstance.cpp \
        $(srcdir)/Linux_SambaShareSecurityForShare/Linux_SambaShareSecurityForShareResourceAccess.cpp

noinst_HEADERS+= \
        $(srcdir)/Linux_SambaShareSecurityForShare/CmpiLinux_SambaShareSecurityForShareProvider.h \
        $(srcdir)/Linux_SambaShareSecurityForShare/Linux_SambaShareSecurityForShareDefaultImplementation.h \
        $(srcdir)/Linux_SambaShareSecurityForShare/Linux_SambaShareSecurityForShareExternal.h \
        $(srcdir)/Linux_SambaShareSecurityForShare/Linux_SambaShareSecurityForShareFactory.h \
        $(srcdir)/Linux_SambaShareSecurityForShare/Linux_SambaShareSecurityForShareInstance.h \
        $(srcdir)/Linux_SambaShareSecurityForShare/Linux_SambaShareSecurityForShareInstanceName.h \
        $(srcdir)/Linux_SambaShareSecurityForShare/Linux_SambaShareSecurityForShareInterface.h \
        $(srcdir)/Linux_SambaShareSecurityForShare/Linux_SambaShareSecurityForShareManualInstance.h \
        $(srcdir)/Linux_SambaShareSecurityForShare/Linux_SambaShareSecurityForShareRepositoryExternal.h \
        $(srcdir)/Linux_SambaShareSecurityForShare/Linux_SambaShareSecurityForShareRepositoryInstance.h \
        $(srcdir)/Linux_SambaShareSecurityForShare/Linux_SambaShareSecurityForShareResourceAccess.h

libcmpiLinux_SambaShareSecurityForShare_la_LIBADD = \
        -L../resource-access\
        -lRaToolsSmb \
        -lIBM_SmbProviderTooling \
        -lLinux_SmbGeneralProviderBasic \
        -lcmpiLinux_SambaShareSecurityOptions \
        -lcmpiLinux_SambaShareOptions \
        -lcmpiCIM_ConcreteJob

libcmpiLinux_SambaShareSecurityForShare_la_CPPFLAGS = \
        -D_COMPILE_UNIX -DCMPI_STANDALONE \
		-I$(srcdir)/../resource-access \
		-I$(srcdir)/include \
		-I$(srcdir)/CIM_ConcreteJob \
        -I$(srcdir)/Linux_SambaShareSecurityOptions \
        -I$(srcdir)/Linux_SambaShareOptions



################################################################################
# Linux_SambaShareSecurityOptions
libcmpiLinux_SambaShareSecurityOptions_la_SOURCES = \
        $(srcdir)/Linux_SambaShareSecurityOptions/CmpiLinux_SambaShareSecurityOptionsProvider.cpp \
        $(srcdir)/Linux_SambaShareSecurityOptions/Linux_SambaShareSecurityOptionsDefaultImplementation.cpp \
        $(srcdir)/Linux_SambaShareSecurityOptions/Linux_SambaShareSecurityOptionsExternal.cpp \
        $(srcdir)/Linux_SambaShareSecurityOptions/Linux_SambaShareSecurityOptionsFactory.cpp \
        $(srcdir)/Linux_SambaShareSecurityOptions/Linux_SambaShareSecurityOptionsInstance.cpp \
        $(srcdir)/Linux_SambaShareSecurityOptions/Linux_SambaShareSecurityOptionsInstanceName.cpp \
        $(srcdir)/Linux_SambaShareSecurityOptions/Linux_SambaShareSecurityOptionsManualInstance.cpp \
        $(srcdir)/Linux_SambaShareSecurityOptions/Linux_SambaShareSecurityOptionsRepositoryExternal.cpp \
        $(srcdir)/Linux_SambaShareSecurityOptions/Linux_SambaShareSecurityOptionsRepositoryInstance.cpp \
        $(srcdir)/Linux_SambaShareSecurityOptions/Linux_SambaShareSecurityOptionsResourceAccess.cpp

noinst_HEADERS+= \
        $(srcdir)/Linux_SambaShareSecurityOptions/CmpiLinux_SambaShareSecurityOptionsProvider.h \
        $(srcdir)/Linux_SambaShareSecurityOptions/Linux_SambaShareSecurityOptionsDefaultImplementation.h \
        $(srcdir)/Linux_SambaShareSecurityOptions/Linux_SambaShareSecurityOptionsExternal.h \
        $(srcdir)/Linux_SambaShareSecurityOptions/Linux_SambaShareSecurityOptionsFactory.h \
        $(srcdir)/Linux_SambaShareSecurityOptions/Linux_SambaShareSecurityOptionsInstance.h \
        $(srcdir)/Linux_SambaShareSecurityOptions/Linux_SambaShareSecurityOptionsInstanceName.h \
        $(srcdir)/Linux_SambaShareSecurityOptions/Linux_SambaShareSecurityOptionsInterface.h \
        $(srcdir)/Linux_SambaShareSecurityOptions/Linux_SambaShareSecurityOptionsManualInstance.h \
        $(srcdir)/Linux_SambaShareSecurityOptions/Linux_SambaShareSecurityOptionsRepositoryExternal.h \
        $(srcdir)/Linux_SambaShareSecurityOptions/Linux_SambaShareSecurityOptionsRepositoryInstance.h \
        $(srcdir)/Linux_SambaShareSecurityOptions/Linux_SambaShareSecurityOptionsResourceAccess.h

libcmpiLinux_SambaShareSecurityOptions_la_LIBADD = \
        -L../resource-access\
        -lRaToolsSmb \
        -lIBM_SmbProviderTooling \
        -lLinux_SmbGeneralProviderBasic \
        -lcmpiCIM_ConcreteJob

libcmpiLinux_SambaShareSecurityOptions_la_CPPFLAGS = \
        -D_COMPILE_UNIX -DCMPI_STANDALONE \
		-I$(srcdir)/../resource-access \
		-I$(srcdir)/include \
		-I$(srcdir)/CIM_ConcreteJob 



################################################################################
# Linux_SambaUser
libcmpiLinux_SambaUser_la_SOURCES = \
        $(srcdir)/Linux_SambaUser/CmpiLinux_SambaUserProvider.cpp \
        $(srcdir)/Linux_SambaUser/Linux_SambaUserDefaultImplementation.cpp \
        $(srcdir)/Linux_SambaUser/Linux_SambaUserExternal.cpp \
        $(srcdir)/Linux_SambaUser/Linux_SambaUserFactory.cpp \
        $(srcdir)/Linux_SambaUser/Linux_SambaUserInstance.cpp \
        $(srcdir)/Linux_SambaUser/Linux_SambaUserInstanceName.cpp \
        $(srcdir)/Linux_SambaUser/Linux_SambaUserManualInstance.cpp \
        $(srcdir)/Linux_SambaUser/Linux_SambaUserRepositoryExternal.cpp \
        $(srcdir)/Linux_SambaUser/Linux_SambaUserRepositoryInstance.cpp \
        $(srcdir)/Linux_SambaUser/Linux_SambaUserResourceAccess.cpp

noinst_HEADERS+= \
        $(srcdir)/Linux_SambaUser/CmpiLinux_SambaUserProvider.h \
        $(srcdir)/Linux_SambaUser/Linux_SambaUserDefaultImplementation.h \
        $(srcdir)/Linux_SambaUser/Linux_SambaUserExternal.h \
        $(srcdir)/Linux_SambaUser/Linux_SambaUserFactory.h \
        $(srcdir)/Linux_SambaUser/Linux_SambaUserInstance.h \
        $(srcdir)/Linux_SambaUser/Linux_SambaUserInstanceName.h \
        $(srcdir)/Linux_SambaUser/Linux_SambaUserInterface.h \
        $(srcdir)/Linux_SambaUser/Linux_SambaUserManualInstance.h \
        $(srcdir)/Linux_SambaUser/Linux_SambaUserRepositoryExternal.h \
        $(srcdir)/Linux_SambaUser/Linux_SambaUserRepositoryInstance.h \
        $(srcdir)/Linux_SambaUser/Linux_SambaUserResourceAccess.h

libcmpiLinux_SambaUser_la_LIBADD = \
        -L../resource-access\
        -lRaToolsSmb \
        -lIBM_SmbProviderTooling \
        -lLinux_SmbGeneralProviderBasic \
        -lcmpiCIM_ConcreteJob

libcmpiLinux_SambaUser_la_CPPFLAGS = \
        -D_COMPILE_UNIX -DCMPI_STANDALONE \
		-I$(srcdir)/../resource-access \
		-I$(srcdir)/include \
		-I$(srcdir)/CIM_ConcreteJob 



################################################################################
# Linux_SambaUsersForService
libcmpiLinux_SambaUsersForService_la_SOURCES = \
        $(srcdir)/Linux_SambaUsersForService/CmpiLinux_SambaUsersForServiceProvider.cpp \
        $(srcdir)/Linux_SambaUsersForService/Linux_SambaUsersForServiceDefaultImplementation.cpp \
        $(srcdir)/Linux_SambaUsersForService/Linux_SambaUsersForServiceExternal.cpp \
        $(srcdir)/Linux_SambaUsersForService/Linux_SambaUsersForServiceFactory.cpp \
        $(srcdir)/Linux_SambaUsersForService/Linux_SambaUsersForServiceInstance.cpp \
        $(srcdir)/Linux_SambaUsersForService/Linux_SambaUsersForServiceInstanceName.cpp \
        $(srcdir)/Linux_SambaUsersForService/Linux_SambaUsersForServiceManualInstance.cpp \
        $(srcdir)/Linux_SambaUsersForService/Linux_SambaUsersForServiceRepositoryExternal.cpp \
        $(srcdir)/Linux_SambaUsersForService/Linux_SambaUsersForServiceRepositoryInstance.cpp \
        $(srcdir)/Linux_SambaUsersForService/Linux_SambaUsersForServiceResourceAccess.cpp

noinst_HEADERS+= \
        $(srcdir)/Linux_SambaUsersForService/CmpiLinux_SambaUsersForServiceProvider.h \
        $(srcdir)/Linux_SambaUsersForService/Linux_SambaUsersForServiceDefaultImplementation.h \
        $(srcdir)/Linux_SambaUsersForService/Linux_SambaUsersForServiceExternal.h \
        $(srcdir)/Linux_SambaUsersForService/Linux_SambaUsersForServiceFactory.h \
        $(srcdir)/Linux_SambaUsersForService/Linux_SambaUsersForServiceInstance.h \
        $(srcdir)/Linux_SambaUsersForService/Linux_SambaUsersForServiceInstanceName.h \
        $(srcdir)/Linux_SambaUsersForService/Linux_SambaUsersForServiceInterface.h \
        $(srcdir)/Linux_SambaUsersForService/Linux_SambaUsersForServiceManualInstance.h \
        $(srcdir)/Linux_SambaUsersForService/Linux_SambaUsersForServiceRepositoryExternal.h \
        $(srcdir)/Linux_SambaUsersForService/Linux_SambaUsersForServiceRepositoryInstance.h \
        $(srcdir)/Linux_SambaUsersForService/Linux_SambaUsersForServiceResourceAccess.h

libcmpiLinux_SambaUsersForService_la_LIBADD = \
        -L../resource-access\
        -lRaToolsSmb \
        -lIBM_SmbProviderTooling \
        -lLinux_SmbGeneralProviderBasic \
        -lcmpiLinux_SambaUser \
        -lcmpiLinux_SambaService \
        -lcmpiCIM_ConcreteJob

libcmpiLinux_SambaUsersForService_la_CPPFLAGS = \
        -D_COMPILE_UNIX -DCMPI_STANDALONE \
		-I$(srcdir)/../resource-access \
		-I$(srcdir)/include \
		-I$(srcdir)/CIM_ConcreteJob \
        -I$(srcdir)/Linux_SambaUser \
        -I$(srcdir)/Linux_SambaService



################################################################################
# Linux_SambaValidUsersForGlobal
libcmpiLinux_SambaValidUsersForGlobal_la_SOURCES = \
        $(srcdir)/Linux_SambaValidUsersForGlobal/CmpiLinux_SambaValidUsersForGlobalProvider.cpp \
        $(srcdir)/Linux_SambaValidUsersForGlobal/Linux_SambaValidUsersForGlobalDefaultImplementation.cpp \
        $(srcdir)/Linux_SambaValidUsersForGlobal/Linux_SambaValidUsersForGlobalExternal.cpp \
        $(srcdir)/Linux_SambaValidUsersForGlobal/Linux_SambaValidUsersForGlobalFactory.cpp \
        $(srcdir)/Linux_SambaValidUsersForGlobal/Linux_SambaValidUsersForGlobalInstance.cpp \
        $(srcdir)/Linux_SambaValidUsersForGlobal/Linux_SambaValidUsersForGlobalInstanceName.cpp \
        $(srcdir)/Linux_SambaValidUsersForGlobal/Linux_SambaValidUsersForGlobalManualInstance.cpp \
        $(srcdir)/Linux_SambaValidUsersForGlobal/Linux_SambaValidUsersForGlobalRepositoryExternal.cpp \
        $(srcdir)/Linux_SambaValidUsersForGlobal/Linux_SambaValidUsersForGlobalRepositoryInstance.cpp \
        $(srcdir)/Linux_SambaValidUsersForGlobal/Linux_SambaValidUsersForGlobalResourceAccess.cpp

noinst_HEADERS+= \
        $(srcdir)/Linux_SambaValidUsersForGlobal/CmpiLinux_SambaValidUsersForGlobalProvider.h \
        $(srcdir)/Linux_SambaValidUsersForGlobal/Linux_SambaValidUsersForGlobalDefaultImplementation.h \
        $(srcdir)/Linux_SambaValidUsersForGlobal/Linux_SambaValidUsersForGlobalExternal.h \
        $(srcdir)/Linux_SambaValidUsersForGlobal/Linux_SambaValidUsersForGlobalFactory.h \
        $(srcdir)/Linux_SambaValidUsersForGlobal/Linux_SambaValidUsersForGlobalInstance.h \
        $(srcdir)/Linux_SambaValidUsersForGlobal/Linux_SambaValidUsersForGlobalInstanceName.h \
        $(srcdir)/Linux_SambaValidUsersForGlobal/Linux_SambaValidUsersForGlobalInterface.h \
        $(srcdir)/Linux_SambaValidUsersForGlobal/Linux_SambaValidUsersForGlobalManualInstance.h \
        $(srcdir)/Linux_SambaValidUsersForGlobal/Linux_SambaValidUsersForGlobalRepositoryExternal.h \
        $(srcdir)/Linux_SambaValidUsersForGlobal/Linux_SambaValidUsersForGlobalRepositoryInstance.h \
        $(srcdir)/Linux_SambaValidUsersForGlobal/Linux_SambaValidUsersForGlobalResourceAccess.h

libcmpiLinux_SambaValidUsersForGlobal_la_LIBADD = \
        -L../resource-access\
        -lRaToolsSmb \
        -lIBM_SmbProviderTooling \
        -lLinux_SmbGeneralProviderBasic \
        -lcmpiLinux_SambaUser \
        -lcmpiLinux_SambaGlobalOptions \
        -lcmpiCIM_ConcreteJob

libcmpiLinux_SambaValidUsersForGlobal_la_CPPFLAGS = \
        -D_COMPILE_UNIX -DCMPI_STANDALONE \
		-I$(srcdir)/../resource-access \
		-I$(srcdir)/include \
		-I$(srcdir)/CIM_ConcreteJob \
        -I$(srcdir)/Linux_SambaUser \
        -I$(srcdir)/Linux_SambaGlobalOptions



################################################################################
# Linux_SambaValidUsersForPrinter
libcmpiLinux_SambaValidUsersForPrinter_la_SOURCES = \
        $(srcdir)/Linux_SambaValidUsersForPrinter/CmpiLinux_SambaValidUsersForPrinterProvider.cpp \
        $(srcdir)/Linux_SambaValidUsersForPrinter/Linux_SambaValidUsersForPrinterDefaultImplementation.cpp \
        $(srcdir)/Linux_SambaValidUsersForPrinter/Linux_SambaValidUsersForPrinterExternal.cpp \
        $(srcdir)/Linux_SambaValidUsersForPrinter/Linux_SambaValidUsersForPrinterFactory.cpp \
        $(srcdir)/Linux_SambaValidUsersForPrinter/Linux_SambaValidUsersForPrinterInstance.cpp \
        $(srcdir)/Linux_SambaValidUsersForPrinter/Linux_SambaValidUsersForPrinterInstanceName.cpp \
        $(srcdir)/Linux_SambaValidUsersForPrinter/Linux_SambaValidUsersForPrinterManualInstance.cpp \
        $(srcdir)/Linux_SambaValidUsersForPrinter/Linux_SambaValidUsersForPrinterRepositoryExternal.cpp \
        $(srcdir)/Linux_SambaValidUsersForPrinter/Linux_SambaValidUsersForPrinterRepositoryInstance.cpp \
        $(srcdir)/Linux_SambaValidUsersForPrinter/Linux_SambaValidUsersForPrinterResourceAccess.cpp

noinst_HEADERS+= \
        $(srcdir)/Linux_SambaValidUsersForPrinter/CmpiLinux_SambaValidUsersForPrinterProvider.h \
        $(srcdir)/Linux_SambaValidUsersForPrinter/Linux_SambaValidUsersForPrinterDefaultImplementation.h \
        $(srcdir)/Linux_SambaValidUsersForPrinter/Linux_SambaValidUsersForPrinterExternal.h \
        $(srcdir)/Linux_SambaValidUsersForPrinter/Linux_SambaValidUsersForPrinterFactory.h \
        $(srcdir)/Linux_SambaValidUsersForPrinter/Linux_SambaValidUsersForPrinterInstance.h \
        $(srcdir)/Linux_SambaValidUsersForPrinter/Linux_SambaValidUsersForPrinterInstanceName.h \
        $(srcdir)/Linux_SambaValidUsersForPrinter/Linux_SambaValidUsersForPrinterInterface.h \
        $(srcdir)/Linux_SambaValidUsersForPrinter/Linux_SambaValidUsersForPrinterManualInstance.h \
        $(srcdir)/Linux_SambaValidUsersForPrinter/Linux_SambaValidUsersForPrinterRepositoryExternal.h \
        $(srcdir)/Linux_SambaValidUsersForPrinter/Linux_SambaValidUsersForPrinterRepositoryInstance.h \
        $(srcdir)/Linux_SambaValidUsersForPrinter/Linux_SambaValidUsersForPrinterResourceAccess.h

libcmpiLinux_SambaValidUsersForPrinter_la_LIBADD = \
        -L../resource-access\
        -lRaToolsSmb \
        -lIBM_SmbProviderTooling \
        -lLinux_SmbGeneralProviderBasic \
        -lcmpiLinux_SambaUser \
        -lcmpiLinux_SambaPrinterOptions \
        -lcmpiCIM_ConcreteJob

libcmpiLinux_SambaValidUsersForPrinter_la_CPPFLAGS = \
        -D_COMPILE_UNIX -DCMPI_STANDALONE \
		-I$(srcdir)/../resource-access \
		-I$(srcdir)/include \
		-I$(srcdir)/CIM_ConcreteJob \
        -I$(srcdir)/Linux_SambaUser \
        -I$(srcdir)/Linux_SambaPrinterOptions



################################################################################
# Linux_SambaValidUsersForShare
libcmpiLinux_SambaValidUsersForShare_la_SOURCES = \
        $(srcdir)/Linux_SambaValidUsersForShare/CmpiLinux_SambaValidUsersForShareProvider.cpp \
        $(srcdir)/Linux_SambaValidUsersForShare/Linux_SambaValidUsersForShareDefaultImplementation.cpp \
        $(srcdir)/Linux_SambaValidUsersForShare/Linux_SambaValidUsersForShareExternal.cpp \
        $(srcdir)/Linux_SambaValidUsersForShare/Linux_SambaValidUsersForShareFactory.cpp \
        $(srcdir)/Linux_SambaValidUsersForShare/Linux_SambaValidUsersForShareInstance.cpp \
        $(srcdir)/Linux_SambaValidUsersForShare/Linux_SambaValidUsersForShareInstanceName.cpp \
        $(srcdir)/Linux_SambaValidUsersForShare/Linux_SambaValidUsersForShareManualInstance.cpp \
        $(srcdir)/Linux_SambaValidUsersForShare/Linux_SambaValidUsersForShareRepositoryExternal.cpp \
        $(srcdir)/Linux_SambaValidUsersForShare/Linux_SambaValidUsersForShareRepositoryInstance.cpp \
        $(srcdir)/Linux_SambaValidUsersForShare/Linux_SambaValidUsersForShareResourceAccess.cpp

noinst_HEADERS+= \
        $(srcdir)/Linux_SambaValidUsersForShare/CmpiLinux_SambaValidUsersForShareProvider.h \
        $(srcdir)/Linux_SambaValidUsersForShare/Linux_SambaValidUsersForShareDefaultImplementation.h \
        $(srcdir)/Linux_SambaValidUsersForShare/Linux_SambaValidUsersForShareExternal.h \
        $(srcdir)/Linux_SambaValidUsersForShare/Linux_SambaValidUsersForShareFactory.h \
        $(srcdir)/Linux_SambaValidUsersForShare/Linux_SambaValidUsersForShareInstance.h \
        $(srcdir)/Linux_SambaValidUsersForShare/Linux_SambaValidUsersForShareInstanceName.h \
        $(srcdir)/Linux_SambaValidUsersForShare/Linux_SambaValidUsersForShareInterface.h \
        $(srcdir)/Linux_SambaValidUsersForShare/Linux_SambaValidUsersForShareManualInstance.h \
        $(srcdir)/Linux_SambaValidUsersForShare/Linux_SambaValidUsersForShareRepositoryExternal.h \
        $(srcdir)/Linux_SambaValidUsersForShare/Linux_SambaValidUsersForShareRepositoryInstance.h \
        $(srcdir)/Linux_SambaValidUsersForShare/Linux_SambaValidUsersForShareResourceAccess.h

libcmpiLinux_SambaValidUsersForShare_la_LIBADD = \
        -L../resource-access\
        -lRaToolsSmb \
        -lIBM_SmbProviderTooling \
        -lLinux_SmbGeneralProviderBasic \
        -lcmpiLinux_SambaUser \
        -lcmpiLinux_SambaShareOptions \
        -lcmpiCIM_ConcreteJob

libcmpiLinux_SambaValidUsersForShare_la_CPPFLAGS = \
        -D_COMPILE_UNIX -DCMPI_STANDALONE \
		-I$(srcdir)/../resource-access \
		-I$(srcdir)/include \
		-I$(srcdir)/CIM_ConcreteJob \
        -I$(srcdir)/Linux_SambaUser \
        -I$(srcdir)/Linux_SambaShareOptions



################################################################################
# Linux_SambaWriteListForGlobal
libcmpiLinux_SambaWriteListForGlobal_la_SOURCES = \
        $(srcdir)/Linux_SambaWriteListForGlobal/CmpiLinux_SambaWriteListForGlobalProvider.cpp \
        $(srcdir)/Linux_SambaWriteListForGlobal/Linux_SambaWriteListForGlobalDefaultImplementation.cpp \
        $(srcdir)/Linux_SambaWriteListForGlobal/Linux_SambaWriteListForGlobalExternal.cpp \
        $(srcdir)/Linux_SambaWriteListForGlobal/Linux_SambaWriteListForGlobalFactory.cpp \
        $(srcdir)/Linux_SambaWriteListForGlobal/Linux_SambaWriteListForGlobalInstance.cpp \
        $(srcdir)/Linux_SambaWriteListForGlobal/Linux_SambaWriteListForGlobalInstanceName.cpp \
        $(srcdir)/Linux_SambaWriteListForGlobal/Linux_SambaWriteListForGlobalManualInstance.cpp \
        $(srcdir)/Linux_SambaWriteListForGlobal/Linux_SambaWriteListForGlobalRepositoryExternal.cpp \
        $(srcdir)/Linux_SambaWriteListForGlobal/Linux_SambaWriteListForGlobalRepositoryInstance.cpp \
        $(srcdir)/Linux_SambaWriteListForGlobal/Linux_SambaWriteListForGlobalResourceAccess.cpp

noinst_HEADERS+= \
        $(srcdir)/Linux_SambaWriteListForGlobal/CmpiLinux_SambaWriteListForGlobalProvider.h \
        $(srcdir)/Linux_SambaWriteListForGlobal/Linux_SambaWriteListForGlobalDefaultImplementation.h \
        $(srcdir)/Linux_SambaWriteListForGlobal/Linux_SambaWriteListForGlobalExternal.h \
        $(srcdir)/Linux_SambaWriteListForGlobal/Linux_SambaWriteListForGlobalFactory.h \
        $(srcdir)/Linux_SambaWriteListForGlobal/Linux_SambaWriteListForGlobalInstance.h \
        $(srcdir)/Linux_SambaWriteListForGlobal/Linux_SambaWriteListForGlobalInstanceName.h \
        $(srcdir)/Linux_SambaWriteListForGlobal/Linux_SambaWriteListForGlobalInterface.h \
        $(srcdir)/Linux_SambaWriteListForGlobal/Linux_SambaWriteListForGlobalManualInstance.h \
        $(srcdir)/Linux_SambaWriteListForGlobal/Linux_SambaWriteListForGlobalRepositoryExternal.h \
        $(srcdir)/Linux_SambaWriteListForGlobal/Linux_SambaWriteListForGlobalRepositoryInstance.h \
        $(srcdir)/Linux_SambaWriteListForGlobal/Linux_SambaWriteListForGlobalResourceAccess.h

libcmpiLinux_SambaWriteListForGlobal_la_LIBADD = \
        -L../resource-access\
        -lRaToolsSmb \
        -lIBM_SmbProviderTooling \
        -lLinux_SmbGeneralProviderBasic \
        -lcmpiLinux_SambaUser \
        -lcmpiLinux_SambaGlobalOptions \
        -lcmpiCIM_ConcreteJob

libcmpiLinux_SambaWriteListForGlobal_la_CPPFLAGS = \
        -D_COMPILE_UNIX -DCMPI_STANDALONE \
		-I$(srcdir)/../resource-access \
		-I$(srcdir)/include \
		-I$(srcdir)/CIM_ConcreteJob \
        -I$(srcdir)/Linux_SambaUser \
        -I$(srcdir)/Linux_SambaGlobalOptions



################################################################################
# Linux_SambaWriteListForPrinter
libcmpiLinux_SambaWriteListForPrinter_la_SOURCES = \
        $(srcdir)/Linux_SambaWriteListForPrinter/CmpiLinux_SambaWriteListForPrinterProvider.cpp \
        $(srcdir)/Linux_SambaWriteListForPrinter/Linux_SambaWriteListForPrinterDefaultImplementation.cpp \
        $(srcdir)/Linux_SambaWriteListForPrinter/Linux_SambaWriteListForPrinterExternal.cpp \
        $(srcdir)/Linux_SambaWriteListForPrinter/Linux_SambaWriteListForPrinterFactory.cpp \
        $(srcdir)/Linux_SambaWriteListForPrinter/Linux_SambaWriteListForPrinterInstance.cpp \
        $(srcdir)/Linux_SambaWriteListForPrinter/Linux_SambaWriteListForPrinterInstanceName.cpp \
        $(srcdir)/Linux_SambaWriteListForPrinter/Linux_SambaWriteListForPrinterManualInstance.cpp \
        $(srcdir)/Linux_SambaWriteListForPrinter/Linux_SambaWriteListForPrinterRepositoryExternal.cpp \
        $(srcdir)/Linux_SambaWriteListForPrinter/Linux_SambaWriteListForPrinterRepositoryInstance.cpp \
        $(srcdir)/Linux_SambaWriteListForPrinter/Linux_SambaWriteListForPrinterResourceAccess.cpp

noinst_HEADERS+= \
        $(srcdir)/Linux_SambaWriteListForPrinter/CmpiLinux_SambaWriteListForPrinterProvider.h \
        $(srcdir)/Linux_SambaWriteListForPrinter/Linux_SambaWriteListForPrinterDefaultImplementation.h \
        $(srcdir)/Linux_SambaWriteListForPrinter/Linux_SambaWriteListForPrinterExternal.h \
        $(srcdir)/Linux_SambaWriteListForPrinter/Linux_SambaWriteListForPrinterFactory.h \
        $(srcdir)/Linux_SambaWriteListForPrinter/Linux_SambaWriteListForPrinterInstance.h \
        $(srcdir)/Linux_SambaWriteListForPrinter/Linux_SambaWriteListForPrinterInstanceName.h \
        $(srcdir)/Linux_SambaWriteListForPrinter/Linux_SambaWriteListForPrinterInterface.h \
        $(srcdir)/Linux_SambaWriteListForPrinter/Linux_SambaWriteListForPrinterManualInstance.h \
        $(srcdir)/Linux_SambaWriteListForPrinter/Linux_SambaWriteListForPrinterRepositoryExternal.h \
        $(srcdir)/Linux_SambaWriteListForPrinter/Linux_SambaWriteListForPrinterRepositoryInstance.h \
        $(srcdir)/Linux_SambaWriteListForPrinter/Linux_SambaWriteListForPrinterResourceAccess.h

libcmpiLinux_SambaWriteListForPrinter_la_LIBADD = \
        -L../resource-access\
        -lRaToolsSmb \
        -lIBM_SmbProviderTooling \
        -lLinux_SmbGeneralProviderBasic \
        -lcmpiLinux_SambaUser \
        -lcmpiLinux_SambaPrinterOptions \
        -lcmpiCIM_ConcreteJob

libcmpiLinux_SambaWriteListForPrinter_la_CPPFLAGS = \
        -D_COMPILE_UNIX -DCMPI_STANDALONE \
		-I$(srcdir)/../resource-access \
		-I$(srcdir)/include \
		-I$(srcdir)/CIM_ConcreteJob \
        -I$(srcdir)/Linux_SambaUser \
        -I$(srcdir)/Linux_SambaPrinterOptions



################################################################################
# Linux_SambaWriteListForShare
libcmpiLinux_SambaWriteListForShare_la_SOURCES = \
        $(srcdir)/Linux_SambaWriteListForShare/CmpiLinux_SambaWriteListForShareProvider.cpp \
        $(srcdir)/Linux_SambaWriteListForShare/Linux_SambaWriteListForShareDefaultImplementation.cpp \
        $(srcdir)/Linux_SambaWriteListForShare/Linux_SambaWriteListForShareExternal.cpp \
        $(srcdir)/Linux_SambaWriteListForShare/Linux_SambaWriteListForShareFactory.cpp \
        $(srcdir)/Linux_SambaWriteListForShare/Linux_SambaWriteListForShareInstance.cpp \
        $(srcdir)/Linux_SambaWriteListForShare/Linux_SambaWriteListForShareInstanceName.cpp \
        $(srcdir)/Linux_SambaWriteListForShare/Linux_SambaWriteListForShareManualInstance.cpp \
        $(srcdir)/Linux_SambaWriteListForShare/Linux_SambaWriteListForShareRepositoryExternal.cpp \
        $(srcdir)/Linux_SambaWriteListForShare/Linux_SambaWriteListForShareRepositoryInstance.cpp \
        $(srcdir)/Linux_SambaWriteListForShare/Linux_SambaWriteListForShareResourceAccess.cpp

noinst_HEADERS+= \
        $(srcdir)/Linux_SambaWriteListForShare/CmpiLinux_SambaWriteListForShareProvider.h \
        $(srcdir)/Linux_SambaWriteListForShare/Linux_SambaWriteListForShareDefaultImplementation.h \
        $(srcdir)/Linux_SambaWriteListForShare/Linux_SambaWriteListForShareExternal.h \
        $(srcdir)/Linux_SambaWriteListForShare/Linux_SambaWriteListForShareFactory.h \
        $(srcdir)/Linux_SambaWriteListForShare/Linux_SambaWriteListForShareInstance.h \
        $(srcdir)/Linux_SambaWriteListForShare/Linux_SambaWriteListForShareInstanceName.h \
        $(srcdir)/Linux_SambaWriteListForShare/Linux_SambaWriteListForShareInterface.h \
        $(srcdir)/Linux_SambaWriteListForShare/Linux_SambaWriteListForShareManualInstance.h \
        $(srcdir)/Linux_SambaWriteListForShare/Linux_SambaWriteListForShareRepositoryExternal.h \
        $(srcdir)/Linux_SambaWriteListForShare/Linux_SambaWriteListForShareRepositoryInstance.h \
        $(srcdir)/Linux_SambaWriteListForShare/Linux_SambaWriteListForShareResourceAccess.h

libcmpiLinux_SambaWriteListForShare_la_LIBADD = \
        -L../resource-access\
        -lRaToolsSmb \
        -lIBM_SmbProviderTooling \
        -lLinux_SmbGeneralProviderBasic \
        -lcmpiLinux_SambaUser \
        -lcmpiLinux_SambaShareOptions \
        -lcmpiCIM_ConcreteJob

libcmpiLinux_SambaWriteListForShare_la_CPPFLAGS = \
        -D_COMPILE_UNIX -DCMPI_STANDALONE \
		-I$(srcdir)/../resource-access \
		-I$(srcdir)/include \
		-I$(srcdir)/CIM_ConcreteJob \
        -I$(srcdir)/Linux_SambaUser \
        -I$(srcdir)/Linux_SambaShareOptions
