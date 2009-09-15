// =======================================================================
// Linux_SambaGlobalBrowseForGlobalDefaultImplementation.cpp
//     created on Fri, 23 Jun 2006 using ECUTE 2.2.1
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

#include "Linux_SambaGlobalBrowseForGlobalDefaultImplementation.h"
#include "Linux_SambaGlobalBrowseForGlobalRepositoryInstance.h"
#include <iostream>

namespace genProvider {

  /* intrinsic methods */
  //----------------------------------------------------------------------------	
  void
  Linux_SambaGlobalBrowseForGlobalDefaultImplementation::enumInstanceNames(
    const CmpiContext& aContext,
    const CmpiBroker& aBroker,
    const char* aNameSpaceP,
    Linux_SambaGlobalBrowseForGlobalInstanceNameEnumeration& anInstanceNameEnumeration) {

#ifdef DEBUG
   	std::cout << "enumInstanceNames not supported for Linux_SambaGlobalBrowseForGlobal" << std::endl;
#endif   	

   	throw CmpiErrorFormater::getErrorException(
   	  CmpiErrorFormater::NOT_IMPLEMENTED,
   	  "enumInstanceEnumeration",
   	  "Linux_SambaGlobalBrowseForGlobal");   

  }

  //----------------------------------------------------------------------------	
  void 
  Linux_SambaGlobalBrowseForGlobalDefaultImplementation::enumInstances(
    const CmpiContext& aContext,
    const CmpiBroker& aBroker,
    const char* aNameSpaceP,
    const char** aPropertiesPP,
    Linux_SambaGlobalBrowseForGlobalManualInstanceEnumeration& anInstanceEnumeration) {

#ifdef DEBUG
    std::cout << "Using default enumInstances implementation for Linux_SambaGlobalBrowseForGlobal" << std::endl;
    std::cout << "Let's get the instanceNames" << std::endl;
#endif    

    Linux_SambaGlobalBrowseForGlobalInstanceNameEnumeration namesEnumeration;
    enumInstanceNames(aContext,aBroker,aNameSpaceP,namesEnumeration);

#ifdef DEBUG
    std::cout << "Getting each instance" << std::endl;
#endif    
    
    while (namesEnumeration.hasNext()) {
    
      Linux_SambaGlobalBrowseForGlobalInstanceName instanceName = namesEnumeration.getNext();
    
      Linux_SambaGlobalBrowseForGlobalRepositoryInstance repositoryInstance;

      // try to fetch repository instance
      try {
        Linux_SambaGlobalBrowseForGlobalInstanceName repositoryInstanceName(instanceName);
        repositoryInstanceName.setNamespace("IBMShadow/cimv2");
        CmpiObjectPath repositoryCmpiObjectPath = repositoryInstanceName.getObjectPath();
        CmpiBroker cmpiBroker(aBroker);
        CmpiInstance repositoryCmpiInstance = cmpiBroker.getInstance(
            aContext,
            repositoryCmpiObjectPath,
            aPropertiesPP);
        Linux_SambaGlobalBrowseForGlobalRepositoryInstance localRepositoryInstance(
      	  repositoryCmpiInstance,
          "IBMShadow/cimv2");
        repositoryInstance = localRepositoryInstance;
      } catch (const CmpiStatus& rc) { }                             
    
#ifdef DEBUG
    	std::cout << "Getting an instance for instanceName" << std::endl;
#endif
    	
    	Linux_SambaGlobalBrowseForGlobalManualInstance instance = getInstance(
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
  Linux_SambaGlobalBrowseForGlobalManualInstance 
  Linux_SambaGlobalBrowseForGlobalDefaultImplementation::getInstance(
    const CmpiContext& aContext,
    const CmpiBroker& aBroker,
    const char** aPropertiesPP,
    const Linux_SambaGlobalBrowseForGlobalInstanceName& anInstanceName) {

#ifdef DEBUG
    std::cout << "getInstance not supported for Linux_SambaGlobalBrowseForGlobal" << std::endl;
#endif
    	

    throw CmpiErrorFormater::getErrorException(
   	  CmpiErrorFormater::NOT_IMPLEMENTED,
   	  "getInstance",
   	  "Linux_SambaGlobalBrowseForGlobal");

  }
  	
  //----------------------------------------------------------------------------	
  void 
  Linux_SambaGlobalBrowseForGlobalDefaultImplementation::setInstance(
    const CmpiContext& aContext,
    const CmpiBroker& aBroker,
    const char** aPropertiesPP,
    const Linux_SambaGlobalBrowseForGlobalManualInstance& aManualInstance) {
  
#ifdef DEBUG
    std::cout << "setInstance not supported for Linux_SambaGlobalBrowseForGlobal" << std::endl;
#endif
    	
   
    throw CmpiErrorFormater::getErrorException(
   	  CmpiErrorFormater::NOT_IMPLEMENTED,
   	  "setInstance",
   	  "Linux_SambaGlobalBrowseForGlobal");
   	 
  }
  	
  //----------------------------------------------------------------------------	
  Linux_SambaGlobalBrowseForGlobalInstanceName  
  Linux_SambaGlobalBrowseForGlobalDefaultImplementation::createInstance(
    const CmpiContext& aContext, 
    const CmpiBroker& aBroker,
    const Linux_SambaGlobalBrowseForGlobalManualInstance& aManualInstance) {

#ifdef DEBUG
   	std::cout << "createInstance not supported for Linux_SambaGlobalBrowseForGlobal" << std::endl;
#endif

    throw CmpiErrorFormater::getErrorException(
   	 CmpiErrorFormater::NOT_IMPLEMENTED,
   	 "createInstance",
   	 "Linux_SambaGlobalBrowseForGlobal");

  }

  //----------------------------------------------------------------------------	
  void 
  Linux_SambaGlobalBrowseForGlobalDefaultImplementation::deleteInstance(
    const CmpiContext& aContext, 
    const CmpiBroker& aBroker,
    const Linux_SambaGlobalBrowseForGlobalInstanceName& anInstanceName) {

#ifdef DEBUG
   	std::cout << "deleteInstance not supported for Linux_SambaGlobalBrowseForGlobal" << std::endl;
#endif

    throw CmpiErrorFormater::getErrorException(
      CmpiErrorFormater::NOT_IMPLEMENTED,
      "deleteInstance",
      "Linux_SambaGlobalBrowseForGlobal");

  }

  
  // Association Interface

  //----------------------------------------------------------------------------
  void
  Linux_SambaGlobalBrowseForGlobalDefaultImplementation::referencesSettingData( 
    const CmpiContext& aContext,  
    const CmpiBroker& aBroker,
    const char* aNameSpaceP,
    const char** aPropertiesPP,
    const Linux_SambaGlobalOptionsInstanceName& aSourceInstance,
    Linux_SambaGlobalBrowseForGlobalManualInstanceEnumeration& aManualInstanceEnumeration) {
    
    throw CmpiErrorFormater::getErrorException(
      CmpiErrorFormater::NOT_IMPLEMENTED,
      "References(SettingData)",
      "Linux_SambaGlobalBrowseForGlobal");

  }

  //----------------------------------------------------------------------------
  void
  Linux_SambaGlobalBrowseForGlobalDefaultImplementation::referencesManagedElement( 
    const CmpiContext& aContext,  
    const CmpiBroker& aBroker,
    const char* aNameSpaceP,
    const char** aPropertiesPP,
    const Linux_SambaGlobalBrowseOptionsInstanceName& aSourceInstance,
    Linux_SambaGlobalBrowseForGlobalManualInstanceEnumeration& aManualInstanceEnumeration) {
    
    throw CmpiErrorFormater::getErrorException(
      CmpiErrorFormater::NOT_IMPLEMENTED,
      "References(ManagedElement)",
      "Linux_SambaGlobalBrowseForGlobal");

  }

  //----------------------------------------------------------------------------
  void
  Linux_SambaGlobalBrowseForGlobalDefaultImplementation::associatorsSettingData(
    const CmpiContext& aContext,  
    const CmpiBroker& aBroker,
    const char* aNameSpaceP,
    const char** aPropertiesPP,
    const Linux_SambaGlobalOptionsInstanceName& aSourceInstance,
    Linux_SambaGlobalBrowseOptionsInstanceEnumeration& anInstanceEnumeration) {
      
#ifdef DEBUG
    std::cout<<"Linux_SambaGlobalBrowseForGlobal : associatorsLinux_SambaGlobalBrowseOptions() ... returns one instance"<<std::endl;
#endif    
      
    Linux_SambaGlobalBrowseForGlobalManualInstanceEnumeration manualInstanceEnumeration;
      
    referencesSettingData(
      aContext,
      aBroker,
      aSourceInstance.getNamespace(), 
      aPropertiesPP,
      aSourceInstance,
      manualInstanceEnumeration);

    Linux_SambaGlobalBrowseOptionsExternal external(aBroker,aContext);

    while (manualInstanceEnumeration.hasNext()) {
      const Linux_SambaGlobalBrowseForGlobalManualInstance manualInstance = manualInstanceEnumeration.getNext();
      const Linux_SambaGlobalBrowseForGlobalInstanceName instanceName = manualInstance.getInstanceName();
      const Linux_SambaGlobalBrowseOptionsInstanceName SettingData = instanceName.getSettingData();
      Linux_SambaGlobalBrowseOptionsInstance instance = external.getInstance(aPropertiesPP,SettingData);
      anInstanceEnumeration.addElement(instance);
    }
  
  }

  //----------------------------------------------------------------------------
  void
  Linux_SambaGlobalBrowseForGlobalDefaultImplementation::associatorsManagedElement( 
    const CmpiContext& aContext,  
    const CmpiBroker& aBroker,
    const char* aNameSpaceP,
    const char** aPropertiesPP,
    const Linux_SambaGlobalBrowseOptionsInstanceName& aSourceInstance,
    Linux_SambaGlobalOptionsInstanceEnumeration& anInstanceEnumeration) {
     
#ifdef DEBUG
    std::cout << "Linux_SambaGlobalBrowseForGlobal : associatorsLinux_SambaGlobalOptions() ... returns one instance" << std::endl;
#endif    
      
    Linux_SambaGlobalBrowseForGlobalManualInstanceEnumeration manualInstanceEnumeration;
      
    referencesManagedElement(
      aContext,
      aBroker,
      aSourceInstance.getNamespace(), 
      aPropertiesPP,
      aSourceInstance,
      manualInstanceEnumeration);

    Linux_SambaGlobalOptionsExternal external(aBroker,aContext);

    while(manualInstanceEnumeration.hasNext()) {
      const Linux_SambaGlobalBrowseForGlobalManualInstance manualInstance = manualInstanceEnumeration.getNext();
      const Linux_SambaGlobalBrowseForGlobalInstanceName instanceName = manualInstance.getInstanceName();
      const Linux_SambaGlobalOptionsInstanceName ManagedElement = instanceName.getManagedElement();
      Linux_SambaGlobalOptionsInstance instance = external.getInstance(aPropertiesPP,ManagedElement);
      anInstanceEnumeration.addElement(instance);
    }

  }

  /* extrinsic methods */
  

}
