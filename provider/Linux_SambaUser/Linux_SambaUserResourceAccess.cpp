// =======================================================================
// Linux_SambaUserResourceAccess.cpp
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
#include "Linux_SambaUserResourceAccess.h"

#include <errno.h>

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


  static void setInstanceNameProperties(
      const char* aNameSpaceP, 
      char *instanceName, 
      Linux_SambaUserInstanceName& anInstanceName) {
    
    anInstanceName.setNamespace(aNameSpaceP);
    anInstanceName.setSambaUserName(instanceName);
  };

  
  //----------------------------------------------------------------------------
  
  
  //----------------------------------------------------------------------------
  //Linux_SambaUserResourceAccess::Linux_SambaUserResourceAccess();

  //----------------------------------------------------------------------------
  Linux_SambaUserResourceAccess::~Linux_SambaUserResourceAccess() {
    terminator();
  }
    
  // intrinsic methods

  //----------------------------------------------------------------------------
  void
  Linux_SambaUserResourceAccess::enumInstanceNames(
     const CmpiContext& aContext,
     const CmpiBroker& aBroker,
     const char* aNameSpaceP,
     Linux_SambaUserInstanceNameEnumeration& anInstanceNameEnumeration) {
      
    char ** users = get_samba_users_list();
    
    if(users){
      for (int i=0; users[i]; i++){
	Linux_SambaUserInstanceName instanceName;
	setInstanceNameProperties(aNameSpaceP,users[i],instanceName);
	anInstanceNameEnumeration.addElement(instanceName); 
      }
    }
  }

  
  //----------------------------------------------------------------------------

  void
  Linux_SambaUserResourceAccess::enumInstances(
    const CmpiContext& aContext,
    const CmpiBroker& aBroker,
    const char* aNameSpaceP,
    const char** aPropertiesPP,
    Linux_SambaUserManualInstanceEnumeration& aManualInstanceEnumeration) {
    
    char ** users = get_samba_users_list();
    
    if(users){
      for (int i=0; users[i]; i++){
	Linux_SambaUserManualInstance aManualInstance;
	Linux_SambaUserInstanceName instanceName;
	
	setInstanceNameProperties(aNameSpaceP,users[i],instanceName);
	aManualInstance.setInstanceName(instanceName);
	
	char* option;
	option = get_user_unix_name(instanceName.getSambaUserName());
	if ( option )
	  aManualInstance.setSystemUserName( option );
	
	aManualInstanceEnumeration.addElement(aManualInstance);
      }
    }
  }

  
  //----------------------------------------------------------------------------

  Linux_SambaUserManualInstance 
  Linux_SambaUserResourceAccess::getInstance(
    const CmpiContext& aContext,
    const CmpiBroker& aBroker,
    const char** aPropertiesPP,
    const Linux_SambaUserInstanceName& anInstanceName) {

    if(validUser(anInstanceName.getSambaUserName())){
      Linux_SambaUserManualInstance aManualInstance;
      aManualInstance.setInstanceName(anInstanceName);
      char* option;
      option = get_user_unix_name(anInstanceName.getSambaUserName());
      if ( option )
	aManualInstance.setSystemUserName( option );
      
      return aManualInstance;  
      
    }else
      throw CmpiStatus(CMPI_RC_ERR_INVALID_PARAMETER,"Instance doesn't exist!");
  }

  //----------------------------------------------------------------------------
  /*
  void
  Linux_SambaUserResourceAccess::setInstance(
     const CmpiContext& aContext,
     const CmpiBroker& aBroker,
     const char** aPropertiesPP,
     const Linux_SambaUserManualInstance& aManualInstance) { }
  */
  
  //----------------------------------------------------------------------------

  Linux_SambaUserInstanceName
  Linux_SambaUserResourceAccess::createInstance(
    const CmpiContext& aContext,
    const CmpiBroker& aBroker,
    const Linux_SambaUserManualInstance& aManualInstance) {
    
    int ret;
    if(ret = add_samba_user(aManualInstance.getInstanceName().getSambaUserName(), aManualInstance.getSystemUserName(), aManualInstance.getSambaUserPassword())){
      if (ret==-EEXIST)
	throw CmpiStatus(CMPI_RC_ERR_ALREADY_EXISTS,"Instance already exists!");
      else
	throw CmpiStatus(CMPI_RC_ERR_FAILED,"Instance could not be added!");
    }
    
    return aManualInstance.getInstanceName();
  }

  
  //----------------------------------------------------------------------------

  void
  Linux_SambaUserResourceAccess::deleteInstance(
    const CmpiContext& aContext,
    const CmpiBroker& aBroker,
    const Linux_SambaUserInstanceName& anInstanceName) {
    
    int ret;
    if(ret = delete_samba_user(anInstanceName.getSambaUserName())){
      if(ret == -ENOENT)
	throw CmpiStatus(CMPI_RC_ERR_NOT_FOUND,"Instance does not exist!"); 
      else
	throw CmpiStatus(CMPI_RC_ERR_FAILED,"Instance could not be deleted!");
    }
  }

	

  
  // extrinsic methods


  char* Linux_SambaUserResourceAccess::getAllSystemGroups(
    const CmpiContext& aContext,
    const CmpiBroker& aBroker,
    const Linux_SambaUserInstanceName& anInstanceName) {
    
    char ** groups = get_system_groups_list();
    char *  ret = NULL;
    int len = 0;
    
    if(groups){
      for (int i=0; groups[i]; i++)
	len = len + strlen(groups[i]) + 4;
      
      ret =(char*) calloc(len,sizeof(char));
      
      for (int i=0; groups[i]; i++){
	if(ret[0]=='\0')
	  sprintf(ret,"%s",groups[i]);
	else
	  sprintf(ret,"%s, %s",ret,groups[i]);
      }
    }
    
    return ret;
  }



  char* Linux_SambaUserResourceAccess::getAllSystemUsers(
    const CmpiContext& aContext,
    const CmpiBroker& aBroker,
    const Linux_SambaUserInstanceName& anInstanceName) {
    
    char ** users = get_system_users_list();
    char *  ret = NULL;
    int len = 0;
    
    if(users){
      for (int i=0; users[i]; i++)
	len = len + strlen(users[i]) + 4;
      
      ret =(char*) calloc(len,sizeof(char));
      
      for (int i=0; users[i]; i++){
	if(ret[0]=='\0')
	  sprintf(ret,"%s",users[i]);
	else
	  sprintf(ret,"%s, %s",ret,users[i]);
      }
    }
    
    return ret;
  }


	
}


