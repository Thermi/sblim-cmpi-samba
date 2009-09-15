// =======================================================================
// Linux_SambaGlobalBrowseForGlobalRepositoryInstance.cpp
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
#include "Linux_SambaGlobalBrowseForGlobalRepositoryInstance.h"
#include "CmpiData.h"
#include "CmpiString.h"
#include "CmpiArray.h"
#include <string>

namespace genProvider {

  //****************************************************************************
  //Linux_SambaGlobalBrowseForGlobalRepositoryInstance
  //----------------------------------------------------------------------------
  //empty constructor
  Linux_SambaGlobalBrowseForGlobalRepositoryInstance::Linux_SambaGlobalBrowseForGlobalRepositoryInstance() {   	
   	init();  	   	
  }
  
  //----------------------------------------------------------------------------
  //copy constructor	
  //----------------------------------------------------------------------------
  Linux_SambaGlobalBrowseForGlobalRepositoryInstance::Linux_SambaGlobalBrowseForGlobalRepositoryInstance(
    const Linux_SambaGlobalBrowseForGlobalRepositoryInstance& anInstance) {   	
   	init(anInstance);  	   	
  }
  
  //----------------------------------------------------------------------------
  //constructor using CmpiInstance
  //----------------------------------------------------------------------------
  Linux_SambaGlobalBrowseForGlobalRepositoryInstance::Linux_SambaGlobalBrowseForGlobalRepositoryInstance(
    const CmpiInstance& aCmpiInstance,
    const char* anInstanceNamespaceP) {

    CmpiData cmpiData;

    init(); 
    
    CmpiObjectPath cop = aCmpiInstance.getObjectPath();
    cop.setNameSpace(anInstanceNamespaceP);
    setInstanceName(Linux_SambaGlobalBrowseForGlobalInstanceName(cop));

    
  }
  
  //----------------------------------------------------------------------------
  //Destructor
  //----------------------------------------------------------------------------
  Linux_SambaGlobalBrowseForGlobalRepositoryInstance::
   ~Linux_SambaGlobalBrowseForGlobalRepositoryInstance(){
   	reset();  	  
  }
  
  
  //----------------------------------------------------------------------------
  //copy operator
  //----------------------------------------------------------------------------
  Linux_SambaGlobalBrowseForGlobalRepositoryInstance&
  Linux_SambaGlobalBrowseForGlobalRepositoryInstance::operator=(
    const Linux_SambaGlobalBrowseForGlobalRepositoryInstance& anInstance) {   	
   	
   	init(anInstance);
   	return *this;
  
  }
  
  
  //----------------------------------------------------------------------------
  //converts to CmpiInstance
  //----------------------------------------------------------------------------
  CmpiInstance
  Linux_SambaGlobalBrowseForGlobalRepositoryInstance::getCmpiInstance(
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
  Linux_SambaGlobalBrowseForGlobalRepositoryInstance::isInstanceNameSet() const {
  	return isSet.instanceName;
  }
  
  //----------------------------------------------------------------------------
  const Linux_SambaGlobalBrowseForGlobalInstanceName&
  Linux_SambaGlobalBrowseForGlobalRepositoryInstance::getInstanceName() const {

    if( ! isSet.instanceName) {
   	  throw CmpiErrorFormater::getErrorException(
        CmpiErrorFormater::NOT_SET,
        "InstanceName (CIM Key Attributes)",
        "Linux_SambaGlobalBrowseForGlobal");
   	}
  		
   	return m_instanceName;
  
  }

  //----------------------------------------------------------------------------
  void
  Linux_SambaGlobalBrowseForGlobalRepositoryInstance::setInstanceName(
    const Linux_SambaGlobalBrowseForGlobalInstanceName& val) {

    m_instanceName = val;
    isSet.instanceName = 1;

  }

  
  //----------------------------------------------------------------------------
  //set isSet attributes to FALSE
  //----------------------------------------------------------------------------
  void
  Linux_SambaGlobalBrowseForGlobalRepositoryInstance::init() {
   	isSet.instanceName = 0;
  	
  }
  
  //----------------------------------------------------------------------------
  //copies another instance properties in this
  //----------------------------------------------------------------------------
  void 
  Linux_SambaGlobalBrowseForGlobalRepositoryInstance::init(
    const Linux_SambaGlobalBrowseForGlobalRepositoryInstance& anOriginal) {   	

   	init();
   	   	
    if(anOriginal.isInstanceNameSet()) {
      setInstanceName(anOriginal.getInstanceName());
    }
        
  }
  
  //----------------------------------------------------------------------------
  //reset the instance data
  //----------------------------------------------------------------------------
  void
  Linux_SambaGlobalBrowseForGlobalRepositoryInstance::reset() {
   	
  }
  
  //----------------------------------------------------------------------------
  //Linux_SambaGlobalBrowseForGlobalRepositoryInstanceEnumerationElement	
  //----------------------------------------------------------------------------
  Linux_SambaGlobalBrowseForGlobalRepositoryInstanceEnumerationElement::Linux_SambaGlobalBrowseForGlobalRepositoryInstanceEnumerationElement() {
   	
  	m_elementP = 0;
  	m_nextP = 0;
  	  
  }
  
  //----------------------------------------------------------------------------
  Linux_SambaGlobalBrowseForGlobalRepositoryInstanceEnumerationElement::~Linux_SambaGlobalBrowseForGlobalRepositoryInstanceEnumerationElement() {
   	
  	if (m_elementP) {
  	  delete(m_elementP);
  	}
  	
  	if (m_nextP) {
  	  delete(m_nextP);
  	}
  	  
  }

  //----------------------------------------------------------------------------
  //Linux_SambaGlobalBrowseForGlobalRepositoryInstanceNameEnumeration
  //----------------------------------------------------------------------------
  Linux_SambaGlobalBrowseForGlobalRepositoryInstanceEnumeration::Linux_SambaGlobalBrowseForGlobalRepositoryInstanceEnumeration() {
   	
    m_firstElementP = 0;
    m_currentElementP = 0;
    m_endElementP = 0;
  
  }
  
  //----------------------------------------------------------------------------
  Linux_SambaGlobalBrowseForGlobalRepositoryInstanceEnumeration::Linux_SambaGlobalBrowseForGlobalRepositoryInstanceEnumeration(
    const Linux_SambaGlobalBrowseForGlobalRepositoryInstanceEnumeration& anInstanceEnumeration) {
   	
    m_firstElementP = 0;
    m_currentElementP = 0;
    m_endElementP = 0;
  	 
    int size = anInstanceEnumeration.getSize();
    for (int x=0; x < size;++x) {
      addElement(anInstanceEnumeration.getElement(x));
    }           

  }
  
  //----------------------------------------------------------------------------
  Linux_SambaGlobalBrowseForGlobalRepositoryInstanceEnumeration::~Linux_SambaGlobalBrowseForGlobalRepositoryInstanceEnumeration() {
   	
  	if (m_firstElementP) {
  	  delete(m_firstElementP);
  	}
  	  	
  }
  
  //----------------------------------------------------------------------------
  void
  Linux_SambaGlobalBrowseForGlobalRepositoryInstanceEnumeration::reset() {
  	
  	m_currentElementP = m_firstElementP;
  	
  }
  	  
  //----------------------------------------------------------------------------
  bool
  Linux_SambaGlobalBrowseForGlobalRepositoryInstanceEnumeration::hasNext() const {
  	
  	return (m_currentElementP != 0);
  
  }
  
  //----------------------------------------------------------------------------
  int
  Linux_SambaGlobalBrowseForGlobalRepositoryInstanceEnumeration::getSize() const {
  	
    int size = 0;
    Linux_SambaGlobalBrowseForGlobalRepositoryInstanceEnumerationElement* followingP = m_firstElementP;
  	
  	while (followingP) {
      followingP = followingP->m_nextP;
      ++size;
    }
  	
    return size;
    
  }
  
  //----------------------------------------------------------------------------
  const Linux_SambaGlobalBrowseForGlobalRepositoryInstance&  
  Linux_SambaGlobalBrowseForGlobalRepositoryInstanceEnumeration::getElement(int anIndex) const {
   
    Linux_SambaGlobalBrowseForGlobalRepositoryInstanceEnumerationElement* followingP = m_firstElementP;
   
    int x = 0;
    while (followingP && (x < anIndex)) {
      followingP = followingP->m_nextP;
      ++x;
    }
    
    return *(followingP->m_elementP);

  }
  
  //----------------------------------------------------------------------------
  const Linux_SambaGlobalBrowseForGlobalRepositoryInstance&
  Linux_SambaGlobalBrowseForGlobalRepositoryInstanceEnumeration::getNext() {
   	
    Linux_SambaGlobalBrowseForGlobalRepositoryInstanceEnumerationElement* currentElementP =
  	  m_currentElementP;

    m_currentElementP = m_currentElementP->m_nextP;
  	 
    return *(currentElementP->m_elementP);

  }
  	  
  //----------------------------------------------------------------------------
  void
  Linux_SambaGlobalBrowseForGlobalRepositoryInstanceEnumeration::addElement(
    const Linux_SambaGlobalBrowseForGlobalRepositoryInstance& anInstance) {
   	
  	if (m_firstElementP == 0) {
  	  m_firstElementP = new Linux_SambaGlobalBrowseForGlobalRepositoryInstanceEnumerationElement();
  	  m_firstElementP->m_elementP = new Linux_SambaGlobalBrowseForGlobalRepositoryInstance(anInstance);
  	  m_endElementP = m_firstElementP;
  	  m_currentElementP = m_firstElementP;
  	} else {
  	  m_endElementP->m_nextP = new Linux_SambaGlobalBrowseForGlobalRepositoryInstanceEnumerationElement();
  	  m_endElementP = m_endElementP->m_nextP;
  	  m_endElementP->m_elementP = new Linux_SambaGlobalBrowseForGlobalRepositoryInstance(anInstance);
  	}

  }
  
}
