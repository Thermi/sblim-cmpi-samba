// =======================================================================
// Linux_SambaPrinterBrowseOptionsExternal.cpp
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

#include "Linux_SambaPrinterBrowseOptionsExternal.h"

namespace genProvider {
	
	//----------------------------------------------------------------------------
  Linux_SambaPrinterBrowseOptionsExternal::Linux_SambaPrinterBrowseOptionsExternal(
    const CmpiBroker& aBroker,
    const CmpiContext& aContext ) 
    : m_broker(aBroker),
    m_context(aContext) { }
   
	//----------------------------------------------------------------------------
  Linux_SambaPrinterBrowseOptionsExternal::~Linux_SambaPrinterBrowseOptionsExternal() { }
    
	//----------------------------------------------------------------------------
  void 
  Linux_SambaPrinterBrowseOptionsExternal::enumInstanceNames(
    const char *aNameSpaceP,
    Linux_SambaPrinterBrowseOptionsInstanceNameEnumeration& anInstanceNameEnumeration) {

    CmpiObjectPath classObjectPath(aNameSpaceP,"Linux_SambaPrinterBrowseOptions");
    CmpiEnumeration cmpiEnumeration = 
      m_broker.enumInstanceNames(m_context,classObjectPath);
    while (cmpiEnumeration.hasNext()) {
      CmpiObjectPath objectPath = cmpiEnumeration.getNext();
      Linux_SambaPrinterBrowseOptionsInstanceName instanceName(objectPath);
      anInstanceNameEnumeration.addElement(instanceName);
    }
  
  }
  	  
  //----------------------------------------------------------------------------
  void
  Linux_SambaPrinterBrowseOptionsExternal::enumInstances(
    const char *aNameSpaceP,
    const char** aPropertiesPP,
    Linux_SambaPrinterBrowseOptionsInstanceEnumeration& anInstanceEnumeration) {
   		
    CmpiObjectPath classObjectPath(aNameSpaceP,"Linux_SambaPrinterBrowseOptions");
    CmpiEnumeration cmpiEnumeration = 
      m_broker.enumInstances(m_context,classObjectPath,aPropertiesPP);
    while (cmpiEnumeration.hasNext()) {
      CmpiInstance cmpiInstance = cmpiEnumeration.getNext();
      Linux_SambaPrinterBrowseOptionsInstance instance(cmpiInstance,aNameSpaceP);
      anInstanceEnumeration.addElement(instance);
    }
  
  }
  	  
	//----------------------------------------------------------------------------
  Linux_SambaPrinterBrowseOptionsInstance
  Linux_SambaPrinterBrowseOptionsExternal::getInstance(
    const char** aPropertiesPP,
    const Linux_SambaPrinterBrowseOptionsInstanceName& anInstanceName) {
    
    CmpiObjectPath cmpiObjectPath = anInstanceName.getObjectPath();
    CmpiInstance cmpiInstance = 
      m_broker.getInstance(m_context,cmpiObjectPath,aPropertiesPP);
  
    return Linux_SambaPrinterBrowseOptionsInstance(cmpiInstance,anInstanceName.getNamespace());
  
  }
      
	//----------------------------------------------------------------------------
  void
  Linux_SambaPrinterBrowseOptionsExternal::setInstance(
    const char** aPropertiesPP,
    const Linux_SambaPrinterBrowseOptionsInstance& anInstance) {
  
    CmpiObjectPath cmpiObjectPath = anInstance.getInstanceName().getObjectPath();
    CmpiInstance cmpiInstance = anInstance.getCmpiInstance();
    m_broker.setInstance(m_context,cmpiObjectPath,cmpiInstance,aPropertiesPP);
  
  }
      
	//----------------------------------------------------------------------------
  Linux_SambaPrinterBrowseOptionsInstanceName
  Linux_SambaPrinterBrowseOptionsExternal::createInstance(
    const Linux_SambaPrinterBrowseOptionsInstance& anInstance) {
  
    CmpiObjectPath cmpiObjectPath = anInstance.getInstanceName().getObjectPath();
    CmpiInstance cmpiInstance = anInstance.getCmpiInstance();
    return Linux_SambaPrinterBrowseOptionsInstanceName(
		m_broker.createInstance(m_context,cmpiObjectPath,cmpiInstance));

  }
  
	//----------------------------------------------------------------------------
  void
  Linux_SambaPrinterBrowseOptionsExternal::deleteInstance(
    const Linux_SambaPrinterBrowseOptionsInstanceName& anInstanceName) {
    
    CmpiObjectPath cmpiObjectPath = anInstanceName.getObjectPath();
    m_broker.deleteInstance(m_context,cmpiObjectPath);
  
  }
  
}
