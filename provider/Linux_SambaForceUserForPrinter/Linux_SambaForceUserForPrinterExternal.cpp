// =======================================================================
// Linux_SambaForceUserForPrinterExternal.cpp
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

#include "Linux_SambaForceUserForPrinterExternal.h"

namespace genProvider {
	
	//----------------------------------------------------------------------------
  Linux_SambaForceUserForPrinterExternal::Linux_SambaForceUserForPrinterExternal(
    const CmpiBroker& aBroker,
    const CmpiContext& aContext ) 
    : m_broker(aBroker),
    m_context(aContext) { }
   
	//----------------------------------------------------------------------------
  Linux_SambaForceUserForPrinterExternal::~Linux_SambaForceUserForPrinterExternal() { }
    
	//----------------------------------------------------------------------------
  void 
  Linux_SambaForceUserForPrinterExternal::enumInstanceNames(
    const char *aNameSpaceP,
    Linux_SambaForceUserForPrinterInstanceNameEnumeration& anInstanceNameEnumeration) {

    CmpiObjectPath classObjectPath(aNameSpaceP,"Linux_SambaForceUserForPrinter");
    CmpiEnumeration cmpiEnumeration = 
      m_broker.enumInstanceNames(m_context,classObjectPath);
    while (cmpiEnumeration.hasNext()) {
      CmpiObjectPath objectPath = cmpiEnumeration.getNext();
      Linux_SambaForceUserForPrinterInstanceName instanceName(objectPath);
      anInstanceNameEnumeration.addElement(instanceName);
    }
  
  }
  	  
  //----------------------------------------------------------------------------
  void
  Linux_SambaForceUserForPrinterExternal::enumInstances(
    const char *aNameSpaceP,
    const char** aPropertiesPP,
    Linux_SambaForceUserForPrinterInstanceEnumeration& anInstanceEnumeration) {
   		
    CmpiObjectPath classObjectPath(aNameSpaceP,"Linux_SambaForceUserForPrinter");
    CmpiEnumeration cmpiEnumeration = 
      m_broker.enumInstances(m_context,classObjectPath,aPropertiesPP);
    while (cmpiEnumeration.hasNext()) {
      CmpiInstance cmpiInstance = cmpiEnumeration.getNext();
      Linux_SambaForceUserForPrinterInstance instance(cmpiInstance,aNameSpaceP);
      anInstanceEnumeration.addElement(instance);
    }
  
  }
  	  
	//----------------------------------------------------------------------------
  Linux_SambaForceUserForPrinterInstance
  Linux_SambaForceUserForPrinterExternal::getInstance(
    const char** aPropertiesPP,
    const Linux_SambaForceUserForPrinterInstanceName& anInstanceName) {
    
    CmpiObjectPath cmpiObjectPath = anInstanceName.getObjectPath();
    CmpiInstance cmpiInstance = 
      m_broker.getInstance(m_context,cmpiObjectPath,aPropertiesPP);
  
    return Linux_SambaForceUserForPrinterInstance(cmpiInstance,anInstanceName.getNamespace());
  
  }
      
	//----------------------------------------------------------------------------
  void
  Linux_SambaForceUserForPrinterExternal::setInstance(
    const char** aPropertiesPP,
    const Linux_SambaForceUserForPrinterInstance& anInstance) {
  
    CmpiObjectPath cmpiObjectPath = anInstance.getInstanceName().getObjectPath();
    CmpiInstance cmpiInstance = anInstance.getCmpiInstance();
    m_broker.setInstance(m_context,cmpiObjectPath,cmpiInstance,aPropertiesPP);
  
  }
      
	//----------------------------------------------------------------------------
  Linux_SambaForceUserForPrinterInstanceName
  Linux_SambaForceUserForPrinterExternal::createInstance(
    const Linux_SambaForceUserForPrinterInstance& anInstance) {
  
    CmpiObjectPath cmpiObjectPath = anInstance.getInstanceName().getObjectPath();
    CmpiInstance cmpiInstance = anInstance.getCmpiInstance();
    return Linux_SambaForceUserForPrinterInstanceName(
		m_broker.createInstance(m_context,cmpiObjectPath,cmpiInstance));

  }
  
	//----------------------------------------------------------------------------
  void
  Linux_SambaForceUserForPrinterExternal::deleteInstance(
    const Linux_SambaForceUserForPrinterInstanceName& anInstanceName) {
    
    CmpiObjectPath cmpiObjectPath = anInstanceName.getObjectPath();
    m_broker.deleteInstance(m_context,cmpiObjectPath);
  
  }
  // Reference calls

  //----------------------------------------------------------------------------
  void
  Linux_SambaForceUserForPrinterExternal::referencesPartComponent( 
    const char* aNameSpaceP,
    const char** aPropertiesPP,
    const Linux_SambaPrinterOptionsInstanceName& aSourceInstanceName,
    Linux_SambaForceUserForPrinterInstanceEnumeration& anInstanceEnumeration) {
      
    CmpiObjectPath cmpiObjectPath = aSourceInstanceName.getObjectPath();

    CmpiEnumeration cmpiEnumeration = m_broker.references(
      m_context,
      cmpiObjectPath,
      "Linux_SambaPrinterOptions",
      "PartComponent",
      aPropertiesPP);

    while (cmpiEnumeration.hasNext()) {
      CmpiInstance cmpiInstance = cmpiEnumeration.getNext();
      Linux_SambaForceUserForPrinterInstance instance(cmpiInstance,aNameSpaceP);
      anInstanceEnumeration.addElement(instance);
    }      

  }

  //----------------------------------------------------------------------------
  void
  Linux_SambaForceUserForPrinterExternal::referenceNamesPartComponent( 
    const char* aNameSpaceP,
    const Linux_SambaPrinterOptionsInstanceName& aSourceInstanceName,
    Linux_SambaForceUserForPrinterInstanceNameEnumeration& anInstanceNameEnumeration) {
      
    CmpiObjectPath cmpiObjectPath = aSourceInstanceName.getObjectPath();

    CmpiEnumeration cmpiEnumeration = m_broker.referenceNames(
      m_context,
      cmpiObjectPath,
      "Linux_SambaPrinterOptions",
      "PartComponent");

    while (cmpiEnumeration.hasNext()) {
      CmpiObjectPath cmpiInstanceName = cmpiEnumeration.getNext();
      Linux_SambaForceUserForPrinterInstanceName instanceName(cmpiInstanceName);
      anInstanceNameEnumeration.addElement(instanceName);
    }      

  }

  //----------------------------------------------------------------------------
  void
  Linux_SambaForceUserForPrinterExternal::referencesGroupComponent( 
    const char* aNameSpaceP,
    const char** aPropertiesPP,
    const Linux_SambaUserInstanceName& aSourceInstanceName,
    Linux_SambaForceUserForPrinterInstanceEnumeration& anInstanceEnumeration){
      
    CmpiObjectPath cmpiObjectPath = aSourceInstanceName.getObjectPath();
  
    CmpiEnumeration cmpiEnumeration = m_broker.references(
      m_context,
      cmpiObjectPath,
      "Linux_SambaUser",
      "GroupComponent",
      aPropertiesPP);

    while(cmpiEnumeration.hasNext()) {
      CmpiInstance cmpiInstance = cmpiEnumeration.getNext();
      Linux_SambaForceUserForPrinterInstance instance(cmpiInstance,aNameSpaceP);
      anInstanceEnumeration.addElement(instance);
    }      

  }

  //----------------------------------------------------------------------------
  void
  Linux_SambaForceUserForPrinterExternal::referenceNamesGroupComponent( 
    const char* aNameSpaceP,
    const Linux_SambaUserInstanceName& aSourceInstanceName,
    Linux_SambaForceUserForPrinterInstanceNameEnumeration& anInstanceNameEnumeration) {
      
    CmpiObjectPath cmpiObjectPath = aSourceInstanceName.getObjectPath();
    CmpiEnumeration cmpiEnumeration = m_broker.referenceNames(
      m_context,
      cmpiObjectPath,
      "Linux_SambaUser",
      "GroupComponent");
   
    while (cmpiEnumeration.hasNext()) {
      CmpiObjectPath cmpiInstanceName = cmpiEnumeration.getNext();
      Linux_SambaForceUserForPrinterInstanceName instanceName(cmpiInstanceName);
      anInstanceNameEnumeration.addElement(instanceName);
    }      

  }
     
  //Associator calls
  //----------------------------------------------------------------------------
  void
  Linux_SambaForceUserForPrinterExternal::associatorsPartComponent( 
    const char* aNameSpaceP,
    const char** aPropertiesPP,
    const Linux_SambaPrinterOptionsInstanceName& aSourceInstanceName,
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
  void Linux_SambaForceUserForPrinterExternal::associatorNamesPartComponent( 
    const char* aNameSpaceP,
    const Linux_SambaPrinterOptionsInstanceName& aSourceInstanceName,
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
  Linux_SambaForceUserForPrinterExternal::associatorsGroupComponent( 
    const char* aNameSpaceP,
    const char** aPropertiesPP,
    const Linux_SambaUserInstanceName& aSourceInstanceName,
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
  Linux_SambaForceUserForPrinterExternal::associatorNamesGroupComponent( 
    const char* aNameSpaceP,
    const Linux_SambaUserInstanceName& aSourceInstanceName,
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
