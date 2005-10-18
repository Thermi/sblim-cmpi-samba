/**
 *  Linux_SambaForceUserForShareResourceAccess.cpp
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


#include "Linux_SambaForceUserForShareResourceAccess.h"

namespace genProvider {
  
  //Linux_SambaForceUserForShareResourceAccess::Linux_SambaForceUserForShareResourceAccess();
  Linux_SambaForceUserForShareResourceAccess::~Linux_SambaForceUserForShareResourceAccess() { 
    terminator();
  };
    
  /* intrinsic methods */
  void Linux_SambaForceUserForShareResourceAccess::enumInstanceNames(
   const CmpiContext& ctx, const CmpiBroker &mbp, const char *nsp,
   Linux_SambaForceUserForShareInstanceNameEnumeration& instnames)
  {
    char ** shares = get_shares_list();
    if(shares){
      for (int i=0; shares[i]; i++){
	
	Linux_SambaShareOptionsInstanceName shareInstName;
	shareInstName.setNamespace(nsp);
	shareInstName.setName(shares[i]);
	shareInstName.setInstanceID(DEFAULT_INSTANCE_ID);
	
	
	char* user = get_option(shares[i],"force user");
	
	if(user && validUser(user)){
	  Linux_SambaForceUserForShareInstanceName assocName;
	  assocName.setNamespace(nsp);
	  assocName.setGroupComponent(shareInstName);
	  
	  Linux_SambaUserInstanceName userInstName;
	  userInstName.setNamespace(nsp);
	  userInstName.setSambaUserName( user );
	  
	  assocName.setPartComponent(userInstName);
	  
	  instnames.addElement(assocName);
	}
      }
    }
  };
  
  void Linux_SambaForceUserForShareResourceAccess::enumInstances(
   const CmpiContext& ctx,
   const CmpiBroker &mbp,
   const char *nsp,
   const char* *properties,
   Linux_SambaForceUserForShareManualInstanceEnumeration& instances)
  {
    char ** shares = get_shares_list();
    if(shares){
      for (int i=0; shares[i]; i++){
	
	Linux_SambaShareOptionsInstanceName shareInstName;
	shareInstName.setNamespace(nsp);
	shareInstName.setName(shares[i]);
	shareInstName.setInstanceID(DEFAULT_INSTANCE_ID);

	char* user = get_option(shares[i],"force user");
	
	if(user && validUser( user )){
	  Linux_SambaForceUserForShareManualInstance manualInstance;
	  
	  Linux_SambaForceUserForShareInstanceName instName;
	  instName.setNamespace(nsp);
	  instName.setGroupComponent(shareInstName);
	  
	  Linux_SambaUserInstanceName userInstName;
	  userInstName.setNamespace(nsp);
	  userInstName.setSambaUserName( user );
		
	  instName.setPartComponent(userInstName);
	  
	  manualInstance.setInstanceName(instName);
	  instances.addElement(manualInstance);
	}
	
      }      
    }
  };
  	
  Linux_SambaForceUserForShareManualInstance 
   Linux_SambaForceUserForShareResourceAccess::getInstance(
   const CmpiContext& ctx,
   const CmpiBroker &mbp,
   const char* *properties,
   const Linux_SambaForceUserForShareInstanceName& instanceName)
  {
    Linux_SambaForceUserForShareManualInstance aManualInstance;
    aManualInstance.setInstanceName(instanceName);
    return aManualInstance;
  };

  	/*
    void Linux_SambaForceUserForShareResourceAccess::setInstance(
     const CmpiContext& ctx,
     const CmpiBroker &mbp,
     const char* *properties,
     const Linux_SambaForceUserForShareManualInstance&){};
  	*/
  
  bool Linux_SambaForceUserForShareResourceAccess::validUser(const char* user)
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
	
  void Linux_SambaForceUserForShareResourceAccess::createInstance(
   const CmpiContext& ctx, const CmpiBroker &mbp,
   const Linux_SambaForceUserForShareManualInstance& newInstance)
  {
    char* user = get_option(newInstance.getInstanceName().getGroupComponent().getName(),"force user");
    if(user && validUser(user))
      set_share_option(newInstance.getInstanceName().getGroupComponent().getName(),"force user",user);
  } 
  
  void Linux_SambaForceUserForShareResourceAccess::deleteInstance(
   const CmpiContext& ctx, const CmpiBroker &mbp,
   const Linux_SambaForceUserForShareInstanceName& instanceName)
  {
    set_share_option(instanceName.getGroupComponent().getName(),"force user",NULL);
  }
  
    /* Association Interface */
    
  void Linux_SambaForceUserForShareResourceAccess::referencesPartComponent( 
   const CmpiContext& ctx,  
   const CmpiBroker &mbp,
   const char *nsp,
   const char** properties,
   const Linux_SambaShareOptionsInstanceName& sourceInst,
   Linux_SambaForceUserForShareManualInstanceEnumeration& instEnum)
  {
    char* user = get_option(sourceInst.getName(),"force user");
    if(user && validUser(user)){
      Linux_SambaForceUserForShareManualInstance manualInstance;
      
      Linux_SambaForceUserForShareInstanceName instName;
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
  
  void Linux_SambaForceUserForShareResourceAccess::referencesGroupComponent( 
   const CmpiContext& ctx,  
   const CmpiBroker &mbp,
   const char *nsp,
   const char** properties,
   const Linux_SambaUserInstanceName& sourceInst,
   Linux_SambaForceUserForShareManualInstanceEnumeration& instEnum)
  {
    char ** shares = get_shares_list();
    if(shares){
      for (int i=0; shares[i]; i++){
	char* user = get_option(shares[i],"force user");
	
	if(user && validUser(user)){
	  if(!strcmp(user,sourceInst.getSambaUserName())){
	    Linux_SambaForceUserForShareManualInstance manualInstance;
	    
	    Linux_SambaForceUserForShareInstanceName instName;
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
  
  void Linux_SambaForceUserForShareResourceAccess::associatorsPartComponent( 
   const CmpiContext& ctx,  
   const CmpiBroker &mbp,
   const char *nsp,
   const char** properties,
   const Linux_SambaShareOptionsInstanceName& sourceInst,
   Linux_SambaUserInstanceEnumeration& instEnum)
  { 
    char* user = get_option(sourceInst.getName(),"force user");
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
    
  void Linux_SambaForceUserForShareResourceAccess::associatorsGroupComponent( 
   const CmpiContext& ctx,  
   const CmpiBroker &mbp,
   const char *nsp,
   const char** properties,
   const Linux_SambaUserInstanceName& sourceInst,
   Linux_SambaShareOptionsInstanceEnumeration& instEnum)
  {
    char ** shares = get_shares_list();
    if(shares){
      for (int i=0; shares[i]; i++){
	char* user = get_option(shares[i],"force user");
	if(user && validUser(user)){
	  if(!strcmp(user,sourceInst.getSambaUserName()))
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


