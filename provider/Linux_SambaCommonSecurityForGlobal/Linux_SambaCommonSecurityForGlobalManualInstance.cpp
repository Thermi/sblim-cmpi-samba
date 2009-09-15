// =======================================================================
// Linux_SambaCommonSecurityForGlobalManualInstance.cpp
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
#include "Linux_SambaCommonSecurityForGlobalManualInstance.h"
#include "CmpiData.h"
#include "CmpiString.h"
#include "CmpiArray.h"
#include <string>

namespace genProvider {

  //****************************************************************************
  //Linux_SambaCommonSecurityForGlobalManualInstance
  //----------------------------------------------------------------------------
  //empty constructor
  Linux_SambaCommonSecurityForGlobalManualInstance::Linux_SambaCommonSecurityForGlobalManualInstance() {   	
   	init();  	   	
  }
  
  //----------------------------------------------------------------------------
  //copy constructor	
  //----------------------------------------------------------------------------
  Linux_SambaCommonSecurityForGlobalManualInstance::Linux_SambaCommonSecurityForGlobalManualInstance(
    const Linux_SambaCommonSecurityForGlobalManualInstance& anInstance) {   	
   	init(anInstance);  	   	
  }
  
  //----------------------------------------------------------------------------
  //constructor using CmpiInstance
  //----------------------------------------------------------------------------
  Linux_SambaCommonSecurityForGlobalManualInstance::Linux_SambaCommonSecurityForGlobalManualInstance(
    const CmpiInstance& aCmpiInstance,
    const char* anInstanceNamespaceP) {

    CmpiData cmpiData;

    init(); 
    
    CmpiObjectPath cop = aCmpiInstance.getObjectPath();
    cop.setNameSpace(anInstanceNamespaceP);
    setInstanceName(Linux_SambaCommonSecurityForGlobalInstanceName(cop));

    
  }
  
  //----------------------------------------------------------------------------
  //Destructor
  //----------------------------------------------------------------------------
  Linux_SambaCommonSecurityForGlobalManualInstance::
   ~Linux_SambaCommonSecurityForGlobalManualInstance(){
   	reset();  	  
  }
  
  
  //----------------------------------------------------------------------------
  //copy operator
  //----------------------------------------------------------------------------
  Linux_SambaCommonSecurityForGlobalManualInstance&
  Linux_SambaCommonSecurityForGlobalManualInstance::operator=(
    const Linux_SambaCommonSecurityForGlobalManualInstance& anInstance) {   	
   	
   	init(anInstance);
   	return *this;
  
  }
  
  
  //----------------------------------------------------------------------------
  //converts to CmpiInstance
  //----------------------------------------------------------------------------
  CmpiInstance
  Linux_SambaCommonSecurityForGlobalManualInstance::getCmpiInstance(
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
  Linux_SambaCommonSecurityForGlobalManualInstance::isInstanceNameSet() const {
  	return isSet.instanceName;
  }
  
  //----------------------------------------------------------------------------
  const Linux_SambaCommonSecurityForGlobalInstanceName&
  Linux_SambaCommonSecurityForGlobalManualInstance::getInstanceName() const {

    if( ! isSet.instanceName) {
   	  throw CmpiErrorFormater::getErrorException(
        CmpiErrorFormater::NOT_SET,
        "InstanceName (CIM Key Attributes)",
        "Linux_SambaCommonSecurityForGlobal");
   	}
  		
   	return m_instanceName;
  
  }

  //----------------------------------------------------------------------------
  void
  Linux_SambaCommonSecurityForGlobalManualInstance::setInstanceName(
    const Linux_SambaCommonSecurityForGlobalInstanceName& val) {

    m_instanceName = val;
    isSet.instanceName = 1;

  }

  
  //----------------------------------------------------------------------------
  //set isSet attributes to FALSE
  //----------------------------------------------------------------------------
  void
  Linux_SambaCommonSecurityForGlobalManualInstance::init() {
   	isSet.instanceName = 0;
  	
  }
  
  //----------------------------------------------------------------------------
  //copies another instance properties in this
  //----------------------------------------------------------------------------
  void 
  Linux_SambaCommonSecurityForGlobalManualInstance::init(
    const Linux_SambaCommonSecurityForGlobalManualInstance& anOriginal) {   	

   	init();
   	   	
    if(anOriginal.isInstanceNameSet()) {
      setInstanceName(anOriginal.getInstanceName());
    }
        
  }
  
  //----------------------------------------------------------------------------
  //reset the instance data
  //----------------------------------------------------------------------------
  void
  Linux_SambaCommonSecurityForGlobalManualInstance::reset() {
   	
  }
  
  //----------------------------------------------------------------------------
  //Linux_SambaCommonSecurityForGlobalManualInstanceEnumerationElement	
  //----------------------------------------------------------------------------
  Linux_SambaCommonSecurityForGlobalManualInstanceEnumerationElement::Linux_SambaCommonSecurityForGlobalManualInstanceEnumerationElement() {
   	
  	m_elementP = 0;
  	m_nextP = 0;
  	  
  }
  
  //----------------------------------------------------------------------------
  Linux_SambaCommonSecurityForGlobalManualInstanceEnumerationElement::~Linux_SambaCommonSecurityForGlobalManualInstanceEnumerationElement() {
   	
  	if (m_elementP) {
  	  delete(m_elementP);
  	}
  	
  	if (m_nextP) {
  	  delete(m_nextP);
  	}
  	  
  }

  //----------------------------------------------------------------------------
  //Linux_SambaCommonSecurityForGlobalManualInstanceNameEnumeration
  //----------------------------------------------------------------------------
  Linux_SambaCommonSecurityForGlobalManualInstanceEnumeration::Linux_SambaCommonSecurityForGlobalManualInstanceEnumeration() {
   	
    m_firstElementP = 0;
    m_currentElementP = 0;
    m_endElementP = 0;
  
  }
  
  //----------------------------------------------------------------------------
  Linux_SambaCommonSecurityForGlobalManualInstanceEnumeration::Linux_SambaCommonSecurityForGlobalManualInstanceEnumeration(
    const Linux_SambaCommonSecurityForGlobalManualInstanceEnumeration& anInstanceEnumeration) {
   	
    m_firstElementP = 0;
    m_currentElementP = 0;
    m_endElementP = 0;
  	 
    int size = anInstanceEnumeration.getSize();
    for (int x=0; x < size;++x) {
      addElement(anInstanceEnumeration.getElement(x));
    }           

  }
  
  //----------------------------------------------------------------------------
  Linux_SambaCommonSecurityForGlobalManualInstanceEnumeration::~Linux_SambaCommonSecurityForGlobalManualInstanceEnumeration() {
   	
  	if (m_firstElementP) {
  	  delete(m_firstElementP);
  	}
  	  	
  }
  
  //----------------------------------------------------------------------------
  void
  Linux_SambaCommonSecurityForGlobalManualInstanceEnumeration::reset() {
  	
  	m_currentElementP = m_firstElementP;
  	
  }
  	  
  //----------------------------------------------------------------------------
  bool
  Linux_SambaCommonSecurityForGlobalManualInstanceEnumeration::hasNext() const {
  	
  	return (m_currentElementP != 0);
  
  }
  
  //----------------------------------------------------------------------------
  int
  Linux_SambaCommonSecurityForGlobalManualInstanceEnumeration::getSize() const {
  	
    int size = 0;
    Linux_SambaCommonSecurityForGlobalManualInstanceEnumerationElement* followingP = m_firstElementP;
  	
  	while (followingP) {
      followingP = followingP->m_nextP;
      ++size;
    }
  	
    return size;
    
  }
  
  //----------------------------------------------------------------------------
  const Linux_SambaCommonSecurityForGlobalManualInstance&  
  Linux_SambaCommonSecurityForGlobalManualInstanceEnumeration::getElement(int anIndex) const {
   
    Linux_SambaCommonSecurityForGlobalManualInstanceEnumerationElement* followingP = m_firstElementP;
   
    int x = 0;
    while (followingP && (x < anIndex)) {
      followingP = followingP->m_nextP;
      ++x;
    }
    
    return *(followingP->m_elementP);

  }
  
  //----------------------------------------------------------------------------
  const Linux_SambaCommonSecurityForGlobalManualInstance&
  Linux_SambaCommonSecurityForGlobalManualInstanceEnumeration::getNext() {
   	
    Linux_SambaCommonSecurityForGlobalManualInstanceEnumerationElement* currentElementP =
  	  m_currentElementP;

    m_currentElementP = m_currentElementP->m_nextP;
  	 
    return *(currentElementP->m_elementP);

  }
  	  
  //----------------------------------------------------------------------------
  void
  Linux_SambaCommonSecurityForGlobalManualInstanceEnumeration::addElement(
    const Linux_SambaCommonSecurityForGlobalManualInstance& anInstance) {
   	
  	if (m_firstElementP == 0) {
  	  m_firstElementP = new Linux_SambaCommonSecurityForGlobalManualInstanceEnumerationElement();
  	  m_firstElementP->m_elementP = new Linux_SambaCommonSecurityForGlobalManualInstance(anInstance);
  	  m_endElementP = m_firstElementP;
  	  m_currentElementP = m_firstElementP;
  	} else {
  	  m_endElementP->m_nextP = new Linux_SambaCommonSecurityForGlobalManualInstanceEnumerationElement();
  	  m_endElementP = m_endElementP->m_nextP;
  	  m_endElementP->m_elementP = new Linux_SambaCommonSecurityForGlobalManualInstance(anInstance);
  	}

  }
  
}
