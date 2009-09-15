// =======================================================================
// Linux_SambaGlobalFileNameHandlingForGlobalManualInstance.cpp
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
#include "Linux_SambaGlobalFileNameHandlingForGlobalManualInstance.h"
#include "CmpiData.h"
#include "CmpiString.h"
#include "CmpiArray.h"
#include <string>

namespace genProvider {

  //****************************************************************************
  //Linux_SambaGlobalFileNameHandlingForGlobalManualInstance
  //----------------------------------------------------------------------------
  //empty constructor
  Linux_SambaGlobalFileNameHandlingForGlobalManualInstance::Linux_SambaGlobalFileNameHandlingForGlobalManualInstance() {   	
   	init();  	   	
  }
  
  //----------------------------------------------------------------------------
  //copy constructor	
  //----------------------------------------------------------------------------
  Linux_SambaGlobalFileNameHandlingForGlobalManualInstance::Linux_SambaGlobalFileNameHandlingForGlobalManualInstance(
    const Linux_SambaGlobalFileNameHandlingForGlobalManualInstance& anInstance) {   	
   	init(anInstance);  	   	
  }
  
  //----------------------------------------------------------------------------
  //constructor using CmpiInstance
  //----------------------------------------------------------------------------
  Linux_SambaGlobalFileNameHandlingForGlobalManualInstance::Linux_SambaGlobalFileNameHandlingForGlobalManualInstance(
    const CmpiInstance& aCmpiInstance,
    const char* anInstanceNamespaceP) {

    CmpiData cmpiData;

    init(); 
    
    CmpiObjectPath cop = aCmpiInstance.getObjectPath();
    cop.setNameSpace(anInstanceNamespaceP);
    setInstanceName(Linux_SambaGlobalFileNameHandlingForGlobalInstanceName(cop));

    
  }
  
  //----------------------------------------------------------------------------
  //Destructor
  //----------------------------------------------------------------------------
  Linux_SambaGlobalFileNameHandlingForGlobalManualInstance::
   ~Linux_SambaGlobalFileNameHandlingForGlobalManualInstance(){
   	reset();  	  
  }
  
  
  //----------------------------------------------------------------------------
  //copy operator
  //----------------------------------------------------------------------------
  Linux_SambaGlobalFileNameHandlingForGlobalManualInstance&
  Linux_SambaGlobalFileNameHandlingForGlobalManualInstance::operator=(
    const Linux_SambaGlobalFileNameHandlingForGlobalManualInstance& anInstance) {   	
   	
   	init(anInstance);
   	return *this;
  
  }
  
  
  //----------------------------------------------------------------------------
  //converts to CmpiInstance
  //----------------------------------------------------------------------------
  CmpiInstance
  Linux_SambaGlobalFileNameHandlingForGlobalManualInstance::getCmpiInstance(
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
  Linux_SambaGlobalFileNameHandlingForGlobalManualInstance::isInstanceNameSet() const {
  	return isSet.instanceName;
  }
  
  //----------------------------------------------------------------------------
  const Linux_SambaGlobalFileNameHandlingForGlobalInstanceName&
  Linux_SambaGlobalFileNameHandlingForGlobalManualInstance::getInstanceName() const {

    if( ! isSet.instanceName) {
   	  throw CmpiErrorFormater::getErrorException(
        CmpiErrorFormater::NOT_SET,
        "InstanceName (CIM Key Attributes)",
        "Linux_SambaGlobalFileNameHandlingForGlobal");
   	}
  		
   	return m_instanceName;
  
  }

  //----------------------------------------------------------------------------
  void
  Linux_SambaGlobalFileNameHandlingForGlobalManualInstance::setInstanceName(
    const Linux_SambaGlobalFileNameHandlingForGlobalInstanceName& val) {

    m_instanceName = val;
    isSet.instanceName = 1;

  }

  
  //----------------------------------------------------------------------------
  //set isSet attributes to FALSE
  //----------------------------------------------------------------------------
  void
  Linux_SambaGlobalFileNameHandlingForGlobalManualInstance::init() {
   	isSet.instanceName = 0;
  	
  }
  
  //----------------------------------------------------------------------------
  //copies another instance properties in this
  //----------------------------------------------------------------------------
  void 
  Linux_SambaGlobalFileNameHandlingForGlobalManualInstance::init(
    const Linux_SambaGlobalFileNameHandlingForGlobalManualInstance& anOriginal) {   	

   	init();
   	   	
    if(anOriginal.isInstanceNameSet()) {
      setInstanceName(anOriginal.getInstanceName());
    }
        
  }
  
  //----------------------------------------------------------------------------
  //reset the instance data
  //----------------------------------------------------------------------------
  void
  Linux_SambaGlobalFileNameHandlingForGlobalManualInstance::reset() {
   	
  }
  
  //----------------------------------------------------------------------------
  //Linux_SambaGlobalFileNameHandlingForGlobalManualInstanceEnumerationElement	
  //----------------------------------------------------------------------------
  Linux_SambaGlobalFileNameHandlingForGlobalManualInstanceEnumerationElement::Linux_SambaGlobalFileNameHandlingForGlobalManualInstanceEnumerationElement() {
   	
  	m_elementP = 0;
  	m_nextP = 0;
  	  
  }
  
  //----------------------------------------------------------------------------
  Linux_SambaGlobalFileNameHandlingForGlobalManualInstanceEnumerationElement::~Linux_SambaGlobalFileNameHandlingForGlobalManualInstanceEnumerationElement() {
   	
  	if (m_elementP) {
  	  delete(m_elementP);
  	}
  	
  	if (m_nextP) {
  	  delete(m_nextP);
  	}
  	  
  }

  //----------------------------------------------------------------------------
  //Linux_SambaGlobalFileNameHandlingForGlobalManualInstanceNameEnumeration
  //----------------------------------------------------------------------------
  Linux_SambaGlobalFileNameHandlingForGlobalManualInstanceEnumeration::Linux_SambaGlobalFileNameHandlingForGlobalManualInstanceEnumeration() {
   	
    m_firstElementP = 0;
    m_currentElementP = 0;
    m_endElementP = 0;
  
  }
  
  //----------------------------------------------------------------------------
  Linux_SambaGlobalFileNameHandlingForGlobalManualInstanceEnumeration::Linux_SambaGlobalFileNameHandlingForGlobalManualInstanceEnumeration(
    const Linux_SambaGlobalFileNameHandlingForGlobalManualInstanceEnumeration& anInstanceEnumeration) {
   	
    m_firstElementP = 0;
    m_currentElementP = 0;
    m_endElementP = 0;
  	 
    int size = anInstanceEnumeration.getSize();
    for (int x=0; x < size;++x) {
      addElement(anInstanceEnumeration.getElement(x));
    }           

  }
  
  //----------------------------------------------------------------------------
  Linux_SambaGlobalFileNameHandlingForGlobalManualInstanceEnumeration::~Linux_SambaGlobalFileNameHandlingForGlobalManualInstanceEnumeration() {
   	
  	if (m_firstElementP) {
  	  delete(m_firstElementP);
  	}
  	  	
  }
  
  //----------------------------------------------------------------------------
  void
  Linux_SambaGlobalFileNameHandlingForGlobalManualInstanceEnumeration::reset() {
  	
  	m_currentElementP = m_firstElementP;
  	
  }
  	  
  //----------------------------------------------------------------------------
  bool
  Linux_SambaGlobalFileNameHandlingForGlobalManualInstanceEnumeration::hasNext() const {
  	
  	return (m_currentElementP != 0);
  
  }
  
  //----------------------------------------------------------------------------
  int
  Linux_SambaGlobalFileNameHandlingForGlobalManualInstanceEnumeration::getSize() const {
  	
    int size = 0;
    Linux_SambaGlobalFileNameHandlingForGlobalManualInstanceEnumerationElement* followingP = m_firstElementP;
  	
  	while (followingP) {
      followingP = followingP->m_nextP;
      ++size;
    }
  	
    return size;
    
  }
  
  //----------------------------------------------------------------------------
  const Linux_SambaGlobalFileNameHandlingForGlobalManualInstance&  
  Linux_SambaGlobalFileNameHandlingForGlobalManualInstanceEnumeration::getElement(int anIndex) const {
   
    Linux_SambaGlobalFileNameHandlingForGlobalManualInstanceEnumerationElement* followingP = m_firstElementP;
   
    int x = 0;
    while (followingP && (x < anIndex)) {
      followingP = followingP->m_nextP;
      ++x;
    }
    
    return *(followingP->m_elementP);

  }
  
  //----------------------------------------------------------------------------
  const Linux_SambaGlobalFileNameHandlingForGlobalManualInstance&
  Linux_SambaGlobalFileNameHandlingForGlobalManualInstanceEnumeration::getNext() {
   	
    Linux_SambaGlobalFileNameHandlingForGlobalManualInstanceEnumerationElement* currentElementP =
  	  m_currentElementP;

    m_currentElementP = m_currentElementP->m_nextP;
  	 
    return *(currentElementP->m_elementP);

  }
  	  
  //----------------------------------------------------------------------------
  void
  Linux_SambaGlobalFileNameHandlingForGlobalManualInstanceEnumeration::addElement(
    const Linux_SambaGlobalFileNameHandlingForGlobalManualInstance& anInstance) {
   	
  	if (m_firstElementP == 0) {
  	  m_firstElementP = new Linux_SambaGlobalFileNameHandlingForGlobalManualInstanceEnumerationElement();
  	  m_firstElementP->m_elementP = new Linux_SambaGlobalFileNameHandlingForGlobalManualInstance(anInstance);
  	  m_endElementP = m_firstElementP;
  	  m_currentElementP = m_firstElementP;
  	} else {
  	  m_endElementP->m_nextP = new Linux_SambaGlobalFileNameHandlingForGlobalManualInstanceEnumerationElement();
  	  m_endElementP = m_endElementP->m_nextP;
  	  m_endElementP->m_elementP = new Linux_SambaGlobalFileNameHandlingForGlobalManualInstance(anInstance);
  	}

  }
  
}
