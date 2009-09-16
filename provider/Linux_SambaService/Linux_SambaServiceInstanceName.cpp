// =======================================================================
// Linux_SambaServiceInstanceName.cpp
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
#include "Linux_SambaServiceInstanceName.h"
#include "CmpiData.h"
#include "CmpiString.h"
#include "CmpiArray.h"
#include <string>

namespace genProvider {
	
  //****************************************************************************
  //Linux_SambaServiceInstanceName
  //---------------------------------------------------------------------------- 
  // empty constructor
  //---------------------------------------------------------------------------- 
  Linux_SambaServiceInstanceName::Linux_SambaServiceInstanceName() {
   	init();  	
  }
  
  //---------------------------------------------------------------------------- 
  // copy constructor	
  //---------------------------------------------------------------------------- 
  Linux_SambaServiceInstanceName::Linux_SambaServiceInstanceName(
    const Linux_SambaServiceInstanceName& anInstanceName) {
   	init(anInstanceName);  	
  }
  
  //---------------------------------------------------------------------------- 
  // constructor using CmpiObjectPath
  //---------------------------------------------------------------------------- 
  Linux_SambaServiceInstanceName::Linux_SambaServiceInstanceName(
    const CmpiObjectPath& path) {
    
    init();
    
    m_CIMClassNameP = path.getClassName().charPtr();
    
    CmpiString namespaceP;
    namespaceP = path.getNameSpace();
    setNamespace(namespaceP.charPtr(),1);
        
    CmpiString CreationClassName = path.getKey("CreationClassName");
    setCreationClassName(CreationClassName.charPtr());
    
    CmpiString Name = path.getKey("Name");
    setName(Name.charPtr());
    
    CmpiString SystemCreationClassName = path.getKey("SystemCreationClassName");
    setSystemCreationClassName(SystemCreationClassName.charPtr());
    
    CmpiString SystemName = path.getKey("SystemName");
    setSystemName(SystemName.charPtr());

    
  }
  
  //---------------------------------------------------------------------------- 
  // destructor
  //---------------------------------------------------------------------------- 
  Linux_SambaServiceInstanceName::~Linux_SambaServiceInstanceName() {
   	reset();  	  
  }
  
  //---------------------------------------------------------------------------- 
  //copy operator
  //---------------------------------------------------------------------------- 
  Linux_SambaServiceInstanceName&
  Linux_SambaServiceInstanceName::operator=(
    const Linux_SambaServiceInstanceName& anInstanceName) {    
    
    init(anInstanceName);
   	return *this;    
  
  }
  
  //---------------------------------------------------------------------------- 
  //returns the related CmpiObjectPath
  //---------------------------------------------------------------------------- 
  CmpiObjectPath 
  Linux_SambaServiceInstanceName::getObjectPath() const {
   	
   	CmpiObjectPath objectPath(m_nameSpaceP, m_CIMClassNameP);
   	  	objectPath.setKey(
  	  "CreationClassName",
  	  CmpiData(m_CreationClassName));
  	objectPath.setKey(
  	  "Name",
  	  CmpiData(m_Name));
  	objectPath.setKey(
  	  "SystemCreationClassName",
  	  CmpiData(m_SystemCreationClassName));
  	objectPath.setKey(
  	  "SystemName",
  	  CmpiData(m_SystemName));

  	
  	return objectPath;
  	
  }
  
  //---------------------------------------------------------------------------- 
  // adds the related CmpiObjectPath to an existing cmpiInstance
  //---------------------------------------------------------------------------- 
  void 
  Linux_SambaServiceInstanceName::fillKeys(CmpiInstance& cmpiInstance) const {
  	
  	if (isSet.CreationClassName) {
  	  
  	  cmpiInstance.setProperty(
  	    "CreationClassName",
  	    CmpiData(m_CreationClassName));
  	}

  	if (isSet.Name) {
  	  
  	  cmpiInstance.setProperty(
  	    "Name",
  	    CmpiData(m_Name));
  	}

  	if (isSet.SystemCreationClassName) {
  	  
  	  cmpiInstance.setProperty(
  	    "SystemCreationClassName",
  	    CmpiData(m_SystemCreationClassName));
  	}

  	if (isSet.SystemName) {
  	  
  	  cmpiInstance.setProperty(
  	    "SystemName",
  	    CmpiData(m_SystemName));
  	}

  }
  
  
  //---------------------------------------------------------------------------- 
  // NameSpace related methods
  //---------------------------------------------------------------------------- 
  unsigned int 
  Linux_SambaServiceInstanceName::isNameSpaceSet() const {
  	return isSet.m_nameSpaceP;
  }
  
  //---------------------------------------------------------------------------- 
  const char* 
  Linux_SambaServiceInstanceName::getNamespace() const {
    if ( ! isSet.m_nameSpaceP) {
   	  throw CmpiErrorFormater::getErrorException(
   	   CmpiErrorFormater::NOT_SET,
   	   "NameSpace",
   	   "Linux_SambaService");
   	}
  	return m_nameSpaceP;
  }

  //---------------------------------------------------------------------------- 
  void
  Linux_SambaServiceInstanceName::setNamespace(
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
  // CreationClassName related methods
  //----------------------------------------------------------------------------
  unsigned int
  Linux_SambaServiceInstanceName::isCreationClassNameSet() const {
    return isSet.CreationClassName;
  }

  //----------------------------------------------------------------------------
  void
  Linux_SambaServiceInstanceName::setCreationClassName(
    const char* aValueP,
    int aCopyFlag) {
    
    if (isSet.CreationClassName) {
      delete [] m_CreationClassName;
    }
    
    if (aCopyFlag && aValueP) {
      char* valueP = new char[strlen(aValueP) + 1];
      strcpy(valueP,aValueP);
      m_CreationClassName = valueP;
    } else {
      m_CreationClassName = aValueP;
    }
    
    isSet.CreationClassName = 1;

  }       

  //----------------------------------------------------------------------------
  const char*
  Linux_SambaServiceInstanceName::getCreationClassName() const {
    
    if ( ! isSet.CreationClassName) {
   	  throw CmpiErrorFormater::getErrorException(
   	    CmpiErrorFormater::NOT_SET,
        "CreationClassName",
        "Linux_SambaService");
   	}


    return m_CreationClassName;

  }
       
  //----------------------------------------------------------------------------
  // Name related methods
  //----------------------------------------------------------------------------
  unsigned int
  Linux_SambaServiceInstanceName::isNameSet() const {
    return isSet.Name;
  }

  //----------------------------------------------------------------------------
  void
  Linux_SambaServiceInstanceName::setName(
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
  Linux_SambaServiceInstanceName::getName() const {
    
    if ( ! isSet.Name) {
   	  throw CmpiErrorFormater::getErrorException(
   	    CmpiErrorFormater::NOT_SET,
        "Name",
        "Linux_SambaService");
   	}


    return m_Name;

  }
       
  //----------------------------------------------------------------------------
  // SystemCreationClassName related methods
  //----------------------------------------------------------------------------
  unsigned int
  Linux_SambaServiceInstanceName::isSystemCreationClassNameSet() const {
    return isSet.SystemCreationClassName;
  }

  //----------------------------------------------------------------------------
  void
  Linux_SambaServiceInstanceName::setSystemCreationClassName(
    const char* aValueP,
    int aCopyFlag) {
    
    if (isSet.SystemCreationClassName) {
      delete [] m_SystemCreationClassName;
    }
    
    if (aCopyFlag && aValueP) {
      char* valueP = new char[strlen(aValueP) + 1];
      strcpy(valueP,aValueP);
      m_SystemCreationClassName = valueP;
    } else {
      m_SystemCreationClassName = aValueP;
    }
    
    isSet.SystemCreationClassName = 1;

  }       

  //----------------------------------------------------------------------------
  const char*
  Linux_SambaServiceInstanceName::getSystemCreationClassName() const {
    
    if ( ! isSet.SystemCreationClassName) {
   	  throw CmpiErrorFormater::getErrorException(
   	    CmpiErrorFormater::NOT_SET,
        "SystemCreationClassName",
        "Linux_SambaService");
   	}


    return m_SystemCreationClassName;

  }
       
  //----------------------------------------------------------------------------
  // SystemName related methods
  //----------------------------------------------------------------------------
  unsigned int
  Linux_SambaServiceInstanceName::isSystemNameSet() const {
    return isSet.SystemName;
  }

  //----------------------------------------------------------------------------
  void
  Linux_SambaServiceInstanceName::setSystemName(
    const char* aValueP,
    int aCopyFlag) {
    
    if (isSet.SystemName) {
      delete [] m_SystemName;
    }
    
    if (aCopyFlag && aValueP) {
      char* valueP = new char[strlen(aValueP) + 1];
      strcpy(valueP,aValueP);
      m_SystemName = valueP;
    } else {
      m_SystemName = aValueP;
    }
    
    isSet.SystemName = 1;

  }       

  //----------------------------------------------------------------------------
  const char*
  Linux_SambaServiceInstanceName::getSystemName() const {
    
    if ( ! isSet.SystemName) {
   	  throw CmpiErrorFormater::getErrorException(
   	    CmpiErrorFormater::NOT_SET,
        "SystemName",
        "Linux_SambaService");
   	}


    return m_SystemName;

  }


  //---------------------------------------------------------------------------- 
  void 
  Linux_SambaServiceInstanceName::init() {
  	
  	m_CIMClassNameP = "Linux_SambaService";
  	isSet.m_nameSpaceP = 0; 
  	    isSet.CreationClassName = 0;
    isSet.Name = 0;
    isSet.SystemCreationClassName = 0;
    isSet.SystemName = 0;

  	
  }
  
  //---------------------------------------------------------------------------- 
  //copies another instance properties in this
  //---------------------------------------------------------------------------- 
  void 
  Linux_SambaServiceInstanceName::init(
    const Linux_SambaServiceInstanceName& anOriginal) {
   	
   	init();
   	   	
    m_CIMClassNameP = anOriginal.m_CIMClassNameP;
    if (anOriginal.isNameSpaceSet()){
      setNamespace(anOriginal.getNamespace(),1);
    }
       	
    if (anOriginal.isCreationClassNameSet()) {
      const char* CreationClassNameOriginal = anOriginal.getCreationClassName();
      setCreationClassName(CreationClassNameOriginal,1);
    }
   	
    if (anOriginal.isNameSet()) {
      const char* NameOriginal = anOriginal.getName();
      setName(NameOriginal,1);
    }
   	
    if (anOriginal.isSystemCreationClassNameSet()) {
      const char* SystemCreationClassNameOriginal = anOriginal.getSystemCreationClassName();
      setSystemCreationClassName(SystemCreationClassNameOriginal,1);
    }
   	
    if (anOriginal.isSystemNameSet()) {
      const char* SystemNameOriginal = anOriginal.getSystemName();
      setSystemName(SystemNameOriginal,1);
    }
    
  
  }
  
  //---------------------------------------------------------------------------- 
  void
  Linux_SambaServiceInstanceName::reset() {
  	if (isSet.m_nameSpaceP) {
  	  delete(m_nameSpaceP);
  	}
  	
  	if (isSet.CreationClassName) {
  	  delete(m_CreationClassName);
  	}

  	if (isSet.Name) {
  	  delete(m_Name);
  	}

  	if (isSet.SystemCreationClassName) {
  	  delete(m_SystemCreationClassName);
  	}

  	if (isSet.SystemName) {
  	  delete(m_SystemName);
  	}
  	  
  }
  
  //---------------------------------------------------------------------------- 
  Linux_SambaServiceInstanceNameEnumerationElement::Linux_SambaServiceInstanceNameEnumerationElement() {
  	m_elementP = 0;
  	m_nextP = 0; 
  }
  
  //---------------------------------------------------------------------------- 
  Linux_SambaServiceInstanceNameEnumerationElement::~Linux_SambaServiceInstanceNameEnumerationElement() {
   	
  	if (m_elementP) {
  	  delete(m_elementP);
  	}
  	if (m_nextP) {
  	  delete(m_nextP);
  	}
  	  
  }
  
  //---------------------------------------------------------------------------- 
  Linux_SambaServiceInstanceNameEnumeration::Linux_SambaServiceInstanceNameEnumeration() {
  	 m_firstElementP = 0;
     m_currentElementP = 0;
     m_endElementP = 0;
  }
  
  //---------------------------------------------------------------------------- 
  Linux_SambaServiceInstanceNameEnumeration::Linux_SambaServiceInstanceNameEnumeration(
    const CmpiArray& aCmpiArray) {
  	
  	m_firstElementP = 0;
    m_currentElementP = 0;
    m_endElementP = 0;
    
    int size = aCmpiArray.size();
    for (int x=0; x < size; ++x) {
      addElement(Linux_SambaServiceInstanceName(aCmpiArray[x]));
    }
    
  }
  
  //---------------------------------------------------------------------------- 
  Linux_SambaServiceInstanceNameEnumeration::Linux_SambaServiceInstanceNameEnumeration(
    const Linux_SambaServiceInstanceNameEnumeration& anInstanceNameEnumeration) {
   	
    m_firstElementP = 0;
    m_currentElementP = 0;
    m_endElementP = 0;
  	 
    int size = anInstanceNameEnumeration.getSize();
    for (int x=0; x < size; ++x) {
      addElement(anInstanceNameEnumeration.getElement(x));
    }

  }
  	  
  //---------------------------------------------------------------------------- 
  Linux_SambaServiceInstanceNameEnumeration::~Linux_SambaServiceInstanceNameEnumeration() {
   	
  	if (m_firstElementP) {
  	  delete(m_firstElementP);
  	}
  	  	
  }

  //---------------------------------------------------------------------------- 
  void 
  Linux_SambaServiceInstanceNameEnumeration::reset() {
  	
  	m_currentElementP = m_firstElementP;
  
  }

  //---------------------------------------------------------------------------- 
  bool 
  Linux_SambaServiceInstanceNameEnumeration::hasNext() const {
  	
  	return (m_currentElementP != 0);
  
  }
  
  //---------------------------------------------------------------------------- 
  int
  Linux_SambaServiceInstanceNameEnumeration::getSize() const {
  	
    int size = 0;
    Linux_SambaServiceInstanceNameEnumerationElement* followingP = m_firstElementP;
  	
  	while (followingP) {
      followingP = followingP->m_nextP;
      ++size;
    }
  	
    return size;
  
  }
  
  //---------------------------------------------------------------------------- 
  const Linux_SambaServiceInstanceName&  
   Linux_SambaServiceInstanceNameEnumeration::getElement(int anIndex) const {
   
    Linux_SambaServiceInstanceNameEnumerationElement* followingP = m_firstElementP;
   
    int x=0;
    while (followingP && (x < anIndex) ) {
      followingP = followingP->m_nextP;
      ++x;
    }
    
    return *(followingP->m_elementP);
  
  }
  
  //---------------------------------------------------------------------------- 
  const Linux_SambaServiceInstanceName&
  Linux_SambaServiceInstanceNameEnumeration::getNext() {
   	
  	 Linux_SambaServiceInstanceNameEnumerationElement* currentP = m_currentElementP;
  	 m_currentElementP = m_currentElementP->m_nextP;
  	 
  	 return *(currentP->m_elementP);
  
  }
  	  
  //---------------------------------------------------------------------------- 
  void Linux_SambaServiceInstanceNameEnumeration::addElement
   (const Linux_SambaServiceInstanceName& anElementP){
   	
  	if (m_firstElementP==0) {
  	  m_firstElementP = new Linux_SambaServiceInstanceNameEnumerationElement();
  	  m_firstElementP->m_elementP = new Linux_SambaServiceInstanceName(anElementP);
  	  m_endElementP = m_firstElementP;
  	  m_currentElementP = m_firstElementP;
  	} else {
  	  m_endElementP->m_nextP = new Linux_SambaServiceInstanceNameEnumerationElement();
  	  m_endElementP = m_endElementP->m_nextP;
  	  m_endElementP->m_elementP=new Linux_SambaServiceInstanceName(anElementP);
  	}

  }
  
  //---------------------------------------------------------------------------- 
  Linux_SambaServiceInstanceNameEnumeration::operator CmpiArray() const {
  	int size = getSize();
   	CmpiArray cmpiArray = CmpiArray(size,CMPI_instance);
   	for (int x=0; x < size; ++x) {
   	  cmpiArray[x]=getElement(x).getObjectPath();
   	}
   	return cmpiArray;
  }
  
}
