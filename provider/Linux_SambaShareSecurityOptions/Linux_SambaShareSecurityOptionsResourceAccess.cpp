// =======================================================================
// Linux_SambaShareSecurityOptionsResourceAccess.cpp
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
#include "Linux_SambaShareSecurityOptionsResourceAccess.h"

#include "smt_smb_ra_support.h"
#include "smt_smb_defaultvalues.h"

namespace genProvider {
  
  
  //----------------------------------------------------------------------------
  // manual written methods



  //----------------------------------------------------------------------------

  static void setInstanceNameProperties(
      const char* aNameSpaceP, 
      char *instanceName, 
      Linux_SambaShareSecurityOptionsInstanceName& anInstanceName) {

    anInstanceName.setNamespace(aNameSpaceP);
    anInstanceName.setName(instanceName);
    anInstanceName.setInstanceID(DEFAULT_INSTANCE_ID);
  };
  

  //----------------------------------------------------------------------------


  static void setInstanceProperties(Linux_SambaShareSecurityOptionsManualInstance& aManualInstance) {
    
    char *option;
      option = get_option(aManualInstance.getInstanceName().getName(),CREATE_MASK);	
      if ( option )
	aManualInstance.setCreateMask( atoi(option) );
      
      option = get_option(aManualInstance.getInstanceName().getName(),DIRECTORY_MASK);	
      if ( option )
	aManualInstance.setDirectoryMask( atoi(option) );
      
      option = get_option(aManualInstance.getInstanceName().getName(),DIRECTORY_SECURITY_MASK);	
      if ( option )
	aManualInstance.setDirectorySecurityMask( atoi(option) );
  };

  
  //----------------------------------------------------------------------------


  static void setRAProperties(Linux_SambaShareSecurityOptionsManualInstance aManualInstance) {
    
      if ( aManualInstance.isCreateMaskSet()){
	char *option = (char *) malloc( 5*sizeof(char) );
	sprintf(option,"%04d",aManualInstance.getCreateMask());
	set_share_option(aManualInstance.getInstanceName().getName(),CREATE_MASK, option);
	free(option);
      }
      
      if ( aManualInstance.isDirectoryMaskSet()){
	char *option = (char *) malloc( 5*sizeof(char) );
	sprintf(option,"%04d",aManualInstance.getDirectoryMask());
	set_share_option(aManualInstance.getInstanceName().getName(),DIRECTORY_MASK, option);
	free(option);
      }
      
      if ( aManualInstance.isDirectorySecurityMaskSet()){
	char *option = (char *) malloc( 5*sizeof(char) );
	sprintf(option,"%04d",aManualInstance.getDirectorySecurityMask());
	set_share_option(aManualInstance.getInstanceName().getName(),DIRECTORY_SECURITY_MASK, option);
        free(option);
      }
  };


  //----------------------------------------------------------------------------
  //Linux_SambaShareSecurityOptionsResourceAccess::Linux_SambaShareSecurityOptionsResourceAccess();

  //----------------------------------------------------------------------------
  Linux_SambaShareSecurityOptionsResourceAccess::~Linux_SambaShareSecurityOptionsResourceAccess() {
    terminator();
  }
    
  // intrinsic methods

  //----------------------------------------------------------------------------
  void
  Linux_SambaShareSecurityOptionsResourceAccess::enumInstanceNames(
     const CmpiContext& aContext,
     const CmpiBroker& aBroker,
     const char* aNameSpaceP,
     Linux_SambaShareSecurityOptionsInstanceNameEnumeration& anInstanceNameEnumeration) {
      
    Linux_SambaShareSecurityOptionsInstanceName instanceName;
    setInstanceNameProperties(aNameSpaceP,DEFAULT_GLOBAL_NAME,instanceName);
    anInstanceNameEnumeration.addElement(instanceName);
    
    char ** shares = get_shares_list();
    
    if(shares){
      for (int i=0; shares[i]; i++){
	Linux_SambaShareSecurityOptionsInstanceName instanceName;
	setInstanceNameProperties(aNameSpaceP,shares[i],instanceName);
	anInstanceNameEnumeration.addElement(instanceName); 
      }
    }
  }

  
  //----------------------------------------------------------------------------

  void
  Linux_SambaShareSecurityOptionsResourceAccess::enumInstances(
    const CmpiContext& aContext,
    const CmpiBroker& aBroker,
    const char* aNameSpaceP,
    const char** aPropertiesPP,
    Linux_SambaShareSecurityOptionsManualInstanceEnumeration& aManualInstanceEnumeration) {
    
    Linux_SambaShareSecurityOptionsManualInstance aManualInstance;
    Linux_SambaShareSecurityOptionsInstanceName instanceName;
    
    setInstanceNameProperties(aNameSpaceP,DEFAULT_GLOBAL_NAME,instanceName);
    aManualInstance.setInstanceName(instanceName);
    
    setInstanceProperties(aManualInstance);
    
    aManualInstanceEnumeration.addElement(aManualInstance);
    
    char ** shares = get_shares_list();
    
    if(shares){
      for (int i=0; shares[i]; i++){
	setInstanceNameProperties(aNameSpaceP,shares[i],instanceName);
	aManualInstance.setInstanceName(instanceName);
	
	setInstanceProperties(aManualInstance);
	
	aManualInstanceEnumeration.addElement(aManualInstance);
      }
    }
  }

  
  //----------------------------------------------------------------------------

  Linux_SambaShareSecurityOptionsManualInstance 
  Linux_SambaShareSecurityOptionsResourceAccess::getInstance(
    const CmpiContext& aContext,
    const CmpiBroker& aBroker,
    const char** aPropertiesPP,
    const Linux_SambaShareSecurityOptionsInstanceName& anInstanceName) {

    if (!service_exists(anInstanceName.getName())) {
      throw CmpiStatus(CMPI_RC_ERR_NOT_FOUND,"Instance does not exist!");
    }

    Linux_SambaShareSecurityOptionsManualInstance aManualInstance;
    aManualInstance.setInstanceName(anInstanceName);
    
    setInstanceProperties(aManualInstance);
    
    return aManualInstance;  
  }

  //----------------------------------------------------------------------------

  void
  Linux_SambaShareSecurityOptionsResourceAccess::setInstance(
     const CmpiContext& aContext,
     const CmpiBroker& aBroker,
     const char** aPropertiesPP,
     const Linux_SambaShareSecurityOptionsManualInstance& aManualInstance) {
    
    if (!service_exists(aManualInstance.getInstanceName().getName())) {
      throw CmpiStatus(CMPI_RC_ERR_NOT_FOUND,"Instance does not exist!");
    }

    setRAProperties(aManualInstance);
  }

  
  //----------------------------------------------------------------------------
  /*
  Linux_SambaShareSecurityOptionsInstanceName
  Linux_SambaShareSecurityOptionsResourceAccess::createInstance(
    const CmpiContext& aContext,
    const CmpiBroker& aBroker,
    const Linux_SambaShareSecurityOptionsManualInstance& aManualInstance) {
    
    if(!strcasecmp(DEFAULT_GLOBAL_NAME,aManualInstance.getInstanceName().getName()))
      setRAProperties(aManualInstance,true);
    else
      setRAProperties(aManualInstance,false);
    
    return aManualInstance.getInstanceName();
  }
  */
  
  //----------------------------------------------------------------------------
  /*
  void
  Linux_SambaShareSecurityOptionsResourceAccess::deleteInstance(
    const CmpiContext& aContext,
    const CmpiBroker& aBroker,
    const Linux_SambaShareSecurityOptionsInstanceName& anInstanceName) {
    
    if(!strcasecmp(DEFAULT_GLOBAL_NAME,anInstanceName.getName())){
      set_global_option(CREATE_MASK,NULL);
      set_global_option(DIRECTORY_MASK,NULL);
      set_global_option(DIRECTORY_SECURITY_MASK,NULL);

    } else{
      if(service_exists(anInstanceName.getName())){
	set_share_option(anInstanceName.getName(),CREATE_MASK,NULL);
	set_share_option(anInstanceName.getName(),DIRECTORY_MASK,NULL);
	set_share_option(anInstanceName.getName(),DIRECTORY_SECURITY_MASK,NULL);

      }else
	throw CmpiStatus(CMPI_RC_ERR_INVALID_PARAMETER,"Instance doesn't exist!");
    }
  }
  */
	

  
  // extrinsic methods

	
}


