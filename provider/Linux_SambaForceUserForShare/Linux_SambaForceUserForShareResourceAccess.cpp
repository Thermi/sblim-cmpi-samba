// =======================================================================
// Linux_SambaForceUserForShareResourceAccess.cpp
//     created on Fri, 24 Feb 2006 using ECUTE
// 
// Copyright (c) 2006, International Business Machines
//
// THIS FILE IS PROVIDED UNDER THE TERMS OF THE COMMON PUBLIC LICENSE
// ("AGREEMENT"). ANY USE, REPRODUCTION OR DISTRIBUTION OF THIS FILE 
// CONSTITUTES RECIPIENTS ACCEPTANCE OF THE AGREEMENT.
//
// You can obtain a current copy of the Common Public License from
// http://oss.software.ibm.com/developerworks/opensource/license-cpl.html
//
// Author:        generated
//
// Contributors:
//                Rodrigo Ceron    <rceron@br.ibm.com>
//                Wolfgang Taphorn <taphorn@de.ibm.com>
//
// =======================================================================
//
// 
#include "Linux_SambaForceUserForShareResourceAccess.h"

#include <string>
#include <list>

#include "smt_smb_ra_support.h"
#include "smt_smb_defaultvalues.h"
#include "smt_smb_array.h"

namespace genProvider {

  //----------------------------------------------------------------------------
  // manual written methods
  
  static bool validUser(const char* user) {
    char ** users = get_samba_users_list();
    if(users){
      for (int i=0; users[i]; i++){
	if(!strcmp(users[i],user))
	  return true;
      }
    }
    return false;
  };
  
  //----------------------------------------------------------------------------


  //----------------------------------------------------------------------------
  //Linux_SambaForceUserForShareResourceAccess::Linux_SambaForceUserForShareResourceAccess();

  //----------------------------------------------------------------------------
  Linux_SambaForceUserForShareResourceAccess::~Linux_SambaForceUserForShareResourceAccess() {
    terminator();
  }
    
  // intrinsic methods

  //----------------------------------------------------------------------------
  void
  Linux_SambaForceUserForShareResourceAccess::enumInstanceNames(
     const CmpiContext& aContext,
     const CmpiBroker& aBroker,
     const char* aNameSpaceP,
     Linux_SambaForceUserForShareInstanceNameEnumeration& anInstanceNameEnumeration) {
      
    char ** shares = get_shares_list();
    
    if(shares){
      for (int i=0; shares[i]; i++){
	
	Linux_SambaShareOptionsInstanceName shareInstName;
	shareInstName.setNamespace(aNameSpaceP);
	shareInstName.setName(shares[i]);
	shareInstName.setInstanceID(DEFAULT_INSTANCE_ID);
	
	char* user = get_option(shares[i],"force user");
	
	if(user && validUser(user)){
	  Linux_SambaForceUserForShareInstanceName assocName;
	  assocName.setNamespace(aNameSpaceP);
	  assocName.setGroupComponent(shareInstName);
	  
	  Linux_SambaUserInstanceName userInstName;
	  userInstName.setNamespace(aNameSpaceP);
	  userInstName.setSambaUserName( user );
	  
	  assocName.setPartComponent(userInstName);
	  
	  anInstanceNameEnumeration.addElement(assocName);
	}
      }
    }
  }
  
  
  //----------------------------------------------------------------------------

  void
  Linux_SambaForceUserForShareResourceAccess::enumInstances(
    const CmpiContext& aContext,
    const CmpiBroker& aBroker,
    const char* aNameSpaceP,
    const char** aPropertiesPP,
    Linux_SambaForceUserForShareManualInstanceEnumeration& aManualInstanceEnumeration) {
    
    char ** shares = get_shares_list();
    if(shares){
      for (int i=0; shares[i]; i++){
	
	Linux_SambaShareOptionsInstanceName shareInstName;
	shareInstName.setNamespace(aNameSpaceP);
	shareInstName.setName(shares[i]);
	shareInstName.setInstanceID(DEFAULT_INSTANCE_ID);
	
	char* user = get_option(shares[i],"force user");
	
	if(user && validUser( user )){
	  Linux_SambaForceUserForShareManualInstance manualInstance;
	  
	  Linux_SambaForceUserForShareInstanceName instName;
	  instName.setNamespace(aNameSpaceP);
	  instName.setGroupComponent(shareInstName);
	  
	  Linux_SambaUserInstanceName userInstName;
	  userInstName.setNamespace(aNameSpaceP);
	  userInstName.setSambaUserName( user );
	  
	  instName.setPartComponent(userInstName);
	  
	  manualInstance.setInstanceName(instName);
	  aManualInstanceEnumeration.addElement(manualInstance);
	}
      }
    }
  }

  
  //----------------------------------------------------------------------------

  Linux_SambaForceUserForShareManualInstance 
  Linux_SambaForceUserForShareResourceAccess::getInstance(
    const CmpiContext& aContext,
    const CmpiBroker& aBroker,
    const char** aPropertiesPP,
    const Linux_SambaForceUserForShareInstanceName& anInstanceName) {

    Linux_SambaForceUserForShareManualInstance aManualInstance;
    aManualInstance.setInstanceName(anInstanceName);
    
    return aManualInstance;
  }

  //----------------------------------------------------------------------------
  /*
  void
  Linux_SambaForceUserForShareResourceAccess::setInstance(
     const CmpiContext& aContext,
     const CmpiBroker& aBroker,
     const char** aPropertiesPP,
     const Linux_SambaForceUserForShareManualInstance& aManualInstance) { }
  */
  
  //----------------------------------------------------------------------------

  Linux_SambaForceUserForShareInstanceName
  Linux_SambaForceUserForShareResourceAccess::createInstance(
    const CmpiContext& aContext,
    const CmpiBroker& aBroker,
    const Linux_SambaForceUserForShareManualInstance& aManualInstance) {
    
    char* user = get_option(aManualInstance.getInstanceName().getGroupComponent().getName(),"force user");
    if(user && validUser(user))
      set_share_option(aManualInstance.getInstanceName().getGroupComponent().getName(),"force user",user);
    
    return aManualInstance.getInstanceName();
  }

  
  //----------------------------------------------------------------------------

  void
  Linux_SambaForceUserForShareResourceAccess::deleteInstance(
    const CmpiContext& aContext,
    const CmpiBroker& aBroker,
    const Linux_SambaForceUserForShareInstanceName& anInstanceName) {
    
    set_share_option(anInstanceName.getGroupComponent().getName(),"force user",NULL);
  }

	

  // Association Interface
  //----------------------------------------------------------------------------

  void Linux_SambaForceUserForShareResourceAccess::referencesPartComponent( 
    const CmpiContext& aContext,  
    const CmpiBroker& aBroker,
    const char* aNameSpaceP,
    const char** aPropertiesPP,
    const Linux_SambaShareOptionsInstanceName& aSourceInstanceName,
    Linux_SambaForceUserForShareManualInstanceEnumeration& aManualInstanceEnumeration) {
    
    char* user = get_option(aSourceInstanceName.getName(),"force user");
    
    if(user && validUser(user)){
      Linux_SambaForceUserForShareManualInstance manualInstance;
      
      Linux_SambaForceUserForShareInstanceName instName;
      instName.setNamespace(aNameSpaceP);
      instName.setGroupComponent(aSourceInstanceName);
      
      Linux_SambaUserInstanceName userInstName;
      userInstName.setNamespace(aNameSpaceP);
      userInstName.setSambaUserName( user );
      
      instName.setPartComponent(userInstName);
      
      manualInstance.setInstanceName(instName);
      aManualInstanceEnumeration.addElement(manualInstance);
    }
  }
  
  
  //----------------------------------------------------------------------------

  void Linux_SambaForceUserForShareResourceAccess::referencesGroupComponent( 
    const CmpiContext& aContext,  
    const CmpiBroker& aBroker,
    const char* aNameSpaceP,
    const char** aPropertiesPP,
    const Linux_SambaUserInstanceName& aSourceInstanceName,
    Linux_SambaForceUserForShareManualInstanceEnumeration& aManualInstanceEnumeration) {
    
    char ** shares = get_shares_list();
    
    if(shares){
      for (int i=0; shares[i]; i++){
	char* user = get_option(shares[i],"force user");
	
	if(user && validUser(user)){
	  if(!strcmp(user,aSourceInstanceName.getSambaUserName())){
	    Linux_SambaForceUserForShareManualInstance manualInstance;
	    
	    Linux_SambaForceUserForShareInstanceName instName;
	    instName.setNamespace(aNameSpaceP);
	    instName.setPartComponent(aSourceInstanceName);
	    
	    
	    Linux_SambaShareOptionsInstanceName shareInstName;
	    shareInstName.setNamespace(aNameSpaceP);
	    shareInstName.setName(shares[i]);
	    shareInstName.setInstanceID(DEFAULT_INSTANCE_ID);
	    
	    instName.setGroupComponent(shareInstName);
	    
	    manualInstance.setInstanceName(instName);
	    aManualInstanceEnumeration.addElement(manualInstance);
	  }
	}
      }
    }
  }
  
  
  //----------------------------------------------------------------------------

  void Linux_SambaForceUserForShareResourceAccess::associatorsPartComponent( 
    const CmpiContext& aContext,  
    const CmpiBroker& aBroker,
    const char* aNameSpaceP,
    const char** aPropertiesPP,
    const Linux_SambaShareOptionsInstanceName& aSourceInstanceName,
    Linux_SambaUserInstanceEnumeration& anInstanceEnumeration) {
    
    char* user = get_option(aSourceInstanceName.getName(),"force user");
    
    if(user && validUser(user)){
      Linux_SambaUserInstance instance;
      
      Linux_SambaUserInstanceName userInstName;
      userInstName.setNamespace(aNameSpaceP);
      userInstName.setSambaUserName( user );
      
      instance.setInstanceName(userInstName);
      char* option;
      
      option = get_user_unix_name( user );
      if ( option )
	instance.setSystemUserName( option );
      
      anInstanceEnumeration.addElement(instance);
    }
  }

  
  //----------------------------------------------------------------------------

  void Linux_SambaForceUserForShareResourceAccess::associatorsGroupComponent( 
    const CmpiContext& aContext,  
    const CmpiBroker& aBroker,
    const char* aNameSpaceP,
    const char** aPropertiesPP,
    const Linux_SambaUserInstanceName& aSourceInstanceName,
    Linux_SambaShareOptionsInstanceEnumeration& anInstanceEnumeration) {
    
    char ** shares = get_shares_list();
    
    if(shares){
      for (int i=0; shares[i]; i++){
	char* user = get_option(shares[i],"force user");
	if(user && validUser(user)){
	  if(!strcmp(user,aSourceInstanceName.getSambaUserName())) {
	    Linux_SambaShareOptionsInstance instance;
	    
	    Linux_SambaShareOptionsInstanceName shareInstName;
	    shareInstName.setNamespace(aNameSpaceP);
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
	    
	    
	    anInstanceEnumeration.addElement(instance);
	  }
	}
      }
    }
  }
  
   
  
  // extrinsic methods

	
}


