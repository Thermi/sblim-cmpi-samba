/**
 *  Linux_SambaUsersForServiceResourceAccess.cpp
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


#include "Linux_SambaUsersForServiceResourceAccess.h"

namespace genProvider {
  
   bool Linux_SambaUsersForServiceResourceAccess::validUser(const char* user)
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

    //Linux_SambaUsersForServiceResourceAccess::Linux_SambaUsersForServiceResourceAccess();
    Linux_SambaUsersForServiceResourceAccess::~Linux_SambaUsersForServiceResourceAccess() {
      terminator();
    };
    
    /* intrinsic methods */
    /*
    void Linux_SambaUsersForServiceResourceAccess::enumInstanceNames(
     const CmpiContext& ctx, const CmpiBroker &mbp, const char *nsp,
     Linux_SambaUsersForServiceInstanceNameEnumeration& instnames){
      
      int numInstanceNames=1;
      for(int i=0;i<numInstanceNames;i++){
      
        //place here the code retrieving your instanceName
      
        Linux_SambaUsersForServiceInstanceName instanceName;
        
      }      
    }
    */
  	/*
    void Linux_SambaUsersForServiceResourceAccess::enumInstances(
     const CmpiContext& ctx,
     const CmpiBroker &mbp,
     const char *nsp,
     const char* *properties,
  	 Linux_SambaUsersForServiceManualInstanceEnumeration& instances){};
  	*/
       
    Linux_SambaUsersForServiceManualInstance 
     Linux_SambaUsersForServiceResourceAccess::getInstance(
     const CmpiContext& ctx,
     const CmpiBroker &mbp,
     const char* *properties,
     const Linux_SambaUsersForServiceInstanceName& instName){
      Linux_SambaUsersForServiceManualInstance instance;
      instance.setInstanceName(instName);
      return instance;
    }
  	
  	/*
    void Linux_SambaUsersForServiceResourceAccess::setInstance(
     const CmpiContext& ctx,
     const CmpiBroker &mbp,
     const char* *properties,
     const Linux_SambaUsersForServiceManualInstance&){};
  	*/
       
    void Linux_SambaUsersForServiceResourceAccess::createInstance(
     const CmpiContext& ctx, const CmpiBroker &mbp,
     const Linux_SambaUsersForServiceManualInstance&){};
  	
  	
    void Linux_SambaUsersForServiceResourceAccess::deleteInstance(
     const CmpiContext& ctx, const CmpiBroker &mbp,
     const Linux_SambaUsersForServiceInstanceName&){};
	
    
    /* Association Interface */
    
  void Linux_SambaUsersForServiceResourceAccess::referencesPartComponent( 
   const CmpiContext& ctx,  
   const CmpiBroker &mbp,
   const char *nsp,
   const char** properties,
   const Linux_SambaServiceInstanceName& sourceInst,
   Linux_SambaUsersForServiceManualInstanceEnumeration& instEnum)
  {
    char ** users = get_samba_users_list();
    
    if(users){
      for (int i=0; users[i]; i++){
	Linux_SambaUsersForServiceManualInstance manualInstance;
	
	Linux_SambaUsersForServiceInstanceName instName;
	instName.setNamespace(nsp);
	instName.setGroupComponent(sourceInst);
	
	Linux_SambaUserInstanceName userInstName;
	userInstName.setNamespace(nsp);
	userInstName.setSambaUserName(users[i]);
	
	instName.setPartComponent(userInstName);
	
	manualInstance.setInstanceName(instName);
	instEnum.addElement(manualInstance);
      }
    }
  };
    
  void Linux_SambaUsersForServiceResourceAccess::referencesGroupComponent( 
   const CmpiContext& ctx,  
   const CmpiBroker &mbp,
   const char *nsp,
   const char** properties,
   const Linux_SambaUserInstanceName& sourceInst,
   Linux_SambaUsersForServiceManualInstanceEnumeration& instEnum)
  { 
    if(validUser(sourceInst.getSambaUserName())){
      Linux_SambaUsersForServiceManualInstance manualInstance;
      
      Linux_SambaUsersForServiceInstanceName instName;
      instName.setNamespace(nsp);
      instName.setPartComponent(sourceInst);
      
      Linux_SambaServiceInstanceName elemInstanceName;
      elemInstanceName.setNamespace(nsp);
      elemInstanceName.setName(DEFAULT_SERVICE_NAME);
      elemInstanceName.setCreationClassName(DEFAULT_CREATION_CLASS_NAME);
      elemInstanceName.setSystemCreationClassName(DEFAULT_SYSTEM_CREATION_CLASS_NAME);
      elemInstanceName.setSystemName(DEFAULT_SYSTEM_NAME);
      
      instName.setGroupComponent(elemInstanceName);
      
      manualInstance.setInstanceName(instName);
      instEnum.addElement(manualInstance);
    }
  };
    
  void Linux_SambaUsersForServiceResourceAccess::associatorsPartComponent( 
   const CmpiContext& ctx,  
   const CmpiBroker &mbp,
   const char *nsp,
   const char** properties,
   const Linux_SambaServiceInstanceName& sourceInst,
   Linux_SambaUserInstanceEnumeration& instEnum)
    { 
    char ** users = get_samba_users_list();
    
    if(users){
      for (int i=0; users[i]; i++){
	Linux_SambaUserInstance instance;
	
	Linux_SambaUserInstanceName userInstName;
	userInstName.setNamespace(nsp);
	userInstName.setSambaUserName(users[i]);

	instance.setInstanceName(userInstName);
	char *option;

	option = get_user_unix_name(users[i]);
	if ( option )
	  instance.setSystemUserName( option );
	
	instEnum.addElement(instance);
      }
    }
  };
    
  void Linux_SambaUsersForServiceResourceAccess::associatorsGroupComponent( 
   const CmpiContext& ctx,  
   const CmpiBroker &mbp,
   const char *nsp,
   const char** properties,
   const Linux_SambaUserInstanceName& sourceInst,
   Linux_SambaServiceInstanceEnumeration& instEnum)
    { 
      if(validUser(sourceInst.getSambaUserName())){
	Linux_SambaServiceInstance instance;
	
	Linux_SambaServiceInstanceName elemInstanceName;
	elemInstanceName.setNamespace(nsp);
	elemInstanceName.setName(DEFAULT_SERVICE_NAME);
	elemInstanceName.setCreationClassName(DEFAULT_CREATION_CLASS_NAME);
	elemInstanceName.setSystemCreationClassName(DEFAULT_SYSTEM_CREATION_CLASS_NAME);
	elemInstanceName.setSystemName(DEFAULT_SYSTEM_NAME);
	
	instance.setInstanceName(elemInstanceName);
	
	instEnum.addElement(instance);
      }
    };

    /* extrinsic methods */
	
}


