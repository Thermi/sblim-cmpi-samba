// =======================================================================
// Linux_SambaPrinterBrowseForPrinterInstance.cpp
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
#include "Linux_SambaPrinterBrowseForPrinterInstance.h"
#include "CmpiData.h"
#include "CmpiString.h"
#include "CmpiArray.h"
#include <string>

namespace genProvider {

  //****************************************************************************
  //Linux_SambaPrinterBrowseForPrinterInstance
  //----------------------------------------------------------------------------
  //empty constructor
  Linux_SambaPrinterBrowseForPrinterInstance::Linux_SambaPrinterBrowseForPrinterInstance() {   	
   	init();  	   	
  }
  
  //----------------------------------------------------------------------------
  //copy constructor	
  //----------------------------------------------------------------------------
  Linux_SambaPrinterBrowseForPrinterInstance::Linux_SambaPrinterBrowseForPrinterInstance(
    const Linux_SambaPrinterBrowseForPrinterInstance& anInstance) {   	
   	init(anInstance);  	   	
  }
  
  //----------------------------------------------------------------------------
  //constructor using CmpiInstance
  //----------------------------------------------------------------------------
  Linux_SambaPrinterBrowseForPrinterInstance::Linux_SambaPrinterBrowseForPrinterInstance(
    const CmpiInstance& aCmpiInstance,
    const char* anInstanceNamespaceP) {

    CmpiData cmpiData;

    init(); 
    
    CmpiObjectPath cop = aCmpiInstance.getObjectPath();
    cop.setNameSpace(anInstanceNamespaceP);
    setInstanceName(Linux_SambaPrinterBrowseForPrinterInstanceName(cop));

    cmpiData = aCmpiInstance.getProperty("IsCurrent");
    if ( ! cmpiData.isNullValue()){
      CMPIUint16 IsCurrent = cmpiData;
      setIsCurrent(IsCurrent);
    }

    cmpiData = aCmpiInstance.getProperty("IsDefault");
    if ( ! cmpiData.isNullValue()){
      CMPIUint16 IsDefault = cmpiData;
      setIsDefault(IsDefault);
    }

    
  }
  
  //----------------------------------------------------------------------------
  //Destructor
  //----------------------------------------------------------------------------
  Linux_SambaPrinterBrowseForPrinterInstance::
   ~Linux_SambaPrinterBrowseForPrinterInstance(){
   	reset();  	  
  }
  
  
  //----------------------------------------------------------------------------
  //copy operator
  //----------------------------------------------------------------------------
  Linux_SambaPrinterBrowseForPrinterInstance&
  Linux_SambaPrinterBrowseForPrinterInstance::operator=(
    const Linux_SambaPrinterBrowseForPrinterInstance& anInstance) {   	
   	
   	init(anInstance);
   	return *this;
  
  }
  
  
  //----------------------------------------------------------------------------
  //converts to CmpiInstance
  //----------------------------------------------------------------------------
  CmpiInstance
  Linux_SambaPrinterBrowseForPrinterInstance::getCmpiInstance(
    const char** aPropertiesPP) const {
   	
   	CmpiObjectPath objectPath=getInstanceName().getObjectPath();      
    CmpiInstance cmpiInstance(objectPath);    
    getInstanceName().fillKeys(cmpiInstance);
    
    if (aPropertiesPP) {
	    cmpiInstance.setPropertyFilter(aPropertiesPP,0);
    }

  	if (isSet.IsCurrent) {
  	  
  	  cmpiInstance.setProperty(
  	    "IsCurrent",
  	    CmpiData(m_IsCurrent));
  	}

  	if (isSet.IsDefault) {
  	  
  	  cmpiInstance.setProperty(
  	    "IsDefault",
  	    CmpiData(m_IsDefault));
  	}

  	
  	return cmpiInstance;
  	
  }
  
  //----------------------------------------------------------------------------
  // InstanceName related methods
  //----------------------------------------------------------------------------
  unsigned int 
  Linux_SambaPrinterBrowseForPrinterInstance::isInstanceNameSet() const {
  	return isSet.instanceName;
  }
  
  //----------------------------------------------------------------------------
  const Linux_SambaPrinterBrowseForPrinterInstanceName&
  Linux_SambaPrinterBrowseForPrinterInstance::getInstanceName() const {

    if( ! isSet.instanceName) {
   	  throw CmpiErrorFormater::getErrorException(
        CmpiErrorFormater::NOT_SET,
        "InstanceName (CIM Key Attributes)",
        "Linux_SambaPrinterBrowseForPrinter");
   	}
  		
   	return m_instanceName;
  
  }

  //----------------------------------------------------------------------------
  void
  Linux_SambaPrinterBrowseForPrinterInstance::setInstanceName(
    const Linux_SambaPrinterBrowseForPrinterInstanceName& val) {

    m_instanceName = val;
    isSet.instanceName = 1;

  }
       
  //----------------------------------------------------------------------------
  // IsCurrent related methods
  //----------------------------------------------------------------------------
  unsigned int
  Linux_SambaPrinterBrowseForPrinterInstance::isIsCurrentSet() const {
    return isSet.IsCurrent;
  }

  //----------------------------------------------------------------------------
  void Linux_SambaPrinterBrowseForPrinterInstance::setIsCurrent(
    const CMPIUint16 aValue) {
  
    m_IsCurrent = aValue;
    isSet.IsCurrent = 1;
  
  }       

  //----------------------------------------------------------------------------
  const CMPIUint16
  Linux_SambaPrinterBrowseForPrinterInstance::getIsCurrent() const {
    
    if ( ! isSet.IsCurrent) {
   	  throw CmpiErrorFormater::getErrorException(
   	    CmpiErrorFormater::NOT_SET,
        "IsCurrent",
        "Linux_SambaPrinterBrowseForPrinter");
   	}


    return m_IsCurrent;

  }
       
  //----------------------------------------------------------------------------
  // IsDefault related methods
  //----------------------------------------------------------------------------
  unsigned int
  Linux_SambaPrinterBrowseForPrinterInstance::isIsDefaultSet() const {
    return isSet.IsDefault;
  }

  //----------------------------------------------------------------------------
  void Linux_SambaPrinterBrowseForPrinterInstance::setIsDefault(
    const CMPIUint16 aValue) {
  
    m_IsDefault = aValue;
    isSet.IsDefault = 1;
  
  }       

  //----------------------------------------------------------------------------
  const CMPIUint16
  Linux_SambaPrinterBrowseForPrinterInstance::getIsDefault() const {
    
    if ( ! isSet.IsDefault) {
   	  throw CmpiErrorFormater::getErrorException(
   	    CmpiErrorFormater::NOT_SET,
        "IsDefault",
        "Linux_SambaPrinterBrowseForPrinter");
   	}


    return m_IsDefault;

  }

  
  //----------------------------------------------------------------------------
  //set isSet attributes to FALSE
  //----------------------------------------------------------------------------
  void
  Linux_SambaPrinterBrowseForPrinterInstance::init() {
   	isSet.instanceName = 0;
    isSet.IsCurrent = 0;
    isSet.IsDefault = 0;
  	
  }
  
  //----------------------------------------------------------------------------
  //copies another instance properties in this
  //----------------------------------------------------------------------------
  void 
  Linux_SambaPrinterBrowseForPrinterInstance::init(
    const Linux_SambaPrinterBrowseForPrinterInstance& anOriginal) {   	

   	init();
   	   	
    if(anOriginal.isInstanceNameSet()) {
      setInstanceName(anOriginal.getInstanceName());
    }
       	
    if (anOriginal.isIsCurrentSet()) {
      const CMPIUint16 IsCurrentOriginal = anOriginal.getIsCurrent();
      setIsCurrent(IsCurrentOriginal);
    }
   	
    if (anOriginal.isIsDefaultSet()) {
      const CMPIUint16 IsDefaultOriginal = anOriginal.getIsDefault();
      setIsDefault(IsDefaultOriginal);
    }
    
  }
  
  //----------------------------------------------------------------------------
  //reset the instance data
  //----------------------------------------------------------------------------
  void
  Linux_SambaPrinterBrowseForPrinterInstance::reset() {
   	
  }
  
  //----------------------------------------------------------------------------
  //Linux_SambaPrinterBrowseForPrinterInstanceEnumerationElement	
  //----------------------------------------------------------------------------
  Linux_SambaPrinterBrowseForPrinterInstanceEnumerationElement::Linux_SambaPrinterBrowseForPrinterInstanceEnumerationElement() {
   	
  	m_elementP = 0;
  	m_nextP = 0;
  	  
  }
  
  //----------------------------------------------------------------------------
  Linux_SambaPrinterBrowseForPrinterInstanceEnumerationElement::~Linux_SambaPrinterBrowseForPrinterInstanceEnumerationElement() {
   	
  	if (m_elementP) {
  	  delete(m_elementP);
  	}
  	
  	if (m_nextP) {
  	  delete(m_nextP);
  	}
  	  
  }

  //----------------------------------------------------------------------------
  //Linux_SambaPrinterBrowseForPrinterInstanceNameEnumeration
  //----------------------------------------------------------------------------
  Linux_SambaPrinterBrowseForPrinterInstanceEnumeration::Linux_SambaPrinterBrowseForPrinterInstanceEnumeration() {
   	
    m_firstElementP = 0;
    m_currentElementP = 0;
    m_endElementP = 0;
  
  }
  
  //----------------------------------------------------------------------------
  Linux_SambaPrinterBrowseForPrinterInstanceEnumeration::Linux_SambaPrinterBrowseForPrinterInstanceEnumeration(
    const Linux_SambaPrinterBrowseForPrinterInstanceEnumeration& anInstanceEnumeration) {
   	
    m_firstElementP = 0;
    m_currentElementP = 0;
    m_endElementP = 0;
  	 
    int size = anInstanceEnumeration.getSize();
    for (int x=0; x < size;++x) {
      addElement(anInstanceEnumeration.getElement(x));
    }           

  }
  
  //----------------------------------------------------------------------------
  Linux_SambaPrinterBrowseForPrinterInstanceEnumeration::~Linux_SambaPrinterBrowseForPrinterInstanceEnumeration() {
   	
  	if (m_firstElementP) {
  	  delete(m_firstElementP);
  	}
  	  	
  }
  
  //----------------------------------------------------------------------------
  void
  Linux_SambaPrinterBrowseForPrinterInstanceEnumeration::reset() {
  	
  	m_currentElementP = m_firstElementP;
  	
  }
  	  
  //----------------------------------------------------------------------------
  bool
  Linux_SambaPrinterBrowseForPrinterInstanceEnumeration::hasNext() const {
  	
  	return (m_currentElementP != 0);
  
  }
  
  //----------------------------------------------------------------------------
  int
  Linux_SambaPrinterBrowseForPrinterInstanceEnumeration::getSize() const {
  	
    int size = 0;
    Linux_SambaPrinterBrowseForPrinterInstanceEnumerationElement* followingP = m_firstElementP;
  	
  	while (followingP) {
      followingP = followingP->m_nextP;
      ++size;
    }
  	
    return size;
    
  }
  
  //----------------------------------------------------------------------------
  const Linux_SambaPrinterBrowseForPrinterInstance&  
  Linux_SambaPrinterBrowseForPrinterInstanceEnumeration::getElement(int anIndex) const {
   
    Linux_SambaPrinterBrowseForPrinterInstanceEnumerationElement* followingP = m_firstElementP;
   
    int x = 0;
    while (followingP && (x < anIndex)) {
      followingP = followingP->m_nextP;
      ++x;
    }
    
    return *(followingP->m_elementP);

  }
  
  //----------------------------------------------------------------------------
  const Linux_SambaPrinterBrowseForPrinterInstance&
  Linux_SambaPrinterBrowseForPrinterInstanceEnumeration::getNext() {
   	
    Linux_SambaPrinterBrowseForPrinterInstanceEnumerationElement* currentElementP =
  	  m_currentElementP;

    m_currentElementP = m_currentElementP->m_nextP;
  	 
    return *(currentElementP->m_elementP);

  }
  	  
  //----------------------------------------------------------------------------
  void
  Linux_SambaPrinterBrowseForPrinterInstanceEnumeration::addElement(
    const Linux_SambaPrinterBrowseForPrinterInstance& anInstance) {
   	
  	if (m_firstElementP == 0) {
  	  m_firstElementP = new Linux_SambaPrinterBrowseForPrinterInstanceEnumerationElement();
  	  m_firstElementP->m_elementP = new Linux_SambaPrinterBrowseForPrinterInstance(anInstance);
  	  m_endElementP = m_firstElementP;
  	  m_currentElementP = m_firstElementP;
  	} else {
  	  m_endElementP->m_nextP = new Linux_SambaPrinterBrowseForPrinterInstanceEnumerationElement();
  	  m_endElementP = m_endElementP->m_nextP;
  	  m_endElementP->m_elementP = new Linux_SambaPrinterBrowseForPrinterInstance(anInstance);
  	}

  }
  
}
