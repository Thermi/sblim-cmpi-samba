/**
 *  Linux_SambaForceGroupForGlobalResourceAccess.cpp
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


#include "Linux_SambaForceGroupForGlobalResourceAccess.h"

namespace genProvider {
  
  //Linux_SambaForceGroupForGlobalResourceAccess::Linux_SambaForceGroupForGlobalResourceAccess();
  Linux_SambaForceGroupForGlobalResourceAccess::~Linux_SambaForceGroupForGlobalResourceAccess() { 
    terminator();
  };
    
  /* intrinsic methods */
  void Linux_SambaForceGroupForGlobalResourceAccess::enumInstanceNames(
   const CmpiContext& ctx, const CmpiBroker &mbp, const char *nsp,
   Linux_SambaForceGroupForGlobalInstanceNameEnumeration& instnames)
  {
    Linux_SambaGlobalOptionsInstanceName globalInstName;
    globalInstName.setNamespace(nsp);
    globalInstName.setName(DEFAULT_GLOBAL_NAME);
    globalInstName.setInstanceID(DEFAULT_INSTANCE_ID);
    
    
    char* group = get_global_option("force group");
    
    if(group && validGroup(group)){
      Linux_SambaForceGroupForGlobalInstanceName assocName;
      assocName.setNamespace(nsp);
      assocName.setGroupComponent(globalInstName);
      
      Linux_SambaGroupInstanceName groupInstName;
      groupInstName.setNamespace(nsp);
      groupInstName.setSambaGroupName( group );
      
      assocName.setPartComponent(groupInstName);
      
      instnames.addElement(assocName);
    }
  };
  
  void Linux_SambaForceGroupForGlobalResourceAccess::enumInstances(
   const CmpiContext& ctx,
   const CmpiBroker &mbp,
   const char *nsp,
   const char* *properties,
   Linux_SambaForceGroupForGlobalManualInstanceEnumeration& instances)
  {
    Linux_SambaGlobalOptionsInstanceName globalInstName;
    globalInstName.setNamespace(nsp);
    globalInstName.setName(DEFAULT_GLOBAL_NAME);
    globalInstName.setInstanceID(DEFAULT_INSTANCE_ID);
    
    char* group = get_global_option("force group");
    
    if(group && validGroup(group)){
      Linux_SambaForceGroupForGlobalManualInstance manualInstance;
      
      Linux_SambaForceGroupForGlobalInstanceName instName;
      instName.setNamespace(nsp);
      instName.setGroupComponent(globalInstName);
      
      Linux_SambaGroupInstanceName groupInstName;
      groupInstName.setNamespace(nsp);
      groupInstName.setSambaGroupName( group );
      
      instName.setPartComponent(groupInstName);
      
      manualInstance.setInstanceName(instName);
      instances.addElement(manualInstance);
    }
  };
  
  Linux_SambaForceGroupForGlobalManualInstance 
   Linux_SambaForceGroupForGlobalResourceAccess::getInstance(
   const CmpiContext& ctx,
   const CmpiBroker &mbp,
   const char* *properties,
   const Linux_SambaForceGroupForGlobalInstanceName& instanceName)
  {
    Linux_SambaForceGroupForGlobalManualInstance aManualInstance;
    aManualInstance.setInstanceName(instanceName);
    return aManualInstance;
  };
 
  	/*
    void Linux_SambaForceGroupForGlobalResourceAccess::setInstance(
     const CmpiContext& ctx,
     const CmpiBroker &mbp,
     const char* *properties,
     const Linux_SambaForceGroupForGlobalManualInstance&){};
  	*/
  bool Linux_SambaForceGroupForGlobalResourceAccess::validGroup(const char* group)
  {
    char ** groups = get_samba_groups_list();
    if(groups){
      for (int i=0; groups[i]; i++){
	if(!strcmp(groups[i],group))
	  return true;
      }
    }
    return false;
  };
	
  void Linux_SambaForceGroupForGlobalResourceAccess::createInstance(
   const CmpiContext& ctx, const CmpiBroker &mbp,
   const Linux_SambaForceGroupForGlobalManualInstance& newInstance)
  {
    char* group = get_option(newInstance.getInstanceName().getGroupComponent().getName(),"force group");
    if(group && validGroup(group))
      set_global_option("force group",group);
  } 
  
  void Linux_SambaForceGroupForGlobalResourceAccess::deleteInstance(
   const CmpiContext& ctx, const CmpiBroker &mbp,
   const Linux_SambaForceGroupForGlobalInstanceName& instanceName)
  {
    set_global_option("force group",NULL);
  }
  
    /* Association Interface */
    
  void Linux_SambaForceGroupForGlobalResourceAccess::referencesPartComponent( 
   const CmpiContext& ctx,  
   const CmpiBroker &mbp,
   const char *nsp,
   const char** properties,
   const Linux_SambaGlobalOptionsInstanceName& sourceInst,
   Linux_SambaForceGroupForGlobalManualInstanceEnumeration& instEnum)
  {
    char* group = get_option(sourceInst.getName(),"force group");
    if(group && validGroup(group)){
      Linux_SambaForceGroupForGlobalManualInstance manualInstance;
      
      Linux_SambaForceGroupForGlobalInstanceName instName;
      instName.setNamespace(nsp);
      instName.setGroupComponent(sourceInst);
      
      Linux_SambaGroupInstanceName groupInstName;
      groupInstName.setNamespace(nsp);
      groupInstName.setSambaGroupName( group );
    
      instName.setPartComponent(groupInstName);
      
      manualInstance.setInstanceName(instName);
      instEnum.addElement(manualInstance);
    }
  };
  
  void Linux_SambaForceGroupForGlobalResourceAccess::referencesGroupComponent( 
   const CmpiContext& ctx,  
   const CmpiBroker &mbp,
   const char *nsp,
   const char** properties,
   const Linux_SambaGroupInstanceName& sourceInst,
   Linux_SambaForceGroupForGlobalManualInstanceEnumeration& instEnum)
  {
    if(validGroup(sourceInst.getSambaGroupName())){
      char * group = get_global_option("force group");
      if(!strcmp(group,sourceInst.getSambaGroupName())){
	Linux_SambaForceGroupForGlobalManualInstance manualInstance;
	
	Linux_SambaForceGroupForGlobalInstanceName instName;
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
  
  void Linux_SambaForceGroupForGlobalResourceAccess::associatorsPartComponent( 
   const CmpiContext& ctx,  
   const CmpiBroker &mbp,
   const char *nsp,
   const char** properties,
   const Linux_SambaGlobalOptionsInstanceName& sourceInst,
   Linux_SambaGroupInstanceEnumeration& instEnum)
  { 
    char* group = get_option(sourceInst.getName(),"force group");
    if(group && validGroup(group)){
      Linux_SambaGroupInstance instance;
      
      Linux_SambaGroupInstanceName groupInstName;
      groupInstName.setNamespace(nsp);
      groupInstName.setSambaGroupName( group );
      
      instance.setInstanceName(groupInstName);
      char* option;
      
      option = get_unix_group_name( group );
      if ( option )
	instance.setSystemGroupName( option );
    
      instEnum.addElement(instance);
    }
  };
    
  void Linux_SambaForceGroupForGlobalResourceAccess::associatorsGroupComponent( 
   const CmpiContext& ctx,  
   const CmpiBroker &mbp,
   const char *nsp,
   const char** properties,
   const Linux_SambaGroupInstanceName& sourceInst,
   Linux_SambaGlobalOptionsInstanceEnumeration& instEnum)
  {
    if(validGroup(sourceInst.getSambaGroupName())){
      char * group = get_global_option("force group");
      if(!strcmp(group,sourceInst.getSambaGroupName())){
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


