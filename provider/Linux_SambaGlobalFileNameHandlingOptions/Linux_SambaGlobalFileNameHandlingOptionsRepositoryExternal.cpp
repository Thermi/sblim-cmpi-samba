// =======================================================================
// Linux_SambaGlobalFileNameHandlingOptionsRepositoryExternal.cpp
//     created on Mon, 26 Jun 2006 using ECUTE 2.2.1
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
//
// =======================================================================
#include "Linux_SambaGlobalFileNameHandlingOptionsRepositoryExternal.h"

namespace genProvider {
	
	//----------------------------------------------------------------------------
  Linux_SambaGlobalFileNameHandlingOptionsRepositoryExternal::Linux_SambaGlobalFileNameHandlingOptionsRepositoryExternal(
    const CmpiBroker& aBroker,
    const CmpiContext& aContext) 
    : m_broker(aBroker),
    m_context(aContext) { }
  
	//----------------------------------------------------------------------------
  const char* Linux_SambaGlobalFileNameHandlingOptionsRepositoryExternal::s_shadowNameSpaceP = "IBMShadow/cimv2";
   
	//----------------------------------------------------------------------------
  Linux_SambaGlobalFileNameHandlingOptionsRepositoryExternal::~Linux_SambaGlobalFileNameHandlingOptionsRepositoryExternal() { }
    
	//----------------------------------------------------------------------------
  void
  Linux_SambaGlobalFileNameHandlingOptionsRepositoryExternal::enumInstanceNames(
    Linux_SambaGlobalFileNameHandlingOptionsInstanceNameEnumeration& anInstanceNameEnumeration) {

    CmpiObjectPath cmpiClassObjectPath(s_shadowNameSpaceP,"Linux_SambaGlobalFileNameHandlingOptions");
    CmpiEnumeration cmpiEnumeration = 
      m_broker.enumInstanceNames(m_context,cmpiClassObjectPath);
    while(cmpiEnumeration.hasNext()) {
      CmpiObjectPath cmpiObjectPath = cmpiEnumeration.getNext();
      Linux_SambaGlobalFileNameHandlingOptionsInstanceName instanceName(cmpiObjectPath);
      anInstanceNameEnumeration.addElement(instanceName);
    }
  }
  	  
	//----------------------------------------------------------------------------
  void
  Linux_SambaGlobalFileNameHandlingOptionsRepositoryExternal::enumInstances(
    const char** aPropertiesPP,
    Linux_SambaGlobalFileNameHandlingOptionsRepositoryInstanceEnumeration& aRepositoryInstanceEnumeration) {
   		
    CmpiObjectPath cmpiClassObjectPath(s_shadowNameSpaceP,"Linux_SambaGlobalFileNameHandlingOptions");
    CmpiEnumeration cmpiEnumeration = 
      m_broker.enumInstances(m_context,cmpiClassObjectPath,aPropertiesPP);
    while(cmpiEnumeration.hasNext()) {
      CmpiInstance cmpiInstance = cmpiEnumeration.getNext();
      Linux_SambaGlobalFileNameHandlingOptionsRepositoryInstance repositoryInstance(cmpiInstance,s_shadowNameSpaceP);
      aRepositoryInstanceEnumeration.addElement(repositoryInstance);
    }
  
  }
  	  
  //----------------------------------------------------------------------------
  Linux_SambaGlobalFileNameHandlingOptionsRepositoryInstance
  Linux_SambaGlobalFileNameHandlingOptionsRepositoryExternal::getInstance(
    const char** aPropertiesPP,
    const Linux_SambaGlobalFileNameHandlingOptionsInstanceName& anInstanceName) {
    
    CmpiObjectPath cmpiObjectPath = anInstanceName.getObjectPath();
    cmpiObjectPath.setNameSpace(s_shadowNameSpaceP);
    CmpiInstance cmpiInstance = 
      m_broker.getInstance(m_context,cmpiObjectPath,aPropertiesPP);
    return Linux_SambaGlobalFileNameHandlingOptionsRepositoryInstance(cmpiInstance,s_shadowNameSpaceP);

  }
      
  //----------------------------------------------------------------------------
  void
  Linux_SambaGlobalFileNameHandlingOptionsRepositoryExternal::setInstance(
    const char** aPropertiesPP,
    const Linux_SambaGlobalFileNameHandlingOptionsRepositoryInstance& aRepositoryInstance) {
  
    //make a copy of the given instance and set it to the right nameSpace
    Linux_SambaGlobalFileNameHandlingOptionsInstanceName instanceName(aRepositoryInstance.getInstanceName());
    instanceName.setNamespace(s_shadowNameSpaceP,1);
    Linux_SambaGlobalFileNameHandlingOptionsRepositoryInstance copiedRepositoryInstance(aRepositoryInstance);
    copiedRepositoryInstance.setInstanceName(instanceName);
    
    CmpiObjectPath cmpiObjectPath = instanceName.getObjectPath();
    CmpiInstance cmpiInstance = copiedRepositoryInstance.getCmpiInstance();
    m_broker.setInstance(m_context,cmpiObjectPath,cmpiInstance,aPropertiesPP);
  
  }
      
  //----------------------------------------------------------------------------
  Linux_SambaGlobalFileNameHandlingOptionsInstanceName
  Linux_SambaGlobalFileNameHandlingOptionsRepositoryExternal::createInstance(
    const Linux_SambaGlobalFileNameHandlingOptionsRepositoryInstance& aRepositoryInstance) {
  
    //make a copy of the given instance and set it to the right nameSpace
    Linux_SambaGlobalFileNameHandlingOptionsInstanceName instanceName(aRepositoryInstance.getInstanceName());
    instanceName.setNamespace(s_shadowNameSpaceP,1);
    Linux_SambaGlobalFileNameHandlingOptionsRepositoryInstance copiedRepositoryInstance(aRepositoryInstance);
    copiedRepositoryInstance.setInstanceName(instanceName);
    
    CmpiObjectPath cmpiObjectPath = instanceName.getObjectPath();
    CmpiInstance cmpiInstance = copiedRepositoryInstance.getCmpiInstance();
    return Linux_SambaGlobalFileNameHandlingOptionsInstanceName(
		m_broker.createInstance(m_context,cmpiObjectPath,cmpiInstance));
  
  }
  
  //----------------------------------------------------------------------------
  void
  Linux_SambaGlobalFileNameHandlingOptionsRepositoryExternal::deleteInstance(
    const Linux_SambaGlobalFileNameHandlingOptionsInstanceName& anInstanceName) {
    
    CmpiObjectPath cmpiObjectPath = anInstanceName.getObjectPath();
    cmpiObjectPath.setNameSpace(s_shadowNameSpaceP);
    m_broker.deleteInstance(m_context,cmpiObjectPath);
  
  }
    
}
