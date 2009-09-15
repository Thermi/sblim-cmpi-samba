// =======================================================================
// Linux_SambaForceUserForGlobalRepositoryInstance.cpp
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
#include "Linux_SambaForceUserForGlobalRepositoryInstance.h"
#include "CmpiData.h"
#include "CmpiString.h"
#include "CmpiArray.h"
#include <string>

namespace genProvider {

  //****************************************************************************
  //Linux_SambaForceUserForGlobalRepositoryInstance
  //----------------------------------------------------------------------------
  //empty constructor
  Linux_SambaForceUserForGlobalRepositoryInstance::Linux_SambaForceUserForGlobalRepositoryInstance() {   	
   	init();  	   	
  }
  
  //----------------------------------------------------------------------------
  //copy constructor	
  //----------------------------------------------------------------------------
  Linux_SambaForceUserForGlobalRepositoryInstance::Linux_SambaForceUserForGlobalRepositoryInstance(
    const Linux_SambaForceUserForGlobalRepositoryInstance& anInstance) {   	
   	init(anInstance);  	   	
  }
  
  //----------------------------------------------------------------------------
  //constructor using CmpiInstance
  //----------------------------------------------------------------------------
  Linux_SambaForceUserForGlobalRepositoryInstance::Linux_SambaForceUserForGlobalRepositoryInstance(
    const CmpiInstance& aCmpiInstance,
    const char* anInstanceNamespaceP) {

    CmpiData cmpiData;

    init(); 
    
    CmpiObjectPath cop = aCmpiInstance.getObjectPath();
    cop.setNameSpace(anInstanceNamespaceP);
    setInstanceName(Linux_SambaForceUserForGlobalInstanceName(cop));

    
  }
  
  //----------------------------------------------------------------------------
  //Destructor
  //----------------------------------------------------------------------------
  Linux_SambaForceUserForGlobalRepositoryInstance::
   ~Linux_SambaForceUserForGlobalRepositoryInstance(){
   	reset();  	  
  }
  
  
  //----------------------------------------------------------------------------
  //copy operator
  //----------------------------------------------------------------------------
  Linux_SambaForceUserForGlobalRepositoryInstance&
  Linux_SambaForceUserForGlobalRepositoryInstance::operator=(
    const Linux_SambaForceUserForGlobalRepositoryInstance& anInstance) {   	
   	
   	init(anInstance);
   	return *this;
  
  }
  
  
  //----------------------------------------------------------------------------
  //converts to CmpiInstance
  //----------------------------------------------------------------------------
  CmpiInstance
  Linux_SambaForceUserForGlobalRepositoryInstance::getCmpiInstance(
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
  Linux_SambaForceUserForGlobalRepositoryInstance::isInstanceNameSet() const {
  	return isSet.instanceName;
  }
  
  //----------------------------------------------------------------------------
  const Linux_SambaForceUserForGlobalInstanceName&
  Linux_SambaForceUserForGlobalRepositoryInstance::getInstanceName() const {

    if( ! isSet.instanceName) {
   	  throw CmpiErrorFormater::getErrorException(
        CmpiErrorFormater::NOT_SET,
        "InstanceName (CIM Key Attributes)",
        "Linux_SambaForceUserForGlobal");
   	}
  		
   	return m_instanceName;
  
  }

  //----------------------------------------------------------------------------
  void
  Linux_SambaForceUserForGlobalRepositoryInstance::setInstanceName(
    const Linux_SambaForceUserForGlobalInstanceName& val) {

    m_instanceName = val;
    isSet.instanceName = 1;

  }

  
  //----------------------------------------------------------------------------
  //set isSet attributes to FALSE
  //----------------------------------------------------------------------------
  void
  Linux_SambaForceUserForGlobalRepositoryInstance::init() {
   	isSet.instanceName = 0;
  	
  }
  
  //----------------------------------------------------------------------------
  //copies another instance properties in this
  //----------------------------------------------------------------------------
  void 
  Linux_SambaForceUserForGlobalRepositoryInstance::init(
    const Linux_SambaForceUserForGlobalRepositoryInstance& anOriginal) {   	

   	init();
   	   	
    if(anOriginal.isInstanceNameSet()) {
      setInstanceName(anOriginal.getInstanceName());
    }
        
  }
  
  //----------------------------------------------------------------------------
  //reset the instance data
  //----------------------------------------------------------------------------
  void
  Linux_SambaForceUserForGlobalRepositoryInstance::reset() {
   	
  }
  
  //----------------------------------------------------------------------------
  //Linux_SambaForceUserForGlobalRepositoryInstanceEnumerationElement	
  //----------------------------------------------------------------------------
  Linux_SambaForceUserForGlobalRepositoryInstanceEnumerationElement::Linux_SambaForceUserForGlobalRepositoryInstanceEnumerationElement() {
   	
  	m_elementP = 0;
  	m_nextP = 0;
  	  
  }
  
  //----------------------------------------------------------------------------
  Linux_SambaForceUserForGlobalRepositoryInstanceEnumerationElement::~Linux_SambaForceUserForGlobalRepositoryInstanceEnumerationElement() {
   	
  	if (m_elementP) {
  	  delete(m_elementP);
  	}
  	
  	if (m_nextP) {
  	  delete(m_nextP);
  	}
  	  
  }

  //----------------------------------------------------------------------------
  //Linux_SambaForceUserForGlobalRepositoryInstanceNameEnumeration
  //----------------------------------------------------------------------------
  Linux_SambaForceUserForGlobalRepositoryInstanceEnumeration::Linux_SambaForceUserForGlobalRepositoryInstanceEnumeration() {
   	
    m_firstElementP = 0;
    m_currentElementP = 0;
    m_endElementP = 0;
  
  }
  
  //----------------------------------------------------------------------------
  Linux_SambaForceUserForGlobalRepositoryInstanceEnumeration::Linux_SambaForceUserForGlobalRepositoryInstanceEnumeration(
    const Linux_SambaForceUserForGlobalRepositoryInstanceEnumeration& anInstanceEnumeration) {
   	
    m_firstElementP = 0;
    m_currentElementP = 0;
    m_endElementP = 0;
  	 
    int size = anInstanceEnumeration.getSize();
    for (int x=0; x < size;++x) {
      addElement(anInstanceEnumeration.getElement(x));
    }           

  }
  
  //----------------------------------------------------------------------------
  Linux_SambaForceUserForGlobalRepositoryInstanceEnumeration::~Linux_SambaForceUserForGlobalRepositoryInstanceEnumeration() {
   	
  	if (m_firstElementP) {
  	  delete(m_firstElementP);
  	}
  	  	
  }
  
  //----------------------------------------------------------------------------
  void
  Linux_SambaForceUserForGlobalRepositoryInstanceEnumeration::reset() {
  	
  	m_currentElementP = m_firstElementP;
  	
  }
  	  
  //----------------------------------------------------------------------------
  bool
  Linux_SambaForceUserForGlobalRepositoryInstanceEnumeration::hasNext() const {
  	
  	return (m_currentElementP != 0);
  
  }
  
  //----------------------------------------------------------------------------
  int
  Linux_SambaForceUserForGlobalRepositoryInstanceEnumeration::getSize() const {
  	
    int size = 0;
    Linux_SambaForceUserForGlobalRepositoryInstanceEnumerationElement* followingP = m_firstElementP;
  	
  	while (followingP) {
      followingP = followingP->m_nextP;
      ++size;
    }
  	
    return size;
    
  }
  
  //----------------------------------------------------------------------------
  const Linux_SambaForceUserForGlobalRepositoryInstance&  
  Linux_SambaForceUserForGlobalRepositoryInstanceEnumeration::getElement(int anIndex) const {
   
    Linux_SambaForceUserForGlobalRepositoryInstanceEnumerationElement* followingP = m_firstElementP;
   
    int x = 0;
    while (followingP && (x < anIndex)) {
      followingP = followingP->m_nextP;
      ++x;
    }
    
    return *(followingP->m_elementP);

  }
  
  //----------------------------------------------------------------------------
  const Linux_SambaForceUserForGlobalRepositoryInstance&
  Linux_SambaForceUserForGlobalRepositoryInstanceEnumeration::getNext() {
   	
    Linux_SambaForceUserForGlobalRepositoryInstanceEnumerationElement* currentElementP =
  	  m_currentElementP;

    m_currentElementP = m_currentElementP->m_nextP;
  	 
    return *(currentElementP->m_elementP);

  }
  	  
  //----------------------------------------------------------------------------
  void
  Linux_SambaForceUserForGlobalRepositoryInstanceEnumeration::addElement(
    const Linux_SambaForceUserForGlobalRepositoryInstance& anInstance) {
   	
  	if (m_firstElementP == 0) {
  	  m_firstElementP = new Linux_SambaForceUserForGlobalRepositoryInstanceEnumerationElement();
  	  m_firstElementP->m_elementP = new Linux_SambaForceUserForGlobalRepositoryInstance(anInstance);
  	  m_endElementP = m_firstElementP;
  	  m_currentElementP = m_firstElementP;
  	} else {
  	  m_endElementP->m_nextP = new Linux_SambaForceUserForGlobalRepositoryInstanceEnumerationElement();
  	  m_endElementP = m_endElementP->m_nextP;
  	  m_endElementP->m_elementP = new Linux_SambaForceUserForGlobalRepositoryInstance(anInstance);
  	}

  }
  
}
