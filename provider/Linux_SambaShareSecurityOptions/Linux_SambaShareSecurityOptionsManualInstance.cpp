// =======================================================================
// Linux_SambaShareSecurityOptionsManualInstance.cpp
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
#include "Linux_SambaShareSecurityOptionsManualInstance.h"
#include "CmpiData.h"
#include "CmpiString.h"
#include "CmpiArray.h"
#include <string>

namespace genProvider {

  //****************************************************************************
  //Linux_SambaShareSecurityOptionsManualInstance
  //----------------------------------------------------------------------------
  //empty constructor
  Linux_SambaShareSecurityOptionsManualInstance::Linux_SambaShareSecurityOptionsManualInstance() {   	
   	init();  	   	
  }
  
  //----------------------------------------------------------------------------
  //copy constructor	
  //----------------------------------------------------------------------------
  Linux_SambaShareSecurityOptionsManualInstance::Linux_SambaShareSecurityOptionsManualInstance(
    const Linux_SambaShareSecurityOptionsManualInstance& anInstance) {   	
   	init(anInstance);  	   	
  }
  
  //----------------------------------------------------------------------------
  //constructor using CmpiInstance
  //----------------------------------------------------------------------------
  Linux_SambaShareSecurityOptionsManualInstance::Linux_SambaShareSecurityOptionsManualInstance(
    const CmpiInstance& aCmpiInstance,
    const char* anInstanceNamespaceP) {

    CmpiData cmpiData;

    init(); 
    
    CmpiObjectPath cop = aCmpiInstance.getObjectPath();
    cop.setNameSpace(anInstanceNamespaceP);
    setInstanceName(Linux_SambaShareSecurityOptionsInstanceName(cop));

    cmpiData = aCmpiInstance.getProperty("CreateMask");
    if ( ! cmpiData.isNullValue()){
      CMPIUint16 CreateMask = cmpiData;
      setCreateMask(CreateMask);
    }

    cmpiData = aCmpiInstance.getProperty("DirectoryMask");
    if ( ! cmpiData.isNullValue()){
      CMPIUint16 DirectoryMask = cmpiData;
      setDirectoryMask(DirectoryMask);
    }

    cmpiData = aCmpiInstance.getProperty("DirectorySecurityMask");
    if ( ! cmpiData.isNullValue()){
      CMPIUint16 DirectorySecurityMask = cmpiData;
      setDirectorySecurityMask(DirectorySecurityMask);
    }

    
  }
  
  //----------------------------------------------------------------------------
  //Destructor
  //----------------------------------------------------------------------------
  Linux_SambaShareSecurityOptionsManualInstance::
   ~Linux_SambaShareSecurityOptionsManualInstance(){
   	reset();  	  
  }
  
  
  //----------------------------------------------------------------------------
  //copy operator
  //----------------------------------------------------------------------------
  Linux_SambaShareSecurityOptionsManualInstance&
  Linux_SambaShareSecurityOptionsManualInstance::operator=(
    const Linux_SambaShareSecurityOptionsManualInstance& anInstance) {   	
   	
   	init(anInstance);
   	return *this;
  
  }
  
  
  //----------------------------------------------------------------------------
  //converts to CmpiInstance
  //----------------------------------------------------------------------------
  CmpiInstance
  Linux_SambaShareSecurityOptionsManualInstance::getCmpiInstance(
    const char** aPropertiesPP) const {
   	
   	CmpiObjectPath objectPath=getInstanceName().getObjectPath();      
    CmpiInstance cmpiInstance(objectPath);    
    getInstanceName().fillKeys(cmpiInstance);
    
    if (aPropertiesPP) {
	    cmpiInstance.setPropertyFilter(aPropertiesPP,0);
    }

  	if (isSet.CreateMask) {
  	  
  	  cmpiInstance.setProperty(
  	    "CreateMask",
  	    CmpiData(m_CreateMask));
  	}

  	if (isSet.DirectoryMask) {
  	  
  	  cmpiInstance.setProperty(
  	    "DirectoryMask",
  	    CmpiData(m_DirectoryMask));
  	}

  	if (isSet.DirectorySecurityMask) {
  	  
  	  cmpiInstance.setProperty(
  	    "DirectorySecurityMask",
  	    CmpiData(m_DirectorySecurityMask));
  	}

  	
  	return cmpiInstance;
  	
  }
  
  //----------------------------------------------------------------------------
  // InstanceName related methods
  //----------------------------------------------------------------------------
  unsigned int 
  Linux_SambaShareSecurityOptionsManualInstance::isInstanceNameSet() const {
  	return isSet.instanceName;
  }
  
  //----------------------------------------------------------------------------
  const Linux_SambaShareSecurityOptionsInstanceName&
  Linux_SambaShareSecurityOptionsManualInstance::getInstanceName() const {

    if( ! isSet.instanceName) {
   	  throw CmpiErrorFormater::getErrorException(
        CmpiErrorFormater::NOT_SET,
        "InstanceName (CIM Key Attributes)",
        "Linux_SambaShareSecurityOptions");
   	}
  		
   	return m_instanceName;
  
  }

  //----------------------------------------------------------------------------
  void
  Linux_SambaShareSecurityOptionsManualInstance::setInstanceName(
    const Linux_SambaShareSecurityOptionsInstanceName& val) {

    m_instanceName = val;
    isSet.instanceName = 1;

  }
       
  //----------------------------------------------------------------------------
  // CreateMask related methods
  //----------------------------------------------------------------------------
  unsigned int
  Linux_SambaShareSecurityOptionsManualInstance::isCreateMaskSet() const {
    return isSet.CreateMask;
  }

  //----------------------------------------------------------------------------
  void Linux_SambaShareSecurityOptionsManualInstance::setCreateMask(
    const CMPIUint16 aValue) {
  
    m_CreateMask = aValue;
    isSet.CreateMask = 1;
  
  }       

  //----------------------------------------------------------------------------
  const CMPIUint16
  Linux_SambaShareSecurityOptionsManualInstance::getCreateMask() const {
    
    if ( ! isSet.CreateMask) {
   	  throw CmpiErrorFormater::getErrorException(
   	    CmpiErrorFormater::NOT_SET,
        "CreateMask",
        "Linux_SambaShareSecurityOptions");
   	}


    return m_CreateMask;

  }
       
  //----------------------------------------------------------------------------
  // DirectoryMask related methods
  //----------------------------------------------------------------------------
  unsigned int
  Linux_SambaShareSecurityOptionsManualInstance::isDirectoryMaskSet() const {
    return isSet.DirectoryMask;
  }

  //----------------------------------------------------------------------------
  void Linux_SambaShareSecurityOptionsManualInstance::setDirectoryMask(
    const CMPIUint16 aValue) {
  
    m_DirectoryMask = aValue;
    isSet.DirectoryMask = 1;
  
  }       

  //----------------------------------------------------------------------------
  const CMPIUint16
  Linux_SambaShareSecurityOptionsManualInstance::getDirectoryMask() const {
    
    if ( ! isSet.DirectoryMask) {
   	  throw CmpiErrorFormater::getErrorException(
   	    CmpiErrorFormater::NOT_SET,
        "DirectoryMask",
        "Linux_SambaShareSecurityOptions");
   	}


    return m_DirectoryMask;

  }
       
  //----------------------------------------------------------------------------
  // DirectorySecurityMask related methods
  //----------------------------------------------------------------------------
  unsigned int
  Linux_SambaShareSecurityOptionsManualInstance::isDirectorySecurityMaskSet() const {
    return isSet.DirectorySecurityMask;
  }

  //----------------------------------------------------------------------------
  void Linux_SambaShareSecurityOptionsManualInstance::setDirectorySecurityMask(
    const CMPIUint16 aValue) {
  
    m_DirectorySecurityMask = aValue;
    isSet.DirectorySecurityMask = 1;
  
  }       

  //----------------------------------------------------------------------------
  const CMPIUint16
  Linux_SambaShareSecurityOptionsManualInstance::getDirectorySecurityMask() const {
    
    if ( ! isSet.DirectorySecurityMask) {
   	  throw CmpiErrorFormater::getErrorException(
   	    CmpiErrorFormater::NOT_SET,
        "DirectorySecurityMask",
        "Linux_SambaShareSecurityOptions");
   	}


    return m_DirectorySecurityMask;

  }

  
  //----------------------------------------------------------------------------
  //set isSet attributes to FALSE
  //----------------------------------------------------------------------------
  void
  Linux_SambaShareSecurityOptionsManualInstance::init() {
   	isSet.instanceName = 0;
    isSet.CreateMask = 0;
    isSet.DirectoryMask = 0;
    isSet.DirectorySecurityMask = 0;
  	
  }
  
  //----------------------------------------------------------------------------
  //copies another instance properties in this
  //----------------------------------------------------------------------------
  void 
  Linux_SambaShareSecurityOptionsManualInstance::init(
    const Linux_SambaShareSecurityOptionsManualInstance& anOriginal) {   	

   	init();
   	   	
    if(anOriginal.isInstanceNameSet()) {
      setInstanceName(anOriginal.getInstanceName());
    }
       	
    if (anOriginal.isCreateMaskSet()) {
      const CMPIUint16 CreateMaskOriginal = anOriginal.getCreateMask();
      setCreateMask(CreateMaskOriginal);
    }
   	
    if (anOriginal.isDirectoryMaskSet()) {
      const CMPIUint16 DirectoryMaskOriginal = anOriginal.getDirectoryMask();
      setDirectoryMask(DirectoryMaskOriginal);
    }
   	
    if (anOriginal.isDirectorySecurityMaskSet()) {
      const CMPIUint16 DirectorySecurityMaskOriginal = anOriginal.getDirectorySecurityMask();
      setDirectorySecurityMask(DirectorySecurityMaskOriginal);
    }
    
  }
  
  //----------------------------------------------------------------------------
  //reset the instance data
  //----------------------------------------------------------------------------
  void
  Linux_SambaShareSecurityOptionsManualInstance::reset() {
   	
  }
  
  //----------------------------------------------------------------------------
  //Linux_SambaShareSecurityOptionsManualInstanceEnumerationElement	
  //----------------------------------------------------------------------------
  Linux_SambaShareSecurityOptionsManualInstanceEnumerationElement::Linux_SambaShareSecurityOptionsManualInstanceEnumerationElement() {
   	
  	m_elementP = 0;
  	m_nextP = 0;
  	  
  }
  
  //----------------------------------------------------------------------------
  Linux_SambaShareSecurityOptionsManualInstanceEnumerationElement::~Linux_SambaShareSecurityOptionsManualInstanceEnumerationElement() {
   	
  	if (m_elementP) {
  	  delete(m_elementP);
  	}
  	
  	if (m_nextP) {
  	  delete(m_nextP);
  	}
  	  
  }

  //----------------------------------------------------------------------------
  //Linux_SambaShareSecurityOptionsManualInstanceNameEnumeration
  //----------------------------------------------------------------------------
  Linux_SambaShareSecurityOptionsManualInstanceEnumeration::Linux_SambaShareSecurityOptionsManualInstanceEnumeration() {
   	
    m_firstElementP = 0;
    m_currentElementP = 0;
    m_endElementP = 0;
  
  }
  
  //----------------------------------------------------------------------------
  Linux_SambaShareSecurityOptionsManualInstanceEnumeration::Linux_SambaShareSecurityOptionsManualInstanceEnumeration(
    const Linux_SambaShareSecurityOptionsManualInstanceEnumeration& anInstanceEnumeration) {
   	
    m_firstElementP = 0;
    m_currentElementP = 0;
    m_endElementP = 0;
  	 
    int size = anInstanceEnumeration.getSize();
    for (int x=0; x < size;++x) {
      addElement(anInstanceEnumeration.getElement(x));
    }           

  }
  
  //----------------------------------------------------------------------------
  Linux_SambaShareSecurityOptionsManualInstanceEnumeration::~Linux_SambaShareSecurityOptionsManualInstanceEnumeration() {
   	
  	if (m_firstElementP) {
  	  delete(m_firstElementP);
  	}
  	  	
  }
  
  //----------------------------------------------------------------------------
  void
  Linux_SambaShareSecurityOptionsManualInstanceEnumeration::reset() {
  	
  	m_currentElementP = m_firstElementP;
  	
  }
  	  
  //----------------------------------------------------------------------------
  bool
  Linux_SambaShareSecurityOptionsManualInstanceEnumeration::hasNext() const {
  	
  	return (m_currentElementP != 0);
  
  }
  
  //----------------------------------------------------------------------------
  int
  Linux_SambaShareSecurityOptionsManualInstanceEnumeration::getSize() const {
  	
    int size = 0;
    Linux_SambaShareSecurityOptionsManualInstanceEnumerationElement* followingP = m_firstElementP;
  	
  	while (followingP) {
      followingP = followingP->m_nextP;
      ++size;
    }
  	
    return size;
    
  }
  
  //----------------------------------------------------------------------------
  const Linux_SambaShareSecurityOptionsManualInstance&  
  Linux_SambaShareSecurityOptionsManualInstanceEnumeration::getElement(int anIndex) const {
   
    Linux_SambaShareSecurityOptionsManualInstanceEnumerationElement* followingP = m_firstElementP;
   
    int x = 0;
    while (followingP && (x < anIndex)) {
      followingP = followingP->m_nextP;
      ++x;
    }
    
    return *(followingP->m_elementP);

  }
  
  //----------------------------------------------------------------------------
  const Linux_SambaShareSecurityOptionsManualInstance&
  Linux_SambaShareSecurityOptionsManualInstanceEnumeration::getNext() {
   	
    Linux_SambaShareSecurityOptionsManualInstanceEnumerationElement* currentElementP =
  	  m_currentElementP;

    m_currentElementP = m_currentElementP->m_nextP;
  	 
    return *(currentElementP->m_elementP);

  }
  	  
  //----------------------------------------------------------------------------
  void
  Linux_SambaShareSecurityOptionsManualInstanceEnumeration::addElement(
    const Linux_SambaShareSecurityOptionsManualInstance& anInstance) {
   	
  	if (m_firstElementP == 0) {
  	  m_firstElementP = new Linux_SambaShareSecurityOptionsManualInstanceEnumerationElement();
  	  m_firstElementP->m_elementP = new Linux_SambaShareSecurityOptionsManualInstance(anInstance);
  	  m_endElementP = m_firstElementP;
  	  m_currentElementP = m_firstElementP;
  	} else {
  	  m_endElementP->m_nextP = new Linux_SambaShareSecurityOptionsManualInstanceEnumerationElement();
  	  m_endElementP = m_endElementP->m_nextP;
  	  m_endElementP->m_elementP = new Linux_SambaShareSecurityOptionsManualInstance(anInstance);
  	}

  }
  
}
