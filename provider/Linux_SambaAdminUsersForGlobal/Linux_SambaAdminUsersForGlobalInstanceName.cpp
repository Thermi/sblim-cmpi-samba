// =======================================================================
// Linux_SambaAdminUsersForGlobalInstanceName.cpp
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
#include "Linux_SambaAdminUsersForGlobalInstanceName.h"
#include "CmpiData.h"
#include "CmpiString.h"
#include "CmpiArray.h"
#include <string>

namespace genProvider {
	
  //****************************************************************************
  //Linux_SambaAdminUsersForGlobalInstanceName
  //---------------------------------------------------------------------------- 
  // empty constructor
  //---------------------------------------------------------------------------- 
  Linux_SambaAdminUsersForGlobalInstanceName::Linux_SambaAdminUsersForGlobalInstanceName() {
   	init();  	
  }
  
  //---------------------------------------------------------------------------- 
  // copy constructor	
  //---------------------------------------------------------------------------- 
  Linux_SambaAdminUsersForGlobalInstanceName::Linux_SambaAdminUsersForGlobalInstanceName(
    const Linux_SambaAdminUsersForGlobalInstanceName& anInstanceName) {
   	init(anInstanceName);  	
  }
  
  //---------------------------------------------------------------------------- 
  // constructor using CmpiObjectPath
  //---------------------------------------------------------------------------- 
  Linux_SambaAdminUsersForGlobalInstanceName::Linux_SambaAdminUsersForGlobalInstanceName(
    const CmpiObjectPath& path) {
    
    init();
    
    m_CIMClassNameP = path.getClassName().charPtr();
    
    CmpiString namespaceP;
    namespaceP = path.getNameSpace();
    setNamespace(namespaceP.charPtr(),1);
        
    CmpiObjectPath PartComponent = path.getKey("PartComponent");
    setPartComponent(Linux_SambaUserInstanceName(PartComponent));
    
    CmpiObjectPath GroupComponent = path.getKey("GroupComponent");
    setGroupComponent(Linux_SambaGlobalOptionsInstanceName(GroupComponent));

    
  }
  
  //---------------------------------------------------------------------------- 
  // destructor
  //---------------------------------------------------------------------------- 
  Linux_SambaAdminUsersForGlobalInstanceName::~Linux_SambaAdminUsersForGlobalInstanceName() {
   	reset();  	  
  }
  
  //---------------------------------------------------------------------------- 
  //copy operator
  //---------------------------------------------------------------------------- 
  Linux_SambaAdminUsersForGlobalInstanceName&
  Linux_SambaAdminUsersForGlobalInstanceName::operator=(
    const Linux_SambaAdminUsersForGlobalInstanceName& anInstanceName) {    
    
    init(anInstanceName);
   	return *this;    
  
  }
  
  //---------------------------------------------------------------------------- 
  //returns the related CmpiObjectPath
  //---------------------------------------------------------------------------- 
  CmpiObjectPath 
  Linux_SambaAdminUsersForGlobalInstanceName::getObjectPath() const {
   	
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
  Linux_SambaAdminUsersForGlobalInstanceName::fillKeys(CmpiInstance& cmpiInstance) const {
  	
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
  Linux_SambaAdminUsersForGlobalInstanceName::isNameSpaceSet() const {
  	return isSet.m_nameSpaceP;
  }
  
  //---------------------------------------------------------------------------- 
  const char* 
  Linux_SambaAdminUsersForGlobalInstanceName::getNamespace() const {
    if ( ! isSet.m_nameSpaceP) {
   	  throw CmpiErrorFormater::getErrorException(
   	   CmpiErrorFormater::NOT_SET,
   	   "NameSpace",
   	   "Linux_SambaAdminUsersForGlobal");
   	}
  	return m_nameSpaceP;
  }

  //---------------------------------------------------------------------------- 
  void
  Linux_SambaAdminUsersForGlobalInstanceName::setNamespace(
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
  Linux_SambaAdminUsersForGlobalInstanceName::isPartComponentSet() const {
    return isSet.PartComponent;
  }

  //----------------------------------------------------------------------------
  void Linux_SambaAdminUsersForGlobalInstanceName::setPartComponent(
    const Linux_SambaUserInstanceName& aValue) {
  
    m_PartComponent = aValue;
    isSet.PartComponent = 1;
  
  }       

  //----------------------------------------------------------------------------
  const Linux_SambaUserInstanceName&
  Linux_SambaAdminUsersForGlobalInstanceName::getPartComponent() const {
    
    if ( ! isSet.PartComponent) {
   	  throw CmpiErrorFormater::getErrorException(
   	    CmpiErrorFormater::NOT_SET,
        "PartComponent",
        "Linux_SambaAdminUsersForGlobal");
   	}


    return m_PartComponent;

  }
       
  //----------------------------------------------------------------------------
  // GroupComponent related methods
  //----------------------------------------------------------------------------
  unsigned int
  Linux_SambaAdminUsersForGlobalInstanceName::isGroupComponentSet() const {
    return isSet.GroupComponent;
  }

  //----------------------------------------------------------------------------
  void Linux_SambaAdminUsersForGlobalInstanceName::setGroupComponent(
    const Linux_SambaGlobalOptionsInstanceName& aValue) {
  
    m_GroupComponent = aValue;
    isSet.GroupComponent = 1;
  
  }       

  //----------------------------------------------------------------------------
  const Linux_SambaGlobalOptionsInstanceName&
  Linux_SambaAdminUsersForGlobalInstanceName::getGroupComponent() const {
    
    if ( ! isSet.GroupComponent) {
   	  throw CmpiErrorFormater::getErrorException(
   	    CmpiErrorFormater::NOT_SET,
        "GroupComponent",
        "Linux_SambaAdminUsersForGlobal");
   	}


    return m_GroupComponent;

  }


  //---------------------------------------------------------------------------- 
  void 
  Linux_SambaAdminUsersForGlobalInstanceName::init() {
  	
  	m_CIMClassNameP = "Linux_SambaAdminUsersForGlobal";
  	isSet.m_nameSpaceP = 0; 
  	    isSet.PartComponent = 0;
    isSet.GroupComponent = 0;

  	
  }
  
  //---------------------------------------------------------------------------- 
  //copies another instance properties in this
  //---------------------------------------------------------------------------- 
  void 
  Linux_SambaAdminUsersForGlobalInstanceName::init(
    const Linux_SambaAdminUsersForGlobalInstanceName& anOriginal) {
   	
   	init();
   	   	
    m_CIMClassNameP = anOriginal.m_CIMClassNameP;
    if (anOriginal.isNameSpaceSet()){
      setNamespace(anOriginal.getNamespace(),1);
    }
       	
    if (anOriginal.isPartComponentSet()) {
      const Linux_SambaUserInstanceName& PartComponentOriginal = anOriginal.getPartComponent();
      setPartComponent(PartComponentOriginal);
    }
   	
    if (anOriginal.isGroupComponentSet()) {
      const Linux_SambaGlobalOptionsInstanceName& GroupComponentOriginal = anOriginal.getGroupComponent();
      setGroupComponent(GroupComponentOriginal);
    }
    
  
  }
  
  //---------------------------------------------------------------------------- 
  void
  Linux_SambaAdminUsersForGlobalInstanceName::reset() {
  	if (isSet.m_nameSpaceP) {
  	  delete(m_nameSpaceP);
  	}
  	  	  
  }
  
  //---------------------------------------------------------------------------- 
  Linux_SambaAdminUsersForGlobalInstanceNameEnumerationElement::Linux_SambaAdminUsersForGlobalInstanceNameEnumerationElement() {
  	m_elementP = 0;
  	m_nextP = 0; 
  }
  
  //---------------------------------------------------------------------------- 
  Linux_SambaAdminUsersForGlobalInstanceNameEnumerationElement::~Linux_SambaAdminUsersForGlobalInstanceNameEnumerationElement() {
   	
  	if (m_elementP) {
  	  delete(m_elementP);
  	}
  	if (m_nextP) {
  	  delete(m_nextP);
  	}
  	  
  }
  
  //---------------------------------------------------------------------------- 
  Linux_SambaAdminUsersForGlobalInstanceNameEnumeration::Linux_SambaAdminUsersForGlobalInstanceNameEnumeration() {
  	 m_firstElementP = 0;
     m_currentElementP = 0;
     m_endElementP = 0;
  }
  
  //---------------------------------------------------------------------------- 
  Linux_SambaAdminUsersForGlobalInstanceNameEnumeration::Linux_SambaAdminUsersForGlobalInstanceNameEnumeration(
    const CmpiArray& aCmpiArray) {
  	
  	m_firstElementP = 0;
    m_currentElementP = 0;
    m_endElementP = 0;
    
    int size = aCmpiArray.size();
    for (int x=0; x < size; ++x) {
      addElement(Linux_SambaAdminUsersForGlobalInstanceName(aCmpiArray[x]));
    }
    
  }
  
  //---------------------------------------------------------------------------- 
  Linux_SambaAdminUsersForGlobalInstanceNameEnumeration::Linux_SambaAdminUsersForGlobalInstanceNameEnumeration(
    const Linux_SambaAdminUsersForGlobalInstanceNameEnumeration& anInstanceNameEnumeration) {
   	
    m_firstElementP = 0;
    m_currentElementP = 0;
    m_endElementP = 0;
  	 
    int size = anInstanceNameEnumeration.getSize();
    for (int x=0; x < size; ++x) {
      addElement(anInstanceNameEnumeration.getElement(x));
    }

  }
  	  
  //---------------------------------------------------------------------------- 
  Linux_SambaAdminUsersForGlobalInstanceNameEnumeration::~Linux_SambaAdminUsersForGlobalInstanceNameEnumeration() {
   	
  	if (m_firstElementP) {
  	  delete(m_firstElementP);
  	}
  	  	
  }

  //---------------------------------------------------------------------------- 
  void 
  Linux_SambaAdminUsersForGlobalInstanceNameEnumeration::reset() {
  	
  	m_currentElementP = m_firstElementP;
  
  }

  //---------------------------------------------------------------------------- 
  bool 
  Linux_SambaAdminUsersForGlobalInstanceNameEnumeration::hasNext() const {
  	
  	return (m_currentElementP != 0);
  
  }
  
  //---------------------------------------------------------------------------- 
  int
  Linux_SambaAdminUsersForGlobalInstanceNameEnumeration::getSize() const {
  	
    int size = 0;
    Linux_SambaAdminUsersForGlobalInstanceNameEnumerationElement* followingP = m_firstElementP;
  	
  	while (followingP) {
      followingP = followingP->m_nextP;
      ++size;
    }
  	
    return size;
  
  }
  
  //---------------------------------------------------------------------------- 
  const Linux_SambaAdminUsersForGlobalInstanceName&  
   Linux_SambaAdminUsersForGlobalInstanceNameEnumeration::getElement(int anIndex) const {
   
    Linux_SambaAdminUsersForGlobalInstanceNameEnumerationElement* followingP = m_firstElementP;
   
    int x=0;
    while (followingP && (x < anIndex) ) {
      followingP = followingP->m_nextP;
      ++x;
    }
    
    return *(followingP->m_elementP);
  
  }
  
  //---------------------------------------------------------------------------- 
  const Linux_SambaAdminUsersForGlobalInstanceName&
  Linux_SambaAdminUsersForGlobalInstanceNameEnumeration::getNext() {
   	
  	 Linux_SambaAdminUsersForGlobalInstanceNameEnumerationElement* currentP = m_currentElementP;
  	 m_currentElementP = m_currentElementP->m_nextP;
  	 
  	 return *(currentP->m_elementP);
  
  }
  	  
  //---------------------------------------------------------------------------- 
  void Linux_SambaAdminUsersForGlobalInstanceNameEnumeration::addElement
   (const Linux_SambaAdminUsersForGlobalInstanceName& anElementP){
   	
  	if (m_firstElementP==0) {
  	  m_firstElementP = new Linux_SambaAdminUsersForGlobalInstanceNameEnumerationElement();
  	  m_firstElementP->m_elementP = new Linux_SambaAdminUsersForGlobalInstanceName(anElementP);
  	  m_endElementP = m_firstElementP;
  	  m_currentElementP = m_firstElementP;
  	} else {
  	  m_endElementP->m_nextP = new Linux_SambaAdminUsersForGlobalInstanceNameEnumerationElement();
  	  m_endElementP = m_endElementP->m_nextP;
  	  m_endElementP->m_elementP=new Linux_SambaAdminUsersForGlobalInstanceName(anElementP);
  	}

  }
  
  //---------------------------------------------------------------------------- 
  Linux_SambaAdminUsersForGlobalInstanceNameEnumeration::operator CmpiArray() const {
  	int size = getSize();
   	CmpiArray cmpiArray = CmpiArray(size,CMPI_instance);
   	for (int x=0; x < size; ++x) {
   	  cmpiArray[x]=getElement(x).getObjectPath();
   	}
   	return cmpiArray;
  }
  
}
