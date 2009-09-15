// =======================================================================
// Linux_SambaGlobalSecurityForGlobalDefaultImplementation.cpp
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

#include "Linux_SambaGlobalSecurityForGlobalDefaultImplementation.h"
#include "Linux_SambaGlobalSecurityForGlobalRepositoryInstance.h"
#include <iostream>

namespace genProvider {

  /* intrinsic methods */
  //----------------------------------------------------------------------------	
  void
  Linux_SambaGlobalSecurityForGlobalDefaultImplementation::enumInstanceNames(
    const CmpiContext& aContext,
    const CmpiBroker& aBroker,
    const char* aNameSpaceP,
    Linux_SambaGlobalSecurityForGlobalInstanceNameEnumeration& anInstanceNameEnumeration) {

#ifdef DEBUG
   	std::cout << "enumInstanceNames not supported for Linux_SambaGlobalSecurityForGlobal" << std::endl;
#endif   	

   	throw CmpiErrorFormater::getErrorException(
   	  CmpiErrorFormater::NOT_IMPLEMENTED,
   	  "enumInstanceEnumeration",
   	  "Linux_SambaGlobalSecurityForGlobal");   

  }

  //----------------------------------------------------------------------------	
  void 
  Linux_SambaGlobalSecurityForGlobalDefaultImplementation::enumInstances(
    const CmpiContext& aContext,
    const CmpiBroker& aBroker,
    const char* aNameSpaceP,
    const char** aPropertiesPP,
    Linux_SambaGlobalSecurityForGlobalManualInstanceEnumeration& anInstanceEnumeration) {

#ifdef DEBUG
    std::cout << "Using default enumInstances implementation for Linux_SambaGlobalSecurityForGlobal" << std::endl;
    std::cout << "Let's get the instanceNames" << std::endl;
#endif    

    Linux_SambaGlobalSecurityForGlobalInstanceNameEnumeration namesEnumeration;
    enumInstanceNames(aContext,aBroker,aNameSpaceP,namesEnumeration);

#ifdef DEBUG
    std::cout << "Getting each instance" << std::endl;
#endif    
    
    while (namesEnumeration.hasNext()) {
    
      Linux_SambaGlobalSecurityForGlobalInstanceName instanceName = namesEnumeration.getNext();
    
      Linux_SambaGlobalSecurityForGlobalRepositoryInstance repositoryInstance;

      // try to fetch repository instance
      try {
        Linux_SambaGlobalSecurityForGlobalInstanceName repositoryInstanceName(instanceName);
        repositoryInstanceName.setNamespace("IBMShadow/cimv2");
        CmpiObjectPath repositoryCmpiObjectPath = repositoryInstanceName.getObjectPath();
        CmpiBroker cmpiBroker(aBroker);
        CmpiInstance repositoryCmpiInstance = cmpiBroker.getInstance(
            aContext,
            repositoryCmpiObjectPath,
            aPropertiesPP);
        Linux_SambaGlobalSecurityForGlobalRepositoryInstance localRepositoryInstance(
      	  repositoryCmpiInstance,
          "IBMShadow/cimv2");
        repositoryInstance = localRepositoryInstance;
      } catch (const CmpiStatus& rc) { }                             
    
#ifdef DEBUG
    	std::cout << "Getting an instance for instanceName" << std::endl;
#endif
    	
    	Linux_SambaGlobalSecurityForGlobalManualInstance instance = getInstance(
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
  Linux_SambaGlobalSecurityForGlobalManualInstance 
  Linux_SambaGlobalSecurityForGlobalDefaultImplementation::getInstance(
    const CmpiContext& aContext,
    const CmpiBroker& aBroker,
    const char** aPropertiesPP,
    const Linux_SambaGlobalSecurityForGlobalInstanceName& anInstanceName) {

#ifdef DEBUG
    std::cout << "getInstance not supported for Linux_SambaGlobalSecurityForGlobal" << std::endl;
#endif
    	

    throw CmpiErrorFormater::getErrorException(
   	  CmpiErrorFormater::NOT_IMPLEMENTED,
   	  "getInstance",
   	  "Linux_SambaGlobalSecurityForGlobal");

  }
  	
  //----------------------------------------------------------------------------	
  void 
  Linux_SambaGlobalSecurityForGlobalDefaultImplementation::setInstance(
    const CmpiContext& aContext,
    const CmpiBroker& aBroker,
    const char** aPropertiesPP,
    const Linux_SambaGlobalSecurityForGlobalManualInstance& aManualInstance) {
  
#ifdef DEBUG
    std::cout << "setInstance not supported for Linux_SambaGlobalSecurityForGlobal" << std::endl;
#endif
    	
   
    throw CmpiErrorFormater::getErrorException(
   	  CmpiErrorFormater::NOT_IMPLEMENTED,
   	  "setInstance",
   	  "Linux_SambaGlobalSecurityForGlobal");
   	 
  }
  	
  //----------------------------------------------------------------------------	
  Linux_SambaGlobalSecurityForGlobalInstanceName  
  Linux_SambaGlobalSecurityForGlobalDefaultImplementation::createInstance(
    const CmpiContext& aContext, 
    const CmpiBroker& aBroker,
    const Linux_SambaGlobalSecurityForGlobalManualInstance& aManualInstance) {

#ifdef DEBUG
   	std::cout << "createInstance not supported for Linux_SambaGlobalSecurityForGlobal" << std::endl;
#endif

    throw CmpiErrorFormater::getErrorException(
   	 CmpiErrorFormater::NOT_IMPLEMENTED,
   	 "createInstance",
   	 "Linux_SambaGlobalSecurityForGlobal");

  }

  //----------------------------------------------------------------------------	
  void 
  Linux_SambaGlobalSecurityForGlobalDefaultImplementation::deleteInstance(
    const CmpiContext& aContext, 
    const CmpiBroker& aBroker,
    const Linux_SambaGlobalSecurityForGlobalInstanceName& anInstanceName) {

#ifdef DEBUG
   	std::cout << "deleteInstance not supported for Linux_SambaGlobalSecurityForGlobal" << std::endl;
#endif

    throw CmpiErrorFormater::getErrorException(
      CmpiErrorFormater::NOT_IMPLEMENTED,
      "deleteInstance",
      "Linux_SambaGlobalSecurityForGlobal");

  }

  
  // Association Interface

  //----------------------------------------------------------------------------
  void
  Linux_SambaGlobalSecurityForGlobalDefaultImplementation::referencesSettingData( 
    const CmpiContext& aContext,  
    const CmpiBroker& aBroker,
    const char* aNameSpaceP,
    const char** aPropertiesPP,
    const Linux_SambaGlobalOptionsInstanceName& aSourceInstance,
    Linux_SambaGlobalSecurityForGlobalManualInstanceEnumeration& aManualInstanceEnumeration) {
    
    throw CmpiErrorFormater::getErrorException(
      CmpiErrorFormater::NOT_IMPLEMENTED,
      "References(SettingData)",
      "Linux_SambaGlobalSecurityForGlobal");

  }

  //----------------------------------------------------------------------------
  void
  Linux_SambaGlobalSecurityForGlobalDefaultImplementation::referencesManagedElement( 
    const CmpiContext& aContext,  
    const CmpiBroker& aBroker,
    const char* aNameSpaceP,
    const char** aPropertiesPP,
    const Linux_SambaGlobalSecurityOptionsInstanceName& aSourceInstance,
    Linux_SambaGlobalSecurityForGlobalManualInstanceEnumeration& aManualInstanceEnumeration) {
    
    throw CmpiErrorFormater::getErrorException(
      CmpiErrorFormater::NOT_IMPLEMENTED,
      "References(ManagedElement)",
      "Linux_SambaGlobalSecurityForGlobal");

  }

  //----------------------------------------------------------------------------
  void
  Linux_SambaGlobalSecurityForGlobalDefaultImplementation::associatorsSettingData(
    const CmpiContext& aContext,  
    const CmpiBroker& aBroker,
    const char* aNameSpaceP,
    const char** aPropertiesPP,
    const Linux_SambaGlobalOptionsInstanceName& aSourceInstance,
    Linux_SambaGlobalSecurityOptionsInstanceEnumeration& anInstanceEnumeration) {
      
#ifdef DEBUG
    std::cout<<"Linux_SambaGlobalSecurityForGlobal : associatorsLinux_SambaGlobalSecurityOptions() ... returns one instance"<<std::endl;
#endif    
      
    Linux_SambaGlobalSecurityForGlobalManualInstanceEnumeration manualInstanceEnumeration;
      
    referencesSettingData(
      aContext,
      aBroker,
      aSourceInstance.getNamespace(), 
      aPropertiesPP,
      aSourceInstance,
      manualInstanceEnumeration);

    Linux_SambaGlobalSecurityOptionsExternal external(aBroker,aContext);

    while (manualInstanceEnumeration.hasNext()) {
      const Linux_SambaGlobalSecurityForGlobalManualInstance manualInstance = manualInstanceEnumeration.getNext();
      const Linux_SambaGlobalSecurityForGlobalInstanceName instanceName = manualInstance.getInstanceName();
      const Linux_SambaGlobalSecurityOptionsInstanceName SettingData = instanceName.getSettingData();
      Linux_SambaGlobalSecurityOptionsInstance instance = external.getInstance(aPropertiesPP,SettingData);
      anInstanceEnumeration.addElement(instance);
    }
  
  }

  //----------------------------------------------------------------------------
  void
  Linux_SambaGlobalSecurityForGlobalDefaultImplementation::associatorsManagedElement( 
    const CmpiContext& aContext,  
    const CmpiBroker& aBroker,
    const char* aNameSpaceP,
    const char** aPropertiesPP,
    const Linux_SambaGlobalSecurityOptionsInstanceName& aSourceInstance,
    Linux_SambaGlobalOptionsInstanceEnumeration& anInstanceEnumeration) {
     
#ifdef DEBUG
    std::cout << "Linux_SambaGlobalSecurityForGlobal : associatorsLinux_SambaGlobalOptions() ... returns one instance" << std::endl;
#endif    
      
    Linux_SambaGlobalSecurityForGlobalManualInstanceEnumeration manualInstanceEnumeration;
      
    referencesManagedElement(
      aContext,
      aBroker,
      aSourceInstance.getNamespace(), 
      aPropertiesPP,
      aSourceInstance,
      manualInstanceEnumeration);

    Linux_SambaGlobalOptionsExternal external(aBroker,aContext);

    while(manualInstanceEnumeration.hasNext()) {
      const Linux_SambaGlobalSecurityForGlobalManualInstance manualInstance = manualInstanceEnumeration.getNext();
      const Linux_SambaGlobalSecurityForGlobalInstanceName instanceName = manualInstance.getInstanceName();
      const Linux_SambaGlobalOptionsInstanceName ManagedElement = instanceName.getManagedElement();
      Linux_SambaGlobalOptionsInstance instance = external.getInstance(aPropertiesPP,ManagedElement);
      anInstanceEnumeration.addElement(instance);
    }

  }

  /* extrinsic methods */
  

}
