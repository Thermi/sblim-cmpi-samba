// =======================================================================
// Linux_SambaWriteListForGlobalDefaultImplementation.cpp
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

#include "Linux_SambaWriteListForGlobalDefaultImplementation.h"
#include "Linux_SambaWriteListForGlobalRepositoryInstance.h"
#include <iostream>

namespace genProvider {

  /* intrinsic methods */
  //----------------------------------------------------------------------------	
  void
  Linux_SambaWriteListForGlobalDefaultImplementation::enumInstanceNames(
    const CmpiContext& aContext,
    const CmpiBroker& aBroker,
    const char* aNameSpaceP,
    Linux_SambaWriteListForGlobalInstanceNameEnumeration& anInstanceNameEnumeration) {

#ifdef DEBUG
   	std::cout << "enumInstanceNames not supported for Linux_SambaWriteListForGlobal" << std::endl;
#endif   	

   	throw CmpiErrorFormater::getErrorException(
   	  CmpiErrorFormater::NOT_IMPLEMENTED,
   	  "enumInstanceEnumeration",
   	  "Linux_SambaWriteListForGlobal");   

  }

  //----------------------------------------------------------------------------	
  void 
  Linux_SambaWriteListForGlobalDefaultImplementation::enumInstances(
    const CmpiContext& aContext,
    const CmpiBroker& aBroker,
    const char* aNameSpaceP,
    const char** aPropertiesPP,
    Linux_SambaWriteListForGlobalManualInstanceEnumeration& anInstanceEnumeration) {

#ifdef DEBUG
    std::cout << "Using default enumInstances implementation for Linux_SambaWriteListForGlobal" << std::endl;
    std::cout << "Let's get the instanceNames" << std::endl;
#endif    

    Linux_SambaWriteListForGlobalInstanceNameEnumeration namesEnumeration;
    enumInstanceNames(aContext,aBroker,aNameSpaceP,namesEnumeration);

#ifdef DEBUG
    std::cout << "Getting each instance" << std::endl;
#endif    
    
    while (namesEnumeration.hasNext()) {
    
      Linux_SambaWriteListForGlobalInstanceName instanceName = namesEnumeration.getNext();
    
      Linux_SambaWriteListForGlobalRepositoryInstance repositoryInstance;

      // try to fetch repository instance
      try {
        Linux_SambaWriteListForGlobalInstanceName repositoryInstanceName(instanceName);
        repositoryInstanceName.setNamespace("IBMShadow/cimv2");
        CmpiObjectPath repositoryCmpiObjectPath = repositoryInstanceName.getObjectPath();
        CmpiBroker cmpiBroker(aBroker);
        CmpiInstance repositoryCmpiInstance = cmpiBroker.getInstance(
            aContext,
            repositoryCmpiObjectPath,
            aPropertiesPP);
        Linux_SambaWriteListForGlobalRepositoryInstance localRepositoryInstance(
      	  repositoryCmpiInstance,
          "IBMShadow/cimv2");
        repositoryInstance = localRepositoryInstance;
      } catch (const CmpiStatus& rc) { }                             
    
#ifdef DEBUG
    	std::cout << "Getting an instance for instanceName" << std::endl;
#endif
    	
    	Linux_SambaWriteListForGlobalManualInstance instance = getInstance(
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
  Linux_SambaWriteListForGlobalManualInstance 
  Linux_SambaWriteListForGlobalDefaultImplementation::getInstance(
    const CmpiContext& aContext,
    const CmpiBroker& aBroker,
    const char** aPropertiesPP,
    const Linux_SambaWriteListForGlobalInstanceName& anInstanceName) {

#ifdef DEBUG
    std::cout << "getInstance not supported for Linux_SambaWriteListForGlobal" << std::endl;
#endif
    	

    throw CmpiErrorFormater::getErrorException(
   	  CmpiErrorFormater::NOT_IMPLEMENTED,
   	  "getInstance",
   	  "Linux_SambaWriteListForGlobal");

  }
  	
  //----------------------------------------------------------------------------	
  void 
  Linux_SambaWriteListForGlobalDefaultImplementation::setInstance(
    const CmpiContext& aContext,
    const CmpiBroker& aBroker,
    const char** aPropertiesPP,
    const Linux_SambaWriteListForGlobalManualInstance& aManualInstance) {
  
#ifdef DEBUG
    std::cout << "setInstance not supported for Linux_SambaWriteListForGlobal" << std::endl;
#endif
    	
   
    throw CmpiErrorFormater::getErrorException(
   	  CmpiErrorFormater::NOT_IMPLEMENTED,
   	  "setInstance",
   	  "Linux_SambaWriteListForGlobal");
   	 
  }
  	
  //----------------------------------------------------------------------------	
  Linux_SambaWriteListForGlobalInstanceName  
  Linux_SambaWriteListForGlobalDefaultImplementation::createInstance(
    const CmpiContext& aContext, 
    const CmpiBroker& aBroker,
    const Linux_SambaWriteListForGlobalManualInstance& aManualInstance) {

#ifdef DEBUG
   	std::cout << "createInstance not supported for Linux_SambaWriteListForGlobal" << std::endl;
#endif

    throw CmpiErrorFormater::getErrorException(
   	 CmpiErrorFormater::NOT_IMPLEMENTED,
   	 "createInstance",
   	 "Linux_SambaWriteListForGlobal");

  }

  //----------------------------------------------------------------------------	
  void 
  Linux_SambaWriteListForGlobalDefaultImplementation::deleteInstance(
    const CmpiContext& aContext, 
    const CmpiBroker& aBroker,
    const Linux_SambaWriteListForGlobalInstanceName& anInstanceName) {

#ifdef DEBUG
   	std::cout << "deleteInstance not supported for Linux_SambaWriteListForGlobal" << std::endl;
#endif

    throw CmpiErrorFormater::getErrorException(
      CmpiErrorFormater::NOT_IMPLEMENTED,
      "deleteInstance",
      "Linux_SambaWriteListForGlobal");

  }

  
  // Association Interface

  //----------------------------------------------------------------------------
  void
  Linux_SambaWriteListForGlobalDefaultImplementation::referencesPartComponent( 
    const CmpiContext& aContext,  
    const CmpiBroker& aBroker,
    const char* aNameSpaceP,
    const char** aPropertiesPP,
    const Linux_SambaGlobalOptionsInstanceName& aSourceInstance,
    Linux_SambaWriteListForGlobalManualInstanceEnumeration& aManualInstanceEnumeration) {
    
    throw CmpiErrorFormater::getErrorException(
      CmpiErrorFormater::NOT_IMPLEMENTED,
      "References(PartComponent)",
      "Linux_SambaWriteListForGlobal");

  }

  //----------------------------------------------------------------------------
  void
  Linux_SambaWriteListForGlobalDefaultImplementation::referencesGroupComponent( 
    const CmpiContext& aContext,  
    const CmpiBroker& aBroker,
    const char* aNameSpaceP,
    const char** aPropertiesPP,
    const Linux_SambaUserInstanceName& aSourceInstance,
    Linux_SambaWriteListForGlobalManualInstanceEnumeration& aManualInstanceEnumeration) {
    
    throw CmpiErrorFormater::getErrorException(
      CmpiErrorFormater::NOT_IMPLEMENTED,
      "References(GroupComponent)",
      "Linux_SambaWriteListForGlobal");

  }

  //----------------------------------------------------------------------------
  void
  Linux_SambaWriteListForGlobalDefaultImplementation::associatorsPartComponent(
    const CmpiContext& aContext,  
    const CmpiBroker& aBroker,
    const char* aNameSpaceP,
    const char** aPropertiesPP,
    const Linux_SambaGlobalOptionsInstanceName& aSourceInstance,
    Linux_SambaUserInstanceEnumeration& anInstanceEnumeration) {
      
#ifdef DEBUG
    std::cout<<"Linux_SambaWriteListForGlobal : associatorsLinux_SambaUser() ... returns one instance"<<std::endl;
#endif    
      
    Linux_SambaWriteListForGlobalManualInstanceEnumeration manualInstanceEnumeration;
      
    referencesPartComponent(
      aContext,
      aBroker,
      aSourceInstance.getNamespace(), 
      aPropertiesPP,
      aSourceInstance,
      manualInstanceEnumeration);

    Linux_SambaUserExternal external(aBroker,aContext);

    while (manualInstanceEnumeration.hasNext()) {
      const Linux_SambaWriteListForGlobalManualInstance manualInstance = manualInstanceEnumeration.getNext();
      const Linux_SambaWriteListForGlobalInstanceName instanceName = manualInstance.getInstanceName();
      const Linux_SambaUserInstanceName PartComponent = instanceName.getPartComponent();
      Linux_SambaUserInstance instance = external.getInstance(aPropertiesPP,PartComponent);
      anInstanceEnumeration.addElement(instance);
    }
  
  }

  //----------------------------------------------------------------------------
  void
  Linux_SambaWriteListForGlobalDefaultImplementation::associatorsGroupComponent( 
    const CmpiContext& aContext,  
    const CmpiBroker& aBroker,
    const char* aNameSpaceP,
    const char** aPropertiesPP,
    const Linux_SambaUserInstanceName& aSourceInstance,
    Linux_SambaGlobalOptionsInstanceEnumeration& anInstanceEnumeration) {
     
#ifdef DEBUG
    std::cout << "Linux_SambaWriteListForGlobal : associatorsLinux_SambaGlobalOptions() ... returns one instance" << std::endl;
#endif    
      
    Linux_SambaWriteListForGlobalManualInstanceEnumeration manualInstanceEnumeration;
      
    referencesGroupComponent(
      aContext,
      aBroker,
      aSourceInstance.getNamespace(), 
      aPropertiesPP,
      aSourceInstance,
      manualInstanceEnumeration);

    Linux_SambaGlobalOptionsExternal external(aBroker,aContext);

    while(manualInstanceEnumeration.hasNext()) {
      const Linux_SambaWriteListForGlobalManualInstance manualInstance = manualInstanceEnumeration.getNext();
      const Linux_SambaWriteListForGlobalInstanceName instanceName = manualInstance.getInstanceName();
      const Linux_SambaGlobalOptionsInstanceName GroupComponent = instanceName.getGroupComponent();
      Linux_SambaGlobalOptionsInstance instance = external.getInstance(aPropertiesPP,GroupComponent);
      anInstanceEnumeration.addElement(instance);
    }

  }

  /* extrinsic methods */
  

}
