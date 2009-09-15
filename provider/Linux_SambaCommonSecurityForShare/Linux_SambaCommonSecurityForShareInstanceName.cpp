// =======================================================================
// Linux_SambaCommonSecurityForShareInstanceName.cpp
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
#include "Linux_SambaCommonSecurityForShareInstanceName.h"
#include "CmpiData.h"
#include "CmpiString.h"
#include "CmpiArray.h"
#include <string>

namespace genProvider {
	
  //****************************************************************************
  //Linux_SambaCommonSecurityForShareInstanceName
  //---------------------------------------------------------------------------- 
  // empty constructor
  //---------------------------------------------------------------------------- 
  Linux_SambaCommonSecurityForShareInstanceName::Linux_SambaCommonSecurityForShareInstanceName() {
   	init();  	
  }
  
  //---------------------------------------------------------------------------- 
  // copy constructor	
  //---------------------------------------------------------------------------- 
  Linux_SambaCommonSecurityForShareInstanceName::Linux_SambaCommonSecurityForShareInstanceName(
    const Linux_SambaCommonSecurityForShareInstanceName& anInstanceName) {
   	init(anInstanceName);  	
  }
  
  //---------------------------------------------------------------------------- 
  // constructor using CmpiObjectPath
  //---------------------------------------------------------------------------- 
  Linux_SambaCommonSecurityForShareInstanceName::Linux_SambaCommonSecurityForShareInstanceName(
    const CmpiObjectPath& path) {
    
    init();
    
    m_CIMClassNameP = path.getClassName().charPtr();
    
    CmpiString namespaceP;
    namespaceP = path.getNameSpace();
    setNamespace(namespaceP.charPtr(),1);
        
    CmpiObjectPath SettingData = path.getKey("SettingData");
    setSettingData(Linux_SambaCommonSecurityOptionsInstanceName(SettingData));
    
    CmpiObjectPath ManagedElement = path.getKey("ManagedElement");
    setManagedElement(Linux_SambaShareOptionsInstanceName(ManagedElement));

    
  }
  
  //---------------------------------------------------------------------------- 
  // destructor
  //---------------------------------------------------------------------------- 
  Linux_SambaCommonSecurityForShareInstanceName::~Linux_SambaCommonSecurityForShareInstanceName() {
   	reset();  	  
  }
  
  //---------------------------------------------------------------------------- 
  //copy operator
  //---------------------------------------------------------------------------- 
  Linux_SambaCommonSecurityForShareInstanceName&
  Linux_SambaCommonSecurityForShareInstanceName::operator=(
    const Linux_SambaCommonSecurityForShareInstanceName& anInstanceName) {    
    
    init(anInstanceName);
   	return *this;    
  
  }
  
  //---------------------------------------------------------------------------- 
  //returns the related CmpiObjectPath
  //---------------------------------------------------------------------------- 
  CmpiObjectPath 
  Linux_SambaCommonSecurityForShareInstanceName::getObjectPath() const {
   	
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
  Linux_SambaCommonSecurityForShareInstanceName::fillKeys(CmpiInstance& cmpiInstance) const {
  	
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
  Linux_SambaCommonSecurityForShareInstanceName::isNameSpaceSet() const {
  	return isSet.m_nameSpaceP;
  }
  
  //---------------------------------------------------------------------------- 
  const char* 
  Linux_SambaCommonSecurityForShareInstanceName::getNamespace() const {
    if ( ! isSet.m_nameSpaceP) {
   	  throw CmpiErrorFormater::getErrorException(
   	   CmpiErrorFormater::NOT_SET,
   	   "NameSpace",
   	   "Linux_SambaCommonSecurityForShare");
   	}
  	return m_nameSpaceP;
  }

  //---------------------------------------------------------------------------- 
  void
  Linux_SambaCommonSecurityForShareInstanceName::setNamespace(
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
  Linux_SambaCommonSecurityForShareInstanceName::isSettingDataSet() const {
    return isSet.SettingData;
  }

  //----------------------------------------------------------------------------
  void Linux_SambaCommonSecurityForShareInstanceName::setSettingData(
    const Linux_SambaCommonSecurityOptionsInstanceName& aValue) {
  
    m_SettingData = aValue;
    isSet.SettingData = 1;
  
  }       

  //----------------------------------------------------------------------------
  const Linux_SambaCommonSecurityOptionsInstanceName&
  Linux_SambaCommonSecurityForShareInstanceName::getSettingData() const {
    
    if ( ! isSet.SettingData) {
   	  throw CmpiErrorFormater::getErrorException(
   	    CmpiErrorFormater::NOT_SET,
        "SettingData",
        "Linux_SambaCommonSecurityForShare");
   	}


    return m_SettingData;

  }
       
  //----------------------------------------------------------------------------
  // ManagedElement related methods
  //----------------------------------------------------------------------------
  unsigned int
  Linux_SambaCommonSecurityForShareInstanceName::isManagedElementSet() const {
    return isSet.ManagedElement;
  }

  //----------------------------------------------------------------------------
  void Linux_SambaCommonSecurityForShareInstanceName::setManagedElement(
    const Linux_SambaShareOptionsInstanceName& aValue) {
  
    m_ManagedElement = aValue;
    isSet.ManagedElement = 1;
  
  }       

  //----------------------------------------------------------------------------
  const Linux_SambaShareOptionsInstanceName&
  Linux_SambaCommonSecurityForShareInstanceName::getManagedElement() const {
    
    if ( ! isSet.ManagedElement) {
   	  throw CmpiErrorFormater::getErrorException(
   	    CmpiErrorFormater::NOT_SET,
        "ManagedElement",
        "Linux_SambaCommonSecurityForShare");
   	}


    return m_ManagedElement;

  }


  //---------------------------------------------------------------------------- 
  void 
  Linux_SambaCommonSecurityForShareInstanceName::init() {
  	
  	m_CIMClassNameP = "Linux_SambaCommonSecurityForShare";
  	isSet.m_nameSpaceP = 0; 
  	    isSet.SettingData = 0;
    isSet.ManagedElement = 0;

  	
  }
  
  //---------------------------------------------------------------------------- 
  //copies another instance properties in this
  //---------------------------------------------------------------------------- 
  void 
  Linux_SambaCommonSecurityForShareInstanceName::init(
    const Linux_SambaCommonSecurityForShareInstanceName& anOriginal) {
   	
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
      const Linux_SambaShareOptionsInstanceName& ManagedElementOriginal = anOriginal.getManagedElement();
      setManagedElement(ManagedElementOriginal);
    }
    
  
  }
  
  //---------------------------------------------------------------------------- 
  void
  Linux_SambaCommonSecurityForShareInstanceName::reset() {
  	if (isSet.m_nameSpaceP) {
  	  delete(m_nameSpaceP);
  	}
  	  	  
  }
  
  //---------------------------------------------------------------------------- 
  Linux_SambaCommonSecurityForShareInstanceNameEnumerationElement::Linux_SambaCommonSecurityForShareInstanceNameEnumerationElement() {
  	m_elementP = 0;
  	m_nextP = 0; 
  }
  
  //---------------------------------------------------------------------------- 
  Linux_SambaCommonSecurityForShareInstanceNameEnumerationElement::~Linux_SambaCommonSecurityForShareInstanceNameEnumerationElement() {
   	
  	if (m_elementP) {
  	  delete(m_elementP);
  	}
  	if (m_nextP) {
  	  delete(m_nextP);
  	}
  	  
  }
  
  //---------------------------------------------------------------------------- 
  Linux_SambaCommonSecurityForShareInstanceNameEnumeration::Linux_SambaCommonSecurityForShareInstanceNameEnumeration() {
  	 m_firstElementP = 0;
     m_currentElementP = 0;
     m_endElementP = 0;
  }
  
  //---------------------------------------------------------------------------- 
  Linux_SambaCommonSecurityForShareInstanceNameEnumeration::Linux_SambaCommonSecurityForShareInstanceNameEnumeration(
    const CmpiArray& aCmpiArray) {
  	
  	m_firstElementP = 0;
    m_currentElementP = 0;
    m_endElementP = 0;
    
    int size = aCmpiArray.size();
    for (int x=0; x < size; ++x) {
      addElement(Linux_SambaCommonSecurityForShareInstanceName(aCmpiArray[x]));
    }
    
  }
  
  //---------------------------------------------------------------------------- 
  Linux_SambaCommonSecurityForShareInstanceNameEnumeration::Linux_SambaCommonSecurityForShareInstanceNameEnumeration(
    const Linux_SambaCommonSecurityForShareInstanceNameEnumeration& anInstanceNameEnumeration) {
   	
    m_firstElementP = 0;
    m_currentElementP = 0;
    m_endElementP = 0;
  	 
    int size = anInstanceNameEnumeration.getSize();
    for (int x=0; x < size; ++x) {
      addElement(anInstanceNameEnumeration.getElement(x));
    }

  }
  	  
  //---------------------------------------------------------------------------- 
  Linux_SambaCommonSecurityForShareInstanceNameEnumeration::~Linux_SambaCommonSecurityForShareInstanceNameEnumeration() {
   	
  	if (m_firstElementP) {
  	  delete(m_firstElementP);
  	}
  	  	
  }

  //---------------------------------------------------------------------------- 
  void 
  Linux_SambaCommonSecurityForShareInstanceNameEnumeration::reset() {
  	
  	m_currentElementP = m_firstElementP;
  
  }

  //---------------------------------------------------------------------------- 
  bool 
  Linux_SambaCommonSecurityForShareInstanceNameEnumeration::hasNext() const {
  	
  	return (m_currentElementP != 0);
  
  }
  
  //---------------------------------------------------------------------------- 
  int
  Linux_SambaCommonSecurityForShareInstanceNameEnumeration::getSize() const {
  	
    int size = 0;
    Linux_SambaCommonSecurityForShareInstanceNameEnumerationElement* followingP = m_firstElementP;
  	
  	while (followingP) {
      followingP = followingP->m_nextP;
      ++size;
    }
  	
    return size;
  
  }
  
  //---------------------------------------------------------------------------- 
  const Linux_SambaCommonSecurityForShareInstanceName&  
   Linux_SambaCommonSecurityForShareInstanceNameEnumeration::getElement(int anIndex) const {
   
    Linux_SambaCommonSecurityForShareInstanceNameEnumerationElement* followingP = m_firstElementP;
   
    int x=0;
    while (followingP && (x < anIndex) ) {
      followingP = followingP->m_nextP;
      ++x;
    }
    
    return *(followingP->m_elementP);
  
  }
  
  //---------------------------------------------------------------------------- 
  const Linux_SambaCommonSecurityForShareInstanceName&
  Linux_SambaCommonSecurityForShareInstanceNameEnumeration::getNext() {
   	
  	 Linux_SambaCommonSecurityForShareInstanceNameEnumerationElement* currentP = m_currentElementP;
  	 m_currentElementP = m_currentElementP->m_nextP;
  	 
  	 return *(currentP->m_elementP);
  
  }
  	  
  //---------------------------------------------------------------------------- 
  void Linux_SambaCommonSecurityForShareInstanceNameEnumeration::addElement
   (const Linux_SambaCommonSecurityForShareInstanceName& anElementP){
   	
  	if (m_firstElementP==0) {
  	  m_firstElementP = new Linux_SambaCommonSecurityForShareInstanceNameEnumerationElement();
  	  m_firstElementP->m_elementP = new Linux_SambaCommonSecurityForShareInstanceName(anElementP);
  	  m_endElementP = m_firstElementP;
  	  m_currentElementP = m_firstElementP;
  	} else {
  	  m_endElementP->m_nextP = new Linux_SambaCommonSecurityForShareInstanceNameEnumerationElement();
  	  m_endElementP = m_endElementP->m_nextP;
  	  m_endElementP->m_elementP=new Linux_SambaCommonSecurityForShareInstanceName(anElementP);
  	}

  }
  
  //---------------------------------------------------------------------------- 
  Linux_SambaCommonSecurityForShareInstanceNameEnumeration::operator CmpiArray() const {
  	int size = getSize();
   	CmpiArray cmpiArray = CmpiArray(size,CMPI_instance);
   	for (int x=0; x < size; ++x) {
   	  cmpiArray[x]=getElement(x).getObjectPath();
   	}
   	return cmpiArray;
  }
  
}
