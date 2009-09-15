// =======================================================================
// Linux_SambaInvalidUsersForPrinterManualInstance.cpp
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
#include "Linux_SambaInvalidUsersForPrinterManualInstance.h"
#include "CmpiData.h"
#include "CmpiString.h"
#include "CmpiArray.h"
#include <string>

namespace genProvider {

  //****************************************************************************
  //Linux_SambaInvalidUsersForPrinterManualInstance
  //----------------------------------------------------------------------------
  //empty constructor
  Linux_SambaInvalidUsersForPrinterManualInstance::Linux_SambaInvalidUsersForPrinterManualInstance() {   	
   	init();  	   	
  }
  
  //----------------------------------------------------------------------------
  //copy constructor	
  //----------------------------------------------------------------------------
  Linux_SambaInvalidUsersForPrinterManualInstance::Linux_SambaInvalidUsersForPrinterManualInstance(
    const Linux_SambaInvalidUsersForPrinterManualInstance& anInstance) {   	
   	init(anInstance);  	   	
  }
  
  //----------------------------------------------------------------------------
  //constructor using CmpiInstance
  //----------------------------------------------------------------------------
  Linux_SambaInvalidUsersForPrinterManualInstance::Linux_SambaInvalidUsersForPrinterManualInstance(
    const CmpiInstance& aCmpiInstance,
    const char* anInstanceNamespaceP) {

    CmpiData cmpiData;

    init(); 
    
    CmpiObjectPath cop = aCmpiInstance.getObjectPath();
    cop.setNameSpace(anInstanceNamespaceP);
    setInstanceName(Linux_SambaInvalidUsersForPrinterInstanceName(cop));

    
  }
  
  //----------------------------------------------------------------------------
  //Destructor
  //----------------------------------------------------------------------------
  Linux_SambaInvalidUsersForPrinterManualInstance::
   ~Linux_SambaInvalidUsersForPrinterManualInstance(){
   	reset();  	  
  }
  
  
  //----------------------------------------------------------------------------
  //copy operator
  //----------------------------------------------------------------------------
  Linux_SambaInvalidUsersForPrinterManualInstance&
  Linux_SambaInvalidUsersForPrinterManualInstance::operator=(
    const Linux_SambaInvalidUsersForPrinterManualInstance& anInstance) {   	
   	
   	init(anInstance);
   	return *this;
  
  }
  
  
  //----------------------------------------------------------------------------
  //converts to CmpiInstance
  //----------------------------------------------------------------------------
  CmpiInstance
  Linux_SambaInvalidUsersForPrinterManualInstance::getCmpiInstance(
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
  Linux_SambaInvalidUsersForPrinterManualInstance::isInstanceNameSet() const {
  	return isSet.instanceName;
  }
  
  //----------------------------------------------------------------------------
  const Linux_SambaInvalidUsersForPrinterInstanceName&
  Linux_SambaInvalidUsersForPrinterManualInstance::getInstanceName() const {

    if( ! isSet.instanceName) {
   	  throw CmpiErrorFormater::getErrorException(
        CmpiErrorFormater::NOT_SET,
        "InstanceName (CIM Key Attributes)",
        "Linux_SambaInvalidUsersForPrinter");
   	}
  		
   	return m_instanceName;
  
  }

  //----------------------------------------------------------------------------
  void
  Linux_SambaInvalidUsersForPrinterManualInstance::setInstanceName(
    const Linux_SambaInvalidUsersForPrinterInstanceName& val) {

    m_instanceName = val;
    isSet.instanceName = 1;

  }

  
  //----------------------------------------------------------------------------
  //set isSet attributes to FALSE
  //----------------------------------------------------------------------------
  void
  Linux_SambaInvalidUsersForPrinterManualInstance::init() {
   	isSet.instanceName = 0;
  	
  }
  
  //----------------------------------------------------------------------------
  //copies another instance properties in this
  //----------------------------------------------------------------------------
  void 
  Linux_SambaInvalidUsersForPrinterManualInstance::init(
    const Linux_SambaInvalidUsersForPrinterManualInstance& anOriginal) {   	

   	init();
   	   	
    if(anOriginal.isInstanceNameSet()) {
      setInstanceName(anOriginal.getInstanceName());
    }
        
  }
  
  //----------------------------------------------------------------------------
  //reset the instance data
  //----------------------------------------------------------------------------
  void
  Linux_SambaInvalidUsersForPrinterManualInstance::reset() {
   	
  }
  
  //----------------------------------------------------------------------------
  //Linux_SambaInvalidUsersForPrinterManualInstanceEnumerationElement	
  //----------------------------------------------------------------------------
  Linux_SambaInvalidUsersForPrinterManualInstanceEnumerationElement::Linux_SambaInvalidUsersForPrinterManualInstanceEnumerationElement() {
   	
  	m_elementP = 0;
  	m_nextP = 0;
  	  
  }
  
  //----------------------------------------------------------------------------
  Linux_SambaInvalidUsersForPrinterManualInstanceEnumerationElement::~Linux_SambaInvalidUsersForPrinterManualInstanceEnumerationElement() {
   	
  	if (m_elementP) {
  	  delete(m_elementP);
  	}
  	
  	if (m_nextP) {
  	  delete(m_nextP);
  	}
  	  
  }

  //----------------------------------------------------------------------------
  //Linux_SambaInvalidUsersForPrinterManualInstanceNameEnumeration
  //----------------------------------------------------------------------------
  Linux_SambaInvalidUsersForPrinterManualInstanceEnumeration::Linux_SambaInvalidUsersForPrinterManualInstanceEnumeration() {
   	
    m_firstElementP = 0;
    m_currentElementP = 0;
    m_endElementP = 0;
  
  }
  
  //----------------------------------------------------------------------------
  Linux_SambaInvalidUsersForPrinterManualInstanceEnumeration::Linux_SambaInvalidUsersForPrinterManualInstanceEnumeration(
    const Linux_SambaInvalidUsersForPrinterManualInstanceEnumeration& anInstanceEnumeration) {
   	
    m_firstElementP = 0;
    m_currentElementP = 0;
    m_endElementP = 0;
  	 
    int size = anInstanceEnumeration.getSize();
    for (int x=0; x < size;++x) {
      addElement(anInstanceEnumeration.getElement(x));
    }           

  }
  
  //----------------------------------------------------------------------------
  Linux_SambaInvalidUsersForPrinterManualInstanceEnumeration::~Linux_SambaInvalidUsersForPrinterManualInstanceEnumeration() {
   	
  	if (m_firstElementP) {
  	  delete(m_firstElementP);
  	}
  	  	
  }
  
  //----------------------------------------------------------------------------
  void
  Linux_SambaInvalidUsersForPrinterManualInstanceEnumeration::reset() {
  	
  	m_currentElementP = m_firstElementP;
  	
  }
  	  
  //----------------------------------------------------------------------------
  bool
  Linux_SambaInvalidUsersForPrinterManualInstanceEnumeration::hasNext() const {
  	
  	return (m_currentElementP != 0);
  
  }
  
  //----------------------------------------------------------------------------
  int
  Linux_SambaInvalidUsersForPrinterManualInstanceEnumeration::getSize() const {
  	
    int size = 0;
    Linux_SambaInvalidUsersForPrinterManualInstanceEnumerationElement* followingP = m_firstElementP;
  	
  	while (followingP) {
      followingP = followingP->m_nextP;
      ++size;
    }
  	
    return size;
    
  }
  
  //----------------------------------------------------------------------------
  const Linux_SambaInvalidUsersForPrinterManualInstance&  
  Linux_SambaInvalidUsersForPrinterManualInstanceEnumeration::getElement(int anIndex) const {
   
    Linux_SambaInvalidUsersForPrinterManualInstanceEnumerationElement* followingP = m_firstElementP;
   
    int x = 0;
    while (followingP && (x < anIndex)) {
      followingP = followingP->m_nextP;
      ++x;
    }
    
    return *(followingP->m_elementP);

  }
  
  //----------------------------------------------------------------------------
  const Linux_SambaInvalidUsersForPrinterManualInstance&
  Linux_SambaInvalidUsersForPrinterManualInstanceEnumeration::getNext() {
   	
    Linux_SambaInvalidUsersForPrinterManualInstanceEnumerationElement* currentElementP =
  	  m_currentElementP;

    m_currentElementP = m_currentElementP->m_nextP;
  	 
    return *(currentElementP->m_elementP);

  }
  	  
  //----------------------------------------------------------------------------
  void
  Linux_SambaInvalidUsersForPrinterManualInstanceEnumeration::addElement(
    const Linux_SambaInvalidUsersForPrinterManualInstance& anInstance) {
   	
  	if (m_firstElementP == 0) {
  	  m_firstElementP = new Linux_SambaInvalidUsersForPrinterManualInstanceEnumerationElement();
  	  m_firstElementP->m_elementP = new Linux_SambaInvalidUsersForPrinterManualInstance(anInstance);
  	  m_endElementP = m_firstElementP;
  	  m_currentElementP = m_firstElementP;
  	} else {
  	  m_endElementP->m_nextP = new Linux_SambaInvalidUsersForPrinterManualInstanceEnumerationElement();
  	  m_endElementP = m_endElementP->m_nextP;
  	  m_endElementP->m_elementP = new Linux_SambaInvalidUsersForPrinterManualInstance(anInstance);
  	}

  }
  
}
