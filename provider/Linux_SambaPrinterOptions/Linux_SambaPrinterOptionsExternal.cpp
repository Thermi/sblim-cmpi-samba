// =======================================================================
// Linux_SambaPrinterOptionsExternal.cpp
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

#include "Linux_SambaPrinterOptionsExternal.h"

namespace genProvider {
	
	//----------------------------------------------------------------------------
  Linux_SambaPrinterOptionsExternal::Linux_SambaPrinterOptionsExternal(
    const CmpiBroker& aBroker,
    const CmpiContext& aContext ) 
    : m_broker(aBroker),
    m_context(aContext) { }
   
	//----------------------------------------------------------------------------
  Linux_SambaPrinterOptionsExternal::~Linux_SambaPrinterOptionsExternal() { }
    
	//----------------------------------------------------------------------------
  void 
  Linux_SambaPrinterOptionsExternal::enumInstanceNames(
    const char *aNameSpaceP,
    Linux_SambaPrinterOptionsInstanceNameEnumeration& anInstanceNameEnumeration) {

    CmpiObjectPath classObjectPath(aNameSpaceP,"Linux_SambaPrinterOptions");
    CmpiEnumeration cmpiEnumeration = 
      m_broker.enumInstanceNames(m_context,classObjectPath);
    while (cmpiEnumeration.hasNext()) {
      CmpiObjectPath objectPath = cmpiEnumeration.getNext();
      Linux_SambaPrinterOptionsInstanceName instanceName(objectPath);
      anInstanceNameEnumeration.addElement(instanceName);
    }
  
  }
  	  
  //----------------------------------------------------------------------------
  void
  Linux_SambaPrinterOptionsExternal::enumInstances(
    const char *aNameSpaceP,
    const char** aPropertiesPP,
    Linux_SambaPrinterOptionsInstanceEnumeration& anInstanceEnumeration) {
   		
    CmpiObjectPath classObjectPath(aNameSpaceP,"Linux_SambaPrinterOptions");
    CmpiEnumeration cmpiEnumeration = 
      m_broker.enumInstances(m_context,classObjectPath,aPropertiesPP);
    while (cmpiEnumeration.hasNext()) {
      CmpiInstance cmpiInstance = cmpiEnumeration.getNext();
      Linux_SambaPrinterOptionsInstance instance(cmpiInstance,aNameSpaceP);
      anInstanceEnumeration.addElement(instance);
    }
  
  }
  	  
	//----------------------------------------------------------------------------
  Linux_SambaPrinterOptionsInstance
  Linux_SambaPrinterOptionsExternal::getInstance(
    const char** aPropertiesPP,
    const Linux_SambaPrinterOptionsInstanceName& anInstanceName) {
    
    CmpiObjectPath cmpiObjectPath = anInstanceName.getObjectPath();
    CmpiInstance cmpiInstance = 
      m_broker.getInstance(m_context,cmpiObjectPath,aPropertiesPP);
  
    return Linux_SambaPrinterOptionsInstance(cmpiInstance,anInstanceName.getNamespace());
  
  }
      
	//----------------------------------------------------------------------------
  void
  Linux_SambaPrinterOptionsExternal::setInstance(
    const char** aPropertiesPP,
    const Linux_SambaPrinterOptionsInstance& anInstance) {
  
    CmpiObjectPath cmpiObjectPath = anInstance.getInstanceName().getObjectPath();
    CmpiInstance cmpiInstance = anInstance.getCmpiInstance();
    m_broker.setInstance(m_context,cmpiObjectPath,cmpiInstance,aPropertiesPP);
  
  }
      
	//----------------------------------------------------------------------------
  Linux_SambaPrinterOptionsInstanceName
  Linux_SambaPrinterOptionsExternal::createInstance(
    const Linux_SambaPrinterOptionsInstance& anInstance) {
  
    CmpiObjectPath cmpiObjectPath = anInstance.getInstanceName().getObjectPath();
    CmpiInstance cmpiInstance = anInstance.getCmpiInstance();
    return Linux_SambaPrinterOptionsInstanceName(
		m_broker.createInstance(m_context,cmpiObjectPath,cmpiInstance));

  }
  
	//----------------------------------------------------------------------------
  void
  Linux_SambaPrinterOptionsExternal::deleteInstance(
    const Linux_SambaPrinterOptionsInstanceName& anInstanceName) {
    
    CmpiObjectPath cmpiObjectPath = anInstanceName.getObjectPath();
    m_broker.deleteInstance(m_context,cmpiObjectPath);
  
  }
  
}
