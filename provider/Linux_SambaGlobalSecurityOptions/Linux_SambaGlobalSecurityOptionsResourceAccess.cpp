// =======================================================================
// Linux_SambaGlobalSecurityOptionsResourceAccess.cpp
//     created on Fri, 23 Jun 2006 using ECUTE 2.2.1
//
// Copyright (c) 2006, International Business Machines
//
// THIS FILE IS PROVIDED UNDER THE TERMS OF THE COMMON PUBLIC LICENSE
// ("AGREEMENT"). ANY USE, REPRODUCTION OR DISTRIBUTION OF THIS FILE
// CONSTITUTES RECIPIENTS ACCEPTANCE OF THE AGREEMENT.
//
// You can obtain a current copy of the Common Public License from
// http://oss.software.ibm.com/developerworks/opensource/license-cpl.html
//
// Author:        generated
//
// Contributors:
//                Wolfgang Taphorn   <taphorn@de.ibm.com>
//                Mukunda Chowdaiah  <cmukunda@in.ibm.com>
//                Ashoka S Rao       <ashoka.rao@in.ibm.com>
//                Rodrigo Ceron      <rceron@br.ibm.com>
//
// =======================================================================
//
// 
#include "Linux_SambaGlobalSecurityOptionsResourceAccess.h"

#include "smt_smb_ra_support.h"
#include "smt_smb_defaultvalues.h"

namespace genProvider {
  
  //----------------------------------------------------------------------------
  // manual written methods

  static void setInstanceNameProperties(
      const char* aNameSpaceP, 
      Linux_SambaGlobalSecurityOptionsInstanceName& anInstanceName) {

    anInstanceName.setNamespace(aNameSpaceP);
    anInstanceName.setName(DEFAULT_GLOBAL_NAME);
    anInstanceName.setInstanceID(DEFAULT_INSTANCE_ID);
  }

  
  //----------------------------------------------------------------------------


  static void setInstanceProperties(
      Linux_SambaGlobalSecurityOptionsManualInstance& aManualInstance) {
    
    char *option;
    
    option = get_global_option(AUTH_METHODS);	
    if ( option )
      aManualInstance.setAuthMethods( option );
    
    option = get_global_option(ENCRYPT_PASSWORDS);	
    if ( option )
      if(strcasecmp(option,YES) == 0)
	aManualInstance.setEncryptPasswords( true );
      else
	aManualInstance.setEncryptPasswords( false );
    
    option = get_global_option(MIN_PASSWORD_LENGTH);	
    if ( option )
      aManualInstance.setMinPasswordLength( atoi(option) );
    
    option = get_global_option(NULL_PASSWORDS);	
    if ( option )
      if(strcasecmp(option,YES) == 0)
	aManualInstance.setNullPasswords( true );
      else
	aManualInstance.setNullPasswords( false );

    option = get_global_option(PASSDB_BACKEND);	
    if ( option )
      aManualInstance.setPassdbBackend( option );

    option = get_global_option(SMB_PASSWD_FILE);	
    if ( option )
      aManualInstance.setSMBPasswdFile( option );

    option = get_global_option(SECURITY);	
    if ( option )
      if(strcasecmp(option,"user") == 0)
	aManualInstance.setSecurity( 0 );
      else 
	if(strcasecmp(option,"share") == 0)
	  aManualInstance.setSecurity( 1 );
	else 
	  if(strcasecmp(option,"server") == 0)
	    aManualInstance.setSecurity( 2 );
	  else 
	    if(strcasecmp(option,"domain") == 0)
	      aManualInstance.setSecurity( 3 );
	    else 
	      if(strcasecmp(option,"ads") == 0)
		aManualInstance.setSecurity( 4 );
  }


  //----------------------------------------------------------------------------


  //----------------------------------------------------------------------------
  //Linux_SambaGlobalSecurityOptionsResourceAccess::Linux_SambaGlobalSecurityOptionsResourceAccess();

  //----------------------------------------------------------------------------
  Linux_SambaGlobalSecurityOptionsResourceAccess::~Linux_SambaGlobalSecurityOptionsResourceAccess() {
    terminator();
  }
    
  // intrinsic methods

  //----------------------------------------------------------------------------
  void
  Linux_SambaGlobalSecurityOptionsResourceAccess::enumInstanceNames(
     const CmpiContext& aContext,
     const CmpiBroker& aBroker,
     const char* aNameSpaceP,
     Linux_SambaGlobalSecurityOptionsInstanceNameEnumeration& anInstanceNameEnumeration) {
      
    Linux_SambaGlobalSecurityOptionsInstanceName instanceName;
    setInstanceNameProperties(aNameSpaceP,instanceName);
    anInstanceNameEnumeration.addElement(instanceName);
  }

  
  //----------------------------------------------------------------------------

  void
  Linux_SambaGlobalSecurityOptionsResourceAccess::enumInstances(
    const CmpiContext& aContext,
    const CmpiBroker& aBroker,
    const char* aNameSpaceP,
    const char** aPropertiesPP,
    Linux_SambaGlobalSecurityOptionsManualInstanceEnumeration& aManualInstanceEnumeration) {
    
    Linux_SambaGlobalSecurityOptionsManualInstance aManualInstance;
    Linux_SambaGlobalSecurityOptionsInstanceName instanceName;
    
    setInstanceNameProperties(aNameSpaceP,instanceName);
    aManualInstance.setInstanceName(instanceName);

    setInstanceProperties(aManualInstance);
    
    aManualInstanceEnumeration.addElement(aManualInstance);
  }

  
  //----------------------------------------------------------------------------

  Linux_SambaGlobalSecurityOptionsManualInstance 
  Linux_SambaGlobalSecurityOptionsResourceAccess::getInstance(
    const CmpiContext& aContext,
    const CmpiBroker& aBroker,
    const char** aPropertiesPP,
    const Linux_SambaGlobalSecurityOptionsInstanceName& anInstanceName) {

    if (strcasecmp(DEFAULT_GLOBAL_NAME,anInstanceName.getName())!=0) {
      throw CmpiStatus(CMPI_RC_ERR_NOT_FOUND,"Instance does not exist!");
    }

    Linux_SambaGlobalSecurityOptionsManualInstance aManualInstance;
    aManualInstance.setInstanceName(anInstanceName);
    
    setInstanceProperties(aManualInstance);
    
    return aManualInstance;
  }

  //----------------------------------------------------------------------------

  void
  Linux_SambaGlobalSecurityOptionsResourceAccess::setInstance(
     const CmpiContext& aContext,
     const CmpiBroker& aBroker,
     const char** aPropertiesPP,
     const Linux_SambaGlobalSecurityOptionsManualInstance& aManualInstance) {
    
    if (strcasecmp(DEFAULT_GLOBAL_NAME,aManualInstance.getInstanceName().getName())!=0) {
      throw CmpiStatus(CMPI_RC_ERR_NOT_FOUND,"Instance does not exist!");
    }

    if ( aManualInstance.isAuthMethodsSet() )
      set_global_option(AUTH_METHODS, aManualInstance.getAuthMethods());
    
    if ( aManualInstance.isEncryptPasswordsSet() ) {
      if(aManualInstance.getEncryptPasswords())  
	set_global_option(ENCRYPT_PASSWORDS,YES);
      else
	set_global_option(ENCRYPT_PASSWORDS,NO);
    }
    
    if ( aManualInstance.isMinPasswordLengthSet()) {
      char *option = (char *) malloc( 5*sizeof(char) );
      sprintf(option,"%d",aManualInstance.getMinPasswordLength());
      set_global_option(MIN_PASSWORD_LENGTH, option);
      free(option);
    }
    
    if ( aManualInstance.isNullPasswordsSet() ) {
      if(aManualInstance.getNullPasswords())  
	set_global_option(NULL_PASSWORDS,YES);
      else
	set_global_option(NULL_PASSWORDS,NO);
    }
    
    if ( aManualInstance.isPassdbBackendSet() )
      set_global_option(PASSDB_BACKEND, aManualInstance.getPassdbBackend());
    
    
    if ( aManualInstance.isSMBPasswdFileSet() )
      set_global_option(SMB_PASSWD_FILE, aManualInstance.getSMBPasswdFile());
    
    if ( aManualInstance.isSecuritySet()) {
      switch(aManualInstance.getSecurity()) {
      case 0:
	set_global_option(SECURITY, "user");
	break;
      case 1:
	set_global_option(SECURITY, "share");
	break;
      case 2:
	set_global_option(SECURITY, "server");
	break;
      case 3:
	set_global_option(SECURITY, "domain");
	break;
      case 4:
	set_global_option(SECURITY, "ads");
	break;
      }
    }
  }
  
  
  //----------------------------------------------------------------------------
  /*
  Linux_SambaGlobalSecurityOptionsInstanceName
  Linux_SambaGlobalSecurityOptionsResourceAccess::createInstance(
    const CmpiContext& aContext,
    const CmpiBroker& aBroker,
    const Linux_SambaGlobalSecurityOptionsManualInstance& aManualInstance) { }
  */
  
  //----------------------------------------------------------------------------
  /*
  void
  Linux_SambaGlobalSecurityOptionsResourceAccess::deleteInstance(
    const CmpiContext& aContext,
    const CmpiBroker& aBroker,
    const Linux_SambaGlobalSecurityOptionsInstanceName& anInstanceName) { }
	*/
	

  
  // extrinsic methods

	
}


