// =======================================================================
// Linux_SambaWriteListForPrinterDefaultImplementation.cpp
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

#include "Linux_SambaWriteListForPrinterDefaultImplementation.h"
#include "Linux_SambaWriteListForPrinterRepositoryInstance.h"
#include <iostream>

namespace genProvider {

  /* intrinsic methods */
  //----------------------------------------------------------------------------	
  void
  Linux_SambaWriteListForPrinterDefaultImplementation::enumInstanceNames(
    const CmpiContext& aContext,
    const CmpiBroker& aBroker,
    const char* aNameSpaceP,
    Linux_SambaWriteListForPrinterInstanceNameEnumeration& anInstanceNameEnumeration) {

#ifdef DEBUG
   	std::cout << "enumInstanceNames not supported for Linux_SambaWriteListForPrinter" << std::endl;
#endif   	

   	throw CmpiErrorFormater::getErrorException(
   	  CmpiErrorFormater::NOT_IMPLEMENTED,
   	  "enumInstanceEnumeration",
   	  "Linux_SambaWriteListForPrinter");   

  }

  //----------------------------------------------------------------------------	
  void 
  Linux_SambaWriteListForPrinterDefaultImplementation::enumInstances(
    const CmpiContext& aContext,
    const CmpiBroker& aBroker,
    const char* aNameSpaceP,
    const char** aPropertiesPP,
    Linux_SambaWriteListForPrinterManualInstanceEnumeration& anInstanceEnumeration) {

#ifdef DEBUG
    std::cout << "Using default enumInstances implementation for Linux_SambaWriteListForPrinter" << std::endl;
    std::cout << "Let's get the instanceNames" << std::endl;
#endif    

    Linux_SambaWriteListForPrinterInstanceNameEnumeration namesEnumeration;
    enumInstanceNames(aContext,aBroker,aNameSpaceP,namesEnumeration);

#ifdef DEBUG
    std::cout << "Getting each instance" << std::endl;
#endif    
    
    while (namesEnumeration.hasNext()) {
    
      Linux_SambaWriteListForPrinterInstanceName instanceName = namesEnumeration.getNext();
    
      Linux_SambaWriteListForPrinterRepositoryInstance repositoryInstance;

      // try to fetch repository instance
      try {
        Linux_SambaWriteListForPrinterInstanceName repositoryInstanceName(instanceName);
        repositoryInstanceName.setNamespace("IBMShadow/cimv2");
        CmpiObjectPath repositoryCmpiObjectPath = repositoryInstanceName.getObjectPath();
        CmpiBroker cmpiBroker(aBroker);
        CmpiInstance repositoryCmpiInstance = cmpiBroker.getInstance(
            aContext,
            repositoryCmpiObjectPath,
            aPropertiesPP);
        Linux_SambaWriteListForPrinterRepositoryInstance localRepositoryInstance(
      	  repositoryCmpiInstance,
          "IBMShadow/cimv2");
        repositoryInstance = localRepositoryInstance;
      } catch (const CmpiStatus& rc) { }                             
    
#ifdef DEBUG
    	std::cout << "Getting an instance for instanceName" << std::endl;
#endif
    	
    	Linux_SambaWriteListForPrinterManualInstance instance = getInstance(
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
  Linux_SambaWriteListForPrinterManualInstance 
  Linux_SambaWriteListForPrinterDefaultImplementation::getInstance(
    const CmpiContext& aContext,
    const CmpiBroker& aBroker,
    const char** aPropertiesPP,
    const Linux_SambaWriteListForPrinterInstanceName& anInstanceName) {

#ifdef DEBUG
    std::cout << "getInstance not supported for Linux_SambaWriteListForPrinter" << std::endl;
#endif
    	

    throw CmpiErrorFormater::getErrorException(
   	  CmpiErrorFormater::NOT_IMPLEMENTED,
   	  "getInstance",
   	  "Linux_SambaWriteListForPrinter");

  }
  	
  //----------------------------------------------------------------------------	
  void 
  Linux_SambaWriteListForPrinterDefaultImplementation::setInstance(
    const CmpiContext& aContext,
    const CmpiBroker& aBroker,
    const char** aPropertiesPP,
    const Linux_SambaWriteListForPrinterManualInstance& aManualInstance) {
  
#ifdef DEBUG
    std::cout << "setInstance not supported for Linux_SambaWriteListForPrinter" << std::endl;
#endif
    	
   
    throw CmpiErrorFormater::getErrorException(
   	  CmpiErrorFormater::NOT_IMPLEMENTED,
   	  "setInstance",
   	  "Linux_SambaWriteListForPrinter");
   	 
  }
  	
  //----------------------------------------------------------------------------	
  Linux_SambaWriteListForPrinterInstanceName  
  Linux_SambaWriteListForPrinterDefaultImplementation::createInstance(
    const CmpiContext& aContext, 
    const CmpiBroker& aBroker,
    const Linux_SambaWriteListForPrinterManualInstance& aManualInstance) {

#ifdef DEBUG
   	std::cout << "createInstance not supported for Linux_SambaWriteListForPrinter" << std::endl;
#endif

    throw CmpiErrorFormater::getErrorException(
   	 CmpiErrorFormater::NOT_IMPLEMENTED,
   	 "createInstance",
   	 "Linux_SambaWriteListForPrinter");

  }

  //----------------------------------------------------------------------------	
  void 
  Linux_SambaWriteListForPrinterDefaultImplementation::deleteInstance(
    const CmpiContext& aContext, 
    const CmpiBroker& aBroker,
    const Linux_SambaWriteListForPrinterInstanceName& anInstanceName) {

#ifdef DEBUG
   	std::cout << "deleteInstance not supported for Linux_SambaWriteListForPrinter" << std::endl;
#endif

    throw CmpiErrorFormater::getErrorException(
      CmpiErrorFormater::NOT_IMPLEMENTED,
      "deleteInstance",
      "Linux_SambaWriteListForPrinter");

  }

  
  // Association Interface

  //----------------------------------------------------------------------------
  void
  Linux_SambaWriteListForPrinterDefaultImplementation::referencesPartComponent( 
    const CmpiContext& aContext,  
    const CmpiBroker& aBroker,
    const char* aNameSpaceP,
    const char** aPropertiesPP,
    const Linux_SambaPrinterOptionsInstanceName& aSourceInstance,
    Linux_SambaWriteListForPrinterManualInstanceEnumeration& aManualInstanceEnumeration) {
    
    throw CmpiErrorFormater::getErrorException(
      CmpiErrorFormater::NOT_IMPLEMENTED,
      "References(PartComponent)",
      "Linux_SambaWriteListForPrinter");

  }

  //----------------------------------------------------------------------------
  void
  Linux_SambaWriteListForPrinterDefaultImplementation::referencesGroupComponent( 
    const CmpiContext& aContext,  
    const CmpiBroker& aBroker,
    const char* aNameSpaceP,
    const char** aPropertiesPP,
    const Linux_SambaUserInstanceName& aSourceInstance,
    Linux_SambaWriteListForPrinterManualInstanceEnumeration& aManualInstanceEnumeration) {
    
    throw CmpiErrorFormater::getErrorException(
      CmpiErrorFormater::NOT_IMPLEMENTED,
      "References(GroupComponent)",
      "Linux_SambaWriteListForPrinter");

  }

  //----------------------------------------------------------------------------
  void
  Linux_SambaWriteListForPrinterDefaultImplementation::associatorsPartComponent(
    const CmpiContext& aContext,  
    const CmpiBroker& aBroker,
    const char* aNameSpaceP,
    const char** aPropertiesPP,
    const Linux_SambaPrinterOptionsInstanceName& aSourceInstance,
    Linux_SambaUserInstanceEnumeration& anInstanceEnumeration) {
      
#ifdef DEBUG
    std::cout<<"Linux_SambaWriteListForPrinter : associatorsLinux_SambaUser() ... returns one instance"<<std::endl;
#endif    
      
    Linux_SambaWriteListForPrinterManualInstanceEnumeration manualInstanceEnumeration;
      
    referencesPartComponent(
      aContext,
      aBroker,
      aSourceInstance.getNamespace(), 
      aPropertiesPP,
      aSourceInstance,
      manualInstanceEnumeration);

    Linux_SambaUserExternal external(aBroker,aContext);

    while (manualInstanceEnumeration.hasNext()) {
      const Linux_SambaWriteListForPrinterManualInstance manualInstance = manualInstanceEnumeration.getNext();
      const Linux_SambaWriteListForPrinterInstanceName instanceName = manualInstance.getInstanceName();
      const Linux_SambaUserInstanceName PartComponent = instanceName.getPartComponent();
      Linux_SambaUserInstance instance = external.getInstance(aPropertiesPP,PartComponent);
      anInstanceEnumeration.addElement(instance);
    }
  
  }

  //----------------------------------------------------------------------------
  void
  Linux_SambaWriteListForPrinterDefaultImplementation::associatorsGroupComponent( 
    const CmpiContext& aContext,  
    const CmpiBroker& aBroker,
    const char* aNameSpaceP,
    const char** aPropertiesPP,
    const Linux_SambaUserInstanceName& aSourceInstance,
    Linux_SambaPrinterOptionsInstanceEnumeration& anInstanceEnumeration) {
     
#ifdef DEBUG
    std::cout << "Linux_SambaWriteListForPrinter : associatorsLinux_SambaPrinterOptions() ... returns one instance" << std::endl;
#endif    
      
    Linux_SambaWriteListForPrinterManualInstanceEnumeration manualInstanceEnumeration;
      
    referencesGroupComponent(
      aContext,
      aBroker,
      aSourceInstance.getNamespace(), 
      aPropertiesPP,
      aSourceInstance,
      manualInstanceEnumeration);

    Linux_SambaPrinterOptionsExternal external(aBroker,aContext);

    while(manualInstanceEnumeration.hasNext()) {
      const Linux_SambaWriteListForPrinterManualInstance manualInstance = manualInstanceEnumeration.getNext();
      const Linux_SambaWriteListForPrinterInstanceName instanceName = manualInstance.getInstanceName();
      const Linux_SambaPrinterOptionsInstanceName GroupComponent = instanceName.getGroupComponent();
      Linux_SambaPrinterOptionsInstance instance = external.getInstance(aPropertiesPP,GroupComponent);
      anInstanceEnumeration.addElement(instance);
    }

  }

  /* extrinsic methods */
  

}
