// =======================================================================
// Linux_SambaShareSecurityOptionsRepositoryExternal.cpp
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
#include "Linux_SambaShareSecurityOptionsRepositoryExternal.h"

namespace genProvider {
	
	//----------------------------------------------------------------------------
  Linux_SambaShareSecurityOptionsRepositoryExternal::Linux_SambaShareSecurityOptionsRepositoryExternal(
    const CmpiBroker& aBroker,
    const CmpiContext& aContext) 
    : m_broker(aBroker),
    m_context(aContext) { }
  
	//----------------------------------------------------------------------------
  const char* Linux_SambaShareSecurityOptionsRepositoryExternal::s_shadowNameSpaceP = "IBMShadow/cimv2";
   
	//----------------------------------------------------------------------------
  Linux_SambaShareSecurityOptionsRepositoryExternal::~Linux_SambaShareSecurityOptionsRepositoryExternal() { }
    
	//----------------------------------------------------------------------------
  void
  Linux_SambaShareSecurityOptionsRepositoryExternal::enumInstanceNames(
    Linux_SambaShareSecurityOptionsInstanceNameEnumeration& anInstanceNameEnumeration) {

    CmpiObjectPath cmpiClassObjectPath(s_shadowNameSpaceP,"Linux_SambaShareSecurityOptions");
    CmpiEnumeration cmpiEnumeration = 
      m_broker.enumInstanceNames(m_context,cmpiClassObjectPath);
    while(cmpiEnumeration.hasNext()) {
      CmpiObjectPath cmpiObjectPath = cmpiEnumeration.getNext();
      Linux_SambaShareSecurityOptionsInstanceName instanceName(cmpiObjectPath);
      anInstanceNameEnumeration.addElement(instanceName);
    }
  }
  	  
	//----------------------------------------------------------------------------
  void
  Linux_SambaShareSecurityOptionsRepositoryExternal::enumInstances(
    const char** aPropertiesPP,
    Linux_SambaShareSecurityOptionsRepositoryInstanceEnumeration& aRepositoryInstanceEnumeration) {
   		
    CmpiObjectPath cmpiClassObjectPath(s_shadowNameSpaceP,"Linux_SambaShareSecurityOptions");
    CmpiEnumeration cmpiEnumeration = 
      m_broker.enumInstances(m_context,cmpiClassObjectPath,aPropertiesPP);
    while(cmpiEnumeration.hasNext()) {
      CmpiInstance cmpiInstance = cmpiEnumeration.getNext();
      Linux_SambaShareSecurityOptionsRepositoryInstance repositoryInstance(cmpiInstance,s_shadowNameSpaceP);
      aRepositoryInstanceEnumeration.addElement(repositoryInstance);
    }
  
  }
  	  
  //----------------------------------------------------------------------------
  Linux_SambaShareSecurityOptionsRepositoryInstance
  Linux_SambaShareSecurityOptionsRepositoryExternal::getInstance(
    const char** aPropertiesPP,
    const Linux_SambaShareSecurityOptionsInstanceName& anInstanceName) {
    
    CmpiObjectPath cmpiObjectPath = anInstanceName.getObjectPath();
    cmpiObjectPath.setNameSpace(s_shadowNameSpaceP);
    CmpiInstance cmpiInstance = 
      m_broker.getInstance(m_context,cmpiObjectPath,aPropertiesPP);
    return Linux_SambaShareSecurityOptionsRepositoryInstance(cmpiInstance,s_shadowNameSpaceP);

  }
      
  //----------------------------------------------------------------------------
  void
  Linux_SambaShareSecurityOptionsRepositoryExternal::setInstance(
    const char** aPropertiesPP,
    const Linux_SambaShareSecurityOptionsRepositoryInstance& aRepositoryInstance) {
  
    //make a copy of the given instance and set it to the right nameSpace
    Linux_SambaShareSecurityOptionsInstanceName instanceName(aRepositoryInstance.getInstanceName());
    instanceName.setNamespace(s_shadowNameSpaceP,1);
    Linux_SambaShareSecurityOptionsRepositoryInstance copiedRepositoryInstance(aRepositoryInstance);
    copiedRepositoryInstance.setInstanceName(instanceName);
    
    CmpiObjectPath cmpiObjectPath = instanceName.getObjectPath();
    CmpiInstance cmpiInstance = copiedRepositoryInstance.getCmpiInstance();
    m_broker.setInstance(m_context,cmpiObjectPath,cmpiInstance,aPropertiesPP);
  
  }
      
  //----------------------------------------------------------------------------
  Linux_SambaShareSecurityOptionsInstanceName
  Linux_SambaShareSecurityOptionsRepositoryExternal::createInstance(
    const Linux_SambaShareSecurityOptionsRepositoryInstance& aRepositoryInstance) {
  
    //make a copy of the given instance and set it to the right nameSpace
    Linux_SambaShareSecurityOptionsInstanceName instanceName(aRepositoryInstance.getInstanceName());
    instanceName.setNamespace(s_shadowNameSpaceP,1);
    Linux_SambaShareSecurityOptionsRepositoryInstance copiedRepositoryInstance(aRepositoryInstance);
    copiedRepositoryInstance.setInstanceName(instanceName);
    
    CmpiObjectPath cmpiObjectPath = instanceName.getObjectPath();
    CmpiInstance cmpiInstance = copiedRepositoryInstance.getCmpiInstance();
    return Linux_SambaShareSecurityOptionsInstanceName(
		m_broker.createInstance(m_context,cmpiObjectPath,cmpiInstance));
  
  }
  
  //----------------------------------------------------------------------------
  void
  Linux_SambaShareSecurityOptionsRepositoryExternal::deleteInstance(
    const Linux_SambaShareSecurityOptionsInstanceName& anInstanceName) {
    
    CmpiObjectPath cmpiObjectPath = anInstanceName.getObjectPath();
    cmpiObjectPath.setNameSpace(s_shadowNameSpaceP);
    m_broker.deleteInstance(m_context,cmpiObjectPath);
  
  }
    
}
