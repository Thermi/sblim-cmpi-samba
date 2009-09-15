// =======================================================================
// Linux_SambaShareBrowseOptionsRepositoryExternal.cpp
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
#include "Linux_SambaShareBrowseOptionsRepositoryExternal.h"

namespace genProvider {
	
	//----------------------------------------------------------------------------
  Linux_SambaShareBrowseOptionsRepositoryExternal::Linux_SambaShareBrowseOptionsRepositoryExternal(
    const CmpiBroker& aBroker,
    const CmpiContext& aContext) 
    : m_broker(aBroker),
    m_context(aContext) { }
  
	//----------------------------------------------------------------------------
  const char* Linux_SambaShareBrowseOptionsRepositoryExternal::s_shadowNameSpaceP = "IBMShadow/cimv2";
   
	//----------------------------------------------------------------------------
  Linux_SambaShareBrowseOptionsRepositoryExternal::~Linux_SambaShareBrowseOptionsRepositoryExternal() { }
    
	//----------------------------------------------------------------------------
  void
  Linux_SambaShareBrowseOptionsRepositoryExternal::enumInstanceNames(
    Linux_SambaShareBrowseOptionsInstanceNameEnumeration& anInstanceNameEnumeration) {

    CmpiObjectPath cmpiClassObjectPath(s_shadowNameSpaceP,"Linux_SambaShareBrowseOptions");
    CmpiEnumeration cmpiEnumeration = 
      m_broker.enumInstanceNames(m_context,cmpiClassObjectPath);
    while(cmpiEnumeration.hasNext()) {
      CmpiObjectPath cmpiObjectPath = cmpiEnumeration.getNext();
      Linux_SambaShareBrowseOptionsInstanceName instanceName(cmpiObjectPath);
      anInstanceNameEnumeration.addElement(instanceName);
    }
  }
  	  
	//----------------------------------------------------------------------------
  void
  Linux_SambaShareBrowseOptionsRepositoryExternal::enumInstances(
    const char** aPropertiesPP,
    Linux_SambaShareBrowseOptionsRepositoryInstanceEnumeration& aRepositoryInstanceEnumeration) {
   		
    CmpiObjectPath cmpiClassObjectPath(s_shadowNameSpaceP,"Linux_SambaShareBrowseOptions");
    CmpiEnumeration cmpiEnumeration = 
      m_broker.enumInstances(m_context,cmpiClassObjectPath,aPropertiesPP);
    while(cmpiEnumeration.hasNext()) {
      CmpiInstance cmpiInstance = cmpiEnumeration.getNext();
      Linux_SambaShareBrowseOptionsRepositoryInstance repositoryInstance(cmpiInstance,s_shadowNameSpaceP);
      aRepositoryInstanceEnumeration.addElement(repositoryInstance);
    }
  
  }
  	  
  //----------------------------------------------------------------------------
  Linux_SambaShareBrowseOptionsRepositoryInstance
  Linux_SambaShareBrowseOptionsRepositoryExternal::getInstance(
    const char** aPropertiesPP,
    const Linux_SambaShareBrowseOptionsInstanceName& anInstanceName) {
    
    CmpiObjectPath cmpiObjectPath = anInstanceName.getObjectPath();
    cmpiObjectPath.setNameSpace(s_shadowNameSpaceP);
    CmpiInstance cmpiInstance = 
      m_broker.getInstance(m_context,cmpiObjectPath,aPropertiesPP);
    return Linux_SambaShareBrowseOptionsRepositoryInstance(cmpiInstance,s_shadowNameSpaceP);

  }
      
  //----------------------------------------------------------------------------
  void
  Linux_SambaShareBrowseOptionsRepositoryExternal::setInstance(
    const char** aPropertiesPP,
    const Linux_SambaShareBrowseOptionsRepositoryInstance& aRepositoryInstance) {
  
    //make a copy of the given instance and set it to the right nameSpace
    Linux_SambaShareBrowseOptionsInstanceName instanceName(aRepositoryInstance.getInstanceName());
    instanceName.setNamespace(s_shadowNameSpaceP,1);
    Linux_SambaShareBrowseOptionsRepositoryInstance copiedRepositoryInstance(aRepositoryInstance);
    copiedRepositoryInstance.setInstanceName(instanceName);
    
    CmpiObjectPath cmpiObjectPath = instanceName.getObjectPath();
    CmpiInstance cmpiInstance = copiedRepositoryInstance.getCmpiInstance();
    m_broker.setInstance(m_context,cmpiObjectPath,cmpiInstance,aPropertiesPP);
  
  }
      
  //----------------------------------------------------------------------------
  Linux_SambaShareBrowseOptionsInstanceName
  Linux_SambaShareBrowseOptionsRepositoryExternal::createInstance(
    const Linux_SambaShareBrowseOptionsRepositoryInstance& aRepositoryInstance) {
  
    //make a copy of the given instance and set it to the right nameSpace
    Linux_SambaShareBrowseOptionsInstanceName instanceName(aRepositoryInstance.getInstanceName());
    instanceName.setNamespace(s_shadowNameSpaceP,1);
    Linux_SambaShareBrowseOptionsRepositoryInstance copiedRepositoryInstance(aRepositoryInstance);
    copiedRepositoryInstance.setInstanceName(instanceName);
    
    CmpiObjectPath cmpiObjectPath = instanceName.getObjectPath();
    CmpiInstance cmpiInstance = copiedRepositoryInstance.getCmpiInstance();
    return Linux_SambaShareBrowseOptionsInstanceName(
		m_broker.createInstance(m_context,cmpiObjectPath,cmpiInstance));
  
  }
  
  //----------------------------------------------------------------------------
  void
  Linux_SambaShareBrowseOptionsRepositoryExternal::deleteInstance(
    const Linux_SambaShareBrowseOptionsInstanceName& anInstanceName) {
    
    CmpiObjectPath cmpiObjectPath = anInstanceName.getObjectPath();
    cmpiObjectPath.setNameSpace(s_shadowNameSpaceP);
    m_broker.deleteInstance(m_context,cmpiObjectPath);
  
  }
    
}
