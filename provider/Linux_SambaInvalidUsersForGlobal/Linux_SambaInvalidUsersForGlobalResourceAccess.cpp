// =======================================================================
// Linux_SambaInvalidUsersForGlobalResourceAccess.cpp
//     created on Fri, 23 Jun 2006 using ECUTE 2.2.1
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
//                Wolfgang Taphorn   <taphorn@de.ibm.com>
//                Mukunda Chowdaiah  <cmukunda@in.ibm.com>
//                Ashoka S Rao       <ashoka.rao@in.ibm.com>
//                Rodrigo Ceron      <rceron@br.ibm.com>
//
// =======================================================================
//
// 
#include "Linux_SambaInvalidUsersForGlobalResourceAccess.h"

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
  //Linux_SambaInvalidUsersForGlobalResourceAccess::Linux_SambaInvalidUsersForGlobalResourceAccess();

  //----------------------------------------------------------------------------
  Linux_SambaInvalidUsersForGlobalResourceAccess::~Linux_SambaInvalidUsersForGlobalResourceAccess() {
    terminator();
  }
    
  // intrinsic methods

  //----------------------------------------------------------------------------
  void
  Linux_SambaInvalidUsersForGlobalResourceAccess::enumInstanceNames(
     const CmpiContext& aContext,
     const CmpiBroker& aBroker,
     const char* aNameSpaceP,
     Linux_SambaInvalidUsersForGlobalInstanceNameEnumeration& anInstanceNameEnumeration) {
      
        Linux_SambaGlobalOptionsInstanceName globalInstName;
    globalInstName.setNamespace(aNameSpaceP);
    globalInstName.setName(DEFAULT_GLOBAL_NAME);
    globalInstName.setInstanceID(DEFAULT_INSTANCE_ID);
    
    
    char* user_list = get_global_option("invalid users");
    
    if(user_list){
      SambaArray array = SambaArray(user_list);
      SambaArrayConstIterator iter;
      
      for ( iter = array.begin(); iter != array.end(); ++iter) {
	if(validUser((*iter).c_str())){
	  Linux_SambaInvalidUsersForGlobalInstanceName assocName;
	  assocName.setNamespace(aNameSpaceP);
	  assocName.setGroupComponent(globalInstName);
	  
	  Linux_SambaUserInstanceName userInstName;
	  userInstName.setNamespace(aNameSpaceP);
	  userInstName.setSambaUserName( (*iter).c_str() );
	  
	  assocName.setPartComponent(userInstName);
	  
	  anInstanceNameEnumeration.addElement(assocName);
	}
      }
    }
  }

  
  //----------------------------------------------------------------------------

  void
  Linux_SambaInvalidUsersForGlobalResourceAccess::enumInstances(
    const CmpiContext& aContext,
    const CmpiBroker& aBroker,
    const char* aNameSpaceP,
    const char** aPropertiesPP,
    Linux_SambaInvalidUsersForGlobalManualInstanceEnumeration& aManualInstanceEnumeration) {
    
        Linux_SambaGlobalOptionsInstanceName globalInstName;
    globalInstName.setNamespace(aNameSpaceP);
    globalInstName.setName(DEFAULT_GLOBAL_NAME);
    globalInstName.setInstanceID(DEFAULT_INSTANCE_ID);
    
    char* user_list = get_global_option("invalid users");
    
    if(user_list){
      SambaArray array = SambaArray(user_list);
      SambaArrayConstIterator iter;
      
      for ( iter = array.begin(); iter != array.end(); ++iter) {
	if(validUser((*iter).c_str())){
	  Linux_SambaInvalidUsersForGlobalManualInstance manualInstance;
	  
	  Linux_SambaInvalidUsersForGlobalInstanceName instName;
	  instName.setNamespace(aNameSpaceP);
	  instName.setGroupComponent(globalInstName);
	  
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

  Linux_SambaInvalidUsersForGlobalManualInstance 
  Linux_SambaInvalidUsersForGlobalResourceAccess::getInstance(
    const CmpiContext& aContext,
    const CmpiBroker& aBroker,
    const char** aPropertiesPP,
    const Linux_SambaInvalidUsersForGlobalInstanceName& anInstanceName) {

    Linux_SambaInvalidUsersForGlobalManualInstance aManualInstance;
    aManualInstance.setInstanceName(anInstanceName);

    if(strcasecmp(anInstanceName.getGroupComponent().getName(),DEFAULT_GLOBAL_NAME)!=0) {
      throw CmpiStatus(CMPI_RC_ERR_NOT_FOUND,"The Instance does not exist. The specified global options instance is unknown!");
    }
   
    if(!validUser(anInstanceName.getPartComponent().getSambaUserName())) { 
      throw CmpiStatus(CMPI_RC_ERR_NOT_FOUND,"The Instance does not exist. The specified Samba user does not exist!");
    }
   
    SambaArray array = SambaArray();
    char * user_list = get_option(anInstanceName.getGroupComponent().getName(),"invalid users");

    if (!user_list) {
       throw CmpiStatus(CMPI_RC_ERR_NOT_FOUND,"The Instance does not exist. The specified Samba user is not invalid user for the specified global options instance!");
    }
     
    array.populate(user_list);

    if(!array.isPresent(anInstanceName.getPartComponent().getSambaUserName())) { 
       throw CmpiStatus(CMPI_RC_ERR_NOT_FOUND,"The Instance does not exist. The specified Samba user is not invalid user for the specified global options instance!");
    }

   
    return aManualInstance;
  }

  //----------------------------------------------------------------------------
  /*
  void
  Linux_SambaInvalidUsersForGlobalResourceAccess::setInstance(
     const CmpiContext& aContext,
     const CmpiBroker& aBroker,
     const char** aPropertiesPP,
     const Linux_SambaInvalidUsersForGlobalManualInstance& aManualInstance) { }
  */
  
  //----------------------------------------------------------------------------

  Linux_SambaInvalidUsersForGlobalInstanceName
  Linux_SambaInvalidUsersForGlobalResourceAccess::createInstance(
    const CmpiContext& aContext,
    const CmpiBroker& aBroker,
    const Linux_SambaInvalidUsersForGlobalManualInstance& aManualInstance) {

    if(strcasecmp(aManualInstance.getInstanceName().getGroupComponent().getName(),DEFAULT_GLOBAL_NAME)!=0) {
      throw CmpiStatus(CMPI_RC_ERR_NOT_FOUND,"The Instance does not exist. The specified global options instance is unknown!");
    }
    
    SambaArray array = SambaArray();
    char* user_list = get_option(aManualInstance.getInstanceName().getGroupComponent().getName(),"invalid users");
    if(user_list)
      array.populate(user_list);
    
    if(!validUser(aManualInstance.getInstanceName().getPartComponent().getSambaUserName())){
      throw CmpiStatus(CMPI_RC_ERR_NOT_FOUND,"The specified Samba user does not exist!");
    }else{
      if(!array.isPresent(string( aManualInstance.getInstanceName().getPartComponent().getSambaUserName() ))) {
	array.add( string( aManualInstance.getInstanceName().getPartComponent().getSambaUserName() ) );
	
	set_global_option("invalid users",array.toString().c_str());
      } else {
         throw CmpiStatus(CMPI_RC_ERR_ALREADY_EXISTS,"Instance already exist!");
      }
    }
    
    return aManualInstance.getInstanceName();
  }

  
  //----------------------------------------------------------------------------

  void
  Linux_SambaInvalidUsersForGlobalResourceAccess::deleteInstance(
    const CmpiContext& aContext,
    const CmpiBroker& aBroker,
    const Linux_SambaInvalidUsersForGlobalInstanceName& anInstanceName) {
    
    if (strcasecmp(anInstanceName.getGroupComponent().getName(),DEFAULT_GLOBAL_NAME)!=0) {
       throw CmpiStatus(CMPI_RC_ERR_NOT_FOUND,"The Instance does not exist. The specified global options instance is unknown!");
    }
    
    if(!validUser(anInstanceName.getPartComponent().getSambaUserName())) {
      throw CmpiStatus(CMPI_RC_ERR_NOT_FOUND,"The Instance does not exist. The specified Samba user does not exist!");
    }

    SambaArray array = SambaArray();
    char* user_list = get_option(anInstanceName.getGroupComponent().getName(),"invalid users");
    if(!user_list) {
       throw CmpiStatus(CMPI_RC_ERR_NOT_FOUND,"The Instance does not exist. The specified Samba user is not invalid user for the specified global options instance!");
    }

      array.populate(user_list);

    if(!array.isPresent(anInstanceName.getPartComponent().getSambaUserName())) {
       throw CmpiStatus(CMPI_RC_ERR_NOT_FOUND,"The Instance does not exist. The specified Samba user is not invalid user for the specified global options instance!");
    }
    
   if(array.size() > 1){
      array.remove( string( anInstanceName.getPartComponent().getSambaUserName() )); 
      set_global_option("invalid users",array.toString().c_str());

    } else
      set_global_option("invalid users",NULL);
  }

	

  // Association Interface
  //----------------------------------------------------------------------------

  void Linux_SambaInvalidUsersForGlobalResourceAccess::referencesPartComponent( 
    const CmpiContext& aContext,  
    const CmpiBroker& aBroker,
    const char* aNameSpaceP,
    const char** aPropertiesPP,
    const Linux_SambaGlobalOptionsInstanceName& aSourceInstanceName,
    Linux_SambaInvalidUsersForGlobalManualInstanceEnumeration& aManualInstanceEnumeration) {

    if(strcasecmp(aSourceInstanceName.getName(),DEFAULT_GLOBAL_NAME)!=0) {
      throw CmpiStatus(CMPI_RC_ERR_INVALID_PARAMETER,"The Instance does not exist!");
    }
    
    char* user_list = get_option(aSourceInstanceName.getName(),"invalid users");
    
    if(user_list){
      SambaArray array = SambaArray(user_list);
      SambaArrayConstIterator iter;
      
      for ( iter = array.begin(); iter != array.end(); ++iter) {
	if(validUser((*iter).c_str())){
	  Linux_SambaInvalidUsersForGlobalManualInstance manualInstance;
	  
	  Linux_SambaInvalidUsersForGlobalInstanceName instName;
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

  void Linux_SambaInvalidUsersForGlobalResourceAccess::referencesGroupComponent( 
    const CmpiContext& aContext,  
    const CmpiBroker& aBroker,
    const char* aNameSpaceP,
    const char** aPropertiesPP,
    const Linux_SambaUserInstanceName& aSourceInstanceName,
    Linux_SambaInvalidUsersForGlobalManualInstanceEnumeration& aManualInstanceEnumeration) {
    
    if(validUser(aSourceInstanceName.getSambaUserName())){
      char * user_list = get_global_option("invalid users");
      if(user_list){
	SambaArray array = SambaArray(user_list);
	SambaArrayConstIterator iter;
	
	if(array.isPresent(aSourceInstanceName.getSambaUserName())){
	  Linux_SambaInvalidUsersForGlobalManualInstance manualInstance;
	  
	  Linux_SambaInvalidUsersForGlobalInstanceName instName;
	  instName.setNamespace(aNameSpaceP);
	  instName.setPartComponent(aSourceInstanceName);
	  
	  
	  Linux_SambaGlobalOptionsInstanceName globalInstName;
	  globalInstName.setNamespace(aNameSpaceP);
	  globalInstName.setName(DEFAULT_GLOBAL_NAME);
	  globalInstName.setInstanceID(DEFAULT_INSTANCE_ID);
	  
	  instName.setGroupComponent(globalInstName);
	  
	  manualInstance.setInstanceName(instName);
	  aManualInstanceEnumeration.addElement(manualInstance);
	}
      }
    } else {
       throw CmpiStatus(CMPI_RC_ERR_INVALID_PARAMETER,"The Instance does note exist. The specified Samba user is unknown!");
    }

  }

  
  //----------------------------------------------------------------------------

  void Linux_SambaInvalidUsersForGlobalResourceAccess::associatorsPartComponent( 
    const CmpiContext& aContext,  
    const CmpiBroker& aBroker,
    const char* aNameSpaceP,
    const char** aPropertiesPP,
    const Linux_SambaGlobalOptionsInstanceName& aSourceInstanceName,
    Linux_SambaUserInstanceEnumeration& anInstanceEnumeration) {
   
    
    if(strcasecmp(aSourceInstanceName.getName(),DEFAULT_GLOBAL_NAME)!=0) {
      throw CmpiStatus(CMPI_RC_ERR_INVALID_PARAMETER,"The Instance does not exist!");
    }
   
    char* user_list = get_option(aSourceInstanceName.getName(),"invalid users");
    if(user_list){
      SambaArray array = SambaArray(user_list);
      SambaArrayConstIterator iter;
      
      for ( iter = array.begin(); iter != array.end(); ++iter) {
	if(validUser((*iter).c_str())){
	  Linux_SambaUserInstance instance;
	  
	  Linux_SambaUserInstanceName userInstName;
	  userInstName.setNamespace(aNameSpaceP);
	  userInstName.setSambaUserName( (*iter).c_str() );
	  
	  instance.setInstanceName(userInstName);
	  char *option;
	  
	  option = get_user_unix_name((*iter).c_str() );
	  if ( option )
	    instance.setSystemUserName( option );
	  
	  anInstanceEnumeration.addElement(instance);
	}
      }
    }
  }
  
  
  //----------------------------------------------------------------------------

  void Linux_SambaInvalidUsersForGlobalResourceAccess::associatorsGroupComponent( 
    const CmpiContext& aContext,  
    const CmpiBroker& aBroker,
    const char* aNameSpaceP,
    const char** aPropertiesPP,
    const Linux_SambaUserInstanceName& aSourceInstanceName,
    Linux_SambaGlobalOptionsInstanceEnumeration& anInstanceEnumeration) {
    
    if(validUser(aSourceInstanceName.getSambaUserName())){
      char * user_list = get_global_option("invalid users");
      if(user_list){
	SambaArray array = SambaArray(user_list);
	SambaArrayConstIterator iter;
	
	if(array.isPresent(aSourceInstanceName.getSambaUserName())){
	  Linux_SambaGlobalOptionsInstance instance;
	  
	  Linux_SambaGlobalOptionsInstanceName globalInstName;
	  globalInstName.setNamespace(aNameSpaceP);
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
	  
	  anInstanceEnumeration.addElement(instance);
	}
      }
    } else {
       throw CmpiStatus(CMPI_RC_ERR_INVALID_PARAMETER,"The Instance does note exist. The specified Samba user is unknown!");
    }
  
  }

   
  
  // extrinsic methods

	
}


