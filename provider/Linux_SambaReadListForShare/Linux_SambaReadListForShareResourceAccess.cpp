// =======================================================================
// Linux_SambaReadListForShareResourceAccess.cpp
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
#include "Linux_SambaReadListForShareResourceAccess.h"

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
  //Linux_SambaReadListForShareResourceAccess::Linux_SambaReadListForShareResourceAccess();

  //----------------------------------------------------------------------------
  Linux_SambaReadListForShareResourceAccess::~Linux_SambaReadListForShareResourceAccess() {
    terminator();
  }
    
  // intrinsic methods

  //----------------------------------------------------------------------------
  void
  Linux_SambaReadListForShareResourceAccess::enumInstanceNames(
     const CmpiContext& aContext,
     const CmpiBroker& aBroker,
     const char* aNameSpaceP,
     Linux_SambaReadListForShareInstanceNameEnumeration& anInstanceNameEnumeration) {
      
    char ** shares = get_shares_list();
    if(shares){
      for (int i=0; shares[i]; i++){
	
	Linux_SambaShareOptionsInstanceName shareInstName;
	shareInstName.setNamespace(aNameSpaceP);
	shareInstName.setName(shares[i]);
	shareInstName.setInstanceID(DEFAULT_INSTANCE_ID);
	
	char* user_list = get_option(shares[i],"read list");
	
	if(user_list){
	  SambaArray array = SambaArray(user_list);
	  SambaArrayConstIterator iter;
	  
	  for ( iter = array.begin(); iter != array.end(); ++iter) {
	    if(validUser((*iter).c_str())){
	      Linux_SambaReadListForShareInstanceName assocName;
	      assocName.setNamespace(aNameSpaceP);
	      assocName.setGroupComponent(shareInstName);
	      
	      Linux_SambaUserInstanceName userInstName;
	      userInstName.setNamespace(aNameSpaceP);
	      userInstName.setSambaUserName( (*iter).c_str() );
	      
	      assocName.setPartComponent(userInstName);
	      
	      anInstanceNameEnumeration.addElement(assocName);
	    }
	  }
	}
      }
    }
  }

  
  //----------------------------------------------------------------------------

  void
  Linux_SambaReadListForShareResourceAccess::enumInstances(
    const CmpiContext& aContext,
    const CmpiBroker& aBroker,
    const char* aNameSpaceP,
    const char** aPropertiesPP,
    Linux_SambaReadListForShareManualInstanceEnumeration& aManualInstanceEnumeration) {
    
    char ** shares = get_shares_list();
    if(shares){
      for (int i=0; shares[i]; i++){
	
	Linux_SambaShareOptionsInstanceName shareInstName;
	shareInstName.setNamespace(aNameSpaceP);
	shareInstName.setName(shares[i]);
	shareInstName.setInstanceID(DEFAULT_INSTANCE_ID);
	
	char* user_list = get_option(shares[i],"read list");
	
	if(user_list){
	  SambaArray array = SambaArray(user_list);
	  SambaArrayConstIterator iter;
	  
	  for ( iter = array.begin(); iter != array.end(); ++iter) {
	    if(validUser((*iter).c_str())){
	      Linux_SambaReadListForShareManualInstance manualInstance;
	      
	      Linux_SambaReadListForShareInstanceName instName;
	      instName.setNamespace(aNameSpaceP);
	      instName.setGroupComponent(shareInstName);
	      
	      Linux_SambaUserInstanceName userInstName;
	      userInstName.setNamespace(aNameSpaceP);
	      userInstName.setSambaUserName( (*iter).c_str() );
	      
	      instName.setPartComponent(userInstName);
	      
	      manualInstance.setInstanceName(instName);
	      aManualInstanceEnumeration.addElement(manualInstance);
	    }
	  }
	}
      }      
    }
  }
  
  
  //----------------------------------------------------------------------------

  Linux_SambaReadListForShareManualInstance 
  Linux_SambaReadListForShareResourceAccess::getInstance(
    const CmpiContext& aContext,
    const CmpiBroker& aBroker,
    const char** aPropertiesPP,
    const Linux_SambaReadListForShareInstanceName& anInstanceName) {

    Linux_SambaReadListForShareManualInstance aManualInstance;
    aManualInstance.setInstanceName(anInstanceName);
    
    return aManualInstance;
  }

  //----------------------------------------------------------------------------
  /*
  void
  Linux_SambaReadListForShareResourceAccess::setInstance(
     const CmpiContext& aContext,
     const CmpiBroker& aBroker,
     const char** aPropertiesPP,
     const Linux_SambaReadListForShareManualInstance& aManualInstance) { }
  */
  
  //----------------------------------------------------------------------------

  Linux_SambaReadListForShareInstanceName
  Linux_SambaReadListForShareResourceAccess::createInstance(
    const CmpiContext& aContext,
    const CmpiBroker& aBroker,
    const Linux_SambaReadListForShareManualInstance& aManualInstance) {
    
    SambaArray array = SambaArray();
    char* user_list = get_option(aManualInstance.getInstanceName().getGroupComponent().getName(),"read list");
    
    if(user_list)
      array.populate(user_list);
    
    if(!validUser(aManualInstance.getInstanceName().getPartComponent().getSambaUserName())){
      throw CmpiStatus(CMPI_RC_ERR_INVALID_PARAMETER,"Invalid User!");
      
    }else{
      if(!array.isPresent(string( aManualInstance.getInstanceName().getPartComponent().getSambaUserName() ))){	
	array.add( string( aManualInstance.getInstanceName().getPartComponent().getSambaUserName() ) );
	
	set_share_option(aManualInstance.getInstanceName().getGroupComponent().getName(),"read list",array.toString().c_str());
      }
    }
    
    return aManualInstance.getInstanceName();
  }

  
  //----------------------------------------------------------------------------

  void
  Linux_SambaReadListForShareResourceAccess::deleteInstance(
    const CmpiContext& aContext,
    const CmpiBroker& aBroker,
    const Linux_SambaReadListForShareInstanceName& anInstanceName) {
    
    SambaArray array = SambaArray();
    char* user_list = get_option(anInstanceName.getGroupComponent().getName(),"read list");
    
    if(user_list)
      array.populate(user_list);
    
    if(array.size() > 1){
      array.remove( string( anInstanceName.getPartComponent().getSambaUserName() ));
      set_share_option(anInstanceName.getGroupComponent().getName(),"read list",array.toString().c_str());
      
    } else
      set_share_option(anInstanceName.getGroupComponent().getName(),"read list",NULL);
  }

	

  // Association Interface
  //----------------------------------------------------------------------------

  void Linux_SambaReadListForShareResourceAccess::referencesPartComponent( 
    const CmpiContext& aContext,  
    const CmpiBroker& aBroker,
    const char* aNameSpaceP,
    const char** aPropertiesPP,
    const Linux_SambaShareOptionsInstanceName& aSourceInstanceName,
    Linux_SambaReadListForShareManualInstanceEnumeration& aManualInstanceEnumeration) {
    
    char* user_list = get_option(aSourceInstanceName.getName(),"read list");
    
    if(user_list){
      SambaArray array = SambaArray(user_list);
      SambaArrayConstIterator iter;
      
      for ( iter = array.begin(); iter != array.end(); ++iter) {
	if(validUser((*iter).c_str())){
	  Linux_SambaReadListForShareManualInstance manualInstance;
	  
	  Linux_SambaReadListForShareInstanceName instName;
	  instName.setNamespace(aNameSpaceP);
	  instName.setGroupComponent(aSourceInstanceName);
	  
	  Linux_SambaUserInstanceName userInstName;
	  userInstName.setNamespace(aNameSpaceP);
	  userInstName.setSambaUserName( (*iter).c_str() );
	  
	  instName.setPartComponent(userInstName);
	  
	  manualInstance.setInstanceName(instName);
	  aManualInstanceEnumeration.addElement(manualInstance);
	}
      }
    }
  }

  
  //----------------------------------------------------------------------------

  void Linux_SambaReadListForShareResourceAccess::referencesGroupComponent( 
    const CmpiContext& aContext,  
    const CmpiBroker& aBroker,
    const char* aNameSpaceP,
    const char** aPropertiesPP,
    const Linux_SambaUserInstanceName& aSourceInstanceName,
    Linux_SambaReadListForShareManualInstanceEnumeration& aManualInstanceEnumeration) {
    
    if(validUser(aSourceInstanceName.getSambaUserName())){
      char ** shares = get_shares_list();
      if(shares){
	for (int i=0; shares[i]; i++){
	  char * user_list = get_option(shares[i],"read list");
	  if(user_list){
	    SambaArray array = SambaArray(user_list);
	    SambaArrayConstIterator iter;
	    
	    if(array.isPresent( string( aSourceInstanceName.getSambaUserName()))){
	      Linux_SambaReadListForShareManualInstance manualInstance;
	      
	      Linux_SambaReadListForShareInstanceName instName;
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
  }

  
  //----------------------------------------------------------------------------

  void Linux_SambaReadListForShareResourceAccess::associatorsPartComponent( 
    const CmpiContext& aContext,  
    const CmpiBroker& aBroker,
    const char* aNameSpaceP,
    const char** aPropertiesPP,
    const Linux_SambaShareOptionsInstanceName& aSourceInstanceName,
    Linux_SambaUserInstanceEnumeration& anInstanceEnumeration) {
    
    char* user_list = get_option(aSourceInstanceName.getName(),"read list");
    
    if(user_list){
      SambaArray array = SambaArray(user_list);
      SambaArrayConstIterator iter;
      
      for ( iter = array.begin(); iter != array.end(); ++iter) {
	if(validUser((*iter).c_str())){
	  Linux_SambaUserInstance instance;
	  
	  Linux_SambaUserInstanceName userInstName;
	  userInstName.setNamespace(aNameSpaceP);
	  userInstName.setSambaUserName( (*iter).c_str()  );
	  
	  instance.setInstanceName(userInstName);
	  char *option;
	  
	  option = get_user_unix_name( (*iter).c_str() );
	  if ( option )
	    instance.setSystemUserName( option );
	  
	  anInstanceEnumeration.addElement(instance);
	}
      }
    }
  }

  
  //----------------------------------------------------------------------------

  void Linux_SambaReadListForShareResourceAccess::associatorsGroupComponent( 
    const CmpiContext& aContext,  
    const CmpiBroker& aBroker,
    const char* aNameSpaceP,
    const char** aPropertiesPP,
    const Linux_SambaUserInstanceName& aSourceInstanceName,
    Linux_SambaShareOptionsInstanceEnumeration& anInstanceEnumeration) {
    
    if(validUser(aSourceInstanceName.getSambaUserName())){
      char ** shares = get_shares_list();
      if(shares){
	for (int i=0; shares[i]; i++){
	  char* user_list = get_option(shares[i],"read list");
	  if(user_list){
	    SambaArray array = SambaArray(user_list);
	    if(array.isPresent( string( aSourceInstanceName.getSambaUserName()))) {
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
  }

   
  
  // extrinsic methods

	
}


