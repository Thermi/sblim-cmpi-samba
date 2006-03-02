// =======================================================================
// Linux_SambaSharePrinterBrowseForPrinterManualInstance.cpp
//     created on Fri, 24 Feb 2006 using ECUTE
// 
// Copyright (c) 2006, International Business Machines
//
// THIS FILE IS PROVIDED UNDER THE TERMS OF THE COMMON PUBLIC LICENSE
// ("AGREEMENT"). ANY USE, REPRODUCTION OR DISTRIBUTION OF THIS FILE 
// CONSTITUTES RECIPIENTS ACCEPTANCE OF THE AGREEMENT.
//
// You can obtain a current copy of the Common Public License from
// http://oss.software.ibm.com/developerworks/opensource/license-cpl.html
//
// Author:        generated
//
// Contributors:
//                Rodrigo Ceron    <rceron@br.ibm.com>
//                Wolfgang Taphorn <taphorn@de.ibm.com>
//
// =======================================================================
//
// 
#include "Linux_SambaSharePrinterBrowseForPrinterManualInstance.h"
#include "CmpiData.h"
#include "CmpiString.h"
#include "CmpiArray.h"
#include <string>

namespace genProvider {

  //****************************************************************************
  //Linux_SambaSharePrinterBrowseForPrinterManualInstance
  //----------------------------------------------------------------------------
  //empty constructor
  Linux_SambaSharePrinterBrowseForPrinterManualInstance::Linux_SambaSharePrinterBrowseForPrinterManualInstance() {   	
   	init();  	   	
  }
  
  //----------------------------------------------------------------------------
  //copy constructor	
  //----------------------------------------------------------------------------
  Linux_SambaSharePrinterBrowseForPrinterManualInstance::Linux_SambaSharePrinterBrowseForPrinterManualInstance(
    const Linux_SambaSharePrinterBrowseForPrinterManualInstance& anInstance) {   	
   	init(anInstance);  	   	
  }
  
  //----------------------------------------------------------------------------
  //constructor using CmpiInstance
  //----------------------------------------------------------------------------
  Linux_SambaSharePrinterBrowseForPrinterManualInstance::Linux_SambaSharePrinterBrowseForPrinterManualInstance(
    const CmpiInstance& aCmpiInstance,
    const char* anInstanceNamespaceP) {

    CmpiData cmpiData;

    init(); 
    
    CmpiObjectPath cop = aCmpiInstance.getObjectPath();
    cop.setNameSpace(anInstanceNamespaceP);
    setInstanceName(Linux_SambaSharePrinterBrowseForPrinterInstanceName(cop));

    
  }
  
  //----------------------------------------------------------------------------
  //Destructor
  //----------------------------------------------------------------------------
  Linux_SambaSharePrinterBrowseForPrinterManualInstance::
   ~Linux_SambaSharePrinterBrowseForPrinterManualInstance(){
   	reset();  	  
  }
  
  
  //----------------------------------------------------------------------------
  //copy operator
  //----------------------------------------------------------------------------
  Linux_SambaSharePrinterBrowseForPrinterManualInstance&
  Linux_SambaSharePrinterBrowseForPrinterManualInstance::operator=(
    const Linux_SambaSharePrinterBrowseForPrinterManualInstance& anInstance) {   	
   	
   	init(anInstance);
   	return *this;
  
  }
  
  
  //----------------------------------------------------------------------------
  //converts to CmpiInstance
  //----------------------------------------------------------------------------
  CmpiInstance
  Linux_SambaSharePrinterBrowseForPrinterManualInstance::getCmpiInstance(
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
  Linux_SambaSharePrinterBrowseForPrinterManualInstance::isInstanceNameSet() const {
  	return isSet.instanceName;
  }
  
  //----------------------------------------------------------------------------
  const Linux_SambaSharePrinterBrowseForPrinterInstanceName&
  Linux_SambaSharePrinterBrowseForPrinterManualInstance::getInstanceName() const {

    if( ! isSet.instanceName) {
   	  throw CmpiErrorFormater::getErrorException(
        CmpiErrorFormater::NOT_SET,
        "InstanceName (CIM Key Attributes)",
        "Linux_SambaSharePrinterBrowseForPrinter");
   	}
  		
   	return m_instanceName;
  
  }

  //----------------------------------------------------------------------------
  void
  Linux_SambaSharePrinterBrowseForPrinterManualInstance::setInstanceName(
    const Linux_SambaSharePrinterBrowseForPrinterInstanceName& val) {

    m_instanceName = val;
    isSet.instanceName = 1;

  }

  
  //----------------------------------------------------------------------------
  //set isSet attributes to FALSE
  //----------------------------------------------------------------------------
  void
  Linux_SambaSharePrinterBrowseForPrinterManualInstance::init() {
   	isSet.instanceName = 0;
  	
  }
  
  //----------------------------------------------------------------------------
  //copies another instance properties in this
  //----------------------------------------------------------------------------
  void 
  Linux_SambaSharePrinterBrowseForPrinterManualInstance::init(
    const Linux_SambaSharePrinterBrowseForPrinterManualInstance& anOriginal) {   	

   	init();
   	   	
    if(anOriginal.isInstanceNameSet()) {
      setInstanceName(anOriginal.getInstanceName());
    }
        
  }
  
  //----------------------------------------------------------------------------
  //reset the instance data
  //----------------------------------------------------------------------------
  void
  Linux_SambaSharePrinterBrowseForPrinterManualInstance::reset() {
   	
  }
  
  //----------------------------------------------------------------------------
  //Linux_SambaSharePrinterBrowseForPrinterManualInstanceEnumerationElement	
  //----------------------------------------------------------------------------
  Linux_SambaSharePrinterBrowseForPrinterManualInstanceEnumerationElement::Linux_SambaSharePrinterBrowseForPrinterManualInstanceEnumerationElement() {
   	
  	m_elementP = 0;
  	m_nextP = 0;
  	  
  }
  
  //----------------------------------------------------------------------------
  Linux_SambaSharePrinterBrowseForPrinterManualInstanceEnumerationElement::~Linux_SambaSharePrinterBrowseForPrinterManualInstanceEnumerationElement() {
   	
  	if (m_elementP) {
  	  delete(m_elementP);
  	}
  	
  	if (m_nextP) {
  	  delete(m_nextP);
  	}
  	  
  }

  //----------------------------------------------------------------------------
  //Linux_SambaSharePrinterBrowseForPrinterManualInstanceNameEnumeration
  //----------------------------------------------------------------------------
  Linux_SambaSharePrinterBrowseForPrinterManualInstanceEnumeration::Linux_SambaSharePrinterBrowseForPrinterManualInstanceEnumeration() {
   	
    m_firstElementP = 0;
    m_currentElementP = 0;
    m_endElementP = 0;
  
  }
  
  //----------------------------------------------------------------------------
  Linux_SambaSharePrinterBrowseForPrinterManualInstanceEnumeration::Linux_SambaSharePrinterBrowseForPrinterManualInstanceEnumeration(
    const Linux_SambaSharePrinterBrowseForPrinterManualInstanceEnumeration& anInstanceEnumeration) {
   	
    m_firstElementP = 0;
    m_currentElementP = 0;
    m_endElementP = 0;
  	 
    int size = anInstanceEnumeration.getSize();
    for (int x=0; x < size;++x) {
      addElement(anInstanceEnumeration.getElement(x));
    }           

  }
  
  //----------------------------------------------------------------------------
  Linux_SambaSharePrinterBrowseForPrinterManualInstanceEnumeration::~Linux_SambaSharePrinterBrowseForPrinterManualInstanceEnumeration() {
   	
  	if (m_firstElementP) {
  	  delete(m_firstElementP);
  	}
  	  	
  }
  
  //----------------------------------------------------------------------------
  void
  Linux_SambaSharePrinterBrowseForPrinterManualInstanceEnumeration::reset() {
  	
  	m_currentElementP = m_firstElementP;
  	
  }
  	  
  //----------------------------------------------------------------------------
  bool
  Linux_SambaSharePrinterBrowseForPrinterManualInstanceEnumeration::hasNext() const {
  	
  	return (m_currentElementP != 0);
  
  }
  
  //----------------------------------------------------------------------------
  int
  Linux_SambaSharePrinterBrowseForPrinterManualInstanceEnumeration::getSize() const {
  	
    int size = 0;
    Linux_SambaSharePrinterBrowseForPrinterManualInstanceEnumerationElement* followingP = m_firstElementP;
  	
  	while (followingP) {
      followingP = followingP->m_nextP;
      ++size;
    }
  	
    return size;
    
  }
  
  //----------------------------------------------------------------------------
  const Linux_SambaSharePrinterBrowseForPrinterManualInstance&  
  Linux_SambaSharePrinterBrowseForPrinterManualInstanceEnumeration::getElement(int anIndex) const {
   
    Linux_SambaSharePrinterBrowseForPrinterManualInstanceEnumerationElement* followingP = m_firstElementP;
   
    int x = 0;
    while (followingP && (x < anIndex)) {
      followingP = followingP->m_nextP;
      ++x;
    }
    
    return *(followingP->m_elementP);

  }
  
  //----------------------------------------------------------------------------
  const Linux_SambaSharePrinterBrowseForPrinterManualInstance&
  Linux_SambaSharePrinterBrowseForPrinterManualInstanceEnumeration::getNext() {
   	
    Linux_SambaSharePrinterBrowseForPrinterManualInstanceEnumerationElement* currentElementP =
  	  m_currentElementP;

    m_currentElementP = m_currentElementP->m_nextP;
  	 
    return *(currentElementP->m_elementP);

  }
  	  
  //----------------------------------------------------------------------------
  void
  Linux_SambaSharePrinterBrowseForPrinterManualInstanceEnumeration::addElement(
    const Linux_SambaSharePrinterBrowseForPrinterManualInstance& anInstance) {
   	
  	if (m_firstElementP == 0) {
  	  m_firstElementP = new Linux_SambaSharePrinterBrowseForPrinterManualInstanceEnumerationElement();
  	  m_firstElementP->m_elementP = new Linux_SambaSharePrinterBrowseForPrinterManualInstance(anInstance);
  	  m_endElementP = m_firstElementP;
  	  m_currentElementP = m_firstElementP;
  	} else {
  	  m_endElementP->m_nextP = new Linux_SambaSharePrinterBrowseForPrinterManualInstanceEnumerationElement();
  	  m_endElementP = m_endElementP->m_nextP;
  	  m_endElementP->m_elementP = new Linux_SambaSharePrinterBrowseForPrinterManualInstance(anInstance);
  	}

  }
  
}
