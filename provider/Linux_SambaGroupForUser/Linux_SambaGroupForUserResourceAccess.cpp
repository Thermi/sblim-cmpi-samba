// =======================================================================
// Linux_SambaGroupForUserResourceAccess.cpp
//     created on Fri, 23 Jun 2006 using ECUTE 2.2.1
//
// Copyright (c) 2006, 2009, International Business Machines
//
// THIS FILE IS PROVIDED UNDER THE TERMS OF THE ECLIPSE PUBLIC LICENSE
// ("AGREEMENT"). ANY USE, REPRODUCTION OR DISTRIBUTION OF THIS FILE
// CONSTITUTES RECIPIENTS ACCEPTANCE OF THE AGREEMENT.
//
// You can obtain a current copy of the Eclipse Public License from
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
#include "Linux_SambaGroupForUserResourceAccess.h"

#include <errno.h>
#include "smt_smb_ra_support.h"
#include "smt_smb_defaultvalues.h"

extern int errno;

namespace genProvider {
  
  //----------------------------------------------------------------------------
  //Linux_SambaGroupForUserResourceAccess::Linux_SambaGroupForUserResourceAccess();

  //----------------------------------------------------------------------------
  Linux_SambaGroupForUserResourceAccess::~Linux_SambaGroupForUserResourceAccess() {
    terminator();
  }
    
  // intrinsic methods

  //----------------------------------------------------------------------------
  void
  Linux_SambaGroupForUserResourceAccess::enumInstanceNames(
     const CmpiContext& aContext,
     const CmpiBroker& aBroker,
     const char* aNameSpaceP,
     Linux_SambaGroupForUserInstanceNameEnumeration& anInstanceNameEnumeration) {

    int k;
    char ** get_users = get_samba_users_list();
    if (!get_users && errno)
      throw CmpiStatus(CMPI_RC_ERR_FAILED, "Failed to retrieve Samba user list!");
    if(get_users) {
      char ** users = (char **)malloc(sizeof(char *));
      for(k=0; get_users[k];k++) {
	users = (char **)realloc(users,(k+2)*sizeof(char *));
	users[k] = strdup(get_users[k]);
      }

      users[k] = NULL;
      for(int i=0; users[i];i++){
	char ** groups = get_user_groups(users[i]);
        if (!groups && errno)
          throw CmpiStatus(CMPI_RC_ERR_FAILED, "Failed to retrieve group!");
	if(groups){
	  for(int j=0; groups[j];j++){    
	    Linux_SambaGroupForUserInstanceName instName;
	    instName.setNamespace(aNameSpaceP);
	    
	    Linux_SambaGroupInstanceName groupInstName;
	    groupInstName.setNamespace(aNameSpaceP);
	    groupInstName.setSambaGroupName( groups[j] );
	    instName.setGroupComponent( groupInstName );
	    
	    Linux_SambaUserInstanceName userInstName;
	    userInstName.setNamespace(aNameSpaceP);
	    userInstName.setSambaUserName( users[i] );
	    instName.setPartComponent(userInstName);
	    
	    anInstanceNameEnumeration.addElement(instName);
	  }
	}
	free(users[i]);
      }
    }
  }
  
  
  //----------------------------------------------------------------------------

  void
  Linux_SambaGroupForUserResourceAccess::enumInstances(
    const CmpiContext& aContext,
    const CmpiBroker& aBroker,
    const char* aNameSpaceP,
    const char** aPropertiesPP,
    Linux_SambaGroupForUserManualInstanceEnumeration& aManualInstanceEnumeration) {
    
    int k;
    char ** get_users = get_samba_users_list();
    if (!get_users && errno)
      throw CmpiStatus(CMPI_RC_ERR_FAILED, "Failed to retrieve Samba user list!");
    
    if(get_users){
      char ** users = (char **)malloc(sizeof(char *));
      for(k=0; get_users[k];k++){
	users = (char **)realloc(users,(k+2)*sizeof(char *));
	users[k] = strdup(get_users[k]);
      }
      users[k] = NULL;
      for(int i=0; users[i];i++){
	char ** groups = get_user_groups(users[i]);
        if (!groups && errno)
          throw CmpiStatus(CMPI_RC_ERR_FAILED, "Failed to retrieve group!");
	if(groups){
	  for(int j=0; groups[j];j++){    
	    Linux_SambaGroupForUserManualInstance manualInstance;
	    
	    Linux_SambaGroupForUserInstanceName instName;
	    instName.setNamespace(aNameSpaceP);
	    
	    Linux_SambaGroupInstanceName groupInstName;
	    groupInstName.setNamespace(aNameSpaceP);
	    groupInstName.setSambaGroupName( groups[j] );
	    instName.setGroupComponent( groupInstName );
	    
	    Linux_SambaUserInstanceName userInstName;
	    userInstName.setNamespace(aNameSpaceP);
	    userInstName.setSambaUserName( users[i] );
	    
	    instName.setPartComponent(userInstName);
	    
	    manualInstance.setInstanceName(instName);
	    aManualInstanceEnumeration.addElement(manualInstance);
	  }
	}
	free(users[i]);
      }
    }
  }

  
  //----------------------------------------------------------------------------

  Linux_SambaGroupForUserManualInstance 
  Linux_SambaGroupForUserResourceAccess::getInstance(
    const CmpiContext& aContext,
    const CmpiBroker& aBroker,
    const char** aPropertiesPP,
    const Linux_SambaGroupForUserInstanceName& anInstanceName) {

    Linux_SambaGroupForUserManualInstance instance;
    instance.setInstanceName(anInstanceName);
    return instance;
  }

  //----------------------------------------------------------------------------
  /*
  void
  Linux_SambaGroupForUserResourceAccess::setInstance(
     const CmpiContext& aContext,
     const CmpiBroker& aBroker,
     const char** aPropertiesPP,
     const Linux_SambaGroupForUserManualInstance& aManualInstance) { }
  */
  
  //----------------------------------------------------------------------------

  Linux_SambaGroupForUserInstanceName
  Linux_SambaGroupForUserResourceAccess::createInstance(
    const CmpiContext& aContext,
    const CmpiBroker& aBroker,
    const Linux_SambaGroupForUserManualInstance& aManualInstance) {
    
    if(add_user_to_group(aManualInstance.getInstanceName().getPartComponent().getSambaUserName(), aManualInstance.getInstanceName().getGroupComponent().getSambaGroupName()))
      throw CmpiStatus(CMPI_RC_ERR_INVALID_PARAMETER,"Instance could not be created!");
    
    return aManualInstance.getInstanceName();
  }

  
  //----------------------------------------------------------------------------

  void
  Linux_SambaGroupForUserResourceAccess::deleteInstance(
    const CmpiContext& aContext,
    const CmpiBroker& aBroker,
    const Linux_SambaGroupForUserInstanceName& anInstanceName) {
    
    if(remove_user_from_group(anInstanceName.getPartComponent().getSambaUserName(), anInstanceName.getGroupComponent().getSambaGroupName()))
      throw CmpiStatus(CMPI_RC_ERR_INVALID_PARAMETER,"Instance could not be deleted!");
  }

	

  // Association Interface
  //----------------------------------------------------------------------------

  void Linux_SambaGroupForUserResourceAccess::referencesGroupComponent( 
    const CmpiContext& aContext,  
    const CmpiBroker& aBroker,
    const char* aNameSpaceP,
    const char** aPropertiesPP,
    const Linux_SambaUserInstanceName& aSourceInstanceName,
    Linux_SambaGroupForUserManualInstanceEnumeration& aManualInstanceEnumeration) {
    
    char ** groups = get_user_groups(aSourceInstanceName.getSambaUserName());
    if (!groups && errno)
      throw CmpiStatus(CMPI_RC_ERR_FAILED, "Failed to retrieve group!");
    
    if(groups){
      for(int j=0; groups[j];j++){
	
	Linux_SambaGroupForUserManualInstance manualInstance;
	
	Linux_SambaGroupForUserInstanceName instName;
	instName.setNamespace(aNameSpaceP);
	
	instName.setPartComponent(aSourceInstanceName);
	
	Linux_SambaGroupInstanceName groupInstName;
	groupInstName.setNamespace(aNameSpaceP);
	groupInstName.setSambaGroupName( groups[j] );
	
	instName.setGroupComponent(groupInstName);
	
	manualInstance.setInstanceName(instName);
	aManualInstanceEnumeration.addElement(manualInstance);
      }
    }
  }

  
  //----------------------------------------------------------------------------

  void Linux_SambaGroupForUserResourceAccess::referencesPartComponent( 
    const CmpiContext& aContext,  
    const CmpiBroker& aBroker,
    const char* aNameSpaceP,
    const char** aPropertiesPP,
    const Linux_SambaGroupInstanceName& aSourceInstanceName,
    Linux_SambaGroupForUserManualInstanceEnumeration& aManualInstanceEnumeration) {
    
    int k;
    char ** get_users = get_samba_users_list();
    if (!get_users && errno)
      throw CmpiStatus(CMPI_RC_ERR_FAILED, "Failed to retrieve Samba user list!");
    
    if(get_users){
      char ** users = (char **)malloc(sizeof(char *));
      for(k=0; get_users[k];k++){
	users = (char **)realloc(users,(k+2)*sizeof(char *));
	users[k] = strdup(get_users[k]);
      }
      users[k] = NULL;
      for(int i=0; users[i];i++){
	char ** groups = get_user_groups(users[i]);
        if (!groups && errno)
          throw CmpiStatus(CMPI_RC_ERR_FAILED, "Failed to retrieve group!");
	if(groups){
	  for(int j=0; groups[j];j++){    
	    if(!strcmp(groups[j],aSourceInstanceName.getSambaGroupName())){
	      
	      Linux_SambaGroupForUserManualInstance manualInstance;
	      
	      Linux_SambaGroupForUserInstanceName instName;
	      instName.setNamespace(aNameSpaceP);
	      instName.setGroupComponent(aSourceInstanceName);
	      
	      Linux_SambaUserInstanceName userInstName;
	      userInstName.setNamespace(aNameSpaceP);
	      userInstName.setSambaUserName( users[i] );
	      
	      instName.setPartComponent(userInstName);
	      
	      manualInstance.setInstanceName(instName);
	      aManualInstanceEnumeration.addElement(manualInstance);
	    }
	  }
	}
	free(users[i]);
      }
    }
  }

  
  //----------------------------------------------------------------------------

  void Linux_SambaGroupForUserResourceAccess::associatorsGroupComponent( 
    const CmpiContext& aContext,  
    const CmpiBroker& aBroker,
    const char* aNameSpaceP,
    const char** aPropertiesPP,
    const Linux_SambaUserInstanceName& aSourceInstanceName,
    Linux_SambaGroupInstanceEnumeration& anInstanceEnumeration) {
    
    char ** groups = get_user_groups(aSourceInstanceName.getSambaUserName());
    if (!groups && errno)
      throw CmpiStatus(CMPI_RC_ERR_FAILED, "Failed to retrieve group!");
    
    if(groups){
      for(int j=0; groups[j];j++){
	
	Linux_SambaGroupInstance instance;
	
	Linux_SambaGroupInstanceName groupInstName;
	groupInstName.setNamespace(aNameSpaceP);
	groupInstName.setSambaGroupName( groups[j] );
	
	instance.setInstanceName(groupInstName);
	char* option;
	
	option = get_unix_group_name( groups[j] );
	if ( option )
	  instance.setSystemGroupName( option );
	
	anInstanceEnumeration.addElement(instance);
      }
    }
  }

  
  //----------------------------------------------------------------------------

  void Linux_SambaGroupForUserResourceAccess::associatorsPartComponent( 
    const CmpiContext& aContext,  
    const CmpiBroker& aBroker,
    const char* aNameSpaceP,
    const char** aPropertiesPP,
    const Linux_SambaGroupInstanceName& aSourceInstanceName,
    Linux_SambaUserInstanceEnumeration& anInstanceEnumeration) {
    
    int k;
    char ** get_users = get_samba_users_list();
    if (!get_users && errno)
      throw CmpiStatus(CMPI_RC_ERR_FAILED, "Failed to retrieve Samba user list!");
    
    if(get_users){
      char ** users = (char **)malloc(sizeof(char *));
      for(k=0; get_users[k];k++){
	users = (char **)realloc(users,(k+2)*sizeof(char *));
	users[k] = strdup(get_users[k]);
      }
      users[k] = NULL;
      
      for(int i=0; users[i];i++){
	
	char ** groups = get_user_groups(users[i]);
        if (!groups && errno)
          throw CmpiStatus(CMPI_RC_ERR_FAILED, "Failed to retrieve group!");
	if(groups){
	  for(int j=0; groups[j];j++){
	    
	    if(!strcmp(groups[j],aSourceInstanceName.getSambaGroupName())){
	      
	      Linux_SambaUserInstance instance;
	      
	      Linux_SambaUserInstanceName userInstName;
	      userInstName.setNamespace(aNameSpaceP);
	      userInstName.setSambaUserName( users[i] );
	      
	      instance.setInstanceName(userInstName);
	      char* option;
	      
	      option = get_user_unix_name( users[i] );
	      if ( option )
		instance.setSystemUserName( option );
	      
	      anInstanceEnumeration.addElement(instance);
	    }
	  }
	}
      }
    }
  }

   
  
  // extrinsic methods

	
}


