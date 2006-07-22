// =======================================================================
// Linux_SambaPrinterBrowseForPrinterInstanceName.cpp
//     created on Mon, 26 Jun 2006 using ECUTE 2.2.1
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
#include "Linux_SambaPrinterBrowseForPrinterInstanceName.h"
#include "CmpiData.h"
#include "CmpiString.h"
#include "CmpiArray.h"
#include <string>

namespace genProvider {
	
  //****************************************************************************
  //Linux_SambaPrinterBrowseForPrinterInstanceName
  //---------------------------------------------------------------------------- 
  // empty constructor
  //---------------------------------------------------------------------------- 
  Linux_SambaPrinterBrowseForPrinterInstanceName::Linux_SambaPrinterBrowseForPrinterInstanceName() {
   	init();  	
  }
  
  //---------------------------------------------------------------------------- 
  // copy constructor	
  //---------------------------------------------------------------------------- 
  Linux_SambaPrinterBrowseForPrinterInstanceName::Linux_SambaPrinterBrowseForPrinterInstanceName(
    const Linux_SambaPrinterBrowseForPrinterInstanceName& anInstanceName) {
   	init(anInstanceName);  	
  }
  
  //---------------------------------------------------------------------------- 
  // constructor using CmpiObjectPath
  //---------------------------------------------------------------------------- 
  Linux_SambaPrinterBrowseForPrinterInstanceName::Linux_SambaPrinterBrowseForPrinterInstanceName(
    const CmpiObjectPath& path) {
    
    init();
    
    m_CIMClassNameP = path.getClassName().charPtr();
    
    CmpiString namespaceP;
    namespaceP = path.getNameSpace();
    setNamespace(namespaceP.charPtr(),1);
        
    CmpiObjectPath ManagedElement = path.getKey("ManagedElement");
    setManagedElement(Linux_SambaPrinterOptionsInstanceName(ManagedElement));
    
    CmpiObjectPath SettingData = path.getKey("SettingData");
    setSettingData(Linux_SambaPrinterBrowseOptionsInstanceName(SettingData));

    
  }
  
  //---------------------------------------------------------------------------- 
  // destructor
  //---------------------------------------------------------------------------- 
  Linux_SambaPrinterBrowseForPrinterInstanceName::~Linux_SambaPrinterBrowseForPrinterInstanceName() {
   	reset();  	  
  }
  
  //---------------------------------------------------------------------------- 
  //copy operator
  //---------------------------------------------------------------------------- 
  Linux_SambaPrinterBrowseForPrinterInstanceName&
  Linux_SambaPrinterBrowseForPrinterInstanceName::operator=(
    const Linux_SambaPrinterBrowseForPrinterInstanceName& anInstanceName) {    
    
    init(anInstanceName);
   	return *this;    
  
  }
  
  //---------------------------------------------------------------------------- 
  //returns the related CmpiObjectPath
  //---------------------------------------------------------------------------- 
  CmpiObjectPath 
  Linux_SambaPrinterBrowseForPrinterInstanceName::getObjectPath() const {
   	
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
  Linux_SambaPrinterBrowseForPrinterInstanceName::fillKeys(CmpiInstance& cmpiInstance) const {
  	
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
  Linux_SambaPrinterBrowseForPrinterInstanceName::isNameSpaceSet() const {
  	return isSet.m_nameSpaceP;
  }
  
  //---------------------------------------------------------------------------- 
  const char* 
  Linux_SambaPrinterBrowseForPrinterInstanceName::getNamespace() const {
    if ( ! isSet.m_nameSpaceP) {
   	  throw CmpiErrorFormater::getErrorException(
   	   CmpiErrorFormater::NOT_SET,
   	   "NameSpace",
   	   "Linux_SambaPrinterBrowseForPrinter");
   	}
  	return m_nameSpaceP;
  }

  //---------------------------------------------------------------------------- 
  void
  Linux_SambaPrinterBrowseForPrinterInstanceName::setNamespace(
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
  Linux_SambaPrinterBrowseForPrinterInstanceName::isManagedElementSet() const {
    return isSet.ManagedElement;
  }

  //----------------------------------------------------------------------------
  void Linux_SambaPrinterBrowseForPrinterInstanceName::setManagedElement(
    const Linux_SambaPrinterOptionsInstanceName& aValue) {
  
    m_ManagedElement = aValue;
    isSet.ManagedElement = 1;
  
  }       

  //----------------------------------------------------------------------------
  const Linux_SambaPrinterOptionsInstanceName&
  Linux_SambaPrinterBrowseForPrinterInstanceName::getManagedElement() const {
    
    if ( ! isSet.ManagedElement) {
   	  throw CmpiErrorFormater::getErrorException(
   	    CmpiErrorFormater::NOT_SET,
        "ManagedElement",
        "Linux_SambaPrinterBrowseForPrinter");
   	}


    return m_ManagedElement;

  }
       
  //----------------------------------------------------------------------------
  // SettingData related methods
  //----------------------------------------------------------------------------
  unsigned int
  Linux_SambaPrinterBrowseForPrinterInstanceName::isSettingDataSet() const {
    return isSet.SettingData;
  }

  //----------------------------------------------------------------------------
  void Linux_SambaPrinterBrowseForPrinterInstanceName::setSettingData(
    const Linux_SambaPrinterBrowseOptionsInstanceName& aValue) {
  
    m_SettingData = aValue;
    isSet.SettingData = 1;
  
  }       

  //----------------------------------------------------------------------------
  const Linux_SambaPrinterBrowseOptionsInstanceName&
  Linux_SambaPrinterBrowseForPrinterInstanceName::getSettingData() const {
    
    if ( ! isSet.SettingData) {
   	  throw CmpiErrorFormater::getErrorException(
   	    CmpiErrorFormater::NOT_SET,
        "SettingData",
        "Linux_SambaPrinterBrowseForPrinter");
   	}


    return m_SettingData;

  }


  //---------------------------------------------------------------------------- 
  void 
  Linux_SambaPrinterBrowseForPrinterInstanceName::init() {
  	
  	m_CIMClassNameP = "Linux_SambaPrinterBrowseForPrinter";
  	isSet.m_nameSpaceP = 0; 
  	    isSet.ManagedElement = 0;
    isSet.SettingData = 0;

  	
  }
  
  //---------------------------------------------------------------------------- 
  //copies another instance properties in this
  //---------------------------------------------------------------------------- 
  void 
  Linux_SambaPrinterBrowseForPrinterInstanceName::init(
    const Linux_SambaPrinterBrowseForPrinterInstanceName& anOriginal) {
   	
   	init();
   	   	
    m_CIMClassNameP = anOriginal.m_CIMClassNameP;
    if (anOriginal.isNameSpaceSet()){
      setNamespace(anOriginal.getNamespace(),1);
    }
       	
    if (anOriginal.isManagedElementSet()) {
      const Linux_SambaPrinterOptionsInstanceName& ManagedElementOriginal = anOriginal.getManagedElement();
      setManagedElement(ManagedElementOriginal);
    }
   	
    if (anOriginal.isSettingDataSet()) {
      const Linux_SambaPrinterBrowseOptionsInstanceName& SettingDataOriginal = anOriginal.getSettingData();
      setSettingData(SettingDataOriginal);
    }
    
  
  }
  
  //---------------------------------------------------------------------------- 
  void
  Linux_SambaPrinterBrowseForPrinterInstanceName::reset() {
  	if (isSet.m_nameSpaceP) {
  	  delete(m_nameSpaceP);
  	}
  	  	  
  }
  
  //---------------------------------------------------------------------------- 
  Linux_SambaPrinterBrowseForPrinterInstanceNameEnumerationElement::Linux_SambaPrinterBrowseForPrinterInstanceNameEnumerationElement() {
  	m_elementP = 0;
  	m_nextP = 0; 
  }
  
  //---------------------------------------------------------------------------- 
  Linux_SambaPrinterBrowseForPrinterInstanceNameEnumerationElement::~Linux_SambaPrinterBrowseForPrinterInstanceNameEnumerationElement() {
   	
  	if (m_elementP) {
  	  delete(m_elementP);
  	}
  	if (m_nextP) {
  	  delete(m_nextP);
  	}
  	  
  }
  
  //---------------------------------------------------------------------------- 
  Linux_SambaPrinterBrowseForPrinterInstanceNameEnumeration::Linux_SambaPrinterBrowseForPrinterInstanceNameEnumeration() {
  	 m_firstElementP = 0;
     m_currentElementP = 0;
     m_endElementP = 0;
  }
  
  //---------------------------------------------------------------------------- 
  Linux_SambaPrinterBrowseForPrinterInstanceNameEnumeration::Linux_SambaPrinterBrowseForPrinterInstanceNameEnumeration(
    const CmpiArray& aCmpiArray) {
  	
  	m_firstElementP = 0;
    m_currentElementP = 0;
    m_endElementP = 0;
    
    int size = aCmpiArray.size();
    for (int x=0; x < size; ++x) {
      addElement(Linux_SambaPrinterBrowseForPrinterInstanceName(aCmpiArray[x]));
    }
    
  }
  
  //---------------------------------------------------------------------------- 
  Linux_SambaPrinterBrowseForPrinterInstanceNameEnumeration::Linux_SambaPrinterBrowseForPrinterInstanceNameEnumeration(
    const Linux_SambaPrinterBrowseForPrinterInstanceNameEnumeration& anInstanceNameEnumeration) {
   	
    m_firstElementP = 0;
    m_currentElementP = 0;
    m_endElementP = 0;
  	 
    int size = anInstanceNameEnumeration.getSize();
    for (int x=0; x < size; ++x) {
      addElement(anInstanceNameEnumeration.getElement(x));
    }

  }
  	  
  //---------------------------------------------------------------------------- 
  Linux_SambaPrinterBrowseForPrinterInstanceNameEnumeration::~Linux_SambaPrinterBrowseForPrinterInstanceNameEnumeration() {
   	
  	if (m_firstElementP) {
  	  delete(m_firstElementP);
  	}
  	  	
  }

  //---------------------------------------------------------------------------- 
  void 
  Linux_SambaPrinterBrowseForPrinterInstanceNameEnumeration::reset() {
  	
  	m_currentElementP = m_firstElementP;
  
  }

  //---------------------------------------------------------------------------- 
  bool 
  Linux_SambaPrinterBrowseForPrinterInstanceNameEnumeration::hasNext() const {
  	
  	return (m_currentElementP != 0);
  
  }
  
  //---------------------------------------------------------------------------- 
  int
  Linux_SambaPrinterBrowseForPrinterInstanceNameEnumeration::getSize() const {
  	
    int size = 0;
    Linux_SambaPrinterBrowseForPrinterInstanceNameEnumerationElement* followingP = m_firstElementP;
  	
  	while (followingP) {
      followingP = followingP->m_nextP;
      ++size;
    }
  	
    return size;
  
  }
  
  //---------------------------------------------------------------------------- 
  const Linux_SambaPrinterBrowseForPrinterInstanceName&  
   Linux_SambaPrinterBrowseForPrinterInstanceNameEnumeration::getElement(int anIndex) const {
   
    Linux_SambaPrinterBrowseForPrinterInstanceNameEnumerationElement* followingP = m_firstElementP;
   
    int x=0;
    while (followingP && (x < anIndex) ) {
      followingP = followingP->m_nextP;
      ++x;
    }
    
    return *(followingP->m_elementP);
  
  }
  
  //---------------------------------------------------------------------------- 
  const Linux_SambaPrinterBrowseForPrinterInstanceName&
  Linux_SambaPrinterBrowseForPrinterInstanceNameEnumeration::getNext() {
   	
  	 Linux_SambaPrinterBrowseForPrinterInstanceNameEnumerationElement* currentP = m_currentElementP;
  	 m_currentElementP = m_currentElementP->m_nextP;
  	 
  	 return *(currentP->m_elementP);
  
  }
  	  
  //---------------------------------------------------------------------------- 
  void Linux_SambaPrinterBrowseForPrinterInstanceNameEnumeration::addElement
   (const Linux_SambaPrinterBrowseForPrinterInstanceName& anElementP){
   	
  	if (m_firstElementP==0) {
  	  m_firstElementP = new Linux_SambaPrinterBrowseForPrinterInstanceNameEnumerationElement();
  	  m_firstElementP->m_elementP = new Linux_SambaPrinterBrowseForPrinterInstanceName(anElementP);
  	  m_endElementP = m_firstElementP;
  	  m_currentElementP = m_firstElementP;
  	} else {
  	  m_endElementP->m_nextP = new Linux_SambaPrinterBrowseForPrinterInstanceNameEnumerationElement();
  	  m_endElementP = m_endElementP->m_nextP;
  	  m_endElementP->m_elementP=new Linux_SambaPrinterBrowseForPrinterInstanceName(anElementP);
  	}

  }
  
  //---------------------------------------------------------------------------- 
  Linux_SambaPrinterBrowseForPrinterInstanceNameEnumeration::operator CmpiArray() const {
  	int size = getSize();
   	CmpiArray cmpiArray = CmpiArray(size,CMPI_instance);
   	for (int x=0; x < size; ++x) {
   	  cmpiArray[x]=getElement(x).getObjectPath();
   	}
   	return cmpiArray;
  }
  
}
