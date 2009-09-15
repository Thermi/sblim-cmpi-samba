// =======================================================================
// Linux_SambaForceGroupForGlobalRepositoryInstance.cpp
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
#include "Linux_SambaForceGroupForGlobalRepositoryInstance.h"
#include "CmpiData.h"
#include "CmpiString.h"
#include "CmpiArray.h"
#include <string>

namespace genProvider {

  //****************************************************************************
  //Linux_SambaForceGroupForGlobalRepositoryInstance
  //----------------------------------------------------------------------------
  //empty constructor
  Linux_SambaForceGroupForGlobalRepositoryInstance::Linux_SambaForceGroupForGlobalRepositoryInstance() {   	
   	init();  	   	
  }
  
  //----------------------------------------------------------------------------
  //copy constructor	
  //----------------------------------------------------------------------------
  Linux_SambaForceGroupForGlobalRepositoryInstance::Linux_SambaForceGroupForGlobalRepositoryInstance(
    const Linux_SambaForceGroupForGlobalRepositoryInstance& anInstance) {   	
   	init(anInstance);  	   	
  }
  
  //----------------------------------------------------------------------------
  //constructor using CmpiInstance
  //----------------------------------------------------------------------------
  Linux_SambaForceGroupForGlobalRepositoryInstance::Linux_SambaForceGroupForGlobalRepositoryInstance(
    const CmpiInstance& aCmpiInstance,
    const char* anInstanceNamespaceP) {

    CmpiData cmpiData;

    init(); 
    
    CmpiObjectPath cop = aCmpiInstance.getObjectPath();
    cop.setNameSpace(anInstanceNamespaceP);
    setInstanceName(Linux_SambaForceGroupForGlobalInstanceName(cop));

    
  }
  
  //----------------------------------------------------------------------------
  //Destructor
  //----------------------------------------------------------------------------
  Linux_SambaForceGroupForGlobalRepositoryInstance::
   ~Linux_SambaForceGroupForGlobalRepositoryInstance(){
   	reset();  	  
  }
  
  
  //----------------------------------------------------------------------------
  //copy operator
  //----------------------------------------------------------------------------
  Linux_SambaForceGroupForGlobalRepositoryInstance&
  Linux_SambaForceGroupForGlobalRepositoryInstance::operator=(
    const Linux_SambaForceGroupForGlobalRepositoryInstance& anInstance) {   	
   	
   	init(anInstance);
   	return *this;
  
  }
  
  
  //----------------------------------------------------------------------------
  //converts to CmpiInstance
  //----------------------------------------------------------------------------
  CmpiInstance
  Linux_SambaForceGroupForGlobalRepositoryInstance::getCmpiInstance(
    const char** aPropertiesPP) const {
   	
   	CmpiObjectPath objectPath=getInstanceName().getObjectPath();      
    CmpiInstance cmpiInstance(objectPath);    
    getInstanceName().fillKeys(cmpiInstance);
    
    if (aPropertiesPP) {
	    cmpiInstance.setPropertyFilter(aPropertiesPP,0);
    }

  	
  	return cmpiInstance;
  	
  }
  
  //----------------------------------------------------------------------------
  // InstanceName related methods
  //----------------------------------------------------------------------------
  unsigned int 
  Linux_SambaForceGroupForGlobalRepositoryInstance::isInstanceNameSet() const {
  	return isSet.instanceName;
  }
  
  //----------------------------------------------------------------------------
  const Linux_SambaForceGroupForGlobalInstanceName&
  Linux_SambaForceGroupForGlobalRepositoryInstance::getInstanceName() const {

    if( ! isSet.instanceName) {
   	  throw CmpiErrorFormater::getErrorException(
        CmpiErrorFormater::NOT_SET,
        "InstanceName (CIM Key Attributes)",
        "Linux_SambaForceGroupForGlobal");
   	}
  		
   	return m_instanceName;
  
  }

  //----------------------------------------------------------------------------
  void
  Linux_SambaForceGroupForGlobalRepositoryInstance::setInstanceName(
    const Linux_SambaForceGroupForGlobalInstanceName& val) {

    m_instanceName = val;
    isSet.instanceName = 1;

  }

  
  //----------------------------------------------------------------------------
  //set isSet attributes to FALSE
  //----------------------------------------------------------------------------
  void
  Linux_SambaForceGroupForGlobalRepositoryInstance::init() {
   	isSet.instanceName = 0;
  	
  }
  
  //----------------------------------------------------------------------------
  //copies another instance properties in this
  //----------------------------------------------------------------------------
  void 
  Linux_SambaForceGroupForGlobalRepositoryInstance::init(
    const Linux_SambaForceGroupForGlobalRepositoryInstance& anOriginal) {   	

   	init();
   	   	
    if(anOriginal.isInstanceNameSet()) {
      setInstanceName(anOriginal.getInstanceName());
    }
        
  }
  
  //----------------------------------------------------------------------------
  //reset the instance data
  //----------------------------------------------------------------------------
  void
  Linux_SambaForceGroupForGlobalRepositoryInstance::reset() {
   	
  }
  
  //----------------------------------------------------------------------------
  //Linux_SambaForceGroupForGlobalRepositoryInstanceEnumerationElement	
  //----------------------------------------------------------------------------
  Linux_SambaForceGroupForGlobalRepositoryInstanceEnumerationElement::Linux_SambaForceGroupForGlobalRepositoryInstanceEnumerationElement() {
   	
  	m_elementP = 0;
  	m_nextP = 0;
  	  
  }
  
  //----------------------------------------------------------------------------
  Linux_SambaForceGroupForGlobalRepositoryInstanceEnumerationElement::~Linux_SambaForceGroupForGlobalRepositoryInstanceEnumerationElement() {
   	
  	if (m_elementP) {
  	  delete(m_elementP);
  	}
  	
  	if (m_nextP) {
  	  delete(m_nextP);
  	}
  	  
  }

  //----------------------------------------------------------------------------
  //Linux_SambaForceGroupForGlobalRepositoryInstanceNameEnumeration
  //----------------------------------------------------------------------------
  Linux_SambaForceGroupForGlobalRepositoryInstanceEnumeration::Linux_SambaForceGroupForGlobalRepositoryInstanceEnumeration() {
   	
    m_firstElementP = 0;
    m_currentElementP = 0;
    m_endElementP = 0;
  
  }
  
  //----------------------------------------------------------------------------
  Linux_SambaForceGroupForGlobalRepositoryInstanceEnumeration::Linux_SambaForceGroupForGlobalRepositoryInstanceEnumeration(
    const Linux_SambaForceGroupForGlobalRepositoryInstanceEnumeration& anInstanceEnumeration) {
   	
    m_firstElementP = 0;
    m_currentElementP = 0;
    m_endElementP = 0;
  	 
    int size = anInstanceEnumeration.getSize();
    for (int x=0; x < size;++x) {
      addElement(anInstanceEnumeration.getElement(x));
    }           

  }
  
  //----------------------------------------------------------------------------
  Linux_SambaForceGroupForGlobalRepositoryInstanceEnumeration::~Linux_SambaForceGroupForGlobalRepositoryInstanceEnumeration() {
   	
  	if (m_firstElementP) {
  	  delete(m_firstElementP);
  	}
  	  	
  }
  
  //----------------------------------------------------------------------------
  void
  Linux_SambaForceGroupForGlobalRepositoryInstanceEnumeration::reset() {
  	
  	m_currentElementP = m_firstElementP;
  	
  }
  	  
  //----------------------------------------------------------------------------
  bool
  Linux_SambaForceGroupForGlobalRepositoryInstanceEnumeration::hasNext() const {
  	
  	return (m_currentElementP != 0);
  
  }
  
  //----------------------------------------------------------------------------
  int
  Linux_SambaForceGroupForGlobalRepositoryInstanceEnumeration::getSize() const {
  	
    int size = 0;
    Linux_SambaForceGroupForGlobalRepositoryInstanceEnumerationElement* followingP = m_firstElementP;
  	
  	while (followingP) {
      followingP = followingP->m_nextP;
      ++size;
    }
  	
    return size;
    
  }
  
  //----------------------------------------------------------------------------
  const Linux_SambaForceGroupForGlobalRepositoryInstance&  
  Linux_SambaForceGroupForGlobalRepositoryInstanceEnumeration::getElement(int anIndex) const {
   
    Linux_SambaForceGroupForGlobalRepositoryInstanceEnumerationElement* followingP = m_firstElementP;
   
    int x = 0;
    while (followingP && (x < anIndex)) {
      followingP = followingP->m_nextP;
      ++x;
    }
    
    return *(followingP->m_elementP);

  }
  
  //----------------------------------------------------------------------------
  const Linux_SambaForceGroupForGlobalRepositoryInstance&
  Linux_SambaForceGroupForGlobalRepositoryInstanceEnumeration::getNext() {
   	
    Linux_SambaForceGroupForGlobalRepositoryInstanceEnumerationElement* currentElementP =
  	  m_currentElementP;

    m_currentElementP = m_currentElementP->m_nextP;
  	 
    return *(currentElementP->m_elementP);

  }
  	  
  //----------------------------------------------------------------------------
  void
  Linux_SambaForceGroupForGlobalRepositoryInstanceEnumeration::addElement(
    const Linux_SambaForceGroupForGlobalRepositoryInstance& anInstance) {
   	
  	if (m_firstElementP == 0) {
  	  m_firstElementP = new Linux_SambaForceGroupForGlobalRepositoryInstanceEnumerationElement();
  	  m_firstElementP->m_elementP = new Linux_SambaForceGroupForGlobalRepositoryInstance(anInstance);
  	  m_endElementP = m_firstElementP;
  	  m_currentElementP = m_firstElementP;
  	} else {
  	  m_endElementP->m_nextP = new Linux_SambaForceGroupForGlobalRepositoryInstanceEnumerationElement();
  	  m_endElementP = m_endElementP->m_nextP;
  	  m_endElementP->m_elementP = new Linux_SambaForceGroupForGlobalRepositoryInstance(anInstance);
  	}

  }
  
}
