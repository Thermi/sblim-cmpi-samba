// =======================================================================
// CmpiLinux_SambaValidUsersForShareProvider.cpp
//     created on Fri, 23 Jun 2006 using ECUTE 2.2.1
//
// Copyright (c) 2006, 2009, International Business Machines
//
// THIS FILE IS PROVIDED UNDER THE TERMS OF THE ECLIPSE PUBLIC LICENSE
// ("AGREEMENT"). ANY USE, REPRODUCTION OR DISTRIBUTION OF THIS FILE
// CONSTITUTES RECIPIENTS ACCEPTANCE OF THE AGREEMENT.
//
// You can obtain a current copy of the Eclipse Public License from
// http://www.opensource.org/licenses/eclipse-1.0.php
//
// Author:        generated
//
// Contributors:
//                Wolfgang Taphorn   <taphorn@de.ibm.com>
//                Mukunda Chowdaiah  <cmukunda@in.ibm.com>
//                Ashoka S Rao       <ashoka.rao@in.ibm.com>
//                Rodrigo Ceron      <rceron@br.ibm.com>
//                Riyashmon Haneefa  <riyashh1@in.ibm.com>
//
// =======================================================================
#include "CmpiLinux_SambaValidUsersForShareProvider.h"
#include "ArrayConverter.h"
#include "Linux_SambaValidUsersForShareManualInstance.h"
#include "Linux_SambaValidUsersForShareRepositoryInstance.h"
#include "Linux_SambaUserInstance.h"
#include "Linux_SambaShareOptionsInstance.h"


#include <iostream>
#include <strings.h>

namespace genProvider {

  //----------------------------------------------------------------------------
  CmpiLinux_SambaValidUsersForShareProvider::CmpiLinux_SambaValidUsersForShareProvider(
    const CmpiBroker& aBroker, 
    const CmpiContext& aContext)
    : CmpiBaseMI(aBroker,aContext), 
    CmpiInstanceMI(aBroker,aContext),
    CmpiMethodMI(aBroker,aContext),
     CmpiAssociationMI(aBroker,aContext),m_cmpiBroker(aBroker) {
      
    m_interfaceP = Linux_SambaValidUsersForShareFactory::getImplementation();           

#ifdef DEBUG 
    std::cout << "Provider was constructed" << std::endl;
#endif    
  
  }
        
  //----------------------------------------------------------------------------
  CmpiLinux_SambaValidUsersForShareProvider::~CmpiLinux_SambaValidUsersForShareProvider() {
    delete m_interfaceP;
  }
  
  //----------------------------------------------------------------------------
  int 
  CmpiLinux_SambaValidUsersForShareProvider::isUnloadable() const {
    return 0;
  }
	
  //----------------------------------------------------------------------------
  void 
  CmpiLinux_SambaValidUsersForShareProvider::completeInstance(
    const Linux_SambaValidUsersForShareInstanceName& anInstanceName,
    CmpiInstance& anInstance, 
    const CmpiContext& aContext) {
	  	
    Linux_SambaValidUsersForShareInstanceName shadowInstanceName(anInstanceName);
    shadowInstanceName.setNamespace("IBMShadow/cimv2");
    CmpiObjectPath cmpiObjectPath = shadowInstanceName.getObjectPath();
	  
    try {
      const char* propertiesP = 0;
      CmpiInstance shadowInstance = m_cmpiBroker.getInstance(
        aContext, 
        cmpiObjectPath,
        &propertiesP);
      copyShadowData(&shadowInstance,&anInstance);
    } catch (const CmpiStatus& rc) {}                             
  
  }
	
  //----------------------------------------------------------------------------
  void 
  CmpiLinux_SambaValidUsersForShareProvider::copyShadowData(
    const CmpiInstance* aSourceInstanceP, 
    CmpiInstance* aTargetInstanceP) {

    if (aSourceInstanceP && aTargetInstanceP) {
      
    }

  }

  //----------------------------------------------------------------------------
  CmpiInstance* 
  CmpiLinux_SambaValidUsersForShareProvider::getShadowInstance(
    const CmpiInstance& anInstance,
    const Linux_SambaValidUsersForShareInstanceName& anInstanceName) {
     
    Linux_SambaValidUsersForShareInstanceName shadowInstanceName(anInstanceName);
    shadowInstanceName.setNamespace("IBMShadow/cimv2");
    CmpiObjectPath cmpiObjectPath = shadowInstanceName.getObjectPath();
      
    CmpiInstance* targetP = new CmpiInstance(cmpiObjectPath);
      
    if (targetP) {
      copyShadowData(&anInstance,targetP);
      if (0 == targetP->getPropertyCount()) {
        delete targetP;
        targetP = 0;
      }
    }
  
    return targetP;
  
  }

  //----------------------------------------------------------------------------
  void
  CmpiLinux_SambaValidUsersForShareProvider::removeDanglingShadowInstances (
   const Linux_SambaValidUsersForShareInstanceNameEnumeration& anInstanceNameEnumerations) {
	
    // TODO: enumerate shadow instance names and remove those not included
	  // in anInstanceNameEnumeration
	
  }
	
  //----------------------------------------------------------------------------
  //                          Provider Factory
  //----------------------------------------------------------------------------
  CMProviderBase(CmpiLinux_SambaValidUsersForShareProvider);

  CMInstanceMIFactory(
    CmpiLinux_SambaValidUsersForShareProvider, 
    CmpiLinux_SambaValidUsersForShareProvider);

  CMMethodMIFactory(
    CmpiLinux_SambaValidUsersForShareProvider, 
    CmpiLinux_SambaValidUsersForShareProvider);    CMAssociationMIFactory(
      CmpiLinux_SambaValidUsersForShareProvider,
      CmpiLinux_SambaValidUsersForShareProvider);
	
	
  //----------------------------------------------------------------------------
  //                      Instance Provider Interface
  //----------------------------------------------------------------------------

  //----------------------------------------------------------------------------
  CmpiStatus 
  CmpiLinux_SambaValidUsersForShareProvider::enumInstanceNames(
    const CmpiContext& aContext, 
    CmpiResult& aResult,
    const CmpiObjectPath& aCop) {
      
#ifdef DEBUG 
    std::cout << "enumerating instanceNames" << std::endl;
#endif

    CmpiString nameSpace = aCop.getNameSpace();
    const char* nameSpaceP = nameSpace.charPtr();

    Linux_SambaValidUsersForShareInstanceNameEnumeration enumeration;
    m_interfaceP->enumInstanceNames(
      aContext,
      m_cmpiBroker,
      nameSpaceP,
      enumeration);
                   
    while (enumeration.hasNext() ){
      const Linux_SambaValidUsersForShareInstanceName& instanceName = enumeration.getNext();
      CmpiObjectPath objectPath = instanceName.getObjectPath();
      aResult.returnData(objectPath);
    }
      
    // we make housekeeping
    removeDanglingShadowInstances(enumeration);
      
    aResult.returnDone();
    return CmpiStatus(CMPI_RC_OK);

  }

  //----------------------------------------------------------------------------
  CmpiStatus 
  CmpiLinux_SambaValidUsersForShareProvider::enumInstances(
    const CmpiContext& aContext,
    CmpiResult& aResult,
    const CmpiObjectPath& aCop, 
    const char** aPropertiesPP) {
     
#ifdef DEBUG 
    std::cout << "enumerating instances" << std::endl;
#endif

    CmpiString nameSpace = aCop.getNameSpace();
    const char* nameSpaceP = nameSpace.charPtr();
      
    Linux_SambaValidUsersForShareManualInstanceEnumeration enumeration;
    m_interfaceP->enumInstances(
      aContext, 
      m_cmpiBroker, 
      nameSpaceP, 
      aPropertiesPP,
      enumeration);

#ifdef DEBUG 
    std::cout << "enumerated" << std::endl;
#endif
      
    while (enumeration.hasNext()) {
   	  const Linux_SambaValidUsersForShareManualInstance& instance = enumeration.getNext();
      	
#ifdef DEBUG 
      std::cout << "enumerating getNext" << std::endl;
#endif
      	
      CmpiInstance cmpiInstance = instance.getCmpiInstance(aPropertiesPP);

#ifdef DEBUG 
      std::cout << "transformed" << std::endl;
#endif
      	
      //add the static data
      // MJ: No, this is done in the implementation (or DefaultImplementation)
      // completeInstance(instance.getInstanceName(),cmpiInstance,aContext);
      	
      aResult.returnData(cmpiInstance);
    
    }
      
    aResult.returnDone();
    return CmpiStatus(CMPI_RC_OK);
  
  }
    
  //----------------------------------------------------------------------------
  CmpiStatus 
  CmpiLinux_SambaValidUsersForShareProvider::getInstance (
    const CmpiContext& aContext, 
    CmpiResult& aResult,
    const CmpiObjectPath& aCop,
    const char** aPropertiesPP) {
     	
    // convert to instanceName
    Linux_SambaValidUsersForShareInstanceName instanceName(aCop);
    
    /*
    CmpiInstance* repositoryCmpiInstanceP = 0;
    
    // try to fetch repository instance
    try {
      Linux_SambaValidUsersForShareInstanceName repositoryInstanceName(instanceName);
      repositoryInstanceName.setNamespace("IBMShadow/cimv2");
      CmpiObjectPath repositoryCmpiObjectPath = repositoryInstanceName.getObjectPath();
      repositoryCmpiInstanceP = new CmpiInstance(
        m_cmpiBroker.getInstance(
          aContext, 
          repositoryCmpiObjectPath,
          aPropertiesPP));
    } catch (const CmpiStatus& rc) { }                             
    */

    // get instance for instanceName
    Linux_SambaValidUsersForShareManualInstance instance;
    instance = m_interfaceP->getInstance(
      aContext,
      m_cmpiBroker,
      aPropertiesPP,
      instanceName);
      
    // convert the instance in a cmpiInstance
    CmpiInstance cmpiInstance = instance.getCmpiInstance(aPropertiesPP);
    
    /*
    // add the static data 
    copyShadowData(repositoryCmpiInstanceP,&cmpiInstance);
      
    if (repositoryCmpiInstanceP) {
      delete repositoryCmpiInstanceP;
    }
    */

    aResult.returnData(cmpiInstance);
    aResult.returnDone();
    return CmpiStatus(CMPI_RC_OK);

  }
    
  //----------------------------------------------------------------------------
  CmpiStatus 
  CmpiLinux_SambaValidUsersForShareProvider::createInstance (
    const CmpiContext& aContext,
    CmpiResult& aResult,
    const CmpiObjectPath& aCop,
    const CmpiInstance& aCmpiInstance) {
   	
   	Linux_SambaValidUsersForShareManualInstance manualInstance(
      aCmpiInstance,
      aCop.getNameSpace().charPtr());
    
    //REPOSITORY DATA    
//    CmpiInstance* backupShadowInstanceP = 0;
//   	CmpiInstance shadowInstance = 
//   	  Linux_SambaValidUsersForShareRepositoryInstance(aCmpiInstance,"IBMShadow/cimv2").getCmpiInstance(0);     
//     
//   	//We keep a backup of the existing data for recovering previous
//   	//state if the resource access raise an exception
//   	CmpiObjectPath shadowOp = shadowInstance.getObjectPath();
//    try {
//   	  backupShadowInstanceP = new CmpiInstance(
//        m_cmpiBroker.getInstance(aContext,shadowOp,0));
//   	  //if the shadow instance exist we delete it
//   	  m_cmpiBroker.deleteInstance(aContext,shadowOp);   	    
//   	} catch (CmpiStatus& rc) {}   	
//    m_cmpiBroker.createInstance(aContext,shadowOp,shadowInstance);     
//    
    // resource access data (manual instance)   
    try { 
			aResult.returnData(m_interfaceP->createInstance(aContext, m_cmpiBroker, manualInstance).
			getObjectPath());
    } catch (CmpiStatus& rc) {
//      //If something went wrong we recover the previous state
//      m_cmpiBroker.deleteInstance(aContext,shadowOp);
//      if (backupShadowInstanceP) {
//        m_cmpiBroker.createInstance(aContext,shadowOp,*backupShadowInstanceP);
//      }
      throw rc;
    }
    
//    if (backupShadowInstanceP) {
//      delete(backupShadowInstanceP);
//    }
    
    aResult.returnDone();
    return CmpiStatus(CMPI_RC_OK);
  
  }
    
  //----------------------------------------------------------------------------
  CmpiStatus 
  CmpiLinux_SambaValidUsersForShareProvider::setInstance (
    const CmpiContext& aContext,
    CmpiResult& aResult,
    const CmpiObjectPath& aCop,
    const CmpiInstance& aCmpiInstance,
    const char** aPropertiesPP) {
   	
   	Linux_SambaValidUsersForShareManualInstance manualInstance(
      aCmpiInstance,
      aCop.getNameSpace().charPtr());
    
    //REPOSITORY DATA    
//    CmpiInstance* backupShadowInstanceP = 0;
//    CmpiInstance shadowInstance =
//      Linux_SambaValidUsersForShareRepositoryInstance(aCmpiInstance,"IBMShadow/cimv2").getCmpiInstance(0);     
//     
//   	//We keep a backup of the existing data for recovering previous
//   	//state if the resource access raise an exception
//   	CmpiObjectPath shadowOp = shadowInstance.getObjectPath();
//    try {
//   	  backupShadowInstanceP = new CmpiInstance(
//   	   m_cmpiBroker.getInstance(aContext,shadowOp,0));
//   	} catch (CmpiStatus& rc) {}   	
//    
//    //if the instance existed before we delete it
//    //(setInstance is buggy in Pegasus)
//    if (backupShadowInstanceP) {
//      m_cmpiBroker.setInstance(aContext,shadowOp,shadowInstance,aPropertiesPP);
//    } else {
//      m_cmpiBroker.createInstance(aContext,shadowOp,shadowInstance);
//    }
    
    // resource access data (manual instance)   
    try {
      m_interfaceP->setInstance(aContext,m_cmpiBroker,aPropertiesPP,manualInstance);
    } catch (CmpiStatus& rc) {
      //If something went wrong we recover the previous state
//      m_cmpiBroker.deleteInstance(aContext,shadowOp);
//      if (backupShadowInstanceP) {
//        m_cmpiBroker.createInstance(aContext,shadowOp,*backupShadowInstanceP);
//      }
      throw rc;
    }
      
//    if (backupShadowInstanceP) {
//      delete backupShadowInstanceP;
//    }
        
    aResult.returnDone();
    return CmpiStatus(CMPI_RC_OK);
    
  }
    
  //----------------------------------------------------------------------------
  CmpiStatus
  CmpiLinux_SambaValidUsersForShareProvider::deleteInstance(
    const CmpiContext& aContext,
    CmpiResult& aResult,
    const CmpiObjectPath& aCop) {
      
    Linux_SambaValidUsersForShareInstanceName instanceName = Linux_SambaValidUsersForShareInstanceName(aCop);
    m_interfaceP->deleteInstance(aContext,m_cmpiBroker,instanceName);

//    instanceName.setNamespace("IBMShadow/cimv2");
//    CmpiObjectPath op = instanceName.getObjectPath();
//      
//    try { // The instance could not have static data
//      m_cmpiBroker.deleteInstance(aContext,op);
//    } catch (CmpiStatus& rc) {}
      
    aResult.returnDone();
    return CmpiStatus(CMPI_RC_OK);
  
  }
    
  //----------------------------------------------------------------------------
  CmpiStatus
  CmpiLinux_SambaValidUsersForShareProvider::invokeMethod(
    const CmpiContext& aContext,
    CmpiResult& aResult,
    const CmpiObjectPath& aCop,
    const char* aMethodNameP,
    const CmpiArgs& in,
    CmpiArgs& out) {
     	
    Linux_SambaValidUsersForShareInstanceName instanceName = Linux_SambaValidUsersForShareInstanceName(aCop);
     
     {

      aResult.returnDone();
      return CmpiErrorFormater::getErrorException(
        CmpiErrorFormater::METHOD_NOT_FOUND,
        aMethodNameP,
        "Linux_SambaValidUsersForShare");

    }
      
    aResult.returnDone();
    return CmpiStatus(CMPI_RC_OK);      

  }

  //----------------------------------------------------------------------------
  //                          Association Logic                             
  //----------------------------------------------------------------------------
  CmpiStatus 
  CmpiLinux_SambaValidUsersForShareProvider::associationLogic( 
    const CmpiContext& aContext, 
    CmpiResult& aResult,
    const CmpiObjectPath& aCop,
    const int anInstanceFlag,
    const int aReferenceFlag,
    const char** aPropertiesPP) {

    /* TODO : check if source instance aCop exists */

    const char* namespaceP = aCop.getNameSpace().charPtr();

    if( aReferenceFlag == 0 && anInstanceFlag == 1 ) {
      /* associators() */

      if (aCop.classPathIsA("Linux_SambaUser")) {
        
        Linux_SambaShareOptionsInstanceEnumeration enumeration;
        Linux_SambaUserInstanceName PartComponent(aCop);
        m_interfaceP->associatorsGroupComponent(
	        aContext, 
	        m_cmpiBroker, 
	        namespaceP, 
	        aPropertiesPP,
	        PartComponent,
	        enumeration);

        while(enumeration.hasNext()) {
	        const Linux_SambaShareOptionsInstance instance = enumeration.getNext();
          CmpiInstance cmpiInstance = instance.getCmpiInstance(aPropertiesPP);
          aResult.returnData(cmpiInstance);
	      }
	      
      } else if(aCop.classPathIsA("Linux_SambaShareOptions")) {
        
        Linux_SambaUserInstanceEnumeration enumeration;
        Linux_SambaShareOptionsInstanceName GroupComponent(aCop);
        m_interfaceP->associatorsPartComponent(
          aContext,
          m_cmpiBroker,
          namespaceP,
          aPropertiesPP,
          GroupComponent,
          enumeration);
	
        while(enumeration.hasNext()) {
          const Linux_SambaUserInstance instance = enumeration.getNext();
          CmpiInstance cmpiInstance = instance.getCmpiInstance(aPropertiesPP);
          aResult.returnData(cmpiInstance);
        }
      }   
         
    } else { /* end of associators() */
    
      /* associatorNames() || aReferenceFlag() || referenceNames() */

      Linux_SambaValidUsersForShareManualInstanceEnumeration enumeration;

      if(aCop.classPathIsA("Linux_SambaUser")) {
        Linux_SambaUserInstanceName PartComponent(aCop);
        m_interfaceP->referencesGroupComponent(
          aContext, 
          m_cmpiBroker,
          namespaceP,
          aPropertiesPP,
          PartComponent,
          enumeration);
      }
      
      if(aCop.classPathIsA("Linux_SambaShareOptions")) {
        Linux_SambaShareOptionsInstanceName GroupComponent(aCop);
        m_interfaceP->referencesPartComponent(
	        aContext,
	        m_cmpiBroker,
	        namespaceP,
	        aPropertiesPP,
	        GroupComponent,
	        enumeration);
      }

      while(enumeration.hasNext()) {

        const Linux_SambaValidUsersForShareManualInstance manualInstance = enumeration.getNext();

        const Linux_SambaValidUsersForShareInstanceName instanceName = manualInstance.getInstanceName();

        if( aReferenceFlag == 1 ) {
          // referenceNames() : aReferenceFlag == 1 && anInstanceFlag == 0
          
          if(anInstanceFlag == 0 ) {
            CmpiObjectPath cmpiObjectPath = instanceName.getObjectPath();
            aResult.returnData(cmpiObjectPath);
          } else { /* aReferenceFlag() : aReferenceFlag == 1 && anInstanceFlag == 1 */
            CmpiInstance cmpiInstance = manualInstance.getCmpiInstance(aPropertiesPP);
            /* todo: complete the Instance */
            aResult.returnData(cmpiInstance);
          }

        } else { // associatorNames() : aReferenceFlag == 0 && anInstanceFlag == 0 
      
          if(aCop.classPathIsA("Linux_SambaUser")) {
            const Linux_SambaShareOptionsInstanceName GroupComponent = instanceName.getGroupComponent();
            CmpiObjectPath cmpiObjectPath = GroupComponent.getObjectPath();
            aResult.returnData(cmpiObjectPath);
          }
        
          if(aCop.classPathIsA("Linux_SambaShareOptions")) {
            const Linux_SambaUserInstanceName PartComponent = 
            instanceName.getPartComponent();
            CmpiObjectPath cmpiObjectPath = PartComponent.getObjectPath();
            aResult.returnData(cmpiObjectPath);
          }
          
        }
        
      }
      
    } // end of associatorNames() || aReferenceFlag() || referenceNames()
    
    aResult.returnDone();
  
    return CmpiStatus(CMPI_RC_OK);
  
  }
  
  //----------------------------------------------------------------------------
  //                     Association Provider Interface
  //----------------------------------------------------------------------------
  CmpiStatus 
  CmpiLinux_SambaValidUsersForShareProvider::associators(
    const CmpiContext& aContext, 
    CmpiResult& aResult,
    const CmpiObjectPath& aCop, 
    const char* anAssociationClassnameP,
    const char* aResultClassnameP,
    const char* aRolenameP, 
    const char* aResultRolenameP, 
    const char** aPropertiesPP) {
     
#ifdef DEBUG
    std::cout << "calling associators() of class Linux_SambaValidUsersForShare" << std::endl;
#endif    
      
    CmpiStatus rc = associationLogic(aContext,aResult,aCop,1,0,aPropertiesPP);
  
    return CmpiStatus(rc);
      
  }

  //----------------------------------------------------------------------------
  CmpiStatus 
  CmpiLinux_SambaValidUsersForShareProvider::associatorNames(
    const CmpiContext& aContext,
    CmpiResult& aResult,
    const CmpiObjectPath& aCop,
    const char* anAssociationClassnameP,
    const char* aResultClassnameP,
    const char* aRolenameP, 
    const char* aResultRolenameP) {
   
#ifdef DEBUG
    std::cout << "calling associatorNames() of class Linux_SambaValidUsersForShare" << std::endl;
#endif    
    
    CmpiStatus rc = associationLogic(aContext,aResult,aCop,0,0);
  
    return CmpiStatus(rc);
  
  }

  //----------------------------------------------------------------------------
  CmpiStatus
  CmpiLinux_SambaValidUsersForShareProvider::references( 
    const CmpiContext& aContext,
    CmpiResult& aResult,
    const CmpiObjectPath& aCop,
    const char* anAssociationClassnameP,
    const char* aRolenameP,
    const char** aPropertiesPP) {
    
#ifdef DEBUG
    std::cout << "calling aReferenceFlag() of class Linux_SambaValidUsersForShare" << std::endl;
#endif    
    
    CmpiStatus rc = associationLogic(aContext,aResult,aCop,1,1,aPropertiesPP);
  
    return CmpiStatus(rc);
  
  }
    
  //----------------------------------------------------------------------------
  CmpiStatus
  CmpiLinux_SambaValidUsersForShareProvider::referenceNames(
    const CmpiContext& aContext,
    CmpiResult& aResult,
    const CmpiObjectPath& aCop,
    const char* anAssociationClassnameP,
    const char* aRolenameP) {
   
#ifdef DEBUG
    std::cout << "calling referenceNames() of class Linux_SambaValidUsersForShare" << std::endl;
#endif    
    
    CmpiStatus rc = associationLogic(aContext,aResult,aCop,0,1);
  
    return CmpiStatus(rc);
  
  } 
}	

