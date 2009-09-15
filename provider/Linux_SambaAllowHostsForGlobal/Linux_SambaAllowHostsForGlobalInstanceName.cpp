// =======================================================================
// Linux_SambaAllowHostsForGlobalInstanceName.cpp
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
#include "Linux_SambaAllowHostsForGlobalInstanceName.h"
#include "CmpiData.h"
#include "CmpiString.h"
#include "CmpiArray.h"
#include <string>

namespace genProvider {
	
  //****************************************************************************
  //Linux_SambaAllowHostsForGlobalInstanceName
  //---------------------------------------------------------------------------- 
  // empty constructor
  //---------------------------------------------------------------------------- 
  Linux_SambaAllowHostsForGlobalInstanceName::Linux_SambaAllowHostsForGlobalInstanceName() {
   	init();  	
  }
  
  //---------------------------------------------------------------------------- 
  // copy constructor	
  //---------------------------------------------------------------------------- 
  Linux_SambaAllowHostsForGlobalInstanceName::Linux_SambaAllowHostsForGlobalInstanceName(
    const Linux_SambaAllowHostsForGlobalInstanceName& anInstanceName) {
   	init(anInstanceName);  	
  }
  
  //---------------------------------------------------------------------------- 
  // constructor using CmpiObjectPath
  //---------------------------------------------------------------------------- 
  Linux_SambaAllowHostsForGlobalInstanceName::Linux_SambaAllowHostsForGlobalInstanceName(
    const CmpiObjectPath& path) {
    
    init();
    
    m_CIMClassNameP = path.getClassName().charPtr();
    
    CmpiString namespaceP;
    namespaceP = path.getNameSpace();
    setNamespace(namespaceP.charPtr(),1);
        
    CmpiObjectPath PartComponent = path.getKey("PartComponent");
    setPartComponent(Linux_SambaHostInstanceName(PartComponent));
    
    CmpiObjectPath GroupComponent = path.getKey("GroupComponent");
    setGroupComponent(Linux_SambaGlobalOptionsInstanceName(GroupComponent));

    
  }
  
  //---------------------------------------------------------------------------- 
  // destructor
  //---------------------------------------------------------------------------- 
  Linux_SambaAllowHostsForGlobalInstanceName::~Linux_SambaAllowHostsForGlobalInstanceName() {
   	reset();  	  
  }
  
  //---------------------------------------------------------------------------- 
  //copy operator
  //---------------------------------------------------------------------------- 
  Linux_SambaAllowHostsForGlobalInstanceName&
  Linux_SambaAllowHostsForGlobalInstanceName::operator=(
    const Linux_SambaAllowHostsForGlobalInstanceName& anInstanceName) {    
    
    init(anInstanceName);
   	return *this;    
  
  }
  
  //---------------------------------------------------------------------------- 
  //returns the related CmpiObjectPath
  //---------------------------------------------------------------------------- 
  CmpiObjectPath 
  Linux_SambaAllowHostsForGlobalInstanceName::getObjectPath() const {
   	
   	CmpiObjectPath objectPath(m_nameSpaceP, m_CIMClassNameP);
   	  	objectPath.setKey(
  	  "PartComponent",
  	  CmpiData(m_PartComponent.getObjectPath()));
  	objectPath.setKey(
  	  "GroupComponent",
  	  CmpiData(m_GroupComponent.getObjectPath()));

  	
  	return objectPath;
  	
  }
  
  //---------------------------------------------------------------------------- 
  // adds the related CmpiObjectPath to an existing cmpiInstance
  //---------------------------------------------------------------------------- 
  void 
  Linux_SambaAllowHostsForGlobalInstanceName::fillKeys(CmpiInstance& cmpiInstance) const {
  	
  	if (isSet.PartComponent) {
  	  
  	  cmpiInstance.setProperty(
  	    "PartComponent",
  	    CmpiData(m_PartComponent.getObjectPath()));
  	}

  	if (isSet.GroupComponent) {
  	  
  	  cmpiInstance.setProperty(
  	    "GroupComponent",
  	    CmpiData(m_GroupComponent.getObjectPath()));
  	}

  }
  
  
  //---------------------------------------------------------------------------- 
  // NameSpace related methods
  //---------------------------------------------------------------------------- 
  unsigned int 
  Linux_SambaAllowHostsForGlobalInstanceName::isNameSpaceSet() const {
  	return isSet.m_nameSpaceP;
  }
  
  //---------------------------------------------------------------------------- 
  const char* 
  Linux_SambaAllowHostsForGlobalInstanceName::getNamespace() const {
    if ( ! isSet.m_nameSpaceP) {
   	  throw CmpiErrorFormater::getErrorException(
   	   CmpiErrorFormater::NOT_SET,
   	   "NameSpace",
   	   "Linux_SambaAllowHostsForGlobal");
   	}
  	return m_nameSpaceP;
  }

  //---------------------------------------------------------------------------- 
  void
  Linux_SambaAllowHostsForGlobalInstanceName::setNamespace(
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
  // PartComponent related methods
  //----------------------------------------------------------------------------
  unsigned int
  Linux_SambaAllowHostsForGlobalInstanceName::isPartComponentSet() const {
    return isSet.PartComponent;
  }

  //----------------------------------------------------------------------------
  void Linux_SambaAllowHostsForGlobalInstanceName::setPartComponent(
    const Linux_SambaHostInstanceName& aValue) {
  
    m_PartComponent = aValue;
    isSet.PartComponent = 1;
  
  }       

  //----------------------------------------------------------------------------
  const Linux_SambaHostInstanceName&
  Linux_SambaAllowHostsForGlobalInstanceName::getPartComponent() const {
    
    if ( ! isSet.PartComponent) {
   	  throw CmpiErrorFormater::getErrorException(
   	    CmpiErrorFormater::NOT_SET,
        "PartComponent",
        "Linux_SambaAllowHostsForGlobal");
   	}


    return m_PartComponent;

  }
       
  //----------------------------------------------------------------------------
  // GroupComponent related methods
  //----------------------------------------------------------------------------
  unsigned int
  Linux_SambaAllowHostsForGlobalInstanceName::isGroupComponentSet() const {
    return isSet.GroupComponent;
  }

  //----------------------------------------------------------------------------
  void Linux_SambaAllowHostsForGlobalInstanceName::setGroupComponent(
    const Linux_SambaGlobalOptionsInstanceName& aValue) {
  
    m_GroupComponent = aValue;
    isSet.GroupComponent = 1;
  
  }       

  //----------------------------------------------------------------------------
  const Linux_SambaGlobalOptionsInstanceName&
  Linux_SambaAllowHostsForGlobalInstanceName::getGroupComponent() const {
    
    if ( ! isSet.GroupComponent) {
   	  throw CmpiErrorFormater::getErrorException(
   	    CmpiErrorFormater::NOT_SET,
        "GroupComponent",
        "Linux_SambaAllowHostsForGlobal");
   	}


    return m_GroupComponent;

  }


  //---------------------------------------------------------------------------- 
  void 
  Linux_SambaAllowHostsForGlobalInstanceName::init() {
  	
  	m_CIMClassNameP = "Linux_SambaAllowHostsForGlobal";
  	isSet.m_nameSpaceP = 0; 
  	    isSet.PartComponent = 0;
    isSet.GroupComponent = 0;

  	
  }
  
  //---------------------------------------------------------------------------- 
  //copies another instance properties in this
  //---------------------------------------------------------------------------- 
  void 
  Linux_SambaAllowHostsForGlobalInstanceName::init(
    const Linux_SambaAllowHostsForGlobalInstanceName& anOriginal) {
   	
   	init();
   	   	
    m_CIMClassNameP = anOriginal.m_CIMClassNameP;
    if (anOriginal.isNameSpaceSet()){
      setNamespace(anOriginal.getNamespace(),1);
    }
       	
    if (anOriginal.isPartComponentSet()) {
      const Linux_SambaHostInstanceName& PartComponentOriginal = anOriginal.getPartComponent();
      setPartComponent(PartComponentOriginal);
    }
   	
    if (anOriginal.isGroupComponentSet()) {
      const Linux_SambaGlobalOptionsInstanceName& GroupComponentOriginal = anOriginal.getGroupComponent();
      setGroupComponent(GroupComponentOriginal);
    }
    
  
  }
  
  //---------------------------------------------------------------------------- 
  void
  Linux_SambaAllowHostsForGlobalInstanceName::reset() {
  	if (isSet.m_nameSpaceP) {
  	  delete(m_nameSpaceP);
  	}
  	  	  
  }
  
  //---------------------------------------------------------------------------- 
  Linux_SambaAllowHostsForGlobalInstanceNameEnumerationElement::Linux_SambaAllowHostsForGlobalInstanceNameEnumerationElement() {
  	m_elementP = 0;
  	m_nextP = 0; 
  }
  
  //---------------------------------------------------------------------------- 
  Linux_SambaAllowHostsForGlobalInstanceNameEnumerationElement::~Linux_SambaAllowHostsForGlobalInstanceNameEnumerationElement() {
   	
  	if (m_elementP) {
  	  delete(m_elementP);
  	}
  	if (m_nextP) {
  	  delete(m_nextP);
  	}
  	  
  }
  
  //---------------------------------------------------------------------------- 
  Linux_SambaAllowHostsForGlobalInstanceNameEnumeration::Linux_SambaAllowHostsForGlobalInstanceNameEnumeration() {
  	 m_firstElementP = 0;
     m_currentElementP = 0;
     m_endElementP = 0;
  }
  
  //---------------------------------------------------------------------------- 
  Linux_SambaAllowHostsForGlobalInstanceNameEnumeration::Linux_SambaAllowHostsForGlobalInstanceNameEnumeration(
    const CmpiArray& aCmpiArray) {
  	
  	m_firstElementP = 0;
    m_currentElementP = 0;
    m_endElementP = 0;
    
    int size = aCmpiArray.size();
    for (int x=0; x < size; ++x) {
      addElement(Linux_SambaAllowHostsForGlobalInstanceName(aCmpiArray[x]));
    }
    
  }
  
  //---------------------------------------------------------------------------- 
  Linux_SambaAllowHostsForGlobalInstanceNameEnumeration::Linux_SambaAllowHostsForGlobalInstanceNameEnumeration(
    const Linux_SambaAllowHostsForGlobalInstanceNameEnumeration& anInstanceNameEnumeration) {
   	
    m_firstElementP = 0;
    m_currentElementP = 0;
    m_endElementP = 0;
  	 
    int size = anInstanceNameEnumeration.getSize();
    for (int x=0; x < size; ++x) {
      addElement(anInstanceNameEnumeration.getElement(x));
    }

  }
  	  
  //---------------------------------------------------------------------------- 
  Linux_SambaAllowHostsForGlobalInstanceNameEnumeration::~Linux_SambaAllowHostsForGlobalInstanceNameEnumeration() {
   	
  	if (m_firstElementP) {
  	  delete(m_firstElementP);
  	}
  	  	
  }

  //---------------------------------------------------------------------------- 
  void 
  Linux_SambaAllowHostsForGlobalInstanceNameEnumeration::reset() {
  	
  	m_currentElementP = m_firstElementP;
  
  }

  //---------------------------------------------------------------------------- 
  bool 
  Linux_SambaAllowHostsForGlobalInstanceNameEnumeration::hasNext() const {
  	
  	return (m_currentElementP != 0);
  
  }
  
  //---------------------------------------------------------------------------- 
  int
  Linux_SambaAllowHostsForGlobalInstanceNameEnumeration::getSize() const {
  	
    int size = 0;
    Linux_SambaAllowHostsForGlobalInstanceNameEnumerationElement* followingP = m_firstElementP;
  	
  	while (followingP) {
      followingP = followingP->m_nextP;
      ++size;
    }
  	
    return size;
  
  }
  
  //---------------------------------------------------------------------------- 
  const Linux_SambaAllowHostsForGlobalInstanceName&  
   Linux_SambaAllowHostsForGlobalInstanceNameEnumeration::getElement(int anIndex) const {
   
    Linux_SambaAllowHostsForGlobalInstanceNameEnumerationElement* followingP = m_firstElementP;
   
    int x=0;
    while (followingP && (x < anIndex) ) {
      followingP = followingP->m_nextP;
      ++x;
    }
    
    return *(followingP->m_elementP);
  
  }
  
  //---------------------------------------------------------------------------- 
  const Linux_SambaAllowHostsForGlobalInstanceName&
  Linux_SambaAllowHostsForGlobalInstanceNameEnumeration::getNext() {
   	
  	 Linux_SambaAllowHostsForGlobalInstanceNameEnumerationElement* currentP = m_currentElementP;
  	 m_currentElementP = m_currentElementP->m_nextP;
  	 
  	 return *(currentP->m_elementP);
  
  }
  	  
  //---------------------------------------------------------------------------- 
  void Linux_SambaAllowHostsForGlobalInstanceNameEnumeration::addElement
   (const Linux_SambaAllowHostsForGlobalInstanceName& anElementP){
   	
  	if (m_firstElementP==0) {
  	  m_firstElementP = new Linux_SambaAllowHostsForGlobalInstanceNameEnumerationElement();
  	  m_firstElementP->m_elementP = new Linux_SambaAllowHostsForGlobalInstanceName(anElementP);
  	  m_endElementP = m_firstElementP;
  	  m_currentElementP = m_firstElementP;
  	} else {
  	  m_endElementP->m_nextP = new Linux_SambaAllowHostsForGlobalInstanceNameEnumerationElement();
  	  m_endElementP = m_endElementP->m_nextP;
  	  m_endElementP->m_elementP=new Linux_SambaAllowHostsForGlobalInstanceName(anElementP);
  	}

  }
  
  //---------------------------------------------------------------------------- 
  Linux_SambaAllowHostsForGlobalInstanceNameEnumeration::operator CmpiArray() const {
  	int size = getSize();
   	CmpiArray cmpiArray = CmpiArray(size,CMPI_instance);
   	for (int x=0; x < size; ++x) {
   	  cmpiArray[x]=getElement(x).getObjectPath();
   	}
   	return cmpiArray;
  }
  
}
