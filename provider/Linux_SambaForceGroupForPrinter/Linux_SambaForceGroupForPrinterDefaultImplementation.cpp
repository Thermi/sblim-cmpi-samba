// =======================================================================
// Linux_SambaForceGroupForPrinterDefaultImplementation.cpp
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

#include "Linux_SambaForceGroupForPrinterDefaultImplementation.h"
#include "Linux_SambaForceGroupForPrinterRepositoryInstance.h"
#include <iostream>

namespace genProvider {

  /* intrinsic methods */
  //----------------------------------------------------------------------------	
  void
  Linux_SambaForceGroupForPrinterDefaultImplementation::enumInstanceNames(
    const CmpiContext& aContext,
    const CmpiBroker& aBroker,
    const char* aNameSpaceP,
    Linux_SambaForceGroupForPrinterInstanceNameEnumeration& anInstanceNameEnumeration) {

#ifdef DEBUG
   	std::cout << "enumInstanceNames not supported for Linux_SambaForceGroupForPrinter" << std::endl;
#endif   	

   	throw CmpiErrorFormater::getErrorException(
   	  CmpiErrorFormater::NOT_IMPLEMENTED,
   	  "enumInstanceEnumeration",
   	  "Linux_SambaForceGroupForPrinter");   

  }

  //----------------------------------------------------------------------------	
  void 
  Linux_SambaForceGroupForPrinterDefaultImplementation::enumInstances(
    const CmpiContext& aContext,
    const CmpiBroker& aBroker,
    const char* aNameSpaceP,
    const char** aPropertiesPP,
    Linux_SambaForceGroupForPrinterManualInstanceEnumeration& anInstanceEnumeration) {

#ifdef DEBUG
    std::cout << "Using default enumInstances implementation for Linux_SambaForceGroupForPrinter" << std::endl;
    std::cout << "Let's get the instanceNames" << std::endl;
#endif    

    Linux_SambaForceGroupForPrinterInstanceNameEnumeration namesEnumeration;
    enumInstanceNames(aContext,aBroker,aNameSpaceP,namesEnumeration);

#ifdef DEBUG
    std::cout << "Getting each instance" << std::endl;
#endif    
    
    while (namesEnumeration.hasNext()) {
    
      Linux_SambaForceGroupForPrinterInstanceName instanceName = namesEnumeration.getNext();
    
      Linux_SambaForceGroupForPrinterRepositoryInstance repositoryInstance;

      // try to fetch repository instance
      try {
        Linux_SambaForceGroupForPrinterInstanceName repositoryInstanceName(instanceName);
        repositoryInstanceName.setNamespace("IBMShadow/cimv2");
        CmpiObjectPath repositoryCmpiObjectPath = repositoryInstanceName.getObjectPath();
        CmpiBroker cmpiBroker(aBroker);
        CmpiInstance repositoryCmpiInstance = cmpiBroker.getInstance(
            aContext,
            repositoryCmpiObjectPath,
            aPropertiesPP);
        Linux_SambaForceGroupForPrinterRepositoryInstance localRepositoryInstance(
      	  repositoryCmpiInstance,
          "IBMShadow/cimv2");
        repositoryInstance = localRepositoryInstance;
      } catch (const CmpiStatus& rc) { }                             
    
#ifdef DEBUG
    	std::cout << "Getting an instance for instanceName" << std::endl;
#endif
    	
    	Linux_SambaForceGroupForPrinterManualInstance instance = getInstance(
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
  Linux_SambaForceGroupForPrinterManualInstance 
  Linux_SambaForceGroupForPrinterDefaultImplementation::getInstance(
    const CmpiContext& aContext,
    const CmpiBroker& aBroker,
    const char** aPropertiesPP,
    const Linux_SambaForceGroupForPrinterInstanceName& anInstanceName) {

#ifdef DEBUG
    std::cout << "getInstance not supported for Linux_SambaForceGroupForPrinter" << std::endl;
#endif
    	

    throw CmpiErrorFormater::getErrorException(
   	  CmpiErrorFormater::NOT_IMPLEMENTED,
   	  "getInstance",
   	  "Linux_SambaForceGroupForPrinter");

  }
  	
  //----------------------------------------------------------------------------	
  void 
  Linux_SambaForceGroupForPrinterDefaultImplementation::setInstance(
    const CmpiContext& aContext,
    const CmpiBroker& aBroker,
    const char** aPropertiesPP,
    const Linux_SambaForceGroupForPrinterManualInstance& aManualInstance) {
  
#ifdef DEBUG
    std::cout << "setInstance not supported for Linux_SambaForceGroupForPrinter" << std::endl;
#endif
    	
   
    throw CmpiErrorFormater::getErrorException(
   	  CmpiErrorFormater::NOT_IMPLEMENTED,
   	  "setInstance",
   	  "Linux_SambaForceGroupForPrinter");
   	 
  }
  	
  //----------------------------------------------------------------------------	
  Linux_SambaForceGroupForPrinterInstanceName  
  Linux_SambaForceGroupForPrinterDefaultImplementation::createInstance(
    const CmpiContext& aContext, 
    const CmpiBroker& aBroker,
    const Linux_SambaForceGroupForPrinterManualInstance& aManualInstance) {

#ifdef DEBUG
   	std::cout << "createInstance not supported for Linux_SambaForceGroupForPrinter" << std::endl;
#endif

    throw CmpiErrorFormater::getErrorException(
   	 CmpiErrorFormater::NOT_IMPLEMENTED,
   	 "createInstance",
   	 "Linux_SambaForceGroupForPrinter");

  }

  //----------------------------------------------------------------------------	
  void 
  Linux_SambaForceGroupForPrinterDefaultImplementation::deleteInstance(
    const CmpiContext& aContext, 
    const CmpiBroker& aBroker,
    const Linux_SambaForceGroupForPrinterInstanceName& anInstanceName) {

#ifdef DEBUG
   	std::cout << "deleteInstance not supported for Linux_SambaForceGroupForPrinter" << std::endl;
#endif

    throw CmpiErrorFormater::getErrorException(
      CmpiErrorFormater::NOT_IMPLEMENTED,
      "deleteInstance",
      "Linux_SambaForceGroupForPrinter");

  }

  
  // Association Interface

  //----------------------------------------------------------------------------
  void
  Linux_SambaForceGroupForPrinterDefaultImplementation::referencesGroupComponent( 
    const CmpiContext& aContext,  
    const CmpiBroker& aBroker,
    const char* aNameSpaceP,
    const char** aPropertiesPP,
    const Linux_SambaGroupInstanceName& aSourceInstance,
    Linux_SambaForceGroupForPrinterManualInstanceEnumeration& aManualInstanceEnumeration) {
    
    throw CmpiErrorFormater::getErrorException(
      CmpiErrorFormater::NOT_IMPLEMENTED,
      "References(GroupComponent)",
      "Linux_SambaForceGroupForPrinter");

  }

  //----------------------------------------------------------------------------
  void
  Linux_SambaForceGroupForPrinterDefaultImplementation::referencesPartComponent( 
    const CmpiContext& aContext,  
    const CmpiBroker& aBroker,
    const char* aNameSpaceP,
    const char** aPropertiesPP,
    const Linux_SambaPrinterOptionsInstanceName& aSourceInstance,
    Linux_SambaForceGroupForPrinterManualInstanceEnumeration& aManualInstanceEnumeration) {
    
    throw CmpiErrorFormater::getErrorException(
      CmpiErrorFormater::NOT_IMPLEMENTED,
      "References(PartComponent)",
      "Linux_SambaForceGroupForPrinter");

  }

  //----------------------------------------------------------------------------
  void
  Linux_SambaForceGroupForPrinterDefaultImplementation::associatorsGroupComponent(
    const CmpiContext& aContext,  
    const CmpiBroker& aBroker,
    const char* aNameSpaceP,
    const char** aPropertiesPP,
    const Linux_SambaGroupInstanceName& aSourceInstance,
    Linux_SambaPrinterOptionsInstanceEnumeration& anInstanceEnumeration) {
      
#ifdef DEBUG
    std::cout<<"Linux_SambaForceGroupForPrinter : associatorsLinux_SambaPrinterOptions() ... returns one instance"<<std::endl;
#endif    
      
    Linux_SambaForceGroupForPrinterManualInstanceEnumeration manualInstanceEnumeration;
      
    referencesGroupComponent(
      aContext,
      aBroker,
      aSourceInstance.getNamespace(), 
      aPropertiesPP,
      aSourceInstance,
      manualInstanceEnumeration);

    Linux_SambaPrinterOptionsExternal external(aBroker,aContext);

    while (manualInstanceEnumeration.hasNext()) {
      const Linux_SambaForceGroupForPrinterManualInstance manualInstance = manualInstanceEnumeration.getNext();
      const Linux_SambaForceGroupForPrinterInstanceName instanceName = manualInstance.getInstanceName();
      const Linux_SambaPrinterOptionsInstanceName GroupComponent = instanceName.getGroupComponent();
      Linux_SambaPrinterOptionsInstance instance = external.getInstance(aPropertiesPP,GroupComponent);
      anInstanceEnumeration.addElement(instance);
    }
  
  }

  //----------------------------------------------------------------------------
  void
  Linux_SambaForceGroupForPrinterDefaultImplementation::associatorsPartComponent( 
    const CmpiContext& aContext,  
    const CmpiBroker& aBroker,
    const char* aNameSpaceP,
    const char** aPropertiesPP,
    const Linux_SambaPrinterOptionsInstanceName& aSourceInstance,
    Linux_SambaGroupInstanceEnumeration& anInstanceEnumeration) {
     
#ifdef DEBUG
    std::cout << "Linux_SambaForceGroupForPrinter : associatorsLinux_SambaGroup() ... returns one instance" << std::endl;
#endif    
      
    Linux_SambaForceGroupForPrinterManualInstanceEnumeration manualInstanceEnumeration;
      
    referencesPartComponent(
      aContext,
      aBroker,
      aSourceInstance.getNamespace(), 
      aPropertiesPP,
      aSourceInstance,
      manualInstanceEnumeration);

    Linux_SambaGroupExternal external(aBroker,aContext);

    while(manualInstanceEnumeration.hasNext()) {
      const Linux_SambaForceGroupForPrinterManualInstance manualInstance = manualInstanceEnumeration.getNext();
      const Linux_SambaForceGroupForPrinterInstanceName instanceName = manualInstance.getInstanceName();
      const Linux_SambaGroupInstanceName PartComponent = instanceName.getPartComponent();
      Linux_SambaGroupInstance instance = external.getInstance(aPropertiesPP,PartComponent);
      anInstanceEnumeration.addElement(instance);
    }

  }

  /* extrinsic methods */
  

}
