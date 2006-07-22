// =======================================================================
// Linux_SambaGlobalProtocolForGlobalInstance.cpp
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
#include "Linux_SambaGlobalProtocolForGlobalInstance.h"
#include "CmpiData.h"
#include "CmpiString.h"
#include "CmpiArray.h"
#include <string>

namespace genProvider {

  //****************************************************************************
  //Linux_SambaGlobalProtocolForGlobalInstance
  //----------------------------------------------------------------------------
  //empty constructor
  Linux_SambaGlobalProtocolForGlobalInstance::Linux_SambaGlobalProtocolForGlobalInstance() {   	
   	init();  	   	
  }
  
  //----------------------------------------------------------------------------
  //copy constructor	
  //----------------------------------------------------------------------------
  Linux_SambaGlobalProtocolForGlobalInstance::Linux_SambaGlobalProtocolForGlobalInstance(
    const Linux_SambaGlobalProtocolForGlobalInstance& anInstance) {   	
   	init(anInstance);  	   	
  }
  
  //----------------------------------------------------------------------------
  //constructor using CmpiInstance
  //----------------------------------------------------------------------------
  Linux_SambaGlobalProtocolForGlobalInstance::Linux_SambaGlobalProtocolForGlobalInstance(
    const CmpiInstance& aCmpiInstance,
    const char* anInstanceNamespaceP) {

    CmpiData cmpiData;

    init(); 
    
    CmpiObjectPath cop = aCmpiInstance.getObjectPath();
    cop.setNameSpace(anInstanceNamespaceP);
    setInstanceName(Linux_SambaGlobalProtocolForGlobalInstanceName(cop));

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
  Linux_SambaGlobalProtocolForGlobalInstance::
   ~Linux_SambaGlobalProtocolForGlobalInstance(){
   	reset();  	  
  }
  
  
  //----------------------------------------------------------------------------
  //copy operator
  //----------------------------------------------------------------------------
  Linux_SambaGlobalProtocolForGlobalInstance&
  Linux_SambaGlobalProtocolForGlobalInstance::operator=(
    const Linux_SambaGlobalProtocolForGlobalInstance& anInstance) {   	
   	
   	init(anInstance);
   	return *this;
  
  }
  
  
  //----------------------------------------------------------------------------
  //converts to CmpiInstance
  //----------------------------------------------------------------------------
  CmpiInstance
  Linux_SambaGlobalProtocolForGlobalInstance::getCmpiInstance(
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
  Linux_SambaGlobalProtocolForGlobalInstance::isInstanceNameSet() const {
  	return isSet.instanceName;
  }
  
  //----------------------------------------------------------------------------
  const Linux_SambaGlobalProtocolForGlobalInstanceName&
  Linux_SambaGlobalProtocolForGlobalInstance::getInstanceName() const {

    if( ! isSet.instanceName) {
   	  throw CmpiErrorFormater::getErrorException(
        CmpiErrorFormater::NOT_SET,
        "InstanceName (CIM Key Attributes)",
        "Linux_SambaGlobalProtocolForGlobal");
   	}
  		
   	return m_instanceName;
  
  }

  //----------------------------------------------------------------------------
  void
  Linux_SambaGlobalProtocolForGlobalInstance::setInstanceName(
    const Linux_SambaGlobalProtocolForGlobalInstanceName& val) {

    m_instanceName = val;
    isSet.instanceName = 1;

  }
       
  //----------------------------------------------------------------------------
  // IsCurrent related methods
  //----------------------------------------------------------------------------
  unsigned int
  Linux_SambaGlobalProtocolForGlobalInstance::isIsCurrentSet() const {
    return isSet.IsCurrent;
  }

  //----------------------------------------------------------------------------
  void Linux_SambaGlobalProtocolForGlobalInstance::setIsCurrent(
    const CMPIUint16 aValue) {
  
    m_IsCurrent = aValue;
    isSet.IsCurrent = 1;
  
  }       

  //----------------------------------------------------------------------------
  const CMPIUint16
  Linux_SambaGlobalProtocolForGlobalInstance::getIsCurrent() const {
    
    if ( ! isSet.IsCurrent) {
   	  throw CmpiErrorFormater::getErrorException(
   	    CmpiErrorFormater::NOT_SET,
        "IsCurrent",
        "Linux_SambaGlobalProtocolForGlobal");
   	}


    return m_IsCurrent;

  }
       
  //----------------------------------------------------------------------------
  // IsDefault related methods
  //----------------------------------------------------------------------------
  unsigned int
  Linux_SambaGlobalProtocolForGlobalInstance::isIsDefaultSet() const {
    return isSet.IsDefault;
  }

  //----------------------------------------------------------------------------
  void Linux_SambaGlobalProtocolForGlobalInstance::setIsDefault(
    const CMPIUint16 aValue) {
  
    m_IsDefault = aValue;
    isSet.IsDefault = 1;
  
  }       

  //----------------------------------------------------------------------------
  const CMPIUint16
  Linux_SambaGlobalProtocolForGlobalInstance::getIsDefault() const {
    
    if ( ! isSet.IsDefault) {
   	  throw CmpiErrorFormater::getErrorException(
   	    CmpiErrorFormater::NOT_SET,
        "IsDefault",
        "Linux_SambaGlobalProtocolForGlobal");
   	}


    return m_IsDefault;

  }

  
  //----------------------------------------------------------------------------
  //set isSet attributes to FALSE
  //----------------------------------------------------------------------------
  void
  Linux_SambaGlobalProtocolForGlobalInstance::init() {
   	isSet.instanceName = 0;
    isSet.IsCurrent = 0;
    isSet.IsDefault = 0;
  	
  }
  
  //----------------------------------------------------------------------------
  //copies another instance properties in this
  //----------------------------------------------------------------------------
  void 
  Linux_SambaGlobalProtocolForGlobalInstance::init(
    const Linux_SambaGlobalProtocolForGlobalInstance& anOriginal) {   	

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
  Linux_SambaGlobalProtocolForGlobalInstance::reset() {
   	
  }
  
  //----------------------------------------------------------------------------
  //Linux_SambaGlobalProtocolForGlobalInstanceEnumerationElement	
  //----------------------------------------------------------------------------
  Linux_SambaGlobalProtocolForGlobalInstanceEnumerationElement::Linux_SambaGlobalProtocolForGlobalInstanceEnumerationElement() {
   	
  	m_elementP = 0;
  	m_nextP = 0;
  	  
  }
  
  //----------------------------------------------------------------------------
  Linux_SambaGlobalProtocolForGlobalInstanceEnumerationElement::~Linux_SambaGlobalProtocolForGlobalInstanceEnumerationElement() {
   	
  	if (m_elementP) {
  	  delete(m_elementP);
  	}
  	
  	if (m_nextP) {
  	  delete(m_nextP);
  	}
  	  
  }

  //----------------------------------------------------------------------------
  //Linux_SambaGlobalProtocolForGlobalInstanceNameEnumeration
  //----------------------------------------------------------------------------
  Linux_SambaGlobalProtocolForGlobalInstanceEnumeration::Linux_SambaGlobalProtocolForGlobalInstanceEnumeration() {
   	
    m_firstElementP = 0;
    m_currentElementP = 0;
    m_endElementP = 0;
  
  }
  
  //----------------------------------------------------------------------------
  Linux_SambaGlobalProtocolForGlobalInstanceEnumeration::Linux_SambaGlobalProtocolForGlobalInstanceEnumeration(
    const Linux_SambaGlobalProtocolForGlobalInstanceEnumeration& anInstanceEnumeration) {
   	
    m_firstElementP = 0;
    m_currentElementP = 0;
    m_endElementP = 0;
  	 
    int size = anInstanceEnumeration.getSize();
    for (int x=0; x < size;++x) {
      addElement(anInstanceEnumeration.getElement(x));
    }           

  }
  
  //----------------------------------------------------------------------------
  Linux_SambaGlobalProtocolForGlobalInstanceEnumeration::~Linux_SambaGlobalProtocolForGlobalInstanceEnumeration() {
   	
  	if (m_firstElementP) {
  	  delete(m_firstElementP);
  	}
  	  	
  }
  
  //----------------------------------------------------------------------------
  void
  Linux_SambaGlobalProtocolForGlobalInstanceEnumeration::reset() {
  	
  	m_currentElementP = m_firstElementP;
  	
  }
  	  
  //----------------------------------------------------------------------------
  bool
  Linux_SambaGlobalProtocolForGlobalInstanceEnumeration::hasNext() const {
  	
  	return (m_currentElementP != 0);
  
  }
  
  //----------------------------------------------------------------------------
  int
  Linux_SambaGlobalProtocolForGlobalInstanceEnumeration::getSize() const {
  	
    int size = 0;
    Linux_SambaGlobalProtocolForGlobalInstanceEnumerationElement* followingP = m_firstElementP;
  	
  	while (followingP) {
      followingP = followingP->m_nextP;
      ++size;
    }
  	
    return size;
    
  }
  
  //----------------------------------------------------------------------------
  const Linux_SambaGlobalProtocolForGlobalInstance&  
  Linux_SambaGlobalProtocolForGlobalInstanceEnumeration::getElement(int anIndex) const {
   
    Linux_SambaGlobalProtocolForGlobalInstanceEnumerationElement* followingP = m_firstElementP;
   
    int x = 0;
    while (followingP && (x < anIndex)) {
      followingP = followingP->m_nextP;
      ++x;
    }
    
    return *(followingP->m_elementP);

  }
  
  //----------------------------------------------------------------------------
  const Linux_SambaGlobalProtocolForGlobalInstance&
  Linux_SambaGlobalProtocolForGlobalInstanceEnumeration::getNext() {
   	
    Linux_SambaGlobalProtocolForGlobalInstanceEnumerationElement* currentElementP =
  	  m_currentElementP;

    m_currentElementP = m_currentElementP->m_nextP;
  	 
    return *(currentElementP->m_elementP);

  }
  	  
  //----------------------------------------------------------------------------
  void
  Linux_SambaGlobalProtocolForGlobalInstanceEnumeration::addElement(
    const Linux_SambaGlobalProtocolForGlobalInstance& anInstance) {
   	
  	if (m_firstElementP == 0) {
  	  m_firstElementP = new Linux_SambaGlobalProtocolForGlobalInstanceEnumerationElement();
  	  m_firstElementP->m_elementP = new Linux_SambaGlobalProtocolForGlobalInstance(anInstance);
  	  m_endElementP = m_firstElementP;
  	  m_currentElementP = m_firstElementP;
  	} else {
  	  m_endElementP->m_nextP = new Linux_SambaGlobalProtocolForGlobalInstanceEnumerationElement();
  	  m_endElementP = m_endElementP->m_nextP;
  	  m_endElementP->m_elementP = new Linux_SambaGlobalProtocolForGlobalInstance(anInstance);
  	}

  }
  
}
