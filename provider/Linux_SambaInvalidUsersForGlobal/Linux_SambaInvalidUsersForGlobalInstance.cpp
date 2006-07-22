// =======================================================================
// Linux_SambaInvalidUsersForGlobalInstance.cpp
//     created on Fri, 23 Jun 2006 using ECUTE 2.2.1
//
// Copyright (c) 2006, International Business Machines
//
// THIS FILE IS PROVIDED UNDER THE TERMS OF THE COMMON PUBLIC LICENSE
// ("AGREEMENT"). ANY USE, REPRODUCTION OR DISTRIBUTION OF THIS FILE
// CONSTITUTES RECIPIENTS ACCEPTANCE OF THE AGREEMENT.
//
// You can obtain a current copy of the Common Public License from
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
#include "Linux_SambaInvalidUsersForGlobalInstance.h"
#include "CmpiData.h"
#include "CmpiString.h"
#include "CmpiArray.h"
#include <string>

namespace genProvider {

  //****************************************************************************
  //Linux_SambaInvalidUsersForGlobalInstance
  //----------------------------------------------------------------------------
  //empty constructor
  Linux_SambaInvalidUsersForGlobalInstance::Linux_SambaInvalidUsersForGlobalInstance() {   	
   	init();  	   	
  }
  
  //----------------------------------------------------------------------------
  //copy constructor	
  //----------------------------------------------------------------------------
  Linux_SambaInvalidUsersForGlobalInstance::Linux_SambaInvalidUsersForGlobalInstance(
    const Linux_SambaInvalidUsersForGlobalInstance& anInstance) {   	
   	init(anInstance);  	   	
  }
  
  //----------------------------------------------------------------------------
  //constructor using CmpiInstance
  //----------------------------------------------------------------------------
  Linux_SambaInvalidUsersForGlobalInstance::Linux_SambaInvalidUsersForGlobalInstance(
    const CmpiInstance& aCmpiInstance,
    const char* anInstanceNamespaceP) {

    CmpiData cmpiData;

    init(); 
    
    CmpiObjectPath cop = aCmpiInstance.getObjectPath();
    cop.setNameSpace(anInstanceNamespaceP);
    setInstanceName(Linux_SambaInvalidUsersForGlobalInstanceName(cop));

    
  }
  
  //----------------------------------------------------------------------------
  //Destructor
  //----------------------------------------------------------------------------
  Linux_SambaInvalidUsersForGlobalInstance::
   ~Linux_SambaInvalidUsersForGlobalInstance(){
   	reset();  	  
  }
  
  
  //----------------------------------------------------------------------------
  //copy operator
  //----------------------------------------------------------------------------
  Linux_SambaInvalidUsersForGlobalInstance&
  Linux_SambaInvalidUsersForGlobalInstance::operator=(
    const Linux_SambaInvalidUsersForGlobalInstance& anInstance) {   	
   	
   	init(anInstance);
   	return *this;
  
  }
  
  
  //----------------------------------------------------------------------------
  //converts to CmpiInstance
  //----------------------------------------------------------------------------
  CmpiInstance
  Linux_SambaInvalidUsersForGlobalInstance::getCmpiInstance(
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
  Linux_SambaInvalidUsersForGlobalInstance::isInstanceNameSet() const {
  	return isSet.instanceName;
  }
  
  //----------------------------------------------------------------------------
  const Linux_SambaInvalidUsersForGlobalInstanceName&
  Linux_SambaInvalidUsersForGlobalInstance::getInstanceName() const {

    if( ! isSet.instanceName) {
   	  throw CmpiErrorFormater::getErrorException(
        CmpiErrorFormater::NOT_SET,
        "InstanceName (CIM Key Attributes)",
        "Linux_SambaInvalidUsersForGlobal");
   	}
  		
   	return m_instanceName;
  
  }

  //----------------------------------------------------------------------------
  void
  Linux_SambaInvalidUsersForGlobalInstance::setInstanceName(
    const Linux_SambaInvalidUsersForGlobalInstanceName& val) {

    m_instanceName = val;
    isSet.instanceName = 1;

  }

  
  //----------------------------------------------------------------------------
  //set isSet attributes to FALSE
  //----------------------------------------------------------------------------
  void
  Linux_SambaInvalidUsersForGlobalInstance::init() {
   	isSet.instanceName = 0;
  	
  }
  
  //----------------------------------------------------------------------------
  //copies another instance properties in this
  //----------------------------------------------------------------------------
  void 
  Linux_SambaInvalidUsersForGlobalInstance::init(
    const Linux_SambaInvalidUsersForGlobalInstance& anOriginal) {   	

   	init();
   	   	
    if(anOriginal.isInstanceNameSet()) {
      setInstanceName(anOriginal.getInstanceName());
    }
        
  }
  
  //----------------------------------------------------------------------------
  //reset the instance data
  //----------------------------------------------------------------------------
  void
  Linux_SambaInvalidUsersForGlobalInstance::reset() {
   	
  }
  
  //----------------------------------------------------------------------------
  //Linux_SambaInvalidUsersForGlobalInstanceEnumerationElement	
  //----------------------------------------------------------------------------
  Linux_SambaInvalidUsersForGlobalInstanceEnumerationElement::Linux_SambaInvalidUsersForGlobalInstanceEnumerationElement() {
   	
  	m_elementP = 0;
  	m_nextP = 0;
  	  
  }
  
  //----------------------------------------------------------------------------
  Linux_SambaInvalidUsersForGlobalInstanceEnumerationElement::~Linux_SambaInvalidUsersForGlobalInstanceEnumerationElement() {
   	
  	if (m_elementP) {
  	  delete(m_elementP);
  	}
  	
  	if (m_nextP) {
  	  delete(m_nextP);
  	}
  	  
  }

  //----------------------------------------------------------------------------
  //Linux_SambaInvalidUsersForGlobalInstanceNameEnumeration
  //----------------------------------------------------------------------------
  Linux_SambaInvalidUsersForGlobalInstanceEnumeration::Linux_SambaInvalidUsersForGlobalInstanceEnumeration() {
   	
    m_firstElementP = 0;
    m_currentElementP = 0;
    m_endElementP = 0;
  
  }
  
  //----------------------------------------------------------------------------
  Linux_SambaInvalidUsersForGlobalInstanceEnumeration::Linux_SambaInvalidUsersForGlobalInstanceEnumeration(
    const Linux_SambaInvalidUsersForGlobalInstanceEnumeration& anInstanceEnumeration) {
   	
    m_firstElementP = 0;
    m_currentElementP = 0;
    m_endElementP = 0;
  	 
    int size = anInstanceEnumeration.getSize();
    for (int x=0; x < size;++x) {
      addElement(anInstanceEnumeration.getElement(x));
    }           

  }
  
  //----------------------------------------------------------------------------
  Linux_SambaInvalidUsersForGlobalInstanceEnumeration::~Linux_SambaInvalidUsersForGlobalInstanceEnumeration() {
   	
  	if (m_firstElementP) {
  	  delete(m_firstElementP);
  	}
  	  	
  }
  
  //----------------------------------------------------------------------------
  void
  Linux_SambaInvalidUsersForGlobalInstanceEnumeration::reset() {
  	
  	m_currentElementP = m_firstElementP;
  	
  }
  	  
  //----------------------------------------------------------------------------
  bool
  Linux_SambaInvalidUsersForGlobalInstanceEnumeration::hasNext() const {
  	
  	return (m_currentElementP != 0);
  
  }
  
  //----------------------------------------------------------------------------
  int
  Linux_SambaInvalidUsersForGlobalInstanceEnumeration::getSize() const {
  	
    int size = 0;
    Linux_SambaInvalidUsersForGlobalInstanceEnumerationElement* followingP = m_firstElementP;
  	
  	while (followingP) {
      followingP = followingP->m_nextP;
      ++size;
    }
  	
    return size;
    
  }
  
  //----------------------------------------------------------------------------
  const Linux_SambaInvalidUsersForGlobalInstance&  
  Linux_SambaInvalidUsersForGlobalInstanceEnumeration::getElement(int anIndex) const {
   
    Linux_SambaInvalidUsersForGlobalInstanceEnumerationElement* followingP = m_firstElementP;
   
    int x = 0;
    while (followingP && (x < anIndex)) {
      followingP = followingP->m_nextP;
      ++x;
    }
    
    return *(followingP->m_elementP);

  }
  
  //----------------------------------------------------------------------------
  const Linux_SambaInvalidUsersForGlobalInstance&
  Linux_SambaInvalidUsersForGlobalInstanceEnumeration::getNext() {
   	
    Linux_SambaInvalidUsersForGlobalInstanceEnumerationElement* currentElementP =
  	  m_currentElementP;

    m_currentElementP = m_currentElementP->m_nextP;
  	 
    return *(currentElementP->m_elementP);

  }
  	  
  //----------------------------------------------------------------------------
  void
  Linux_SambaInvalidUsersForGlobalInstanceEnumeration::addElement(
    const Linux_SambaInvalidUsersForGlobalInstance& anInstance) {
   	
  	if (m_firstElementP == 0) {
  	  m_firstElementP = new Linux_SambaInvalidUsersForGlobalInstanceEnumerationElement();
  	  m_firstElementP->m_elementP = new Linux_SambaInvalidUsersForGlobalInstance(anInstance);
  	  m_endElementP = m_firstElementP;
  	  m_currentElementP = m_firstElementP;
  	} else {
  	  m_endElementP->m_nextP = new Linux_SambaInvalidUsersForGlobalInstanceEnumerationElement();
  	  m_endElementP = m_endElementP->m_nextP;
  	  m_endElementP->m_elementP = new Linux_SambaInvalidUsersForGlobalInstance(anInstance);
  	}

  }
  
}
