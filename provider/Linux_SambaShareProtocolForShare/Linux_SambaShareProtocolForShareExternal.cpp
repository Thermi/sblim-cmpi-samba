// =======================================================================
// Linux_SambaShareProtocolForShareExternal.cpp
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

#include "Linux_SambaShareProtocolForShareExternal.h"

namespace genProvider {
	
	//----------------------------------------------------------------------------
  Linux_SambaShareProtocolForShareExternal::Linux_SambaShareProtocolForShareExternal(
    const CmpiBroker& aBroker,
    const CmpiContext& aContext ) 
    : m_broker(aBroker),
    m_context(aContext) { }
   
	//----------------------------------------------------------------------------
  Linux_SambaShareProtocolForShareExternal::~Linux_SambaShareProtocolForShareExternal() { }
    
	//----------------------------------------------------------------------------
  void 
  Linux_SambaShareProtocolForShareExternal::enumInstanceNames(
    const char *aNameSpaceP,
    Linux_SambaShareProtocolForShareInstanceNameEnumeration& anInstanceNameEnumeration) {

    CmpiObjectPath classObjectPath(aNameSpaceP,"Linux_SambaShareProtocolForShare");
    CmpiEnumeration cmpiEnumeration = 
      m_broker.enumInstanceNames(m_context,classObjectPath);
    while (cmpiEnumeration.hasNext()) {
      CmpiObjectPath objectPath = cmpiEnumeration.getNext();
      Linux_SambaShareProtocolForShareInstanceName instanceName(objectPath);
      anInstanceNameEnumeration.addElement(instanceName);
    }
  
  }
  	  
  //----------------------------------------------------------------------------
  void
  Linux_SambaShareProtocolForShareExternal::enumInstances(
    const char *aNameSpaceP,
    const char** aPropertiesPP,
    Linux_SambaShareProtocolForShareInstanceEnumeration& anInstanceEnumeration) {
   		
    CmpiObjectPath classObjectPath(aNameSpaceP,"Linux_SambaShareProtocolForShare");
    CmpiEnumeration cmpiEnumeration = 
      m_broker.enumInstances(m_context,classObjectPath,aPropertiesPP);
    while (cmpiEnumeration.hasNext()) {
      CmpiInstance cmpiInstance = cmpiEnumeration.getNext();
      Linux_SambaShareProtocolForShareInstance instance(cmpiInstance,aNameSpaceP);
      anInstanceEnumeration.addElement(instance);
    }
  
  }
  	  
	//----------------------------------------------------------------------------
  Linux_SambaShareProtocolForShareInstance
  Linux_SambaShareProtocolForShareExternal::getInstance(
    const char** aPropertiesPP,
    const Linux_SambaShareProtocolForShareInstanceName& anInstanceName) {
    
    CmpiObjectPath cmpiObjectPath = anInstanceName.getObjectPath();
    CmpiInstance cmpiInstance = 
      m_broker.getInstance(m_context,cmpiObjectPath,aPropertiesPP);
  
    return Linux_SambaShareProtocolForShareInstance(cmpiInstance,anInstanceName.getNamespace());
  
  }
      
	//----------------------------------------------------------------------------
  void
  Linux_SambaShareProtocolForShareExternal::setInstance(
    const char** aPropertiesPP,
    const Linux_SambaShareProtocolForShareInstance& anInstance) {
  
    CmpiObjectPath cmpiObjectPath = anInstance.getInstanceName().getObjectPath();
    CmpiInstance cmpiInstance = anInstance.getCmpiInstance();
    m_broker.setInstance(m_context,cmpiObjectPath,cmpiInstance,aPropertiesPP);
  
  }
      
	//----------------------------------------------------------------------------
  Linux_SambaShareProtocolForShareInstanceName
  Linux_SambaShareProtocolForShareExternal::createInstance(
    const Linux_SambaShareProtocolForShareInstance& anInstance) {
  
    CmpiObjectPath cmpiObjectPath = anInstance.getInstanceName().getObjectPath();
    CmpiInstance cmpiInstance = anInstance.getCmpiInstance();
    return Linux_SambaShareProtocolForShareInstanceName(
		m_broker.createInstance(m_context,cmpiObjectPath,cmpiInstance));

  }
  
	//----------------------------------------------------------------------------
  void
  Linux_SambaShareProtocolForShareExternal::deleteInstance(
    const Linux_SambaShareProtocolForShareInstanceName& anInstanceName) {
    
    CmpiObjectPath cmpiObjectPath = anInstanceName.getObjectPath();
    m_broker.deleteInstance(m_context,cmpiObjectPath);
  
  }
  // Reference calls

  //----------------------------------------------------------------------------
  void
  Linux_SambaShareProtocolForShareExternal::referencesManagedElement( 
    const char* aNameSpaceP,
    const char** aPropertiesPP,
    const Linux_SambaShareProtocolOptionsInstanceName& aSourceInstanceName,
    Linux_SambaShareProtocolForShareInstanceEnumeration& anInstanceEnumeration) {
      
    CmpiObjectPath cmpiObjectPath = aSourceInstanceName.getObjectPath();

    CmpiEnumeration cmpiEnumeration = m_broker.references(
      m_context,
      cmpiObjectPath,
      "Linux_SambaShareProtocolOptions",
      "ManagedElement",
      aPropertiesPP);

    while (cmpiEnumeration.hasNext()) {
      CmpiInstance cmpiInstance = cmpiEnumeration.getNext();
      Linux_SambaShareProtocolForShareInstance instance(cmpiInstance,aNameSpaceP);
      anInstanceEnumeration.addElement(instance);
    }      

  }

  //----------------------------------------------------------------------------
  void
  Linux_SambaShareProtocolForShareExternal::referenceNamesManagedElement( 
    const char* aNameSpaceP,
    const Linux_SambaShareProtocolOptionsInstanceName& aSourceInstanceName,
    Linux_SambaShareProtocolForShareInstanceNameEnumeration& anInstanceNameEnumeration) {
      
    CmpiObjectPath cmpiObjectPath = aSourceInstanceName.getObjectPath();

    CmpiEnumeration cmpiEnumeration = m_broker.referenceNames(
      m_context,
      cmpiObjectPath,
      "Linux_SambaShareProtocolOptions",
      "ManagedElement");

    while (cmpiEnumeration.hasNext()) {
      CmpiObjectPath cmpiInstanceName = cmpiEnumeration.getNext();
      Linux_SambaShareProtocolForShareInstanceName instanceName(cmpiInstanceName);
      anInstanceNameEnumeration.addElement(instanceName);
    }      

  }

  //----------------------------------------------------------------------------
  void
  Linux_SambaShareProtocolForShareExternal::referencesSettingData( 
    const char* aNameSpaceP,
    const char** aPropertiesPP,
    const Linux_SambaShareOptionsInstanceName& aSourceInstanceName,
    Linux_SambaShareProtocolForShareInstanceEnumeration& anInstanceEnumeration){
      
    CmpiObjectPath cmpiObjectPath = aSourceInstanceName.getObjectPath();
  
    CmpiEnumeration cmpiEnumeration = m_broker.references(
      m_context,
      cmpiObjectPath,
      "Linux_SambaShareOptions",
      "SettingData",
      aPropertiesPP);

    while(cmpiEnumeration.hasNext()) {
      CmpiInstance cmpiInstance = cmpiEnumeration.getNext();
      Linux_SambaShareProtocolForShareInstance instance(cmpiInstance,aNameSpaceP);
      anInstanceEnumeration.addElement(instance);
    }      

  }

  //----------------------------------------------------------------------------
  void
  Linux_SambaShareProtocolForShareExternal::referenceNamesSettingData( 
    const char* aNameSpaceP,
    const Linux_SambaShareOptionsInstanceName& aSourceInstanceName,
    Linux_SambaShareProtocolForShareInstanceNameEnumeration& anInstanceNameEnumeration) {
      
    CmpiObjectPath cmpiObjectPath = aSourceInstanceName.getObjectPath();
    CmpiEnumeration cmpiEnumeration = m_broker.referenceNames(
      m_context,
      cmpiObjectPath,
      "Linux_SambaShareOptions",
      "SettingData");
   
    while (cmpiEnumeration.hasNext()) {
      CmpiObjectPath cmpiInstanceName = cmpiEnumeration.getNext();
      Linux_SambaShareProtocolForShareInstanceName instanceName(cmpiInstanceName);
      anInstanceNameEnumeration.addElement(instanceName);
    }      

  }
     
  //Associator calls
  //----------------------------------------------------------------------------
  void
  Linux_SambaShareProtocolForShareExternal::associatorsManagedElement( 
    const char* aNameSpaceP,
    const char** aPropertiesPP,
    const Linux_SambaShareProtocolOptionsInstanceName& aSourceInstanceName,
    Linux_SambaShareOptionsInstanceEnumeration& anInstanceEnumeration) {
      
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
      Linux_SambaShareOptionsInstance instance(cmpiInstance,aNameSpaceP);
      anInstanceEnumeration.addElement(instance);
    }

  }

  //----------------------------------------------------------------------------
  void Linux_SambaShareProtocolForShareExternal::associatorNamesManagedElement( 
    const char* aNameSpaceP,
    const Linux_SambaShareProtocolOptionsInstanceName& aSourceInstanceName,
    Linux_SambaShareOptionsInstanceNameEnumeration& anInstanceNameEnumeration) {
      
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
      Linux_SambaShareOptionsInstanceName instanceName(cmpiInstanceName);
      anInstanceNameEnumeration.addElement(instanceName);
    }

  }

  //----------------------------------------------------------------------------
  void
  Linux_SambaShareProtocolForShareExternal::associatorsSettingData( 
    const char* aNameSpaceP,
    const char** aPropertiesPP,
    const Linux_SambaShareOptionsInstanceName& aSourceInstanceName,
    Linux_SambaShareProtocolOptionsInstanceEnumeration& anInstanceEnumeration) {
      
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
      Linux_SambaShareProtocolOptionsInstance instance(cmpiInstance,aNameSpaceP);
      anInstanceEnumeration.addElement(instance);
    }      

  }

  //----------------------------------------------------------------------------
  void
  Linux_SambaShareProtocolForShareExternal::associatorNamesSettingData( 
    const char* aNameSpaceP,
    const Linux_SambaShareOptionsInstanceName& aSourceInstanceName,
    Linux_SambaShareProtocolOptionsInstanceNameEnumeration& anInstanceNameEnumeration) {
      
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
      Linux_SambaShareProtocolOptionsInstanceName instanceName(cmpiInstanceName);
      anInstanceNameEnumeration.addElement(instanceName);
    }

  }
      
}
