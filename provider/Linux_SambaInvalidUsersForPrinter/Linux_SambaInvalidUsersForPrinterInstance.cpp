// =======================================================================
// Linux_SambaInvalidUsersForPrinterInstance.cpp
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
#include "Linux_SambaInvalidUsersForPrinterInstance.h"
#include "CmpiData.h"
#include "CmpiString.h"
#include "CmpiArray.h"
#include <string>

namespace genProvider {

  //****************************************************************************
  //Linux_SambaInvalidUsersForPrinterInstance
  //----------------------------------------------------------------------------
  //empty constructor
  Linux_SambaInvalidUsersForPrinterInstance::Linux_SambaInvalidUsersForPrinterInstance() {   	
   	init();  	   	
  }
  
  //----------------------------------------------------------------------------
  //copy constructor	
  //----------------------------------------------------------------------------
  Linux_SambaInvalidUsersForPrinterInstance::Linux_SambaInvalidUsersForPrinterInstance(
    const Linux_SambaInvalidUsersForPrinterInstance& anInstance) {   	
   	init(anInstance);  	   	
  }
  
  //----------------------------------------------------------------------------
  //constructor using CmpiInstance
  //----------------------------------------------------------------------------
  Linux_SambaInvalidUsersForPrinterInstance::Linux_SambaInvalidUsersForPrinterInstance(
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
  Linux_SambaInvalidUsersForPrinterInstance::
   ~Linux_SambaInvalidUsersForPrinterInstance(){
   	reset();  	  
  }
  
  
  //----------------------------------------------------------------------------
  //copy operator
  //----------------------------------------------------------------------------
  Linux_SambaInvalidUsersForPrinterInstance&
  Linux_SambaInvalidUsersForPrinterInstance::operator=(
    const Linux_SambaInvalidUsersForPrinterInstance& anInstance) {   	
   	
   	init(anInstance);
   	return *this;
  
  }
  
  
  //----------------------------------------------------------------------------
  //converts to CmpiInstance
  //----------------------------------------------------------------------------
  CmpiInstance
  Linux_SambaInvalidUsersForPrinterInstance::getCmpiInstance(
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
  Linux_SambaInvalidUsersForPrinterInstance::isInstanceNameSet() const {
  	return isSet.instanceName;
  }
  
  //----------------------------------------------------------------------------
  const Linux_SambaInvalidUsersForPrinterInstanceName&
  Linux_SambaInvalidUsersForPrinterInstance::getInstanceName() const {

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
  Linux_SambaInvalidUsersForPrinterInstance::setInstanceName(
    const Linux_SambaInvalidUsersForPrinterInstanceName& val) {

    m_instanceName = val;
    isSet.instanceName = 1;

  }

  
  //----------------------------------------------------------------------------
  //set isSet attributes to FALSE
  //----------------------------------------------------------------------------
  void
  Linux_SambaInvalidUsersForPrinterInstance::init() {
   	isSet.instanceName = 0;
  	
  }
  
  //----------------------------------------------------------------------------
  //copies another instance properties in this
  //----------------------------------------------------------------------------
  void 
  Linux_SambaInvalidUsersForPrinterInstance::init(
    const Linux_SambaInvalidUsersForPrinterInstance& anOriginal) {   	

   	init();
   	   	
    if(anOriginal.isInstanceNameSet()) {
      setInstanceName(anOriginal.getInstanceName());
    }
        
  }
  
  //----------------------------------------------------------------------------
  //reset the instance data
  //----------------------------------------------------------------------------
  void
  Linux_SambaInvalidUsersForPrinterInstance::reset() {
   	
  }
  
  //----------------------------------------------------------------------------
  //Linux_SambaInvalidUsersForPrinterInstanceEnumerationElement	
  //----------------------------------------------------------------------------
  Linux_SambaInvalidUsersForPrinterInstanceEnumerationElement::Linux_SambaInvalidUsersForPrinterInstanceEnumerationElement() {
   	
  	m_elementP = 0;
  	m_nextP = 0;
  	  
  }
  
  //----------------------------------------------------------------------------
  Linux_SambaInvalidUsersForPrinterInstanceEnumerationElement::~Linux_SambaInvalidUsersForPrinterInstanceEnumerationElement() {
   	
  	if (m_elementP) {
  	  delete(m_elementP);
  	}
  	
  	if (m_nextP) {
  	  delete(m_nextP);
  	}
  	  
  }

  //----------------------------------------------------------------------------
  //Linux_SambaInvalidUsersForPrinterInstanceNameEnumeration
  //----------------------------------------------------------------------------
  Linux_SambaInvalidUsersForPrinterInstanceEnumeration::Linux_SambaInvalidUsersForPrinterInstanceEnumeration() {
   	
    m_firstElementP = 0;
    m_currentElementP = 0;
    m_endElementP = 0;
  
  }
  
  //----------------------------------------------------------------------------
  Linux_SambaInvalidUsersForPrinterInstanceEnumeration::Linux_SambaInvalidUsersForPrinterInstanceEnumeration(
    const Linux_SambaInvalidUsersForPrinterInstanceEnumeration& anInstanceEnumeration) {
   	
    m_firstElementP = 0;
    m_currentElementP = 0;
    m_endElementP = 0;
  	 
    int size = anInstanceEnumeration.getSize();
    for (int x=0; x < size;++x) {
      addElement(anInstanceEnumeration.getElement(x));
    }           

  }
  
  //----------------------------------------------------------------------------
  Linux_SambaInvalidUsersForPrinterInstanceEnumeration::~Linux_SambaInvalidUsersForPrinterInstanceEnumeration() {
   	
  	if (m_firstElementP) {
  	  delete(m_firstElementP);
  	}
  	  	
  }
  
  //----------------------------------------------------------------------------
  void
  Linux_SambaInvalidUsersForPrinterInstanceEnumeration::reset() {
  	
  	m_currentElementP = m_firstElementP;
  	
  }
  	  
  //----------------------------------------------------------------------------
  bool
  Linux_SambaInvalidUsersForPrinterInstanceEnumeration::hasNext() const {
  	
  	return (m_currentElementP != 0);
  
  }
  
  //----------------------------------------------------------------------------
  int
  Linux_SambaInvalidUsersForPrinterInstanceEnumeration::getSize() const {
  	
    int size = 0;
    Linux_SambaInvalidUsersForPrinterInstanceEnumerationElement* followingP = m_firstElementP;
  	
  	while (followingP) {
      followingP = followingP->m_nextP;
      ++size;
    }
  	
    return size;
    
  }
  
  //----------------------------------------------------------------------------
  const Linux_SambaInvalidUsersForPrinterInstance&  
  Linux_SambaInvalidUsersForPrinterInstanceEnumeration::getElement(int anIndex) const {
   
    Linux_SambaInvalidUsersForPrinterInstanceEnumerationElement* followingP = m_firstElementP;
   
    int x = 0;
    while (followingP && (x < anIndex)) {
      followingP = followingP->m_nextP;
      ++x;
    }
    
    return *(followingP->m_elementP);

  }
  
  //----------------------------------------------------------------------------
  const Linux_SambaInvalidUsersForPrinterInstance&
  Linux_SambaInvalidUsersForPrinterInstanceEnumeration::getNext() {
   	
    Linux_SambaInvalidUsersForPrinterInstanceEnumerationElement* currentElementP =
  	  m_currentElementP;

    m_currentElementP = m_currentElementP->m_nextP;
  	 
    return *(currentElementP->m_elementP);

  }
  	  
  //----------------------------------------------------------------------------
  void
  Linux_SambaInvalidUsersForPrinterInstanceEnumeration::addElement(
    const Linux_SambaInvalidUsersForPrinterInstance& anInstance) {
   	
  	if (m_firstElementP == 0) {
  	  m_firstElementP = new Linux_SambaInvalidUsersForPrinterInstanceEnumerationElement();
  	  m_firstElementP->m_elementP = new Linux_SambaInvalidUsersForPrinterInstance(anInstance);
  	  m_endElementP = m_firstElementP;
  	  m_currentElementP = m_firstElementP;
  	} else {
  	  m_endElementP->m_nextP = new Linux_SambaInvalidUsersForPrinterInstanceEnumerationElement();
  	  m_endElementP = m_endElementP->m_nextP;
  	  m_endElementP->m_elementP = new Linux_SambaInvalidUsersForPrinterInstance(anInstance);
  	}

  }
  
}
