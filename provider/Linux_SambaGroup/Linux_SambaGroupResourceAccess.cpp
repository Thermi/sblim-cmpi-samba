// =======================================================================
// Linux_SambaGroupResourceAccess.cpp
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
#include "Linux_SambaGroupResourceAccess.h"

#include <errno.h>

#include "smt_smb_ra_support.h"
#include "smt_smb_defaultvalues.h"

namespace genProvider {
  
  //----------------------------------------------------------------------------
  // manual written methods
  
  static void setInstanceNameProperties(
      const char* aNameSpaceP,
      char *instanceName, 
      Linux_SambaGroupInstanceName& anInstanceName) {
    
    anInstanceName.setNamespace(aNameSpaceP);
    anInstanceName.setSambaGroupName(instanceName);
  };

  //----------------------------------------------------------------------------


  //----------------------------------------------------------------------------
  //Linux_SambaGroupResourceAccess::Linux_SambaGroupResourceAccess();

  //----------------------------------------------------------------------------
  Linux_SambaGroupResourceAccess::~Linux_SambaGroupResourceAccess() {
    terminator();
  }
    
  // intrinsic methods

  //----------------------------------------------------------------------------
  void
  Linux_SambaGroupResourceAccess::enumInstanceNames(
     const CmpiContext& aContext,
     const CmpiBroker& aBroker,
     const char* aNameSpaceP,
     Linux_SambaGroupInstanceNameEnumeration& anInstanceNameEnumeration) {
      
    char ** groups = get_samba_groups_list();
    
    if(groups){
      for (int i=0; groups[i]; i++){
	Linux_SambaGroupInstanceName instanceName;
	setInstanceNameProperties(aNameSpaceP,groups[i],instanceName);
	anInstanceNameEnumeration.addElement(instanceName); 
      }
    }
  }

  
  //----------------------------------------------------------------------------

  void
  Linux_SambaGroupResourceAccess::enumInstances(
    const CmpiContext& aContext,
    const CmpiBroker& aBroker,
    const char* aNameSpaceP,
    const char** aPropertiesPP,
    Linux_SambaGroupManualInstanceEnumeration& aManualInstanceEnumeration) {
    
    char ** groups = get_samba_groups_list();
    
    if(groups){
      for (int i=0; groups[i]; i++){
	Linux_SambaGroupManualInstance aManualInstance;
	Linux_SambaGroupInstanceName instanceName;
	
	setInstanceNameProperties(aNameSpaceP,groups[i],instanceName);
	aManualInstance.setInstanceName(instanceName);
	
	char* option;
	option = get_unix_group_name(instanceName.getSambaGroupName());
	if ( option )
	  aManualInstance.setSystemGroupName( option );
	
	aManualInstanceEnumeration.addElement(aManualInstance);
      }
    }
  }
  
  
  //----------------------------------------------------------------------------

  Linux_SambaGroupManualInstance 
  Linux_SambaGroupResourceAccess::getInstance(
    const CmpiContext& aContext,
    const CmpiBroker& aBroker,
    const char** aPropertiesPP,
    const Linux_SambaGroupInstanceName& anInstanceName) {
    
    Linux_SambaGroupManualInstance aManualInstance;
    aManualInstance.setInstanceName(anInstanceName);
    
    char* option;
    option = get_unix_group_name(anInstanceName.getSambaGroupName());
    if ( option )
      aManualInstance.setSystemGroupName( option );
    
    return aManualInstance;
  }

  //----------------------------------------------------------------------------
 
  void
  Linux_SambaGroupResourceAccess::setInstance(
     const CmpiContext& aContext,
     const CmpiBroker& aBroker,
     const char** aPropertiesPP,
     const Linux_SambaGroupManualInstance& aManualInstance) { 
  
    int ret;
    char* option;
    option = get_unix_group_name(aManualInstance.getInstanceName().getSambaGroupName());

    ret = modify_samba_group(aManualInstance.getInstanceName().getSambaGroupName(), option, aManualInstance.getSystemGroupName());
    if(ret){
      if (ret==-ENOENT)
        throw CmpiStatus(CMPI_RC_ERR_FAILED,"The specified SystemGroupName or UnixGroupName is not known in the system");
      else
        throw CmpiStatus(CMPI_RC_ERR_FAILED,"Instance could not be added!");
    }
  }






  
  //----------------------------------------------------------------------------
  
  Linux_SambaGroupInstanceName
  Linux_SambaGroupResourceAccess::createInstance(
    const CmpiContext& aContext,
    const CmpiBroker& aBroker,
    const Linux_SambaGroupManualInstance& aManualInstance) {
    
    int ret = create_samba_group(aManualInstance.getInstanceName().getSambaGroupName(), aManualInstance.getSystemGroupName());
    if(ret){
      if (ret==-EEXIST)
	throw CmpiStatus(CMPI_RC_ERR_ALREADY_EXISTS,"Instance already exists!");
      else if (ret==-ENOENT)
	throw CmpiStatus(CMPI_RC_ERR_FAILED,"The specified SystemGroupName is not known in the system");
      else
	throw CmpiStatus(CMPI_RC_ERR_FAILED,"Instance could not be added!");
    }
    
    return aManualInstance.getInstanceName();
  }
  
  
  //----------------------------------------------------------------------------

  void
  Linux_SambaGroupResourceAccess::deleteInstance(
    const CmpiContext& aContext,
    const CmpiBroker& aBroker,
    const Linux_SambaGroupInstanceName& anInstanceName) {
    
    int ret = delete_samba_group(anInstanceName.getSambaGroupName());
    if(ret){
      if(ret == -ENOENT)
	throw CmpiStatus(CMPI_RC_ERR_NOT_FOUND,"Instance does not exist!"); 
      else
	throw CmpiStatus(CMPI_RC_ERR_FAILED,"Instance could not be deleted!");
    }
  }

	

  
  // extrinsic methods


  char* Linux_SambaGroupResourceAccess::getAllSystemGroups(
    const CmpiContext& aContext,
    const CmpiBroker& aBroker,
    const Linux_SambaGroupInstanceName& anInstanceName) {
    
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
  

	
}


