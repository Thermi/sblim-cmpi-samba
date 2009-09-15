// =======================================================================
// Linux_SambaShareProtocolOptionsResourceAccess.cpp
//     created on Mon, 26 Jun 2006 using ECUTE 2.2.1
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
#include "Linux_SambaShareProtocolOptionsResourceAccess.h"

#include "smt_smb_ra_support.h"
#include "smt_smb_defaultvalues.h"

namespace genProvider {
  
  
  //----------------------------------------------------------------------------
  // manual written methods
  
  static void setInstanceNameProperties(
      const char* aNameSpaceP, 
      char *instanceName, 
      Linux_SambaShareProtocolOptionsInstanceName& anInstanceName) {
    
    anInstanceName.setNamespace(aNameSpaceP);
    anInstanceName.setName(instanceName);
    anInstanceName.setInstanceID(DEFAULT_INSTANCE_ID);
  };

  
  //----------------------------------------------------------------------------

  
  static void setInstanceProperties(
      Linux_SambaShareProtocolOptionsManualInstance& aManualInstance) {
    
    char *option;
    
    option = get_option(aManualInstance.getInstanceName().getName(),ACL_COMPATIBILITY);	
    if ( option )
      if(strcasecmp(option,"Auto") == 0)
	aManualInstance.setAclCompatibility( 0 );
      else 
	if(strcasecmp(option,"winnt") == 0)
	  aManualInstance.setAclCompatibility( 1 );
	else 
	  if(strcasecmp(option,"win2k") == 0)
	    aManualInstance.setAclCompatibility( 2 );
    
    option = get_option(aManualInstance.getInstanceName().getName(),EA_SUPPORT);
    if( option )
      if(strcasecmp(option,YES) == 0)
	aManualInstance.setEASupport( true );
      else
	aManualInstance.setEASupport( false );
    
    option = get_option(aManualInstance.getInstanceName().getName(),NT_ACL_SUPPORT);
    if( option )
      if(strcasecmp(option,YES) == 0)
	aManualInstance.setNTACLSupport( true );
      else
	aManualInstance.setNTACLSupport( false );
  }; 
  
    
  //----------------------------------------------------------------------------

  
  static void setRAProperties(
      Linux_SambaShareProtocolOptionsManualInstance aManualInstance) {
    
    if ( aManualInstance.isAclCompatibilitySet()) {
      switch(aManualInstance.getAclCompatibility()) {
      case 0:
	set_share_option(aManualInstance.getInstanceName().getName(),ACL_COMPATIBILITY, "Auto");
	break;
      case 1:
	set_share_option(aManualInstance.getInstanceName().getName(),ACL_COMPATIBILITY, "winnt");
	break;
      case 2:
	set_share_option(aManualInstance.getInstanceName().getName(),ACL_COMPATIBILITY, "win2k");
	break;
      }
    }
    
    if ( aManualInstance.isEASupportSet())
      if(aManualInstance.getEASupport())
	set_share_option(aManualInstance.getInstanceName().getName(),EA_SUPPORT,YES);
      else
	set_share_option(aManualInstance.getInstanceName().getName(),EA_SUPPORT,NO);
    
    if ( aManualInstance.isNTACLSupportSet())
      if(aManualInstance.getNTACLSupport())
	set_share_option(aManualInstance.getInstanceName().getName(),NT_ACL_SUPPORT,YES);
      else
	set_share_option(aManualInstance.getInstanceName().getName(),NT_ACL_SUPPORT,NO);
  };

  //----------------------------------------------------------------------------
  
  
  //----------------------------------------------------------------------------
  //Linux_SambaShareProtocolOptionsResourceAccess::Linux_SambaShareProtocolOptionsResourceAccess();

  //----------------------------------------------------------------------------
  Linux_SambaShareProtocolOptionsResourceAccess::~Linux_SambaShareProtocolOptionsResourceAccess() {
    terminator();
  }
    
  // intrinsic methods

  //----------------------------------------------------------------------------
  void
  Linux_SambaShareProtocolOptionsResourceAccess::enumInstanceNames(
     const CmpiContext& aContext,
     const CmpiBroker& aBroker,
     const char* aNameSpaceP,
     Linux_SambaShareProtocolOptionsInstanceNameEnumeration& anInstanceNameEnumeration) {
      
    char ** shares = get_shares_list();
    
    if(shares){
      for (int i=0; shares[i]; i++){
	Linux_SambaShareProtocolOptionsInstanceName instanceName;
	setInstanceNameProperties(aNameSpaceP,shares[i],instanceName);
	anInstanceNameEnumeration.addElement(instanceName); 
      }
    }
  }

  
  //----------------------------------------------------------------------------

  void
  Linux_SambaShareProtocolOptionsResourceAccess::enumInstances(
    const CmpiContext& aContext,
    const CmpiBroker& aBroker,
    const char* aNameSpaceP,
    const char** aPropertiesPP,
    Linux_SambaShareProtocolOptionsManualInstanceEnumeration& aManualInstanceEnumeration) {
    
    char ** shares = get_shares_list();
    
    if(shares){
      for (int i=0; shares[i]; i++){
	Linux_SambaShareProtocolOptionsManualInstance aManualInstance;
	Linux_SambaShareProtocolOptionsInstanceName instanceName;
	
	setInstanceNameProperties(aNameSpaceP,shares[i],instanceName);
	aManualInstance.setInstanceName(instanceName);
	
	setInstanceProperties(aManualInstance);
	
	aManualInstanceEnumeration.addElement(aManualInstance);
      }
    }
  }

  
  //----------------------------------------------------------------------------

  Linux_SambaShareProtocolOptionsManualInstance 
  Linux_SambaShareProtocolOptionsResourceAccess::getInstance(
    const CmpiContext& aContext,
    const CmpiBroker& aBroker,
    const char** aPropertiesPP,
    const Linux_SambaShareProtocolOptionsInstanceName& anInstanceName) {

    if (!service_exists(anInstanceName.getName()) ||
        strcasecmp(DEFAULT_INSTANCE_ID,anInstanceName.getInstanceID())!=0) {
      throw CmpiStatus(CMPI_RC_ERR_NOT_FOUND,"Instance does not exist!");
    }

    Linux_SambaShareProtocolOptionsManualInstance aManualInstance;
    aManualInstance.setInstanceName(anInstanceName);
    
    setInstanceProperties(aManualInstance);
    
    return aManualInstance;
  }

  //----------------------------------------------------------------------------

  void
  Linux_SambaShareProtocolOptionsResourceAccess::setInstance(
     const CmpiContext& aContext,
     const CmpiBroker& aBroker,
     const char** aPropertiesPP,
     const Linux_SambaShareProtocolOptionsManualInstance& aManualInstance) {
    
    if (!service_exists(aManualInstance.getInstanceName().getName()) ||
        strcasecmp(DEFAULT_INSTANCE_ID,aManualInstance.getInstanceName().getInstanceID())!=0) {
      throw CmpiStatus(CMPI_RC_ERR_NOT_FOUND,"Instance does not exist!");
    }

    setRAProperties(aManualInstance);
  }

  
  //----------------------------------------------------------------------------
  /*
  Linux_SambaShareProtocolOptionsInstanceName
  Linux_SambaShareProtocolOptionsResourceAccess::createInstance(
    const CmpiContext& aContext,
    const CmpiBroker& aBroker,
    const Linux_SambaShareProtocolOptionsManualInstance& aManualInstance) {
    
    setRAProperties(aManualInstance);
    
    return aManualInstance.getInstanceName();
  }
  */
  
  //----------------------------------------------------------------------------
  /*
  void
  Linux_SambaShareProtocolOptionsResourceAccess::deleteInstance(
    const CmpiContext& aContext,
    const CmpiBroker& aBroker,
    const Linux_SambaShareProtocolOptionsInstanceName& anInstanceName) {
    
    if(service_exists(anInstanceName.getName())){
      set_share_option(anInstanceName.getName(),ACL_COMPATIBILITY,NULL);
      set_share_option(anInstanceName.getName(),EA_SUPPORT,NULL);
      set_share_option(anInstanceName.getName(),NT_ACL_SUPPORT,NULL);
      
    }else
      throw CmpiStatus(CMPI_RC_ERR_INVALID_PARAMETER,"Instance doesn't exist!");
  }
  */
	

  
  // extrinsic methods

	
}


