// =======================================================================
// Linux_SambaPrinterSecurityForPrinterExternal.cpp
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

#include "Linux_SambaPrinterSecurityForPrinterExternal.h"

namespace genProvider {
	
	//----------------------------------------------------------------------------
  Linux_SambaPrinterSecurityForPrinterExternal::Linux_SambaPrinterSecurityForPrinterExternal(
    const CmpiBroker& aBroker,
    const CmpiContext& aContext ) 
    : m_broker(aBroker),
    m_context(aContext) { }
   
	//----------------------------------------------------------------------------
  Linux_SambaPrinterSecurityForPrinterExternal::~Linux_SambaPrinterSecurityForPrinterExternal() { }
    
	//----------------------------------------------------------------------------
  void 
  Linux_SambaPrinterSecurityForPrinterExternal::enumInstanceNames(
    const char *aNameSpaceP,
    Linux_SambaPrinterSecurityForPrinterInstanceNameEnumeration& anInstanceNameEnumeration) {

    CmpiObjectPath classObjectPath(aNameSpaceP,"Linux_SambaPrinterSecurityForPrinter");
    CmpiEnumeration cmpiEnumeration = 
      m_broker.enumInstanceNames(m_context,classObjectPath);
    while (cmpiEnumeration.hasNext()) {
      CmpiObjectPath objectPath = cmpiEnumeration.getNext();
      Linux_SambaPrinterSecurityForPrinterInstanceName instanceName(objectPath);
      anInstanceNameEnumeration.addElement(instanceName);
    }
  
  }
  	  
  //----------------------------------------------------------------------------
  void
  Linux_SambaPrinterSecurityForPrinterExternal::enumInstances(
    const char *aNameSpaceP,
    const char** aPropertiesPP,
    Linux_SambaPrinterSecurityForPrinterInstanceEnumeration& anInstanceEnumeration) {
   		
    CmpiObjectPath classObjectPath(aNameSpaceP,"Linux_SambaPrinterSecurityForPrinter");
    CmpiEnumeration cmpiEnumeration = 
      m_broker.enumInstances(m_context,classObjectPath,aPropertiesPP);
    while (cmpiEnumeration.hasNext()) {
      CmpiInstance cmpiInstance = cmpiEnumeration.getNext();
      Linux_SambaPrinterSecurityForPrinterInstance instance(cmpiInstance,aNameSpaceP);
      anInstanceEnumeration.addElement(instance);
    }
  
  }
  	  
	//----------------------------------------------------------------------------
  Linux_SambaPrinterSecurityForPrinterInstance
  Linux_SambaPrinterSecurityForPrinterExternal::getInstance(
    const char** aPropertiesPP,
    const Linux_SambaPrinterSecurityForPrinterInstanceName& anInstanceName) {
    
    CmpiObjectPath cmpiObjectPath = anInstanceName.getObjectPath();
    CmpiInstance cmpiInstance = 
      m_broker.getInstance(m_context,cmpiObjectPath,aPropertiesPP);
  
    return Linux_SambaPrinterSecurityForPrinterInstance(cmpiInstance,anInstanceName.getNamespace());
  
  }
      
	//----------------------------------------------------------------------------
  void
  Linux_SambaPrinterSecurityForPrinterExternal::setInstance(
    const char** aPropertiesPP,
    const Linux_SambaPrinterSecurityForPrinterInstance& anInstance) {
  
    CmpiObjectPath cmpiObjectPath = anInstance.getInstanceName().getObjectPath();
    CmpiInstance cmpiInstance = anInstance.getCmpiInstance();
    m_broker.setInstance(m_context,cmpiObjectPath,cmpiInstance,aPropertiesPP);
  
  }
      
	//----------------------------------------------------------------------------
  Linux_SambaPrinterSecurityForPrinterInstanceName
  Linux_SambaPrinterSecurityForPrinterExternal::createInstance(
    const Linux_SambaPrinterSecurityForPrinterInstance& anInstance) {
  
    CmpiObjectPath cmpiObjectPath = anInstance.getInstanceName().getObjectPath();
    CmpiInstance cmpiInstance = anInstance.getCmpiInstance();
    return Linux_SambaPrinterSecurityForPrinterInstanceName(
		m_broker.createInstance(m_context,cmpiObjectPath,cmpiInstance));

  }
  
	//----------------------------------------------------------------------------
  void
  Linux_SambaPrinterSecurityForPrinterExternal::deleteInstance(
    const Linux_SambaPrinterSecurityForPrinterInstanceName& anInstanceName) {
    
    CmpiObjectPath cmpiObjectPath = anInstanceName.getObjectPath();
    m_broker.deleteInstance(m_context,cmpiObjectPath);
  
  }
  // Reference calls

  //----------------------------------------------------------------------------
  void
  Linux_SambaPrinterSecurityForPrinterExternal::referencesSettingData( 
    const char* aNameSpaceP,
    const char** aPropertiesPP,
    const Linux_SambaPrinterOptionsInstanceName& aSourceInstanceName,
    Linux_SambaPrinterSecurityForPrinterInstanceEnumeration& anInstanceEnumeration) {
      
    CmpiObjectPath cmpiObjectPath = aSourceInstanceName.getObjectPath();

    CmpiEnumeration cmpiEnumeration = m_broker.references(
      m_context,
      cmpiObjectPath,
      "Linux_SambaPrinterOptions",
      "SettingData",
      aPropertiesPP);

    while (cmpiEnumeration.hasNext()) {
      CmpiInstance cmpiInstance = cmpiEnumeration.getNext();
      Linux_SambaPrinterSecurityForPrinterInstance instance(cmpiInstance,aNameSpaceP);
      anInstanceEnumeration.addElement(instance);
    }      

  }

  //----------------------------------------------------------------------------
  void
  Linux_SambaPrinterSecurityForPrinterExternal::referenceNamesSettingData( 
    const char* aNameSpaceP,
    const Linux_SambaPrinterOptionsInstanceName& aSourceInstanceName,
    Linux_SambaPrinterSecurityForPrinterInstanceNameEnumeration& anInstanceNameEnumeration) {
      
    CmpiObjectPath cmpiObjectPath = aSourceInstanceName.getObjectPath();

    CmpiEnumeration cmpiEnumeration = m_broker.referenceNames(
      m_context,
      cmpiObjectPath,
      "Linux_SambaPrinterOptions",
      "SettingData");

    while (cmpiEnumeration.hasNext()) {
      CmpiObjectPath cmpiInstanceName = cmpiEnumeration.getNext();
      Linux_SambaPrinterSecurityForPrinterInstanceName instanceName(cmpiInstanceName);
      anInstanceNameEnumeration.addElement(instanceName);
    }      

  }

  //----------------------------------------------------------------------------
  void
  Linux_SambaPrinterSecurityForPrinterExternal::referencesManagedElement( 
    const char* aNameSpaceP,
    const char** aPropertiesPP,
    const Linux_SambaPrinterSecurityOptionsInstanceName& aSourceInstanceName,
    Linux_SambaPrinterSecurityForPrinterInstanceEnumeration& anInstanceEnumeration){
      
    CmpiObjectPath cmpiObjectPath = aSourceInstanceName.getObjectPath();
  
    CmpiEnumeration cmpiEnumeration = m_broker.references(
      m_context,
      cmpiObjectPath,
      "Linux_SambaPrinterSecurityOptions",
      "ManagedElement",
      aPropertiesPP);

    while(cmpiEnumeration.hasNext()) {
      CmpiInstance cmpiInstance = cmpiEnumeration.getNext();
      Linux_SambaPrinterSecurityForPrinterInstance instance(cmpiInstance,aNameSpaceP);
      anInstanceEnumeration.addElement(instance);
    }      

  }

  //----------------------------------------------------------------------------
  void
  Linux_SambaPrinterSecurityForPrinterExternal::referenceNamesManagedElement( 
    const char* aNameSpaceP,
    const Linux_SambaPrinterSecurityOptionsInstanceName& aSourceInstanceName,
    Linux_SambaPrinterSecurityForPrinterInstanceNameEnumeration& anInstanceNameEnumeration) {
      
    CmpiObjectPath cmpiObjectPath = aSourceInstanceName.getObjectPath();
    CmpiEnumeration cmpiEnumeration = m_broker.referenceNames(
      m_context,
      cmpiObjectPath,
      "Linux_SambaPrinterSecurityOptions",
      "ManagedElement");
   
    while (cmpiEnumeration.hasNext()) {
      CmpiObjectPath cmpiInstanceName = cmpiEnumeration.getNext();
      Linux_SambaPrinterSecurityForPrinterInstanceName instanceName(cmpiInstanceName);
      anInstanceNameEnumeration.addElement(instanceName);
    }      

  }
     
  //Associator calls
  //----------------------------------------------------------------------------
  void
  Linux_SambaPrinterSecurityForPrinterExternal::associatorsSettingData( 
    const char* aNameSpaceP,
    const char** aPropertiesPP,
    const Linux_SambaPrinterOptionsInstanceName& aSourceInstanceName,
    Linux_SambaPrinterSecurityOptionsInstanceEnumeration& anInstanceEnumeration) {
      
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
      Linux_SambaPrinterSecurityOptionsInstance instance(cmpiInstance,aNameSpaceP);
      anInstanceEnumeration.addElement(instance);
    }

  }

  //----------------------------------------------------------------------------
  void Linux_SambaPrinterSecurityForPrinterExternal::associatorNamesSettingData( 
    const char* aNameSpaceP,
    const Linux_SambaPrinterOptionsInstanceName& aSourceInstanceName,
    Linux_SambaPrinterSecurityOptionsInstanceNameEnumeration& anInstanceNameEnumeration) {
      
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
      Linux_SambaPrinterSecurityOptionsInstanceName instanceName(cmpiInstanceName);
      anInstanceNameEnumeration.addElement(instanceName);
    }

  }

  //----------------------------------------------------------------------------
  void
  Linux_SambaPrinterSecurityForPrinterExternal::associatorsManagedElement( 
    const char* aNameSpaceP,
    const char** aPropertiesPP,
    const Linux_SambaPrinterSecurityOptionsInstanceName& aSourceInstanceName,
    Linux_SambaPrinterOptionsInstanceEnumeration& anInstanceEnumeration) {
      
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
      Linux_SambaPrinterOptionsInstance instance(cmpiInstance,aNameSpaceP);
      anInstanceEnumeration.addElement(instance);
    }      

  }

  //----------------------------------------------------------------------------
  void
  Linux_SambaPrinterSecurityForPrinterExternal::associatorNamesManagedElement( 
    const char* aNameSpaceP,
    const Linux_SambaPrinterSecurityOptionsInstanceName& aSourceInstanceName,
    Linux_SambaPrinterOptionsInstanceNameEnumeration& anInstanceNameEnumeration) {
      
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
      Linux_SambaPrinterOptionsInstanceName instanceName(cmpiInstanceName);
      anInstanceNameEnumeration.addElement(instanceName);
    }

  }
      
}
