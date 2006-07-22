// =======================================================================
// Linux_SambaGlobalBrowseForGlobalInstance.cpp
//     created on Fri, 23 Jun 2006 using ECUTE 2.2.1
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
//                Wolfgang Taphorn   <taphorn@de.ibm.com>
//                Mukunda Chowdaiah  <cmukunda@in.ibm.com>
//                Ashoka S Rao       <ashoka.rao@in.ibm.com>
//                Rodrigo Ceron      <rceron@br.ibm.com>
//
// =======================================================================
#include "Linux_SambaGlobalBrowseForGlobalInstance.h"
#include "CmpiData.h"
#include "CmpiString.h"
#include "CmpiArray.h"
#include <string>

namespace genProvider {

  //****************************************************************************
  //Linux_SambaGlobalBrowseForGlobalInstance
  //----------------------------------------------------------------------------
  //empty constructor
  Linux_SambaGlobalBrowseForGlobalInstance::Linux_SambaGlobalBrowseForGlobalInstance() {   	
   	init();  	   	
  }
  
  //----------------------------------------------------------------------------
  //copy constructor	
  //----------------------------------------------------------------------------
  Linux_SambaGlobalBrowseForGlobalInstance::Linux_SambaGlobalBrowseForGlobalInstance(
    const Linux_SambaGlobalBrowseForGlobalInstance& anInstance) {   	
   	init(anInstance);  	   	
  }
  
  //----------------------------------------------------------------------------
  //constructor using CmpiInstance
  //----------------------------------------------------------------------------
  Linux_SambaGlobalBrowseForGlobalInstance::Linux_SambaGlobalBrowseForGlobalInstance(
    const CmpiInstance& aCmpiInstance,
    const char* anInstanceNamespaceP) {

    CmpiData cmpiData;

    init(); 
    
    CmpiObjectPath cop = aCmpiInstance.getObjectPath();
    cop.setNameSpace(anInstanceNamespaceP);
    setInstanceName(Linux_SambaGlobalBrowseForGlobalInstanceName(cop));

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
  Linux_SambaGlobalBrowseForGlobalInstance::
   ~Linux_SambaGlobalBrowseForGlobalInstance(){
   	reset();  	  
  }
  
  
  //----------------------------------------------------------------------------
  //copy operator
  //----------------------------------------------------------------------------
  Linux_SambaGlobalBrowseForGlobalInstance&
  Linux_SambaGlobalBrowseForGlobalInstance::operator=(
    const Linux_SambaGlobalBrowseForGlobalInstance& anInstance) {   	
   	
   	init(anInstance);
   	return *this;
  
  }
  
  
  //----------------------------------------------------------------------------
  //converts to CmpiInstance
  //----------------------------------------------------------------------------
  CmpiInstance
  Linux_SambaGlobalBrowseForGlobalInstance::getCmpiInstance(
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
  Linux_SambaGlobalBrowseForGlobalInstance::isInstanceNameSet() const {
  	return isSet.instanceName;
  }
  
  //----------------------------------------------------------------------------
  const Linux_SambaGlobalBrowseForGlobalInstanceName&
  Linux_SambaGlobalBrowseForGlobalInstance::getInstanceName() const {

    if( ! isSet.instanceName) {
   	  throw CmpiErrorFormater::getErrorException(
        CmpiErrorFormater::NOT_SET,
        "InstanceName (CIM Key Attributes)",
        "Linux_SambaGlobalBrowseForGlobal");
   	}
  		
   	return m_instanceName;
  
  }

  //----------------------------------------------------------------------------
  void
  Linux_SambaGlobalBrowseForGlobalInstance::setInstanceName(
    const Linux_SambaGlobalBrowseForGlobalInstanceName& val) {

    m_instanceName = val;
    isSet.instanceName = 1;

  }
       
  //----------------------------------------------------------------------------
  // IsCurrent related methods
  //----------------------------------------------------------------------------
  unsigned int
  Linux_SambaGlobalBrowseForGlobalInstance::isIsCurrentSet() const {
    return isSet.IsCurrent;
  }

  //----------------------------------------------------------------------------
  void Linux_SambaGlobalBrowseForGlobalInstance::setIsCurrent(
    const CMPIUint16 aValue) {
  
    m_IsCurrent = aValue;
    isSet.IsCurrent = 1;
  
  }       

  //----------------------------------------------------------------------------
  const CMPIUint16
  Linux_SambaGlobalBrowseForGlobalInstance::getIsCurrent() const {
    
    if ( ! isSet.IsCurrent) {
   	  throw CmpiErrorFormater::getErrorException(
   	    CmpiErrorFormater::NOT_SET,
        "IsCurrent",
        "Linux_SambaGlobalBrowseForGlobal");
   	}


    return m_IsCurrent;

  }
       
  //----------------------------------------------------------------------------
  // IsDefault related methods
  //----------------------------------------------------------------------------
  unsigned int
  Linux_SambaGlobalBrowseForGlobalInstance::isIsDefaultSet() const {
    return isSet.IsDefault;
  }

  //----------------------------------------------------------------------------
  void Linux_SambaGlobalBrowseForGlobalInstance::setIsDefault(
    const CMPIUint16 aValue) {
  
    m_IsDefault = aValue;
    isSet.IsDefault = 1;
  
  }       

  //----------------------------------------------------------------------------
  const CMPIUint16
  Linux_SambaGlobalBrowseForGlobalInstance::getIsDefault() const {
    
    if ( ! isSet.IsDefault) {
   	  throw CmpiErrorFormater::getErrorException(
   	    CmpiErrorFormater::NOT_SET,
        "IsDefault",
        "Linux_SambaGlobalBrowseForGlobal");
   	}


    return m_IsDefault;

  }

  
  //----------------------------------------------------------------------------
  //set isSet attributes to FALSE
  //----------------------------------------------------------------------------
  void
  Linux_SambaGlobalBrowseForGlobalInstance::init() {
   	isSet.instanceName = 0;
    isSet.IsCurrent = 0;
    isSet.IsDefault = 0;
  	
  }
  
  //----------------------------------------------------------------------------
  //copies another instance properties in this
  //----------------------------------------------------------------------------
  void 
  Linux_SambaGlobalBrowseForGlobalInstance::init(
    const Linux_SambaGlobalBrowseForGlobalInstance& anOriginal) {   	

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
  Linux_SambaGlobalBrowseForGlobalInstance::reset() {
   	
  }
  
  //----------------------------------------------------------------------------
  //Linux_SambaGlobalBrowseForGlobalInstanceEnumerationElement	
  //----------------------------------------------------------------------------
  Linux_SambaGlobalBrowseForGlobalInstanceEnumerationElement::Linux_SambaGlobalBrowseForGlobalInstanceEnumerationElement() {
   	
  	m_elementP = 0;
  	m_nextP = 0;
  	  
  }
  
  //----------------------------------------------------------------------------
  Linux_SambaGlobalBrowseForGlobalInstanceEnumerationElement::~Linux_SambaGlobalBrowseForGlobalInstanceEnumerationElement() {
   	
  	if (m_elementP) {
  	  delete(m_elementP);
  	}
  	
  	if (m_nextP) {
  	  delete(m_nextP);
  	}
  	  
  }

  //----------------------------------------------------------------------------
  //Linux_SambaGlobalBrowseForGlobalInstanceNameEnumeration
  //----------------------------------------------------------------------------
  Linux_SambaGlobalBrowseForGlobalInstanceEnumeration::Linux_SambaGlobalBrowseForGlobalInstanceEnumeration() {
   	
    m_firstElementP = 0;
    m_currentElementP = 0;
    m_endElementP = 0;
  
  }
  
  //----------------------------------------------------------------------------
  Linux_SambaGlobalBrowseForGlobalInstanceEnumeration::Linux_SambaGlobalBrowseForGlobalInstanceEnumeration(
    const Linux_SambaGlobalBrowseForGlobalInstanceEnumeration& anInstanceEnumeration) {
   	
    m_firstElementP = 0;
    m_currentElementP = 0;
    m_endElementP = 0;
  	 
    int size = anInstanceEnumeration.getSize();
    for (int x=0; x < size;++x) {
      addElement(anInstanceEnumeration.getElement(x));
    }           

  }
  
  //----------------------------------------------------------------------------
  Linux_SambaGlobalBrowseForGlobalInstanceEnumeration::~Linux_SambaGlobalBrowseForGlobalInstanceEnumeration() {
   	
  	if (m_firstElementP) {
  	  delete(m_firstElementP);
  	}
  	  	
  }
  
  //----------------------------------------------------------------------------
  void
  Linux_SambaGlobalBrowseForGlobalInstanceEnumeration::reset() {
  	
  	m_currentElementP = m_firstElementP;
  	
  }
  	  
  //----------------------------------------------------------------------------
  bool
  Linux_SambaGlobalBrowseForGlobalInstanceEnumeration::hasNext() const {
  	
  	return (m_currentElementP != 0);
  
  }
  
  //----------------------------------------------------------------------------
  int
  Linux_SambaGlobalBrowseForGlobalInstanceEnumeration::getSize() const {
  	
    int size = 0;
    Linux_SambaGlobalBrowseForGlobalInstanceEnumerationElement* followingP = m_firstElementP;
  	
  	while (followingP) {
      followingP = followingP->m_nextP;
      ++size;
    }
  	
    return size;
    
  }
  
  //----------------------------------------------------------------------------
  const Linux_SambaGlobalBrowseForGlobalInstance&  
  Linux_SambaGlobalBrowseForGlobalInstanceEnumeration::getElement(int anIndex) const {
   
    Linux_SambaGlobalBrowseForGlobalInstanceEnumerationElement* followingP = m_firstElementP;
   
    int x = 0;
    while (followingP && (x < anIndex)) {
      followingP = followingP->m_nextP;
      ++x;
    }
    
    return *(followingP->m_elementP);

  }
  
  //----------------------------------------------------------------------------
  const Linux_SambaGlobalBrowseForGlobalInstance&
  Linux_SambaGlobalBrowseForGlobalInstanceEnumeration::getNext() {
   	
    Linux_SambaGlobalBrowseForGlobalInstanceEnumerationElement* currentElementP =
  	  m_currentElementP;

    m_currentElementP = m_currentElementP->m_nextP;
  	 
    return *(currentElementP->m_elementP);

  }
  	  
  //----------------------------------------------------------------------------
  void
  Linux_SambaGlobalBrowseForGlobalInstanceEnumeration::addElement(
    const Linux_SambaGlobalBrowseForGlobalInstance& anInstance) {
   	
  	if (m_firstElementP == 0) {
  	  m_firstElementP = new Linux_SambaGlobalBrowseForGlobalInstanceEnumerationElement();
  	  m_firstElementP->m_elementP = new Linux_SambaGlobalBrowseForGlobalInstance(anInstance);
  	  m_endElementP = m_firstElementP;
  	  m_currentElementP = m_firstElementP;
  	} else {
  	  m_endElementP->m_nextP = new Linux_SambaGlobalBrowseForGlobalInstanceEnumerationElement();
  	  m_endElementP = m_endElementP->m_nextP;
  	  m_endElementP->m_elementP = new Linux_SambaGlobalBrowseForGlobalInstance(anInstance);
  	}

  }
  
}
