/**
 *  Linux_SambaShareSecurityOptionsResourceAccess.cpp
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


#include "Linux_SambaShareSecurityOptionsResourceAccess.h"


namespace genProvider {
  
  void Linux_SambaShareSecurityOptionsResourceAccess::setInstanceNameProperties(const char* nsp,
   char *instanceName,
   Linux_SambaShareSecurityOptionsInstanceName& anInstanceName)
  {
    anInstanceName.setNamespace(nsp);
    anInstanceName.setName(instanceName);
    anInstanceName.setInstanceID(DEFAULT_INSTANCE_ID);
  };
  
  void Linux_SambaShareSecurityOptionsResourceAccess::setInstanceProperties(
   Linux_SambaShareSecurityOptionsManualInstance& aManualInstance, bool global)
  {
    char *option;
    if(global){
      option = get_global_option(CREATE_MASK);	
      if ( option )
	aManualInstance.setCreateMask( atoi(option) );
      
      option = get_global_option(DIRECTORY_MASK);	
      if ( option )
	aManualInstance.setDirectoryMask( atoi(option) );
      
      option = get_global_option(DIRECTORY_SECURITY_MASK);	
      if ( option )
	aManualInstance.setDirectorySecurityMask( atoi(option) );
      
    }else{
      
      option = get_option(aManualInstance.getInstanceName().getName(),CREATE_MASK);	
      if ( option )
	aManualInstance.setCreateMask( atoi(option) );
      
      option = get_option(aManualInstance.getInstanceName().getName(),DIRECTORY_MASK);	
      if ( option )
	aManualInstance.setDirectoryMask( atoi(option) );
      
      option = get_option(aManualInstance.getInstanceName().getName(),DIRECTORY_SECURITY_MASK);	
      if ( option )
	aManualInstance.setDirectorySecurityMask( atoi(option) );
    }
  }; 
  
  void Linux_SambaShareSecurityOptionsResourceAccess::setRAProperties(
   Linux_SambaShareSecurityOptionsManualInstance newInstance, bool global)
  {
    if(global){
      if ( newInstance.isCreateMaskSet()){
	char *option = (char *) malloc( 5*sizeof(char) );
	sprintf(option,"%04d",newInstance.getCreateMask());
	set_global_option(CREATE_MASK, option);
	free(option);
      }
      
      if ( newInstance.isDirectoryMaskSet()){
	char *option = (char *) malloc( 5*sizeof(char) );
	sprintf(option,"%04d",newInstance.getDirectoryMask());
	set_global_option(DIRECTORY_MASK, option);
	free(option);
      }
      
      if ( newInstance.isDirectorySecurityMaskSet()){
	char *option = (char *) malloc( 5*sizeof(char) );
	sprintf(option,"%04d",newInstance.getDirectorySecurityMask());
	set_global_option(DIRECTORY_SECURITY_MASK, option);
	free(option);
      }
    }
    else{
      if ( newInstance.isCreateMaskSet()){
	char *option = (char *) malloc( 5*sizeof(char) );
	sprintf(option,"%04d",newInstance.getCreateMask());
	set_share_option(newInstance.getInstanceName().getName(),CREATE_MASK, option);
	free(option);
      }
      
      if ( newInstance.isDirectoryMaskSet()){
	char *option = (char *) malloc( 5*sizeof(char) );
	sprintf(option,"%04d",newInstance.getDirectoryMask());
	set_share_option(newInstance.getInstanceName().getName(),DIRECTORY_MASK, option);
	free(option);
      }
      
      if ( newInstance.isDirectorySecurityMaskSet()){
	char *option = (char *) malloc( 5*sizeof(char) );
	sprintf(option,"%04d",newInstance.getDirectorySecurityMask());
	set_share_option(newInstance.getInstanceName().getName(),DIRECTORY_SECURITY_MASK, option);
      }
    }
  };


    //Linux_SambaShareSecurityOptionsResourceAccess::Linux_SambaShareSecurityOptionsResourceAccess();
    Linux_SambaShareSecurityOptionsResourceAccess::~Linux_SambaShareSecurityOptionsResourceAccess() { 
      terminator();
    };
    
    /* intrinsic methods */
    
  void Linux_SambaShareSecurityOptionsResourceAccess::enumInstanceNames(
   const CmpiContext& ctx, const CmpiBroker &mbp, const char *nsp,
   Linux_SambaShareSecurityOptionsInstanceNameEnumeration& instnames)
  { 
    Linux_SambaShareSecurityOptionsInstanceName instanceName;
    setInstanceNameProperties(nsp,DEFAULT_GLOBAL_NAME,instanceName);
    instnames.addElement(instanceName);
    
    char ** shares = get_shares_list();
    
    if(shares){
      for (int i=0; shares[i]; i++){
	Linux_SambaShareSecurityOptionsInstanceName instanceName;
	setInstanceNameProperties(nsp,shares[i],instanceName);
	instnames.addElement(instanceName); 
      }
    }
  };

  void Linux_SambaShareSecurityOptionsResourceAccess::enumInstances(
   const CmpiContext& ctx,
   const CmpiBroker &mbp,
   const char *nsp,
   const char* *properties,
   Linux_SambaShareSecurityOptionsManualInstanceEnumeration& instances)
  {
    Linux_SambaShareSecurityOptionsManualInstance aManualInstance;
    Linux_SambaShareSecurityOptionsInstanceName instanceName;
    
    setInstanceNameProperties(nsp,DEFAULT_GLOBAL_NAME,instanceName);
    aManualInstance.setInstanceName(instanceName);
    
    setInstanceProperties(aManualInstance, true);
    
    instances.addElement(aManualInstance);

    char ** shares = get_shares_list();

    if(shares){
      for (int i=0; shares[i]; i++){
	setInstanceNameProperties(nsp,shares[i],instanceName);
	aManualInstance.setInstanceName(instanceName);
	
	setInstanceProperties(aManualInstance, false);
	
	instances.addElement(aManualInstance);
      }
    }
  };
  	
    
  Linux_SambaShareSecurityOptionsManualInstance 
   Linux_SambaShareSecurityOptionsResourceAccess::getInstance(
   const CmpiContext& ctx,
   const CmpiBroker &mbp,
   const char* *properties,
   const Linux_SambaShareSecurityOptionsInstanceName& instanceName)
  {
    Linux_SambaShareSecurityOptionsManualInstance aManualInstance;
    aManualInstance.setInstanceName(instanceName);
    
    if(!strcasecmp(DEFAULT_GLOBAL_NAME,instanceName.getName()))
      setInstanceProperties(aManualInstance,true);
    else
      setInstanceProperties(aManualInstance,false);
    return aManualInstance;  
  };
  
  	
  void Linux_SambaShareSecurityOptionsResourceAccess::setInstance(
   const CmpiContext& ctx,
   const CmpiBroker &mbp,
   const char* *properties,
   const Linux_SambaShareSecurityOptionsManualInstance& newInstance)
  {
    if(!strcasecmp(DEFAULT_GLOBAL_NAME,newInstance.getInstanceName().getName()))
      setRAProperties(newInstance,true);
    else
      setRAProperties(newInstance,false);
  };
  	
  void Linux_SambaShareSecurityOptionsResourceAccess::createInstance(
   const CmpiContext& ctx, const CmpiBroker &mbp,
   const Linux_SambaShareSecurityOptionsManualInstance& newInstance)
    {
      if(!strcasecmp(DEFAULT_GLOBAL_NAME,newInstance.getInstanceName().getName()))
	setRAProperties(newInstance,true);
      else
	setRAProperties(newInstance,false);
    };
  
  void Linux_SambaShareSecurityOptionsResourceAccess::deleteInstance(
   const CmpiContext& ctx, const CmpiBroker &mbp,
   const Linux_SambaShareSecurityOptionsInstanceName& instanceName)
    {
      if(!strcasecmp(DEFAULT_GLOBAL_NAME,instanceName.getName())){
	set_global_option(CREATE_MASK,NULL);
	set_global_option(DIRECTORY_MASK,NULL);
	set_global_option(DIRECTORY_SECURITY_MASK,NULL);
      }
      else{
	if(service_exists(instanceName.getName())){
	  set_share_option(instanceName.getName(),CREATE_MASK,NULL);
	  set_share_option(instanceName.getName(),DIRECTORY_MASK,NULL);
	  set_share_option(instanceName.getName(),DIRECTORY_SECURITY_MASK,NULL);
	}else
	  throw CmpiStatus(CMPI_RC_ERR_INVALID_PARAMETER,"Instance doesn't exist!");
      }
    };
  
  /* extrinsic methods */
	
}


