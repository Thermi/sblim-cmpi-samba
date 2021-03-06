// =======================================================================
// Linux_SambaScriptingForGlobalInstance.cpp
//     created on Fri, 23 Jun 2006 using ECUTE 2.2.1
//
// Copyright (c) 2006, 2009, International Business Machines
//
// THIS FILE IS PROVIDED UNDER THE TERMS OF THE ECLIPSE PUBLIC LICENSE
// ("AGREEMENT"). ANY USE, REPRODUCTION OR DISTRIBUTION OF THIS FILE
// CONSTITUTES RECIPIENTS ACCEPTANCE OF THE AGREEMENT.
//
// You can obtain a current copy of the Eclipse Public License from
// http://www.opensource.org/licenses/eclipse-1.0.php
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
#include "Linux_SambaScriptingForGlobalInstance.h"
#include "CmpiData.h"
#include "CmpiString.h"
#include "CmpiArray.h"
#include <string>

namespace genProvider {

  //****************************************************************************
  //Linux_SambaScriptingForGlobalInstance
  //----------------------------------------------------------------------------
  //empty constructor
  Linux_SambaScriptingForGlobalInstance::Linux_SambaScriptingForGlobalInstance() {   	
   	init();  	   	
  }
  
  //----------------------------------------------------------------------------
  //copy constructor	
  //----------------------------------------------------------------------------
  Linux_SambaScriptingForGlobalInstance::Linux_SambaScriptingForGlobalInstance(
    const Linux_SambaScriptingForGlobalInstance& anInstance) {   	
   	init(anInstance);  	   	
  }
  
  //----------------------------------------------------------------------------
  //constructor using CmpiInstance
  //----------------------------------------------------------------------------
  Linux_SambaScriptingForGlobalInstance::Linux_SambaScriptingForGlobalInstance(
    const CmpiInstance& aCmpiInstance,
    const char* anInstanceNamespaceP) {

    CmpiData cmpiData;

    init(); 
    
    CmpiObjectPath cop = aCmpiInstance.getObjectPath();
    cop.setNameSpace(anInstanceNamespaceP);
    setInstanceName(Linux_SambaScriptingForGlobalInstanceName(cop));

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
  Linux_SambaScriptingForGlobalInstance::
   ~Linux_SambaScriptingForGlobalInstance(){
   	reset();  	  
  }
  
  
  //----------------------------------------------------------------------------
  //copy operator
  //----------------------------------------------------------------------------
  Linux_SambaScriptingForGlobalInstance&
  Linux_SambaScriptingForGlobalInstance::operator=(
    const Linux_SambaScriptingForGlobalInstance& anInstance) {   	
   	
   	init(anInstance);
   	return *this;
  
  }
  
  
  //----------------------------------------------------------------------------
  //converts to CmpiInstance
  //----------------------------------------------------------------------------
  CmpiInstance
  Linux_SambaScriptingForGlobalInstance::getCmpiInstance(
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
  Linux_SambaScriptingForGlobalInstance::isInstanceNameSet() const {
  	return isSet.instanceName;
  }
  
  //----------------------------------------------------------------------------
  const Linux_SambaScriptingForGlobalInstanceName&
  Linux_SambaScriptingForGlobalInstance::getInstanceName() const {

    if( ! isSet.instanceName) {
   	  throw CmpiErrorFormater::getErrorException(
        CmpiErrorFormater::NOT_SET,
        "InstanceName (CIM Key Attributes)",
        "Linux_SambaScriptingForGlobal");
   	}
  		
   	return m_instanceName;
  
  }

  //----------------------------------------------------------------------------
  void
  Linux_SambaScriptingForGlobalInstance::setInstanceName(
    const Linux_SambaScriptingForGlobalInstanceName& val) {

    m_instanceName = val;
    isSet.instanceName = 1;

  }
       
  //----------------------------------------------------------------------------
  // IsCurrent related methods
  //----------------------------------------------------------------------------
  unsigned int
  Linux_SambaScriptingForGlobalInstance::isIsCurrentSet() const {
    return isSet.IsCurrent;
  }

  //----------------------------------------------------------------------------
  void Linux_SambaScriptingForGlobalInstance::setIsCurrent(
    const CMPIUint16 aValue) {
  
    m_IsCurrent = aValue;
    isSet.IsCurrent = 1;
  
  }       

  //----------------------------------------------------------------------------
  const CMPIUint16
  Linux_SambaScriptingForGlobalInstance::getIsCurrent() const {
    
    if ( ! isSet.IsCurrent) {
   	  throw CmpiErrorFormater::getErrorException(
   	    CmpiErrorFormater::NOT_SET,
        "IsCurrent",
        "Linux_SambaScriptingForGlobal");
   	}


    return m_IsCurrent;

  }
       
  //----------------------------------------------------------------------------
  // IsDefault related methods
  //----------------------------------------------------------------------------
  unsigned int
  Linux_SambaScriptingForGlobalInstance::isIsDefaultSet() const {
    return isSet.IsDefault;
  }

  //----------------------------------------------------------------------------
  void Linux_SambaScriptingForGlobalInstance::setIsDefault(
    const CMPIUint16 aValue) {
  
    m_IsDefault = aValue;
    isSet.IsDefault = 1;
  
  }       

  //----------------------------------------------------------------------------
  const CMPIUint16
  Linux_SambaScriptingForGlobalInstance::getIsDefault() const {
    
    if ( ! isSet.IsDefault) {
   	  throw CmpiErrorFormater::getErrorException(
   	    CmpiErrorFormater::NOT_SET,
        "IsDefault",
        "Linux_SambaScriptingForGlobal");
   	}


    return m_IsDefault;

  }

  
  //----------------------------------------------------------------------------
  //set isSet attributes to FALSE
  //----------------------------------------------------------------------------
  void
  Linux_SambaScriptingForGlobalInstance::init() {
   	isSet.instanceName = 0;
    isSet.IsCurrent = 0;
    isSet.IsDefault = 0;
  	
  }
  
  //----------------------------------------------------------------------------
  //copies another instance properties in this
  //----------------------------------------------------------------------------
  void 
  Linux_SambaScriptingForGlobalInstance::init(
    const Linux_SambaScriptingForGlobalInstance& anOriginal) {   	

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
  Linux_SambaScriptingForGlobalInstance::reset() {
   	
  }
  
  //----------------------------------------------------------------------------
  //Linux_SambaScriptingForGlobalInstanceEnumerationElement	
  //----------------------------------------------------------------------------
  Linux_SambaScriptingForGlobalInstanceEnumerationElement::Linux_SambaScriptingForGlobalInstanceEnumerationElement() {
   	
  	m_elementP = 0;
  	m_nextP = 0;
  	  
  }
  
  //----------------------------------------------------------------------------
  Linux_SambaScriptingForGlobalInstanceEnumerationElement::~Linux_SambaScriptingForGlobalInstanceEnumerationElement() {
   	
  	if (m_elementP) {
  	  delete(m_elementP);
  	}
  	
  	if (m_nextP) {
  	  delete(m_nextP);
  	}
  	  
  }

  //----------------------------------------------------------------------------
  //Linux_SambaScriptingForGlobalInstanceNameEnumeration
  //----------------------------------------------------------------------------
  Linux_SambaScriptingForGlobalInstanceEnumeration::Linux_SambaScriptingForGlobalInstanceEnumeration() {
   	
    m_firstElementP = 0;
    m_currentElementP = 0;
    m_endElementP = 0;
  
  }
  
  //----------------------------------------------------------------------------
  Linux_SambaScriptingForGlobalInstanceEnumeration::Linux_SambaScriptingForGlobalInstanceEnumeration(
    const Linux_SambaScriptingForGlobalInstanceEnumeration& anInstanceEnumeration) {
   	
    m_firstElementP = 0;
    m_currentElementP = 0;
    m_endElementP = 0;
  	 
    int size = anInstanceEnumeration.getSize();
    for (int x=0; x < size;++x) {
      addElement(anInstanceEnumeration.getElement(x));
    }           

  }
  
  //----------------------------------------------------------------------------
  Linux_SambaScriptingForGlobalInstanceEnumeration::~Linux_SambaScriptingForGlobalInstanceEnumeration() {
   	
  	if (m_firstElementP) {
  	  delete(m_firstElementP);
  	}
  	  	
  }
  
  //----------------------------------------------------------------------------
  void
  Linux_SambaScriptingForGlobalInstanceEnumeration::reset() {
  	
  	m_currentElementP = m_firstElementP;
  	
  }
  	  
  //----------------------------------------------------------------------------
  bool
  Linux_SambaScriptingForGlobalInstanceEnumeration::hasNext() const {
  	
  	return (m_currentElementP != 0);
  
  }
  
  //----------------------------------------------------------------------------
  int
  Linux_SambaScriptingForGlobalInstanceEnumeration::getSize() const {
  	
    int size = 0;
    Linux_SambaScriptingForGlobalInstanceEnumerationElement* followingP = m_firstElementP;
  	
  	while (followingP) {
      followingP = followingP->m_nextP;
      ++size;
    }
  	
    return size;
    
  }
  
  //----------------------------------------------------------------------------
  const Linux_SambaScriptingForGlobalInstance&  
  Linux_SambaScriptingForGlobalInstanceEnumeration::getElement(int anIndex) const {
   
    Linux_SambaScriptingForGlobalInstanceEnumerationElement* followingP = m_firstElementP;
   
    int x = 0;
    while (followingP && (x < anIndex)) {
      followingP = followingP->m_nextP;
      ++x;
    }
    
    return *(followingP->m_elementP);

  }
  
  //----------------------------------------------------------------------------
  const Linux_SambaScriptingForGlobalInstance&
  Linux_SambaScriptingForGlobalInstanceEnumeration::getNext() {
   	
    Linux_SambaScriptingForGlobalInstanceEnumerationElement* currentElementP =
  	  m_currentElementP;

    m_currentElementP = m_currentElementP->m_nextP;
  	 
    return *(currentElementP->m_elementP);

  }
  	  
  //----------------------------------------------------------------------------
  void
  Linux_SambaScriptingForGlobalInstanceEnumeration::addElement(
    const Linux_SambaScriptingForGlobalInstance& anInstance) {
   	
  	if (m_firstElementP == 0) {
  	  m_firstElementP = new Linux_SambaScriptingForGlobalInstanceEnumerationElement();
  	  m_firstElementP->m_elementP = new Linux_SambaScriptingForGlobalInstance(anInstance);
  	  m_endElementP = m_firstElementP;
  	  m_currentElementP = m_firstElementP;
  	} else {
  	  m_endElementP->m_nextP = new Linux_SambaScriptingForGlobalInstanceEnumerationElement();
  	  m_endElementP = m_endElementP->m_nextP;
  	  m_endElementP->m_elementP = new Linux_SambaScriptingForGlobalInstance(anInstance);
  	}

  }
  
}
