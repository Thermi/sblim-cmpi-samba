// =======================================================================
// Linux_SambaWriteListForGlobalResourceAccess.cpp
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
#include "Linux_SambaWriteListForGlobalResourceAccess.h"

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
  //Linux_SambaWriteListForGlobalResourceAccess::Linux_SambaWriteListForGlobalResourceAccess();

  //----------------------------------------------------------------------------
  Linux_SambaWriteListForGlobalResourceAccess::~Linux_SambaWriteListForGlobalResourceAccess() {
    terminator();
  }
    
  // intrinsic methods

  //----------------------------------------------------------------------------
  void
  Linux_SambaWriteListForGlobalResourceAccess::enumInstanceNames(
     const CmpiContext& aContext,
     const CmpiBroker& aBroker,
     const char* aNameSpaceP,
     Linux_SambaWriteListForGlobalInstanceNameEnumeration& anInstanceNameEnumeration) {
      
    Linux_SambaGlobalOptionsInstanceName globalInstName;
    globalInstName.setNamespace(aNameSpaceP);
    globalInstName.setName(DEFAULT_GLOBAL_NAME);
    globalInstName.setInstanceID(DEFAULT_INSTANCE_ID);
    
    char* user_list = get_global_option("write list");
    
    if(user_list){
      SambaArray array = SambaArray(user_list);
      SambaArrayConstIterator iter;
      
      for ( iter = array.begin(); iter != array.end(); ++iter) {
	if(validUser((*iter).c_str())){
	  Linux_SambaWriteListForGlobalInstanceName assocName;
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
  Linux_SambaWriteListForGlobalResourceAccess::enumInstances(
    const CmpiContext& aContext,
    const CmpiBroker& aBroker,
    const char* aNameSpaceP,
    const char** aPropertiesPP,
    Linux_SambaWriteListForGlobalManualInstanceEnumeration& aManualInstanceEnumeration) {
    
    Linux_SambaGlobalOptionsInstanceName globalInstName;
    globalInstName.setNamespace(aNameSpaceP);
    globalInstName.setName(DEFAULT_GLOBAL_NAME);
    globalInstName.setInstanceID(DEFAULT_INSTANCE_ID);
    
    char* user_list = get_global_option("write list");
    
    if(user_list){
      SambaArray array = SambaArray(user_list);
      SambaArrayConstIterator iter;
      
      for ( iter = array.begin(); iter != array.end(); ++iter) {
	if(validUser((*iter).c_str())){
	  Linux_SambaWriteListForGlobalManualInstance manualInstance;
	  
	  Linux_SambaWriteListForGlobalInstanceName instName;
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

  Linux_SambaWriteListForGlobalManualInstance 
  Linux_SambaWriteListForGlobalResourceAccess::getInstance(
    const CmpiContext& aContext,
    const CmpiBroker& aBroker,
    const char** aPropertiesPP,
    const Linux_SambaWriteListForGlobalInstanceName& anInstanceName) {

    Linux_SambaWriteListForGlobalManualInstance aManualInstance;
    aManualInstance.setInstanceName(anInstanceName);
    
    return aManualInstance;
  }

  //----------------------------------------------------------------------------
  /*
  void
  Linux_SambaWriteListForGlobalResourceAccess::setInstance(
     const CmpiContext& aContext,
     const CmpiBroker& aBroker,
     const char** aPropertiesPP,
     const Linux_SambaWriteListForGlobalManualInstance& aManualInstance) { }
  */
  
  //----------------------------------------------------------------------------

  Linux_SambaWriteListForGlobalInstanceName
  Linux_SambaWriteListForGlobalResourceAccess::createInstance(
    const CmpiContext& aContext,
    const CmpiBroker& aBroker,
    const Linux_SambaWriteListForGlobalManualInstance& aManualInstance) {
    
    SambaArray array = SambaArray();
    char* user_list = get_option(aManualInstance.getInstanceName().getGroupComponent().getName(),"write list");
    
    if(user_list)
      array.populate(user_list);
    
    if(!validUser(aManualInstance.getInstanceName().getPartComponent().getSambaUserName())){
      throw CmpiStatus(CMPI_RC_ERR_INVALID_PARAMETER,"Invalid User!");
      
    }else{
      if(!array.isPresent(string( aManualInstance.getInstanceName().getPartComponent().getSambaUserName() ))){
	array.add( string( aManualInstance.getInstanceName().getPartComponent().getSambaUserName() ) );
	
	set_global_option("write list",array.toString().c_str());
      }
    }
    
    return aManualInstance.getInstanceName();
  }

  
  //----------------------------------------------------------------------------

  void
  Linux_SambaWriteListForGlobalResourceAccess::deleteInstance(
    const CmpiContext& aContext,
    const CmpiBroker& aBroker,
    const Linux_SambaWriteListForGlobalInstanceName& anInstanceName) {
    
    SambaArray array = SambaArray();
    char* user_list = get_option(anInstanceName.getGroupComponent().getName(),"write list");
    
    if(user_list)
      array.populate(user_list);
    
    if(array.size() > 1){
      array.remove( string(anInstanceName.getPartComponent().getSambaUserName() )); 
      set_global_option("write list",array.toString().c_str());
      
    } else
      set_global_option("write list",NULL);
  }

	

  // Association Interface
  //----------------------------------------------------------------------------

  void Linux_SambaWriteListForGlobalResourceAccess::referencesPartComponent( 
    const CmpiContext& aContext,  
    const CmpiBroker& aBroker,
    const char* aNameSpaceP,
    const char** aPropertiesPP,
    const Linux_SambaGlobalOptionsInstanceName& aSourceInstanceName,
    Linux_SambaWriteListForGlobalManualInstanceEnumeration& aManualInstanceEnumeration) {
    
    char* user_list = get_option(aSourceInstanceName.getName(),"write list");
    
    if(user_list){
      SambaArray array = SambaArray(user_list);
      SambaArrayConstIterator iter;
      
      for ( iter = array.begin(); iter != array.end(); ++iter) {
	if(validUser((*iter).c_str())){
	  Linux_SambaWriteListForGlobalManualInstance manualInstance;
	  
	  Linux_SambaWriteListForGlobalInstanceName instName;
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

  void Linux_SambaWriteListForGlobalResourceAccess::referencesGroupComponent( 
    const CmpiContext& aContext,  
    const CmpiBroker& aBroker,
    const char* aNameSpaceP,
    const char** aPropertiesPP,
    const Linux_SambaUserInstanceName& aSourceInstanceName,
    Linux_SambaWriteListForGlobalManualInstanceEnumeration& aManualInstanceEnumeration) {
    
    if(validUser(aSourceInstanceName.getSambaUserName())){
      char * user_list = get_global_option("write list");
      if(user_list){
	SambaArray array = SambaArray(user_list);
	SambaArrayConstIterator iter;
	
	if(array.isPresent(aSourceInstanceName.getSambaUserName())){
	  Linux_SambaWriteListForGlobalManualInstance manualInstance;
	  
	  Linux_SambaWriteListForGlobalInstanceName instName;
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
    }
  }

  
  //----------------------------------------------------------------------------

  void Linux_SambaWriteListForGlobalResourceAccess::associatorsPartComponent( 
    const CmpiContext& aContext,  
    const CmpiBroker& aBroker,
    const char* aNameSpaceP,
    const char** aPropertiesPP,
    const Linux_SambaGlobalOptionsInstanceName& aSourceInstanceName,
    Linux_SambaUserInstanceEnumeration& anInstanceEnumeration) {
    
    char* user_list = get_option(aSourceInstanceName.getName(),"write list");
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

  void Linux_SambaWriteListForGlobalResourceAccess::associatorsGroupComponent( 
    const CmpiContext& aContext,  
    const CmpiBroker& aBroker,
    const char* aNameSpaceP,
    const char** aPropertiesPP,
    const Linux_SambaUserInstanceName& aSourceInstanceName,
    Linux_SambaGlobalOptionsInstanceEnumeration& anInstanceEnumeration) {
    
    if(validUser(aSourceInstanceName.getSambaUserName())){
      char * user_list = get_global_option("write list");
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
    }
  }

   
  
  // extrinsic methods

	
}


