// =======================================================================
// Linux_SambaValidUsersForGlobalExternal.cpp
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

#include "Linux_SambaValidUsersForGlobalExternal.h"

namespace genProvider {
	
	//----------------------------------------------------------------------------
  Linux_SambaValidUsersForGlobalExternal::Linux_SambaValidUsersForGlobalExternal(
    const CmpiBroker& aBroker,
    const CmpiContext& aContext ) 
    : m_broker(aBroker),
    m_context(aContext) { }
   
	//----------------------------------------------------------------------------
  Linux_SambaValidUsersForGlobalExternal::~Linux_SambaValidUsersForGlobalExternal() { }
    
	//----------------------------------------------------------------------------
  void 
  Linux_SambaValidUsersForGlobalExternal::enumInstanceNames(
    const char *aNameSpaceP,
    Linux_SambaValidUsersForGlobalInstanceNameEnumeration& anInstanceNameEnumeration) {

    CmpiObjectPath classObjectPath(aNameSpaceP,"Linux_SambaValidUsersForGlobal");
    CmpiEnumeration cmpiEnumeration = 
      m_broker.enumInstanceNames(m_context,classObjectPath);
    while (cmpiEnumeration.hasNext()) {
      CmpiObjectPath objectPath = cmpiEnumeration.getNext();
      Linux_SambaValidUsersForGlobalInstanceName instanceName(objectPath);
      anInstanceNameEnumeration.addElement(instanceName);
    }
  
  }
  	  
  //----------------------------------------------------------------------------
  void
  Linux_SambaValidUsersForGlobalExternal::enumInstances(
    const char *aNameSpaceP,
    const char** aPropertiesPP,
    Linux_SambaValidUsersForGlobalInstanceEnumeration& anInstanceEnumeration) {
   		
    CmpiObjectPath classObjectPath(aNameSpaceP,"Linux_SambaValidUsersForGlobal");
    CmpiEnumeration cmpiEnumeration = 
      m_broker.enumInstances(m_context,classObjectPath,aPropertiesPP);
    while (cmpiEnumeration.hasNext()) {
      CmpiInstance cmpiInstance = cmpiEnumeration.getNext();
      Linux_SambaValidUsersForGlobalInstance instance(cmpiInstance,aNameSpaceP);
      anInstanceEnumeration.addElement(instance);
    }
  
  }
  	  
	//----------------------------------------------------------------------------
  Linux_SambaValidUsersForGlobalInstance
  Linux_SambaValidUsersForGlobalExternal::getInstance(
    const char** aPropertiesPP,
    const Linux_SambaValidUsersForGlobalInstanceName& anInstanceName) {
    
    CmpiObjectPath cmpiObjectPath = anInstanceName.getObjectPath();
    CmpiInstance cmpiInstance = 
      m_broker.getInstance(m_context,cmpiObjectPath,aPropertiesPP);
  
    return Linux_SambaValidUsersForGlobalInstance(cmpiInstance,anInstanceName.getNamespace());
  
  }
      
	//----------------------------------------------------------------------------
  void
  Linux_SambaValidUsersForGlobalExternal::setInstance(
    const char** aPropertiesPP,
    const Linux_SambaValidUsersForGlobalInstance& anInstance) {
  
    CmpiObjectPath cmpiObjectPath = anInstance.getInstanceName().getObjectPath();
    CmpiInstance cmpiInstance = anInstance.getCmpiInstance();
    m_broker.setInstance(m_context,cmpiObjectPath,cmpiInstance,aPropertiesPP);
  
  }
      
	//----------------------------------------------------------------------------
  Linux_SambaValidUsersForGlobalInstanceName
  Linux_SambaValidUsersForGlobalExternal::createInstance(
    const Linux_SambaValidUsersForGlobalInstance& anInstance) {
  
    CmpiObjectPath cmpiObjectPath = anInstance.getInstanceName().getObjectPath();
    CmpiInstance cmpiInstance = anInstance.getCmpiInstance();
    return Linux_SambaValidUsersForGlobalInstanceName(
		m_broker.createInstance(m_context,cmpiObjectPath,cmpiInstance));

  }
  
	//----------------------------------------------------------------------------
  void
  Linux_SambaValidUsersForGlobalExternal::deleteInstance(
    const Linux_SambaValidUsersForGlobalInstanceName& anInstanceName) {
    
    CmpiObjectPath cmpiObjectPath = anInstanceName.getObjectPath();
    m_broker.deleteInstance(m_context,cmpiObjectPath);
  
  }
  // Reference calls

  //----------------------------------------------------------------------------
  void
  Linux_SambaValidUsersForGlobalExternal::referencesPartComponent( 
    const char* aNameSpaceP,
    const char** aPropertiesPP,
    const Linux_SambaGlobalOptionsInstanceName& aSourceInstanceName,
    Linux_SambaValidUsersForGlobalInstanceEnumeration& anInstanceEnumeration) {
      
    CmpiObjectPath cmpiObjectPath = aSourceInstanceName.getObjectPath();

    CmpiEnumeration cmpiEnumeration = m_broker.references(
      m_context,
      cmpiObjectPath,
      "Linux_SambaGlobalOptions",
      "PartComponent",
      aPropertiesPP);

    while (cmpiEnumeration.hasNext()) {
      CmpiInstance cmpiInstance = cmpiEnumeration.getNext();
      Linux_SambaValidUsersForGlobalInstance instance(cmpiInstance,aNameSpaceP);
      anInstanceEnumeration.addElement(instance);
    }      

  }

  //----------------------------------------------------------------------------
  void
  Linux_SambaValidUsersForGlobalExternal::referenceNamesPartComponent( 
    const char* aNameSpaceP,
    const Linux_SambaGlobalOptionsInstanceName& aSourceInstanceName,
    Linux_SambaValidUsersForGlobalInstanceNameEnumeration& anInstanceNameEnumeration) {
      
    CmpiObjectPath cmpiObjectPath = aSourceInstanceName.getObjectPath();

    CmpiEnumeration cmpiEnumeration = m_broker.referenceNames(
      m_context,
      cmpiObjectPath,
      "Linux_SambaGlobalOptions",
      "PartComponent");

    while (cmpiEnumeration.hasNext()) {
      CmpiObjectPath cmpiInstanceName = cmpiEnumeration.getNext();
      Linux_SambaValidUsersForGlobalInstanceName instanceName(cmpiInstanceName);
      anInstanceNameEnumeration.addElement(instanceName);
    }      

  }

  //----------------------------------------------------------------------------
  void
  Linux_SambaValidUsersForGlobalExternal::referencesGroupComponent( 
    const char* aNameSpaceP,
    const char** aPropertiesPP,
    const Linux_SambaUserInstanceName& aSourceInstanceName,
    Linux_SambaValidUsersForGlobalInstanceEnumeration& anInstanceEnumeration){
      
    CmpiObjectPath cmpiObjectPath = aSourceInstanceName.getObjectPath();
  
    CmpiEnumeration cmpiEnumeration = m_broker.references(
      m_context,
      cmpiObjectPath,
      "Linux_SambaUser",
      "GroupComponent",
      aPropertiesPP);

    while(cmpiEnumeration.hasNext()) {
      CmpiInstance cmpiInstance = cmpiEnumeration.getNext();
      Linux_SambaValidUsersForGlobalInstance instance(cmpiInstance,aNameSpaceP);
      anInstanceEnumeration.addElement(instance);
    }      

  }

  //----------------------------------------------------------------------------
  void
  Linux_SambaValidUsersForGlobalExternal::referenceNamesGroupComponent( 
    const char* aNameSpaceP,
    const Linux_SambaUserInstanceName& aSourceInstanceName,
    Linux_SambaValidUsersForGlobalInstanceNameEnumeration& anInstanceNameEnumeration) {
      
    CmpiObjectPath cmpiObjectPath = aSourceInstanceName.getObjectPath();
    CmpiEnumeration cmpiEnumeration = m_broker.referenceNames(
      m_context,
      cmpiObjectPath,
      "Linux_SambaUser",
      "GroupComponent");
   
    while (cmpiEnumeration.hasNext()) {
      CmpiObjectPath cmpiInstanceName = cmpiEnumeration.getNext();
      Linux_SambaValidUsersForGlobalInstanceName instanceName(cmpiInstanceName);
      anInstanceNameEnumeration.addElement(instanceName);
    }      

  }
     
  //Associator calls
  //----------------------------------------------------------------------------
  void
  Linux_SambaValidUsersForGlobalExternal::associatorsPartComponent( 
    const char* aNameSpaceP,
    const char** aPropertiesPP,
    const Linux_SambaGlobalOptionsInstanceName& aSourceInstanceName,
    Linux_SambaUserInstanceEnumeration& anInstanceEnumeration) {
      
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
      Linux_SambaUserInstance instance(cmpiInstance,aNameSpaceP);
      anInstanceEnumeration.addElement(instance);
    }

  }

  //----------------------------------------------------------------------------
  void Linux_SambaValidUsersForGlobalExternal::associatorNamesPartComponent( 
    const char* aNameSpaceP,
    const Linux_SambaGlobalOptionsInstanceName& aSourceInstanceName,
    Linux_SambaUserInstanceNameEnumeration& anInstanceNameEnumeration) {
      
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
      Linux_SambaUserInstanceName instanceName(cmpiInstanceName);
      anInstanceNameEnumeration.addElement(instanceName);
    }

  }

  //----------------------------------------------------------------------------
  void
  Linux_SambaValidUsersForGlobalExternal::associatorsGroupComponent( 
    const char* aNameSpaceP,
    const char** aPropertiesPP,
    const Linux_SambaUserInstanceName& aSourceInstanceName,
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
  void
  Linux_SambaValidUsersForGlobalExternal::associatorNamesGroupComponent( 
    const char* aNameSpaceP,
    const Linux_SambaUserInstanceName& aSourceInstanceName,
    Linux_SambaGlobalOptionsInstanceNameEnumeration& anInstanceNameEnumeration) {
      
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
      Linux_SambaGlobalOptionsInstanceName instanceName(cmpiInstanceName);
      anInstanceNameEnumeration.addElement(instanceName);
    }

  }
      
}
