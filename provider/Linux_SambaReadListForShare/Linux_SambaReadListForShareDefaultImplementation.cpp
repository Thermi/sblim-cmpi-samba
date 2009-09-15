// =======================================================================
// Linux_SambaReadListForShareDefaultImplementation.cpp
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

#include "Linux_SambaReadListForShareDefaultImplementation.h"
#include "Linux_SambaReadListForShareRepositoryInstance.h"
#include <iostream>

namespace genProvider {

  /* intrinsic methods */
  //----------------------------------------------------------------------------	
  void
  Linux_SambaReadListForShareDefaultImplementation::enumInstanceNames(
    const CmpiContext& aContext,
    const CmpiBroker& aBroker,
    const char* aNameSpaceP,
    Linux_SambaReadListForShareInstanceNameEnumeration& anInstanceNameEnumeration) {

#ifdef DEBUG
   	std::cout << "enumInstanceNames not supported for Linux_SambaReadListForShare" << std::endl;
#endif   	

   	throw CmpiErrorFormater::getErrorException(
   	  CmpiErrorFormater::NOT_IMPLEMENTED,
   	  "enumInstanceEnumeration",
   	  "Linux_SambaReadListForShare");   

  }

  //----------------------------------------------------------------------------	
  void 
  Linux_SambaReadListForShareDefaultImplementation::enumInstances(
    const CmpiContext& aContext,
    const CmpiBroker& aBroker,
    const char* aNameSpaceP,
    const char** aPropertiesPP,
    Linux_SambaReadListForShareManualInstanceEnumeration& anInstanceEnumeration) {

#ifdef DEBUG
    std::cout << "Using default enumInstances implementation for Linux_SambaReadListForShare" << std::endl;
    std::cout << "Let's get the instanceNames" << std::endl;
#endif    

    Linux_SambaReadListForShareInstanceNameEnumeration namesEnumeration;
    enumInstanceNames(aContext,aBroker,aNameSpaceP,namesEnumeration);

#ifdef DEBUG
    std::cout << "Getting each instance" << std::endl;
#endif    
    
    while (namesEnumeration.hasNext()) {
    
      Linux_SambaReadListForShareInstanceName instanceName = namesEnumeration.getNext();
    
      Linux_SambaReadListForShareRepositoryInstance repositoryInstance;

      // try to fetch repository instance
      try {
        Linux_SambaReadListForShareInstanceName repositoryInstanceName(instanceName);
        repositoryInstanceName.setNamespace("IBMShadow/cimv2");
        CmpiObjectPath repositoryCmpiObjectPath = repositoryInstanceName.getObjectPath();
        CmpiBroker cmpiBroker(aBroker);
        CmpiInstance repositoryCmpiInstance = cmpiBroker.getInstance(
            aContext,
            repositoryCmpiObjectPath,
            aPropertiesPP);
        Linux_SambaReadListForShareRepositoryInstance localRepositoryInstance(
      	  repositoryCmpiInstance,
          "IBMShadow/cimv2");
        repositoryInstance = localRepositoryInstance;
      } catch (const CmpiStatus& rc) { }                             
    
#ifdef DEBUG
    	std::cout << "Getting an instance for instanceName" << std::endl;
#endif
    	
    	Linux_SambaReadListForShareManualInstance instance = getInstance(
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
  Linux_SambaReadListForShareManualInstance 
  Linux_SambaReadListForShareDefaultImplementation::getInstance(
    const CmpiContext& aContext,
    const CmpiBroker& aBroker,
    const char** aPropertiesPP,
    const Linux_SambaReadListForShareInstanceName& anInstanceName) {

#ifdef DEBUG
    std::cout << "getInstance not supported for Linux_SambaReadListForShare" << std::endl;
#endif
    	

    throw CmpiErrorFormater::getErrorException(
   	  CmpiErrorFormater::NOT_IMPLEMENTED,
   	  "getInstance",
   	  "Linux_SambaReadListForShare");

  }
  	
  //----------------------------------------------------------------------------	
  void 
  Linux_SambaReadListForShareDefaultImplementation::setInstance(
    const CmpiContext& aContext,
    const CmpiBroker& aBroker,
    const char** aPropertiesPP,
    const Linux_SambaReadListForShareManualInstance& aManualInstance) {
  
#ifdef DEBUG
    std::cout << "setInstance not supported for Linux_SambaReadListForShare" << std::endl;
#endif
    	
   
    throw CmpiErrorFormater::getErrorException(
   	  CmpiErrorFormater::NOT_IMPLEMENTED,
   	  "setInstance",
   	  "Linux_SambaReadListForShare");
   	 
  }
  	
  //----------------------------------------------------------------------------	
  Linux_SambaReadListForShareInstanceName  
  Linux_SambaReadListForShareDefaultImplementation::createInstance(
    const CmpiContext& aContext, 
    const CmpiBroker& aBroker,
    const Linux_SambaReadListForShareManualInstance& aManualInstance) {

#ifdef DEBUG
   	std::cout << "createInstance not supported for Linux_SambaReadListForShare" << std::endl;
#endif

    throw CmpiErrorFormater::getErrorException(
   	 CmpiErrorFormater::NOT_IMPLEMENTED,
   	 "createInstance",
   	 "Linux_SambaReadListForShare");

  }

  //----------------------------------------------------------------------------	
  void 
  Linux_SambaReadListForShareDefaultImplementation::deleteInstance(
    const CmpiContext& aContext, 
    const CmpiBroker& aBroker,
    const Linux_SambaReadListForShareInstanceName& anInstanceName) {

#ifdef DEBUG
   	std::cout << "deleteInstance not supported for Linux_SambaReadListForShare" << std::endl;
#endif

    throw CmpiErrorFormater::getErrorException(
      CmpiErrorFormater::NOT_IMPLEMENTED,
      "deleteInstance",
      "Linux_SambaReadListForShare");

  }

  
  // Association Interface

  //----------------------------------------------------------------------------
  void
  Linux_SambaReadListForShareDefaultImplementation::referencesPartComponent( 
    const CmpiContext& aContext,  
    const CmpiBroker& aBroker,
    const char* aNameSpaceP,
    const char** aPropertiesPP,
    const Linux_SambaShareOptionsInstanceName& aSourceInstance,
    Linux_SambaReadListForShareManualInstanceEnumeration& aManualInstanceEnumeration) {
    
    throw CmpiErrorFormater::getErrorException(
      CmpiErrorFormater::NOT_IMPLEMENTED,
      "References(PartComponent)",
      "Linux_SambaReadListForShare");

  }

  //----------------------------------------------------------------------------
  void
  Linux_SambaReadListForShareDefaultImplementation::referencesGroupComponent( 
    const CmpiContext& aContext,  
    const CmpiBroker& aBroker,
    const char* aNameSpaceP,
    const char** aPropertiesPP,
    const Linux_SambaUserInstanceName& aSourceInstance,
    Linux_SambaReadListForShareManualInstanceEnumeration& aManualInstanceEnumeration) {
    
    throw CmpiErrorFormater::getErrorException(
      CmpiErrorFormater::NOT_IMPLEMENTED,
      "References(GroupComponent)",
      "Linux_SambaReadListForShare");

  }

  //----------------------------------------------------------------------------
  void
  Linux_SambaReadListForShareDefaultImplementation::associatorsPartComponent(
    const CmpiContext& aContext,  
    const CmpiBroker& aBroker,
    const char* aNameSpaceP,
    const char** aPropertiesPP,
    const Linux_SambaShareOptionsInstanceName& aSourceInstance,
    Linux_SambaUserInstanceEnumeration& anInstanceEnumeration) {
      
#ifdef DEBUG
    std::cout<<"Linux_SambaReadListForShare : associatorsLinux_SambaUser() ... returns one instance"<<std::endl;
#endif    
      
    Linux_SambaReadListForShareManualInstanceEnumeration manualInstanceEnumeration;
      
    referencesPartComponent(
      aContext,
      aBroker,
      aSourceInstance.getNamespace(), 
      aPropertiesPP,
      aSourceInstance,
      manualInstanceEnumeration);

    Linux_SambaUserExternal external(aBroker,aContext);

    while (manualInstanceEnumeration.hasNext()) {
      const Linux_SambaReadListForShareManualInstance manualInstance = manualInstanceEnumeration.getNext();
      const Linux_SambaReadListForShareInstanceName instanceName = manualInstance.getInstanceName();
      const Linux_SambaUserInstanceName PartComponent = instanceName.getPartComponent();
      Linux_SambaUserInstance instance = external.getInstance(aPropertiesPP,PartComponent);
      anInstanceEnumeration.addElement(instance);
    }
  
  }

  //----------------------------------------------------------------------------
  void
  Linux_SambaReadListForShareDefaultImplementation::associatorsGroupComponent( 
    const CmpiContext& aContext,  
    const CmpiBroker& aBroker,
    const char* aNameSpaceP,
    const char** aPropertiesPP,
    const Linux_SambaUserInstanceName& aSourceInstance,
    Linux_SambaShareOptionsInstanceEnumeration& anInstanceEnumeration) {
     
#ifdef DEBUG
    std::cout << "Linux_SambaReadListForShare : associatorsLinux_SambaShareOptions() ... returns one instance" << std::endl;
#endif    
      
    Linux_SambaReadListForShareManualInstanceEnumeration manualInstanceEnumeration;
      
    referencesGroupComponent(
      aContext,
      aBroker,
      aSourceInstance.getNamespace(), 
      aPropertiesPP,
      aSourceInstance,
      manualInstanceEnumeration);

    Linux_SambaShareOptionsExternal external(aBroker,aContext);

    while(manualInstanceEnumeration.hasNext()) {
      const Linux_SambaReadListForShareManualInstance manualInstance = manualInstanceEnumeration.getNext();
      const Linux_SambaReadListForShareInstanceName instanceName = manualInstance.getInstanceName();
      const Linux_SambaShareOptionsInstanceName GroupComponent = instanceName.getGroupComponent();
      Linux_SambaShareOptionsInstance instance = external.getInstance(aPropertiesPP,GroupComponent);
      anInstanceEnumeration.addElement(instance);
    }

  }

  /* extrinsic methods */
  

}
