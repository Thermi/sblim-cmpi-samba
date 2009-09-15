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

AM_CPPFLAGS = -D_COMPILE_UNIX \
              -DCMPI_STANDALONE \
              -I${srcdir}/include \
              -I${srcdir}/../resource-access \
              -I${srcdir}/CIM_ConcreteJob \
              -I${srcdir}/Linux_SambaCommonSecurityOptions \
              -I${srcdir}/Linux_SambaGlobalOptions \
              -I${srcdir}/Linux_SambaGlobalBrowseOptions \
              -I${srcdir}/Linux_SambaGlobalFileNameHandlingOptions \
              -I${srcdir}/Linux_SambaGlobalPrintingOptions \
              -I${srcdir}/Linux_SambaGlobalProtocolOptions \
              -I${srcdir}/Linux_SambaGlobalSecurityOptions \
              -I${srcdir}/Linux_SambaPrinterOptions \
              -I${srcdir}/Linux_SambaPrinterPrintingOptions \
              -I${srcdir}/Linux_SambaPrinterSecurityOptions \
              -I${srcdir}/Linux_SambaShareOptions \
              -I${srcdir}/Linux_SambaShareFileNameHandlingOptions \
              -I${srcdir}/Linux_SambaShareBrowseOptions \
              -I${srcdir}/Linux_SambaPrinterBrowseOptions \
              -I${srcdir}/Linux_SambaShareProtocolOptions \
              -I${srcdir}/Linux_SambaShareSecurityOptions \
              -I${srcdir}/Linux_SambaScriptingOptions \
              -I${srcdir}/Linux_SambaService \
              -I${srcdir}/Linux_SambaServiceConfiguration \
              -I${srcdir}/Linux_SambaGroup \
              -I${srcdir}/Linux_SambaHost \
              -I${srcdir}/Linux_SambaUser

################################################################################
#
lib_LTLIBRARIES += \
		libIBM_SmbProviderTooling.la \
		libLinux_SmbGeneralProviderBasic.la


################################################################################
# General required provider parts
libIBM_SmbProviderTooling_la_SOURCES = \
		support/ArrayConverter.cpp \
		support/CmpiErrorFormater.cpp

noinst_HEADERS += \
		include/ArrayConverter.h \
		include/CmpiErrorFormater.h

libIBM_SmbProviderTooling_la_LIBADD = \
        -L../resource-access\
        -lRaToolsSmb



################################################################################
# General Dns required parts
libLinux_SmbGeneralProviderBasic_la_SOURCES = \
		support/smt_smb_array.cpp

sbliminc_HEADERS += \
		include/smt_smb_array.h \
		include/smt_smb_defaultvalues.h

libLinux_SmbGeneralProviderBasic_la_LIBADD   = \
        -L../resource-access\
        -lRaToolsSmb



################################################################################
# *The* library build config...
SUBDIRS = . \
          CIM_ConcreteJob \
          Linux_SambaRegisteredProfile \
          Linux_SambaGlobalOptions \
          Linux_SambaShareOptions \
          Linux_SambaCommonSecurityOptions \
          Linux_SambaGlobalBrowseOptions \
          Linux_SambaGlobalFileNameHandlingOptions \
          Linux_SambaGlobalPrintingOptions \
          Linux_SambaGlobalProtocolOptions \
          Linux_SambaGlobalSecurityOptions \
          Linux_SambaHost \
          Linux_SambaPrinterBrowseOptions \
          Linux_SambaPrinterOptions \
          Linux_SambaPrinterPrintingOptions \
          Linux_SambaPrinterSecurityOptions \
          Linux_SambaScriptingOptions \
          Linux_SambaShareFileNameHandlingOptions \
          Linux_SambaShareBrowseOptions \
          Linux_SambaShareProtocolOptions \
          Linux_SambaShareSecurityOptions \
          Linux_SambaGroup \
          Linux_SambaService \
          Linux_SambaServiceConfiguration \
          Linux_SambaUser \
          Linux_SambaAdminUsersForGlobal \
          Linux_SambaAdminUsersForShare \
          Linux_SambaAllowHostsForGlobal \
          Linux_SambaAllowHostsForPrinter \
          Linux_SambaAllowHostsForShare \
          Linux_SambaCommonSecurityForGlobal \
          Linux_SambaCommonSecurityForPrinter \
          Linux_SambaCommonSecurityForShare \
          Linux_SambaDenyHostsForGlobal \
          Linux_SambaDenyHostsForPrinter \
          Linux_SambaDenyHostsForShare \
          Linux_SambaForceGroupForGlobal \
          Linux_SambaForceGroupForPrinter \
          Linux_SambaForceGroupForShare \
          Linux_SambaForceUserForGlobal \
          Linux_SambaForceUserForPrinter \
          Linux_SambaForceUserForShare \
          Linux_SambaGlobalBrowseForGlobal \
          Linux_SambaGlobalFileNameHandlingForGlobal \
          Linux_SambaGlobalForService \
          Linux_SambaGlobalPrintingForGlobal \
          Linux_SambaGlobalProtocolForGlobal \
          Linux_SambaGlobalSecurityForGlobal \
          Linux_SambaGroupForUser \
          Linux_SambaGuestAccountForGlobal \
          Linux_SambaHostsForService \
          Linux_SambaInvalidUsersForGlobal \
          Linux_SambaInvalidUsersForPrinter \
          Linux_SambaInvalidUsersForShare \
          Linux_SambaPrinterAdminForGlobal \
          Linux_SambaPrinterAdminForPrinter \
          Linux_SambaPrinterBrowseForPrinter \
          Linux_SambaPrinterForService \
          Linux_SambaPrinterPrintingForPrinter \
          Linux_SambaPrinterSecurityForGlobal \
          Linux_SambaPrinterSecurityForPrinter \
          Linux_SambaReadListForGlobal \
          Linux_SambaReadListForPrinter \
          Linux_SambaReadListForShare \
          Linux_SambaScriptingForGlobal \
          Linux_SambaServiceConfigurationForService \
          Linux_SambaShareBrowseForShare \
          Linux_SambaShareFileNameHandlingForShare \
          Linux_SambaShareForService \
          Linux_SambaShareProtocolForShare \
          Linux_SambaShareSecurityForGlobal \
          Linux_SambaShareSecurityForShare \
          Linux_SambaUsersForService \
          Linux_SambaValidUsersForGlobal \
          Linux_SambaValidUsersForPrinter \
          Linux_SambaValidUsersForShare \
          Linux_SambaWriteListForGlobal \
          Linux_SambaWriteListForPrinter \
          Linux_SambaElementConformsToProfile \
          Linux_SambaWriteListForShare
