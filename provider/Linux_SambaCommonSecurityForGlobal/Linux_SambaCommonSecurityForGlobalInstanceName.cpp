// =======================================================================
// Linux_SambaCommonSecurityForGlobalInstanceName.cpp
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
#include "Linux_SambaCommonSecurityForGlobalInstanceName.h"
#include "CmpiData.h"
#include "CmpiString.h"
#include "CmpiArray.h"
#include <string>

namespace genProvider {
	
  //****************************************************************************
  //Linux_SambaCommonSecurityForGlobalInstanceName
  //---------------------------------------------------------------------------- 
  // empty constructor
  //---------------------------------------------------------------------------- 
  Linux_SambaCommonSecurityForGlobalInstanceName::Linux_SambaCommonSecurityForGlobalInstanceName() {
   	init();  	
  }
  
  //---------------------------------------------------------------------------- 
  // copy constructor	
  //---------------------------------------------------------------------------- 
  Linux_SambaCommonSecurityForGlobalInstanceName::Linux_SambaCommonSecurityForGlobalInstanceName(
    const Linux_SambaCommonSecurityForGlobalInstanceName& anInstanceName) {
   	init(anInstanceName);  	
  }
  
  //---------------------------------------------------------------------------- 
  // constructor using CmpiObjectPath
  //---------------------------------------------------------------------------- 
  Linux_SambaCommonSecurityForGlobalInstanceName::Linux_SambaCommonSecurityForGlobalInstanceName(
    const CmpiObjectPath& path) {
    
    init();
    
    m_CIMClassNameP = path.getClassName().charPtr();
    
    CmpiString namespaceP;
    namespaceP = path.getNameSpace();
    setNamespace(namespaceP.charPtr(),1);
        
    CmpiObjectPath SettingData = path.getKey("SettingData");
    setSettingData(Linux_SambaCommonSecurityOptionsInstanceName(SettingData));
    
    CmpiObjectPath ManagedElement = path.getKey("ManagedElement");
    setManagedElement(Linux_SambaGlobalOptionsInstanceName(ManagedElement));

    
  }
  
  //---------------------------------------------------------------------------- 
  // destructor
  //---------------------------------------------------------------------------- 
  Linux_SambaCommonSecurityForGlobalInstanceName::~Linux_SambaCommonSecurityForGlobalInstanceName() {
   	reset();  	  
  }
  
  //---------------------------------------------------------------------------- 
  //copy operator
  //---------------------------------------------------------------------------- 
  Linux_SambaCommonSecurityForGlobalInstanceName&
  Linux_SambaCommonSecurityForGlobalInstanceName::operator=(
    const Linux_SambaCommonSecurityForGlobalInstanceName& anInstanceName) {    
    
    init(anInstanceName);
   	return *this;    
  
  }
  
  //---------------------------------------------------------------------------- 
  //returns the related CmpiObjectPath
  //---------------------------------------------------------------------------- 
  CmpiObjectPath 
  Linux_SambaCommonSecurityForGlobalInstanceName::getObjectPath() const {
   	
   	CmpiObjectPath objectPath(m_nameSpaceP, m_CIMClassNameP);
   	  	objectPath.setKey(
  	  "SettingData",
  	  CmpiData(m_SettingData.getObjectPath()));
  	objectPath.setKey(
  	  "ManagedElement",
  	  CmpiData(m_ManagedElement.getObjectPath()));

  	
  	return objectPath;
  	
  }
  
  //---------------------------------------------------------------------------- 
  // adds the related CmpiObjectPath to an existing cmpiInstance
  //---------------------------------------------------------------------------- 
  void 
  Linux_SambaCommonSecurityForGlobalInstanceName::fillKeys(CmpiInstance& cmpiInstance) const {
  	
  	if (isSet.SettingData) {
  	  
  	  cmpiInstance.setProperty(
  	    "SettingData",
  	    CmpiData(m_SettingData.getObjectPath()));
  	}

  	if (isSet.ManagedElement) {
  	  
  	  cmpiInstance.setProperty(
  	    "ManagedElement",
  	    CmpiData(m_ManagedElement.getObjectPath()));
  	}

  }
  
  
  //---------------------------------------------------------------------------- 
  // NameSpace related methods
  //---------------------------------------------------------------------------- 
  unsigned int 
  Linux_SambaCommonSecurityForGlobalInstanceName::isNameSpaceSet() const {
  	return isSet.m_nameSpaceP;
  }
  
  //---------------------------------------------------------------------------- 
  const char* 
  Linux_SambaCommonSecurityForGlobalInstanceName::getNamespace() const {
    if ( ! isSet.m_nameSpaceP) {
   	  throw CmpiErrorFormater::getErrorException(
   	   CmpiErrorFormater::NOT_SET,
   	   "NameSpace",
   	   "Linux_SambaCommonSecurityForGlobal");
   	}
  	return m_nameSpaceP;
  }

  //---------------------------------------------------------------------------- 
  void
  Linux_SambaCommonSecurityForGlobalInstanceName::setNamespace(
    const char* aNameSpaceP,
    int aCopyFlag) {
  
    if (isSet.m_nameSpaceP) {
      delete m_nameSpaceP;
    }
    
    if (aCopyFlag && aNameSpaceP) {
      char* nameSpaceP = new char[strlen(aNameSpaceP) + 1];
      strcpy(nameSpaceP,aNameSpaceP);
      m_nameSpaceP = nameSpaceP;
    } else {
      m_nameSpaceP = aNameSpaceP;
    }
    
    isSet.m_nameSpaceP = 1;
  }
         
  //----------------------------------------------------------------------------
  // SettingData related methods
  //----------------------------------------------------------------------------
  unsigned int
  Linux_SambaCommonSecurityForGlobalInstanceName::isSettingDataSet() const {
    return isSet.SettingData;
  }

  //----------------------------------------------------------------------------
  void Linux_SambaCommonSecurityForGlobalInstanceName::setSettingData(
    const Linux_SambaCommonSecurityOptionsInstanceName& aValue) {
  
    m_SettingData = aValue;
    isSet.SettingData = 1;
  
  }       

  //----------------------------------------------------------------------------
  const Linux_SambaCommonSecurityOptionsInstanceName&
  Linux_SambaCommonSecurityForGlobalInstanceName::getSettingData() const {
    
    if ( ! isSet.SettingData) {
   	  throw CmpiErrorFormater::getErrorException(
   	    CmpiErrorFormater::NOT_SET,
        "SettingData",
        "Linux_SambaCommonSecurityForGlobal");
   	}


    return m_SettingData;

  }
       
  //----------------------------------------------------------------------------
  // ManagedElement related methods
  //----------------------------------------------------------------------------
  unsigned int
  Linux_SambaCommonSecurityForGlobalInstanceName::isManagedElementSet() const {
    return isSet.ManagedElement;
  }

  //----------------------------------------------------------------------------
  void Linux_SambaCommonSecurityForGlobalInstanceName::setManagedElement(
    const Linux_SambaGlobalOptionsInstanceName& aValue) {
  
    m_ManagedElement = aValue;
    isSet.ManagedElement = 1;
  
  }       

  //----------------------------------------------------------------------------
  const Linux_SambaGlobalOptionsInstanceName&
  Linux_SambaCommonSecurityForGlobalInstanceName::getManagedElement() const {
    
    if ( ! isSet.ManagedElement) {
   	  throw CmpiErrorFormater::getErrorException(
   	    CmpiErrorFormater::NOT_SET,
        "ManagedElement",
        "Linux_SambaCommonSecurityForGlobal");
   	}


    return m_ManagedElement;

  }


  //---------------------------------------------------------------------------- 
  void 
  Linux_SambaCommonSecurityForGlobalInstanceName::init() {
  	
  	m_CIMClassNameP = "Linux_SambaCommonSecurityForGlobal";
  	isSet.m_nameSpaceP = 0; 
  	    isSet.SettingData = 0;
    isSet.ManagedElement = 0;

  	
  }
  
  //---------------------------------------------------------------------------- 
  //copies another instance properties in this
  //---------------------------------------------------------------------------- 
  void 
  Linux_SambaCommonSecurityForGlobalInstanceName::init(
    const Linux_SambaCommonSecurityForGlobalInstanceName& anOriginal) {
   	
   	init();
   	   	
    m_CIMClassNameP = anOriginal.m_CIMClassNameP;
    if (anOriginal.isNameSpaceSet()){
      setNamespace(anOriginal.getNamespace(),1);
    }
       	
    if (anOriginal.isSettingDataSet()) {
      const Linux_SambaCommonSecurityOptionsInstanceName& SettingDataOriginal = anOriginal.getSettingData();
      setSettingData(SettingDataOriginal);
    }
   	
    if (anOriginal.isManagedElementSet()) {
      const Linux_SambaGlobalOptionsInstanceName& ManagedElementOriginal = anOriginal.getManagedElement();
      setManagedElement(ManagedElementOriginal);
    }
    
  
  }
  
  //---------------------------------------------------------------------------- 
  void
  Linux_SambaCommonSecurityForGlobalInstanceName::reset() {
  	if (isSet.m_nameSpaceP) {
  	  delete(m_nameSpaceP);
  	}
  	  	  
  }
  
  //---------------------------------------------------------------------------- 
  Linux_SambaCommonSecurityForGlobalInstanceNameEnumerationElement::Linux_SambaCommonSecurityForGlobalInstanceNameEnumerationElement() {
  	m_elementP = 0;
  	m_nextP = 0; 
  }
  
  //---------------------------------------------------------------------------- 
  Linux_SambaCommonSecurityForGlobalInstanceNameEnumerationElement::~Linux_SambaCommonSecurityForGlobalInstanceNameEnumerationElement() {
   	
  	if (m_elementP) {
  	  delete(m_elementP);
  	}
  	if (m_nextP) {
  	  delete(m_nextP);
  	}
  	  
  }
  
  //---------------------------------------------------------------------------- 
  Linux_SambaCommonSecurityForGlobalInstanceNameEnumeration::Linux_SambaCommonSecurityForGlobalInstanceNameEnumeration() {
  	 m_firstElementP = 0;
     m_currentElementP = 0;
     m_endElementP = 0;
  }
  
  //---------------------------------------------------------------------------- 
  Linux_SambaCommonSecurityForGlobalInstanceNameEnumeration::Linux_SambaCommonSecurityForGlobalInstanceNameEnumeration(
    const CmpiArray& aCmpiArray) {
  	
  	m_firstElementP = 0;
    m_currentElementP = 0;
    m_endElementP = 0;
    
    int size = aCmpiArray.size();
    for (int x=0; x < size; ++x) {
      addElement(Linux_SambaCommonSecurityForGlobalInstanceName(aCmpiArray[x]));
    }
    
  }
  
  //---------------------------------------------------------------------------- 
  Linux_SambaCommonSecurityForGlobalInstanceNameEnumeration::Linux_SambaCommonSecurityForGlobalInstanceNameEnumeration(
    const Linux_SambaCommonSecurityForGlobalInstanceNameEnumeration& anInstanceNameEnumeration) {
   	
    m_firstElementP = 0;
    m_currentElementP = 0;
    m_endElementP = 0;
  	 
    int size = anInstanceNameEnumeration.getSize();
    for (int x=0; x < size; ++x) {
      addElement(anInstanceNameEnumeration.getElement(x));
    }

  }
  	  
  //---------------------------------------------------------------------------- 
  Linux_SambaCommonSecurityForGlobalInstanceNameEnumeration::~Linux_SambaCommonSecurityForGlobalInstanceNameEnumeration() {
   	
  	if (m_firstElementP) {
  	  delete(m_firstElementP);
  	}
  	  	
  }

  //---------------------------------------------------------------------------- 
  void 
  Linux_SambaCommonSecurityForGlobalInstanceNameEnumeration::reset() {
  	
  	m_currentElementP = m_firstElementP;
  
  }

  //---------------------------------------------------------------------------- 
  bool 
  Linux_SambaCommonSecurityForGlobalInstanceNameEnumeration::hasNext() const {
  	
  	return (m_currentElementP != 0);
  
  }
  
  //---------------------------------------------------------------------------- 
  int
  Linux_SambaCommonSecurityForGlobalInstanceNameEnumeration::getSize() const {
  	
    int size = 0;
    Linux_SambaCommonSecurityForGlobalInstanceNameEnumerationElement* followingP = m_firstElementP;
  	
  	while (followingP) {
      followingP = followingP->m_nextP;
      ++size;
    }
  	
    return size;
  
  }
  
  //---------------------------------------------------------------------------- 
  const Linux_SambaCommonSecurityForGlobalInstanceName&  
   Linux_SambaCommonSecurityForGlobalInstanceNameEnumeration::getElement(int anIndex) const {
   
    Linux_SambaCommonSecurityForGlobalInstanceNameEnumerationElement* followingP = m_firstElementP;
   
    int x=0;
    while (followingP && (x < anIndex) ) {
      followingP = followingP->m_nextP;
      ++x;
    }
    
    return *(followingP->m_elementP);
  
  }
  
  //---------------------------------------------------------------------------- 
  const Linux_SambaCommonSecurityForGlobalInstanceName&
  Linux_SambaCommonSecurityForGlobalInstanceNameEnumeration::getNext() {
   	
  	 Linux_SambaCommonSecurityForGlobalInstanceNameEnumerationElement* currentP = m_currentElementP;
  	 m_currentElementP = m_currentElementP->m_nextP;
  	 
  	 return *(currentP->m_elementP);
  
  }
  	  
  //---------------------------------------------------------------------------- 
  void Linux_SambaCommonSecurityForGlobalInstanceNameEnumeration::addElement
   (const Linux_SambaCommonSecurityForGlobalInstanceName& anElementP){
   	
  	if (m_firstElementP==0) {
  	  m_firstElementP = new Linux_SambaCommonSecurityForGlobalInstanceNameEnumerationElement();
  	  m_firstElementP->m_elementP = new Linux_SambaCommonSecurityForGlobalInstanceName(anElementP);
  	  m_endElementP = m_firstElementP;
  	  m_currentElementP = m_firstElementP;
  	} else {
  	  m_endElementP->m_nextP = new Linux_SambaCommonSecurityForGlobalInstanceNameEnumerationElement();
  	  m_endElementP = m_endElementP->m_nextP;
  	  m_endElementP->m_elementP=new Linux_SambaCommonSecurityForGlobalInstanceName(anElementP);
  	}

  }
  
  //---------------------------------------------------------------------------- 
  Linux_SambaCommonSecurityForGlobalInstanceNameEnumeration::operator CmpiArray() const {
  	int size = getSize();
   	CmpiArray cmpiArray = CmpiArray(size,CMPI_instance);
   	for (int x=0; x < size; ++x) {
   	  cmpiArray[x]=getElement(x).getObjectPath();
   	}
   	return cmpiArray;
  }
  
}
