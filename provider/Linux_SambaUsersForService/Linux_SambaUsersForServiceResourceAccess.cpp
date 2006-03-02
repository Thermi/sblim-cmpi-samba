// =======================================================================
// Linux_SambaUsersForServiceResourceAccess.cpp
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
#include "Linux_SambaUsersForServiceResourceAccess.h"

#include "smt_smb_ra_support.h"
#include "smt_smb_defaultvalues.h"

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
  //Linux_SambaUsersForServiceResourceAccess::Linux_SambaUsersForServiceResourceAccess();

  //----------------------------------------------------------------------------
  Linux_SambaUsersForServiceResourceAccess::~Linux_SambaUsersForServiceResourceAccess() {
    terminator();
  }
    
  // intrinsic methods
  /*
  //----------------------------------------------------------------------------
  void
  Linux_SambaUsersForServiceResourceAccess::enumInstanceNames(
     const CmpiContext& aContext,
     const CmpiBroker& aBroker,
     const char* aNameSpaceP,
     Linux_SambaUsersForServiceInstanceNameEnumeration& anInstanceNameEnumeration) {
      
    int instanceNameN = 1;
    for (int x=0; x < instanceNameN; ++x) {
      
      //place here the code retrieving your instanceName
      
      Linux_SambaUsersForServiceInstanceName instanceName;
      
    }      
  
  }
  */
  
  //----------------------------------------------------------------------------
  /*
  void
  Linux_SambaUsersForServiceResourceAccess::enumInstances(
    const CmpiContext& aContext,
    const CmpiBroker& aBroker,
     const char* aNameSpaceP,
     const char** aPropertiesPP,
  	 Linux_SambaUsersForServiceManualInstanceEnumeration& aManualInstanceEnumeration) { }
  */
  
  //----------------------------------------------------------------------------

  Linux_SambaUsersForServiceManualInstance 
  Linux_SambaUsersForServiceResourceAccess::getInstance(
    const CmpiContext& aContext,
    const CmpiBroker& aBroker,
    const char** aPropertiesPP,
    const Linux_SambaUsersForServiceInstanceName& anInstanceName) {

    Linux_SambaUsersForServiceManualInstance instance;
    instance.setInstanceName(anInstanceName);

    return instance;
  }

  //----------------------------------------------------------------------------
  /*
  void
  Linux_SambaUsersForServiceResourceAccess::setInstance(
     const CmpiContext& aContext,
     const CmpiBroker& aBroker,
     const char** aPropertiesPP,
     const Linux_SambaUsersForServiceManualInstance& aManualInstance) { }
  */
  
  //----------------------------------------------------------------------------
  /*
  Linux_SambaUsersForServiceInstanceName
  Linux_SambaUsersForServiceResourceAccess::createInstance(
    const CmpiContext& aContext,
    const CmpiBroker& aBroker,
    const Linux_SambaUsersForServiceManualInstance& aManualInstance) { }
  */
  
  //----------------------------------------------------------------------------
  /*
  void
  Linux_SambaUsersForServiceResourceAccess::deleteInstance(
    const CmpiContext& aContext,
    const CmpiBroker& aBroker,
    const Linux_SambaUsersForServiceInstanceName& anInstanceName) { }
	*/
	

  // Association Interface
  //----------------------------------------------------------------------------

  void Linux_SambaUsersForServiceResourceAccess::referencesPartComponent( 
    const CmpiContext& aContext,  
    const CmpiBroker& aBroker,
    const char* aNameSpaceP,
    const char** aPropertiesPP,
    const Linux_SambaServiceInstanceName& aSourceInstanceName,
    Linux_SambaUsersForServiceManualInstanceEnumeration& aManualInstanceEnumeration) {
    
    char ** users = get_samba_users_list();
    
    if(users){
      for (int i=0; users[i]; i++){
	Linux_SambaUsersForServiceManualInstance manualInstance;
	
	Linux_SambaUsersForServiceInstanceName instName;
	instName.setNamespace(aNameSpaceP);
	instName.setGroupComponent(aSourceInstanceName);
	
	Linux_SambaUserInstanceName userInstName;
	userInstName.setNamespace(aNameSpaceP);
	userInstName.setSambaUserName(users[i]);
	
	instName.setPartComponent(userInstName);
	
	manualInstance.setInstanceName(instName);
	aManualInstanceEnumeration.addElement(manualInstance);
      }
    }
  }

  
  //----------------------------------------------------------------------------

  void Linux_SambaUsersForServiceResourceAccess::referencesGroupComponent( 
    const CmpiContext& aContext,  
    const CmpiBroker& aBroker,
    const char* aNameSpaceP,
    const char** aPropertiesPP,
    const Linux_SambaUserInstanceName& aSourceInstanceName,
    Linux_SambaUsersForServiceManualInstanceEnumeration& aManualInstanceEnumeration) {
    
    if(validUser(aSourceInstanceName.getSambaUserName())){
      Linux_SambaUsersForServiceManualInstance manualInstance;
      
      Linux_SambaUsersForServiceInstanceName instName;
      instName.setNamespace(aNameSpaceP);
      instName.setPartComponent(aSourceInstanceName);
      
      Linux_SambaServiceInstanceName elemInstanceName;
      elemInstanceName.setNamespace(aNameSpaceP);
      elemInstanceName.setName(DEFAULT_SERVICE_NAME);
      elemInstanceName.setCreationClassName(DEFAULT_CREATION_CLASS_NAME);
      elemInstanceName.setSystemCreationClassName(DEFAULT_SYSTEM_CREATION_CLASS_NAME);
      elemInstanceName.setSystemName(DEFAULT_SYSTEM_NAME);
      
      instName.setGroupComponent(elemInstanceName);
      
      manualInstance.setInstanceName(instName);
      aManualInstanceEnumeration.addElement(manualInstance);
    }
  }

  
  //----------------------------------------------------------------------------

  void Linux_SambaUsersForServiceResourceAccess::associatorsPartComponent( 
    const CmpiContext& aContext,  
    const CmpiBroker& aBroker,
    const char* aNameSpaceP,
    const char** aPropertiesPP,
    const Linux_SambaServiceInstanceName& aSourceInstanceName,
    Linux_SambaUserInstanceEnumeration& anInstanceEnumeration) {
    
    char ** users = get_samba_users_list();
    
    if(users){
      for (int i=0; users[i]; i++){
	Linux_SambaUserInstance instance;
	
	Linux_SambaUserInstanceName userInstName;
	userInstName.setNamespace(aNameSpaceP);
	userInstName.setSambaUserName(users[i]);
	
	instance.setInstanceName(userInstName);
	char *option;
	
	option = get_user_unix_name(users[i]);
	if ( option )
	  instance.setSystemUserName( option );
	
	anInstanceEnumeration.addElement(instance);
      }
    }
  }

  
  //----------------------------------------------------------------------------

  void Linux_SambaUsersForServiceResourceAccess::associatorsGroupComponent( 
    const CmpiContext& aContext,  
    const CmpiBroker& aBroker,
    const char* aNameSpaceP,
    const char** aPropertiesPP,
    const Linux_SambaUserInstanceName& aSourceInstanceName,
    Linux_SambaServiceInstanceEnumeration& anInstanceEnumeration) {
    
    if(validUser(aSourceInstanceName.getSambaUserName())){
      Linux_SambaServiceInstance instance;
      
      Linux_SambaServiceInstanceName elemInstanceName;
      elemInstanceName.setNamespace(aNameSpaceP);
      elemInstanceName.setName(DEFAULT_SERVICE_NAME);
      elemInstanceName.setCreationClassName(DEFAULT_CREATION_CLASS_NAME);
      elemInstanceName.setSystemCreationClassName(DEFAULT_SYSTEM_CREATION_CLASS_NAME);
      elemInstanceName.setSystemName(DEFAULT_SYSTEM_NAME);
      
      instance.setInstanceName(elemInstanceName);
      
      anInstanceEnumeration.addElement(instance);
    }
  }

   
  
  // extrinsic methods

	
}


