// =======================================================================
// Linux_SambaShareFileNameHandlingOptionsResourceAccess.cpp
//     created on Mon, 26 Jun 2006 using ECUTE 2.2.1
//
// Copyright (c) 2006, 2009, International Business Machines
//
// THIS FILE IS PROVIDED UNDER THE TERMS OF THE ECLIPSE PUBLIC LICENSE
// ("AGREEMENT"). ANY USE, REPRODUCTION OR DISTRIBUTION OF THIS FILE
// CONSTITUTES RECIPIENTS ACCEPTANCE OF THE AGREEMENT.
//
// You can obtain a current copy of the Eclipse Public License from
// http://www.opensource.org/licenses/eclipse-1.0.php
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
#include "Linux_SambaShareFileNameHandlingOptionsResourceAccess.h"

#include "smt_smb_ra_support.h"
#include "smt_smb_defaultvalues.h"

namespace genProvider {
  
  
  //----------------------------------------------------------------------------
  // manual written methods
  
  static void setInstanceNameProperties(
      const char* aNameSpaceP, 
      char *instanceName, 
      Linux_SambaShareFileNameHandlingOptionsInstanceName& anInstanceName) {
    
    anInstanceName.setNamespace(aNameSpaceP);
    anInstanceName.setName(instanceName);
    anInstanceName.setInstanceID(DEFAULT_INSTANCE_ID);
  }


  //----------------------------------------------------------------------------


  static void setInstanceProperties(
      Linux_SambaShareFileNameHandlingOptionsManualInstance& aManualInstance) {
    
    char *option;
    option = get_option(aManualInstance.getInstanceName().getName(),CASE_SENSITIVE);	
    
    if ( option )
      if(strcasecmp(option,YES) == 0)
	aManualInstance.setCaseSensitive( true );
      else
	aManualInstance.setCaseSensitive( false );
    
    option = get_option(aManualInstance.getInstanceName().getName(),DOS_FILETIMES);	
    if ( option )
      if(strcasecmp(option,YES) == 0)
	aManualInstance.setDosFiletimes( true );
      else
	aManualInstance.setDosFiletimes( false );
    
    option = get_option(aManualInstance.getInstanceName().getName(),HIDE_DOT_FILES);	
    if ( option )
      if(strcasecmp(option,YES) == 0)
	aManualInstance.setHideDotFiles( true );
      else
	aManualInstance.setHideDotFiles( false );
  }


  //----------------------------------------------------------------------------


  static void setRAProperties(
      Linux_SambaShareFileNameHandlingOptionsManualInstance aManualInstance) {
    
    if ( aManualInstance.isCaseSensitiveSet() )
      {
	if(aManualInstance.getCaseSensitive())  
	  set_share_option(aManualInstance.getInstanceName().getName(),CASE_SENSITIVE,YES);
	else
	  set_share_option(aManualInstance.getInstanceName().getName(),CASE_SENSITIVE,NO);
      }
    
    if ( aManualInstance.isDosFiletimesSet() )
      {
	if(aManualInstance.getDosFiletimes())  
	  set_share_option(aManualInstance.getInstanceName().getName(),DOS_FILETIMES,YES);
	else
	  set_share_option(aManualInstance.getInstanceName().getName(),DOS_FILETIMES,NO);
      }
    
    if ( aManualInstance.isHideDotFilesSet() )
      {
	if(aManualInstance.getHideDotFiles())  
	  set_share_option(aManualInstance.getInstanceName().getName(),HIDE_DOT_FILES,YES);
	else
	  set_share_option(aManualInstance.getInstanceName().getName(),HIDE_DOT_FILES,NO);
      }
  };

  //----------------------------------------------------------------------------

  
  
  //----------------------------------------------------------------------------
  //Linux_SambaShareFileNameHandlingOptionsResourceAccess::Linux_SambaShareFileNameHandlingOptionsResourceAccess();

  //----------------------------------------------------------------------------
  Linux_SambaShareFileNameHandlingOptionsResourceAccess::~Linux_SambaShareFileNameHandlingOptionsResourceAccess() {
    terminator();
  }
    
  // intrinsic methods

  //----------------------------------------------------------------------------
  void
  Linux_SambaShareFileNameHandlingOptionsResourceAccess::enumInstanceNames(
     const CmpiContext& aContext,
     const CmpiBroker& aBroker,
     const char* aNameSpaceP,
     Linux_SambaShareFileNameHandlingOptionsInstanceNameEnumeration& anInstanceNameEnumeration) {
      
    char ** shares = get_shares_list();
    
    if(shares){
      for (int i=0; shares[i]; i++){
	Linux_SambaShareFileNameHandlingOptionsInstanceName instanceName;
	setInstanceNameProperties(aNameSpaceP,shares[i],instanceName);
	anInstanceNameEnumeration.addElement(instanceName); 
      }
    }
  }

  
  //----------------------------------------------------------------------------

  void
  Linux_SambaShareFileNameHandlingOptionsResourceAccess::enumInstances(
    const CmpiContext& aContext,
    const CmpiBroker& aBroker,
    const char* aNameSpaceP,
    const char** aPropertiesPP,
    Linux_SambaShareFileNameHandlingOptionsManualInstanceEnumeration& aManualInstanceEnumeration) {
    
    char ** shares = get_shares_list();
    
    if(shares){
      for (int i=0; shares[i]; i++){
	Linux_SambaShareFileNameHandlingOptionsManualInstance aManualInstance;
	Linux_SambaShareFileNameHandlingOptionsInstanceName instanceName;
	
	setInstanceNameProperties(aNameSpaceP,shares[i],instanceName);
	aManualInstance.setInstanceName(instanceName);
	
	setInstanceProperties(aManualInstance);
	
	aManualInstanceEnumeration.addElement(aManualInstance);
      }
    }
  }

  
  //----------------------------------------------------------------------------

  Linux_SambaShareFileNameHandlingOptionsManualInstance 
  Linux_SambaShareFileNameHandlingOptionsResourceAccess::getInstance(
    const CmpiContext& aContext,
    const CmpiBroker& aBroker,
    const char** aPropertiesPP,
    const Linux_SambaShareFileNameHandlingOptionsInstanceName& anInstanceName) {

    if (!service_exists(anInstanceName.getName()) ||
        strcasecmp(DEFAULT_INSTANCE_ID,anInstanceName.getInstanceID())!=0) {
      throw CmpiStatus(CMPI_RC_ERR_NOT_FOUND,"Instance does not exist!");
    }

    Linux_SambaShareFileNameHandlingOptionsManualInstance aManualInstance;
    aManualInstance.setInstanceName(anInstanceName);
    
    setInstanceProperties(aManualInstance);
    
    return aManualInstance;
  }

  //----------------------------------------------------------------------------

  void
  Linux_SambaShareFileNameHandlingOptionsResourceAccess::setInstance(
     const CmpiContext& aContext,
     const CmpiBroker& aBroker,
     const char** aPropertiesPP,
     const Linux_SambaShareFileNameHandlingOptionsManualInstance& aManualInstance) {
    
    if (!service_exists(aManualInstance.getInstanceName().getName()) ||
        strcasecmp(DEFAULT_INSTANCE_ID,aManualInstance.getInstanceName().getInstanceID())!=0) {
      throw CmpiStatus(CMPI_RC_ERR_NOT_FOUND,"Instance does not exist!");
    }

     setRAProperties(aManualInstance);
  }

  
  //----------------------------------------------------------------------------
  /*
  Linux_SambaShareFileNameHandlingOptionsInstanceName
  Linux_SambaShareFileNameHandlingOptionsResourceAccess::createInstance(
    const CmpiContext& aContext,
    const CmpiBroker& aBroker,
    const Linux_SambaShareFileNameHandlingOptionsManualInstance& aManualInstance) {
    
    setRAProperties(aManualInstance);
    
    return aManualInstance.getInstanceName();
  }
  */
  
  //----------------------------------------------------------------------------
  /*
  void
  Linux_SambaShareFileNameHandlingOptionsResourceAccess::deleteInstance(
    const CmpiContext& aContext,
    const CmpiBroker& aBroker,
    const Linux_SambaShareFileNameHandlingOptionsInstanceName& anInstanceName) {
    
    if(service_exists(anInstanceName.getName())){
      set_share_option(anInstanceName.getName(),CASE_SENSITIVE, NULL);
      set_share_option(anInstanceName.getName(),DOS_FILETIMES, NULL);
      set_share_option(anInstanceName.getName(),HIDE_DOT_FILES, NULL);

    }else
      throw CmpiStatus(CMPI_RC_ERR_INVALID_PARAMETER,"Instance doesn't exist!");
  }
  */
	

  
  // extrinsic methods

	
}


