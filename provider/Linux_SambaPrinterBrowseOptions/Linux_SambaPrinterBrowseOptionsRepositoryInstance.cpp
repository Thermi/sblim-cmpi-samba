// =======================================================================
// Linux_SambaPrinterBrowseOptionsRepositoryInstance.cpp
//     created on Mon, 26 Jun 2006 using ECUTE 2.2.1
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
#include "Linux_SambaPrinterBrowseOptionsRepositoryInstance.h"
#include "CmpiData.h"
#include "CmpiString.h"
#include "CmpiArray.h"
#include <string>

namespace genProvider {

  //****************************************************************************
  //Linux_SambaPrinterBrowseOptionsRepositoryInstance
  //----------------------------------------------------------------------------
  //empty constructor
  Linux_SambaPrinterBrowseOptionsRepositoryInstance::Linux_SambaPrinterBrowseOptionsRepositoryInstance() {   	
   	init();  	   	
  }
  
  //----------------------------------------------------------------------------
  //copy constructor	
  //----------------------------------------------------------------------------
  Linux_SambaPrinterBrowseOptionsRepositoryInstance::Linux_SambaPrinterBrowseOptionsRepositoryInstance(
    const Linux_SambaPrinterBrowseOptionsRepositoryInstance& anInstance) {   	
   	init(anInstance);  	   	
  }
  
  //----------------------------------------------------------------------------
  //constructor using CmpiInstance
  //----------------------------------------------------------------------------
  Linux_SambaPrinterBrowseOptionsRepositoryInstance::Linux_SambaPrinterBrowseOptionsRepositoryInstance(
    const CmpiInstance& aCmpiInstance,
    const char* anInstanceNamespaceP) {

    CmpiData cmpiData;

    init(); 
    
    CmpiObjectPath cop = aCmpiInstance.getObjectPath();
    cop.setNameSpace(anInstanceNamespaceP);
    setInstanceName(Linux_SambaPrinterBrowseOptionsInstanceName(cop));

    
  }
  
  //----------------------------------------------------------------------------
  //Destructor
  //----------------------------------------------------------------------------
  Linux_SambaPrinterBrowseOptionsRepositoryInstance::
   ~Linux_SambaPrinterBrowseOptionsRepositoryInstance(){
   	reset();  	  
  }
  
  
  //----------------------------------------------------------------------------
  //copy operator
  //----------------------------------------------------------------------------
  Linux_SambaPrinterBrowseOptionsRepositoryInstance&
  Linux_SambaPrinterBrowseOptionsRepositoryInstance::operator=(
    const Linux_SambaPrinterBrowseOptionsRepositoryInstance& anInstance) {   	
   	
   	init(anInstance);
   	return *this;
  
  }
  
  
  //----------------------------------------------------------------------------
  //converts to CmpiInstance
  //----------------------------------------------------------------------------
  CmpiInstance
  Linux_SambaPrinterBrowseOptionsRepositoryInstance::getCmpiInstance(
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
  Linux_SambaPrinterBrowseOptionsRepositoryInstance::isInstanceNameSet() const {
  	return isSet.instanceName;
  }
  
  //----------------------------------------------------------------------------
  const Linux_SambaPrinterBrowseOptionsInstanceName&
  Linux_SambaPrinterBrowseOptionsRepositoryInstance::getInstanceName() const {

    if( ! isSet.instanceName) {
   	  throw CmpiErrorFormater::getErrorException(
        CmpiErrorFormater::NOT_SET,
        "InstanceName (CIM Key Attributes)",
        "Linux_SambaPrinterBrowseOptions");
   	}
  		
   	return m_instanceName;
  
  }

  //----------------------------------------------------------------------------
  void
  Linux_SambaPrinterBrowseOptionsRepositoryInstance::setInstanceName(
    const Linux_SambaPrinterBrowseOptionsInstanceName& val) {

    m_instanceName = val;
    isSet.instanceName = 1;

  }

  
  //----------------------------------------------------------------------------
  //set isSet attributes to FALSE
  //----------------------------------------------------------------------------
  void
  Linux_SambaPrinterBrowseOptionsRepositoryInstance::init() {
   	isSet.instanceName = 0;
  	
  }
  
  //----------------------------------------------------------------------------
  //copies another instance properties in this
  //----------------------------------------------------------------------------
  void 
  Linux_SambaPrinterBrowseOptionsRepositoryInstance::init(
    const Linux_SambaPrinterBrowseOptionsRepositoryInstance& anOriginal) {   	

   	init();
   	   	
    if(anOriginal.isInstanceNameSet()) {
      setInstanceName(anOriginal.getInstanceName());
    }
        
  }
  
  //----------------------------------------------------------------------------
  //reset the instance data
  //----------------------------------------------------------------------------
  void
  Linux_SambaPrinterBrowseOptionsRepositoryInstance::reset() {
   	
  }
  
  //----------------------------------------------------------------------------
  //Linux_SambaPrinterBrowseOptionsRepositoryInstanceEnumerationElement	
  //----------------------------------------------------------------------------
  Linux_SambaPrinterBrowseOptionsRepositoryInstanceEnumerationElement::Linux_SambaPrinterBrowseOptionsRepositoryInstanceEnumerationElement() {
   	
  	m_elementP = 0;
  	m_nextP = 0;
  	  
  }
  
  //----------------------------------------------------------------------------
  Linux_SambaPrinterBrowseOptionsRepositoryInstanceEnumerationElement::~Linux_SambaPrinterBrowseOptionsRepositoryInstanceEnumerationElement() {
   	
  	if (m_elementP) {
  	  delete(m_elementP);
  	}
  	
  	if (m_nextP) {
  	  delete(m_nextP);
  	}
  	  
  }

  //----------------------------------------------------------------------------
  //Linux_SambaPrinterBrowseOptionsRepositoryInstanceNameEnumeration
  //----------------------------------------------------------------------------
  Linux_SambaPrinterBrowseOptionsRepositoryInstanceEnumeration::Linux_SambaPrinterBrowseOptionsRepositoryInstanceEnumeration() {
   	
    m_firstElementP = 0;
    m_currentElementP = 0;
    m_endElementP = 0;
  
  }
  
  //----------------------------------------------------------------------------
  Linux_SambaPrinterBrowseOptionsRepositoryInstanceEnumeration::Linux_SambaPrinterBrowseOptionsRepositoryInstanceEnumeration(
    const Linux_SambaPrinterBrowseOptionsRepositoryInstanceEnumeration& anInstanceEnumeration) {
   	
    m_firstElementP = 0;
    m_currentElementP = 0;
    m_endElementP = 0;
  	 
    int size = anInstanceEnumeration.getSize();
    for (int x=0; x < size;++x) {
      addElement(anInstanceEnumeration.getElement(x));
    }           

  }
  
  //----------------------------------------------------------------------------
  Linux_SambaPrinterBrowseOptionsRepositoryInstanceEnumeration::~Linux_SambaPrinterBrowseOptionsRepositoryInstanceEnumeration() {
   	
  	if (m_firstElementP) {
  	  delete(m_firstElementP);
  	}
  	  	
  }
  
  //----------------------------------------------------------------------------
  void
  Linux_SambaPrinterBrowseOptionsRepositoryInstanceEnumeration::reset() {
  	
  	m_currentElementP = m_firstElementP;
  	
  }
  	  
  //----------------------------------------------------------------------------
  bool
  Linux_SambaPrinterBrowseOptionsRepositoryInstanceEnumeration::hasNext() const {
  	
  	return (m_currentElementP != 0);
  
  }
  
  //----------------------------------------------------------------------------
  int
  Linux_SambaPrinterBrowseOptionsRepositoryInstanceEnumeration::getSize() const {
  	
    int size = 0;
    Linux_SambaPrinterBrowseOptionsRepositoryInstanceEnumerationElement* followingP = m_firstElementP;
  	
  	while (followingP) {
      followingP = followingP->m_nextP;
      ++size;
    }
  	
    return size;
    
  }
  
  //----------------------------------------------------------------------------
  const Linux_SambaPrinterBrowseOptionsRepositoryInstance&  
  Linux_SambaPrinterBrowseOptionsRepositoryInstanceEnumeration::getElement(int anIndex) const {
   
    Linux_SambaPrinterBrowseOptionsRepositoryInstanceEnumerationElement* followingP = m_firstElementP;
   
    int x = 0;
    while (followingP && (x < anIndex)) {
      followingP = followingP->m_nextP;
      ++x;
    }
    
    return *(followingP->m_elementP);

  }
  
  //----------------------------------------------------------------------------
  const Linux_SambaPrinterBrowseOptionsRepositoryInstance&
  Linux_SambaPrinterBrowseOptionsRepositoryInstanceEnumeration::getNext() {
   	
    Linux_SambaPrinterBrowseOptionsRepositoryInstanceEnumerationElement* currentElementP =
  	  m_currentElementP;

    m_currentElementP = m_currentElementP->m_nextP;
  	 
    return *(currentElementP->m_elementP);

  }
  	  
  //----------------------------------------------------------------------------
  void
  Linux_SambaPrinterBrowseOptionsRepositoryInstanceEnumeration::addElement(
    const Linux_SambaPrinterBrowseOptionsRepositoryInstance& anInstance) {
   	
  	if (m_firstElementP == 0) {
  	  m_firstElementP = new Linux_SambaPrinterBrowseOptionsRepositoryInstanceEnumerationElement();
  	  m_firstElementP->m_elementP = new Linux_SambaPrinterBrowseOptionsRepositoryInstance(anInstance);
  	  m_endElementP = m_firstElementP;
  	  m_currentElementP = m_firstElementP;
  	} else {
  	  m_endElementP->m_nextP = new Linux_SambaPrinterBrowseOptionsRepositoryInstanceEnumerationElement();
  	  m_endElementP = m_endElementP->m_nextP;
  	  m_endElementP->m_elementP = new Linux_SambaPrinterBrowseOptionsRepositoryInstance(anInstance);
  	}

  }
  
}
