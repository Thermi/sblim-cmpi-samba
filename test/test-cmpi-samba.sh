#!/bin/bash

# test sblim-cmpi-samba package

SCRIPT_PATH=`dirname ${BASH_SOURCE}`

#*****************************************************************************#

export SBLIM_TESTSUITE_RUN=1;
export SMBCONFDIR=/etc/samba
export SMBCONFFILE=$SMBCONFDIR/smb.conf
export TESTCONFFILE=smb.conf
export SMBUSERSFILE=$SMBCONFDIR/smbusers
export SMBPASSWDFILE=$SMBCONFDIR/smbpasswd
export TESTCONFFILE=smb.conf
export TESTUSERSFILE=smbusers
export TESTPASSWDFILE=smbpasswd

#******************************************************************************#

init() {
  # Install an example config file and save the original if one exists
  if [[ -a $SMBCONFFILE ]]; then
    echo "Saving original config file $SMBCONFFILE to $SMBCONFFILE.sblimsave..."
    cp -p $SMBCONFFILE $SMBCONFFILE.sblimsave
  fi

  # Install an example smbusers file and save the original if one exists
  if [[ -a $SMBUSERSFILE ]]; then
    echo "Saving original smbusers file $SMBUSERSFILE to $SMBUSERSFILE.sblimsave..."
    cp -p $SMBUSERSFILE $SMBUSERSFILE.sblimsave
  fi

  # Install an example smbpassswd file and save the original if one exists
  if [[ -a $SMBPASSWDFILE ]]; then
    echo "Saving original smbpasswd file $SMBPASSWDFILE to $SMBPASSWDFILE.sblimsave..."
    cp -p $SMBPASSWDFILE $SMBPASSWDFILE.sblimsave
  fi


  echo "Copying test config file $TESTCONFFILE to $SMBCONFFILE ..."
  cp -p $TESTCONFFILE $SMBCONFFILE

  echo "Copying test smbusers file $TESTUSERSFILE to $SMBUSERSFILE ..."
  cp -p $TESTUSERSFILE $SMBUSERSFILE

  echo "Copying test smbpasswd $TESTPASSWDFILE to $SMBPASSWDFILE ..."
  cp -p $TESTPASSWDFILE $SMBPASSWDFILE

  echo "Creating system users: wbemsmt-test1, wbemsmt-test2, wbemsmt-test3, wbemsmt-test4"
  useradd -u 732 wbemsmt-test1 
  useradd -u 733 wbemsmt-test2
  useradd -u 734 wbemsmt-test3
  useradd -u 735 wbemsmt-test4
}

#*****************************************************************************#
cleanup() {
  echo "Removing system users: wbemsmt-test1, wbemsmt-test2, wbemsmt-test3, wbemsmt-test4"
  userdel -r wbemsmt-test1
  userdel -r wbemsmt-test2
  userdel -r wbemsmt-test3
  userdel -r wbemsmt-test4

  if [[ -a $SMBCONFFILE.sblimsave ]]; then
    echo "Moving back the original config file ..."
    mv $SMBCONFFILE.sblimsave $SMBCONFFILE
  fi

  if [[ -a $SMBUSERSFILE.sblimsave ]]; then
    echo "Moving back the original smbusers file ..."
    mv $SMBUSERSFILE.sblimsave $SMBUSERSFILE
  fi

  if [[ -a $SMBPASSWDFILE.sblimsave ]]; then
    echo "Moving back the original smbpasswd file ..."
    mv $SMBPASSWDFILE.sblimsave $SMBPASSWDFILE
  fi
  exit 1
}

#*****************************************************************************#
trap cleanup 2 3 4 6 9 15

#*****************************************************************************#

declare -a CLASSNAMES[];
CLASSNAMES=(

[0]=Linux_SambaCommonSecurityOptions
[1]=Linux_SambaGlobalOptions
[2]=Linux_SambaGlobalBrowseOptions
[3]=Linux_SambaGlobalFileNameHandlingOptions
[4]=Linux_SambaGlobalPrintingOptions
[5]=Linux_SambaGlobalProtocolOptions
[6]=Linux_SambaGlobalSecurityOptions
[7]=Linux_SambaScriptingOptions
[8]=Linux_SambaPrinterOptions
[9]=Linux_SambaPrinterBrowseOptions
[10]=Linux_SambaPrinterPrintingOptions
[11]=Linux_SambaPrinterSecurityOptions
[12]=Linux_SambaService
[13]=Linux_SambaServiceConfiguration
[14]=Linux_SambaShareFileNameHandlingOptions
[15]=Linux_SambaShareOptions
[16]=Linux_SambaShareBrowseOptions
[17]=Linux_SambaShareProtocolOptions
[18]=Linux_SambaShareSecurityOptions
[19]=Linux_SambaUser

[20]=Linux_SambaAdminUsersForGlobal
[21]=Linux_SambaAdminUsersForShare
[22]=Linux_SambaCommonSecurityForGlobal
[23]=Linux_SambaCommonSecurityForPrinter
[24]=Linux_SambaCommonSecurityForShare
[25]=Linux_SambaForceUserForGlobal
[26]=Linux_SambaForceUserForPrinter
[27]=Linux_SambaForceUserForShare
[28]=Linux_SambaGlobalBrowseForGlobal
[29]=Linux_SambaGlobalFileNameHandlingForGlobal
[30]=Linux_SambaGlobalForService
[31]=Linux_SambaGlobalPrintingForGlobal
[32]=Linux_SambaGlobalProtocolForGlobal
[33]=Linux_SambaGlobalSecurityForGlobal
[34]=Linux_SambaGuestAccountForGlobal
[35]=Linux_SambaInvalidUsersForGlobal
[36]=Linux_SambaInvalidUsersForPrinter
[37]=Linux_SambaInvalidUsersForShare
[38]=Linux_SambaPrinterAdminForGlobal
[39]=Linux_SambaPrinterAdminForPrinter
[40]=Linux_SambaPrinterBrowseForPrinter
[41]=Linux_SambaPrinterForService
[42]=Linux_SambaPrinterPrintingForPrinter
[43]=Linux_SambaPrinterSecurityForGlobal
[44]=Linux_SambaPrinterSecurityForPrinter
[45]=Linux_SambaReadListForGlobal
[46]=Linux_SambaReadListForPrinter
[47]=Linux_SambaReadListForShare
[48]=Linux_SambaScriptingForGlobal
[49]=Linux_SambaServiceConfigurationForService
[50]=Linux_SambaShareFileNameHandlingForShare
[51]=Linux_SambaShareForService
[52]=Linux_SambaShareBrowseForShare
[53]=Linux_SambaShareProtocolForShare
[54]=Linux_SambaShareSecurityForGlobal
[55]=Linux_SambaShareSecurityForShare
[56]=Linux_SambaUsersForService
[57]=Linux_SambaValidUsersForGlobal
[58]=Linux_SambaValidUsersForPrinter
[59]=Linux_SambaValidUsersForShare
[60]=Linux_SambaWriteListForGlobal
[61]=Linux_SambaWriteListForPrinter
[62]=Linux_SambaWriteListForShare
)

#*****************************************************************************#

init

declare -i max=62;
declare -i i=0;

cd $SCRIPT_PATH
while(($i<=$max))
do
  . ${SCRIPT_PATH}/run.sh ${CLASSNAMES[$i]} || exit 1;
  i=$i+1;
done

perl test-ci-samba-assoc.pl 

# SECOND TIME Invocation of CreateInstance Script should fail creation of instances...
perl test-ci-samba-assoc.pl  

cleanup

