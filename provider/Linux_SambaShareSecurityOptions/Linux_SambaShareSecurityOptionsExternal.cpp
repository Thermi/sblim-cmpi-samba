// =======================================================================
// Linux_SambaShareSecurityOptionsExternal.cpp
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

#include "Linux_SambaShareSecurityOptionsExternal.h"

namespace genProvider {
	
	//----------------------------------------------------------------------------
  Linux_SambaShareSecurityOptionsExternal::Linux_SambaShareSecurityOptionsExternal(
    const CmpiBroker& aBroker,
    const CmpiContext& aContext ) 
    : m_broker(aBroker),
    m_context(aContext) { }
   
	//----------------------------------------------------------------------------
  Linux_SambaShareSecurityOptionsExternal::~Linux_SambaShareSecurityOptionsExternal() { }
    
	//----------------------------------------------------------------------------
  void 
  Linux_SambaShareSecurityOptionsExternal::enumInstanceNames(
    const char *aNameSpaceP,
    Linux_SambaShareSecurityOptionsInstanceNameEnumeration& anInstanceNameEnumeration) {

    CmpiObjectPath classObjectPath(aNameSpaceP,"Linux_SambaShareSecurityOptions");
    CmpiEnumeration cmpiEnumeration = 
      m_broker.enumInstanceNames(m_context,classObjectPath);
    while (cmpiEnumeration.hasNext()) {
      CmpiObjectPath objectPath = cmpiEnumeration.getNext();
      Linux_SambaShareSecurityOptionsInstanceName instanceName(objectPath);
      anInstanceNameEnumeration.addElement(instanceName);
    }
  
  }
  	  
  //----------------------------------------------------------------------------
  void
  Linux_SambaShareSecurityOptionsExternal::enumInstances(
    const char *aNameSpaceP,
    const char** aPropertiesPP,
    Linux_SambaShareSecurityOptionsInstanceEnumeration& anInstanceEnumeration) {
   		
    CmpiObjectPath classObjectPath(aNameSpaceP,"Linux_SambaShareSecurityOptions");
    CmpiEnumeration cmpiEnumeration = 
      m_broker.enumInstances(m_context,classObjectPath,aPropertiesPP);
    while (cmpiEnumeration.hasNext()) {
      CmpiInstance cmpiInstance = cmpiEnumeration.getNext();
      Linux_SambaShareSecurityOptionsInstance instance(cmpiInstance,aNameSpaceP);
      anInstanceEnumeration.addElement(instance);
    }
  
  }
  	  
	//----------------------------------------------------------------------------
  Linux_SambaShareSecurityOptionsInstance
  Linux_SambaShareSecurityOptionsExternal::getInstance(
    const char** aPropertiesPP,
    const Linux_SambaShareSecurityOptionsInstanceName& anInstanceName) {
    
    CmpiObjectPath cmpiObjectPath = anInstanceName.getObjectPath();
    CmpiInstance cmpiInstance = 
      m_broker.getInstance(m_context,cmpiObjectPath,aPropertiesPP);
  
    return Linux_SambaShareSecurityOptionsInstance(cmpiInstance,anInstanceName.getNamespace());
  
  }
      
	//----------------------------------------------------------------------------
  void
  Linux_SambaShareSecurityOptionsExternal::setInstance(
    const char** aPropertiesPP,
    const Linux_SambaShareSecurityOptionsInstance& anInstance) {
  
    CmpiObjectPath cmpiObjectPath = anInstance.getInstanceName().getObjectPath();
    CmpiInstance cmpiInstance = anInstance.getCmpiInstance();
    m_broker.setInstance(m_context,cmpiObjectPath,cmpiInstance,aPropertiesPP);
  
  }
      
	//----------------------------------------------------------------------------
  Linux_SambaShareSecurityOptionsInstanceName
  Linux_SambaShareSecurityOptionsExternal::createInstance(
    const Linux_SambaShareSecurityOptionsInstance& anInstance) {
  
    CmpiObjectPath cmpiObjectPath = anInstance.getInstanceName().getObjectPath();
    CmpiInstance cmpiInstance = anInstance.getCmpiInstance();
    return Linux_SambaShareSecurityOptionsInstanceName(
		m_broker.createInstance(m_context,cmpiObjectPath,cmpiInstance));

  }
  
	//----------------------------------------------------------------------------
  void
  Linux_SambaShareSecurityOptionsExternal::deleteInstance(
    const Linux_SambaShareSecurityOptionsInstanceName& anInstanceName) {
    
    CmpiObjectPath cmpiObjectPath = anInstanceName.getObjectPath();
    m_broker.deleteInstance(m_context,cmpiObjectPath);
  
  }
  
}
