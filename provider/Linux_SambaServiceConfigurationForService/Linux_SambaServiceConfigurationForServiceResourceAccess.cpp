// =======================================================================
// Linux_SambaServiceConfigurationForServiceResourceAccess.cpp
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
#include "Linux_SambaServiceConfigurationForServiceResourceAccess.h"

#include "smt_smb_ra_support.h"
#include "smt_smb_defaultvalues.h"

namespace genProvider {
  
  //----------------------------------------------------------------------------
  //Linux_SambaServiceConfigurationForServiceResourceAccess::Linux_SambaServiceConfigurationForServiceResourceAccess();

  //----------------------------------------------------------------------------
  Linux_SambaServiceConfigurationForServiceResourceAccess::~Linux_SambaServiceConfigurationForServiceResourceAccess() {
    terminator();
  }
    
  // intrinsic methods
  /*
  //----------------------------------------------------------------------------
  void
  Linux_SambaServiceConfigurationForServiceResourceAccess::enumInstanceNames(
     const CmpiContext& aContext,
     const CmpiBroker& aBroker,
     const char* aNameSpaceP,
     Linux_SambaServiceConfigurationForServiceInstanceNameEnumeration& anInstanceNameEnumeration) {
      
    int instanceNameN = 1;
    for (int x=0; x < instanceNameN; ++x) {
      
      //place here the code retrieving your instanceName
      
      Linux_SambaServiceConfigurationForServiceInstanceName instanceName;
      
    }      
  
  }
  */
  
  //----------------------------------------------------------------------------
  /*
  void
  Linux_SambaServiceConfigurationForServiceResourceAccess::enumInstances(
    const CmpiContext& aContext,
    const CmpiBroker& aBroker,
     const char* aNameSpaceP,
     const char** aPropertiesPP,
  	 Linux_SambaServiceConfigurationForServiceManualInstanceEnumeration& aManualInstanceEnumeration) { }
  */
  
  //----------------------------------------------------------------------------
  /*
  Linux_SambaServiceConfigurationForServiceManualInstance 
  Linux_SambaServiceConfigurationForServiceResourceAccess::getInstance(
    const CmpiContext& aContext,
    const CmpiBroker& aBroker,
    const char** aPropertiesPP,
    const Linux_SambaServiceConfigurationForServiceInstanceName& anInstanceName) {

    Linux_SambaServiceConfigurationForServiceManualInstance manualInstance;

  
  }
  */
  //----------------------------------------------------------------------------
  /*
  void
  Linux_SambaServiceConfigurationForServiceResourceAccess::setInstance(
     const CmpiContext& aContext,
     const CmpiBroker& aBroker,
     const char** aPropertiesPP,
     const Linux_SambaServiceConfigurationForServiceManualInstance& aManualInstance) { }
  */
  
  //----------------------------------------------------------------------------
  /*
  Linux_SambaServiceConfigurationForServiceInstanceName
  Linux_SambaServiceConfigurationForServiceResourceAccess::createInstance(
    const CmpiContext& aContext,
    const CmpiBroker& aBroker,
    const Linux_SambaServiceConfigurationForServiceManualInstance& aManualInstance) { }
  */
  
  //----------------------------------------------------------------------------
  /*
  void
  Linux_SambaServiceConfigurationForServiceResourceAccess::deleteInstance(
    const CmpiContext& aContext,
    const CmpiBroker& aBroker,
    const Linux_SambaServiceConfigurationForServiceInstanceName& anInstanceName) { }
	*/
	

  // Association Interface
  //----------------------------------------------------------------------------

  void Linux_SambaServiceConfigurationForServiceResourceAccess::referencesConfiguration( 
    const CmpiContext& aContext,  
    const CmpiBroker& aBroker,
    const char* aNameSpaceP,
    const char** aPropertiesPP,
    const Linux_SambaServiceInstanceName& aSourceInstanceName,
    Linux_SambaServiceConfigurationForServiceManualInstanceEnumeration& aManualInstanceEnumeration) {
    
    if(strcasecmp(aSourceInstanceName.getName(),DEFAULT_SERVICE_NAME)!=0) {
      throw CmpiStatus(CMPI_RC_ERR_INVALID_PARAMETER,"The Instance does not exist!");
    }

    Linux_SambaServiceConfigurationForServiceManualInstance manualInstance;
    Linux_SambaServiceConfigurationForServiceInstanceName instName;
    instName.setNamespace(aNameSpaceP);
    instName.setElement(aSourceInstanceName);
    
    Linux_SambaServiceConfigurationInstanceName confInstName;
    confInstName.setNamespace(aNameSpaceP);
    confInstName.setName(DEFAULT_SERVICE_NAME);
    
    instName.setConfiguration(confInstName);
    
    manualInstance.setInstanceName(instName);
    aManualInstanceEnumeration.addElement(manualInstance);
  }

  
  //----------------------------------------------------------------------------

  void Linux_SambaServiceConfigurationForServiceResourceAccess::referencesElement( 
    const CmpiContext& aContext,  
    const CmpiBroker& aBroker,
    const char* aNameSpaceP,
    const char** aPropertiesPP,
    const Linux_SambaServiceConfigurationInstanceName& aSourceInstanceName,
    Linux_SambaServiceConfigurationForServiceManualInstanceEnumeration& aManualInstanceEnumeration) {
   
    if(strcasecmp(aSourceInstanceName.getName(),DEFAULT_SERVICE_NAME)!=0) {
      throw CmpiStatus(CMPI_RC_ERR_INVALID_PARAMETER,"The Instance does not exist!");
    }
 
    Linux_SambaServiceConfigurationForServiceManualInstance manualInstance;
    Linux_SambaServiceConfigurationForServiceInstanceName instName;
    instName.setNamespace(aNameSpaceP);
    instName.setConfiguration(aSourceInstanceName);
    
    Linux_SambaServiceInstanceName elemInstanceName;
    elemInstanceName.setNamespace(aNameSpaceP);
    elemInstanceName.setName(DEFAULT_SERVICE_NAME);
    elemInstanceName.setCreationClassName(DEFAULT_CREATION_CLASS_NAME);
    elemInstanceName.setSystemCreationClassName(DEFAULT_SYSTEM_CREATION_CLASS_NAME);
    elemInstanceName.setSystemName(DEFAULT_SYSTEM_NAME);
    
    instName.setElement(elemInstanceName);
    
    manualInstance.setInstanceName(instName);
    aManualInstanceEnumeration.addElement(manualInstance);
  }

  
  //----------------------------------------------------------------------------

  void Linux_SambaServiceConfigurationForServiceResourceAccess::associatorsConfiguration( 
    const CmpiContext& aContext,  
    const CmpiBroker& aBroker,
    const char* aNameSpaceP,
    const char** aPropertiesPP,
    const Linux_SambaServiceInstanceName& aSourceInstanceName,
    Linux_SambaServiceConfigurationInstanceEnumeration& anInstanceEnumeration) {
    
    if(strcasecmp(aSourceInstanceName.getName(),DEFAULT_SERVICE_NAME)!=0) {
      throw CmpiStatus(CMPI_RC_ERR_INVALID_PARAMETER,"The Instance does not exist!");
    } 

    Linux_SambaServiceConfigurationInstance instance;
    
    Linux_SambaServiceConfigurationInstanceName elemInstanceName;
    elemInstanceName.setNamespace(aNameSpaceP);
    elemInstanceName.setName(DEFAULT_SERVICE_NAME);
    
    instance.setInstanceName(elemInstanceName);
    instance.setConfigurationFile(DEFAULT_CONFIGURATION_FILE);
    
    anInstanceEnumeration.addElement(instance);
  }

  
  //----------------------------------------------------------------------------

  void Linux_SambaServiceConfigurationForServiceResourceAccess::associatorsElement( 
    const CmpiContext& aContext,  
    const CmpiBroker& aBroker,
    const char* aNameSpaceP,
    const char** aPropertiesPP,
    const Linux_SambaServiceConfigurationInstanceName& aSourceInstanceName,
    Linux_SambaServiceInstanceEnumeration& anInstanceEnumeration) {
    
    if(strcasecmp(aSourceInstanceName.getName(),DEFAULT_SERVICE_NAME)!=0) {
      throw CmpiStatus(CMPI_RC_ERR_INVALID_PARAMETER,"The Instance does not exist!");
    }

    Linux_SambaServiceInstance instance;
    
    Linux_SambaServiceInstanceName elemInstanceName;
    elemInstanceName.setNamespace(aNameSpaceP);
    elemInstanceName.setName(DEFAULT_SERVICE_NAME);
    elemInstanceName.setCreationClassName(DEFAULT_CREATION_CLASS_NAME);
    elemInstanceName.setSystemCreationClassName(DEFAULT_SYSTEM_CREATION_CLASS_NAME);
    elemInstanceName.setSystemName(DEFAULT_SYSTEM_NAME);
    
    instance.setInstanceName(elemInstanceName);
    
    anInstanceEnumeration.addElement(instance);
  }

   
  
  // extrinsic methods

	
}


