// =======================================================================
// Linux_SambaGlobalSecurityForGlobalResourceAccess.cpp
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
#include "Linux_SambaGlobalSecurityForGlobalResourceAccess.h"

#include "smt_smb_ra_support.h"
#include "smt_smb_defaultvalues.h"

namespace genProvider {
  
  //----------------------------------------------------------------------------
  //Linux_SambaGlobalSecurityForGlobalResourceAccess::Linux_SambaGlobalSecurityForGlobalResourceAccess();

  //----------------------------------------------------------------------------
  Linux_SambaGlobalSecurityForGlobalResourceAccess::~Linux_SambaGlobalSecurityForGlobalResourceAccess() {
    terminator();
  }
    
  // intrinsic methods
  
  //----------------------------------------------------------------------------
  void
  Linux_SambaGlobalSecurityForGlobalResourceAccess::enumInstanceNames(
     const CmpiContext& aContext,
     const CmpiBroker& aBroker,
     const char* aNameSpaceP,
     Linux_SambaGlobalSecurityForGlobalInstanceNameEnumeration& anInstanceNameEnumeration) {
      
    Linux_SambaGlobalSecurityForGlobalInstanceName instName;
    instName.setNamespace(aNameSpaceP);

    Linux_SambaGlobalOptionsInstanceName globalInstName;
    globalInstName.setNamespace(aNameSpaceP);
    globalInstName.setName(DEFAULT_GLOBAL_NAME);
    globalInstName.setInstanceID(DEFAULT_INSTANCE_ID);

    instName.setManagedElement(globalInstName);

    Linux_SambaGlobalSecurityOptionsInstanceName elemInstanceName;
    elemInstanceName.setNamespace(aNameSpaceP);
    elemInstanceName.setName(DEFAULT_GLOBAL_NAME);
    elemInstanceName.setInstanceID(DEFAULT_INSTANCE_ID);

    instName.setSettingData(elemInstanceName);

    anInstanceNameEnumeration.addElement(instName);

  }
  
  
  //----------------------------------------------------------------------------
  
  void
  Linux_SambaGlobalSecurityForGlobalResourceAccess::enumInstances(
    const CmpiContext& aContext,
    const CmpiBroker& aBroker,
     const char* aNameSpaceP,
     const char** aPropertiesPP,
  	 Linux_SambaGlobalSecurityForGlobalManualInstanceEnumeration& aManualInstanceEnumeration) {

    Linux_SambaGlobalSecurityForGlobalManualInstance manualInstance;

    Linux_SambaGlobalSecurityForGlobalInstanceName instName;
    instName.setNamespace(aNameSpaceP);

    Linux_SambaGlobalOptionsInstanceName globalInstName;
    globalInstName.setNamespace(aNameSpaceP);
    globalInstName.setName(DEFAULT_GLOBAL_NAME);
    globalInstName.setInstanceID(DEFAULT_INSTANCE_ID);

    instName.setManagedElement(globalInstName);

    Linux_SambaGlobalSecurityOptionsInstanceName elemInstanceName;
    elemInstanceName.setNamespace(aNameSpaceP);
    elemInstanceName.setName(DEFAULT_GLOBAL_NAME);
    elemInstanceName.setInstanceID(DEFAULT_INSTANCE_ID);

    instName.setSettingData(elemInstanceName);

    manualInstance.setInstanceName(instName);
    aManualInstanceEnumeration.addElement(manualInstance);


  }
  
  
  //----------------------------------------------------------------------------
  
  Linux_SambaGlobalSecurityForGlobalManualInstance 
  Linux_SambaGlobalSecurityForGlobalResourceAccess::getInstance(
    const CmpiContext& aContext,
    const CmpiBroker& aBroker,
    const char** aPropertiesPP,
    const Linux_SambaGlobalSecurityForGlobalInstanceName& anInstanceName) {

    Linux_SambaGlobalSecurityForGlobalManualInstance manualInstance;
   
    if (strcasecmp(anInstanceName.getSettingData().getName(),DEFAULT_GLOBAL_NAME)!=0) {
       throw CmpiStatus(CMPI_RC_ERR_NOT_FOUND,"Instance does not exist. The specified GlobalSecurityOptions instance is unknown");
    }

    if (strcasecmp(anInstanceName.getManagedElement().getName(),DEFAULT_GLOBAL_NAME)!=0) {
       throw CmpiStatus(CMPI_RC_ERR_NOT_FOUND,"Instance does not exist. The specified GlobalOptions instance is unknown");
    }

    manualInstance.setInstanceName(anInstanceName);
    return manualInstance;
     
  }
  
  //----------------------------------------------------------------------------
  /*
  void
  Linux_SambaGlobalSecurityForGlobalResourceAccess::setInstance(
     const CmpiContext& aContext,
     const CmpiBroker& aBroker,
     const char** aPropertiesPP,
     const Linux_SambaGlobalSecurityForGlobalManualInstance& aManualInstance) { }
  */
  
  //----------------------------------------------------------------------------
  /*
  Linux_SambaGlobalSecurityForGlobalInstanceName
  Linux_SambaGlobalSecurityForGlobalResourceAccess::createInstance(
    const CmpiContext& aContext,
    const CmpiBroker& aBroker,
    const Linux_SambaGlobalSecurityForGlobalManualInstance& aManualInstance) { }
  */
  
  //----------------------------------------------------------------------------
  /*
  void
  Linux_SambaGlobalSecurityForGlobalResourceAccess::deleteInstance(
    const CmpiContext& aContext,
    const CmpiBroker& aBroker,
    const Linux_SambaGlobalSecurityForGlobalInstanceName& anInstanceName) { }
	*/
	

  // Association Interface
  //----------------------------------------------------------------------------

  void Linux_SambaGlobalSecurityForGlobalResourceAccess::referencesSettingData( 
    const CmpiContext& aContext,  
    const CmpiBroker& aBroker,
    const char* aNameSpaceP,
    const char** aPropertiesPP,
    const Linux_SambaGlobalOptionsInstanceName& aSourceInstanceName,
    Linux_SambaGlobalSecurityForGlobalManualInstanceEnumeration& aManualInstanceEnumeration) {

    if(strcasecmp(aSourceInstanceName.getName(),DEFAULT_GLOBAL_NAME)!=0) {
       throw CmpiStatus(CMPI_RC_ERR_INVALID_PARAMETER,"The Instance does not exist!");
    }
    
    Linux_SambaGlobalSecurityForGlobalManualInstance manualInstance;
    
    Linux_SambaGlobalSecurityForGlobalInstanceName instName;
    instName.setNamespace(aNameSpaceP);
    instName.setManagedElement(aSourceInstanceName);
    
    Linux_SambaGlobalSecurityOptionsInstanceName secInstName;
    secInstName.setNamespace(aNameSpaceP);
    secInstName.setName(aSourceInstanceName.getName());
    secInstName.setInstanceID(DEFAULT_INSTANCE_ID);
	
    instName.setSettingData(secInstName);
    
    manualInstance.setInstanceName(instName);
    aManualInstanceEnumeration.addElement(manualInstance);
  }

  
  //----------------------------------------------------------------------------

  void Linux_SambaGlobalSecurityForGlobalResourceAccess::referencesManagedElement( 
    const CmpiContext& aContext,  
    const CmpiBroker& aBroker,
    const char* aNameSpaceP,
    const char** aPropertiesPP,
    const Linux_SambaGlobalSecurityOptionsInstanceName& aSourceInstanceName,
    Linux_SambaGlobalSecurityForGlobalManualInstanceEnumeration& aManualInstanceEnumeration) { 

    if(strcasecmp(aSourceInstanceName.getName(),DEFAULT_GLOBAL_NAME)!=0) {
       throw CmpiStatus(CMPI_RC_ERR_INVALID_PARAMETER,"The Instance does not exist!");
    }
    
    Linux_SambaGlobalSecurityForGlobalManualInstance manualInstance;
    
    Linux_SambaGlobalSecurityForGlobalInstanceName instName;
    instName.setNamespace(aNameSpaceP);
    instName.setSettingData(aSourceInstanceName);
    
    Linux_SambaGlobalOptionsInstanceName globalInstName;
    globalInstName.setNamespace(aNameSpaceP);
    globalInstName.setName(aSourceInstanceName.getName());
    globalInstName.setInstanceID(DEFAULT_INSTANCE_ID);
    
    instName.setManagedElement(globalInstName);
    
    manualInstance.setInstanceName(instName);
    aManualInstanceEnumeration.addElement(manualInstance);
  }

  
  //----------------------------------------------------------------------------

  void Linux_SambaGlobalSecurityForGlobalResourceAccess::associatorsSettingData( 
    const CmpiContext& aContext,  
    const CmpiBroker& aBroker,
    const char* aNameSpaceP,
    const char** aPropertiesPP,
    const Linux_SambaGlobalOptionsInstanceName& aSourceInstanceName,
    Linux_SambaGlobalSecurityOptionsInstanceEnumeration& anInstanceEnumeration) {

    if(strcasecmp(aSourceInstanceName.getName(),DEFAULT_GLOBAL_NAME)!=0) {
       throw CmpiStatus(CMPI_RC_ERR_INVALID_PARAMETER,"The Instance does not exist!");
    }
    
    Linux_SambaGlobalSecurityOptionsInstance instance;
    
    Linux_SambaGlobalSecurityOptionsInstanceName secInstName;
    secInstName.setNamespace(aNameSpaceP);
    secInstName.setName(aSourceInstanceName.getName());
    secInstName.setInstanceID(DEFAULT_INSTANCE_ID);
    
    instance.setInstanceName(secInstName);
    
    char *option;
    
    option = get_global_option(AUTH_METHODS);	
    if ( option )
      instance.setAuthMethods( option );
    
    option = get_global_option(ENCRYPT_PASSWORDS);	
    if ( option )
      if(strcasecmp(option,YES) == 0)
	instance.setEncryptPasswords( true );
      else
	instance.setEncryptPasswords( false );
    
    option = get_global_option(MIN_PASSWORD_LENGTH);	
    if ( option )
      instance.setMinPasswordLength( atoi(option) );
    
    option = get_global_option(NULL_PASSWORDS);	
    if ( option )
      if(strcasecmp(option,YES) == 0)
	instance.setNullPasswords( true );
      else
	instance.setNullPasswords( false );
    
    option = get_global_option(PASSDB_BACKEND);	
    if ( option )
      instance.setPassdbBackend( option );
    
    option = get_global_option(SMB_PASSWD_FILE);	
    if ( option )
      instance.setSMBPasswdFile( option );
    
    option = get_global_option(SECURITY);	
    if ( option )
      if(strcasecmp(option,"user") == 0)
	instance.setSecurity( 0 );
      else 
	if(strcasecmp(option,"share") == 0)
	  instance.setSecurity( 1 );
	else 
	  if(strcasecmp(option,"server") == 0)
	    instance.setSecurity( 2 );
	  else 
	    if(strcasecmp(option,"domain") == 0)
	      instance.setSecurity( 3 );
	    else 
	      if(strcasecmp(option,"ads") == 0)
		instance.setSecurity( 4 );
    
    anInstanceEnumeration.addElement(instance);
  }

  
  //----------------------------------------------------------------------------

  void Linux_SambaGlobalSecurityForGlobalResourceAccess::associatorsManagedElement( 
    const CmpiContext& aContext,  
    const CmpiBroker& aBroker,
    const char* aNameSpaceP,
    const char** aPropertiesPP,
    const Linux_SambaGlobalSecurityOptionsInstanceName& aSourceInstanceName,
    Linux_SambaGlobalOptionsInstanceEnumeration& anInstanceEnumeration) {

    if(strcasecmp(aSourceInstanceName.getName(),DEFAULT_GLOBAL_NAME)!=0) {
       throw CmpiStatus(CMPI_RC_ERR_INVALID_PARAMETER,"The Instance does not exist!");
    }
    
        Linux_SambaGlobalOptionsInstance instance;
    
    Linux_SambaGlobalOptionsInstanceName globalInstName;
    globalInstName.setNamespace(aNameSpaceP);
    globalInstName.setName(aSourceInstanceName.getName());
    globalInstName.setInstanceID(DEFAULT_INSTANCE_ID);
    
    instance.setInstanceName(globalInstName);

    char *option;
    option = get_global_option(BIND_INTERFACES_ONLY);	
    if ( option )
      if(strcasecmp(option,YES) == 0)
	instance.setBindInterfacesOnly( true );
      else
	instance.setBindInterfacesOnly( false );

    option = get_global_option(INTERFACES);	
    if ( option )
      instance.setInterfaces( option );
    
    option = get_global_option(NETBIOS_ALIASES);	
    if ( option )
      instance.setNetbiosAlias( option );

    option = get_global_option(NETBIOS_NAME);	
    if ( option )
      instance.setNetbiosName( option );
    
    option = get_global_option(SERVER_STRING);	
    if ( option )
      instance.setServerString( option );
    
    option = get_global_option(WORKGROUP);	
    if ( option )
      instance.setWorkgroup( option );
    	
    
    anInstanceEnumeration.addElement(instance);
  }

   
  
  // extrinsic methods

	
}


