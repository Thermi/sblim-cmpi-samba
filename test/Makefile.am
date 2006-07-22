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
#
# ==================================================================


# docdir defines where the documentation goes
docdir = $(datadir)/doc/$(PACKAGE)-$(VERSION)


######################################################################################
# Automake instructions for ./test subdir
EXTRA_DIST=../test README.test

doc_DATA=README.test

testsuitedir=@TESTSUITEDIR@
testsuitesystemdir=@TESTSUITEDIR@/system/linux
testsuitecimdir=@TESTSUITEDIR@/cim

testsuite_SCRIPTS=test-cmpi-samba.sh smb.conf smbusers smbpasswd
testsuitecim_DATA= \
    cim/Linux_SambaCommonSecurityOptions.cim \
    cim/Linux_SambaGlobalBrowseOptions.cim \
    cim/Linux_SambaGlobalFileNameHandlingOptions.cim \
    cim/Linux_SambaGlobalOptions.cim \
    cim/Linux_SambaGlobalPrintingOptions.cim \
    cim/Linux_SambaGlobalProtocolOptions.cim \
    cim/Linux_SambaGlobalSecurityOptions.cim \
    cim/Linux_SambaPrinterBrowseOptions.cim \
    cim/Linux_SambaPrinterOptions.cim \
    cim/Linux_SambaPrinterPrintingOptions.cim \
    cim/Linux_SambaPrinterSecurityOptions.cim \
    cim/Linux_SambaScriptingOptions.cim \
    cim/Linux_SambaService.cim \
    cim/Linux_SambaServiceConfiguration.cim \
    cim/Linux_SambaShareBrowseOptions.cim \
    cim/Linux_SambaShareFileNameHandlingOptions.cim \
    cim/Linux_SambaShareOptions.cim \
    cim/Linux_SambaShareProtocolOptions.cim \
    cim/Linux_SambaShareSecurityOptions.cim \
    cim/Linux_SambaUser.cim \
    cim/Linux_SambaAdminUsersForGlobal.cim \
    cim/Linux_SambaAdminUsersForShare.cim \
    cim/Linux_SambaCommonSecurityForGlobal.cim \
    cim/Linux_SambaCommonSecurityForPrinter.cim \
    cim/Linux_SambaCommonSecurityForShare.cim \
    cim/Linux_SambaForceUserForGlobal.cim \
    cim/Linux_SambaForceUserForPrinter.cim \
    cim/Linux_SambaForceUserForShare.cim \
    cim/Linux_SambaGlobalBrowseForGlobal.cim \
    cim/Linux_SambaGlobalFileNameHandlingForGlobal.cim \
    cim/Linux_SambaGlobalForService.cim \
    cim/Linux_SambaGlobalPrintingForGlobal.cim \
    cim/Linux_SambaGlobalProtocolForGlobal.cim \
    cim/Linux_SambaGlobalSecurityForGlobal.cim \
    cim/Linux_SambaGuestAccountForGlobal.cim \
    cim/Linux_SambaInvalidUsersForGlobal.cim \
    cim/Linux_SambaInvalidUsersForPrinter.cim \
    cim/Linux_SambaInvalidUsersForShare.cim \
    cim/Linux_SambaPrinterAdminForGlobal.cim \
    cim/Linux_SambaPrinterAdminForPrinter.cim \
    cim/Linux_SambaPrinterBrowseForPrinter.cim \
    cim/Linux_SambaPrinterForService.cim \
    cim/Linux_SambaPrinterPrintingForPrinter.cim \
    cim/Linux_SambaPrinterSecurityForGlobal.cim \
    cim/Linux_SambaPrinterSecurityForPrinter.cim \
    cim/Linux_SambaReadListForGlobal.cim \
    cim/Linux_SambaReadListForPrinter.cim \
    cim/Linux_SambaReadListForShare.cim \
    cim/Linux_SambaScriptingForGlobal.cim \
    cim/Linux_SambaServiceConfigurationForService.cim \
    cim/Linux_SambaShareFileNameHandlingForShare.cim \
    cim/Linux_SambaShareForService.cim \
    cim/Linux_SambaShareBrowseForShare.cim \
    cim/Linux_SambaShareProtocolForShare.cim \
    cim/Linux_SambaShareSecurityForGlobal.cim \
    cim/Linux_SambaShareSecurityForShare.cim \
    cim/Linux_SambaUsersForService.cim \
    cim/Linux_SambaValidUsersForGlobal.cim \
    cim/Linux_SambaValidUsersForPrinter.cim \
    cim/Linux_SambaValidUsersForShare.cim \
    cim/Linux_SambaWriteListForGlobal.cim \
    cim/Linux_SambaWriteListForPrinter.cim \
    cim/Linux_SambaWriteListForShare.cim

testsuitesystem_DATA= \
    system/linux/Linux_SambaCommonSecurityOptions.system \
    system/linux/Linux_SambaGlobalBrowseOptions.system \
    system/linux/Linux_SambaGlobalFileNameHandlingOptions.system \
    system/linux/Linux_SambaGlobalOptions.system \
    system/linux/Linux_SambaGlobalPrintingOptions.system \
    system/linux/Linux_SambaGlobalProtocolOptions.system \
    system/linux/Linux_SambaGlobalSecurityOptions.system \
    system/linux/Linux_SambaPrinterBrowseOptions.system \
    system/linux/Linux_SambaPrinterOptions.system \
    system/linux/Linux_SambaPrinterPrintingOptions.system \
    system/linux/Linux_SambaPrinterSecurityOptions.system \
    system/linux/Linux_SambaScriptingOptions.system \
    system/linux/Linux_SambaService.system \
    system/linux/Linux_SambaServiceConfiguration.system \
    system/linux/Linux_SambaShareFileNameHandlingOptions.system \
    system/linux/Linux_SambaShareBrowseOptions.system \
    system/linux/Linux_SambaShareOptions.system \
    system/linux/Linux_SambaShareProtocolOptions.system \
    system/linux/Linux_SambaShareSecurityOptions.system \
    system/linux/Linux_SambaUser.system \
    system/linux/Linux_SambaGlobalBrowseForGlobal.system \
    system/linux/Linux_SambaGlobalFileNameHandlingForGlobal.system \
    system/linux/Linux_SambaGlobalForService.system \
    system/linux/Linux_SambaGlobalPrintingForGlobal.system \
    system/linux/Linux_SambaGlobalProtocolForGlobal.system \
    system/linux/Linux_SambaGlobalSecurityForGlobal.system \
    system/linux/Linux_SambaScriptingForGlobal.system

runtest: install
	cd $(DESTDIR)$(TESTSUITEDIR) && ./test-cmpi-samba.sh

