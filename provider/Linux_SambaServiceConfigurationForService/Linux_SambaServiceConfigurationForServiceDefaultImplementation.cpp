// =======================================================================
// Linux_SambaServiceConfigurationForServiceDefaultImplementation.cpp
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

#include "Linux_SambaServiceConfigurationForServiceDefaultImplementation.h"
#include "Linux_SambaServiceConfigurationForServiceRepositoryInstance.h"
#include <iostream>

namespace genProvider {

  /* intrinsic methods */
  //----------------------------------------------------------------------------	
  void
  Linux_SambaServiceConfigurationForServiceDefaultImplementation::enumInstanceNames(
    const CmpiContext& aContext,
    const CmpiBroker& aBroker,
    const char* aNameSpaceP,
    Linux_SambaServiceConfigurationForServiceInstanceNameEnumeration& anInstanceNameEnumeration) {

#ifdef DEBUG
   	std::cout << "enumInstanceNames not supported for Linux_SambaServiceConfigurationForService" << std::endl;
#endif   	

   	throw CmpiErrorFormater::getErrorException(
   	  CmpiErrorFormater::NOT_IMPLEMENTED,
   	  "enumInstanceEnumeration",
   	  "Linux_SambaServiceConfigurationForService");   

  }

  //----------------------------------------------------------------------------	
  void 
  Linux_SambaServiceConfigurationForServiceDefaultImplementation::enumInstances(
    const CmpiContext& aContext,
    const CmpiBroker& aBroker,
    const char* aNameSpaceP,
    const char** aPropertiesPP,
    Linux_SambaServiceConfigurationForServiceManualInstanceEnumeration& anInstanceEnumeration) {

#ifdef DEBUG
    std::cout << "Using default enumInstances implementation for Linux_SambaServiceConfigurationForService" << std::endl;
    std::cout << "Let's get the instanceNames" << std::endl;
#endif    

    Linux_SambaServiceConfigurationForServiceInstanceNameEnumeration namesEnumeration;
    enumInstanceNames(aContext,aBroker,aNameSpaceP,namesEnumeration);

#ifdef DEBUG
    std::cout << "Getting each instance" << std::endl;
#endif    
    
    while (namesEnumeration.hasNext()) {
    
      Linux_SambaServiceConfigurationForServiceInstanceName instanceName = namesEnumeration.getNext();
    
      Linux_SambaServiceConfigurationForServiceRepositoryInstance repositoryInstance;

      // try to fetch repository instance
      try {
        Linux_SambaServiceConfigurationForServiceInstanceName repositoryInstanceName(instanceName);
        repositoryInstanceName.setNamespace("IBMShadow/cimv2");
        CmpiObjectPath repositoryCmpiObjectPath = repositoryInstanceName.getObjectPath();
        CmpiBroker cmpiBroker(aBroker);
        CmpiInstance repositoryCmpiInstance = cmpiBroker.getInstance(
            aContext,
            repositoryCmpiObjectPath,
            aPropertiesPP);
        Linux_SambaServiceConfigurationForServiceRepositoryInstance localRepositoryInstance(
      	  repositoryCmpiInstance,
          "IBMShadow/cimv2");
        repositoryInstance = localRepositoryInstance;
      } catch (const CmpiStatus& rc) { }                             
    
#ifdef DEBUG
    	std::cout << "Getting an instance for instanceName" << std::endl;
#endif
    	
    	Linux_SambaServiceConfigurationForServiceManualInstance instance = getInstance(
    	  aContext,
    	  aBroker,
    	  aPropertiesPP,
    	  instanceName);

      // add the static data


#ifdef DEBUG
    	std::cout << "adding instance to enum" << std::endl;
#endif
    	
    	anInstanceEnumeration.addElement(instance);

#ifdef DEBUG
    	std::cout << "Added!" << std::endl;
#endif
    	
    }

  }

  //----------------------------------------------------------------------------	
  Linux_SambaServiceConfigurationForServiceManualInstance 
  Linux_SambaServiceConfigurationForServiceDefaultImplementation::getInstance(
    const CmpiContext& aContext,
    const CmpiBroker& aBroker,
    const char** aPropertiesPP,
    const Linux_SambaServiceConfigurationForServiceInstanceName& anInstanceName) {

#ifdef DEBUG
    std::cout << "getInstance not supported for Linux_SambaServiceConfigurationForService" << std::endl;
#endif
    	

    throw CmpiErrorFormater::getErrorException(
   	  CmpiErrorFormater::NOT_IMPLEMENTED,
   	  "getInstance",
   	  "Linux_SambaServiceConfigurationForService");

  }
  	
  //----------------------------------------------------------------------------	
  void 
  Linux_SambaServiceConfigurationForServiceDefaultImplementation::setInstance(
    const CmpiContext& aContext,
    const CmpiBroker& aBroker,
    const char** aPropertiesPP,
    const Linux_SambaServiceConfigurationForServiceManualInstance& aManualInstance) {
  
#ifdef DEBUG
    std::cout << "setInstance not supported for Linux_SambaServiceConfigurationForService" << std::endl;
#endif
    	
   
    throw CmpiErrorFormater::getErrorException(
   	  CmpiErrorFormater::NOT_IMPLEMENTED,
   	  "setInstance",
   	  "Linux_SambaServiceConfigurationForService");
   	 
  }
  	
  //----------------------------------------------------------------------------	
  Linux_SambaServiceConfigurationForServiceInstanceName  
  Linux_SambaServiceConfigurationForServiceDefaultImplementation::createInstance(
    const CmpiContext& aContext, 
    const CmpiBroker& aBroker,
    const Linux_SambaServiceConfigurationForServiceManualInstance& aManualInstance) {

#ifdef DEBUG
   	std::cout << "createInstance not supported for Linux_SambaServiceConfigurationForService" << std::endl;
#endif

    throw CmpiErrorFormater::getErrorException(
   	 CmpiErrorFormater::NOT_IMPLEMENTED,
   	 "createInstance",
   	 "Linux_SambaServiceConfigurationForService");

  }

  //----------------------------------------------------------------------------	
  void 
  Linux_SambaServiceConfigurationForServiceDefaultImplementation::deleteInstance(
    const CmpiContext& aContext, 
    const CmpiBroker& aBroker,
    const Linux_SambaServiceConfigurationForServiceInstanceName& anInstanceName) {

#ifdef DEBUG
   	std::cout << "deleteInstance not supported for Linux_SambaServiceConfigurationForService" << std::endl;
#endif

    throw CmpiErrorFormater::getErrorException(
      CmpiErrorFormater::NOT_IMPLEMENTED,
      "deleteInstance",
      "Linux_SambaServiceConfigurationForService");

  }

  
  // Association Interface

  //----------------------------------------------------------------------------
  void
  Linux_SambaServiceConfigurationForServiceDefaultImplementation::referencesConfiguration( 
    const CmpiContext& aContext,  
    const CmpiBroker& aBroker,
    const char* aNameSpaceP,
    const char** aPropertiesPP,
    const Linux_SambaServiceInstanceName& aSourceInstance,
    Linux_SambaServiceConfigurationForServiceManualInstanceEnumeration& aManualInstanceEnumeration) {
    
    throw CmpiErrorFormater::getErrorException(
      CmpiErrorFormater::NOT_IMPLEMENTED,
      "References(Configuration)",
      "Linux_SambaServiceConfigurationForService");

  }

  //----------------------------------------------------------------------------
  void
  Linux_SambaServiceConfigurationForServiceDefaultImplementation::referencesElement( 
    const CmpiContext& aContext,  
    const CmpiBroker& aBroker,
    const char* aNameSpaceP,
    const char** aPropertiesPP,
    const Linux_SambaServiceConfigurationInstanceName& aSourceInstance,
    Linux_SambaServiceConfigurationForServiceManualInstanceEnumeration& aManualInstanceEnumeration) {
    
    throw CmpiErrorFormater::getErrorException(
      CmpiErrorFormater::NOT_IMPLEMENTED,
      "References(Element)",
      "Linux_SambaServiceConfigurationForService");

  }

  //----------------------------------------------------------------------------
  void
  Linux_SambaServiceConfigurationForServiceDefaultImplementation::associatorsConfiguration(
    const CmpiContext& aContext,  
    const CmpiBroker& aBroker,
    const char* aNameSpaceP,
    const char** aPropertiesPP,
    const Linux_SambaServiceInstanceName& aSourceInstance,
    Linux_SambaServiceConfigurationInstanceEnumeration& anInstanceEnumeration) {
      
#ifdef DEBUG
    std::cout<<"Linux_SambaServiceConfigurationForService : associatorsLinux_SambaServiceConfiguration() ... returns one instance"<<std::endl;
#endif    
      
    Linux_SambaServiceConfigurationForServiceManualInstanceEnumeration manualInstanceEnumeration;
      
    referencesConfiguration(
      aContext,
      aBroker,
      aSourceInstance.getNamespace(), 
      aPropertiesPP,
      aSourceInstance,
      manualInstanceEnumeration);

    Linux_SambaServiceConfigurationExternal external(aBroker,aContext);

    while (manualInstanceEnumeration.hasNext()) {
      const Linux_SambaServiceConfigurationForServiceManualInstance manualInstance = manualInstanceEnumeration.getNext();
      const Linux_SambaServiceConfigurationForServiceInstanceName instanceName = manualInstance.getInstanceName();
      const Linux_SambaServiceConfigurationInstanceName Configuration = instanceName.getConfiguration();
      Linux_SambaServiceConfigurationInstance instance = external.getInstance(aPropertiesPP,Configuration);
      anInstanceEnumeration.addElement(instance);
    }
  
  }

  //----------------------------------------------------------------------------
  void
  Linux_SambaServiceConfigurationForServiceDefaultImplementation::associatorsElement( 
    const CmpiContext& aContext,  
    const CmpiBroker& aBroker,
    const char* aNameSpaceP,
    const char** aPropertiesPP,
    const Linux_SambaServiceConfigurationInstanceName& aSourceInstance,
    Linux_SambaServiceInstanceEnumeration& anInstanceEnumeration) {
     
#ifdef DEBUG
    std::cout << "Linux_SambaServiceConfigurationForService : associatorsLinux_SambaService() ... returns one instance" << std::endl;
#endif    
      
    Linux_SambaServiceConfigurationForServiceManualInstanceEnumeration manualInstanceEnumeration;
      
    referencesElement(
      aContext,
      aBroker,
      aSourceInstance.getNamespace(), 
      aPropertiesPP,
      aSourceInstance,
      manualInstanceEnumeration);

    Linux_SambaServiceExternal external(aBroker,aContext);

    while(manualInstanceEnumeration.hasNext()) {
      const Linux_SambaServiceConfigurationForServiceManualInstance manualInstance = manualInstanceEnumeration.getNext();
      const Linux_SambaServiceConfigurationForServiceInstanceName instanceName = manualInstance.getInstanceName();
      const Linux_SambaServiceInstanceName Element = instanceName.getElement();
      Linux_SambaServiceInstance instance = external.getInstance(aPropertiesPP,Element);
      anInstanceEnumeration.addElement(instance);
    }

  }

  /* extrinsic methods */
  

}
