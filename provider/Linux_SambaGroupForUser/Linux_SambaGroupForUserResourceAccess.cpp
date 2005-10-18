/**
 *  Linux_SambaGroupForUserResourceAccess.cpp
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


#include "Linux_SambaGroupForUserResourceAccess.h"

namespace genProvider {
  
    //Linux_SambaGroupForUserResourceAccess::Linux_SambaGroupForUserResourceAccess();
    Linux_SambaGroupForUserResourceAccess::~Linux_SambaGroupForUserResourceAccess() {
      terminator();
   };
    
    /* intrinsic methods */
    
  void Linux_SambaGroupForUserResourceAccess::enumInstanceNames(
   const CmpiContext& ctx, const CmpiBroker &mbp, const char *nsp,
   Linux_SambaGroupForUserInstanceNameEnumeration& instnames)
  { 
    int k;
    char ** get_users = get_samba_users_list();
    if(get_users){
      char ** users = (char **)malloc(sizeof(char *));
      for(k=0; get_users[k];k++){
	users = (char **)realloc(users,(k+2)*sizeof(char *));
	users[k] = strdup(get_users[k]);
      }
      users[k] = NULL;
      for(int i=0; users[i];i++){
	char ** groups = get_user_groups(users[i]);
	if(groups){
	  for(int j=0; groups[j];j++){    
	    Linux_SambaGroupForUserInstanceName instName;
	    instName.setNamespace(nsp);

	    Linux_SambaGroupInstanceName groupInstName;
	    groupInstName.setNamespace(nsp);
	    groupInstName.setSambaGroupName( groups[j] );
	    instName.setGroupComponent( groupInstName );
	    
	    Linux_SambaUserInstanceName userInstName;
	    userInstName.setNamespace(nsp);
	    userInstName.setSambaUserName( users[i] );
	    instName.setPartComponent(userInstName);
	    
	    instnames.addElement(instName);
	  }
	}
	free(users[i]);
      }
    }
  };
  
  
  void Linux_SambaGroupForUserResourceAccess::enumInstances(
   const CmpiContext& ctx,
   const CmpiBroker &mbp,
   const char *nsp,
   const char* *properties,
   Linux_SambaGroupForUserManualInstanceEnumeration& instances)
  { 
    int k;
    char ** get_users = get_samba_users_list();
    if(get_users){
      char ** users = (char **)malloc(sizeof(char *));
      for(k=0; get_users[k];k++){
	users = (char **)realloc(users,(k+2)*sizeof(char *));
	users[k] = strdup(get_users[k]);
      }
      users[k] = NULL;
      for(int i=0; users[i];i++){
	char ** groups = get_user_groups(users[i]);
	if(groups){
	  for(int j=0; groups[j];j++){    
	    Linux_SambaGroupForUserManualInstance manualInstance;
	    
	    Linux_SambaGroupForUserInstanceName instName;
	    instName.setNamespace(nsp);

	    Linux_SambaGroupInstanceName groupInstName;
	    groupInstName.setNamespace(nsp);
	    groupInstName.setSambaGroupName( groups[j] );
	    instName.setGroupComponent( groupInstName );
	    
	    Linux_SambaUserInstanceName userInstName;
	    userInstName.setNamespace(nsp);
	    userInstName.setSambaUserName( users[i] );
	    
	    instName.setPartComponent(userInstName);
	    
	    manualInstance.setInstanceName(instName);
	    instances.addElement(manualInstance);
	  }
	}
	free(users[i]);
      }
    }
  };
  
  
  Linux_SambaGroupForUserManualInstance 
   Linux_SambaGroupForUserResourceAccess::getInstance(
   const CmpiContext& ctx,
   const CmpiBroker &mbp,
   const char* *properties,
   const Linux_SambaGroupForUserInstanceName& instanceName){
    Linux_SambaGroupForUserManualInstance instance;
    instance.setInstanceName(instanceName);
    return instance;
  }
  
  	
  void Linux_SambaGroupForUserResourceAccess::setInstance(
   const CmpiContext& ctx,
   const CmpiBroker &mbp,
   const char* *properties,
   const Linux_SambaGroupForUserManualInstance&){};
  	
  	
  void Linux_SambaGroupForUserResourceAccess::createInstance(
   const CmpiContext& ctx, const CmpiBroker &mbp,
   const Linux_SambaGroupForUserManualInstance& newInstance)
  {
    if(add_user_to_group(newInstance.getInstanceName().getPartComponent().getSambaUserName(), newInstance.getInstanceName().getGroupComponent().getSambaGroupName()))
      throw CmpiStatus(CMPI_RC_ERR_INVALID_PARAMETER,"Instance could not be created!");
  };
  
  
  void Linux_SambaGroupForUserResourceAccess::deleteInstance(
   const CmpiContext& ctx, const CmpiBroker &mbp,
   const Linux_SambaGroupForUserInstanceName& instanceName)
  {
    if(remove_user_from_group(instanceName.getPartComponent().getSambaUserName(), instanceName.getGroupComponent().getSambaGroupName()))
      throw CmpiStatus(CMPI_RC_ERR_INVALID_PARAMETER,"Instance could not be deleted!");
  };
  
    
    /* Association Interface */
    
  void Linux_SambaGroupForUserResourceAccess::referencesGroupComponent( 
   const CmpiContext& ctx,  
   const CmpiBroker &mbp,
   const char *nsp,
   const char** properties,
   const Linux_SambaUserInstanceName& sourceInst,
   Linux_SambaGroupForUserManualInstanceEnumeration& instEnum)
  {
    char ** groups = get_user_groups(sourceInst.getSambaUserName());
    if(groups){
      for(int j=0; groups[j];j++){
	
	Linux_SambaGroupForUserManualInstance manualInstance;
	
	Linux_SambaGroupForUserInstanceName instName;
	instName.setNamespace(nsp);
	
	instName.setPartComponent(sourceInst);
	
	Linux_SambaGroupInstanceName groupInstName;
	groupInstName.setNamespace(nsp);
	groupInstName.setSambaGroupName( groups[j] );
	
	instName.setGroupComponent(groupInstName);
	
	manualInstance.setInstanceName(instName);
	instEnum.addElement(manualInstance);
      }
    }
  };
   
  void Linux_SambaGroupForUserResourceAccess::referencesPartComponent( 
   const CmpiContext& ctx,  
   const CmpiBroker &mbp,
   const char *nsp,
   const char** properties,
   const Linux_SambaGroupInstanceName& sourceInst,
   Linux_SambaGroupForUserManualInstanceEnumeration& instEnum)
  {
    int k;
    char ** get_users = get_samba_users_list();
    if(get_users){
      char ** users = (char **)malloc(sizeof(char *));
      for(k=0; get_users[k];k++){
	users = (char **)realloc(users,(k+2)*sizeof(char *));
	users[k] = strdup(get_users[k]);
      }
      users[k] = NULL;
      for(int i=0; users[i];i++){
	char ** groups = get_user_groups(users[i]);
	if(groups){
	  for(int j=0; groups[j];j++){    
	    if(!strcmp(groups[j],sourceInst.getSambaGroupName())){
	      
	      Linux_SambaGroupForUserManualInstance manualInstance;
	      
	      Linux_SambaGroupForUserInstanceName instName;
	      instName.setNamespace(nsp);
	      instName.setGroupComponent(sourceInst);
	      
	      Linux_SambaUserInstanceName userInstName;
	      userInstName.setNamespace(nsp);
	      userInstName.setSambaUserName( users[i] );
	      
	      instName.setPartComponent(userInstName);
	      
	      manualInstance.setInstanceName(instName);
	      instEnum.addElement(manualInstance);
	    }
	  }
	}
	free(users[i]);
      }
    }
  };
  
  void Linux_SambaGroupForUserResourceAccess::associatorsGroupComponent( 
   const CmpiContext& ctx,  
   const CmpiBroker &mbp,
   const char *nsp,
   const char** properties,
   const Linux_SambaUserInstanceName& sourceInst,
   Linux_SambaGroupInstanceEnumeration& instEnum)
  { 
    char ** groups = get_user_groups(sourceInst.getSambaUserName());
    if(groups){
      for(int j=0; groups[j];j++){
	
	Linux_SambaGroupInstance instance;
	
	Linux_SambaGroupInstanceName groupInstName;
	groupInstName.setNamespace(nsp);
	groupInstName.setSambaGroupName( groups[j] );
	
	instance.setInstanceName(groupInstName);
	char* option;
      
	option = get_unix_group_name( groups[j] );
	if ( option )
	  instance.setSystemGroupName( option );
	
	instEnum.addElement(instance);
      }
    }
  };
  
  void Linux_SambaGroupForUserResourceAccess::associatorsPartComponent( 
   const CmpiContext& ctx,  
   const CmpiBroker &mbp,
   const char *nsp,
   const char** properties,
   const Linux_SambaGroupInstanceName& sourceInst,
   Linux_SambaUserInstanceEnumeration& instEnum)
  { 
    int k;
    char ** get_users = get_samba_users_list();
    if(get_users){
      char ** users = (char **)malloc(sizeof(char *));
      for(k=0; get_users[k];k++){
	users = (char **)realloc(users,(k+2)*sizeof(char *));
	users[k] = strdup(get_users[k]);
      }
      users[k] = NULL;
      
      for(int i=0; users[i];i++){
	
	char ** groups = get_user_groups(users[i]);
	if(groups){
	  for(int j=0; groups[j];j++){
	    
	    if(!strcmp(groups[j],sourceInst.getSambaGroupName())){
	      
	      Linux_SambaUserInstance instance;
	      
	      Linux_SambaUserInstanceName userInstName;
	      userInstName.setNamespace(nsp);
	      userInstName.setSambaUserName( users[i] );
	      
	      instance.setInstanceName(userInstName);
	      char* option;
	      
	      option = get_user_unix_name( users[i] );
	      if ( option )
		instance.setSystemUserName( option );
	      
	      instEnum.addElement(instance);
	    }
	  }
	}
      }
    }
  };
    
    /* extrinsic methods */
	
}


