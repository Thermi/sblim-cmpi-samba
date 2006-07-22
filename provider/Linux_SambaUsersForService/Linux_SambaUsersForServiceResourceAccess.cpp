// =======================================================================
// Linux_SambaUsersForServiceResourceAccess.cpp
//     created on Mon, 26 Jun 2006 using ECUTE 2.2.1
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
  



  static void setInstanceNameProperties(
       const char * aNameSpaceP, const char * instName,
       Linux_SambaUsersForServiceInstanceNameEnumeration& instances) {

            Linux_SambaUsersForServiceInstanceName assocName;

            assocName.setNamespace(aNameSpaceP);

            Linux_SambaServiceInstanceName groupInstName;
              groupInstName.setNamespace(aNameSpaceP);
              groupInstName.setName(DEFAULT_SERVICE_NAME);
              groupInstName.setCreationClassName(DEFAULT_CREATION_CLASS_NAME);
              groupInstName.setSystemCreationClassName(DEFAULT_SYSTEM_CREATION_CLASS_NAME);
              groupInstName.setSystemName(DEFAULT_SYSTEM_NAME);

            assocName.setGroupComponent(groupInstName);

            Linux_SambaUserInstanceName partInstName;
              partInstName.setNamespace(aNameSpaceP);
              partInstName.setSambaUserName(instName);

            assocName.setPartComponent(partInstName);

            instances.addElement(assocName);

  }

  static void setInstanceProperties(
      const char * aNameSpaceP, const char * instName,
      const Linux_SambaServiceInstanceName& anInstanceName,
      Linux_SambaUsersForServiceManualInstanceEnumeration& instances) {

            Linux_SambaUsersForServiceInstanceName assocInstanceName;
            Linux_SambaUsersForServiceManualInstance assocManualInstance;

            assocInstanceName.setNamespace(aNameSpaceP);

            assocInstanceName.setGroupComponent(anInstanceName);

            Linux_SambaUserInstanceName partInstName;
              partInstName.setNamespace(aNameSpaceP);
              partInstName.setSambaUserName(instName);

            assocInstanceName.setPartComponent(partInstName);
            assocManualInstance.setInstanceName(assocInstanceName);

            instances.addElement(assocManualInstance);

  }


  //----------------------------------------------------------------------------


  //----------------------------------------------------------------------------
  //Linux_SambaUsersForServiceResourceAccess::Linux_SambaUsersForServiceResourceAccess();

  //----------------------------------------------------------------------------
  Linux_SambaUsersForServiceResourceAccess::~Linux_SambaUsersForServiceResourceAccess() {
    terminator();
  }
    
  // intrinsic methods
  
  //----------------------------------------------------------------------------
  void
  Linux_SambaUsersForServiceResourceAccess::enumInstanceNames(
     const CmpiContext& aContext,
     const CmpiBroker& aBroker,
     const char* aNameSpaceP,
     Linux_SambaUsersForServiceInstanceNameEnumeration& anInstanceNameEnumeration) {


      char ** users = get_samba_users_list();
      if(users) {
      for (int i=0; users[i]; i++) {
          setInstanceNameProperties(aNameSpaceP,users[i],anInstanceNameEnumeration);
      }       
      }           

  }
 
  //----------------------------------------------------------------------------
  
  void
  Linux_SambaUsersForServiceResourceAccess::enumInstances(
    const CmpiContext& aContext,
    const CmpiBroker& aBroker,
     const char* aNameSpaceP,
     const char** aPropertiesPP,
  	 Linux_SambaUsersForServiceManualInstanceEnumeration& aManualInstanceEnumeration) { 

      char ** users = get_samba_users_list();
      if(users) {
      for (int i=0; users[i]; i++) {
      
            Linux_SambaServiceInstanceName anInstName;
              anInstName.setNamespace(aNameSpaceP);
              anInstName.setName(DEFAULT_SERVICE_NAME);
              anInstName.setCreationClassName(DEFAULT_CREATION_CLASS_NAME);
              anInstName.setSystemCreationClassName(DEFAULT_SYSTEM_CREATION_CLASS_NAME);
              anInstName.setSystemName(DEFAULT_SYSTEM_NAME);

          setInstanceProperties(aNameSpaceP,users[i],anInstName, aManualInstanceEnumeration);
      }                  
      }
}
  
  
  //----------------------------------------------------------------------------

  Linux_SambaUsersForServiceManualInstance 
  Linux_SambaUsersForServiceResourceAccess::getInstance(
    const CmpiContext& aContext,
    const CmpiBroker& aBroker,
    const char** aPropertiesPP,
    const Linux_SambaUsersForServiceInstanceName& anInstanceName) {

    Linux_SambaUsersForServiceManualInstance instance;
    instance.setInstanceName(anInstanceName);

    if(!validUser(anInstanceName.getPartComponent().getSambaUserName())) {
       throw CmpiStatus(CMPI_RC_ERR_NOT_FOUND,"The Instance does not exist. The spedified Samba user does not exist!");
    }    
    
    if(strcasecmp(anInstanceName.getGroupComponent().getName(),DEFAULT_SERVICE_NAME)!=0) {
       throw CmpiStatus(CMPI_RC_ERR_NOT_FOUND,"The Instance does not exist. The spedified Samba service does not exist!");
    }



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

    if(strcasecmp(aSourceInstanceName.getName(),DEFAULT_SERVICE_NAME)!=0) { 
       throw CmpiStatus(CMPI_RC_ERR_INVALID_PARAMETER,"The Instance does not exist!");
    }

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
    } else { 
       throw CmpiStatus(CMPI_RC_ERR_INVALID_PARAMETER,"The Instance does note exist. The specified Samba user is unknown!");
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
   

    if(strcasecmp(aSourceInstanceName.getName(),DEFAULT_SERVICE_NAME)!=0) { 
       throw CmpiStatus(CMPI_RC_ERR_INVALID_PARAMETER,"The Instance does not exist!");
    }
 
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
    } else {
       throw CmpiStatus(CMPI_RC_ERR_INVALID_PARAMETER,"The Instance does note exist. The specified Samba user is unknown!");
    }
  }

   
  
  // extrinsic methods

	
}


