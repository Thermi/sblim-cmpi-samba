// =======================================================================
// Linux_SambaGlobalPrintingOptionsDefaultImplementation.cpp
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

#include "Linux_SambaGlobalPrintingOptionsDefaultImplementation.h"
#include "Linux_SambaGlobalPrintingOptionsRepositoryInstance.h"
#include <iostream>

namespace genProvider {

  /* intrinsic methods */
  //----------------------------------------------------------------------------	
  void
  Linux_SambaGlobalPrintingOptionsDefaultImplementation::enumInstanceNames(
    const CmpiContext& aContext,
    const CmpiBroker& aBroker,
    const char* aNameSpaceP,
    Linux_SambaGlobalPrintingOptionsInstanceNameEnumeration& anInstanceNameEnumeration) {

#ifdef DEBUG
   	std::cout << "enumInstanceNames not supported for Linux_SambaGlobalPrintingOptions" << std::endl;
#endif   	

   	throw CmpiErrorFormater::getErrorException(
   	  CmpiErrorFormater::NOT_IMPLEMENTED,
   	  "enumInstanceEnumeration",
   	  "Linux_SambaGlobalPrintingOptions");   

  }

  //----------------------------------------------------------------------------	
  void 
  Linux_SambaGlobalPrintingOptionsDefaultImplementation::enumInstances(
    const CmpiContext& aContext,
    const CmpiBroker& aBroker,
    const char* aNameSpaceP,
    const char** aPropertiesPP,
    Linux_SambaGlobalPrintingOptionsManualInstanceEnumeration& anInstanceEnumeration) {

#ifdef DEBUG
    std::cout << "Using default enumInstances implementation for Linux_SambaGlobalPrintingOptions" << std::endl;
    std::cout << "Let's get the instanceNames" << std::endl;
#endif    

    Linux_SambaGlobalPrintingOptionsInstanceNameEnumeration namesEnumeration;
    enumInstanceNames(aContext,aBroker,aNameSpaceP,namesEnumeration);

#ifdef DEBUG
    std::cout << "Getting each instance" << std::endl;
#endif    
    
    while (namesEnumeration.hasNext()) {
    
      Linux_SambaGlobalPrintingOptionsInstanceName instanceName = namesEnumeration.getNext();
    
      Linux_SambaGlobalPrintingOptionsRepositoryInstance repositoryInstance;

      // try to fetch repository instance
      try {
        Linux_SambaGlobalPrintingOptionsInstanceName repositoryInstanceName(instanceName);
        repositoryInstanceName.setNamespace("IBMShadow/cimv2");
        CmpiObjectPath repositoryCmpiObjectPath = repositoryInstanceName.getObjectPath();
        CmpiBroker cmpiBroker(aBroker);
        CmpiInstance repositoryCmpiInstance = cmpiBroker.getInstance(
            aContext,
            repositoryCmpiObjectPath,
            aPropertiesPP);
        Linux_SambaGlobalPrintingOptionsRepositoryInstance localRepositoryInstance(
      	  repositoryCmpiInstance,
          "IBMShadow/cimv2");
        repositoryInstance = localRepositoryInstance;
      } catch (const CmpiStatus& rc) { }                             
    
#ifdef DEBUG
    	std::cout << "Getting an instance for instanceName" << std::endl;
#endif
    	
    	Linux_SambaGlobalPrintingOptionsManualInstance instance = getInstance(
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
  Linux_SambaGlobalPrintingOptionsManualInstance 
  Linux_SambaGlobalPrintingOptionsDefaultImplementation::getInstance(
    const CmpiContext& aContext,
    const CmpiBroker& aBroker,
    const char** aPropertiesPP,
    const Linux_SambaGlobalPrintingOptionsInstanceName& anInstanceName) {

#ifdef DEBUG
    std::cout << "getInstance not supported for Linux_SambaGlobalPrintingOptions" << std::endl;
#endif
    	

    throw CmpiErrorFormater::getErrorException(
   	  CmpiErrorFormater::NOT_IMPLEMENTED,
   	  "getInstance",
   	  "Linux_SambaGlobalPrintingOptions");

  }
  	
  //----------------------------------------------------------------------------	
  void 
  Linux_SambaGlobalPrintingOptionsDefaultImplementation::setInstance(
    const CmpiContext& aContext,
    const CmpiBroker& aBroker,
    const char** aPropertiesPP,
    const Linux_SambaGlobalPrintingOptionsManualInstance& aManualInstance) {
  
#ifdef DEBUG
    std::cout << "setInstance not supported for Linux_SambaGlobalPrintingOptions" << std::endl;
#endif
    	
   
    throw CmpiErrorFormater::getErrorException(
   	  CmpiErrorFormater::NOT_IMPLEMENTED,
   	  "setInstance",
   	  "Linux_SambaGlobalPrintingOptions");
   	 
  }
  	
  //----------------------------------------------------------------------------	
  Linux_SambaGlobalPrintingOptionsInstanceName  
  Linux_SambaGlobalPrintingOptionsDefaultImplementation::createInstance(
    const CmpiContext& aContext, 
    const CmpiBroker& aBroker,
    const Linux_SambaGlobalPrintingOptionsManualInstance& aManualInstance) {

#ifdef DEBUG
   	std::cout << "createInstance not supported for Linux_SambaGlobalPrintingOptions" << std::endl;
#endif

    throw CmpiErrorFormater::getErrorException(
   	 CmpiErrorFormater::NOT_IMPLEMENTED,
   	 "createInstance",
   	 "Linux_SambaGlobalPrintingOptions");

  }

  //----------------------------------------------------------------------------	
  void 
  Linux_SambaGlobalPrintingOptionsDefaultImplementation::deleteInstance(
    const CmpiContext& aContext, 
    const CmpiBroker& aBroker,
    const Linux_SambaGlobalPrintingOptionsInstanceName& anInstanceName) {

#ifdef DEBUG
   	std::cout << "deleteInstance not supported for Linux_SambaGlobalPrintingOptions" << std::endl;
#endif

    throw CmpiErrorFormater::getErrorException(
      CmpiErrorFormater::NOT_IMPLEMENTED,
      "deleteInstance",
      "Linux_SambaGlobalPrintingOptions");

  }

  

  /* extrinsic methods */
  

}
