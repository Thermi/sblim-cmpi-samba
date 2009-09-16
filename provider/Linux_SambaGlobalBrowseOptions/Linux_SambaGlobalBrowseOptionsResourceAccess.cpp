// =======================================================================
// Linux_SambaGlobalBrowseOptionsResourceAccess.cpp
//     created on Fri, 23 Jun 2006 using ECUTE 2.2.1
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
#include "Linux_SambaGlobalBrowseOptionsResourceAccess.h"

#include "smt_smb_ra_support.h"
#include "smt_smb_defaultvalues.h"

namespace genProvider {
   //----------------------------------------------------------------------------
  // manual written methods

  void setInstanceNameProperties(
      const char* aNameSpaceP,     
      Linux_SambaGlobalBrowseOptionsInstanceName& anInstanceName) {

    anInstanceName.setNamespace(aNameSpaceP);
    anInstanceName.setName(DEFAULT_GLOBAL_NAME);
    anInstanceName.setInstanceID(DEFAULT_INSTANCE_ID);
  }

  
  //----------------------------------------------------------------------------


  void setInstanceProperties(
      Linux_SambaGlobalBrowseOptionsManualInstance& aManualInstance) {
    
    char *option;
    option = get_global_option(BROWSEABLE);	
    if ( option )
      if(strcasecmp(option,YES) == 0)
	aManualInstance.setBrowsable( true );
      else
	aManualInstance.setBrowsable( false );
    
    option = get_global_option(DOMAIN_MASTER);	
    if ( option )
      if(strcasecmp(option,YES) == 0)
	aManualInstance.setDomainMaster( 1 );
      else
	if(strcasecmp(option,NO) == 0)
	  aManualInstance.setDomainMaster( 0 );
	else
	  aManualInstance.setDomainMaster( 2 );
  }

  //----------------------------------------------------------------------------

  //----------------------------------------------------------------------------
  //Linux_SambaGlobalBrowseOptionsResourceAccess::Linux_SambaGlobalBrowseOptionsResourceAccess();

  //----------------------------------------------------------------------------
  Linux_SambaGlobalBrowseOptionsResourceAccess::~Linux_SambaGlobalBrowseOptionsResourceAccess() {
    terminator();
  }
    
  // intrinsic methods

  //----------------------------------------------------------------------------
  void
  Linux_SambaGlobalBrowseOptionsResourceAccess::enumInstanceNames(
     const CmpiContext& aContext,
     const CmpiBroker& aBroker,
     const char* aNameSpaceP,
     Linux_SambaGlobalBrowseOptionsInstanceNameEnumeration& anInstanceNameEnumeration) {
      
    Linux_SambaGlobalBrowseOptionsInstanceName instanceName;
    setInstanceNameProperties(aNameSpaceP,instanceName);
    anInstanceNameEnumeration.addElement(instanceName); 
  }

  
  //----------------------------------------------------------------------------

  void
  Linux_SambaGlobalBrowseOptionsResourceAccess::enumInstances(
    const CmpiContext& aContext,
    const CmpiBroker& aBroker,
    const char* aNameSpaceP,
    const char** aPropertiesPP,
    Linux_SambaGlobalBrowseOptionsManualInstanceEnumeration& aManualInstanceEnumeration) {
    
    Linux_SambaGlobalBrowseOptionsManualInstance aManualInstance;
    Linux_SambaGlobalBrowseOptionsInstanceName instanceName;
    
    setInstanceNameProperties(aNameSpaceP,instanceName);
    aManualInstance.setInstanceName(instanceName);

    setInstanceProperties(aManualInstance);
    
    aManualInstanceEnumeration.addElement(aManualInstance);
  }

  
  //----------------------------------------------------------------------------

  Linux_SambaGlobalBrowseOptionsManualInstance 
  Linux_SambaGlobalBrowseOptionsResourceAccess::getInstance(
    const CmpiContext& aContext,
    const CmpiBroker& aBroker,
    const char** aPropertiesPP,
    const Linux_SambaGlobalBrowseOptionsInstanceName& anInstanceName) {

    if (strcasecmp(DEFAULT_GLOBAL_NAME,anInstanceName.getName())!=0 ||
        strcasecmp(DEFAULT_INSTANCE_ID,anInstanceName.getInstanceID())!=0) {
      throw CmpiStatus(CMPI_RC_ERR_NOT_FOUND,"Instance does not exist!");
    }

    Linux_SambaGlobalBrowseOptionsManualInstance aManualInstance;
    aManualInstance.setInstanceName(anInstanceName);
    
    setInstanceProperties(aManualInstance);
    
    return aManualInstance;
  }

  //----------------------------------------------------------------------------

  void
  Linux_SambaGlobalBrowseOptionsResourceAccess::setInstance(
     const CmpiContext& aContext,
     const CmpiBroker& aBroker,
     const char** aPropertiesPP,
     const Linux_SambaGlobalBrowseOptionsManualInstance& aManualInstance) {
    
    if (strcasecmp(DEFAULT_GLOBAL_NAME,aManualInstance.getInstanceName().getName())!=0 ||
        strcasecmp(DEFAULT_INSTANCE_ID,aManualInstance.getInstanceName().getInstanceID())!=0) {
      throw CmpiStatus(CMPI_RC_ERR_NOT_FOUND,"Instance does not exist!");
    }

    if ( aManualInstance.isBrowsableSet() ) {
      if(aManualInstance.getBrowsable())  
	set_global_option(BROWSEABLE,YES);
      else
	set_global_option(BROWSEABLE,NO);
    }
    
    if ( aManualInstance.isDomainMasterSet()){
      switch(aManualInstance.getDomainMaster()) {
      case 0:
	set_global_option(DOMAIN_MASTER, NO);
	break;
      case 1:
	set_global_option(DOMAIN_MASTER, YES);
	break;
      case 2:
	set_global_option(DOMAIN_MASTER, "auto");
	break;
      }
    }
  }
  
  
  //----------------------------------------------------------------------------
  /*
  Linux_SambaGlobalBrowseOptionsInstanceName
  Linux_SambaGlobalBrowseOptionsResourceAccess::createInstance(
    const CmpiContext& aContext,
    const CmpiBroker& aBroker,
    const Linux_SambaGlobalBrowseOptionsManualInstance& aManualInstance) { }
  */
  
  //----------------------------------------------------------------------------
  /*
  void
  Linux_SambaGlobalBrowseOptionsResourceAccess::deleteInstance(
    const CmpiContext& aContext,
    const CmpiBroker& aBroker,
    const Linux_SambaGlobalBrowseOptionsInstanceName& anInstanceName) { }
	*/
	

  
  // extrinsic methods

	
}


