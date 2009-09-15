// =======================================================================
// Linux_SambaWriteListForGlobalRepositoryExternal.cpp
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
#include "Linux_SambaWriteListForGlobalRepositoryExternal.h"

namespace genProvider {
	
	//----------------------------------------------------------------------------
  Linux_SambaWriteListForGlobalRepositoryExternal::Linux_SambaWriteListForGlobalRepositoryExternal(
    const CmpiBroker& aBroker,
    const CmpiContext& aContext) 
    : m_broker(aBroker),
    m_context(aContext) { }
  
	//----------------------------------------------------------------------------
  const char* Linux_SambaWriteListForGlobalRepositoryExternal::s_shadowNameSpaceP = "IBMShadow/cimv2";
   
	//----------------------------------------------------------------------------
  Linux_SambaWriteListForGlobalRepositoryExternal::~Linux_SambaWriteListForGlobalRepositoryExternal() { }
    
	//----------------------------------------------------------------------------
  void
  Linux_SambaWriteListForGlobalRepositoryExternal::enumInstanceNames(
    Linux_SambaWriteListForGlobalInstanceNameEnumeration& anInstanceNameEnumeration) {

    CmpiObjectPath cmpiClassObjectPath(s_shadowNameSpaceP,"Linux_SambaWriteListForGlobal");
    CmpiEnumeration cmpiEnumeration = 
      m_broker.enumInstanceNames(m_context,cmpiClassObjectPath);
    while(cmpiEnumeration.hasNext()) {
      CmpiObjectPath cmpiObjectPath = cmpiEnumeration.getNext();
      Linux_SambaWriteListForGlobalInstanceName instanceName(cmpiObjectPath);
      anInstanceNameEnumeration.addElement(instanceName);
    }
  }
  	  
	//----------------------------------------------------------------------------
  void
  Linux_SambaWriteListForGlobalRepositoryExternal::enumInstances(
    const char** aPropertiesPP,
    Linux_SambaWriteListForGlobalRepositoryInstanceEnumeration& aRepositoryInstanceEnumeration) {
   		
    CmpiObjectPath cmpiClassObjectPath(s_shadowNameSpaceP,"Linux_SambaWriteListForGlobal");
    CmpiEnumeration cmpiEnumeration = 
      m_broker.enumInstances(m_context,cmpiClassObjectPath,aPropertiesPP);
    while(cmpiEnumeration.hasNext()) {
      CmpiInstance cmpiInstance = cmpiEnumeration.getNext();
      Linux_SambaWriteListForGlobalRepositoryInstance repositoryInstance(cmpiInstance,s_shadowNameSpaceP);
      aRepositoryInstanceEnumeration.addElement(repositoryInstance);
    }
  
  }
  	  
  //----------------------------------------------------------------------------
  Linux_SambaWriteListForGlobalRepositoryInstance
  Linux_SambaWriteListForGlobalRepositoryExternal::getInstance(
    const char** aPropertiesPP,
    const Linux_SambaWriteListForGlobalInstanceName& anInstanceName) {
    
    CmpiObjectPath cmpiObjectPath = anInstanceName.getObjectPath();
    cmpiObjectPath.setNameSpace(s_shadowNameSpaceP);
    CmpiInstance cmpiInstance = 
      m_broker.getInstance(m_context,cmpiObjectPath,aPropertiesPP);
    return Linux_SambaWriteListForGlobalRepositoryInstance(cmpiInstance,s_shadowNameSpaceP);

  }
      
  //----------------------------------------------------------------------------
  void
  Linux_SambaWriteListForGlobalRepositoryExternal::setInstance(
    const char** aPropertiesPP,
    const Linux_SambaWriteListForGlobalRepositoryInstance& aRepositoryInstance) {
  
    //make a copy of the given instance and set it to the right nameSpace
    Linux_SambaWriteListForGlobalInstanceName instanceName(aRepositoryInstance.getInstanceName());
    instanceName.setNamespace(s_shadowNameSpaceP,1);
    Linux_SambaWriteListForGlobalRepositoryInstance copiedRepositoryInstance(aRepositoryInstance);
    copiedRepositoryInstance.setInstanceName(instanceName);
    
    CmpiObjectPath cmpiObjectPath = instanceName.getObjectPath();
    CmpiInstance cmpiInstance = copiedRepositoryInstance.getCmpiInstance();
    m_broker.setInstance(m_context,cmpiObjectPath,cmpiInstance,aPropertiesPP);
  
  }
      
  //----------------------------------------------------------------------------
  Linux_SambaWriteListForGlobalInstanceName
  Linux_SambaWriteListForGlobalRepositoryExternal::createInstance(
    const Linux_SambaWriteListForGlobalRepositoryInstance& aRepositoryInstance) {
  
    //make a copy of the given instance and set it to the right nameSpace
    Linux_SambaWriteListForGlobalInstanceName instanceName(aRepositoryInstance.getInstanceName());
    instanceName.setNamespace(s_shadowNameSpaceP,1);
    Linux_SambaWriteListForGlobalRepositoryInstance copiedRepositoryInstance(aRepositoryInstance);
    copiedRepositoryInstance.setInstanceName(instanceName);
    
    CmpiObjectPath cmpiObjectPath = instanceName.getObjectPath();
    CmpiInstance cmpiInstance = copiedRepositoryInstance.getCmpiInstance();
    return Linux_SambaWriteListForGlobalInstanceName(
		m_broker.createInstance(m_context,cmpiObjectPath,cmpiInstance));
  
  }
  
  //----------------------------------------------------------------------------
  void
  Linux_SambaWriteListForGlobalRepositoryExternal::deleteInstance(
    const Linux_SambaWriteListForGlobalInstanceName& anInstanceName) {
    
    CmpiObjectPath cmpiObjectPath = anInstanceName.getObjectPath();
    cmpiObjectPath.setNameSpace(s_shadowNameSpaceP);
    m_broker.deleteInstance(m_context,cmpiObjectPath);
  
  }
    
}
