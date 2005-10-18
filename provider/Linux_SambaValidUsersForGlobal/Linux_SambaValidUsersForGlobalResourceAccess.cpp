/**
 *  Linux_SambaValidUsersForGlobalResourceAccess.cpp
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


#include "Linux_SambaValidUsersForGlobalResourceAccess.h"

namespace genProvider {
  
  //Linux_SambaValidUsersForGlobalResourceAccess::Linux_SambaValidUsersForGlobalResourceAccess();
  Linux_SambaValidUsersForGlobalResourceAccess::~Linux_SambaValidUsersForGlobalResourceAccess() { 
    terminator();
  };
    
    /* intrinsic methods */
 void Linux_SambaValidUsersForGlobalResourceAccess::enumInstanceNames(
   const CmpiContext& ctx, const CmpiBroker &mbp, const char *nsp,
   Linux_SambaValidUsersForGlobalInstanceNameEnumeration& instnames)
  {
    Linux_SambaGlobalOptionsInstanceName globalInstName;
    globalInstName.setNamespace(nsp);
    globalInstName.setName(DEFAULT_GLOBAL_NAME);
    globalInstName.setInstanceID(DEFAULT_INSTANCE_ID);
    
    
    char* user_list = get_global_option("valid users");
    
    if(user_list){
      SambaArray array = SambaArray(user_list);
      SambaArrayConstIterator iter;
      
      for ( iter = array.begin(); iter != array.end(); ++iter)
	{
	  if(validUser((*iter).c_str())){
	    Linux_SambaValidUsersForGlobalInstanceName assocName;
	    assocName.setNamespace(nsp);
	    assocName.setGroupComponent(globalInstName);
	    
	    Linux_SambaUserInstanceName userInstName;
	    userInstName.setNamespace(nsp);
	    userInstName.setSambaUserName( (*iter).c_str() );
	    
	    assocName.setPartComponent(userInstName);
	    
	    instnames.addElement(assocName);
	  }
	}
    }
  };
  
  void Linux_SambaValidUsersForGlobalResourceAccess::enumInstances(
   const CmpiContext& ctx,
   const CmpiBroker &mbp,
   const char *nsp,
   const char* *properties,
   Linux_SambaValidUsersForGlobalManualInstanceEnumeration& instances)
  {
    Linux_SambaGlobalOptionsInstanceName globalInstName;
    globalInstName.setNamespace(nsp);
    globalInstName.setName(DEFAULT_GLOBAL_NAME);
    globalInstName.setInstanceID(DEFAULT_INSTANCE_ID);
    
    char* user_list = get_global_option("valid users");
    
    if(user_list){
      SambaArray array = SambaArray(user_list);
      SambaArrayConstIterator iter;
      
      for ( iter = array.begin(); iter != array.end(); ++iter)
	{
	  if(validUser((*iter).c_str())){
	    Linux_SambaValidUsersForGlobalManualInstance manualInstance;
	    
	    Linux_SambaValidUsersForGlobalInstanceName instName;
	    instName.setNamespace(nsp);
	    instName.setGroupComponent(globalInstName);
	    
	    Linux_SambaUserInstanceName userInstName;
	    userInstName.setNamespace(nsp);
	    userInstName.setSambaUserName( (*iter).c_str() );
	    
	    instName.setPartComponent(userInstName);
	    
	    manualInstance.setInstanceName(instName);
	    instances.addElement(manualInstance);
	  }
	}
    }
  };
  	
  Linux_SambaValidUsersForGlobalManualInstance 
   Linux_SambaValidUsersForGlobalResourceAccess::getInstance(
   const CmpiContext& ctx,
   const CmpiBroker &mbp,
   const char* *properties,
   const Linux_SambaValidUsersForGlobalInstanceName& instanceName)
  {
    Linux_SambaValidUsersForGlobalManualInstance aManualInstance;
    aManualInstance.setInstanceName(instanceName);
    return aManualInstance;
  };

  	/*
    void Linux_SambaValidUsersForGlobalResourceAccess::setInstance(
     const CmpiContext& ctx,
     const CmpiBroker &mbp,
     const char* *properties,
     const Linux_SambaValidUsersForGlobalManualInstance&){};
  	*/
  	
   bool Linux_SambaValidUsersForGlobalResourceAccess::validUser(const char* user)
  {
    char ** users = get_samba_users_list();
    if(users){
      for (int i=0; users[i]; i++){
	if(!strcmp(users[i],user))
	  return true;
      }
    }
    return false;
  };

  void Linux_SambaValidUsersForGlobalResourceAccess::createInstance(
   const CmpiContext& ctx, const CmpiBroker &mbp,
   const Linux_SambaValidUsersForGlobalManualInstance& newInstance)
  {
    SambaArray array = SambaArray();
    char* user_list = get_option(newInstance.getInstanceName().getGroupComponent().getName(),"valid users");
    if(user_list)
      array.populate(user_list);
    
    if(!validUser(newInstance.getInstanceName().getPartComponent().getSambaUserName())){
      throw CmpiStatus(CMPI_RC_ERR_INVALID_PARAMETER,"Invalid User!");
    }else{
      if(!array.isPresent(string( newInstance.getInstanceName().getPartComponent().getSambaUserName() ))) {
	array.add( string( newInstance.getInstanceName().getPartComponent().getSambaUserName() ) );
	
	set_global_option("valid users",array.toString().c_str());
      } 
    }
  };
  
  void Linux_SambaValidUsersForGlobalResourceAccess::deleteInstance(
   const CmpiContext& ctx, const CmpiBroker &mbp,
   const Linux_SambaValidUsersForGlobalInstanceName& instanceName)
  {
    SambaArray array = SambaArray();
    char* user_list = get_option(instanceName.getGroupComponent().getName(),"valid users");
    if(user_list)
      array.populate(user_list);
    
    if(array.size() > 1){
      array.remove( string( instanceName.getPartComponent().getSambaUserName() )); 
      set_global_option("valid users",array.toString().c_str());
    }
    else
      set_global_option("valid users",NULL);
  }
  
    /* Association Interface */
    
  void Linux_SambaValidUsersForGlobalResourceAccess::referencesPartComponent( 
   const CmpiContext& ctx,  
   const CmpiBroker &mbp,
   const char *nsp,
   const char** properties,
   const Linux_SambaGlobalOptionsInstanceName& sourceInst,
   Linux_SambaValidUsersForGlobalManualInstanceEnumeration& instEnum)
  {
    char* user_list = get_option(sourceInst.getName(),"valid users");
    
    if(user_list){
      SambaArray array = SambaArray(user_list);
      SambaArrayConstIterator iter;
      
      for ( iter = array.begin(); iter != array.end(); ++iter)
	{
	  if(validUser((*iter).c_str())){
	    Linux_SambaValidUsersForGlobalManualInstance manualInstance;
	    
	    Linux_SambaValidUsersForGlobalInstanceName instName;
	    instName.setNamespace(nsp);
	    instName.setGroupComponent(sourceInst);
	    
	    Linux_SambaUserInstanceName userInstName;
	    userInstName.setNamespace(nsp);
	    userInstName.setSambaUserName( (*iter).c_str() );
	    
	    instName.setPartComponent(userInstName);
	    
	    manualInstance.setInstanceName(instName);
	    instEnum.addElement(manualInstance);
	  }
	}
    }
  };
  
  void Linux_SambaValidUsersForGlobalResourceAccess::referencesGroupComponent( 
   const CmpiContext& ctx,  
   const CmpiBroker &mbp,
   const char *nsp,
   const char** properties,
   const Linux_SambaUserInstanceName& sourceInst,
   Linux_SambaValidUsersForGlobalManualInstanceEnumeration& instEnum)
  {
    if(validUser(sourceInst.getSambaUserName())){
      char * user_list = get_global_option("valid users");
      if(user_list){
	SambaArray array = SambaArray(user_list);
	SambaArrayConstIterator iter;
	
	if(array.isPresent(sourceInst.getSambaUserName())){
	  Linux_SambaValidUsersForGlobalManualInstance manualInstance;
	  
	  Linux_SambaValidUsersForGlobalInstanceName instName;
	  instName.setNamespace(nsp);
	  instName.setPartComponent(sourceInst);
	  
	  
	  Linux_SambaGlobalOptionsInstanceName globalInstName;
	  globalInstName.setNamespace(nsp);
	  globalInstName.setName(DEFAULT_GLOBAL_NAME);
	  globalInstName.setInstanceID(DEFAULT_INSTANCE_ID);
	  
	  instName.setGroupComponent(globalInstName);
	  
	  manualInstance.setInstanceName(instName);
	  instEnum.addElement(manualInstance);
	}
      }
    }
  };
  
  void Linux_SambaValidUsersForGlobalResourceAccess::associatorsPartComponent( 
   const CmpiContext& ctx,  
   const CmpiBroker &mbp,
   const char *nsp,
   const char** properties,
   const Linux_SambaGlobalOptionsInstanceName& sourceInst,
   Linux_SambaUserInstanceEnumeration& instEnum)
  { 
    char* user_list = get_option(sourceInst.getName(),"valid users");
    if(user_list){
      SambaArray array = SambaArray(user_list);
      SambaArrayConstIterator iter;
      
      for ( iter = array.begin(); iter != array.end(); ++iter)
	{
	  if(validUser((*iter).c_str())){
	    Linux_SambaUserInstance instance;
	    
	    Linux_SambaUserInstanceName userInstName;
	    userInstName.setNamespace(nsp);
	    userInstName.setSambaUserName( (*iter).c_str() );
	    
	    instance.setInstanceName(userInstName);
	    char *option;
	    
	    option = get_user_unix_name((*iter).c_str() );
	    if ( option )
	      instance.setSystemUserName( option );
	    
	    instEnum.addElement(instance);
	  }
	}
    }
  };
    
  void Linux_SambaValidUsersForGlobalResourceAccess::associatorsGroupComponent( 
   const CmpiContext& ctx,  
   const CmpiBroker &mbp,
   const char *nsp,
   const char** properties,
   const Linux_SambaUserInstanceName& sourceInst,
   Linux_SambaGlobalOptionsInstanceEnumeration& instEnum)
  {
    if(validUser(sourceInst.getSambaUserName())){
      char * user_list = get_global_option("valid users");
      if(user_list){
	SambaArray array = SambaArray(user_list);
	SambaArrayConstIterator iter;
	
	if(array.isPresent(sourceInst.getSambaUserName())){
	  Linux_SambaGlobalOptionsInstance instance;
	  
	  Linux_SambaGlobalOptionsInstanceName globalInstName;
	  globalInstName.setNamespace(nsp);
	  globalInstName.setName(DEFAULT_GLOBAL_NAME);
	  globalInstName.setInstanceID(DEFAULT_INSTANCE_ID);
	  
	  instance.setInstanceName(globalInstName);
	  
	  char *option;
	  option = get_global_option("bind interfaces only");	
	  if ( option )
	    if(strcasecmp(option,"yes") == 0)
	      instance.setBindInterfacesOnly( true );
	    else
	      instance.setBindInterfacesOnly( false );
	  
	  option = get_global_option("interfaces");	
	  if ( option )
	    instance.setInterfaces( option );
	  
	  option = get_global_option("netbios aliases");	
	  if ( option )
	    instance.setNetbiosAlias( option );
	  
	  option = get_global_option("netbios name");	
	  if ( option )
	    instance.setNetbiosName( option );
	  
	  option = get_global_option("server string");	
	  if ( option )
	    instance.setServerString( option );
	  
	  option = get_global_option("workgroup");	
	  if ( option )
	    instance.setWorkgroup( option );
	  
	  
	  instEnum.addElement(instance);
	}
      }
    }
  };
  

    /* extrinsic methods */
	
}


