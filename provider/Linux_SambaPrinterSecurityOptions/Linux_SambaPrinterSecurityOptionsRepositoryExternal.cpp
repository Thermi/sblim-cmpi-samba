// =======================================================================
// Linux_SambaPrinterSecurityOptionsRepositoryExternal.cpp
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
#include "Linux_SambaPrinterSecurityOptionsRepositoryExternal.h"

namespace genProvider {
	
	//----------------------------------------------------------------------------
  Linux_SambaPrinterSecurityOptionsRepositoryExternal::Linux_SambaPrinterSecurityOptionsRepositoryExternal(
    const CmpiBroker& aBroker,
    const CmpiContext& aContext) 
    : m_broker(aBroker),
    m_context(aContext) { }
  
	//----------------------------------------------------------------------------
  const char* Linux_SambaPrinterSecurityOptionsRepositoryExternal::s_shadowNameSpaceP = "IBMShadow/cimv2";
   
	//----------------------------------------------------------------------------
  Linux_SambaPrinterSecurityOptionsRepositoryExternal::~Linux_SambaPrinterSecurityOptionsRepositoryExternal() { }
    
	//----------------------------------------------------------------------------
  void
  Linux_SambaPrinterSecurityOptionsRepositoryExternal::enumInstanceNames(
    Linux_SambaPrinterSecurityOptionsInstanceNameEnumeration& anInstanceNameEnumeration) {

    CmpiObjectPath cmpiClassObjectPath(s_shadowNameSpaceP,"Linux_SambaPrinterSecurityOptions");
    CmpiEnumeration cmpiEnumeration = 
      m_broker.enumInstanceNames(m_context,cmpiClassObjectPath);
    while(cmpiEnumeration.hasNext()) {
      CmpiObjectPath cmpiObjectPath = cmpiEnumeration.getNext();
      Linux_SambaPrinterSecurityOptionsInstanceName instanceName(cmpiObjectPath);
      anInstanceNameEnumeration.addElement(instanceName);
    }
  }
  	  
	//----------------------------------------------------------------------------
  void
  Linux_SambaPrinterSecurityOptionsRepositoryExternal::enumInstances(
    const char** aPropertiesPP,
    Linux_SambaPrinterSecurityOptionsRepositoryInstanceEnumeration& aRepositoryInstanceEnumeration) {
   		
    CmpiObjectPath cmpiClassObjectPath(s_shadowNameSpaceP,"Linux_SambaPrinterSecurityOptions");
    CmpiEnumeration cmpiEnumeration = 
      m_broker.enumInstances(m_context,cmpiClassObjectPath,aPropertiesPP);
    while(cmpiEnumeration.hasNext()) {
      CmpiInstance cmpiInstance = cmpiEnumeration.getNext();
      Linux_SambaPrinterSecurityOptionsRepositoryInstance repositoryInstance(cmpiInstance,s_shadowNameSpaceP);
      aRepositoryInstanceEnumeration.addElement(repositoryInstance);
    }
  
  }
  	  
  //----------------------------------------------------------------------------
  Linux_SambaPrinterSecurityOptionsRepositoryInstance
  Linux_SambaPrinterSecurityOptionsRepositoryExternal::getInstance(
    const char** aPropertiesPP,
    const Linux_SambaPrinterSecurityOptionsInstanceName& anInstanceName) {
    
    CmpiObjectPath cmpiObjectPath = anInstanceName.getObjectPath();
    cmpiObjectPath.setNameSpace(s_shadowNameSpaceP);
    CmpiInstance cmpiInstance = 
      m_broker.getInstance(m_context,cmpiObjectPath,aPropertiesPP);
    return Linux_SambaPrinterSecurityOptionsRepositoryInstance(cmpiInstance,s_shadowNameSpaceP);

  }
      
  //----------------------------------------------------------------------------
  void
  Linux_SambaPrinterSecurityOptionsRepositoryExternal::setInstance(
    const char** aPropertiesPP,
    const Linux_SambaPrinterSecurityOptionsRepositoryInstance& aRepositoryInstance) {
  
    //make a copy of the given instance and set it to the right nameSpace
    Linux_SambaPrinterSecurityOptionsInstanceName instanceName(aRepositoryInstance.getInstanceName());
    instanceName.setNamespace(s_shadowNameSpaceP,1);
    Linux_SambaPrinterSecurityOptionsRepositoryInstance copiedRepositoryInstance(aRepositoryInstance);
    copiedRepositoryInstance.setInstanceName(instanceName);
    
    CmpiObjectPath cmpiObjectPath = instanceName.getObjectPath();
    CmpiInstance cmpiInstance = copiedRepositoryInstance.getCmpiInstance();
    m_broker.setInstance(m_context,cmpiObjectPath,cmpiInstance,aPropertiesPP);
  
  }
      
  //----------------------------------------------------------------------------
  Linux_SambaPrinterSecurityOptionsInstanceName
  Linux_SambaPrinterSecurityOptionsRepositoryExternal::createInstance(
    const Linux_SambaPrinterSecurityOptionsRepositoryInstance& aRepositoryInstance) {
  
    //make a copy of the given instance and set it to the right nameSpace
    Linux_SambaPrinterSecurityOptionsInstanceName instanceName(aRepositoryInstance.getInstanceName());
    instanceName.setNamespace(s_shadowNameSpaceP,1);
    Linux_SambaPrinterSecurityOptionsRepositoryInstance copiedRepositoryInstance(aRepositoryInstance);
    copiedRepositoryInstance.setInstanceName(instanceName);
    
    CmpiObjectPath cmpiObjectPath = instanceName.getObjectPath();
    CmpiInstance cmpiInstance = copiedRepositoryInstance.getCmpiInstance();
    return Linux_SambaPrinterSecurityOptionsInstanceName(
		m_broker.createInstance(m_context,cmpiObjectPath,cmpiInstance));
  
  }
  
  //----------------------------------------------------------------------------
  void
  Linux_SambaPrinterSecurityOptionsRepositoryExternal::deleteInstance(
    const Linux_SambaPrinterSecurityOptionsInstanceName& anInstanceName) {
    
    CmpiObjectPath cmpiObjectPath = anInstanceName.getObjectPath();
    cmpiObjectPath.setNameSpace(s_shadowNameSpaceP);
    m_broker.deleteInstance(m_context,cmpiObjectPath);
  
  }
    
}
