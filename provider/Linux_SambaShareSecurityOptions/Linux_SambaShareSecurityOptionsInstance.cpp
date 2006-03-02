// =======================================================================
// Linux_SambaShareSecurityOptionsInstance.cpp
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
#include "Linux_SambaShareSecurityOptionsInstance.h"
#include "CmpiData.h"
#include "CmpiString.h"
#include "CmpiArray.h"
#include <string>

namespace genProvider {

  //****************************************************************************
  //Linux_SambaShareSecurityOptionsInstance
  //----------------------------------------------------------------------------
  //empty constructor
  Linux_SambaShareSecurityOptionsInstance::Linux_SambaShareSecurityOptionsInstance() {   	
   	init();  	   	
  }
  
  //----------------------------------------------------------------------------
  //copy constructor	
  //----------------------------------------------------------------------------
  Linux_SambaShareSecurityOptionsInstance::Linux_SambaShareSecurityOptionsInstance(
    const Linux_SambaShareSecurityOptionsInstance& anInstance) {   	
   	init(anInstance);  	   	
  }
  
  //----------------------------------------------------------------------------
  //constructor using CmpiInstance
  //----------------------------------------------------------------------------
  Linux_SambaShareSecurityOptionsInstance::Linux_SambaShareSecurityOptionsInstance(
    const CmpiInstance& aCmpiInstance,
    const char* anInstanceNamespaceP) {

    CmpiData cmpiData;

    init(); 
    
    CmpiObjectPath cop = aCmpiInstance.getObjectPath();
    cop.setNameSpace(anInstanceNamespaceP);
    setInstanceName(Linux_SambaShareSecurityOptionsInstanceName(cop));

    cmpiData = aCmpiInstance.getProperty("Caption");
    if ( ! cmpiData.isNullValue()){
      CmpiString Caption = cmpiData;
      setCaption(Caption.charPtr());
    }

    cmpiData = aCmpiInstance.getProperty("CreateMask");
    if ( ! cmpiData.isNullValue()){
      CMPIUint16 CreateMask = cmpiData;
      setCreateMask(CreateMask);
    }

    cmpiData = aCmpiInstance.getProperty("Description");
    if ( ! cmpiData.isNullValue()){
      CmpiString Description = cmpiData;
      setDescription(Description.charPtr());
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

    cmpiData = aCmpiInstance.getProperty("ElementName");
    if ( ! cmpiData.isNullValue()){
      CmpiString ElementName = cmpiData;
      setElementName(ElementName.charPtr());
    }

    
  }
  
  //----------------------------------------------------------------------------
  //Destructor
  //----------------------------------------------------------------------------
  Linux_SambaShareSecurityOptionsInstance::
   ~Linux_SambaShareSecurityOptionsInstance(){
   	reset();  	  
  }
  
  
  //----------------------------------------------------------------------------
  //copy operator
  //----------------------------------------------------------------------------
  Linux_SambaShareSecurityOptionsInstance&
  Linux_SambaShareSecurityOptionsInstance::operator=(
    const Linux_SambaShareSecurityOptionsInstance& anInstance) {   	
   	
   	init(anInstance);
   	return *this;
  
  }
  
  
  //----------------------------------------------------------------------------
  //converts to CmpiInstance
  //----------------------------------------------------------------------------
  CmpiInstance
  Linux_SambaShareSecurityOptionsInstance::getCmpiInstance(
    const char** aPropertiesPP) const {
   	
   	CmpiObjectPath objectPath=getInstanceName().getObjectPath();      
    CmpiInstance cmpiInstance(objectPath);    
    getInstanceName().fillKeys(cmpiInstance);
    
    if (aPropertiesPP) {
	    cmpiInstance.setPropertyFilter(aPropertiesPP,0);
    }

  	if (isSet.Caption) {
  	  
  	  cmpiInstance.setProperty(
  	    "Caption",
  	    CmpiData(m_Caption));
  	}

  	if (isSet.CreateMask) {
  	  
  	  cmpiInstance.setProperty(
  	    "CreateMask",
  	    CmpiData(m_CreateMask));
  	}

  	if (isSet.Description) {
  	  
  	  cmpiInstance.setProperty(
  	    "Description",
  	    CmpiData(m_Description));
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

  	if (isSet.ElementName) {
  	  
  	  cmpiInstance.setProperty(
  	    "ElementName",
  	    CmpiData(m_ElementName));
  	}

  	
  	return cmpiInstance;
  	
  }
  
  //----------------------------------------------------------------------------
  // InstanceName related methods
  //----------------------------------------------------------------------------
  unsigned int 
  Linux_SambaShareSecurityOptionsInstance::isInstanceNameSet() const {
  	return isSet.instanceName;
  }
  
  //----------------------------------------------------------------------------
  const Linux_SambaShareSecurityOptionsInstanceName&
  Linux_SambaShareSecurityOptionsInstance::getInstanceName() const {

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
  Linux_SambaShareSecurityOptionsInstance::setInstanceName(
    const Linux_SambaShareSecurityOptionsInstanceName& val) {

    m_instanceName = val;
    isSet.instanceName = 1;

  }
       
  //----------------------------------------------------------------------------
  // Caption related methods
  //----------------------------------------------------------------------------
  unsigned int
  Linux_SambaShareSecurityOptionsInstance::isCaptionSet() const {
    return isSet.Caption;
  }

  //----------------------------------------------------------------------------
  void
  Linux_SambaShareSecurityOptionsInstance::setCaption(
    const char* aValueP,
    int aCopyFlag) {
    
    if (isSet.Caption) {
      delete [] m_Caption;
    }
    
    if (aCopyFlag && aValueP) {
      char* valueP = new char[strlen(aValueP) + 1];
      strcpy(valueP,aValueP);
      m_Caption = valueP;
    } else {
      m_Caption = aValueP;
    }
    
    isSet.Caption = 1;

  }       

  //----------------------------------------------------------------------------
  const char*
  Linux_SambaShareSecurityOptionsInstance::getCaption() const {
    
    if ( ! isSet.Caption) {
   	  throw CmpiErrorFormater::getErrorException(
   	    CmpiErrorFormater::NOT_SET,
        "Caption",
        "Linux_SambaShareSecurityOptions");
   	}


    return m_Caption;

  }
       
  //----------------------------------------------------------------------------
  // CreateMask related methods
  //----------------------------------------------------------------------------
  unsigned int
  Linux_SambaShareSecurityOptionsInstance::isCreateMaskSet() const {
    return isSet.CreateMask;
  }

  //----------------------------------------------------------------------------
  void Linux_SambaShareSecurityOptionsInstance::setCreateMask(
    const CMPIUint16 aValue) {
  
    m_CreateMask = aValue;
    isSet.CreateMask = 1;
  
  }       

  //----------------------------------------------------------------------------
  const CMPIUint16
  Linux_SambaShareSecurityOptionsInstance::getCreateMask() const {
    
    if ( ! isSet.CreateMask) {
   	  throw CmpiErrorFormater::getErrorException(
   	    CmpiErrorFormater::NOT_SET,
        "CreateMask",
        "Linux_SambaShareSecurityOptions");
   	}


    return m_CreateMask;

  }
       
  //----------------------------------------------------------------------------
  // Description related methods
  //----------------------------------------------------------------------------
  unsigned int
  Linux_SambaShareSecurityOptionsInstance::isDescriptionSet() const {
    return isSet.Description;
  }

  //----------------------------------------------------------------------------
  void
  Linux_SambaShareSecurityOptionsInstance::setDescription(
    const char* aValueP,
    int aCopyFlag) {
    
    if (isSet.Description) {
      delete [] m_Description;
    }
    
    if (aCopyFlag && aValueP) {
      char* valueP = new char[strlen(aValueP) + 1];
      strcpy(valueP,aValueP);
      m_Description = valueP;
    } else {
      m_Description = aValueP;
    }
    
    isSet.Description = 1;

  }       

  //----------------------------------------------------------------------------
  const char*
  Linux_SambaShareSecurityOptionsInstance::getDescription() const {
    
    if ( ! isSet.Description) {
   	  throw CmpiErrorFormater::getErrorException(
   	    CmpiErrorFormater::NOT_SET,
        "Description",
        "Linux_SambaShareSecurityOptions");
   	}


    return m_Description;

  }
       
  //----------------------------------------------------------------------------
  // DirectoryMask related methods
  //----------------------------------------------------------------------------
  unsigned int
  Linux_SambaShareSecurityOptionsInstance::isDirectoryMaskSet() const {
    return isSet.DirectoryMask;
  }

  //----------------------------------------------------------------------------
  void Linux_SambaShareSecurityOptionsInstance::setDirectoryMask(
    const CMPIUint16 aValue) {
  
    m_DirectoryMask = aValue;
    isSet.DirectoryMask = 1;
  
  }       

  //----------------------------------------------------------------------------
  const CMPIUint16
  Linux_SambaShareSecurityOptionsInstance::getDirectoryMask() const {
    
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
  Linux_SambaShareSecurityOptionsInstance::isDirectorySecurityMaskSet() const {
    return isSet.DirectorySecurityMask;
  }

  //----------------------------------------------------------------------------
  void Linux_SambaShareSecurityOptionsInstance::setDirectorySecurityMask(
    const CMPIUint16 aValue) {
  
    m_DirectorySecurityMask = aValue;
    isSet.DirectorySecurityMask = 1;
  
  }       

  //----------------------------------------------------------------------------
  const CMPIUint16
  Linux_SambaShareSecurityOptionsInstance::getDirectorySecurityMask() const {
    
    if ( ! isSet.DirectorySecurityMask) {
   	  throw CmpiErrorFormater::getErrorException(
   	    CmpiErrorFormater::NOT_SET,
        "DirectorySecurityMask",
        "Linux_SambaShareSecurityOptions");
   	}


    return m_DirectorySecurityMask;

  }
       
  //----------------------------------------------------------------------------
  // ElementName related methods
  //----------------------------------------------------------------------------
  unsigned int
  Linux_SambaShareSecurityOptionsInstance::isElementNameSet() const {
    return isSet.ElementName;
  }

  //----------------------------------------------------------------------------
  void
  Linux_SambaShareSecurityOptionsInstance::setElementName(
    const char* aValueP,
    int aCopyFlag) {
    
    if (isSet.ElementName) {
      delete [] m_ElementName;
    }
    
    if (aCopyFlag && aValueP) {
      char* valueP = new char[strlen(aValueP) + 1];
      strcpy(valueP,aValueP);
      m_ElementName = valueP;
    } else {
      m_ElementName = aValueP;
    }
    
    isSet.ElementName = 1;

  }       

  //----------------------------------------------------------------------------
  const char*
  Linux_SambaShareSecurityOptionsInstance::getElementName() const {
    
    if ( ! isSet.ElementName) {
   	  throw CmpiErrorFormater::getErrorException(
   	    CmpiErrorFormater::NOT_SET,
        "ElementName",
        "Linux_SambaShareSecurityOptions");
   	}


    return m_ElementName;

  }

  
  //----------------------------------------------------------------------------
  //set isSet attributes to FALSE
  //----------------------------------------------------------------------------
  void
  Linux_SambaShareSecurityOptionsInstance::init() {
   	isSet.instanceName = 0;
    isSet.Caption = 0;
    isSet.CreateMask = 0;
    isSet.Description = 0;
    isSet.DirectoryMask = 0;
    isSet.DirectorySecurityMask = 0;
    isSet.ElementName = 0;
  	
  }
  
  //----------------------------------------------------------------------------
  //copies another instance properties in this
  //----------------------------------------------------------------------------
  void 
  Linux_SambaShareSecurityOptionsInstance::init(
    const Linux_SambaShareSecurityOptionsInstance& anOriginal) {   	

   	init();
   	   	
    if(anOriginal.isInstanceNameSet()) {
      setInstanceName(anOriginal.getInstanceName());
    }
       	
    if (anOriginal.isCaptionSet()) {
      const char* CaptionOriginal = anOriginal.getCaption();
      setCaption(CaptionOriginal,1);
    }
   	
    if (anOriginal.isCreateMaskSet()) {
      const CMPIUint16 CreateMaskOriginal = anOriginal.getCreateMask();
      setCreateMask(CreateMaskOriginal);
    }
   	
    if (anOriginal.isDescriptionSet()) {
      const char* DescriptionOriginal = anOriginal.getDescription();
      setDescription(DescriptionOriginal,1);
    }
   	
    if (anOriginal.isDirectoryMaskSet()) {
      const CMPIUint16 DirectoryMaskOriginal = anOriginal.getDirectoryMask();
      setDirectoryMask(DirectoryMaskOriginal);
    }
   	
    if (anOriginal.isDirectorySecurityMaskSet()) {
      const CMPIUint16 DirectorySecurityMaskOriginal = anOriginal.getDirectorySecurityMask();
      setDirectorySecurityMask(DirectorySecurityMaskOriginal);
    }
   	
    if (anOriginal.isElementNameSet()) {
      const char* ElementNameOriginal = anOriginal.getElementName();
      setElementName(ElementNameOriginal,1);
    }
    
  }
  
  //----------------------------------------------------------------------------
  //reset the instance data
  //----------------------------------------------------------------------------
  void
  Linux_SambaShareSecurityOptionsInstance::reset() {
   	
  	if (isSet.Caption) {
  	  delete(m_Caption);
  	}

  	if (isSet.Description) {
  	  delete(m_Description);
  	}

  	if (isSet.ElementName) {
  	  delete(m_ElementName);
  	}

  }
  
  //----------------------------------------------------------------------------
  //Linux_SambaShareSecurityOptionsInstanceEnumerationElement	
  //----------------------------------------------------------------------------
  Linux_SambaShareSecurityOptionsInstanceEnumerationElement::Linux_SambaShareSecurityOptionsInstanceEnumerationElement() {
   	
  	m_elementP = 0;
  	m_nextP = 0;
  	  
  }
  
  //----------------------------------------------------------------------------
  Linux_SambaShareSecurityOptionsInstanceEnumerationElement::~Linux_SambaShareSecurityOptionsInstanceEnumerationElement() {
   	
  	if (m_elementP) {
  	  delete(m_elementP);
  	}
  	
  	if (m_nextP) {
  	  delete(m_nextP);
  	}
  	  
  }

  //----------------------------------------------------------------------------
  //Linux_SambaShareSecurityOptionsInstanceNameEnumeration
  //----------------------------------------------------------------------------
  Linux_SambaShareSecurityOptionsInstanceEnumeration::Linux_SambaShareSecurityOptionsInstanceEnumeration() {
   	
    m_firstElementP = 0;
    m_currentElementP = 0;
    m_endElementP = 0;
  
  }
  
  //----------------------------------------------------------------------------
  Linux_SambaShareSecurityOptionsInstanceEnumeration::Linux_SambaShareSecurityOptionsInstanceEnumeration(
    const Linux_SambaShareSecurityOptionsInstanceEnumeration& anInstanceEnumeration) {
   	
    m_firstElementP = 0;
    m_currentElementP = 0;
    m_endElementP = 0;
  	 
    int size = anInstanceEnumeration.getSize();
    for (int x=0; x < size;++x) {
      addElement(anInstanceEnumeration.getElement(x));
    }           

  }
  
  //----------------------------------------------------------------------------
  Linux_SambaShareSecurityOptionsInstanceEnumeration::~Linux_SambaShareSecurityOptionsInstanceEnumeration() {
   	
  	if (m_firstElementP) {
  	  delete(m_firstElementP);
  	}
  	  	
  }
  
  //----------------------------------------------------------------------------
  void
  Linux_SambaShareSecurityOptionsInstanceEnumeration::reset() {
  	
  	m_currentElementP = m_firstElementP;
  	
  }
  	  
  //----------------------------------------------------------------------------
  bool
  Linux_SambaShareSecurityOptionsInstanceEnumeration::hasNext() const {
  	
  	return (m_currentElementP != 0);
  
  }
  
  //----------------------------------------------------------------------------
  int
  Linux_SambaShareSecurityOptionsInstanceEnumeration::getSize() const {
  	
    int size = 0;
    Linux_SambaShareSecurityOptionsInstanceEnumerationElement* followingP = m_firstElementP;
  	
  	while (followingP) {
      followingP = followingP->m_nextP;
      ++size;
    }
  	
    return size;
    
  }
  
  //----------------------------------------------------------------------------
  const Linux_SambaShareSecurityOptionsInstance&  
  Linux_SambaShareSecurityOptionsInstanceEnumeration::getElement(int anIndex) const {
   
    Linux_SambaShareSecurityOptionsInstanceEnumerationElement* followingP = m_firstElementP;
   
    int x = 0;
    while (followingP && (x < anIndex)) {
      followingP = followingP->m_nextP;
      ++x;
    }
    
    return *(followingP->m_elementP);

  }
  
  //----------------------------------------------------------------------------
  const Linux_SambaShareSecurityOptionsInstance&
  Linux_SambaShareSecurityOptionsInstanceEnumeration::getNext() {
   	
    Linux_SambaShareSecurityOptionsInstanceEnumerationElement* currentElementP =
  	  m_currentElementP;

    m_currentElementP = m_currentElementP->m_nextP;
  	 
    return *(currentElementP->m_elementP);

  }
  	  
  //----------------------------------------------------------------------------
  void
  Linux_SambaShareSecurityOptionsInstanceEnumeration::addElement(
    const Linux_SambaShareSecurityOptionsInstance& anInstance) {
   	
  	if (m_firstElementP == 0) {
  	  m_firstElementP = new Linux_SambaShareSecurityOptionsInstanceEnumerationElement();
  	  m_firstElementP->m_elementP = new Linux_SambaShareSecurityOptionsInstance(anInstance);
  	  m_endElementP = m_firstElementP;
  	  m_currentElementP = m_firstElementP;
  	} else {
  	  m_endElementP->m_nextP = new Linux_SambaShareSecurityOptionsInstanceEnumerationElement();
  	  m_endElementP = m_endElementP->m_nextP;
  	  m_endElementP->m_elementP = new Linux_SambaShareSecurityOptionsInstance(anInstance);
  	}

  }
  
}
