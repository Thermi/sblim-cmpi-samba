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
# ==================================================================
#                                               -*- Autoconf -*-
# Process this file with autoconf to produce a configure script.

AC_PREREQ(2.59)
AC_INIT(SBLIM CMPI Provider for WBEM-SMT Samba task, 0.5.4, sblim-devel@lists.sourceforge.net, sblim-cmpi-samba)
AC_CONFIG_SRCDIR([.])
AC_CONFIG_HEADER([config.h])
AM_INIT_AUTOMAKE([tar-ustar])

AC_CANONICAL_HOST
case $host_cpu in
     i*86) HW=INTEL;; 
     s390*) HW=S390;; 
     ppc*) HW=PPC;; 
     x86_64) HW=X86_64;; 
     ia64) HW=IA64;; 
     **) HW=GENERIC;;
esac

AC_ARG_VAR([TESTSUITEDIR],[the directory where the SBLIM testsuite resides.])
AC_ARG_VAR([PROVIDERDIR],[the directory where the CMPI providers will be installed.])
AC_ARG_VAR([CIMSERVER],[the target CIM server (pegasus|sfcb|openwbem).])

# Checks for programs.
AC_PROG_AWK
AC_PROG_CC
AC_PROG_CXX
AC_PROG_INSTALL
AC_PROG_LIBTOOL
AC_PROG_MAKE_SET

# Check for installed CIM Server (defined in local m4 macro)
CHECK_CIMSERVER

# Check for required CIM Server provider directory (defined in local m4 macro)
CHECK_CIMSERVER_PROVIDERDIR

# Check for required CMPI header files (defined in local m4 macro)
CHECK_CMPI_HEADER

# Check for SBLIM TestSuite support (defined in local m4 macro)
CHECK_SBLIM_TESTSUITE

# Check for required WBEM-SMT Resource Access header files (defined in local m4 macro)
CHECK_SBLIM_LIBRA_HEADER

# Checks for libraries.
AC_CHECK_LIB(pthread, main, [], [AC_MSG_ERROR(You have to install libpthread first)])
AC_CHECK_LIB(RaTools, main, [], [AC_MSG_ERROR(You have to install libRaTools first)])
AC_CHECK_LIB(cmpiCppImpl, main, [], [AC_MSG_ERROR(You have to install cmpiCppImpl first)])

# Checks for header files.
AC_HEADER_STDC
AC_HEADER_SYS_WAIT
AC_HEADER_DIRENT
AC_HEADER_TIME
AC_HEADER_STDBOOL
AC_CHECK_HEADERS([fcntl.h stdlib.h string.h sys/time.h unistd.h limits.h malloc.h])

# Checks for typedefs, structures, and compiler characteristics.
AC_C_CONST
AC_C_INLINE
AC_TYPE_OFF_T

# Checks for library functions.
AC_FUNC_MALLOC
AC_FUNC_REALLOC
AC_FUNC_SELECT_ARGTYPES
AC_FUNC_STAT
AC_FUNC_CLOSEDIR_VOID
AC_CHECK_FUNCS([memmove select strchr strdup ftruncate mkdir strcasecmp strrchr strtol])

AM_CONDITIONAL([TESTSUITE_SUPPORT], test "$TESTSUITEDIR")

AC_CONFIG_FILES(Makefile sblim-cmpi-samba.spec)
AC_CONFIG_FILES(resource-access/Makefile resource-access/scripts/smt_smb_ra_get_defaults.sh.pre resource-access/smt_smb_ra_support.conf.pre) 
AC_CONFIG_FILES(man/Makefile man/smt_smb_ra_support.conf.5.pre)
AC_CONFIG_FILES(provider/Makefile)
AC_CONFIG_FILES(provider/CIM_ConcreteJob/Makefile)
AC_CONFIG_FILES(provider/Linux_SambaRegisteredProfile/Makefile)
AC_CONFIG_FILES(provider/Linux_SambaGlobalOptions/Makefile)
AC_CONFIG_FILES(provider/Linux_SambaShareOptions/Makefile)
AC_CONFIG_FILES(provider/Linux_SambaCommonSecurityOptions/Makefile)
AC_CONFIG_FILES(provider/Linux_SambaGlobalBrowseOptions/Makefile)
AC_CONFIG_FILES(provider/Linux_SambaGlobalFileNameHandlingOptions/Makefile)
AC_CONFIG_FILES(provider/Linux_SambaGlobalPrintingOptions/Makefile)
AC_CONFIG_FILES(provider/Linux_SambaGlobalProtocolOptions/Makefile)
AC_CONFIG_FILES(provider/Linux_SambaGlobalSecurityOptions/Makefile)
AC_CONFIG_FILES(provider/Linux_SambaHost/Makefile)
AC_CONFIG_FILES(provider/Linux_SambaPrinterBrowseOptions/Makefile)
AC_CONFIG_FILES(provider/Linux_SambaPrinterOptions/Makefile)
AC_CONFIG_FILES(provider/Linux_SambaPrinterPrintingOptions/Makefile)
AC_CONFIG_FILES(provider/Linux_SambaPrinterSecurityOptions/Makefile)
AC_CONFIG_FILES(provider/Linux_SambaScriptingOptions/Makefile)
AC_CONFIG_FILES(provider/Linux_SambaShareFileNameHandlingOptions/Makefile)
AC_CONFIG_FILES(provider/Linux_SambaShareBrowseOptions/Makefile)
AC_CONFIG_FILES(provider/Linux_SambaShareProtocolOptions/Makefile)
AC_CONFIG_FILES(provider/Linux_SambaShareSecurityOptions/Makefile)
AC_CONFIG_FILES(provider/Linux_SambaGroup/Makefile)
AC_CONFIG_FILES(provider/Linux_SambaService/Makefile)
AC_CONFIG_FILES(provider/Linux_SambaServiceConfiguration/Makefile)
AC_CONFIG_FILES(provider/Linux_SambaUser/Makefile)
AC_CONFIG_FILES(provider/Linux_SambaAdminUsersForGlobal/Makefile)
AC_CONFIG_FILES(provider/Linux_SambaAdminUsersForShare/Makefile)
AC_CONFIG_FILES(provider/Linux_SambaAllowHostsForGlobal/Makefile)
AC_CONFIG_FILES(provider/Linux_SambaAllowHostsForPrinter/Makefile)
AC_CONFIG_FILES(provider/Linux_SambaAllowHostsForShare/Makefile)
AC_CONFIG_FILES(provider/Linux_SambaCommonSecurityForGlobal/Makefile)
AC_CONFIG_FILES(provider/Linux_SambaCommonSecurityForPrinter/Makefile)
AC_CONFIG_FILES(provider/Linux_SambaCommonSecurityForShare/Makefile)
AC_CONFIG_FILES(provider/Linux_SambaDenyHostsForGlobal/Makefile)
AC_CONFIG_FILES(provider/Linux_SambaDenyHostsForPrinter/Makefile)
AC_CONFIG_FILES(provider/Linux_SambaDenyHostsForShare/Makefile)
AC_CONFIG_FILES(provider/Linux_SambaForceGroupForGlobal/Makefile)
AC_CONFIG_FILES(provider/Linux_SambaForceGroupForPrinter/Makefile)
AC_CONFIG_FILES(provider/Linux_SambaForceGroupForShare/Makefile)
AC_CONFIG_FILES(provider/Linux_SambaForceUserForGlobal/Makefile)
AC_CONFIG_FILES(provider/Linux_SambaForceUserForPrinter/Makefile)
AC_CONFIG_FILES(provider/Linux_SambaForceUserForShare/Makefile)
AC_CONFIG_FILES(provider/Linux_SambaGlobalBrowseForGlobal/Makefile)
AC_CONFIG_FILES(provider/Linux_SambaGlobalFileNameHandlingForGlobal/Makefile)
AC_CONFIG_FILES(provider/Linux_SambaGlobalForService/Makefile)
AC_CONFIG_FILES(provider/Linux_SambaGlobalPrintingForGlobal/Makefile)
AC_CONFIG_FILES(provider/Linux_SambaGlobalProtocolForGlobal/Makefile)
AC_CONFIG_FILES(provider/Linux_SambaGlobalSecurityForGlobal/Makefile)
AC_CONFIG_FILES(provider/Linux_SambaGroupForUser/Makefile)
AC_CONFIG_FILES(provider/Linux_SambaGuestAccountForGlobal/Makefile)
AC_CONFIG_FILES(provider/Linux_SambaHostsForService/Makefile)
AC_CONFIG_FILES(provider/Linux_SambaInvalidUsersForGlobal/Makefile)
AC_CONFIG_FILES(provider/Linux_SambaInvalidUsersForPrinter/Makefile)
AC_CONFIG_FILES(provider/Linux_SambaInvalidUsersForShare/Makefile)
AC_CONFIG_FILES(provider/Linux_SambaPrinterAdminForGlobal/Makefile)
AC_CONFIG_FILES(provider/Linux_SambaPrinterAdminForPrinter/Makefile)
AC_CONFIG_FILES(provider/Linux_SambaPrinterBrowseForPrinter/Makefile)
AC_CONFIG_FILES(provider/Linux_SambaPrinterForService/Makefile)
AC_CONFIG_FILES(provider/Linux_SambaPrinterPrintingForPrinter/Makefile)
AC_CONFIG_FILES(provider/Linux_SambaPrinterSecurityForGlobal/Makefile)
AC_CONFIG_FILES(provider/Linux_SambaPrinterSecurityForPrinter/Makefile)
AC_CONFIG_FILES(provider/Linux_SambaReadListForGlobal/Makefile)
AC_CONFIG_FILES(provider/Linux_SambaReadListForPrinter/Makefile)
AC_CONFIG_FILES(provider/Linux_SambaReadListForShare/Makefile)
AC_CONFIG_FILES(provider/Linux_SambaScriptingForGlobal/Makefile)
AC_CONFIG_FILES(provider/Linux_SambaServiceConfigurationForService/Makefile)
AC_CONFIG_FILES(provider/Linux_SambaShareBrowseForShare/Makefile)
AC_CONFIG_FILES(provider/Linux_SambaShareFileNameHandlingForShare/Makefile)
AC_CONFIG_FILES(provider/Linux_SambaShareForService/Makefile)
AC_CONFIG_FILES(provider/Linux_SambaShareProtocolForShare/Makefile) 
AC_CONFIG_FILES(provider/Linux_SambaShareSecurityForGlobal/Makefile)
AC_CONFIG_FILES(provider/Linux_SambaShareSecurityForShare/Makefile)
AC_CONFIG_FILES(provider/Linux_SambaUsersForService/Makefile)
AC_CONFIG_FILES(provider/Linux_SambaValidUsersForGlobal/Makefile)
AC_CONFIG_FILES(provider/Linux_SambaValidUsersForPrinter/Makefile)
AC_CONFIG_FILES(provider/Linux_SambaValidUsersForShare/Makefile)
AC_CONFIG_FILES(provider/Linux_SambaWriteListForGlobal/Makefile)
AC_CONFIG_FILES(provider/Linux_SambaWriteListForPrinter/Makefile)
AC_CONFIG_FILES(provider/Linux_SambaWriteListForShare/Makefile)
AC_CONFIG_FILES(provider/Linux_SambaElementConformsToProfile/Makefile)
AC_CONFIG_FILES(test/Makefile)

AC_OUTPUT
echo

# Display configuration options
echo "-------------------------------------------------------"
echo "Configuration for $PACKAGE complete."
echo ""
echo "The following configuration options have been selected:"
echo "CIMSERVER: " $CIMSERVER
echo "PROVIDERDIR: " $PROVIDERDIR
echo "CPPFLAGS:" $CPPFLAGS
echo "LDFLAGS:" $LDFLAGS
echo
if test $TESTSUITEDIR; then
  echo "Test Suite Support: enabled"
  echo "TESTSUITEDIR = $TESTSUITEDIR"
else
  echo "Test Suite Support: disabled"
fi
echo "-------------------------------------------------------"
echo
echo "You may now run make"
echo
