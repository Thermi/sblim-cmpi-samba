// =======================================================================
// Linux_SambaInvalidUsersForGlobalRepositoryInstance.cpp
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
#include "Linux_SambaInvalidUsersForGlobalRepositoryInstance.h"
#include "CmpiData.h"
#include "CmpiString.h"
#include "CmpiArray.h"
#include <string>

namespace genProvider {

  //****************************************************************************
  //Linux_SambaInvalidUsersForGlobalRepositoryInstance
  //----------------------------------------------------------------------------
  //empty constructor
  Linux_SambaInvalidUsersForGlobalRepositoryInstance::Linux_SambaInvalidUsersForGlobalRepositoryInstance() {   	
   	init();  	   	
  }
  
  //----------------------------------------------------------------------------
  //copy constructor	
  //----------------------------------------------------------------------------
  Linux_SambaInvalidUsersForGlobalRepositoryInstance::Linux_SambaInvalidUsersForGlobalRepositoryInstance(
    const Linux_SambaInvalidUsersForGlobalRepositoryInstance& anInstance) {   	
   	init(anInstance);  	   	
  }
  
  //----------------------------------------------------------------------------
  //constructor using CmpiInstance
  //----------------------------------------------------------------------------
  Linux_SambaInvalidUsersForGlobalRepositoryInstance::Linux_SambaInvalidUsersForGlobalRepositoryInstance(
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
  Linux_SambaInvalidUsersForGlobalRepositoryInstance::
   ~Linux_SambaInvalidUsersForGlobalRepositoryInstance(){
   	reset();  	  
  }
  
  
  //----------------------------------------------------------------------------
  //copy operator
  //----------------------------------------------------------------------------
  Linux_SambaInvalidUsersForGlobalRepositoryInstance&
  Linux_SambaInvalidUsersForGlobalRepositoryInstance::operator=(
    const Linux_SambaInvalidUsersForGlobalRepositoryInstance& anInstance) {   	
   	
   	init(anInstance);
   	return *this;
  
  }
  
  
  //----------------------------------------------------------------------------
  //converts to CmpiInstance
  //----------------------------------------------------------------------------
  CmpiInstance
  Linux_SambaInvalidUsersForGlobalRepositoryInstance::getCmpiInstance(
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
  Linux_SambaInvalidUsersForGlobalRepositoryInstance::isInstanceNameSet() const {
  	return isSet.instanceName;
  }
  
  //----------------------------------------------------------------------------
  const Linux_SambaInvalidUsersForGlobalInstanceName&
  Linux_SambaInvalidUsersForGlobalRepositoryInstance::getInstanceName() const {

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
  Linux_SambaInvalidUsersForGlobalRepositoryInstance::setInstanceName(
    const Linux_SambaInvalidUsersForGlobalInstanceName& val) {

    m_instanceName = val;
    isSet.instanceName = 1;

  }

  
  //----------------------------------------------------------------------------
  //set isSet attributes to FALSE
  //----------------------------------------------------------------------------
  void
  Linux_SambaInvalidUsersForGlobalRepositoryInstance::init() {
   	isSet.instanceName = 0;
  	
  }
  
  //----------------------------------------------------------------------------
  //copies another instance properties in this
  //----------------------------------------------------------------------------
  void 
  Linux_SambaInvalidUsersForGlobalRepositoryInstance::init(
    const Linux_SambaInvalidUsersForGlobalRepositoryInstance& anOriginal) {   	

   	init();
   	   	
    if(anOriginal.isInstanceNameSet()) {
      setInstanceName(anOriginal.getInstanceName());
    }
        
  }
  
  //----------------------------------------------------------------------------
  //reset the instance data
  //----------------------------------------------------------------------------
  void
  Linux_SambaInvalidUsersForGlobalRepositoryInstance::reset() {
   	
  }
  
  //----------------------------------------------------------------------------
  //Linux_SambaInvalidUsersForGlobalRepositoryInstanceEnumerationElement	
  //----------------------------------------------------------------------------
  Linux_SambaInvalidUsersForGlobalRepositoryInstanceEnumerationElement::Linux_SambaInvalidUsersForGlobalRepositoryInstanceEnumerationElement() {
   	
  	m_elementP = 0;
  	m_nextP = 0;
  	  
  }
  
  //----------------------------------------------------------------------------
  Linux_SambaInvalidUsersForGlobalRepositoryInstanceEnumerationElement::~Linux_SambaInvalidUsersForGlobalRepositoryInstanceEnumerationElement() {
   	
  	if (m_elementP) {
  	  delete(m_elementP);
  	}
  	
  	if (m_nextP) {
  	  delete(m_nextP);
  	}
  	  
  }

  //----------------------------------------------------------------------------
  //Linux_SambaInvalidUsersForGlobalRepositoryInstanceNameEnumeration
  //----------------------------------------------------------------------------
  Linux_SambaInvalidUsersForGlobalRepositoryInstanceEnumeration::Linux_SambaInvalidUsersForGlobalRepositoryInstanceEnumeration() {
   	
    m_firstElementP = 0;
    m_currentElementP = 0;
    m_endElementP = 0;
  
  }
  
  //----------------------------------------------------------------------------
  Linux_SambaInvalidUsersForGlobalRepositoryInstanceEnumeration::Linux_SambaInvalidUsersForGlobalRepositoryInstanceEnumeration(
    const Linux_SambaInvalidUsersForGlobalRepositoryInstanceEnumeration& anInstanceEnumeration) {
   	
    m_firstElementP = 0;
    m_currentElementP = 0;
    m_endElementP = 0;
  	 
    int size = anInstanceEnumeration.getSize();
    for (int x=0; x < size;++x) {
      addElement(anInstanceEnumeration.getElement(x));
    }           

  }
  
  //----------------------------------------------------------------------------
  Linux_SambaInvalidUsersForGlobalRepositoryInstanceEnumeration::~Linux_SambaInvalidUsersForGlobalRepositoryInstanceEnumeration() {
   	
  	if (m_firstElementP) {
  	  delete(m_firstElementP);
  	}
  	  	
  }
  
  //----------------------------------------------------------------------------
  void
  Linux_SambaInvalidUsersForGlobalRepositoryInstanceEnumeration::reset() {
  	
  	m_currentElementP = m_firstElementP;
  	
  }
  	  
  //----------------------------------------------------------------------------
  bool
  Linux_SambaInvalidUsersForGlobalRepositoryInstanceEnumeration::hasNext() const {
  	
  	return (m_currentElementP != 0);
  
  }
  
  //----------------------------------------------------------------------------
  int
  Linux_SambaInvalidUsersForGlobalRepositoryInstanceEnumeration::getSize() const {
  	
    int size = 0;
    Linux_SambaInvalidUsersForGlobalRepositoryInstanceEnumerationElement* followingP = m_firstElementP;
  	
  	while (followingP) {
      followingP = followingP->m_nextP;
      ++size;
    }
  	
    return size;
    
  }
  
  //----------------------------------------------------------------------------
  const Linux_SambaInvalidUsersForGlobalRepositoryInstance&  
  Linux_SambaInvalidUsersForGlobalRepositoryInstanceEnumeration::getElement(int anIndex) const {
   
    Linux_SambaInvalidUsersForGlobalRepositoryInstanceEnumerationElement* followingP = m_firstElementP;
   
    int x = 0;
    while (followingP && (x < anIndex)) {
      followingP = followingP->m_nextP;
      ++x;
    }
    
    return *(followingP->m_elementP);

  }
  
  //----------------------------------------------------------------------------
  const Linux_SambaInvalidUsersForGlobalRepositoryInstance&
  Linux_SambaInvalidUsersForGlobalRepositoryInstanceEnumeration::getNext() {
   	
    Linux_SambaInvalidUsersForGlobalRepositoryInstanceEnumerationElement* currentElementP =
  	  m_currentElementP;

    m_currentElementP = m_currentElementP->m_nextP;
  	 
    return *(currentElementP->m_elementP);

  }
  	  
  //----------------------------------------------------------------------------
  void
  Linux_SambaInvalidUsersForGlobalRepositoryInstanceEnumeration::addElement(
    const Linux_SambaInvalidUsersForGlobalRepositoryInstance& anInstance) {
   	
  	if (m_firstElementP == 0) {
  	  m_firstElementP = new Linux_SambaInvalidUsersForGlobalRepositoryInstanceEnumerationElement();
  	  m_firstElementP->m_elementP = new Linux_SambaInvalidUsersForGlobalRepositoryInstance(anInstance);
  	  m_endElementP = m_firstElementP;
  	  m_currentElementP = m_firstElementP;
  	} else {
  	  m_endElementP->m_nextP = new Linux_SambaInvalidUsersForGlobalRepositoryInstanceEnumerationElement();
  	  m_endElementP = m_endElementP->m_nextP;
  	  m_endElementP->m_elementP = new Linux_SambaInvalidUsersForGlobalRepositoryInstance(anInstance);
  	}

  }
  
}
