/**
 *  Linux_SambaGlobalSecurityForGlobalResourceAccess.cpp
 * 
 * (C) Copyright IBM Corp. 2005
 *
 * THIS FILE IS PROVIDED UNDER THE TERMS OF THE COMMON PUBLIC LICENSE
 * ("AGREEMENT"). ANY USE, REPRODUCTION OR DISTRIBUTION OF THIS FILE
 * CONSTITUTES RECIPIENTS ACCEPTANCE OF THE AGREEMENT.
 *
 * You can obtain a current copy of the Common Public License from
 * http://www.opensource.org/licenses/cpl1.0.php
 *
 * Author:     Rodrigo Ceron <rceron@br.ibm.com>
 *
 * Contributors:
 *
 */


#include "Linux_SambaGlobalSecurityForGlobalResourceAccess.h"

namespace genProvider {
  
    //Linux_SambaGlobalSecurityForGlobalResourceAccess::Linux_SambaGlobalSecurityForGlobalResourceAccess();
    Linux_SambaGlobalSecurityForGlobalResourceAccess::~Linux_SambaGlobalSecurityForGlobalResourceAccess() { };
    
    /* intrinsic methods */
    /*
    void Linux_SambaGlobalSecurityForGlobalResourceAccess::enumInstanceNames(
     const CmpiContext& ctx, const CmpiBroker &mbp, const char *nsp,
     Linux_SambaGlobalSecurityForGlobalInstanceNameEnumeration& instnames){
      
      int numInstanceNames=1;
      for(int i=0;i<numInstanceNames;i++){
      
        //place here the code retrieving your instanceName
      
        Linux_SambaGlobalSecurityForGlobalInstanceName instanceName;
        
      }      
    }
    */
  	/*
    void Linux_SambaGlobalSecurityForGlobalResourceAccess::enumInstances(
     const CmpiContext& ctx,
     const CmpiBroker &mbp,
     const char *nsp,
     const char* *properties,
  	 Linux_SambaGlobalSecurityForGlobalManualInstanceEnumeration& instances){};
  	*/
  	/*
    Linux_SambaGlobalSecurityForGlobalManualInstance 
     Linux_SambaGlobalSecurityForGlobalResourceAccess::getInstance(
     const CmpiContext& ctx,
     const CmpiBroker &mbp,
     const char* *properties,
     const Linux_SambaGlobalSecurityForGlobalInstanceName&){
      Linux_SambaGlobalSecurityForGlobalManualInstance instance;
      
    }
  	*/
  	/*
    void Linux_SambaGlobalSecurityForGlobalResourceAccess::setInstance(
     const CmpiContext& ctx,
     const CmpiBroker &mbp,
     const char* *properties,
     const Linux_SambaGlobalSecurityForGlobalManualInstance&){};
  	*/
  	/*
    void Linux_SambaGlobalSecurityForGlobalResourceAccess::createInstance(
     const CmpiContext& ctx, const CmpiBroker &mbp,
     const Linux_SambaGlobalSecurityForGlobalManualInstance&){};
  	*/
  	/*
    void Linux_SambaGlobalSecurityForGlobalResourceAccess::deleteInstance(
     const CmpiContext& ctx, const CmpiBroker &mbp,
     const Linux_SambaGlobalSecurityForGlobalInstanceName&){};
	*/
    
    /* Association Interface */
    
  void Linux_SambaGlobalSecurityForGlobalResourceAccess::referencesSettingData( 
   const CmpiContext& ctx,  
   const CmpiBroker &mbp,
   const char *nsp,
   const char** properties,
   const Linux_SambaGlobalOptionsInstanceName& sourceInst,
   Linux_SambaGlobalSecurityForGlobalManualInstanceEnumeration& instEnum)
  {
    Linux_SambaGlobalSecurityForGlobalManualInstance manualInstance;
    
    Linux_SambaGlobalSecurityForGlobalInstanceName instName;
    instName.setNamespace(nsp);
    instName.setManagedElement(sourceInst);
    
    Linux_SambaGlobalSecurityOptionsInstanceName secInstName;
    secInstName.setNamespace(nsp);
    secInstName.setName(sourceInst.getName());
    secInstName.setInstanceID(DEFAULT_INSTANCE_ID);
	
    instName.setSettingData(secInstName);
    
    manualInstance.setInstanceName(instName);
    instEnum.addElement(manualInstance);
  };
   
  void Linux_SambaGlobalSecurityForGlobalResourceAccess::referencesManagedElement( 
   const CmpiContext& ctx,  
   const CmpiBroker &mbp,
   const char *nsp,
   const char** properties,
   const Linux_SambaGlobalSecurityOptionsInstanceName& sourceInst,
   Linux_SambaGlobalSecurityForGlobalManualInstanceEnumeration& instEnum)
  {
    Linux_SambaGlobalSecurityForGlobalManualInstance manualInstance;
    
    Linux_SambaGlobalSecurityForGlobalInstanceName instName;
    instName.setNamespace(nsp);
    instName.setSettingData(sourceInst);
    
    Linux_SambaGlobalOptionsInstanceName globalInstName;
    globalInstName.setNamespace(nsp);
    globalInstName.setName(sourceInst.getName());
    globalInstName.setInstanceID(DEFAULT_INSTANCE_ID);
    
    instName.setManagedElement(globalInstName);
    
    manualInstance.setInstanceName(instName);
    instEnum.addElement(manualInstance);
  };
    
  void Linux_SambaGlobalSecurityForGlobalResourceAccess::associatorsSettingData( 
   const CmpiContext& ctx,  
   const CmpiBroker &mbp,
   const char *nsp,
   const char** properties,
   const Linux_SambaGlobalOptionsInstanceName& sourceInst,
   Linux_SambaGlobalSecurityOptionsInstanceEnumeration& instEnum)
  {
    Linux_SambaGlobalSecurityOptionsInstance instance;
    
    Linux_SambaGlobalSecurityOptionsInstanceName secInstName;
    secInstName.setNamespace(nsp);
    secInstName.setName(sourceInst.getName());
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
    
    instEnum.addElement(instance);
  };
    
  void Linux_SambaGlobalSecurityForGlobalResourceAccess::associatorsManagedElement( 
   const CmpiContext& ctx,  
   const CmpiBroker &mbp,
   const char *nsp,
   const char** properties,
   const Linux_SambaGlobalSecurityOptionsInstanceName& sourceInst,
   Linux_SambaGlobalOptionsInstanceEnumeration& instEnum)
  {
    Linux_SambaGlobalOptionsInstance instance;
    
    Linux_SambaGlobalOptionsInstanceName globalInstName;
    globalInstName.setNamespace(nsp);
    globalInstName.setName(sourceInst.getName());
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
    	
    
    instEnum.addElement(instance);
  };

    /* extrinsic methods */
	
}


