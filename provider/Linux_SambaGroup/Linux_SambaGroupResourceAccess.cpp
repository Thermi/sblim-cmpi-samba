/**
 *  Linux_SambaGroupResourceAccess.cpp
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


#include "Linux_SambaGroupResourceAccess.h"

namespace genProvider {
  
  void Linux_SambaGroupResourceAccess::setInstanceNameProperties(const char* nsp,
   char *instanceName,
   Linux_SambaGroupInstanceName& anInstanceName)
  {
    anInstanceName.setNamespace(nsp);
    anInstanceName.setSambaGroupName(instanceName);
  };

  //Linux_SambaGroupResourceAccess::Linux_SambaGroupResourceAccess();
  Linux_SambaGroupResourceAccess::~Linux_SambaGroupResourceAccess() { 
    terminator();
  };
    
  /* intrinsic methods */
    
  void Linux_SambaGroupResourceAccess::enumInstanceNames(
   const CmpiContext& ctx, const CmpiBroker &mbp, const char *nsp,
   Linux_SambaGroupInstanceNameEnumeration& instnames)
  {
    char ** groups = get_samba_groups_list();
    
    if(groups){
      for (int i=0; groups[i]; i++){
	Linux_SambaGroupInstanceName instanceName;
	setInstanceNameProperties(nsp,groups[i],instanceName);
	instnames.addElement(instanceName); 
      }
    }
  };
     	
  void Linux_SambaGroupResourceAccess::enumInstances(
   const CmpiContext& ctx,
   const CmpiBroker &mbp,
   const char *nsp,
   const char* *properties,
   Linux_SambaGroupManualInstanceEnumeration& instances)
  {
    char ** groups = get_samba_groups_list();
    
    if(groups){
      for (int i=0; groups[i]; i++){
	Linux_SambaGroupManualInstance aManualInstance;
	Linux_SambaGroupInstanceName instanceName;
	
	setInstanceNameProperties(nsp,groups[i],instanceName);
	aManualInstance.setInstanceName(instanceName);
	
	char* option;
	option = get_unix_group_name(instanceName.getSambaGroupName());
	if ( option )
	  aManualInstance.setSystemGroupName( option );
	
	instances.addElement(aManualInstance);
      }
    }
  };
  
  
  Linux_SambaGroupManualInstance 
   Linux_SambaGroupResourceAccess::getInstance(
   const CmpiContext& ctx,
   const CmpiBroker &mbp,
   const char* *properties,
   const Linux_SambaGroupInstanceName& instanceName)
  {
    Linux_SambaGroupManualInstance aManualInstance;
    aManualInstance.setInstanceName(instanceName);
    
    char* option;
    option = get_unix_group_name(instanceName.getSambaGroupName());
    if ( option )
      aManualInstance.setSystemGroupName( option );
    
    return aManualInstance;  
  };
  
  /*
  void Linux_SambaGroupResourceAccess::setInstance(
   const CmpiContext& ctx,
   const CmpiBroker &mbp,
   const char* *properties,
   const Linux_SambaGroupManualInstance& newInstance)
   {};
  */

  	
  void Linux_SambaGroupResourceAccess::createInstance(
   const CmpiContext& ctx, const CmpiBroker &mbp,
   const Linux_SambaGroupManualInstance& newInstance)
  {
    int ret;
    if(ret = create_samba_group(newInstance.getInstanceName().getSambaGroupName(), newInstance.getSystemGroupName())){
      if (ret==-EEXIST)
	throw CmpiStatus(CMPI_RC_ERR_ALREADY_EXISTS,"Instance already exists!");
      else
	throw CmpiStatus(CMPI_RC_ERR_FAILED,"Instance could not be added!");
    }
  };
  
  void Linux_SambaGroupResourceAccess::deleteInstance(
   const CmpiContext& ctx, const CmpiBroker &mbp,
   const Linux_SambaGroupInstanceName& instanceName)
  {
    int ret;
    if(ret = delete_samba_group(instanceName.getSambaGroupName())){
      if(ret == -ENOENT)
	throw CmpiStatus(CMPI_RC_ERR_NOT_FOUND,"Instance does not exist!"); 
      else
	throw CmpiStatus(CMPI_RC_ERR_FAILED,"Instance could not be deleted!");
    }
  };	
  
    /* extrinsic methods */
    
  char* Linux_SambaGroupResourceAccess::getAllSystemGroups(
   const CmpiContext& ctx, const CmpiBroker &mbp,
   const Linux_SambaGroupInstanceName&) 
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
    
	
}


