// =======================================================================
// Linux_SambaShareSecurityOptionsInstanceName.cpp
//     created on Fri, 24 Feb 2006 using ECUTE
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
//                Rodrigo Ceron    <rceron@br.ibm.com>
//                Wolfgang Taphorn <taphorn@de.ibm.com>
//
// =======================================================================
//
// 
#include "Linux_SambaShareSecurityOptionsInstanceName.h"
#include "CmpiData.h"
#include "CmpiString.h"
#include "CmpiArray.h"
#include <string>

namespace genProvider {
	
  //****************************************************************************
  //Linux_SambaShareSecurityOptionsInstanceName
  //---------------------------------------------------------------------------- 
  // empty constructor
  //---------------------------------------------------------------------------- 
  Linux_SambaShareSecurityOptionsInstanceName::Linux_SambaShareSecurityOptionsInstanceName() {
   	init();  	
  }
  
  //---------------------------------------------------------------------------- 
  // copy constructor	
  //---------------------------------------------------------------------------- 
  Linux_SambaShareSecurityOptionsInstanceName::Linux_SambaShareSecurityOptionsInstanceName(
    const Linux_SambaShareSecurityOptionsInstanceName& anInstanceName) {
   	init(anInstanceName);  	
  }
  
  //---------------------------------------------------------------------------- 
  // constructor using CmpiObjectPath
  //---------------------------------------------------------------------------- 
  Linux_SambaShareSecurityOptionsInstanceName::Linux_SambaShareSecurityOptionsInstanceName(
    const CmpiObjectPath& path) {
    
    init();
    
    m_CIMClassNameP = path.getClassName().charPtr();
    
    CmpiString namespaceP;
    namespaceP = path.getNameSpace();
    setNamespace(namespaceP.charPtr(),1);
        
    CmpiString InstanceID = path.getKey("InstanceID");
    setInstanceID(InstanceID.charPtr());
    
    CmpiString Name = path.getKey("Name");
    setName(Name.charPtr());

    
  }
  
  //---------------------------------------------------------------------------- 
  // destructor
  //---------------------------------------------------------------------------- 
  Linux_SambaShareSecurityOptionsInstanceName::~Linux_SambaShareSecurityOptionsInstanceName() {
   	reset();  	  
  }
  
  //---------------------------------------------------------------------------- 
  //copy operator
  //---------------------------------------------------------------------------- 
  Linux_SambaShareSecurityOptionsInstanceName&
  Linux_SambaShareSecurityOptionsInstanceName::operator=(
    const Linux_SambaShareSecurityOptionsInstanceName& anInstanceName) {    
    
    init(anInstanceName);
   	return *this;    
  
  }
  
  //---------------------------------------------------------------------------- 
  //returns the related CmpiObjectPath
  //---------------------------------------------------------------------------- 
  CmpiObjectPath 
  Linux_SambaShareSecurityOptionsInstanceName::getObjectPath() const {
   	
   	CmpiObjectPath objectPath(m_nameSpaceP, m_CIMClassNameP);
   	  	objectPath.setKey(
  	  "InstanceID",
  	  CmpiData(m_InstanceID));
  	objectPath.setKey(
  	  "Name",
  	  CmpiData(m_Name));

  	
  	return objectPath;
  	
  }
  
  //---------------------------------------------------------------------------- 
  // adds the related CmpiObjectPath to an existing cmpiInstance
  //---------------------------------------------------------------------------- 
  void 
  Linux_SambaShareSecurityOptionsInstanceName::fillKeys(CmpiInstance& cmpiInstance) const {
  	
  	if (isSet.InstanceID) {
  	  
  	  cmpiInstance.setProperty(
  	    "InstanceID",
  	    CmpiData(m_InstanceID));
  	}

  	if (isSet.Name) {
  	  
  	  cmpiInstance.setProperty(
  	    "Name",
  	    CmpiData(m_Name));
  	}

  }
  
  
  //---------------------------------------------------------------------------- 
  // NameSpace related methods
  //---------------------------------------------------------------------------- 
  unsigned int 
  Linux_SambaShareSecurityOptionsInstanceName::isNameSpaceSet() const {
  	return isSet.m_nameSpaceP;
  }
  
  //---------------------------------------------------------------------------- 
  const char* 
  Linux_SambaShareSecurityOptionsInstanceName::getNamespace() const {
    if ( ! isSet.m_nameSpaceP) {
   	  throw CmpiErrorFormater::getErrorException(
   	   CmpiErrorFormater::NOT_SET,
   	   "NameSpace",
   	   "Linux_SambaShareSecurityOptions");
   	}
  	return m_nameSpaceP;
  }

  //---------------------------------------------------------------------------- 
  void
  Linux_SambaShareSecurityOptionsInstanceName::setNamespace(
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
  // InstanceID related methods
  //----------------------------------------------------------------------------
  unsigned int
  Linux_SambaShareSecurityOptionsInstanceName::isInstanceIDSet() const {
    return isSet.InstanceID;
  }

  //----------------------------------------------------------------------------
  void
  Linux_SambaShareSecurityOptionsInstanceName::setInstanceID(
    const char* aValueP,
    int aCopyFlag) {
    
    if (isSet.InstanceID) {
      delete [] m_InstanceID;
    }
    
    if (aCopyFlag && aValueP) {
      char* valueP = new char[strlen(aValueP) + 1];
      strcpy(valueP,aValueP);
      m_InstanceID = valueP;
    } else {
      m_InstanceID = aValueP;
    }
    
    isSet.InstanceID = 1;

  }       

  //----------------------------------------------------------------------------
  const char*
  Linux_SambaShareSecurityOptionsInstanceName::getInstanceID() const {
    
    if ( ! isSet.InstanceID) {
   	  throw CmpiErrorFormater::getErrorException(
   	    CmpiErrorFormater::NOT_SET,
        "InstanceID",
        "Linux_SambaShareSecurityOptions");
   	}


    return m_InstanceID;

  }
       
  //----------------------------------------------------------------------------
  // Name related methods
  //----------------------------------------------------------------------------
  unsigned int
  Linux_SambaShareSecurityOptionsInstanceName::isNameSet() const {
    return isSet.Name;
  }

  //----------------------------------------------------------------------------
  void
  Linux_SambaShareSecurityOptionsInstanceName::setName(
    const char* aValueP,
    int aCopyFlag) {
    
    if (isSet.Name) {
      delete [] m_Name;
    }
    
    if (aCopyFlag && aValueP) {
      char* valueP = new char[strlen(aValueP) + 1];
      strcpy(valueP,aValueP);
      m_Name = valueP;
    } else {
      m_Name = aValueP;
    }
    
    isSet.Name = 1;

  }       

  //----------------------------------------------------------------------------
  const char*
  Linux_SambaShareSecurityOptionsInstanceName::getName() const {
    
    if ( ! isSet.Name) {
   	  throw CmpiErrorFormater::getErrorException(
   	    CmpiErrorFormater::NOT_SET,
        "Name",
        "Linux_SambaShareSecurityOptions");
   	}


    return m_Name;

  }


  //---------------------------------------------------------------------------- 
  void 
  Linux_SambaShareSecurityOptionsInstanceName::init() {
  	
  	m_CIMClassNameP = "Linux_SambaShareSecurityOptions";
  	isSet.m_nameSpaceP = 0; 
  	    isSet.InstanceID = 0;
    isSet.Name = 0;

  	
  }
  
  //---------------------------------------------------------------------------- 
  //copies another instance properties in this
  //---------------------------------------------------------------------------- 
  void 
  Linux_SambaShareSecurityOptionsInstanceName::init(
    const Linux_SambaShareSecurityOptionsInstanceName& anOriginal) {
   	
   	init();
   	   	
    m_CIMClassNameP = anOriginal.m_CIMClassNameP;
    if (anOriginal.isNameSpaceSet()){
      setNamespace(anOriginal.getNamespace(),1);
    }
       	
    if (anOriginal.isInstanceIDSet()) {
      const char* InstanceIDOriginal = anOriginal.getInstanceID();
      setInstanceID(InstanceIDOriginal,1);
    }
   	
    if (anOriginal.isNameSet()) {
      const char* NameOriginal = anOriginal.getName();
      setName(NameOriginal,1);
    }
    
  
  }
  
  //---------------------------------------------------------------------------- 
  void
  Linux_SambaShareSecurityOptionsInstanceName::reset() {
  	if (isSet.m_nameSpaceP) {
  	  delete(m_nameSpaceP);
  	}
  	
  	if (isSet.InstanceID) {
  	  delete(m_InstanceID);
  	}

  	if (isSet.Name) {
  	  delete(m_Name);
  	}
  	  
  }
  
  //---------------------------------------------------------------------------- 
  Linux_SambaShareSecurityOptionsInstanceNameEnumerationElement::Linux_SambaShareSecurityOptionsInstanceNameEnumerationElement() {
  	m_elementP = 0;
  	m_nextP = 0; 
  }
  
  //---------------------------------------------------------------------------- 
  Linux_SambaShareSecurityOptionsInstanceNameEnumerationElement::~Linux_SambaShareSecurityOptionsInstanceNameEnumerationElement() {
   	
  	if (m_elementP) {
  	  delete(m_elementP);
  	}
  	if (m_nextP) {
  	  delete(m_nextP);
  	}
  	  
  }
  
  //---------------------------------------------------------------------------- 
  Linux_SambaShareSecurityOptionsInstanceNameEnumeration::Linux_SambaShareSecurityOptionsInstanceNameEnumeration() {
  	 m_firstElementP = 0;
     m_currentElementP = 0;
     m_endElementP = 0;
  }
  
  //---------------------------------------------------------------------------- 
  Linux_SambaShareSecurityOptionsInstanceNameEnumeration::Linux_SambaShareSecurityOptionsInstanceNameEnumeration(
    const CmpiArray& aCmpiArray) {
  	
  	m_firstElementP = 0;
    m_currentElementP = 0;
    m_endElementP = 0;
    
    int size = aCmpiArray.size();
    for (int x=0; x < size; ++x) {
      addElement(Linux_SambaShareSecurityOptionsInstanceName(aCmpiArray[x]));
    }
    
  }
  
  //---------------------------------------------------------------------------- 
  Linux_SambaShareSecurityOptionsInstanceNameEnumeration::Linux_SambaShareSecurityOptionsInstanceNameEnumeration(
    const Linux_SambaShareSecurityOptionsInstanceNameEnumeration& anInstanceNameEnumeration) {
   	
    m_firstElementP = 0;
    m_currentElementP = 0;
    m_endElementP = 0;
  	 
    int size = anInstanceNameEnumeration.getSize();
    for (int x=0; x < size; ++x) {
      addElement(anInstanceNameEnumeration.getElement(x));
    }

  }
  	  
  //---------------------------------------------------------------------------- 
  Linux_SambaShareSecurityOptionsInstanceNameEnumeration::~Linux_SambaShareSecurityOptionsInstanceNameEnumeration() {
   	
  	if (m_firstElementP) {
  	  delete(m_firstElementP);
  	}
  	  	
  }

  //---------------------------------------------------------------------------- 
  void 
  Linux_SambaShareSecurityOptionsInstanceNameEnumeration::reset() {
  	
  	m_currentElementP = m_firstElementP;
  
  }

  //---------------------------------------------------------------------------- 
  bool 
  Linux_SambaShareSecurityOptionsInstanceNameEnumeration::hasNext() const {
  	
  	return (m_currentElementP != 0);
  
  }
  
  //---------------------------------------------------------------------------- 
  int
  Linux_SambaShareSecurityOptionsInstanceNameEnumeration::getSize() const {
  	
    int size = 0;
    Linux_SambaShareSecurityOptionsInstanceNameEnumerationElement* followingP = m_firstElementP;
  	
  	while (followingP) {
      followingP = followingP->m_nextP;
      ++size;
    }
  	
    return size;
  
  }
  
  //---------------------------------------------------------------------------- 
  const Linux_SambaShareSecurityOptionsInstanceName&  
   Linux_SambaShareSecurityOptionsInstanceNameEnumeration::getElement(int anIndex) const {
   
    Linux_SambaShareSecurityOptionsInstanceNameEnumerationElement* followingP = m_firstElementP;
   
    int x=0;
    while (followingP && (x < anIndex) ) {
      followingP = followingP->m_nextP;
      ++x;
    }
    
    return *(followingP->m_elementP);
  
  }
  
  //---------------------------------------------------------------------------- 
  const Linux_SambaShareSecurityOptionsInstanceName&
  Linux_SambaShareSecurityOptionsInstanceNameEnumeration::getNext() {
   	
  	 Linux_SambaShareSecurityOptionsInstanceNameEnumerationElement* currentP = m_currentElementP;
  	 m_currentElementP = m_currentElementP->m_nextP;
  	 
  	 return *(currentP->m_elementP);
  
  }
  	  
  //---------------------------------------------------------------------------- 
  void Linux_SambaShareSecurityOptionsInstanceNameEnumeration::addElement
   (const Linux_SambaShareSecurityOptionsInstanceName& anElementP){
   	
  	if (m_firstElementP==0) {
  	  m_firstElementP = new Linux_SambaShareSecurityOptionsInstanceNameEnumerationElement();
  	  m_firstElementP->m_elementP = new Linux_SambaShareSecurityOptionsInstanceName(anElementP);
  	  m_endElementP = m_firstElementP;
  	  m_currentElementP = m_firstElementP;
  	} else {
  	  m_endElementP->m_nextP = new Linux_SambaShareSecurityOptionsInstanceNameEnumerationElement();
  	  m_endElementP = m_endElementP->m_nextP;
  	  m_endElementP->m_elementP=new Linux_SambaShareSecurityOptionsInstanceName(anElementP);
  	}

  }
  
  //---------------------------------------------------------------------------- 
  Linux_SambaShareSecurityOptionsInstanceNameEnumeration::operator CmpiArray() const {
  	int size = getSize();
   	CmpiArray cmpiArray = CmpiArray(size,CMPI_instance);
   	for (int x=0; x < size; ++x) {
   	  cmpiArray[x]=getElement(x).getObjectPath();
   	}
   	return cmpiArray;
  }
  
}
