// =======================================================================
// Linux_SambaShareFileNameHandlingOptionsInstance.cpp
//     created on Mon, 26 Jun 2006 using ECUTE 2.2.1
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
#include "Linux_SambaShareFileNameHandlingOptionsInstance.h"
#include "CmpiData.h"
#include "CmpiString.h"
#include "CmpiArray.h"
#include <string>

namespace genProvider {

  //****************************************************************************
  //Linux_SambaShareFileNameHandlingOptionsInstance
  //----------------------------------------------------------------------------
  //empty constructor
  Linux_SambaShareFileNameHandlingOptionsInstance::Linux_SambaShareFileNameHandlingOptionsInstance() {   	
   	init();  	   	
  }
  
  //----------------------------------------------------------------------------
  //copy constructor	
  //----------------------------------------------------------------------------
  Linux_SambaShareFileNameHandlingOptionsInstance::Linux_SambaShareFileNameHandlingOptionsInstance(
    const Linux_SambaShareFileNameHandlingOptionsInstance& anInstance) {   	
   	init(anInstance);  	   	
  }
  
  //----------------------------------------------------------------------------
  //constructor using CmpiInstance
  //----------------------------------------------------------------------------
  Linux_SambaShareFileNameHandlingOptionsInstance::Linux_SambaShareFileNameHandlingOptionsInstance(
    const CmpiInstance& aCmpiInstance,
    const char* anInstanceNamespaceP) {

    CmpiData cmpiData;

    init(); 
    
    CmpiObjectPath cop = aCmpiInstance.getObjectPath();
    cop.setNameSpace(anInstanceNamespaceP);
    setInstanceName(Linux_SambaShareFileNameHandlingOptionsInstanceName(cop));

    cmpiData = aCmpiInstance.getProperty("Caption");
    if ( ! cmpiData.isNullValue()){
      CmpiString Caption = cmpiData;
      setCaption(Caption.charPtr());
    }

    cmpiData = aCmpiInstance.getProperty("CaseSensitive");
    if ( ! cmpiData.isNullValue()){
      CMPIBoolean CaseSensitive = cmpiData;
      setCaseSensitive(CaseSensitive);
    }

    cmpiData = aCmpiInstance.getProperty("Description");
    if ( ! cmpiData.isNullValue()){
      CmpiString Description = cmpiData;
      setDescription(Description.charPtr());
    }

    cmpiData = aCmpiInstance.getProperty("DosFiletimes");
    if ( ! cmpiData.isNullValue()){
      CMPIBoolean DosFiletimes = cmpiData;
      setDosFiletimes(DosFiletimes);
    }

    cmpiData = aCmpiInstance.getProperty("ElementName");
    if ( ! cmpiData.isNullValue()){
      CmpiString ElementName = cmpiData;
      setElementName(ElementName.charPtr());
    }

    cmpiData = aCmpiInstance.getProperty("HideDotFiles");
    if ( ! cmpiData.isNullValue()){
      CMPIBoolean HideDotFiles = cmpiData;
      setHideDotFiles(HideDotFiles);
    }

    
  }
  
  //----------------------------------------------------------------------------
  //Destructor
  //----------------------------------------------------------------------------
  Linux_SambaShareFileNameHandlingOptionsInstance::
   ~Linux_SambaShareFileNameHandlingOptionsInstance(){
   	reset();  	  
  }
  
  
  //----------------------------------------------------------------------------
  //copy operator
  //----------------------------------------------------------------------------
  Linux_SambaShareFileNameHandlingOptionsInstance&
  Linux_SambaShareFileNameHandlingOptionsInstance::operator=(
    const Linux_SambaShareFileNameHandlingOptionsInstance& anInstance) {   	
   	
   	init(anInstance);
   	return *this;
  
  }
  
  
  //----------------------------------------------------------------------------
  //converts to CmpiInstance
  //----------------------------------------------------------------------------
  CmpiInstance
  Linux_SambaShareFileNameHandlingOptionsInstance::getCmpiInstance(
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

  	if (isSet.CaseSensitive) {
  	  
  	  cmpiInstance.setProperty(
  	    "CaseSensitive",
  	    CmpiBooleanData(m_CaseSensitive));
  	}

  	if (isSet.Description) {
  	  
  	  cmpiInstance.setProperty(
  	    "Description",
  	    CmpiData(m_Description));
  	}

  	if (isSet.DosFiletimes) {
  	  
  	  cmpiInstance.setProperty(
  	    "DosFiletimes",
  	    CmpiBooleanData(m_DosFiletimes));
  	}

  	if (isSet.ElementName) {
  	  
  	  cmpiInstance.setProperty(
  	    "ElementName",
  	    CmpiData(m_ElementName));
  	}

  	if (isSet.HideDotFiles) {
  	  
  	  cmpiInstance.setProperty(
  	    "HideDotFiles",
  	    CmpiBooleanData(m_HideDotFiles));
  	}

  	
  	return cmpiInstance;
  	
  }
  
  //----------------------------------------------------------------------------
  // InstanceName related methods
  //----------------------------------------------------------------------------
  unsigned int 
  Linux_SambaShareFileNameHandlingOptionsInstance::isInstanceNameSet() const {
  	return isSet.instanceName;
  }
  
  //----------------------------------------------------------------------------
  const Linux_SambaShareFileNameHandlingOptionsInstanceName&
  Linux_SambaShareFileNameHandlingOptionsInstance::getInstanceName() const {

    if( ! isSet.instanceName) {
   	  throw CmpiErrorFormater::getErrorException(
        CmpiErrorFormater::NOT_SET,
        "InstanceName (CIM Key Attributes)",
        "Linux_SambaShareFileNameHandlingOptions");
   	}
  		
   	return m_instanceName;
  
  }

  //----------------------------------------------------------------------------
  void
  Linux_SambaShareFileNameHandlingOptionsInstance::setInstanceName(
    const Linux_SambaShareFileNameHandlingOptionsInstanceName& val) {

    m_instanceName = val;
    isSet.instanceName = 1;

  }
       
  //----------------------------------------------------------------------------
  // Caption related methods
  //----------------------------------------------------------------------------
  unsigned int
  Linux_SambaShareFileNameHandlingOptionsInstance::isCaptionSet() const {
    return isSet.Caption;
  }

  //----------------------------------------------------------------------------
  void
  Linux_SambaShareFileNameHandlingOptionsInstance::setCaption(
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
  Linux_SambaShareFileNameHandlingOptionsInstance::getCaption() const {
    
    if ( ! isSet.Caption) {
   	  throw CmpiErrorFormater::getErrorException(
   	    CmpiErrorFormater::NOT_SET,
        "Caption",
        "Linux_SambaShareFileNameHandlingOptions");
   	}


    return m_Caption;

  }
       
  //----------------------------------------------------------------------------
  // CaseSensitive related methods
  //----------------------------------------------------------------------------
  unsigned int
  Linux_SambaShareFileNameHandlingOptionsInstance::isCaseSensitiveSet() const {
    return isSet.CaseSensitive;
  }

  //----------------------------------------------------------------------------
  void Linux_SambaShareFileNameHandlingOptionsInstance::setCaseSensitive(
    const CMPIBoolean aValue) {
  
    m_CaseSensitive = aValue;
    isSet.CaseSensitive = 1;
  
  }       

  //----------------------------------------------------------------------------
  const CMPIBoolean
  Linux_SambaShareFileNameHandlingOptionsInstance::getCaseSensitive() const {
    
    if ( ! isSet.CaseSensitive) {
   	  throw CmpiErrorFormater::getErrorException(
   	    CmpiErrorFormater::NOT_SET,
        "CaseSensitive",
        "Linux_SambaShareFileNameHandlingOptions");
   	}


    return m_CaseSensitive;

  }
       
  //----------------------------------------------------------------------------
  // Description related methods
  //----------------------------------------------------------------------------
  unsigned int
  Linux_SambaShareFileNameHandlingOptionsInstance::isDescriptionSet() const {
    return isSet.Description;
  }

  //----------------------------------------------------------------------------
  void
  Linux_SambaShareFileNameHandlingOptionsInstance::setDescription(
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
  Linux_SambaShareFileNameHandlingOptionsInstance::getDescription() const {
    
    if ( ! isSet.Description) {
   	  throw CmpiErrorFormater::getErrorException(
   	    CmpiErrorFormater::NOT_SET,
        "Description",
        "Linux_SambaShareFileNameHandlingOptions");
   	}


    return m_Description;

  }
       
  //----------------------------------------------------------------------------
  // DosFiletimes related methods
  //----------------------------------------------------------------------------
  unsigned int
  Linux_SambaShareFileNameHandlingOptionsInstance::isDosFiletimesSet() const {
    return isSet.DosFiletimes;
  }

  //----------------------------------------------------------------------------
  void Linux_SambaShareFileNameHandlingOptionsInstance::setDosFiletimes(
    const CMPIBoolean aValue) {
  
    m_DosFiletimes = aValue;
    isSet.DosFiletimes = 1;
  
  }       

  //----------------------------------------------------------------------------
  const CMPIBoolean
  Linux_SambaShareFileNameHandlingOptionsInstance::getDosFiletimes() const {
    
    if ( ! isSet.DosFiletimes) {
   	  throw CmpiErrorFormater::getErrorException(
   	    CmpiErrorFormater::NOT_SET,
        "DosFiletimes",
        "Linux_SambaShareFileNameHandlingOptions");
   	}


    return m_DosFiletimes;

  }
       
  //----------------------------------------------------------------------------
  // ElementName related methods
  //----------------------------------------------------------------------------
  unsigned int
  Linux_SambaShareFileNameHandlingOptionsInstance::isElementNameSet() const {
    return isSet.ElementName;
  }

  //----------------------------------------------------------------------------
  void
  Linux_SambaShareFileNameHandlingOptionsInstance::setElementName(
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
  Linux_SambaShareFileNameHandlingOptionsInstance::getElementName() const {
    
    if ( ! isSet.ElementName) {
   	  throw CmpiErrorFormater::getErrorException(
   	    CmpiErrorFormater::NOT_SET,
        "ElementName",
        "Linux_SambaShareFileNameHandlingOptions");
   	}


    return m_ElementName;

  }
       
  //----------------------------------------------------------------------------
  // HideDotFiles related methods
  //----------------------------------------------------------------------------
  unsigned int
  Linux_SambaShareFileNameHandlingOptionsInstance::isHideDotFilesSet() const {
    return isSet.HideDotFiles;
  }

  //----------------------------------------------------------------------------
  void Linux_SambaShareFileNameHandlingOptionsInstance::setHideDotFiles(
    const CMPIBoolean aValue) {
  
    m_HideDotFiles = aValue;
    isSet.HideDotFiles = 1;
  
  }       

  //----------------------------------------------------------------------------
  const CMPIBoolean
  Linux_SambaShareFileNameHandlingOptionsInstance::getHideDotFiles() const {
    
    if ( ! isSet.HideDotFiles) {
   	  throw CmpiErrorFormater::getErrorException(
   	    CmpiErrorFormater::NOT_SET,
        "HideDotFiles",
        "Linux_SambaShareFileNameHandlingOptions");
   	}


    return m_HideDotFiles;

  }

  
  //----------------------------------------------------------------------------
  //set isSet attributes to FALSE
  //----------------------------------------------------------------------------
  void
  Linux_SambaShareFileNameHandlingOptionsInstance::init() {
   	isSet.instanceName = 0;
    isSet.Caption = 0;
    isSet.CaseSensitive = 0;
    isSet.Description = 0;
    isSet.DosFiletimes = 0;
    isSet.ElementName = 0;
    isSet.HideDotFiles = 0;
  	
  }
  
  //----------------------------------------------------------------------------
  //copies another instance properties in this
  //----------------------------------------------------------------------------
  void 
  Linux_SambaShareFileNameHandlingOptionsInstance::init(
    const Linux_SambaShareFileNameHandlingOptionsInstance& anOriginal) {   	

   	init();
   	   	
    if(anOriginal.isInstanceNameSet()) {
      setInstanceName(anOriginal.getInstanceName());
    }
       	
    if (anOriginal.isCaptionSet()) {
      const char* CaptionOriginal = anOriginal.getCaption();
      setCaption(CaptionOriginal,1);
    }
   	
    if (anOriginal.isCaseSensitiveSet()) {
      const CMPIBoolean CaseSensitiveOriginal = anOriginal.getCaseSensitive();
      setCaseSensitive(CaseSensitiveOriginal);
    }
   	
    if (anOriginal.isDescriptionSet()) {
      const char* DescriptionOriginal = anOriginal.getDescription();
      setDescription(DescriptionOriginal,1);
    }
   	
    if (anOriginal.isDosFiletimesSet()) {
      const CMPIBoolean DosFiletimesOriginal = anOriginal.getDosFiletimes();
      setDosFiletimes(DosFiletimesOriginal);
    }
   	
    if (anOriginal.isElementNameSet()) {
      const char* ElementNameOriginal = anOriginal.getElementName();
      setElementName(ElementNameOriginal,1);
    }
   	
    if (anOriginal.isHideDotFilesSet()) {
      const CMPIBoolean HideDotFilesOriginal = anOriginal.getHideDotFiles();
      setHideDotFiles(HideDotFilesOriginal);
    }
    
  }
  
  //----------------------------------------------------------------------------
  //reset the instance data
  //----------------------------------------------------------------------------
  void
  Linux_SambaShareFileNameHandlingOptionsInstance::reset() {
   	
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
  //Linux_SambaShareFileNameHandlingOptionsInstanceEnumerationElement	
  //----------------------------------------------------------------------------
  Linux_SambaShareFileNameHandlingOptionsInstanceEnumerationElement::Linux_SambaShareFileNameHandlingOptionsInstanceEnumerationElement() {
   	
  	m_elementP = 0;
  	m_nextP = 0;
  	  
  }
  
  //----------------------------------------------------------------------------
  Linux_SambaShareFileNameHandlingOptionsInstanceEnumerationElement::~Linux_SambaShareFileNameHandlingOptionsInstanceEnumerationElement() {
   	
  	if (m_elementP) {
  	  delete(m_elementP);
  	}
  	
  	if (m_nextP) {
  	  delete(m_nextP);
  	}
  	  
  }

  //----------------------------------------------------------------------------
  //Linux_SambaShareFileNameHandlingOptionsInstanceNameEnumeration
  //----------------------------------------------------------------------------
  Linux_SambaShareFileNameHandlingOptionsInstanceEnumeration::Linux_SambaShareFileNameHandlingOptionsInstanceEnumeration() {
   	
    m_firstElementP = 0;
    m_currentElementP = 0;
    m_endElementP = 0;
  
  }
  
  //----------------------------------------------------------------------------
  Linux_SambaShareFileNameHandlingOptionsInstanceEnumeration::Linux_SambaShareFileNameHandlingOptionsInstanceEnumeration(
    const Linux_SambaShareFileNameHandlingOptionsInstanceEnumeration& anInstanceEnumeration) {
   	
    m_firstElementP = 0;
    m_currentElementP = 0;
    m_endElementP = 0;
  	 
    int size = anInstanceEnumeration.getSize();
    for (int x=0; x < size;++x) {
      addElement(anInstanceEnumeration.getElement(x));
    }           

  }
  
  //----------------------------------------------------------------------------
  Linux_SambaShareFileNameHandlingOptionsInstanceEnumeration::~Linux_SambaShareFileNameHandlingOptionsInstanceEnumeration() {
   	
  	if (m_firstElementP) {
  	  delete(m_firstElementP);
  	}
  	  	
  }
  
  //----------------------------------------------------------------------------
  void
  Linux_SambaShareFileNameHandlingOptionsInstanceEnumeration::reset() {
  	
  	m_currentElementP = m_firstElementP;
  	
  }
  	  
  //----------------------------------------------------------------------------
  bool
  Linux_SambaShareFileNameHandlingOptionsInstanceEnumeration::hasNext() const {
  	
  	return (m_currentElementP != 0);
  
  }
  
  //----------------------------------------------------------------------------
  int
  Linux_SambaShareFileNameHandlingOptionsInstanceEnumeration::getSize() const {
  	
    int size = 0;
    Linux_SambaShareFileNameHandlingOptionsInstanceEnumerationElement* followingP = m_firstElementP;
  	
  	while (followingP) {
      followingP = followingP->m_nextP;
      ++size;
    }
  	
    return size;
    
  }
  
  //----------------------------------------------------------------------------
  const Linux_SambaShareFileNameHandlingOptionsInstance&  
  Linux_SambaShareFileNameHandlingOptionsInstanceEnumeration::getElement(int anIndex) const {
   
    Linux_SambaShareFileNameHandlingOptionsInstanceEnumerationElement* followingP = m_firstElementP;
   
    int x = 0;
    while (followingP && (x < anIndex)) {
      followingP = followingP->m_nextP;
      ++x;
    }
    
    return *(followingP->m_elementP);

  }
  
  //----------------------------------------------------------------------------
  const Linux_SambaShareFileNameHandlingOptionsInstance&
  Linux_SambaShareFileNameHandlingOptionsInstanceEnumeration::getNext() {
   	
    Linux_SambaShareFileNameHandlingOptionsInstanceEnumerationElement* currentElementP =
  	  m_currentElementP;

    m_currentElementP = m_currentElementP->m_nextP;
  	 
    return *(currentElementP->m_elementP);

  }
  	  
  //----------------------------------------------------------------------------
  void
  Linux_SambaShareFileNameHandlingOptionsInstanceEnumeration::addElement(
    const Linux_SambaShareFileNameHandlingOptionsInstance& anInstance) {
   	
  	if (m_firstElementP == 0) {
  	  m_firstElementP = new Linux_SambaShareFileNameHandlingOptionsInstanceEnumerationElement();
  	  m_firstElementP->m_elementP = new Linux_SambaShareFileNameHandlingOptionsInstance(anInstance);
  	  m_endElementP = m_firstElementP;
  	  m_currentElementP = m_firstElementP;
  	} else {
  	  m_endElementP->m_nextP = new Linux_SambaShareFileNameHandlingOptionsInstanceEnumerationElement();
  	  m_endElementP = m_endElementP->m_nextP;
  	  m_endElementP->m_elementP = new Linux_SambaShareFileNameHandlingOptionsInstance(anInstance);
  	}

  }
  
}
