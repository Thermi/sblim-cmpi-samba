// =======================================================================
// Linux_SambaGlobalBrowseForGlobalManualInstance.cpp
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
#include "Linux_SambaGlobalBrowseForGlobalManualInstance.h"
#include "CmpiData.h"
#include "CmpiString.h"
#include "CmpiArray.h"
#include <string>

namespace genProvider {

  //****************************************************************************
  //Linux_SambaGlobalBrowseForGlobalManualInstance
  //----------------------------------------------------------------------------
  //empty constructor
  Linux_SambaGlobalBrowseForGlobalManualInstance::Linux_SambaGlobalBrowseForGlobalManualInstance() {   	
   	init();  	   	
  }
  
  //----------------------------------------------------------------------------
  //copy constructor	
  //----------------------------------------------------------------------------
  Linux_SambaGlobalBrowseForGlobalManualInstance::Linux_SambaGlobalBrowseForGlobalManualInstance(
    const Linux_SambaGlobalBrowseForGlobalManualInstance& anInstance) {   	
   	init(anInstance);  	   	
  }
  
  //----------------------------------------------------------------------------
  //constructor using CmpiInstance
  //----------------------------------------------------------------------------
  Linux_SambaGlobalBrowseForGlobalManualInstance::Linux_SambaGlobalBrowseForGlobalManualInstance(
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
  Linux_SambaGlobalBrowseForGlobalManualInstance::
   ~Linux_SambaGlobalBrowseForGlobalManualInstance(){
   	reset();  	  
  }
  
  
  //----------------------------------------------------------------------------
  //copy operator
  //----------------------------------------------------------------------------
  Linux_SambaGlobalBrowseForGlobalManualInstance&
  Linux_SambaGlobalBrowseForGlobalManualInstance::operator=(
    const Linux_SambaGlobalBrowseForGlobalManualInstance& anInstance) {   	
   	
   	init(anInstance);
   	return *this;
  
  }
  
  
  //----------------------------------------------------------------------------
  //converts to CmpiInstance
  //----------------------------------------------------------------------------
  CmpiInstance
  Linux_SambaGlobalBrowseForGlobalManualInstance::getCmpiInstance(
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
  Linux_SambaGlobalBrowseForGlobalManualInstance::isInstanceNameSet() const {
  	return isSet.instanceName;
  }
  
  //----------------------------------------------------------------------------
  const Linux_SambaGlobalBrowseForGlobalInstanceName&
  Linux_SambaGlobalBrowseForGlobalManualInstance::getInstanceName() const {

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
  Linux_SambaGlobalBrowseForGlobalManualInstance::setInstanceName(
    const Linux_SambaGlobalBrowseForGlobalInstanceName& val) {

    m_instanceName = val;
    isSet.instanceName = 1;

  }

  
  //----------------------------------------------------------------------------
  //set isSet attributes to FALSE
  //----------------------------------------------------------------------------
  void
  Linux_SambaGlobalBrowseForGlobalManualInstance::init() {
   	isSet.instanceName = 0;
  	
  }
  
  //----------------------------------------------------------------------------
  //copies another instance properties in this
  //----------------------------------------------------------------------------
  void 
  Linux_SambaGlobalBrowseForGlobalManualInstance::init(
    const Linux_SambaGlobalBrowseForGlobalManualInstance& anOriginal) {   	

   	init();
   	   	
    if(anOriginal.isInstanceNameSet()) {
      setInstanceName(anOriginal.getInstanceName());
    }
        
  }
  
  //----------------------------------------------------------------------------
  //reset the instance data
  //----------------------------------------------------------------------------
  void
  Linux_SambaGlobalBrowseForGlobalManualInstance::reset() {
   	
  }
  
  //----------------------------------------------------------------------------
  //Linux_SambaGlobalBrowseForGlobalManualInstanceEnumerationElement	
  //----------------------------------------------------------------------------
  Linux_SambaGlobalBrowseForGlobalManualInstanceEnumerationElement::Linux_SambaGlobalBrowseForGlobalManualInstanceEnumerationElement() {
   	
  	m_elementP = 0;
  	m_nextP = 0;
  	  
  }
  
  //----------------------------------------------------------------------------
  Linux_SambaGlobalBrowseForGlobalManualInstanceEnumerationElement::~Linux_SambaGlobalBrowseForGlobalManualInstanceEnumerationElement() {
   	
  	if (m_elementP) {
  	  delete(m_elementP);
  	}
  	
  	if (m_nextP) {
  	  delete(m_nextP);
  	}
  	  
  }

  //----------------------------------------------------------------------------
  //Linux_SambaGlobalBrowseForGlobalManualInstanceNameEnumeration
  //----------------------------------------------------------------------------
  Linux_SambaGlobalBrowseForGlobalManualInstanceEnumeration::Linux_SambaGlobalBrowseForGlobalManualInstanceEnumeration() {
   	
    m_firstElementP = 0;
    m_currentElementP = 0;
    m_endElementP = 0;
  
  }
  
  //----------------------------------------------------------------------------
  Linux_SambaGlobalBrowseForGlobalManualInstanceEnumeration::Linux_SambaGlobalBrowseForGlobalManualInstanceEnumeration(
    const Linux_SambaGlobalBrowseForGlobalManualInstanceEnumeration& anInstanceEnumeration) {
   	
    m_firstElementP = 0;
    m_currentElementP = 0;
    m_endElementP = 0;
  	 
    int size = anInstanceEnumeration.getSize();
    for (int x=0; x < size;++x) {
      addElement(anInstanceEnumeration.getElement(x));
    }           

  }
  
  //----------------------------------------------------------------------------
  Linux_SambaGlobalBrowseForGlobalManualInstanceEnumeration::~Linux_SambaGlobalBrowseForGlobalManualInstanceEnumeration() {
   	
  	if (m_firstElementP) {
  	  delete(m_firstElementP);
  	}
  	  	
  }
  
  //----------------------------------------------------------------------------
  void
  Linux_SambaGlobalBrowseForGlobalManualInstanceEnumeration::reset() {
  	
  	m_currentElementP = m_firstElementP;
  	
  }
  	  
  //----------------------------------------------------------------------------
  bool
  Linux_SambaGlobalBrowseForGlobalManualInstanceEnumeration::hasNext() const {
  	
  	return (m_currentElementP != 0);
  
  }
  
  //----------------------------------------------------------------------------
  int
  Linux_SambaGlobalBrowseForGlobalManualInstanceEnumeration::getSize() const {
  	
    int size = 0;
    Linux_SambaGlobalBrowseForGlobalManualInstanceEnumerationElement* followingP = m_firstElementP;
  	
  	while (followingP) {
      followingP = followingP->m_nextP;
      ++size;
    }
  	
    return size;
    
  }
  
  //----------------------------------------------------------------------------
  const Linux_SambaGlobalBrowseForGlobalManualInstance&  
  Linux_SambaGlobalBrowseForGlobalManualInstanceEnumeration::getElement(int anIndex) const {
   
    Linux_SambaGlobalBrowseForGlobalManualInstanceEnumerationElement* followingP = m_firstElementP;
   
    int x = 0;
    while (followingP && (x < anIndex)) {
      followingP = followingP->m_nextP;
      ++x;
    }
    
    return *(followingP->m_elementP);

  }
  
  //----------------------------------------------------------------------------
  const Linux_SambaGlobalBrowseForGlobalManualInstance&
  Linux_SambaGlobalBrowseForGlobalManualInstanceEnumeration::getNext() {
   	
    Linux_SambaGlobalBrowseForGlobalManualInstanceEnumerationElement* currentElementP =
  	  m_currentElementP;

    m_currentElementP = m_currentElementP->m_nextP;
  	 
    return *(currentElementP->m_elementP);

  }
  	  
  //----------------------------------------------------------------------------
  void
  Linux_SambaGlobalBrowseForGlobalManualInstanceEnumeration::addElement(
    const Linux_SambaGlobalBrowseForGlobalManualInstance& anInstance) {
   	
  	if (m_firstElementP == 0) {
  	  m_firstElementP = new Linux_SambaGlobalBrowseForGlobalManualInstanceEnumerationElement();
  	  m_firstElementP->m_elementP = new Linux_SambaGlobalBrowseForGlobalManualInstance(anInstance);
  	  m_endElementP = m_firstElementP;
  	  m_currentElementP = m_firstElementP;
  	} else {
  	  m_endElementP->m_nextP = new Linux_SambaGlobalBrowseForGlobalManualInstanceEnumerationElement();
  	  m_endElementP = m_endElementP->m_nextP;
  	  m_endElementP->m_elementP = new Linux_SambaGlobalBrowseForGlobalManualInstance(anInstance);
  	}

  }
  
}
