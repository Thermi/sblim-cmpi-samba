// =======================================================================
// Linux_SambaShareFileNameHandlingForShareInstance.cpp
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
#include "Linux_SambaShareFileNameHandlingForShareInstance.h"
#include "CmpiData.h"
#include "CmpiString.h"
#include "CmpiArray.h"
#include <string>

namespace genProvider {

  //****************************************************************************
  //Linux_SambaShareFileNameHandlingForShareInstance
  //----------------------------------------------------------------------------
  //empty constructor
  Linux_SambaShareFileNameHandlingForShareInstance::Linux_SambaShareFileNameHandlingForShareInstance() {   	
   	init();  	   	
  }
  
  //----------------------------------------------------------------------------
  //copy constructor	
  //----------------------------------------------------------------------------
  Linux_SambaShareFileNameHandlingForShareInstance::Linux_SambaShareFileNameHandlingForShareInstance(
    const Linux_SambaShareFileNameHandlingForShareInstance& anInstance) {   	
   	init(anInstance);  	   	
  }
  
  //----------------------------------------------------------------------------
  //constructor using CmpiInstance
  //----------------------------------------------------------------------------
  Linux_SambaShareFileNameHandlingForShareInstance::Linux_SambaShareFileNameHandlingForShareInstance(
    const CmpiInstance& aCmpiInstance,
    const char* anInstanceNamespaceP) {

    CmpiData cmpiData;

    init(); 
    
    CmpiObjectPath cop = aCmpiInstance.getObjectPath();
    cop.setNameSpace(anInstanceNamespaceP);
    setInstanceName(Linux_SambaShareFileNameHandlingForShareInstanceName(cop));

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
  Linux_SambaShareFileNameHandlingForShareInstance::
   ~Linux_SambaShareFileNameHandlingForShareInstance(){
   	reset();  	  
  }
  
  
  //----------------------------------------------------------------------------
  //copy operator
  //----------------------------------------------------------------------------
  Linux_SambaShareFileNameHandlingForShareInstance&
  Linux_SambaShareFileNameHandlingForShareInstance::operator=(
    const Linux_SambaShareFileNameHandlingForShareInstance& anInstance) {   	
   	
   	init(anInstance);
   	return *this;
  
  }
  
  
  //----------------------------------------------------------------------------
  //converts to CmpiInstance
  //----------------------------------------------------------------------------
  CmpiInstance
  Linux_SambaShareFileNameHandlingForShareInstance::getCmpiInstance(
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
  Linux_SambaShareFileNameHandlingForShareInstance::isInstanceNameSet() const {
  	return isSet.instanceName;
  }
  
  //----------------------------------------------------------------------------
  const Linux_SambaShareFileNameHandlingForShareInstanceName&
  Linux_SambaShareFileNameHandlingForShareInstance::getInstanceName() const {

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
  Linux_SambaShareFileNameHandlingForShareInstance::setInstanceName(
    const Linux_SambaShareFileNameHandlingForShareInstanceName& val) {

    m_instanceName = val;
    isSet.instanceName = 1;

  }
       
  //----------------------------------------------------------------------------
  // IsCurrent related methods
  //----------------------------------------------------------------------------
  unsigned int
  Linux_SambaShareFileNameHandlingForShareInstance::isIsCurrentSet() const {
    return isSet.IsCurrent;
  }

  //----------------------------------------------------------------------------
  void Linux_SambaShareFileNameHandlingForShareInstance::setIsCurrent(
    const CMPIUint16 aValue) {
  
    m_IsCurrent = aValue;
    isSet.IsCurrent = 1;
  
  }       

  //----------------------------------------------------------------------------
  const CMPIUint16
  Linux_SambaShareFileNameHandlingForShareInstance::getIsCurrent() const {
    
    if ( ! isSet.IsCurrent) {
   	  throw CmpiErrorFormater::getErrorException(
   	    CmpiErrorFormater::NOT_SET,
        "IsCurrent",
        "Linux_SambaShareFileNameHandlingForShare");
   	}


    return m_IsCurrent;

  }
       
  //----------------------------------------------------------------------------
  // IsDefault related methods
  //----------------------------------------------------------------------------
  unsigned int
  Linux_SambaShareFileNameHandlingForShareInstance::isIsDefaultSet() const {
    return isSet.IsDefault;
  }

  //----------------------------------------------------------------------------
  void Linux_SambaShareFileNameHandlingForShareInstance::setIsDefault(
    const CMPIUint16 aValue) {
  
    m_IsDefault = aValue;
    isSet.IsDefault = 1;
  
  }       

  //----------------------------------------------------------------------------
  const CMPIUint16
  Linux_SambaShareFileNameHandlingForShareInstance::getIsDefault() const {
    
    if ( ! isSet.IsDefault) {
   	  throw CmpiErrorFormater::getErrorException(
   	    CmpiErrorFormater::NOT_SET,
        "IsDefault",
        "Linux_SambaShareFileNameHandlingForShare");
   	}


    return m_IsDefault;

  }

  
  //----------------------------------------------------------------------------
  //set isSet attributes to FALSE
  //----------------------------------------------------------------------------
  void
  Linux_SambaShareFileNameHandlingForShareInstance::init() {
   	isSet.instanceName = 0;
    isSet.IsCurrent = 0;
    isSet.IsDefault = 0;
  	
  }
  
  //----------------------------------------------------------------------------
  //copies another instance properties in this
  //----------------------------------------------------------------------------
  void 
  Linux_SambaShareFileNameHandlingForShareInstance::init(
    const Linux_SambaShareFileNameHandlingForShareInstance& anOriginal) {   	

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
  Linux_SambaShareFileNameHandlingForShareInstance::reset() {
   	
  }
  
  //----------------------------------------------------------------------------
  //Linux_SambaShareFileNameHandlingForShareInstanceEnumerationElement	
  //----------------------------------------------------------------------------
  Linux_SambaShareFileNameHandlingForShareInstanceEnumerationElement::Linux_SambaShareFileNameHandlingForShareInstanceEnumerationElement() {
   	
  	m_elementP = 0;
  	m_nextP = 0;
  	  
  }
  
  //----------------------------------------------------------------------------
  Linux_SambaShareFileNameHandlingForShareInstanceEnumerationElement::~Linux_SambaShareFileNameHandlingForShareInstanceEnumerationElement() {
   	
  	if (m_elementP) {
  	  delete(m_elementP);
  	}
  	
  	if (m_nextP) {
  	  delete(m_nextP);
  	}
  	  
  }

  //----------------------------------------------------------------------------
  //Linux_SambaShareFileNameHandlingForShareInstanceNameEnumeration
  //----------------------------------------------------------------------------
  Linux_SambaShareFileNameHandlingForShareInstanceEnumeration::Linux_SambaShareFileNameHandlingForShareInstanceEnumeration() {
   	
    m_firstElementP = 0;
    m_currentElementP = 0;
    m_endElementP = 0;
  
  }
  
  //----------------------------------------------------------------------------
  Linux_SambaShareFileNameHandlingForShareInstanceEnumeration::Linux_SambaShareFileNameHandlingForShareInstanceEnumeration(
    const Linux_SambaShareFileNameHandlingForShareInstanceEnumeration& anInstanceEnumeration) {
   	
    m_firstElementP = 0;
    m_currentElementP = 0;
    m_endElementP = 0;
  	 
    int size = anInstanceEnumeration.getSize();
    for (int x=0; x < size;++x) {
      addElement(anInstanceEnumeration.getElement(x));
    }           

  }
  
  //----------------------------------------------------------------------------
  Linux_SambaShareFileNameHandlingForShareInstanceEnumeration::~Linux_SambaShareFileNameHandlingForShareInstanceEnumeration() {
   	
  	if (m_firstElementP) {
  	  delete(m_firstElementP);
  	}
  	  	
  }
  
  //----------------------------------------------------------------------------
  void
  Linux_SambaShareFileNameHandlingForShareInstanceEnumeration::reset() {
  	
  	m_currentElementP = m_firstElementP;
  	
  }
  	  
  //----------------------------------------------------------------------------
  bool
  Linux_SambaShareFileNameHandlingForShareInstanceEnumeration::hasNext() const {
  	
  	return (m_currentElementP != 0);
  
  }
  
  //----------------------------------------------------------------------------
  int
  Linux_SambaShareFileNameHandlingForShareInstanceEnumeration::getSize() const {
  	
    int size = 0;
    Linux_SambaShareFileNameHandlingForShareInstanceEnumerationElement* followingP = m_firstElementP;
  	
  	while (followingP) {
      followingP = followingP->m_nextP;
      ++size;
    }
  	
    return size;
    
  }
  
  //----------------------------------------------------------------------------
  const Linux_SambaShareFileNameHandlingForShareInstance&  
  Linux_SambaShareFileNameHandlingForShareInstanceEnumeration::getElement(int anIndex) const {
   
    Linux_SambaShareFileNameHandlingForShareInstanceEnumerationElement* followingP = m_firstElementP;
   
    int x = 0;
    while (followingP && (x < anIndex)) {
      followingP = followingP->m_nextP;
      ++x;
    }
    
    return *(followingP->m_elementP);

  }
  
  //----------------------------------------------------------------------------
  const Linux_SambaShareFileNameHandlingForShareInstance&
  Linux_SambaShareFileNameHandlingForShareInstanceEnumeration::getNext() {
   	
    Linux_SambaShareFileNameHandlingForShareInstanceEnumerationElement* currentElementP =
  	  m_currentElementP;

    m_currentElementP = m_currentElementP->m_nextP;
  	 
    return *(currentElementP->m_elementP);

  }
  	  
  //----------------------------------------------------------------------------
  void
  Linux_SambaShareFileNameHandlingForShareInstanceEnumeration::addElement(
    const Linux_SambaShareFileNameHandlingForShareInstance& anInstance) {
   	
  	if (m_firstElementP == 0) {
  	  m_firstElementP = new Linux_SambaShareFileNameHandlingForShareInstanceEnumerationElement();
  	  m_firstElementP->m_elementP = new Linux_SambaShareFileNameHandlingForShareInstance(anInstance);
  	  m_endElementP = m_firstElementP;
  	  m_currentElementP = m_firstElementP;
  	} else {
  	  m_endElementP->m_nextP = new Linux_SambaShareFileNameHandlingForShareInstanceEnumerationElement();
  	  m_endElementP = m_endElementP->m_nextP;
  	  m_endElementP->m_elementP = new Linux_SambaShareFileNameHandlingForShareInstance(anInstance);
  	}

  }
  
}
