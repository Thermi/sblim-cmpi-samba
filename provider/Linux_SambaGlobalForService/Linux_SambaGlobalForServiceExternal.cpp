// =======================================================================
// Linux_SambaGlobalForServiceExternal.cpp
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

#include "Linux_SambaGlobalForServiceExternal.h"

namespace genProvider {
	
	//----------------------------------------------------------------------------
  Linux_SambaGlobalForServiceExternal::Linux_SambaGlobalForServiceExternal(
    const CmpiBroker& aBroker,
    const CmpiContext& aContext ) 
    : m_broker(aBroker),
    m_context(aContext) { }
   
	//----------------------------------------------------------------------------
  Linux_SambaGlobalForServiceExternal::~Linux_SambaGlobalForServiceExternal() { }
    
	//----------------------------------------------------------------------------
  void 
  Linux_SambaGlobalForServiceExternal::enumInstanceNames(
    const char *aNameSpaceP,
    Linux_SambaGlobalForServiceInstanceNameEnumeration& anInstanceNameEnumeration) {

    CmpiObjectPath classObjectPath(aNameSpaceP,"Linux_SambaGlobalForService");
    CmpiEnumeration cmpiEnumeration = 
      m_broker.enumInstanceNames(m_context,classObjectPath);
    while (cmpiEnumeration.hasNext()) {
      CmpiObjectPath objectPath = cmpiEnumeration.getNext();
      Linux_SambaGlobalForServiceInstanceName instanceName(objectPath);
      anInstanceNameEnumeration.addElement(instanceName);
    }
  
  }
  	  
  //----------------------------------------------------------------------------
  void
  Linux_SambaGlobalForServiceExternal::enumInstances(
    const char *aNameSpaceP,
    const char** aPropertiesPP,
    Linux_SambaGlobalForServiceInstanceEnumeration& anInstanceEnumeration) {
   		
    CmpiObjectPath classObjectPath(aNameSpaceP,"Linux_SambaGlobalForService");
    CmpiEnumeration cmpiEnumeration = 
      m_broker.enumInstances(m_context,classObjectPath,aPropertiesPP);
    while (cmpiEnumeration.hasNext()) {
      CmpiInstance cmpiInstance = cmpiEnumeration.getNext();
      Linux_SambaGlobalForServiceInstance instance(cmpiInstance,aNameSpaceP);
      anInstanceEnumeration.addElement(instance);
    }
  
  }
  	  
	//----------------------------------------------------------------------------
  Linux_SambaGlobalForServiceInstance
  Linux_SambaGlobalForServiceExternal::getInstance(
    const char** aPropertiesPP,
    const Linux_SambaGlobalForServiceInstanceName& anInstanceName) {
    
    CmpiObjectPath cmpiObjectPath = anInstanceName.getObjectPath();
    CmpiInstance cmpiInstance = 
      m_broker.getInstance(m_context,cmpiObjectPath,aPropertiesPP);
  
    return Linux_SambaGlobalForServiceInstance(cmpiInstance,anInstanceName.getNamespace());
  
  }
      
	//----------------------------------------------------------------------------
  void
  Linux_SambaGlobalForServiceExternal::setInstance(
    const char** aPropertiesPP,
    const Linux_SambaGlobalForServiceInstance& anInstance) {
  
    CmpiObjectPath cmpiObjectPath = anInstance.getInstanceName().getObjectPath();
    CmpiInstance cmpiInstance = anInstance.getCmpiInstance();
    m_broker.setInstance(m_context,cmpiObjectPath,cmpiInstance,aPropertiesPP);
  
  }
      
	//----------------------------------------------------------------------------
  Linux_SambaGlobalForServiceInstanceName
  Linux_SambaGlobalForServiceExternal::createInstance(
    const Linux_SambaGlobalForServiceInstance& anInstance) {
  
    CmpiObjectPath cmpiObjectPath = anInstance.getInstanceName().getObjectPath();
    CmpiInstance cmpiInstance = anInstance.getCmpiInstance();
    return Linux_SambaGlobalForServiceInstanceName(
		m_broker.createInstance(m_context,cmpiObjectPath,cmpiInstance));

  }
  
	//----------------------------------------------------------------------------
  void
  Linux_SambaGlobalForServiceExternal::deleteInstance(
    const Linux_SambaGlobalForServiceInstanceName& anInstanceName) {
    
    CmpiObjectPath cmpiObjectPath = anInstanceName.getObjectPath();
    m_broker.deleteInstance(m_context,cmpiObjectPath);
  
  }
  // Reference calls

  //----------------------------------------------------------------------------
  void
  Linux_SambaGlobalForServiceExternal::referencesSettingData( 
    const char* aNameSpaceP,
    const char** aPropertiesPP,
    const Linux_SambaServiceInstanceName& aSourceInstanceName,
    Linux_SambaGlobalForServiceInstanceEnumeration& anInstanceEnumeration) {
      
    CmpiObjectPath cmpiObjectPath = aSourceInstanceName.getObjectPath();

    CmpiEnumeration cmpiEnumeration = m_broker.references(
      m_context,
      cmpiObjectPath,
      "Linux_SambaService",
      "SettingData",
      aPropertiesPP);

    while (cmpiEnumeration.hasNext()) {
      CmpiInstance cmpiInstance = cmpiEnumeration.getNext();
      Linux_SambaGlobalForServiceInstance instance(cmpiInstance,aNameSpaceP);
      anInstanceEnumeration.addElement(instance);
    }      

  }

  //----------------------------------------------------------------------------
  void
  Linux_SambaGlobalForServiceExternal::referenceNamesSettingData( 
    const char* aNameSpaceP,
    const Linux_SambaServiceInstanceName& aSourceInstanceName,
    Linux_SambaGlobalForServiceInstanceNameEnumeration& anInstanceNameEnumeration) {
      
    CmpiObjectPath cmpiObjectPath = aSourceInstanceName.getObjectPath();

    CmpiEnumeration cmpiEnumeration = m_broker.referenceNames(
      m_context,
      cmpiObjectPath,
      "Linux_SambaService",
      "SettingData");

    while (cmpiEnumeration.hasNext()) {
      CmpiObjectPath cmpiInstanceName = cmpiEnumeration.getNext();
      Linux_SambaGlobalForServiceInstanceName instanceName(cmpiInstanceName);
      anInstanceNameEnumeration.addElement(instanceName);
    }      

  }

  //----------------------------------------------------------------------------
  void
  Linux_SambaGlobalForServiceExternal::referencesManagedElement( 
    const char* aNameSpaceP,
    const char** aPropertiesPP,
    const Linux_SambaGlobalOptionsInstanceName& aSourceInstanceName,
    Linux_SambaGlobalForServiceInstanceEnumeration& anInstanceEnumeration){
      
    CmpiObjectPath cmpiObjectPath = aSourceInstanceName.getObjectPath();
  
    CmpiEnumeration cmpiEnumeration = m_broker.references(
      m_context,
      cmpiObjectPath,
      "Linux_SambaGlobalOptions",
      "ManagedElement",
      aPropertiesPP);

    while(cmpiEnumeration.hasNext()) {
      CmpiInstance cmpiInstance = cmpiEnumeration.getNext();
      Linux_SambaGlobalForServiceInstance instance(cmpiInstance,aNameSpaceP);
      anInstanceEnumeration.addElement(instance);
    }      

  }

  //----------------------------------------------------------------------------
  void
  Linux_SambaGlobalForServiceExternal::referenceNamesManagedElement( 
    const char* aNameSpaceP,
    const Linux_SambaGlobalOptionsInstanceName& aSourceInstanceName,
    Linux_SambaGlobalForServiceInstanceNameEnumeration& anInstanceNameEnumeration) {
      
    CmpiObjectPath cmpiObjectPath = aSourceInstanceName.getObjectPath();
    CmpiEnumeration cmpiEnumeration = m_broker.referenceNames(
      m_context,
      cmpiObjectPath,
      "Linux_SambaGlobalOptions",
      "ManagedElement");
   
    while (cmpiEnumeration.hasNext()) {
      CmpiObjectPath cmpiInstanceName = cmpiEnumeration.getNext();
      Linux_SambaGlobalForServiceInstanceName instanceName(cmpiInstanceName);
      anInstanceNameEnumeration.addElement(instanceName);
    }      

  }
     
  //Associator calls
  //----------------------------------------------------------------------------
  void
  Linux_SambaGlobalForServiceExternal::associatorsSettingData( 
    const char* aNameSpaceP,
    const char** aPropertiesPP,
    const Linux_SambaServiceInstanceName& aSourceInstanceName,
    Linux_SambaGlobalOptionsInstanceEnumeration& anInstanceEnumeration) {
      
    CmpiObjectPath cmpiObjectPath = aSourceInstanceName.getObjectPath();

    CmpiEnumeration cmpiEnumeration = m_broker.associators(
      m_context,
      cmpiObjectPath,
      0,
      0,
      0,
      0,
      aPropertiesPP);

    while (cmpiEnumeration.hasNext()) {
      CmpiInstance cmpiInstance = cmpiEnumeration.getNext();
      Linux_SambaGlobalOptionsInstance instance(cmpiInstance,aNameSpaceP);
      anInstanceEnumeration.addElement(instance);
    }

  }

  //----------------------------------------------------------------------------
  void Linux_SambaGlobalForServiceExternal::associatorNamesSettingData( 
    const char* aNameSpaceP,
    const Linux_SambaServiceInstanceName& aSourceInstanceName,
    Linux_SambaGlobalOptionsInstanceNameEnumeration& anInstanceNameEnumeration) {
      
    CmpiObjectPath cmpiObjectPath = aSourceInstanceName.getObjectPath();

    CmpiEnumeration cmpiEnumeration = m_broker.associatorNames(
     m_context,
     cmpiObjectPath,
     0,
     0,
     0,
     0);

    while(cmpiEnumeration.hasNext()) {
      CmpiObjectPath cmpiInstanceName = cmpiEnumeration.getNext();
      Linux_SambaGlobalOptionsInstanceName instanceName(cmpiInstanceName);
      anInstanceNameEnumeration.addElement(instanceName);
    }

  }

  //----------------------------------------------------------------------------
  void
  Linux_SambaGlobalForServiceExternal::associatorsManagedElement( 
    const char* aNameSpaceP,
    const char** aPropertiesPP,
    const Linux_SambaGlobalOptionsInstanceName& aSourceInstanceName,
    Linux_SambaServiceInstanceEnumeration& anInstanceEnumeration) {
      
    CmpiObjectPath cmpiObjectPath = aSourceInstanceName.getObjectPath();

    CmpiEnumeration cmpiEnumeration = m_broker.associators(
      m_context,
      cmpiObjectPath,
      0,
      0,
      0,
      0,
      aPropertiesPP);

    while (cmpiEnumeration.hasNext()) {
      CmpiInstance cmpiInstance = cmpiEnumeration.getNext();
      Linux_SambaServiceInstance instance(cmpiInstance,aNameSpaceP);
      anInstanceEnumeration.addElement(instance);
    }      

  }

  //----------------------------------------------------------------------------
  void
  Linux_SambaGlobalForServiceExternal::associatorNamesManagedElement( 
    const char* aNameSpaceP,
    const Linux_SambaGlobalOptionsInstanceName& aSourceInstanceName,
    Linux_SambaServiceInstanceNameEnumeration& anInstanceNameEnumeration) {
      
    CmpiObjectPath cmpiObjectPath = aSourceInstanceName.getObjectPath();

    CmpiEnumeration cmpiEnumeration = m_broker.associatorNames(
      m_context,
      cmpiObjectPath,
      0,
      0,
      0,
      0);

    while (cmpiEnumeration.hasNext()) {
      CmpiObjectPath cmpiInstanceName = cmpiEnumeration.getNext();
      Linux_SambaServiceInstanceName instanceName(cmpiInstanceName);
      anInstanceNameEnumeration.addElement(instanceName);
    }

  }
      
}
