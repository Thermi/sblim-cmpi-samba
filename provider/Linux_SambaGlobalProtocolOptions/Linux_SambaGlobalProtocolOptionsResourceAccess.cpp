// =======================================================================
// Linux_SambaGlobalProtocolOptionsResourceAccess.cpp
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
#include "Linux_SambaGlobalProtocolOptionsResourceAccess.h"

#include "smt_smb_ra_support.h"
#include "smt_smb_defaultvalues.h"

namespace genProvider {
  
  //----------------------------------------------------------------------------
  // manual written methods

  static void setInstanceNameProperties(
      const char* aNameSpaceP, 
      Linux_SambaGlobalProtocolOptionsInstanceName& anInstanceName) {
    
    anInstanceName.setNamespace(aNameSpaceP);
    anInstanceName.setName(DEFAULT_GLOBAL_NAME);
    anInstanceName.setInstanceID(DEFAULT_INSTANCE_ID);
  }


  //----------------------------------------------------------------------------


  static void setInstanceProperties(
      Linux_SambaGlobalProtocolOptionsManualInstance& aManualInstance) {
    
    char *option;
    
    option = get_global_option(ACL_COMPATIBILITY);	
    if ( option )
      if(strcasecmp(option,"Auto") == 0)
	aManualInstance.setAclCompatibility( 0 );
      else 
	if(strcasecmp(option,"winnt") == 0)
	  aManualInstance.setAclCompatibility( 1 );
	else 
	  if(strcasecmp(option,"win2k") == 0)
	    aManualInstance.setAclCompatibility( 2 );
    
    option = get_global_option(EA_SUPPORT);
    if( option )
      if(strcasecmp(option,YES) == 0)
	aManualInstance.setEASupport( true );
      else
	aManualInstance.setEASupport( false );
    
    option = get_global_option(NT_ACL_SUPPORT);
    if( option )
      if(strcasecmp(option,YES) == 0)
	aManualInstance.setNTACLSupport( true );
      else
	aManualInstance.setNTACLSupport( false );
  }


  //----------------------------------------------------------------------------

  
  //----------------------------------------------------------------------------
  //Linux_SambaGlobalProtocolOptionsResourceAccess::Linux_SambaGlobalProtocolOptionsResourceAccess();

  //----------------------------------------------------------------------------
  Linux_SambaGlobalProtocolOptionsResourceAccess::~Linux_SambaGlobalProtocolOptionsResourceAccess() {
    terminator();
  }
    
  // intrinsic methods

  //----------------------------------------------------------------------------
  void
  Linux_SambaGlobalProtocolOptionsResourceAccess::enumInstanceNames(
     const CmpiContext& aContext,
     const CmpiBroker& aBroker,
     const char* aNameSpaceP,
     Linux_SambaGlobalProtocolOptionsInstanceNameEnumeration& anInstanceNameEnumeration) {
      
    Linux_SambaGlobalProtocolOptionsInstanceName instanceName;
    setInstanceNameProperties(aNameSpaceP,instanceName);
    anInstanceNameEnumeration.addElement(instanceName);
  }

  
  //----------------------------------------------------------------------------

  void
  Linux_SambaGlobalProtocolOptionsResourceAccess::enumInstances(
    const CmpiContext& aContext,
    const CmpiBroker& aBroker,
     const char* aNameSpaceP,
     const char** aPropertiesPP,
  	 Linux_SambaGlobalProtocolOptionsManualInstanceEnumeration& aManualInstanceEnumeration) {
    
    Linux_SambaGlobalProtocolOptionsManualInstance aManualInstance;
    Linux_SambaGlobalProtocolOptionsInstanceName instanceName;
    
    setInstanceNameProperties(aNameSpaceP,instanceName);
    aManualInstance.setInstanceName(instanceName);

    setInstanceProperties(aManualInstance);
    
    aManualInstanceEnumeration.addElement(aManualInstance);
  }

  
  //----------------------------------------------------------------------------


  Linux_SambaGlobalProtocolOptionsManualInstance 
  Linux_SambaGlobalProtocolOptionsResourceAccess::getInstance(
    const CmpiContext& aContext,
    const CmpiBroker& aBroker,
    const char** aPropertiesPP,
    const Linux_SambaGlobalProtocolOptionsInstanceName& anInstanceName) {

    if (strcasecmp(DEFAULT_GLOBAL_NAME,anInstanceName.getName())!=0 ||
        strcasecmp(DEFAULT_INSTANCE_ID,anInstanceName.getInstanceID())!=0) {
      throw CmpiStatus(CMPI_RC_ERR_NOT_FOUND,"Instance does not exist!");
    }

    Linux_SambaGlobalProtocolOptionsManualInstance aManualInstance;
    aManualInstance.setInstanceName(anInstanceName);
    
    setInstanceProperties(aManualInstance);
    
    return aManualInstance; 
  }

  //----------------------------------------------------------------------------

  void
  Linux_SambaGlobalProtocolOptionsResourceAccess::setInstance(
     const CmpiContext& aContext,
     const CmpiBroker& aBroker,
     const char** aPropertiesPP,
     const Linux_SambaGlobalProtocolOptionsManualInstance& aManualInstance) {
    
    if (strcasecmp(DEFAULT_GLOBAL_NAME,aManualInstance.getInstanceName().getName())!=0 ||
        strcasecmp(DEFAULT_INSTANCE_ID,aManualInstance.getInstanceName().getInstanceID())!=0) {
      throw CmpiStatus(CMPI_RC_ERR_NOT_FOUND,"Instance does not exist!");
    }

    if ( aManualInstance.isAclCompatibilitySet()) {
      switch(aManualInstance.getAclCompatibility()) {
      case 0:
	set_global_option(ACL_COMPATIBILITY, "Auto");
	break;
      case 1:
	set_global_option(ACL_COMPATIBILITY, "winnt");
	break;
      case 2:
	set_global_option(ACL_COMPATIBILITY, "win2k");
	break;
      }
    }
    
    if ( aManualInstance.isEASupportSet())
      if(aManualInstance.getEASupport())
	set_global_option(EA_SUPPORT,YES);
      else
	set_global_option(EA_SUPPORT,NO);
    
    if ( aManualInstance.isNTACLSupportSet())
      if(aManualInstance.getNTACLSupport())
	set_global_option(NT_ACL_SUPPORT,YES);
      else
	set_global_option(NT_ACL_SUPPORT,NO);
  }
  
  
  //----------------------------------------------------------------------------
  /*
  Linux_SambaGlobalProtocolOptionsInstanceName
  Linux_SambaGlobalProtocolOptionsResourceAccess::createInstance(
    const CmpiContext& aContext,
    const CmpiBroker& aBroker,
    const Linux_SambaGlobalProtocolOptionsManualInstance& aManualInstance) { }
  */
  
  //----------------------------------------------------------------------------
  /*
  void
  Linux_SambaGlobalProtocolOptionsResourceAccess::deleteInstance(
    const CmpiContext& aContext,
    const CmpiBroker& aBroker,
    const Linux_SambaGlobalProtocolOptionsInstanceName& anInstanceName) { }
	*/
	

  
  // extrinsic methods

	
}


