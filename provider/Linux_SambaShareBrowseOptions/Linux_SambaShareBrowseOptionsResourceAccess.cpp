// =======================================================================
// Linux_SambaShareBrowseOptionsResourceAccess.cpp
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
#include "Linux_SambaShareBrowseOptionsResourceAccess.h"

#include "smt_smb_ra_support.h"
#include "smt_smb_defaultvalues.h"

namespace genProvider {
  
  
  //----------------------------------------------------------------------------
  // manual written methods
  
  static void setInstanceNameProperties(
      const char* aNameSpaceP, 
      char *instanceName, 
      Linux_SambaShareBrowseOptionsInstanceName& anInstanceName) {
    
    anInstanceName.setNamespace(aNameSpaceP);
    anInstanceName.setName(instanceName);
    anInstanceName.setInstanceID(DEFAULT_INSTANCE_ID);
  };

  
  //----------------------------------------------------------------------------
  

  static void setInstanceProperties(
      Linux_SambaShareBrowseOptionsManualInstance& aManualInstance) {
    
    char *option;
    
    option = get_option(aManualInstance.getInstanceName().getName(),BROWSEABLE);	
    if ( option )
      if(strcasecmp(option,YES) == 0)
	aManualInstance.setBrowsable( true );
      else
	aManualInstance.setBrowsable( false );
  };

  
  //----------------------------------------------------------------------------

  
  static void setRAProperties(
      Linux_SambaShareBrowseOptionsManualInstance aManualInstance) {
    if ( aManualInstance.isBrowsableSet() )
      if(aManualInstance.getBrowsable())  
	set_printer_option(aManualInstance.getInstanceName().getName(),BROWSEABLE,YES);
      else
	set_printer_option(aManualInstance.getInstanceName().getName(),BROWSEABLE,NO);
  };
  
  //----------------------------------------------------------------------------
  

  //----------------------------------------------------------------------------
  //Linux_SambaShareBrowseOptionsResourceAccess::Linux_SambaShareBrowseOptionsResourceAccess();

  //----------------------------------------------------------------------------
  Linux_SambaShareBrowseOptionsResourceAccess::~Linux_SambaShareBrowseOptionsResourceAccess() {
    terminator();
  }
    
  // intrinsic methods

  //----------------------------------------------------------------------------
  void
  Linux_SambaShareBrowseOptionsResourceAccess::enumInstanceNames(
     const CmpiContext& aContext,
     const CmpiBroker& aBroker,
     const char* aNameSpaceP,
     Linux_SambaShareBrowseOptionsInstanceNameEnumeration& anInstanceNameEnumeration) {
      
    char ** shares = get_shares_list();
    
    if(shares){
      for (int i=0; shares[i]; i++){
	Linux_SambaShareBrowseOptionsInstanceName instanceName;
	setInstanceNameProperties(aNameSpaceP,shares[i],instanceName);
	anInstanceNameEnumeration.addElement(instanceName); 
      }
    }
  }

  
  //----------------------------------------------------------------------------

  void
  Linux_SambaShareBrowseOptionsResourceAccess::enumInstances(
    const CmpiContext& aContext,
    const CmpiBroker& aBroker,
    const char* aNameSpaceP,
    const char** aPropertiesPP,
    Linux_SambaShareBrowseOptionsManualInstanceEnumeration& aManualInstanceEnumeration) {
    
    char ** shares = get_shares_list();
    
    if(shares){
      for (int i=0; shares[i]; i++){
	Linux_SambaShareBrowseOptionsManualInstance aManualInstance;
	Linux_SambaShareBrowseOptionsInstanceName instanceName;
	
	setInstanceNameProperties(aNameSpaceP,shares[i],instanceName);
	aManualInstance.setInstanceName(instanceName);
	
	setInstanceProperties(aManualInstance);
	
	aManualInstanceEnumeration.addElement(aManualInstance);
      }
    }
  }

  
  //----------------------------------------------------------------------------

  Linux_SambaShareBrowseOptionsManualInstance 
  Linux_SambaShareBrowseOptionsResourceAccess::getInstance(
    const CmpiContext& aContext,
    const CmpiBroker& aBroker,
    const char** aPropertiesPP,
    const Linux_SambaShareBrowseOptionsInstanceName& anInstanceName) {

    if (!service_exists(anInstanceName.getName())) {
      throw CmpiStatus(CMPI_RC_ERR_NOT_FOUND,"Instance does not exist!");
    }

    Linux_SambaShareBrowseOptionsManualInstance aManualInstance;
    aManualInstance.setInstanceName(anInstanceName);
    
    setInstanceProperties(aManualInstance);
    
    return aManualInstance;
  }

  //----------------------------------------------------------------------------

  void
  Linux_SambaShareBrowseOptionsResourceAccess::setInstance(
     const CmpiContext& aContext,
     const CmpiBroker& aBroker,
     const char** aPropertiesPP,
     const Linux_SambaShareBrowseOptionsManualInstance& aManualInstance) {
    
    if (!service_exists(aManualInstance.getInstanceName().getName())) {
      throw CmpiStatus(CMPI_RC_ERR_NOT_FOUND,"Instance does not exist!");
    }

    setRAProperties(aManualInstance);
  }

  
  //----------------------------------------------------------------------------
  /*
  Linux_SambaShareBrowseOptionsInstanceName
  Linux_SambaShareBrowseOptionsResourceAccess::createInstance(
    const CmpiContext& aContext,
    const CmpiBroker& aBroker,
    const Linux_SambaShareBrowseOptionsManualInstance& aManualInstance) {
    
    setRAProperties(aManualInstance);
    
    return aManualInstance.getInstanceName();
  }
  */
  
  //----------------------------------------------------------------------------
  /*
  void
  Linux_SambaShareBrowseOptionsResourceAccess::deleteInstance(
    const CmpiContext& aContext,
    const CmpiBroker& aBroker,
    const Linux_SambaShareBrowseOptionsInstanceName& anInstanceName) {
    
    if(service_exists(anInstanceName.getName())){
      set_printer_option(anInstanceName.getName(),BROWSEABLE,NULL);
      
    }else
      throw CmpiStatus(CMPI_RC_ERR_INVALID_PARAMETER,"Instance doesn't exist!");
  }
  */
	

  
  // extrinsic methods

	
}


