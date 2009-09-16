// =======================================================================
// Linux_SambaForceUserForShareResourceAccess.cpp
//     created on Fri, 23 Jun 2006 using ECUTE 2.2.1
//
// Copyright (c) 2006, 2009, International Business Machines
//
// THIS FILE IS PROVIDED UNDER THE TERMS OF THE ECLIPSE PUBLIC LICENSE
// ("AGREEMENT"). ANY USE, REPRODUCTION OR DISTRIBUTION OF THIS FILE
// CONSTITUTES RECIPIENTS ACCEPTANCE OF THE AGREEMENT.
//
// You can obtain a current copy of the Eclipse Public License from
// http://www.opensource.org/licenses/eclipse-1.0.php
//
// Author:        generated
//
// Contributors:
//                Wolfgang Taphorn   <taphorn@de.ibm.com>
//                Mukunda Chowdaiah  <cmukunda@in.ibm.com>
//                Ashoka S Rao       <ashoka.rao@in.ibm.com>
//                Rodrigo Ceron      <rceron@br.ibm.com>
//
// =======================================================================
//
// 
#include "Linux_SambaForceUserForShareResourceAccess.h"

#include <errno.h>
#include <string>
#include <list>

#include "smt_smb_ra_support.h"
#include "smt_smb_defaultvalues.h"
#include "smt_smb_array.h"

extern int errno;

namespace genProvider {

  //----------------------------------------------------------------------------
  // manual written methods
  
  static bool validUser(const char* user) {
    char ** users = get_samba_users_list();
    if (!users && errno)
      throw CmpiStatus(CMPI_RC_ERR_FAILED, "Failed to retrieve Samba user list!");
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

    if(!service_exists(anInstanceName.getGroupComponent().getName()) ||
       strcasecmp(anInstanceName.getGroupComponent().getInstanceID(),DEFAULT_INSTANCE_ID)!=0) {
     throw CmpiStatus(CMPI_RC_ERR_NOT_FOUND,"The Instance does not exist. The specified share is unknown!");
    }

    if (!validUser(anInstanceName.getPartComponent().getSambaUserName())) {
      throw CmpiStatus(CMPI_RC_ERR_NOT_FOUND,"The Instance does not exist. The specified Samba user does not exist!");
    }

   SambaArray array = SambaArray();
   char * user_list = get_option(anInstanceName.getGroupComponent().getName(),"force user");

   if(!user_list) {
     throw CmpiStatus(CMPI_RC_ERR_NOT_FOUND,"The Instance does not exist. The specified Samba user does not have force user enabled for the specified share!");
   }

   array.populate(user_list);
   if(!array.isPresent(anInstanceName.getPartComponent().getSambaUserName())) {
     throw CmpiStatus(CMPI_RC_ERR_NOT_FOUND,"The Instance does not exist. The specified Samba user does not have force user enabled for the specified share!");
   }
    
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
   
    if(!service_exists(aManualInstance.getInstanceName().getGroupComponent().getName()) ||
       strcasecmp(aManualInstance.getInstanceName().getGroupComponent().getInstanceID(),DEFAULT_INSTANCE_ID)!=0)  {
      throw CmpiStatus(CMPI_RC_ERR_NOT_FOUND,"The Instance does not exist. The specified share is unknown!");
    }

    if(!validUser(aManualInstance.getInstanceName().getPartComponent().getSambaUserName())){
      throw CmpiStatus(CMPI_RC_ERR_INVALID_PARAMETER,"The specified Samba user does not exist!");
    }
 
    char* user = get_option(aManualInstance.getInstanceName().getGroupComponent().getName(),"force user");
    char* g_user = get_global_option("force user");

    if (!user || (g_user && strcasecmp(user,g_user)==0)) {
      set_share_option(aManualInstance.getInstanceName().getGroupComponent().getName(),"force user",aManualInstance.getInstanceName().getPartComponent().getSambaUserName());
    } else {
      throw CmpiStatus(CMPI_RC_ERR_ALREADY_EXISTS,"There is an existent instance already!");
    }
    
    return aManualInstance.getInstanceName();
  }

  
  //----------------------------------------------------------------------------

  void
  Linux_SambaForceUserForShareResourceAccess::deleteInstance(
    const CmpiContext& aContext,
    const CmpiBroker& aBroker,
    const Linux_SambaForceUserForShareInstanceName& anInstanceName) {

    if(!service_exists(anInstanceName.getGroupComponent().getName()) ||
       strcasecmp(anInstanceName.getGroupComponent().getInstanceID(),DEFAULT_INSTANCE_ID)!=0) {
     throw CmpiStatus(CMPI_RC_ERR_NOT_FOUND,"The Instance does not exist. The specified share is unknown!");
    }

    if (!validUser(anInstanceName.getPartComponent().getSambaUserName())) {
      throw CmpiStatus(CMPI_RC_ERR_NOT_FOUND,"The Instance does not exist. The specified Samba user does not exist!");
    }
    
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
    
    if(!service_exists(aSourceInstanceName.getName()) ||
       strcasecmp(aSourceInstanceName.getInstanceID(),DEFAULT_INSTANCE_ID)!=0) {
       throw CmpiStatus(CMPI_RC_ERR_INVALID_PARAMETER,"The Instance does not exist!");
    }     

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
    } else {
       throw CmpiStatus(CMPI_RC_ERR_INVALID_PARAMETER,"The Instance does note exist. The specified Samba user is unknown!");
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
    
    if(!service_exists(aSourceInstanceName.getName()) ||
       strcasecmp(aSourceInstanceName.getInstanceID(),DEFAULT_INSTANCE_ID)!=0) {
       throw CmpiStatus(CMPI_RC_ERR_INVALID_PARAMETER,"The Instance does not exist!");
    }

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
    } else {
       throw CmpiStatus(CMPI_RC_ERR_INVALID_PARAMETER,"The Instance does note exist. The specified Samba user is unknown!");
    }
  }
  
   
  
  // extrinsic methods

	
}


