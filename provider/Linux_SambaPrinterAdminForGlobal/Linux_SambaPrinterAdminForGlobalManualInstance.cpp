// =======================================================================
// Linux_SambaPrinterAdminForGlobalManualInstance.cpp
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
#include "Linux_SambaPrinterAdminForGlobalManualInstance.h"
#include "CmpiData.h"
#include "CmpiString.h"
#include "CmpiArray.h"
#include <string>

namespace genProvider {

  //****************************************************************************
  //Linux_SambaPrinterAdminForGlobalManualInstance
  //----------------------------------------------------------------------------
  //empty constructor
  Linux_SambaPrinterAdminForGlobalManualInstance::Linux_SambaPrinterAdminForGlobalManualInstance() {   	
   	init();  	   	
  }
  
  //----------------------------------------------------------------------------
  //copy constructor	
  //----------------------------------------------------------------------------
  Linux_SambaPrinterAdminForGlobalManualInstance::Linux_SambaPrinterAdminForGlobalManualInstance(
    const Linux_SambaPrinterAdminForGlobalManualInstance& anInstance) {   	
   	init(anInstance);  	   	
  }
  
  //----------------------------------------------------------------------------
  //constructor using CmpiInstance
  //----------------------------------------------------------------------------
  Linux_SambaPrinterAdminForGlobalManualInstance::Linux_SambaPrinterAdminForGlobalManualInstance(
    const CmpiInstance& aCmpiInstance,
    const char* anInstanceNamespaceP) {

    CmpiData cmpiData;

    init(); 
    
    CmpiObjectPath cop = aCmpiInstance.getObjectPath();
    cop.setNameSpace(anInstanceNamespaceP);
    setInstanceName(Linux_SambaPrinterAdminForGlobalInstanceName(cop));

    
  }
  
  //----------------------------------------------------------------------------
  //Destructor
  //----------------------------------------------------------------------------
  Linux_SambaPrinterAdminForGlobalManualInstance::
   ~Linux_SambaPrinterAdminForGlobalManualInstance(){
   	reset();  	  
  }
  
  
  //----------------------------------------------------------------------------
  //copy operator
  //----------------------------------------------------------------------------
  Linux_SambaPrinterAdminForGlobalManualInstance&
  Linux_SambaPrinterAdminForGlobalManualInstance::operator=(
    const Linux_SambaPrinterAdminForGlobalManualInstance& anInstance) {   	
   	
   	init(anInstance);
   	return *this;
  
  }
  
  
  //----------------------------------------------------------------------------
  //converts to CmpiInstance
  //----------------------------------------------------------------------------
  CmpiInstance
  Linux_SambaPrinterAdminForGlobalManualInstance::getCmpiInstance(
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
  Linux_SambaPrinterAdminForGlobalManualInstance::isInstanceNameSet() const {
  	return isSet.instanceName;
  }
  
  //----------------------------------------------------------------------------
  const Linux_SambaPrinterAdminForGlobalInstanceName&
  Linux_SambaPrinterAdminForGlobalManualInstance::getInstanceName() const {

    if( ! isSet.instanceName) {
   	  throw CmpiErrorFormater::getErrorException(
        CmpiErrorFormater::NOT_SET,
        "InstanceName (CIM Key Attributes)",
        "Linux_SambaPrinterAdminForGlobal");
   	}
  		
   	return m_instanceName;
  
  }

  //----------------------------------------------------------------------------
  void
  Linux_SambaPrinterAdminForGlobalManualInstance::setInstanceName(
    const Linux_SambaPrinterAdminForGlobalInstanceName& val) {

    m_instanceName = val;
    isSet.instanceName = 1;

  }

  
  //----------------------------------------------------------------------------
  //set isSet attributes to FALSE
  //----------------------------------------------------------------------------
  void
  Linux_SambaPrinterAdminForGlobalManualInstance::init() {
   	isSet.instanceName = 0;
  	
  }
  
  //----------------------------------------------------------------------------
  //copies another instance properties in this
  //----------------------------------------------------------------------------
  void 
  Linux_SambaPrinterAdminForGlobalManualInstance::init(
    const Linux_SambaPrinterAdminForGlobalManualInstance& anOriginal) {   	

   	init();
   	   	
    if(anOriginal.isInstanceNameSet()) {
      setInstanceName(anOriginal.getInstanceName());
    }
        
  }
  
  //----------------------------------------------------------------------------
  //reset the instance data
  //----------------------------------------------------------------------------
  void
  Linux_SambaPrinterAdminForGlobalManualInstance::reset() {
   	
  }
  
  //----------------------------------------------------------------------------
  //Linux_SambaPrinterAdminForGlobalManualInstanceEnumerationElement	
  //----------------------------------------------------------------------------
  Linux_SambaPrinterAdminForGlobalManualInstanceEnumerationElement::Linux_SambaPrinterAdminForGlobalManualInstanceEnumerationElement() {
   	
  	m_elementP = 0;
  	m_nextP = 0;
  	  
  }
  
  //----------------------------------------------------------------------------
  Linux_SambaPrinterAdminForGlobalManualInstanceEnumerationElement::~Linux_SambaPrinterAdminForGlobalManualInstanceEnumerationElement() {
   	
  	if (m_elementP) {
  	  delete(m_elementP);
  	}
  	
  	if (m_nextP) {
  	  delete(m_nextP);
  	}
  	  
  }

  //----------------------------------------------------------------------------
  //Linux_SambaPrinterAdminForGlobalManualInstanceNameEnumeration
  //----------------------------------------------------------------------------
  Linux_SambaPrinterAdminForGlobalManualInstanceEnumeration::Linux_SambaPrinterAdminForGlobalManualInstanceEnumeration() {
   	
    m_firstElementP = 0;
    m_currentElementP = 0;
    m_endElementP = 0;
  
  }
  
  //----------------------------------------------------------------------------
  Linux_SambaPrinterAdminForGlobalManualInstanceEnumeration::Linux_SambaPrinterAdminForGlobalManualInstanceEnumeration(
    const Linux_SambaPrinterAdminForGlobalManualInstanceEnumeration& anInstanceEnumeration) {
   	
    m_firstElementP = 0;
    m_currentElementP = 0;
    m_endElementP = 0;
  	 
    int size = anInstanceEnumeration.getSize();
    for (int x=0; x < size;++x) {
      addElement(anInstanceEnumeration.getElement(x));
    }           

  }
  
  //----------------------------------------------------------------------------
  Linux_SambaPrinterAdminForGlobalManualInstanceEnumeration::~Linux_SambaPrinterAdminForGlobalManualInstanceEnumeration() {
   	
  	if (m_firstElementP) {
  	  delete(m_firstElementP);
  	}
  	  	
  }
  
  //----------------------------------------------------------------------------
  void
  Linux_SambaPrinterAdminForGlobalManualInstanceEnumeration::reset() {
  	
  	m_currentElementP = m_firstElementP;
  	
  }
  	  
  //----------------------------------------------------------------------------
  bool
  Linux_SambaPrinterAdminForGlobalManualInstanceEnumeration::hasNext() const {
  	
  	return (m_currentElementP != 0);
  
  }
  
  //----------------------------------------------------------------------------
  int
  Linux_SambaPrinterAdminForGlobalManualInstanceEnumeration::getSize() const {
  	
    int size = 0;
    Linux_SambaPrinterAdminForGlobalManualInstanceEnumerationElement* followingP = m_firstElementP;
  	
  	while (followingP) {
      followingP = followingP->m_nextP;
      ++size;
    }
  	
    return size;
    
  }
  
  //----------------------------------------------------------------------------
  const Linux_SambaPrinterAdminForGlobalManualInstance&  
  Linux_SambaPrinterAdminForGlobalManualInstanceEnumeration::getElement(int anIndex) const {
   
    Linux_SambaPrinterAdminForGlobalManualInstanceEnumerationElement* followingP = m_firstElementP;
   
    int x = 0;
    while (followingP && (x < anIndex)) {
      followingP = followingP->m_nextP;
      ++x;
    }
    
    return *(followingP->m_elementP);

  }
  
  //----------------------------------------------------------------------------
  const Linux_SambaPrinterAdminForGlobalManualInstance&
  Linux_SambaPrinterAdminForGlobalManualInstanceEnumeration::getNext() {
   	
    Linux_SambaPrinterAdminForGlobalManualInstanceEnumerationElement* currentElementP =
  	  m_currentElementP;

    m_currentElementP = m_currentElementP->m_nextP;
  	 
    return *(currentElementP->m_elementP);

  }
  	  
  //----------------------------------------------------------------------------
  void
  Linux_SambaPrinterAdminForGlobalManualInstanceEnumeration::addElement(
    const Linux_SambaPrinterAdminForGlobalManualInstance& anInstance) {
   	
  	if (m_firstElementP == 0) {
  	  m_firstElementP = new Linux_SambaPrinterAdminForGlobalManualInstanceEnumerationElement();
  	  m_firstElementP->m_elementP = new Linux_SambaPrinterAdminForGlobalManualInstance(anInstance);
  	  m_endElementP = m_firstElementP;
  	  m_currentElementP = m_firstElementP;
  	} else {
  	  m_endElementP->m_nextP = new Linux_SambaPrinterAdminForGlobalManualInstanceEnumerationElement();
  	  m_endElementP = m_endElementP->m_nextP;
  	  m_endElementP->m_elementP = new Linux_SambaPrinterAdminForGlobalManualInstance(anInstance);
  	}

  }
  
}
