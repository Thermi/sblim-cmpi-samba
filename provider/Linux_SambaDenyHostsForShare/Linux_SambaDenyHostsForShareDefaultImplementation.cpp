// =======================================================================
// Linux_SambaDenyHostsForShareDefaultImplementation.cpp
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

#include "Linux_SambaDenyHostsForShareDefaultImplementation.h"
#include "Linux_SambaDenyHostsForShareRepositoryInstance.h"
#include <iostream>

namespace genProvider {

  /* intrinsic methods */
  //----------------------------------------------------------------------------	
  void
  Linux_SambaDenyHostsForShareDefaultImplementation::enumInstanceNames(
    const CmpiContext& aContext,
    const CmpiBroker& aBroker,
    const char* aNameSpaceP,
    Linux_SambaDenyHostsForShareInstanceNameEnumeration& anInstanceNameEnumeration) {

#ifdef DEBUG
   	std::cout << "enumInstanceNames not supported for Linux_SambaDenyHostsForShare" << std::endl;
#endif   	

   	throw CmpiErrorFormater::getErrorException(
   	  CmpiErrorFormater::NOT_IMPLEMENTED,
   	  "enumInstanceEnumeration",
   	  "Linux_SambaDenyHostsForShare");   

  }

  //----------------------------------------------------------------------------	
  void 
  Linux_SambaDenyHostsForShareDefaultImplementation::enumInstances(
    const CmpiContext& aContext,
    const CmpiBroker& aBroker,
    const char* aNameSpaceP,
    const char** aPropertiesPP,
    Linux_SambaDenyHostsForShareManualInstanceEnumeration& anInstanceEnumeration) {

#ifdef DEBUG
    std::cout << "Using default enumInstances implementation for Linux_SambaDenyHostsForShare" << std::endl;
    std::cout << "Let's get the instanceNames" << std::endl;
#endif    

    Linux_SambaDenyHostsForShareInstanceNameEnumeration namesEnumeration;
    enumInstanceNames(aContext,aBroker,aNameSpaceP,namesEnumeration);

#ifdef DEBUG
    std::cout << "Getting each instance" << std::endl;
#endif    
    
    while (namesEnumeration.hasNext()) {
    
      Linux_SambaDenyHostsForShareInstanceName instanceName = namesEnumeration.getNext();
    
      Linux_SambaDenyHostsForShareRepositoryInstance repositoryInstance;

      // try to fetch repository instance
      try {
        Linux_SambaDenyHostsForShareInstanceName repositoryInstanceName(instanceName);
        repositoryInstanceName.setNamespace("IBMShadow/cimv2");
        CmpiObjectPath repositoryCmpiObjectPath = repositoryInstanceName.getObjectPath();
        CmpiBroker cmpiBroker(aBroker);
        CmpiInstance repositoryCmpiInstance = cmpiBroker.getInstance(
            aContext,
            repositoryCmpiObjectPath,
            aPropertiesPP);
        Linux_SambaDenyHostsForShareRepositoryInstance localRepositoryInstance(
      	  repositoryCmpiInstance,
          "IBMShadow/cimv2");
        repositoryInstance = localRepositoryInstance;
      } catch (const CmpiStatus& rc) { }                             
    
#ifdef DEBUG
    	std::cout << "Getting an instance for instanceName" << std::endl;
#endif
    	
    	Linux_SambaDenyHostsForShareManualInstance instance = getInstance(
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
  Linux_SambaDenyHostsForShareManualInstance 
  Linux_SambaDenyHostsForShareDefaultImplementation::getInstance(
    const CmpiContext& aContext,
    const CmpiBroker& aBroker,
    const char** aPropertiesPP,
    const Linux_SambaDenyHostsForShareInstanceName& anInstanceName) {

#ifdef DEBUG
    std::cout << "getInstance not supported for Linux_SambaDenyHostsForShare" << std::endl;
#endif
    	

    throw CmpiErrorFormater::getErrorException(
   	  CmpiErrorFormater::NOT_IMPLEMENTED,
   	  "getInstance",
   	  "Linux_SambaDenyHostsForShare");

  }
  	
  //----------------------------------------------------------------------------	
  void 
  Linux_SambaDenyHostsForShareDefaultImplementation::setInstance(
    const CmpiContext& aContext,
    const CmpiBroker& aBroker,
    const char** aPropertiesPP,
    const Linux_SambaDenyHostsForShareManualInstance& aManualInstance) {
  
#ifdef DEBUG
    std::cout << "setInstance not supported for Linux_SambaDenyHostsForShare" << std::endl;
#endif
    	
   
    throw CmpiErrorFormater::getErrorException(
   	  CmpiErrorFormater::NOT_IMPLEMENTED,
   	  "setInstance",
   	  "Linux_SambaDenyHostsForShare");
   	 
  }
  	
  //----------------------------------------------------------------------------	
  Linux_SambaDenyHostsForShareInstanceName  
  Linux_SambaDenyHostsForShareDefaultImplementation::createInstance(
    const CmpiContext& aContext, 
    const CmpiBroker& aBroker,
    const Linux_SambaDenyHostsForShareManualInstance& aManualInstance) {

#ifdef DEBUG
   	std::cout << "createInstance not supported for Linux_SambaDenyHostsForShare" << std::endl;
#endif

    throw CmpiErrorFormater::getErrorException(
   	 CmpiErrorFormater::NOT_IMPLEMENTED,
   	 "createInstance",
   	 "Linux_SambaDenyHostsForShare");

  }

  //----------------------------------------------------------------------------	
  void 
  Linux_SambaDenyHostsForShareDefaultImplementation::deleteInstance(
    const CmpiContext& aContext, 
    const CmpiBroker& aBroker,
    const Linux_SambaDenyHostsForShareInstanceName& anInstanceName) {

#ifdef DEBUG
   	std::cout << "deleteInstance not supported for Linux_SambaDenyHostsForShare" << std::endl;
#endif

    throw CmpiErrorFormater::getErrorException(
      CmpiErrorFormater::NOT_IMPLEMENTED,
      "deleteInstance",
      "Linux_SambaDenyHostsForShare");

  }

  
  // Association Interface

  //----------------------------------------------------------------------------
  void
  Linux_SambaDenyHostsForShareDefaultImplementation::referencesPartComponent( 
    const CmpiContext& aContext,  
    const CmpiBroker& aBroker,
    const char* aNameSpaceP,
    const char** aPropertiesPP,
    const Linux_SambaShareOptionsInstanceName& aSourceInstance,
    Linux_SambaDenyHostsForShareManualInstanceEnumeration& aManualInstanceEnumeration) {
    
    throw CmpiErrorFormater::getErrorException(
      CmpiErrorFormater::NOT_IMPLEMENTED,
      "References(PartComponent)",
      "Linux_SambaDenyHostsForShare");

  }

  //----------------------------------------------------------------------------
  void
  Linux_SambaDenyHostsForShareDefaultImplementation::referencesGroupComponent( 
    const CmpiContext& aContext,  
    const CmpiBroker& aBroker,
    const char* aNameSpaceP,
    const char** aPropertiesPP,
    const Linux_SambaHostInstanceName& aSourceInstance,
    Linux_SambaDenyHostsForShareManualInstanceEnumeration& aManualInstanceEnumeration) {
    
    throw CmpiErrorFormater::getErrorException(
      CmpiErrorFormater::NOT_IMPLEMENTED,
      "References(GroupComponent)",
      "Linux_SambaDenyHostsForShare");

  }

  //----------------------------------------------------------------------------
  void
  Linux_SambaDenyHostsForShareDefaultImplementation::associatorsPartComponent(
    const CmpiContext& aContext,  
    const CmpiBroker& aBroker,
    const char* aNameSpaceP,
    const char** aPropertiesPP,
    const Linux_SambaShareOptionsInstanceName& aSourceInstance,
    Linux_SambaHostInstanceEnumeration& anInstanceEnumeration) {
      
#ifdef DEBUG
    std::cout<<"Linux_SambaDenyHostsForShare : associatorsLinux_SambaHost() ... returns one instance"<<std::endl;
#endif    
      
    Linux_SambaDenyHostsForShareManualInstanceEnumeration manualInstanceEnumeration;
      
    referencesPartComponent(
      aContext,
      aBroker,
      aSourceInstance.getNamespace(), 
      aPropertiesPP,
      aSourceInstance,
      manualInstanceEnumeration);

    Linux_SambaHostExternal external(aBroker,aContext);

    while (manualInstanceEnumeration.hasNext()) {
      const Linux_SambaDenyHostsForShareManualInstance manualInstance = manualInstanceEnumeration.getNext();
      const Linux_SambaDenyHostsForShareInstanceName instanceName = manualInstance.getInstanceName();
      const Linux_SambaHostInstanceName PartComponent = instanceName.getPartComponent();
      Linux_SambaHostInstance instance = external.getInstance(aPropertiesPP,PartComponent);
      anInstanceEnumeration.addElement(instance);
    }
  
  }

  //----------------------------------------------------------------------------
  void
  Linux_SambaDenyHostsForShareDefaultImplementation::associatorsGroupComponent( 
    const CmpiContext& aContext,  
    const CmpiBroker& aBroker,
    const char* aNameSpaceP,
    const char** aPropertiesPP,
    const Linux_SambaHostInstanceName& aSourceInstance,
    Linux_SambaShareOptionsInstanceEnumeration& anInstanceEnumeration) {
     
#ifdef DEBUG
    std::cout << "Linux_SambaDenyHostsForShare : associatorsLinux_SambaShareOptions() ... returns one instance" << std::endl;
#endif    
      
    Linux_SambaDenyHostsForShareManualInstanceEnumeration manualInstanceEnumeration;
      
    referencesGroupComponent(
      aContext,
      aBroker,
      aSourceInstance.getNamespace(), 
      aPropertiesPP,
      aSourceInstance,
      manualInstanceEnumeration);

    Linux_SambaShareOptionsExternal external(aBroker,aContext);

    while(manualInstanceEnumeration.hasNext()) {
      const Linux_SambaDenyHostsForShareManualInstance manualInstance = manualInstanceEnumeration.getNext();
      const Linux_SambaDenyHostsForShareInstanceName instanceName = manualInstance.getInstanceName();
      const Linux_SambaShareOptionsInstanceName GroupComponent = instanceName.getGroupComponent();
      Linux_SambaShareOptionsInstance instance = external.getInstance(aPropertiesPP,GroupComponent);
      anInstanceEnumeration.addElement(instance);
    }

  }

  /* extrinsic methods */
  

}
