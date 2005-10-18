/**
 *  Linux_SambaForceGroupForShareResourceAccess.cpp
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


#include "Linux_SambaForceGroupForShareResourceAccess.h"

namespace genProvider {
  
  //Linux_SambaForceGroupForShareResourceAccess::Linux_SambaForceGroupForShareResourceAccess();
  Linux_SambaForceGroupForShareResourceAccess::~Linux_SambaForceGroupForShareResourceAccess() { 
    terminator();
  };
    
    /* intrinsic methods */
  void Linux_SambaForceGroupForShareResourceAccess::enumInstanceNames(
   const CmpiContext& ctx, const CmpiBroker &mbp, const char *nsp,
   Linux_SambaForceGroupForShareInstanceNameEnumeration& instnames)
  {
    char ** shares = get_shares_list();
    if(shares){
      for (int i=0; shares[i]; i++){
	
	Linux_SambaShareOptionsInstanceName shareInstName;
	shareInstName.setNamespace(nsp);
	shareInstName.setName(shares[i]);
	shareInstName.setInstanceID(DEFAULT_INSTANCE_ID);
	
	
	char* group = get_option(shares[i],"force group");
	
	if(group && validGroup(group)){
	  Linux_SambaForceGroupForShareInstanceName assocName;
	  assocName.setNamespace(nsp);
	  assocName.setGroupComponent(shareInstName);
	  
	  Linux_SambaGroupInstanceName groupInstName;
	  groupInstName.setNamespace(nsp);
	  groupInstName.setSambaGroupName( group );
	  
	  assocName.setPartComponent(groupInstName);
	  
	  instnames.addElement(assocName);
	}
      }
    }
  };
  
  void Linux_SambaForceGroupForShareResourceAccess::enumInstances(
   const CmpiContext& ctx,
   const CmpiBroker &mbp,
   const char *nsp,
   const char* *properties,
   Linux_SambaForceGroupForShareManualInstanceEnumeration& instances)
  {
    char ** shares = get_shares_list();
    if(shares){
      for (int i=0; shares[i]; i++){
	
	Linux_SambaShareOptionsInstanceName shareInstName;
	shareInstName.setNamespace(nsp);
	shareInstName.setName(shares[i]);
	shareInstName.setInstanceID(DEFAULT_INSTANCE_ID);

	char* group = get_option(shares[i],"force group");
	
	if(group && validGroup( group )){
	  Linux_SambaForceGroupForShareManualInstance manualInstance;
	  
	  Linux_SambaForceGroupForShareInstanceName instName;
	  instName.setNamespace(nsp);
	  instName.setGroupComponent(shareInstName);
	  
	  Linux_SambaGroupInstanceName groupInstName;
	  groupInstName.setNamespace(nsp);
	  groupInstName.setSambaGroupName( group );
		
	  instName.setPartComponent(groupInstName);
	  
	  manualInstance.setInstanceName(instName);
	  instances.addElement(manualInstance);
	}
	
      }      
    }
  };
  	
  Linux_SambaForceGroupForShareManualInstance 
   Linux_SambaForceGroupForShareResourceAccess::getInstance(
   const CmpiContext& ctx,
   const CmpiBroker &mbp,
   const char* *properties,
   const Linux_SambaForceGroupForShareInstanceName& instanceName)
  {
    Linux_SambaForceGroupForShareManualInstance aManualInstance;
    aManualInstance.setInstanceName(instanceName);
    return aManualInstance;
  };
  	/*
    void Linux_SambaForceGroupForShareResourceAccess::setInstance(
     const CmpiContext& ctx,
     const CmpiBroker &mbp,
     const char* *properties,
     const Linux_SambaForceGroupForShareManualInstance&){};
  	*/
  
  bool Linux_SambaForceGroupForShareResourceAccess::validGroup(const char* group)
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
	
  void Linux_SambaForceGroupForShareResourceAccess::createInstance(
   const CmpiContext& ctx, const CmpiBroker &mbp,
   const Linux_SambaForceGroupForShareManualInstance& newInstance)
  {
    char* group = get_option(newInstance.getInstanceName().getGroupComponent().getName(),"force group");
    if(group && validGroup(group))
      set_share_option(newInstance.getInstanceName().getGroupComponent().getName(),"force group",group);
  } 
  
  void Linux_SambaForceGroupForShareResourceAccess::deleteInstance(
   const CmpiContext& ctx, const CmpiBroker &mbp,
   const Linux_SambaForceGroupForShareInstanceName& instanceName)
  {
    set_share_option(instanceName.getGroupComponent().getName(),"force group",NULL);
  }
  
    /* Association Interface */
    
  void Linux_SambaForceGroupForShareResourceAccess::referencesPartComponent( 
   const CmpiContext& ctx,  
   const CmpiBroker &mbp,
   const char *nsp,
   const char** properties,
   const Linux_SambaShareOptionsInstanceName& sourceInst,
   Linux_SambaForceGroupForShareManualInstanceEnumeration& instEnum)
  {
    char* group = get_option(sourceInst.getName(),"force group");
    if(group && validGroup(group)){
      Linux_SambaForceGroupForShareManualInstance manualInstance;
      
      Linux_SambaForceGroupForShareInstanceName instName;
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
  
  void Linux_SambaForceGroupForShareResourceAccess::referencesGroupComponent( 
   const CmpiContext& ctx,  
   const CmpiBroker &mbp,
   const char *nsp,
   const char** properties,
   const Linux_SambaGroupInstanceName& sourceInst,
   Linux_SambaForceGroupForShareManualInstanceEnumeration& instEnum)
  {
    char ** shares = get_shares_list();
      if(shares){
	for (int i=0; shares[i]; i++){
	  char* group = get_option(shares[i],"force group");
	  
	  if(group && validGroup(group)){
	    if(!strcmp(group,sourceInst.getSambaGroupName())){
	      Linux_SambaForceGroupForShareManualInstance manualInstance;
	      
	      Linux_SambaForceGroupForShareInstanceName instName;
	      instName.setNamespace(nsp);
	      instName.setPartComponent(sourceInst);
	      
	      
	      Linux_SambaShareOptionsInstanceName shareInstName;
	      shareInstName.setNamespace(nsp);
	      shareInstName.setName(shares[i]);
	      shareInstName.setInstanceID(DEFAULT_INSTANCE_ID);
	      
	      instName.setGroupComponent(shareInstName);
	      
	      manualInstance.setInstanceName(instName);
	      instEnum.addElement(manualInstance);
	    }
	}
      }
    }
  };
  
  void Linux_SambaForceGroupForShareResourceAccess::associatorsPartComponent( 
   const CmpiContext& ctx,  
   const CmpiBroker &mbp,
   const char *nsp,
   const char** properties,
   const Linux_SambaShareOptionsInstanceName& sourceInst,
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
    
  void Linux_SambaForceGroupForShareResourceAccess::associatorsGroupComponent( 
   const CmpiContext& ctx,  
   const CmpiBroker &mbp,
   const char *nsp,
   const char** properties,
   const Linux_SambaGroupInstanceName& sourceInst,
   Linux_SambaShareOptionsInstanceEnumeration& instEnum)
  {
    char ** shares = get_shares_list();
      if(shares){
	for (int i=0; shares[i]; i++){
	  char* group = get_option(shares[i],"force group");
	  if(group && validGroup(group)){
	    if(!strcmp(group,sourceInst.getSambaGroupName()))
	      {
		Linux_SambaShareOptionsInstance instance;
		
		Linux_SambaShareOptionsInstanceName shareInstName;
		shareInstName.setNamespace(nsp);
		shareInstName.setName(shares[i]);
		shareInstName.setInstanceID(DEFAULT_INSTANCE_ID);
		
		instance.setInstanceName(shareInstName);
		
		char *option;
		
		option = get_option(shares[i],"available");	
		if ( option )
		  if(strcasecmp(option,"yes") == 0)
		    instance.setAvailable( true );
		  else
		    instance.setAvailable( false );
		
		option = get_option(shares[i],"comment");
		if ( option )
		  instance.setComment(option);
		
		option = get_option(shares[i],"path");
		if ( option )
		  instance.setPath(option);
		
		option = get_option(shares[i],"printable");	
		if ( option )
		  if(strcasecmp(option,"yes") == 0)
		    instance.setPrintable( true );
		  else
		    instance.setPrintable( false );
		
		
		instEnum.addElement(instance);
	      }
	}
      }
    }
  };
  

    /* extrinsic methods */
	
}


