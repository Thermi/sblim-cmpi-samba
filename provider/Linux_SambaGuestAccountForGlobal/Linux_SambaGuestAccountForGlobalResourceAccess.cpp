/**
 *  Linux_SambaGuestAccountForGlobalResourceAccess.cpp
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


#include "Linux_SambaGuestAccountForGlobalResourceAccess.h"

namespace genProvider {
  
  //Linux_SambaGuestAccountForGlobalResourceAccess::Linux_SambaGuestAccountForGlobalResourceAccess();
  Linux_SambaGuestAccountForGlobalResourceAccess::~Linux_SambaGuestAccountForGlobalResourceAccess() { 
    terminator();
  };
    
    /* intrinsic methods */
  void Linux_SambaGuestAccountForGlobalResourceAccess::enumInstanceNames(
   const CmpiContext& ctx, const CmpiBroker &mbp, const char *nsp,
   Linux_SambaGuestAccountForGlobalInstanceNameEnumeration& instnames)
  {
    Linux_SambaGlobalOptionsInstanceName globalInstName;
    globalInstName.setNamespace(nsp);
    globalInstName.setName(DEFAULT_GLOBAL_NAME);
    globalInstName.setInstanceID(DEFAULT_INSTANCE_ID);
    
    
    char* user = get_global_option("guest account");
    
    if(user && validUser(user)){
      Linux_SambaGuestAccountForGlobalInstanceName assocName;
      assocName.setNamespace(nsp);
      assocName.setGroupComponent(globalInstName);
      
      Linux_SambaUserInstanceName userInstName;
      userInstName.setNamespace(nsp);
      userInstName.setSambaUserName( user );
      
      assocName.setPartComponent(userInstName);
      
      instnames.addElement(assocName);
    }
  };
  
  void Linux_SambaGuestAccountForGlobalResourceAccess::enumInstances(
   const CmpiContext& ctx,
   const CmpiBroker &mbp,
   const char *nsp,
   const char* *properties,
   Linux_SambaGuestAccountForGlobalManualInstanceEnumeration& instances)
  {
    Linux_SambaGlobalOptionsInstanceName globalInstName;
    globalInstName.setNamespace(nsp);
    globalInstName.setName(DEFAULT_GLOBAL_NAME);
    globalInstName.setInstanceID(DEFAULT_INSTANCE_ID);
    
    char* user = get_global_option("guest account");
    
    if(user && validUser(user)){
      Linux_SambaGuestAccountForGlobalManualInstance manualInstance;
      
      Linux_SambaGuestAccountForGlobalInstanceName instName;
      instName.setNamespace(nsp);
      instName.setGroupComponent(globalInstName);
      
      Linux_SambaUserInstanceName userInstName;
      userInstName.setNamespace(nsp);
      userInstName.setSambaUserName( user );
      
      instName.setPartComponent(userInstName);
      
      manualInstance.setInstanceName(instName);
      instances.addElement(manualInstance);
    }
  };
  
  Linux_SambaGuestAccountForGlobalManualInstance 
   Linux_SambaGuestAccountForGlobalResourceAccess::getInstance(
   const CmpiContext& ctx,
   const CmpiBroker &mbp,
   const char* *properties,
   const Linux_SambaGuestAccountForGlobalInstanceName& instanceName)
  {
    Linux_SambaGuestAccountForGlobalManualInstance aManualInstance;
    aManualInstance.setInstanceName(instanceName);
    return aManualInstance;
  };

  	/*
    void Linux_SambaGuestAccountForGlobalResourceAccess::setInstance(
     const CmpiContext& ctx,
     const CmpiBroker &mbp,
     const char* *properties,
     const Linux_SambaGuestAccountForGlobalManualInstance&){};
  	*/

  bool Linux_SambaGuestAccountForGlobalResourceAccess::validUser(const char* user)
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
  	
  void Linux_SambaGuestAccountForGlobalResourceAccess::createInstance(
   const CmpiContext& ctx, const CmpiBroker &mbp,
   const Linux_SambaGuestAccountForGlobalManualInstance& newInstance)
  {
    char* user = get_option(newInstance.getInstanceName().getGroupComponent().getName(),"guest account");
    if(user && validUser(user))
      set_global_option("guest account",user);
  } 
  
  void Linux_SambaGuestAccountForGlobalResourceAccess::deleteInstance(
   const CmpiContext& ctx, const CmpiBroker &mbp,
   const Linux_SambaGuestAccountForGlobalInstanceName& instanceName)
  {
    set_global_option("guest account",NULL);
  }
  
    /* Association Interface */
    
  void Linux_SambaGuestAccountForGlobalResourceAccess::referencesPartComponent( 
   const CmpiContext& ctx,  
   const CmpiBroker &mbp,
   const char *nsp,
   const char** properties,
   const Linux_SambaGlobalOptionsInstanceName& sourceInst,
   Linux_SambaGuestAccountForGlobalManualInstanceEnumeration& instEnum)
  {
    char* user = get_option(sourceInst.getName(),"guest account");
    if(user && validUser(user)){
      Linux_SambaGuestAccountForGlobalManualInstance manualInstance;
      
      Linux_SambaGuestAccountForGlobalInstanceName instName;
      instName.setNamespace(nsp);
      instName.setGroupComponent(sourceInst);
      
      Linux_SambaUserInstanceName userInstName;
      userInstName.setNamespace(nsp);
      userInstName.setSambaUserName( user );
      
      instName.setPartComponent(userInstName);
      
      manualInstance.setInstanceName(instName);
      instEnum.addElement(manualInstance);
    }
  };
  
  void Linux_SambaGuestAccountForGlobalResourceAccess::referencesGroupComponent( 
   const CmpiContext& ctx,  
   const CmpiBroker &mbp,
   const char *nsp,
   const char** properties,
   const Linux_SambaUserInstanceName& sourceInst,
   Linux_SambaGuestAccountForGlobalManualInstanceEnumeration& instEnum)
  {
    if(validUser(sourceInst.getSambaUserName())){
      char * user = get_global_option("guest account");
      if(!strcmp(user,sourceInst.getSambaUserName())){
	Linux_SambaGuestAccountForGlobalManualInstance manualInstance;
	
	Linux_SambaGuestAccountForGlobalInstanceName instName;
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
  };
  
  void Linux_SambaGuestAccountForGlobalResourceAccess::associatorsPartComponent( 
   const CmpiContext& ctx,  
   const CmpiBroker &mbp,
   const char *nsp,
   const char** properties,
   const Linux_SambaGlobalOptionsInstanceName& sourceInst,
   Linux_SambaUserInstanceEnumeration& instEnum)
  { 
    char* user = get_option(sourceInst.getName(),"guest account");
    if(user && validUser(user)){
      Linux_SambaUserInstance instance;
      
      Linux_SambaUserInstanceName userInstName;
      userInstName.setNamespace(nsp);
      userInstName.setSambaUserName( user );
      
      instance.setInstanceName(userInstName);
      char* option;
      
      option = get_user_unix_name( user );
      if ( option )
	instance.setSystemUserName( option );
      
      instEnum.addElement(instance);
    }
  };
    
  void Linux_SambaGuestAccountForGlobalResourceAccess::associatorsGroupComponent( 
   const CmpiContext& ctx,  
   const CmpiBroker &mbp,
   const char *nsp,
   const char** properties,
   const Linux_SambaUserInstanceName& sourceInst,
   Linux_SambaGlobalOptionsInstanceEnumeration& instEnum)
  {
    if(validUser(sourceInst.getSambaUserName())){
      char * user = get_global_option("guest account");
      if(!strcmp(user,sourceInst.getSambaUserName())){
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
  };
  

    /* extrinsic methods */
	
}


