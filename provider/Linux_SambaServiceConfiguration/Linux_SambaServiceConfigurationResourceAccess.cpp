// =======================================================================
// Linux_SambaServiceConfigurationResourceAccess.cpp
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
#include "Linux_SambaServiceConfigurationResourceAccess.h"

#include "smt_smb_ra_support.h"
#include "smt_smb_defaultvalues.h"

namespace genProvider {


  //----------------------------------------------------------------------------
  // manual written methods
  
  static void setInstanceNameProperties(
      const char* aNameSpaceP, 
      Linux_SambaServiceConfigurationInstanceName& anInstanceName) {
    
    anInstanceName.setNamespace(aNameSpaceP);
    anInstanceName.setName(DEFAULT_SERVICE_NAME);
  };
  
  //----------------------------------------------------------------------------


  //----------------------------------------------------------------------------
  //Linux_SambaServiceConfigurationResourceAccess::Linux_SambaServiceConfigurationResourceAccess();

  //----------------------------------------------------------------------------
  Linux_SambaServiceConfigurationResourceAccess::~Linux_SambaServiceConfigurationResourceAccess() {
    terminator();
  }
    
  // intrinsic methods

  //----------------------------------------------------------------------------
  void
  Linux_SambaServiceConfigurationResourceAccess::enumInstanceNames(
     const CmpiContext& aContext,
     const CmpiBroker& aBroker,
     const char* aNameSpaceP,
     Linux_SambaServiceConfigurationInstanceNameEnumeration& anInstanceNameEnumeration) {
      
    Linux_SambaServiceConfigurationInstanceName instanceName;
    setInstanceNameProperties(aNameSpaceP,instanceName);
    
    anInstanceNameEnumeration.addElement(instanceName); 
  }

  
  //----------------------------------------------------------------------------

  void
  Linux_SambaServiceConfigurationResourceAccess::enumInstances(
    const CmpiContext& aContext,
    const CmpiBroker& aBroker,
    const char* aNameSpaceP,
    const char** aPropertiesPP,
    Linux_SambaServiceConfigurationManualInstanceEnumeration& aManualInstanceEnumeration) {
    
    Linux_SambaServiceConfigurationManualInstance aManualInstance;
    Linux_SambaServiceConfigurationInstanceName instanceName;
    
    setInstanceNameProperties(aNameSpaceP,instanceName);
    aManualInstance.setInstanceName(instanceName);
    aManualInstance.setConfigurationFile(DEFAULT_CONFIGURATION_FILE);
    
    aManualInstanceEnumeration.addElement(aManualInstance);
  }

  
  //----------------------------------------------------------------------------

  Linux_SambaServiceConfigurationManualInstance 
  Linux_SambaServiceConfigurationResourceAccess::getInstance(
    const CmpiContext& aContext,
    const CmpiBroker& aBroker,
    const char** aPropertiesPP,
    const Linux_SambaServiceConfigurationInstanceName& anInstanceName) {

    Linux_SambaServiceConfigurationManualInstance aManualInstance;
    aManualInstance.setInstanceName(anInstanceName);
    aManualInstance.setConfigurationFile(DEFAULT_CONFIGURATION_FILE);

    return aManualInstance;
  }

  //----------------------------------------------------------------------------
  /*
  void
  Linux_SambaServiceConfigurationResourceAccess::setInstance(
     const CmpiContext& aContext,
     const CmpiBroker& aBroker,
     const char** aPropertiesPP,
     const Linux_SambaServiceConfigurationManualInstance& aManualInstance) { }
  */
  
  //----------------------------------------------------------------------------
  /*
  Linux_SambaServiceConfigurationInstanceName
  Linux_SambaServiceConfigurationResourceAccess::createInstance(
    const CmpiContext& aContext,
    const CmpiBroker& aBroker,
    const Linux_SambaServiceConfigurationManualInstance& aManualInstance) { }
  */
  
  //----------------------------------------------------------------------------
  /*
  void
  Linux_SambaServiceConfigurationResourceAccess::deleteInstance(
    const CmpiContext& aContext,
    const CmpiBroker& aBroker,
    const Linux_SambaServiceConfigurationInstanceName& anInstanceName) { }
	*/
	

  
  // extrinsic methods

	
}


