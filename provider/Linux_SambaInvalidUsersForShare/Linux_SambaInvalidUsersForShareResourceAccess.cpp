/**
 *  Linux_SambaInvalidUsersForShareResourceAccess.cpp
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


#include "Linux_SambaInvalidUsersForShareResourceAccess.h"

namespace genProvider {
  
  //Linux_SambaInvalidUsersForShareResourceAccess::Linux_SambaInvalidUsersForShareResourceAccess();
  Linux_SambaInvalidUsersForShareResourceAccess::~Linux_SambaInvalidUsersForShareResourceAccess() { 
    terminator();
  };
    
    /* intrinsic methods */
  void Linux_SambaInvalidUsersForShareResourceAccess::enumInstanceNames(
   const CmpiContext& ctx, const CmpiBroker &mbp, const char *nsp,
   Linux_SambaInvalidUsersForShareInstanceNameEnumeration& instnames)
  {
    char ** shares = get_shares_list();
    if(shares){
      for (int i=0; shares[i]; i++){
	
	Linux_SambaShareOptionsInstanceName shareInstName;
	shareInstName.setNamespace(nsp);
	shareInstName.setName(shares[i]);
	shareInstName.setInstanceID(DEFAULT_INSTANCE_ID);
	
	
	char* user_list = get_option(shares[i],"invalid users");
	
	if(user_list){
	  SambaArray array = SambaArray(user_list);
	  SambaArrayConstIterator iter;
	  
	  for ( iter = array.begin(); iter != array.end(); ++iter)
	    {
	      if(validUser((*iter).c_str())){
		Linux_SambaInvalidUsersForShareInstanceName assocName;
		assocName.setNamespace(nsp);
		assocName.setGroupComponent(shareInstName);
		
		Linux_SambaUserInstanceName userInstName;
		userInstName.setNamespace(nsp);
		userInstName.setSambaUserName( (*iter).c_str() );
		
		assocName.setPartComponent(userInstName);
		
		instnames.addElement(assocName);
	      }
	    }
	}
      }
    }
  };
  
  void Linux_SambaInvalidUsersForShareResourceAccess::enumInstances(
   const CmpiContext& ctx,
   const CmpiBroker &mbp,
   const char *nsp,
   const char* *properties,
   Linux_SambaInvalidUsersForShareManualInstanceEnumeration& instances)
  {
    char ** shares = get_shares_list();
    if(shares){
      for (int i=0; shares[i]; i++){
	
	Linux_SambaShareOptionsInstanceName shareInstName;
	shareInstName.setNamespace(nsp);
	shareInstName.setName(shares[i]);
	shareInstName.setInstanceID(DEFAULT_INSTANCE_ID);

	char* user_list = get_option(shares[i],"invalid users");
	
	if(user_list){
	  SambaArray array = SambaArray(user_list);
	  SambaArrayConstIterator iter;
	  
	  for ( iter = array.begin(); iter != array.end(); ++iter)
	    {
	      if(validUser((*iter).c_str())){
		Linux_SambaInvalidUsersForShareManualInstance manualInstance;
		
		Linux_SambaInvalidUsersForShareInstanceName instName;
		instName.setNamespace(nsp);
		instName.setGroupComponent(shareInstName);
		
		Linux_SambaUserInstanceName userInstName;
		userInstName.setNamespace(nsp);
		userInstName.setSambaUserName( (*iter).c_str() );
		
		instName.setPartComponent(userInstName);
		
		manualInstance.setInstanceName(instName);
		instances.addElement(manualInstance);
	      }
	    }
	}
	
      }      
    }
  };
  	
  Linux_SambaInvalidUsersForShareManualInstance 
   Linux_SambaInvalidUsersForShareResourceAccess::getInstance(
   const CmpiContext& ctx,
   const CmpiBroker &mbp,
   const char* *properties,
   const Linux_SambaInvalidUsersForShareInstanceName& instanceName)
  {
    Linux_SambaInvalidUsersForShareManualInstance aManualInstance;
    aManualInstance.setInstanceName(instanceName);
    return aManualInstance;
  };

  	/*
    void Linux_SambaInvalidUsersForShareResourceAccess::setInstance(
     const CmpiContext& ctx,
     const CmpiBroker &mbp,
     const char* *properties,
     const Linux_SambaInvalidUsersForShareManualInstance&){};
  	*/
  
  bool Linux_SambaInvalidUsersForShareResourceAccess::validUser(const char* user)
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
	
  void Linux_SambaInvalidUsersForShareResourceAccess::createInstance(
   const CmpiContext& ctx, const CmpiBroker &mbp,
   const Linux_SambaInvalidUsersForShareManualInstance& newInstance)
  {
    SambaArray array = SambaArray();
    char* user_list = get_option(newInstance.getInstanceName().getGroupComponent().getName(),"invalid users");
    if(user_list)
      array.populate(user_list);
    if(!validUser(newInstance.getInstanceName().getPartComponent().getSambaUserName())){
      throw CmpiStatus(CMPI_RC_ERR_INVALID_PARAMETER,"Invalid User!");
    }else{
      if(!array.isPresent(string( newInstance.getInstanceName().getPartComponent().getSambaUserName() ))) {
	array.add( string( newInstance.getInstanceName().getPartComponent().getSambaUserName() ) );
	
	set_share_option(newInstance.getInstanceName().getGroupComponent().getName(),"invalid users",array.toString().c_str());
      } 
    } 
  };
  
  void Linux_SambaInvalidUsersForShareResourceAccess::deleteInstance(
   const CmpiContext& ctx, const CmpiBroker &mbp,
   const Linux_SambaInvalidUsersForShareInstanceName& instanceName)
  {
    SambaArray array = SambaArray();
    char* user_list = get_option(instanceName.getGroupComponent().getName(),"invalid users");
    if(user_list)
      array.populate(user_list);

    if(array.size() > 1){
      array.remove( string( instanceName.getPartComponent().getSambaUserName() )); 
      set_share_option(instanceName.getGroupComponent().getName(),"invalid users",array.toString().c_str());
    }
    else
      set_share_option(instanceName.getGroupComponent().getName(),"invalid users",NULL);
  }
  
    /* Association Interface */
    
  void Linux_SambaInvalidUsersForShareResourceAccess::referencesPartComponent( 
   const CmpiContext& ctx,  
   const CmpiBroker &mbp,
   const char *nsp,
   const char** properties,
   const Linux_SambaShareOptionsInstanceName& sourceInst,
   Linux_SambaInvalidUsersForShareManualInstanceEnumeration& instEnum)
  {
    char* user_list = get_option(sourceInst.getName(),"invalid users");
    
    if(user_list){
      SambaArray array = SambaArray(user_list);
      
      SambaArrayConstIterator iter;
      
      for ( iter = array.begin(); iter != array.end(); ++iter)
	{
	  if(validUser((*iter).c_str())){
	    Linux_SambaInvalidUsersForShareManualInstance manualInstance;
	    
	    Linux_SambaInvalidUsersForShareInstanceName instName;
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
  
  void Linux_SambaInvalidUsersForShareResourceAccess::referencesGroupComponent( 
   const CmpiContext& ctx,  
   const CmpiBroker &mbp,
   const char *nsp,
   const char** properties,
   const Linux_SambaUserInstanceName& sourceInst,
   Linux_SambaInvalidUsersForShareManualInstanceEnumeration& instEnum)
  {
    if(validUser(sourceInst.getSambaUserName())){
      char ** shares = get_shares_list();
      if(shares){
	for (int i=0; shares[i]; i++){
	  char * user_list = get_option(shares[i],"invalid users");
	  if(user_list){
	    SambaArray array = SambaArray(user_list);
	    SambaArrayConstIterator iter;
	    
	    if(array.isPresent(sourceInst.getSambaUserName())){
	      Linux_SambaInvalidUsersForShareManualInstance manualInstance;
	      
	      Linux_SambaInvalidUsersForShareInstanceName instName;
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
    }
  };
  
  void Linux_SambaInvalidUsersForShareResourceAccess::associatorsPartComponent( 
   const CmpiContext& ctx,  
   const CmpiBroker &mbp,
   const char *nsp,
   const char** properties,
   const Linux_SambaShareOptionsInstanceName& sourceInst,
   Linux_SambaUserInstanceEnumeration& instEnum)
  { 
    char* user_list = get_option(sourceInst.getName(),"invalid users");
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
  
  void Linux_SambaInvalidUsersForShareResourceAccess::associatorsGroupComponent( 
   const CmpiContext& ctx,  
   const CmpiBroker &mbp,
   const char *nsp,
   const char** properties,
   const Linux_SambaUserInstanceName& sourceInst,
   Linux_SambaShareOptionsInstanceEnumeration& instEnum)
    {
      if(validUser(sourceInst.getSambaUserName())){
	char ** shares = get_shares_list();
	if(shares){
	  for (int i=0; shares[i]; i++){
	    char* user_list = get_option(shares[i],"invalid users");
	    if(user_list){
	      SambaArray array = SambaArray(user_list);
	      
	      if(array.isPresent( string( sourceInst.getSambaUserName())))
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
      }
    };
  
  
    /* extrinsic methods */
	
}


