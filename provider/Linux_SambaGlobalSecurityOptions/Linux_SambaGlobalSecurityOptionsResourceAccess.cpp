/**
 *  Linux_SambaGlobalSecurityOptionsResourceAccess.cpp
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


#include "Linux_SambaGlobalSecurityOptionsResourceAccess.h"

namespace genProvider {
  
   void Linux_SambaGlobalSecurityOptionsResourceAccess::setInstanceNameProperties(const char* nsp,     
    Linux_SambaGlobalSecurityOptionsInstanceName& anInstanceName)
  {
    anInstanceName.setNamespace(nsp);
    anInstanceName.setName(DEFAULT_GLOBAL_NAME);
    anInstanceName.setInstanceID(DEFAULT_INSTANCE_ID);
  }
  
  void Linux_SambaGlobalSecurityOptionsResourceAccess::setInstanceProperties(
   Linux_SambaGlobalSecurityOptionsManualInstance& aManualInstance)
  {
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


    //Linux_SambaGlobalSecurityOptionsResourceAccess::Linux_SambaGlobalSecurityOptionsResourceAccess();
    Linux_SambaGlobalSecurityOptionsResourceAccess::~Linux_SambaGlobalSecurityOptionsResourceAccess() { };
    
    /* intrinsic methods */
    
  void Linux_SambaGlobalSecurityOptionsResourceAccess::enumInstanceNames(
   const CmpiContext& ctx, const CmpiBroker &mbp, const char *nsp,
   Linux_SambaGlobalSecurityOptionsInstanceNameEnumeration& instnames)
  {
    Linux_SambaGlobalSecurityOptionsInstanceName instanceName;
    setInstanceNameProperties(nsp,instanceName);
    instnames.addElement(instanceName); 
  };

  void Linux_SambaGlobalSecurityOptionsResourceAccess::enumInstances(
   const CmpiContext& ctx,
   const CmpiBroker &mbp,
   const char *nsp,
   const char* *properties,
   Linux_SambaGlobalSecurityOptionsManualInstanceEnumeration& instances)
  {
    Linux_SambaGlobalSecurityOptionsManualInstance aManualInstance;
    Linux_SambaGlobalSecurityOptionsInstanceName instanceName;
    
    setInstanceNameProperties(nsp,instanceName);
    aManualInstance.setInstanceName(instanceName);

    setInstanceProperties(aManualInstance);
    
    instances.addElement(aManualInstance);
  };

  Linux_SambaGlobalSecurityOptionsManualInstance 
   Linux_SambaGlobalSecurityOptionsResourceAccess::getInstance(
   const CmpiContext& ctx,
   const CmpiBroker &mbp,
   const char* *properties,
   const Linux_SambaGlobalSecurityOptionsInstanceName& instanceName)
  {
    Linux_SambaGlobalSecurityOptionsManualInstance aManualInstance;
    aManualInstance.setInstanceName(instanceName);
    
    setInstanceProperties(aManualInstance);

    return aManualInstance;      
  };


  void Linux_SambaGlobalSecurityOptionsResourceAccess::setInstance(
   const CmpiContext& ctx,
   const CmpiBroker &mbp,
   const char* *properties,
   const Linux_SambaGlobalSecurityOptionsManualInstance& newInstance)
  {
    
    if ( newInstance.isAuthMethodsSet() )
      set_global_option(AUTH_METHODS, newInstance.getAuthMethods());

    if ( newInstance.isEncryptPasswordsSet() )
      {
	if(newInstance.getEncryptPasswords())  
	  set_global_option(ENCRYPT_PASSWORDS,YES);
	else
	  set_global_option(ENCRYPT_PASSWORDS,NO);
      }
    
    if ( newInstance.isMinPasswordLengthSet())
      {
	char *option = (char *) malloc( 5*sizeof(char) );
	sprintf(option,"%d",newInstance.getMinPasswordLength());
	set_global_option(MIN_PASSWORD_LENGTH, option);
	free(option);
      }

    if ( newInstance.isNullPasswordsSet() )
      {
	if(newInstance.getNullPasswords())  
	  set_global_option(NULL_PASSWORDS,YES);
	else
	  set_global_option(NULL_PASSWORDS,NO);
      }

    if ( newInstance.isPassdbBackendSet() )
      set_global_option(PASSDB_BACKEND, newInstance.getPassdbBackend());
	
    
    if ( newInstance.isSMBPasswdFileSet() )
      set_global_option(SMB_PASSWD_FILE, newInstance.getSMBPasswdFile());
    
    if ( newInstance.isSecuritySet())
      {
	switch(newInstance.getSecurity())
	  {
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
    
  }; 
    
  	/*
    void Linux_SambaGlobalSecurityOptionsResourceAccess::createInstance(
     const CmpiContext& ctx, const CmpiBroker &mbp,
     const Linux_SambaGlobalSecurityOptionsManualInstance&){};
  	*/
  	/*
    void Linux_SambaGlobalSecurityOptionsResourceAccess::deleteInstance(
     const CmpiContext& ctx, const CmpiBroker &mbp,
     const Linux_SambaGlobalSecurityOptionsInstanceName&){};
	*/
    
    /* extrinsic methods */
	
}


