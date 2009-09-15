// =======================================================================
// Linux_SambaShareFileNameHandlingForShareManualInstance.cpp
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
#include "Linux_SambaShareFileNameHandlingForShareManualInstance.h"
#include "CmpiData.h"
#include "CmpiString.h"
#include "CmpiArray.h"
#include <string>

namespace genProvider {

  //****************************************************************************
  //Linux_SambaShareFileNameHandlingForShareManualInstance
  //----------------------------------------------------------------------------
  //empty constructor
  Linux_SambaShareFileNameHandlingForShareManualInstance::Linux_SambaShareFileNameHandlingForShareManualInstance() {   	
   	init();  	   	
  }
  
  //----------------------------------------------------------------------------
  //copy constructor	
  //----------------------------------------------------------------------------
  Linux_SambaShareFileNameHandlingForShareManualInstance::Linux_SambaShareFileNameHandlingForShareManualInstance(
    const Linux_SambaShareFileNameHandlingForShareManualInstance& anInstance) {   	
   	init(anInstance);  	   	
  }
  
  //----------------------------------------------------------------------------
  //constructor using CmpiInstance
  //----------------------------------------------------------------------------
  Linux_SambaShareFileNameHandlingForShareManualInstance::Linux_SambaShareFileNameHandlingForShareManualInstance(
    const CmpiInstance& aCmpiInstance,
    const char* anInstanceNamespaceP) {

    CmpiData cmpiData;

    init(); 
    
    CmpiObjectPath cop = aCmpiInstance.getObjectPath();
    cop.setNameSpace(anInstanceNamespaceP);
    setInstanceName(Linux_SambaShareFileNameHandlingForShareInstanceName(cop));

    
  }
  
  //----------------------------------------------------------------------------
  //Destructor
  //----------------------------------------------------------------------------
  Linux_SambaShareFileNameHandlingForShareManualInstance::
   ~Linux_SambaShareFileNameHandlingForShareManualInstance(){
   	reset();  	  
  }
  
  
  //----------------------------------------------------------------------------
  //copy operator
  //----------------------------------------------------------------------------
  Linux_SambaShareFileNameHandlingForShareManualInstance&
  Linux_SambaShareFileNameHandlingForShareManualInstance::operator=(
    const Linux_SambaShareFileNameHandlingForShareManualInstance& anInstance) {   	
   	
   	init(anInstance);
   	return *this;
  
  }
  
  
  //----------------------------------------------------------------------------
  //converts to CmpiInstance
  //----------------------------------------------------------------------------
  CmpiInstance
  Linux_SambaShareFileNameHandlingForShareManualInstance::getCmpiInstance(
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
  Linux_SambaShareFileNameHandlingForShareManualInstance::isInstanceNameSet() const {
  	return isSet.instanceName;
  }
  
  //----------------------------------------------------------------------------
  const Linux_SambaShareFileNameHandlingForShareInstanceName&
  Linux_SambaShareFileNameHandlingForShareManualInstance::getInstanceName() const {

    if( ! isSet.instanceName) {
   	  throw CmpiErrorFormater::getErrorException(
        CmpiErrorFormater::NOT_SET,
        "InstanceName (CIM Key Attributes)",
        "Linux_SambaShareFileNameHandlingForShare");
   	}
  		
   	return m_instanceName;
  
  }

  //----------------------------------------------------------------------------
  void
  Linux_SambaShareFileNameHandlingForShareManualInstance::setInstanceName(
    const Linux_SambaShareFileNameHandlingForShareInstanceName& val) {

    m_instanceName = val;
    isSet.instanceName = 1;

  }

  
  //----------------------------------------------------------------------------
  //set isSet attributes to FALSE
  //----------------------------------------------------------------------------
  void
  Linux_SambaShareFileNameHandlingForShareManualInstance::init() {
   	isSet.instanceName = 0;
  	
  }
  
  //----------------------------------------------------------------------------
  //copies another instance properties in this
  //----------------------------------------------------------------------------
  void 
  Linux_SambaShareFileNameHandlingForShareManualInstance::init(
    const Linux_SambaShareFileNameHandlingForShareManualInstance& anOriginal) {   	

   	init();
   	   	
    if(anOriginal.isInstanceNameSet()) {
      setInstanceName(anOriginal.getInstanceName());
    }
        
  }
  
  //----------------------------------------------------------------------------
  //reset the instance data
  //----------------------------------------------------------------------------
  void
  Linux_SambaShareFileNameHandlingForShareManualInstance::reset() {
   	
  }
  
  //----------------------------------------------------------------------------
  //Linux_SambaShareFileNameHandlingForShareManualInstanceEnumerationElement	
  //----------------------------------------------------------------------------
  Linux_SambaShareFileNameHandlingForShareManualInstanceEnumerationElement::Linux_SambaShareFileNameHandlingForShareManualInstanceEnumerationElement() {
   	
  	m_elementP = 0;
  	m_nextP = 0;
  	  
  }
  
  //----------------------------------------------------------------------------
  Linux_SambaShareFileNameHandlingForShareManualInstanceEnumerationElement::~Linux_SambaShareFileNameHandlingForShareManualInstanceEnumerationElement() {
   	
  	if (m_elementP) {
  	  delete(m_elementP);
  	}
  	
  	if (m_nextP) {
  	  delete(m_nextP);
  	}
  	  
  }

  //----------------------------------------------------------------------------
  //Linux_SambaShareFileNameHandlingForShareManualInstanceNameEnumeration
  //----------------------------------------------------------------------------
  Linux_SambaShareFileNameHandlingForShareManualInstanceEnumeration::Linux_SambaShareFileNameHandlingForShareManualInstanceEnumeration() {
   	
    m_firstElementP = 0;
    m_currentElementP = 0;
    m_endElementP = 0;
  
  }
  
  //----------------------------------------------------------------------------
  Linux_SambaShareFileNameHandlingForShareManualInstanceEnumeration::Linux_SambaShareFileNameHandlingForShareManualInstanceEnumeration(
    const Linux_SambaShareFileNameHandlingForShareManualInstanceEnumeration& anInstanceEnumeration) {
   	
    m_firstElementP = 0;
    m_currentElementP = 0;
    m_endElementP = 0;
  	 
    int size = anInstanceEnumeration.getSize();
    for (int x=0; x < size;++x) {
      addElement(anInstanceEnumeration.getElement(x));
    }           

  }
  
  //----------------------------------------------------------------------------
  Linux_SambaShareFileNameHandlingForShareManualInstanceEnumeration::~Linux_SambaShareFileNameHandlingForShareManualInstanceEnumeration() {
   	
  	if (m_firstElementP) {
  	  delete(m_firstElementP);
  	}
  	  	
  }
  
  //----------------------------------------------------------------------------
  void
  Linux_SambaShareFileNameHandlingForShareManualInstanceEnumeration::reset() {
  	
  	m_currentElementP = m_firstElementP;
  	
  }
  	  
  //----------------------------------------------------------------------------
  bool
  Linux_SambaShareFileNameHandlingForShareManualInstanceEnumeration::hasNext() const {
  	
  	return (m_currentElementP != 0);
  
  }
  
  //----------------------------------------------------------------------------
  int
  Linux_SambaShareFileNameHandlingForShareManualInstanceEnumeration::getSize() const {
  	
    int size = 0;
    Linux_SambaShareFileNameHandlingForShareManualInstanceEnumerationElement* followingP = m_firstElementP;
  	
  	while (followingP) {
      followingP = followingP->m_nextP;
      ++size;
    }
  	
    return size;
    
  }
  
  //----------------------------------------------------------------------------
  const Linux_SambaShareFileNameHandlingForShareManualInstance&  
  Linux_SambaShareFileNameHandlingForShareManualInstanceEnumeration::getElement(int anIndex) const {
   
    Linux_SambaShareFileNameHandlingForShareManualInstanceEnumerationElement* followingP = m_firstElementP;
   
    int x = 0;
    while (followingP && (x < anIndex)) {
      followingP = followingP->m_nextP;
      ++x;
    }
    
    return *(followingP->m_elementP);

  }
  
  //----------------------------------------------------------------------------
  const Linux_SambaShareFileNameHandlingForShareManualInstance&
  Linux_SambaShareFileNameHandlingForShareManualInstanceEnumeration::getNext() {
   	
    Linux_SambaShareFileNameHandlingForShareManualInstanceEnumerationElement* currentElementP =
  	  m_currentElementP;

    m_currentElementP = m_currentElementP->m_nextP;
  	 
    return *(currentElementP->m_elementP);

  }
  	  
  //----------------------------------------------------------------------------
  void
  Linux_SambaShareFileNameHandlingForShareManualInstanceEnumeration::addElement(
    const Linux_SambaShareFileNameHandlingForShareManualInstance& anInstance) {
   	
  	if (m_firstElementP == 0) {
  	  m_firstElementP = new Linux_SambaShareFileNameHandlingForShareManualInstanceEnumerationElement();
  	  m_firstElementP->m_elementP = new Linux_SambaShareFileNameHandlingForShareManualInstance(anInstance);
  	  m_endElementP = m_firstElementP;
  	  m_currentElementP = m_firstElementP;
  	} else {
  	  m_endElementP->m_nextP = new Linux_SambaShareFileNameHandlingForShareManualInstanceEnumerationElement();
  	  m_endElementP = m_endElementP->m_nextP;
  	  m_endElementP->m_elementP = new Linux_SambaShareFileNameHandlingForShareManualInstance(anInstance);
  	}

  }
  
}
