// =======================================================================
// Linux_SambaDenyHostsForGlobalManualInstance.cpp
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
#include "Linux_SambaDenyHostsForGlobalManualInstance.h"
#include "CmpiData.h"
#include "CmpiString.h"
#include "CmpiArray.h"
#include <string>

namespace genProvider {

  //****************************************************************************
  //Linux_SambaDenyHostsForGlobalManualInstance
  //----------------------------------------------------------------------------
  //empty constructor
  Linux_SambaDenyHostsForGlobalManualInstance::Linux_SambaDenyHostsForGlobalManualInstance() {   	
   	init();  	   	
  }
  
  //----------------------------------------------------------------------------
  //copy constructor	
  //----------------------------------------------------------------------------
  Linux_SambaDenyHostsForGlobalManualInstance::Linux_SambaDenyHostsForGlobalManualInstance(
    const Linux_SambaDenyHostsForGlobalManualInstance& anInstance) {   	
   	init(anInstance);  	   	
  }
  
  //----------------------------------------------------------------------------
  //constructor using CmpiInstance
  //----------------------------------------------------------------------------
  Linux_SambaDenyHostsForGlobalManualInstance::Linux_SambaDenyHostsForGlobalManualInstance(
    const CmpiInstance& aCmpiInstance,
    const char* anInstanceNamespaceP) {

    CmpiData cmpiData;

    init(); 
    
    CmpiObjectPath cop = aCmpiInstance.getObjectPath();
    cop.setNameSpace(anInstanceNamespaceP);
    setInstanceName(Linux_SambaDenyHostsForGlobalInstanceName(cop));

    
  }
  
  //----------------------------------------------------------------------------
  //Destructor
  //----------------------------------------------------------------------------
  Linux_SambaDenyHostsForGlobalManualInstance::
   ~Linux_SambaDenyHostsForGlobalManualInstance(){
   	reset();  	  
  }
  
  
  //----------------------------------------------------------------------------
  //copy operator
  //----------------------------------------------------------------------------
  Linux_SambaDenyHostsForGlobalManualInstance&
  Linux_SambaDenyHostsForGlobalManualInstance::operator=(
    const Linux_SambaDenyHostsForGlobalManualInstance& anInstance) {   	
   	
   	init(anInstance);
   	return *this;
  
  }
  
  
  //----------------------------------------------------------------------------
  //converts to CmpiInstance
  //----------------------------------------------------------------------------
  CmpiInstance
  Linux_SambaDenyHostsForGlobalManualInstance::getCmpiInstance(
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
  Linux_SambaDenyHostsForGlobalManualInstance::isInstanceNameSet() const {
  	return isSet.instanceName;
  }
  
  //----------------------------------------------------------------------------
  const Linux_SambaDenyHostsForGlobalInstanceName&
  Linux_SambaDenyHostsForGlobalManualInstance::getInstanceName() const {

    if( ! isSet.instanceName) {
   	  throw CmpiErrorFormater::getErrorException(
        CmpiErrorFormater::NOT_SET,
        "InstanceName (CIM Key Attributes)",
        "Linux_SambaDenyHostsForGlobal");
   	}
  		
   	return m_instanceName;
  
  }

  //----------------------------------------------------------------------------
  void
  Linux_SambaDenyHostsForGlobalManualInstance::setInstanceName(
    const Linux_SambaDenyHostsForGlobalInstanceName& val) {

    m_instanceName = val;
    isSet.instanceName = 1;

  }

  
  //----------------------------------------------------------------------------
  //set isSet attributes to FALSE
  //----------------------------------------------------------------------------
  void
  Linux_SambaDenyHostsForGlobalManualInstance::init() {
   	isSet.instanceName = 0;
  	
  }
  
  //----------------------------------------------------------------------------
  //copies another instance properties in this
  //----------------------------------------------------------------------------
  void 
  Linux_SambaDenyHostsForGlobalManualInstance::init(
    const Linux_SambaDenyHostsForGlobalManualInstance& anOriginal) {   	

   	init();
   	   	
    if(anOriginal.isInstanceNameSet()) {
      setInstanceName(anOriginal.getInstanceName());
    }
        
  }
  
  //----------------------------------------------------------------------------
  //reset the instance data
  //----------------------------------------------------------------------------
  void
  Linux_SambaDenyHostsForGlobalManualInstance::reset() {
   	
  }
  
  //----------------------------------------------------------------------------
  //Linux_SambaDenyHostsForGlobalManualInstanceEnumerationElement	
  //----------------------------------------------------------------------------
  Linux_SambaDenyHostsForGlobalManualInstanceEnumerationElement::Linux_SambaDenyHostsForGlobalManualInstanceEnumerationElement() {
   	
  	m_elementP = 0;
  	m_nextP = 0;
  	  
  }
  
  //----------------------------------------------------------------------------
  Linux_SambaDenyHostsForGlobalManualInstanceEnumerationElement::~Linux_SambaDenyHostsForGlobalManualInstanceEnumerationElement() {
   	
  	if (m_elementP) {
  	  delete(m_elementP);
  	}
  	
  	if (m_nextP) {
  	  delete(m_nextP);
  	}
  	  
  }

  //----------------------------------------------------------------------------
  //Linux_SambaDenyHostsForGlobalManualInstanceNameEnumeration
  //----------------------------------------------------------------------------
  Linux_SambaDenyHostsForGlobalManualInstanceEnumeration::Linux_SambaDenyHostsForGlobalManualInstanceEnumeration() {
   	
    m_firstElementP = 0;
    m_currentElementP = 0;
    m_endElementP = 0;
  
  }
  
  //----------------------------------------------------------------------------
  Linux_SambaDenyHostsForGlobalManualInstanceEnumeration::Linux_SambaDenyHostsForGlobalManualInstanceEnumeration(
    const Linux_SambaDenyHostsForGlobalManualInstanceEnumeration& anInstanceEnumeration) {
   	
    m_firstElementP = 0;
    m_currentElementP = 0;
    m_endElementP = 0;
  	 
    int size = anInstanceEnumeration.getSize();
    for (int x=0; x < size;++x) {
      addElement(anInstanceEnumeration.getElement(x));
    }           

  }
  
  //----------------------------------------------------------------------------
  Linux_SambaDenyHostsForGlobalManualInstanceEnumeration::~Linux_SambaDenyHostsForGlobalManualInstanceEnumeration() {
   	
  	if (m_firstElementP) {
  	  delete(m_firstElementP);
  	}
  	  	
  }
  
  //----------------------------------------------------------------------------
  void
  Linux_SambaDenyHostsForGlobalManualInstanceEnumeration::reset() {
  	
  	m_currentElementP = m_firstElementP;
  	
  }
  	  
  //----------------------------------------------------------------------------
  bool
  Linux_SambaDenyHostsForGlobalManualInstanceEnumeration::hasNext() const {
  	
  	return (m_currentElementP != 0);
  
  }
  
  //----------------------------------------------------------------------------
  int
  Linux_SambaDenyHostsForGlobalManualInstanceEnumeration::getSize() const {
  	
    int size = 0;
    Linux_SambaDenyHostsForGlobalManualInstanceEnumerationElement* followingP = m_firstElementP;
  	
  	while (followingP) {
      followingP = followingP->m_nextP;
      ++size;
    }
  	
    return size;
    
  }
  
  //----------------------------------------------------------------------------
  const Linux_SambaDenyHostsForGlobalManualInstance&  
  Linux_SambaDenyHostsForGlobalManualInstanceEnumeration::getElement(int anIndex) const {
   
    Linux_SambaDenyHostsForGlobalManualInstanceEnumerationElement* followingP = m_firstElementP;
   
    int x = 0;
    while (followingP && (x < anIndex)) {
      followingP = followingP->m_nextP;
      ++x;
    }
    
    return *(followingP->m_elementP);

  }
  
  //----------------------------------------------------------------------------
  const Linux_SambaDenyHostsForGlobalManualInstance&
  Linux_SambaDenyHostsForGlobalManualInstanceEnumeration::getNext() {
   	
    Linux_SambaDenyHostsForGlobalManualInstanceEnumerationElement* currentElementP =
  	  m_currentElementP;

    m_currentElementP = m_currentElementP->m_nextP;
  	 
    return *(currentElementP->m_elementP);

  }
  	  
  //----------------------------------------------------------------------------
  void
  Linux_SambaDenyHostsForGlobalManualInstanceEnumeration::addElement(
    const Linux_SambaDenyHostsForGlobalManualInstance& anInstance) {
   	
  	if (m_firstElementP == 0) {
  	  m_firstElementP = new Linux_SambaDenyHostsForGlobalManualInstanceEnumerationElement();
  	  m_firstElementP->m_elementP = new Linux_SambaDenyHostsForGlobalManualInstance(anInstance);
  	  m_endElementP = m_firstElementP;
  	  m_currentElementP = m_firstElementP;
  	} else {
  	  m_endElementP->m_nextP = new Linux_SambaDenyHostsForGlobalManualInstanceEnumerationElement();
  	  m_endElementP = m_endElementP->m_nextP;
  	  m_endElementP->m_elementP = new Linux_SambaDenyHostsForGlobalManualInstance(anInstance);
  	}

  }
  
}
