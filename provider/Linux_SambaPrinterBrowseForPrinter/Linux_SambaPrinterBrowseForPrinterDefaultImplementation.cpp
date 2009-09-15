// =======================================================================
// Linux_SambaPrinterBrowseForPrinterDefaultImplementation.cpp
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

#include "Linux_SambaPrinterBrowseForPrinterDefaultImplementation.h"
#include "Linux_SambaPrinterBrowseForPrinterRepositoryInstance.h"
#include <iostream>

namespace genProvider {

  /* intrinsic methods */
  //----------------------------------------------------------------------------	
  void
  Linux_SambaPrinterBrowseForPrinterDefaultImplementation::enumInstanceNames(
    const CmpiContext& aContext,
    const CmpiBroker& aBroker,
    const char* aNameSpaceP,
    Linux_SambaPrinterBrowseForPrinterInstanceNameEnumeration& anInstanceNameEnumeration) {

#ifdef DEBUG
   	std::cout << "enumInstanceNames not supported for Linux_SambaPrinterBrowseForPrinter" << std::endl;
#endif   	

   	throw CmpiErrorFormater::getErrorException(
   	  CmpiErrorFormater::NOT_IMPLEMENTED,
   	  "enumInstanceEnumeration",
   	  "Linux_SambaPrinterBrowseForPrinter");   

  }

  //----------------------------------------------------------------------------	
  void 
  Linux_SambaPrinterBrowseForPrinterDefaultImplementation::enumInstances(
    const CmpiContext& aContext,
    const CmpiBroker& aBroker,
    const char* aNameSpaceP,
    const char** aPropertiesPP,
    Linux_SambaPrinterBrowseForPrinterManualInstanceEnumeration& anInstanceEnumeration) {

#ifdef DEBUG
    std::cout << "Using default enumInstances implementation for Linux_SambaPrinterBrowseForPrinter" << std::endl;
    std::cout << "Let's get the instanceNames" << std::endl;
#endif    

    Linux_SambaPrinterBrowseForPrinterInstanceNameEnumeration namesEnumeration;
    enumInstanceNames(aContext,aBroker,aNameSpaceP,namesEnumeration);

#ifdef DEBUG
    std::cout << "Getting each instance" << std::endl;
#endif    
    
    while (namesEnumeration.hasNext()) {
    
      Linux_SambaPrinterBrowseForPrinterInstanceName instanceName = namesEnumeration.getNext();
    
      Linux_SambaPrinterBrowseForPrinterRepositoryInstance repositoryInstance;

      // try to fetch repository instance
      try {
        Linux_SambaPrinterBrowseForPrinterInstanceName repositoryInstanceName(instanceName);
        repositoryInstanceName.setNamespace("IBMShadow/cimv2");
        CmpiObjectPath repositoryCmpiObjectPath = repositoryInstanceName.getObjectPath();
        CmpiBroker cmpiBroker(aBroker);
        CmpiInstance repositoryCmpiInstance = cmpiBroker.getInstance(
            aContext,
            repositoryCmpiObjectPath,
            aPropertiesPP);
        Linux_SambaPrinterBrowseForPrinterRepositoryInstance localRepositoryInstance(
      	  repositoryCmpiInstance,
          "IBMShadow/cimv2");
        repositoryInstance = localRepositoryInstance;
      } catch (const CmpiStatus& rc) { }                             
    
#ifdef DEBUG
    	std::cout << "Getting an instance for instanceName" << std::endl;
#endif
    	
    	Linux_SambaPrinterBrowseForPrinterManualInstance instance = getInstance(
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
  Linux_SambaPrinterBrowseForPrinterManualInstance 
  Linux_SambaPrinterBrowseForPrinterDefaultImplementation::getInstance(
    const CmpiContext& aContext,
    const CmpiBroker& aBroker,
    const char** aPropertiesPP,
    const Linux_SambaPrinterBrowseForPrinterInstanceName& anInstanceName) {

#ifdef DEBUG
    std::cout << "getInstance not supported for Linux_SambaPrinterBrowseForPrinter" << std::endl;
#endif
    	

    throw CmpiErrorFormater::getErrorException(
   	  CmpiErrorFormater::NOT_IMPLEMENTED,
   	  "getInstance",
   	  "Linux_SambaPrinterBrowseForPrinter");

  }
  	
  //----------------------------------------------------------------------------	
  void 
  Linux_SambaPrinterBrowseForPrinterDefaultImplementation::setInstance(
    const CmpiContext& aContext,
    const CmpiBroker& aBroker,
    const char** aPropertiesPP,
    const Linux_SambaPrinterBrowseForPrinterManualInstance& aManualInstance) {
  
#ifdef DEBUG
    std::cout << "setInstance not supported for Linux_SambaPrinterBrowseForPrinter" << std::endl;
#endif
    	
   
    throw CmpiErrorFormater::getErrorException(
   	  CmpiErrorFormater::NOT_IMPLEMENTED,
   	  "setInstance",
   	  "Linux_SambaPrinterBrowseForPrinter");
   	 
  }
  	
  //----------------------------------------------------------------------------	
  Linux_SambaPrinterBrowseForPrinterInstanceName  
  Linux_SambaPrinterBrowseForPrinterDefaultImplementation::createInstance(
    const CmpiContext& aContext, 
    const CmpiBroker& aBroker,
    const Linux_SambaPrinterBrowseForPrinterManualInstance& aManualInstance) {

#ifdef DEBUG
   	std::cout << "createInstance not supported for Linux_SambaPrinterBrowseForPrinter" << std::endl;
#endif

    throw CmpiErrorFormater::getErrorException(
   	 CmpiErrorFormater::NOT_IMPLEMENTED,
   	 "createInstance",
   	 "Linux_SambaPrinterBrowseForPrinter");

  }

  //----------------------------------------------------------------------------	
  void 
  Linux_SambaPrinterBrowseForPrinterDefaultImplementation::deleteInstance(
    const CmpiContext& aContext, 
    const CmpiBroker& aBroker,
    const Linux_SambaPrinterBrowseForPrinterInstanceName& anInstanceName) {

#ifdef DEBUG
   	std::cout << "deleteInstance not supported for Linux_SambaPrinterBrowseForPrinter" << std::endl;
#endif

    throw CmpiErrorFormater::getErrorException(
      CmpiErrorFormater::NOT_IMPLEMENTED,
      "deleteInstance",
      "Linux_SambaPrinterBrowseForPrinter");

  }

  
  // Association Interface

  //----------------------------------------------------------------------------
  void
  Linux_SambaPrinterBrowseForPrinterDefaultImplementation::referencesManagedElement( 
    const CmpiContext& aContext,  
    const CmpiBroker& aBroker,
    const char* aNameSpaceP,
    const char** aPropertiesPP,
    const Linux_SambaPrinterBrowseOptionsInstanceName& aSourceInstance,
    Linux_SambaPrinterBrowseForPrinterManualInstanceEnumeration& aManualInstanceEnumeration) {
    
    throw CmpiErrorFormater::getErrorException(
      CmpiErrorFormater::NOT_IMPLEMENTED,
      "References(ManagedElement)",
      "Linux_SambaPrinterBrowseForPrinter");

  }

  //----------------------------------------------------------------------------
  void
  Linux_SambaPrinterBrowseForPrinterDefaultImplementation::referencesSettingData( 
    const CmpiContext& aContext,  
    const CmpiBroker& aBroker,
    const char* aNameSpaceP,
    const char** aPropertiesPP,
    const Linux_SambaPrinterOptionsInstanceName& aSourceInstance,
    Linux_SambaPrinterBrowseForPrinterManualInstanceEnumeration& aManualInstanceEnumeration) {
    
    throw CmpiErrorFormater::getErrorException(
      CmpiErrorFormater::NOT_IMPLEMENTED,
      "References(SettingData)",
      "Linux_SambaPrinterBrowseForPrinter");

  }

  //----------------------------------------------------------------------------
  void
  Linux_SambaPrinterBrowseForPrinterDefaultImplementation::associatorsManagedElement(
    const CmpiContext& aContext,  
    const CmpiBroker& aBroker,
    const char* aNameSpaceP,
    const char** aPropertiesPP,
    const Linux_SambaPrinterBrowseOptionsInstanceName& aSourceInstance,
    Linux_SambaPrinterOptionsInstanceEnumeration& anInstanceEnumeration) {
      
#ifdef DEBUG
    std::cout<<"Linux_SambaPrinterBrowseForPrinter : associatorsLinux_SambaPrinterOptions() ... returns one instance"<<std::endl;
#endif    
      
    Linux_SambaPrinterBrowseForPrinterManualInstanceEnumeration manualInstanceEnumeration;
      
    referencesManagedElement(
      aContext,
      aBroker,
      aSourceInstance.getNamespace(), 
      aPropertiesPP,
      aSourceInstance,
      manualInstanceEnumeration);

    Linux_SambaPrinterOptionsExternal external(aBroker,aContext);

    while (manualInstanceEnumeration.hasNext()) {
      const Linux_SambaPrinterBrowseForPrinterManualInstance manualInstance = manualInstanceEnumeration.getNext();
      const Linux_SambaPrinterBrowseForPrinterInstanceName instanceName = manualInstance.getInstanceName();
      const Linux_SambaPrinterOptionsInstanceName ManagedElement = instanceName.getManagedElement();
      Linux_SambaPrinterOptionsInstance instance = external.getInstance(aPropertiesPP,ManagedElement);
      anInstanceEnumeration.addElement(instance);
    }
  
  }

  //----------------------------------------------------------------------------
  void
  Linux_SambaPrinterBrowseForPrinterDefaultImplementation::associatorsSettingData( 
    const CmpiContext& aContext,  
    const CmpiBroker& aBroker,
    const char* aNameSpaceP,
    const char** aPropertiesPP,
    const Linux_SambaPrinterOptionsInstanceName& aSourceInstance,
    Linux_SambaPrinterBrowseOptionsInstanceEnumeration& anInstanceEnumeration) {
     
#ifdef DEBUG
    std::cout << "Linux_SambaPrinterBrowseForPrinter : associatorsLinux_SambaPrinterBrowseOptions() ... returns one instance" << std::endl;
#endif    
      
    Linux_SambaPrinterBrowseForPrinterManualInstanceEnumeration manualInstanceEnumeration;
      
    referencesSettingData(
      aContext,
      aBroker,
      aSourceInstance.getNamespace(), 
      aPropertiesPP,
      aSourceInstance,
      manualInstanceEnumeration);

    Linux_SambaPrinterBrowseOptionsExternal external(aBroker,aContext);

    while(manualInstanceEnumeration.hasNext()) {
      const Linux_SambaPrinterBrowseForPrinterManualInstance manualInstance = manualInstanceEnumeration.getNext();
      const Linux_SambaPrinterBrowseForPrinterInstanceName instanceName = manualInstance.getInstanceName();
      const Linux_SambaPrinterBrowseOptionsInstanceName SettingData = instanceName.getSettingData();
      Linux_SambaPrinterBrowseOptionsInstance instance = external.getInstance(aPropertiesPP,SettingData);
      anInstanceEnumeration.addElement(instance);
    }

  }

  /* extrinsic methods */
  

}
