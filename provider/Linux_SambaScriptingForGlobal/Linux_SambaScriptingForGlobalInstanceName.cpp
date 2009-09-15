// =======================================================================
// Linux_SambaScriptingForGlobalInstanceName.cpp
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
#include "Linux_SambaScriptingForGlobalInstanceName.h"
#include "CmpiData.h"
#include "CmpiString.h"
#include "CmpiArray.h"
#include <string>

namespace genProvider {
	
  //****************************************************************************
  //Linux_SambaScriptingForGlobalInstanceName
  //---------------------------------------------------------------------------- 
  // empty constructor
  //---------------------------------------------------------------------------- 
  Linux_SambaScriptingForGlobalInstanceName::Linux_SambaScriptingForGlobalInstanceName() {
   	init();  	
  }
  
  //---------------------------------------------------------------------------- 
  // copy constructor	
  //---------------------------------------------------------------------------- 
  Linux_SambaScriptingForGlobalInstanceName::Linux_SambaScriptingForGlobalInstanceName(
    const Linux_SambaScriptingForGlobalInstanceName& anInstanceName) {
   	init(anInstanceName);  	
  }
  
  //---------------------------------------------------------------------------- 
  // constructor using CmpiObjectPath
  //---------------------------------------------------------------------------- 
  Linux_SambaScriptingForGlobalInstanceName::Linux_SambaScriptingForGlobalInstanceName(
    const CmpiObjectPath& path) {
    
    init();
    
    m_CIMClassNameP = path.getClassName().charPtr();
    
    CmpiString namespaceP;
    namespaceP = path.getNameSpace();
    setNamespace(namespaceP.charPtr(),1);
        
    CmpiObjectPath ManagedElement = path.getKey("ManagedElement");
    setManagedElement(Linux_SambaGlobalOptionsInstanceName(ManagedElement));
    
    CmpiObjectPath SettingData = path.getKey("SettingData");
    setSettingData(Linux_SambaScriptingOptionsInstanceName(SettingData));

    
  }
  
  //---------------------------------------------------------------------------- 
  // destructor
  //---------------------------------------------------------------------------- 
  Linux_SambaScriptingForGlobalInstanceName::~Linux_SambaScriptingForGlobalInstanceName() {
   	reset();  	  
  }
  
  //---------------------------------------------------------------------------- 
  //copy operator
  //---------------------------------------------------------------------------- 
  Linux_SambaScriptingForGlobalInstanceName&
  Linux_SambaScriptingForGlobalInstanceName::operator=(
    const Linux_SambaScriptingForGlobalInstanceName& anInstanceName) {    
    
    init(anInstanceName);
   	return *this;    
  
  }
  
  //---------------------------------------------------------------------------- 
  //returns the related CmpiObjectPath
  //---------------------------------------------------------------------------- 
  CmpiObjectPath 
  Linux_SambaScriptingForGlobalInstanceName::getObjectPath() const {
   	
   	CmpiObjectPath objectPath(m_nameSpaceP, m_CIMClassNameP);
   	  	objectPath.setKey(
  	  "ManagedElement",
  	  CmpiData(m_ManagedElement.getObjectPath()));
  	objectPath.setKey(
  	  "SettingData",
  	  CmpiData(m_SettingData.getObjectPath()));

  	
  	return objectPath;
  	
  }
  
  //---------------------------------------------------------------------------- 
  // adds the related CmpiObjectPath to an existing cmpiInstance
  //---------------------------------------------------------------------------- 
  void 
  Linux_SambaScriptingForGlobalInstanceName::fillKeys(CmpiInstance& cmpiInstance) const {
  	
  	if (isSet.ManagedElement) {
  	  
  	  cmpiInstance.setProperty(
  	    "ManagedElement",
  	    CmpiData(m_ManagedElement.getObjectPath()));
  	}

  	if (isSet.SettingData) {
  	  
  	  cmpiInstance.setProperty(
  	    "SettingData",
  	    CmpiData(m_SettingData.getObjectPath()));
  	}

  }
  
  
  //---------------------------------------------------------------------------- 
  // NameSpace related methods
  //---------------------------------------------------------------------------- 
  unsigned int 
  Linux_SambaScriptingForGlobalInstanceName::isNameSpaceSet() const {
  	return isSet.m_nameSpaceP;
  }
  
  //---------------------------------------------------------------------------- 
  const char* 
  Linux_SambaScriptingForGlobalInstanceName::getNamespace() const {
    if ( ! isSet.m_nameSpaceP) {
   	  throw CmpiErrorFormater::getErrorException(
   	   CmpiErrorFormater::NOT_SET,
   	   "NameSpace",
   	   "Linux_SambaScriptingForGlobal");
   	}
  	return m_nameSpaceP;
  }

  //---------------------------------------------------------------------------- 
  void
  Linux_SambaScriptingForGlobalInstanceName::setNamespace(
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
  // ManagedElement related methods
  //----------------------------------------------------------------------------
  unsigned int
  Linux_SambaScriptingForGlobalInstanceName::isManagedElementSet() const {
    return isSet.ManagedElement;
  }

  //----------------------------------------------------------------------------
  void Linux_SambaScriptingForGlobalInstanceName::setManagedElement(
    const Linux_SambaGlobalOptionsInstanceName& aValue) {
  
    m_ManagedElement = aValue;
    isSet.ManagedElement = 1;
  
  }       

  //----------------------------------------------------------------------------
  const Linux_SambaGlobalOptionsInstanceName&
  Linux_SambaScriptingForGlobalInstanceName::getManagedElement() const {
    
    if ( ! isSet.ManagedElement) {
   	  throw CmpiErrorFormater::getErrorException(
   	    CmpiErrorFormater::NOT_SET,
        "ManagedElement",
        "Linux_SambaScriptingForGlobal");
   	}


    return m_ManagedElement;

  }
       
  //----------------------------------------------------------------------------
  // SettingData related methods
  //----------------------------------------------------------------------------
  unsigned int
  Linux_SambaScriptingForGlobalInstanceName::isSettingDataSet() const {
    return isSet.SettingData;
  }

  //----------------------------------------------------------------------------
  void Linux_SambaScriptingForGlobalInstanceName::setSettingData(
    const Linux_SambaScriptingOptionsInstanceName& aValue) {
  
    m_SettingData = aValue;
    isSet.SettingData = 1;
  
  }       

  //----------------------------------------------------------------------------
  const Linux_SambaScriptingOptionsInstanceName&
  Linux_SambaScriptingForGlobalInstanceName::getSettingData() const {
    
    if ( ! isSet.SettingData) {
   	  throw CmpiErrorFormater::getErrorException(
   	    CmpiErrorFormater::NOT_SET,
        "SettingData",
        "Linux_SambaScriptingForGlobal");
   	}


    return m_SettingData;

  }


  //---------------------------------------------------------------------------- 
  void 
  Linux_SambaScriptingForGlobalInstanceName::init() {
  	
  	m_CIMClassNameP = "Linux_SambaScriptingForGlobal";
  	isSet.m_nameSpaceP = 0; 
  	    isSet.ManagedElement = 0;
    isSet.SettingData = 0;

  	
  }
  
  //---------------------------------------------------------------------------- 
  //copies another instance properties in this
  //---------------------------------------------------------------------------- 
  void 
  Linux_SambaScriptingForGlobalInstanceName::init(
    const Linux_SambaScriptingForGlobalInstanceName& anOriginal) {
   	
   	init();
   	   	
    m_CIMClassNameP = anOriginal.m_CIMClassNameP;
    if (anOriginal.isNameSpaceSet()){
      setNamespace(anOriginal.getNamespace(),1);
    }
       	
    if (anOriginal.isManagedElementSet()) {
      const Linux_SambaGlobalOptionsInstanceName& ManagedElementOriginal = anOriginal.getManagedElement();
      setManagedElement(ManagedElementOriginal);
    }
   	
    if (anOriginal.isSettingDataSet()) {
      const Linux_SambaScriptingOptionsInstanceName& SettingDataOriginal = anOriginal.getSettingData();
      setSettingData(SettingDataOriginal);
    }
    
  
  }
  
  //---------------------------------------------------------------------------- 
  void
  Linux_SambaScriptingForGlobalInstanceName::reset() {
  	if (isSet.m_nameSpaceP) {
  	  delete(m_nameSpaceP);
  	}
  	  	  
  }
  
  //---------------------------------------------------------------------------- 
  Linux_SambaScriptingForGlobalInstanceNameEnumerationElement::Linux_SambaScriptingForGlobalInstanceNameEnumerationElement() {
  	m_elementP = 0;
  	m_nextP = 0; 
  }
  
  //---------------------------------------------------------------------------- 
  Linux_SambaScriptingForGlobalInstanceNameEnumerationElement::~Linux_SambaScriptingForGlobalInstanceNameEnumerationElement() {
   	
  	if (m_elementP) {
  	  delete(m_elementP);
  	}
  	if (m_nextP) {
  	  delete(m_nextP);
  	}
  	  
  }
  
  //---------------------------------------------------------------------------- 
  Linux_SambaScriptingForGlobalInstanceNameEnumeration::Linux_SambaScriptingForGlobalInstanceNameEnumeration() {
  	 m_firstElementP = 0;
     m_currentElementP = 0;
     m_endElementP = 0;
  }
  
  //---------------------------------------------------------------------------- 
  Linux_SambaScriptingForGlobalInstanceNameEnumeration::Linux_SambaScriptingForGlobalInstanceNameEnumeration(
    const CmpiArray& aCmpiArray) {
  	
  	m_firstElementP = 0;
    m_currentElementP = 0;
    m_endElementP = 0;
    
    int size = aCmpiArray.size();
    for (int x=0; x < size; ++x) {
      addElement(Linux_SambaScriptingForGlobalInstanceName(aCmpiArray[x]));
    }
    
  }
  
  //---------------------------------------------------------------------------- 
  Linux_SambaScriptingForGlobalInstanceNameEnumeration::Linux_SambaScriptingForGlobalInstanceNameEnumeration(
    const Linux_SambaScriptingForGlobalInstanceNameEnumeration& anInstanceNameEnumeration) {
   	
    m_firstElementP = 0;
    m_currentElementP = 0;
    m_endElementP = 0;
  	 
    int size = anInstanceNameEnumeration.getSize();
    for (int x=0; x < size; ++x) {
      addElement(anInstanceNameEnumeration.getElement(x));
    }

  }
  	  
  //---------------------------------------------------------------------------- 
  Linux_SambaScriptingForGlobalInstanceNameEnumeration::~Linux_SambaScriptingForGlobalInstanceNameEnumeration() {
   	
  	if (m_firstElementP) {
  	  delete(m_firstElementP);
  	}
  	  	
  }

  //---------------------------------------------------------------------------- 
  void 
  Linux_SambaScriptingForGlobalInstanceNameEnumeration::reset() {
  	
  	m_currentElementP = m_firstElementP;
  
  }

  //---------------------------------------------------------------------------- 
  bool 
  Linux_SambaScriptingForGlobalInstanceNameEnumeration::hasNext() const {
  	
  	return (m_currentElementP != 0);
  
  }
  
  //---------------------------------------------------------------------------- 
  int
  Linux_SambaScriptingForGlobalInstanceNameEnumeration::getSize() const {
  	
    int size = 0;
    Linux_SambaScriptingForGlobalInstanceNameEnumerationElement* followingP = m_firstElementP;
  	
  	while (followingP) {
      followingP = followingP->m_nextP;
      ++size;
    }
  	
    return size;
  
  }
  
  //---------------------------------------------------------------------------- 
  const Linux_SambaScriptingForGlobalInstanceName&  
   Linux_SambaScriptingForGlobalInstanceNameEnumeration::getElement(int anIndex) const {
   
    Linux_SambaScriptingForGlobalInstanceNameEnumerationElement* followingP = m_firstElementP;
   
    int x=0;
    while (followingP && (x < anIndex) ) {
      followingP = followingP->m_nextP;
      ++x;
    }
    
    return *(followingP->m_elementP);
  
  }
  
  //---------------------------------------------------------------------------- 
  const Linux_SambaScriptingForGlobalInstanceName&
  Linux_SambaScriptingForGlobalInstanceNameEnumeration::getNext() {
   	
  	 Linux_SambaScriptingForGlobalInstanceNameEnumerationElement* currentP = m_currentElementP;
  	 m_currentElementP = m_currentElementP->m_nextP;
  	 
  	 return *(currentP->m_elementP);
  
  }
  	  
  //---------------------------------------------------------------------------- 
  void Linux_SambaScriptingForGlobalInstanceNameEnumeration::addElement
   (const Linux_SambaScriptingForGlobalInstanceName& anElementP){
   	
  	if (m_firstElementP==0) {
  	  m_firstElementP = new Linux_SambaScriptingForGlobalInstanceNameEnumerationElement();
  	  m_firstElementP->m_elementP = new Linux_SambaScriptingForGlobalInstanceName(anElementP);
  	  m_endElementP = m_firstElementP;
  	  m_currentElementP = m_firstElementP;
  	} else {
  	  m_endElementP->m_nextP = new Linux_SambaScriptingForGlobalInstanceNameEnumerationElement();
  	  m_endElementP = m_endElementP->m_nextP;
  	  m_endElementP->m_elementP=new Linux_SambaScriptingForGlobalInstanceName(anElementP);
  	}

  }
  
  //---------------------------------------------------------------------------- 
  Linux_SambaScriptingForGlobalInstanceNameEnumeration::operator CmpiArray() const {
  	int size = getSize();
   	CmpiArray cmpiArray = CmpiArray(size,CMPI_instance);
   	for (int x=0; x < size; ++x) {
   	  cmpiArray[x]=getElement(x).getObjectPath();
   	}
   	return cmpiArray;
  }
  
}
