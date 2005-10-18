/**
 *  Linux_SambaUserResourceAccess.cpp
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


#include "Linux_SambaUserResourceAccess.h"

namespace genProvider {

  bool Linux_SambaUserResourceAccess::validUser(const char* user)
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

  void Linux_SambaUserResourceAccess::setInstanceNameProperties(const char* nsp,
   char *instanceName,
   Linux_SambaUserInstanceName& anInstanceName)
  {
    anInstanceName.setNamespace(nsp);
    anInstanceName.setSambaUserName(instanceName);
  };

  //Linux_SambaUserResourceAccess::Linux_SambaUserResourceAccess();
  Linux_SambaUserResourceAccess::~Linux_SambaUserResourceAccess() { 
    terminator();
  };
    
  /* intrinsic methods */
    
  void Linux_SambaUserResourceAccess::enumInstanceNames(
   const CmpiContext& ctx, const CmpiBroker &mbp, const char *nsp,
   Linux_SambaUserInstanceNameEnumeration& instnames)
  {
    char ** users = get_samba_users_list();
    
    if(users){
      for (int i=0; users[i]; i++){
	  Linux_SambaUserInstanceName instanceName;
	  setInstanceNameProperties(nsp,users[i],instanceName);
	  instnames.addElement(instanceName); 
      }
    }
  };
     	
  void Linux_SambaUserResourceAccess::enumInstances(
   const CmpiContext& ctx,
   const CmpiBroker &mbp,
   const char *nsp,
   const char* *properties,
   Linux_SambaUserManualInstanceEnumeration& instances)
  {
    char ** users = get_samba_users_list();
    
    if(users){
      for (int i=0; users[i]; i++){
	  Linux_SambaUserManualInstance aManualInstance;
	  Linux_SambaUserInstanceName instanceName;
	  
	  setInstanceNameProperties(nsp,users[i],instanceName);
	  aManualInstance.setInstanceName(instanceName);
	  
	  char* option;
	  option = get_user_unix_name(instanceName.getSambaUserName());
	  if ( option )
	    aManualInstance.setSystemUserName( option );
	  
	  instances.addElement(aManualInstance);
      }
    }
  };
  
  
  Linux_SambaUserManualInstance 
   Linux_SambaUserResourceAccess::getInstance(
   const CmpiContext& ctx,
   const CmpiBroker &mbp,
   const char* *properties,
   const Linux_SambaUserInstanceName& instanceName)
  {
    if(validUser(instanceName.getSambaUserName())){
      Linux_SambaUserManualInstance aManualInstance;
      aManualInstance.setInstanceName(instanceName);
      char* option;
      option = get_user_unix_name(instanceName.getSambaUserName());
      if ( option )
	aManualInstance.setSystemUserName( option );
      
      return aManualInstance;  
    }else  throw CmpiStatus(CMPI_RC_ERR_INVALID_PARAMETER,"Instance doesn't exist!");
  };
  
  /*
  void Linux_SambaUserResourceAccess::setInstance(
   const CmpiContext& ctx,
   const CmpiBroker &mbp,
   const char* *properties,
   const Linux_SambaUserManualInstance& newInstance)
   {};
  */

  	
  void Linux_SambaUserResourceAccess::createInstance(
   const CmpiContext& ctx, const CmpiBroker &mbp,
   const Linux_SambaUserManualInstance& newInstance)
  {
    int ret;
    if(ret = add_samba_user(newInstance.getInstanceName().getSambaUserName(), newInstance.getSystemUserName(), newInstance.getSambaUserPassword())){
      if (ret==-EEXIST)
	throw CmpiStatus(CMPI_RC_ERR_ALREADY_EXISTS,"Instance already exists!");
      else
	throw CmpiStatus(CMPI_RC_ERR_FAILED,"Instance could not be added!");
    }
  };
  
  void Linux_SambaUserResourceAccess::deleteInstance(
   const CmpiContext& ctx, const CmpiBroker &mbp,
   const Linux_SambaUserInstanceName& instanceName)
  {
    int ret;
    if(ret = delete_samba_user(instanceName.getSambaUserName())){
      if(ret == -ENOENT)
	throw CmpiStatus(CMPI_RC_ERR_NOT_FOUND,"Instance does not exist!"); 
      else
	throw CmpiStatus(CMPI_RC_ERR_FAILED,"Instance could not be deleted!");
    }
  };	
  
  /* extrinsic methods */
    
  char* Linux_SambaUserResourceAccess::getAllSystemGroups(
   const CmpiContext& ctx, const CmpiBroker &mbp,
   const Linux_SambaUserInstanceName&) 
  { 
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
  };


  char* Linux_SambaUserResourceAccess::getAllSystemUsers(
   const CmpiContext& ctx, const CmpiBroker &mbp,
   const Linux_SambaUserInstanceName&) 
  { 
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
  };
    
	
}


