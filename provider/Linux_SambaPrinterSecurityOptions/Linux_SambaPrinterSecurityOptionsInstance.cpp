// =======================================================================
// Linux_SambaPrinterSecurityOptionsInstance.cpp
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
#include "Linux_SambaPrinterSecurityOptionsInstance.h"
#include "CmpiData.h"
#include "CmpiString.h"
#include "CmpiArray.h"
#include <string>

namespace genProvider {

  //****************************************************************************
  //Linux_SambaPrinterSecurityOptionsInstance
  //----------------------------------------------------------------------------
  //empty constructor
  Linux_SambaPrinterSecurityOptionsInstance::Linux_SambaPrinterSecurityOptionsInstance() {   	
   	init();  	   	
  }
  
  //----------------------------------------------------------------------------
  //copy constructor	
  //----------------------------------------------------------------------------
  Linux_SambaPrinterSecurityOptionsInstance::Linux_SambaPrinterSecurityOptionsInstance(
    const Linux_SambaPrinterSecurityOptionsInstance& anInstance) {   	
   	init(anInstance);  	   	
  }
  
  //----------------------------------------------------------------------------
  //constructor using CmpiInstance
  //----------------------------------------------------------------------------
  Linux_SambaPrinterSecurityOptionsInstance::Linux_SambaPrinterSecurityOptionsInstance(
    const CmpiInstance& aCmpiInstance,
    const char* anInstanceNamespaceP) {

    CmpiData cmpiData;

    init(); 
    
    CmpiObjectPath cop = aCmpiInstance.getObjectPath();
    cop.setNameSpace(anInstanceNamespaceP);
    setInstanceName(Linux_SambaPrinterSecurityOptionsInstanceName(cop));

    cmpiData = aCmpiInstance.getProperty("Caption");
    if ( ! cmpiData.isNullValue()){
      CmpiString Caption = cmpiData;
      setCaption(Caption.charPtr());
    }

    cmpiData = aCmpiInstance.getProperty("Description");
    if ( ! cmpiData.isNullValue()){
      CmpiString Description = cmpiData;
      setDescription(Description.charPtr());
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
  Linux_SambaPrinterSecurityOptionsInstance::
   ~Linux_SambaPrinterSecurityOptionsInstance(){
   	reset();  	  
  }
  
  
  //----------------------------------------------------------------------------
  //copy operator
  //----------------------------------------------------------------------------
  Linux_SambaPrinterSecurityOptionsInstance&
  Linux_SambaPrinterSecurityOptionsInstance::operator=(
    const Linux_SambaPrinterSecurityOptionsInstance& anInstance) {   	
   	
   	init(anInstance);
   	return *this;
  
  }
  
  
  //----------------------------------------------------------------------------
  //converts to CmpiInstance
  //----------------------------------------------------------------------------
  CmpiInstance
  Linux_SambaPrinterSecurityOptionsInstance::getCmpiInstance(
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

  	if (isSet.Description) {
  	  
  	  cmpiInstance.setProperty(
  	    "Description",
  	    CmpiData(m_Description));
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
  Linux_SambaPrinterSecurityOptionsInstance::isInstanceNameSet() const {
  	return isSet.instanceName;
  }
  
  //----------------------------------------------------------------------------
  const Linux_SambaPrinterSecurityOptionsInstanceName&
  Linux_SambaPrinterSecurityOptionsInstance::getInstanceName() const {

    if( ! isSet.instanceName) {
   	  throw CmpiErrorFormater::getErrorException(
        CmpiErrorFormater::NOT_SET,
        "InstanceName (CIM Key Attributes)",
        "Linux_SambaPrinterSecurityOptions");
   	}
  		
   	return m_instanceName;
  
  }

  //----------------------------------------------------------------------------
  void
  Linux_SambaPrinterSecurityOptionsInstance::setInstanceName(
    const Linux_SambaPrinterSecurityOptionsInstanceName& val) {

    m_instanceName = val;
    isSet.instanceName = 1;

  }
       
  //----------------------------------------------------------------------------
  // Caption related methods
  //----------------------------------------------------------------------------
  unsigned int
  Linux_SambaPrinterSecurityOptionsInstance::isCaptionSet() const {
    return isSet.Caption;
  }

  //----------------------------------------------------------------------------
  void
  Linux_SambaPrinterSecurityOptionsInstance::setCaption(
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
  Linux_SambaPrinterSecurityOptionsInstance::getCaption() const {
    
    if ( ! isSet.Caption) {
   	  throw CmpiErrorFormater::getErrorException(
   	    CmpiErrorFormater::NOT_SET,
        "Caption",
        "Linux_SambaPrinterSecurityOptions");
   	}


    return m_Caption;

  }
       
  //----------------------------------------------------------------------------
  // Description related methods
  //----------------------------------------------------------------------------
  unsigned int
  Linux_SambaPrinterSecurityOptionsInstance::isDescriptionSet() const {
    return isSet.Description;
  }

  //----------------------------------------------------------------------------
  void
  Linux_SambaPrinterSecurityOptionsInstance::setDescription(
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
  Linux_SambaPrinterSecurityOptionsInstance::getDescription() const {
    
    if ( ! isSet.Description) {
   	  throw CmpiErrorFormater::getErrorException(
   	    CmpiErrorFormater::NOT_SET,
        "Description",
        "Linux_SambaPrinterSecurityOptions");
   	}


    return m_Description;

  }
       
  //----------------------------------------------------------------------------
  // ElementName related methods
  //----------------------------------------------------------------------------
  unsigned int
  Linux_SambaPrinterSecurityOptionsInstance::isElementNameSet() const {
    return isSet.ElementName;
  }

  //----------------------------------------------------------------------------
  void
  Linux_SambaPrinterSecurityOptionsInstance::setElementName(
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
  Linux_SambaPrinterSecurityOptionsInstance::getElementName() const {
    
    if ( ! isSet.ElementName) {
   	  throw CmpiErrorFormater::getErrorException(
   	    CmpiErrorFormater::NOT_SET,
        "ElementName",
        "Linux_SambaPrinterSecurityOptions");
   	}


    return m_ElementName;

  }

  
  //----------------------------------------------------------------------------
  //set isSet attributes to FALSE
  //----------------------------------------------------------------------------
  void
  Linux_SambaPrinterSecurityOptionsInstance::init() {
   	isSet.instanceName = 0;
    isSet.Caption = 0;
    isSet.Description = 0;
    isSet.ElementName = 0;
  	
  }
  
  //----------------------------------------------------------------------------
  //copies another instance properties in this
  //----------------------------------------------------------------------------
  void 
  Linux_SambaPrinterSecurityOptionsInstance::init(
    const Linux_SambaPrinterSecurityOptionsInstance& anOriginal) {   	

   	init();
   	   	
    if(anOriginal.isInstanceNameSet()) {
      setInstanceName(anOriginal.getInstanceName());
    }
       	
    if (anOriginal.isCaptionSet()) {
      const char* CaptionOriginal = anOriginal.getCaption();
      setCaption(CaptionOriginal,1);
    }
   	
    if (anOriginal.isDescriptionSet()) {
      const char* DescriptionOriginal = anOriginal.getDescription();
      setDescription(DescriptionOriginal,1);
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
  Linux_SambaPrinterSecurityOptionsInstance::reset() {
   	
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
  //Linux_SambaPrinterSecurityOptionsInstanceEnumerationElement	
  //----------------------------------------------------------------------------
  Linux_SambaPrinterSecurityOptionsInstanceEnumerationElement::Linux_SambaPrinterSecurityOptionsInstanceEnumerationElement() {
   	
  	m_elementP = 0;
  	m_nextP = 0;
  	  
  }
  
  //----------------------------------------------------------------------------
  Linux_SambaPrinterSecurityOptionsInstanceEnumerationElement::~Linux_SambaPrinterSecurityOptionsInstanceEnumerationElement() {
   	
  	if (m_elementP) {
  	  delete(m_elementP);
  	}
  	
  	if (m_nextP) {
  	  delete(m_nextP);
  	}
  	  
  }

  //----------------------------------------------------------------------------
  //Linux_SambaPrinterSecurityOptionsInstanceNameEnumeration
  //----------------------------------------------------------------------------
  Linux_SambaPrinterSecurityOptionsInstanceEnumeration::Linux_SambaPrinterSecurityOptionsInstanceEnumeration() {
   	
    m_firstElementP = 0;
    m_currentElementP = 0;
    m_endElementP = 0;
  
  }
  
  //----------------------------------------------------------------------------
  Linux_SambaPrinterSecurityOptionsInstanceEnumeration::Linux_SambaPrinterSecurityOptionsInstanceEnumeration(
    const Linux_SambaPrinterSecurityOptionsInstanceEnumeration& anInstanceEnumeration) {
   	
    m_firstElementP = 0;
    m_currentElementP = 0;
    m_endElementP = 0;
  	 
    int size = anInstanceEnumeration.getSize();
    for (int x=0; x < size;++x) {
      addElement(anInstanceEnumeration.getElement(x));
    }           

  }
  
  //----------------------------------------------------------------------------
  Linux_SambaPrinterSecurityOptionsInstanceEnumeration::~Linux_SambaPrinterSecurityOptionsInstanceEnumeration() {
   	
  	if (m_firstElementP) {
  	  delete(m_firstElementP);
  	}
  	  	
  }
  
  //----------------------------------------------------------------------------
  void
  Linux_SambaPrinterSecurityOptionsInstanceEnumeration::reset() {
  	
  	m_currentElementP = m_firstElementP;
  	
  }
  	  
  //----------------------------------------------------------------------------
  bool
  Linux_SambaPrinterSecurityOptionsInstanceEnumeration::hasNext() const {
  	
  	return (m_currentElementP != 0);
  
  }
  
  //----------------------------------------------------------------------------
  int
  Linux_SambaPrinterSecurityOptionsInstanceEnumeration::getSize() const {
  	
    int size = 0;
    Linux_SambaPrinterSecurityOptionsInstanceEnumerationElement* followingP = m_firstElementP;
  	
  	while (followingP) {
      followingP = followingP->m_nextP;
      ++size;
    }
  	
    return size;
    
  }
  
  //----------------------------------------------------------------------------
  const Linux_SambaPrinterSecurityOptionsInstance&  
  Linux_SambaPrinterSecurityOptionsInstanceEnumeration::getElement(int anIndex) const {
   
    Linux_SambaPrinterSecurityOptionsInstanceEnumerationElement* followingP = m_firstElementP;
   
    int x = 0;
    while (followingP && (x < anIndex)) {
      followingP = followingP->m_nextP;
      ++x;
    }
    
    return *(followingP->m_elementP);

  }
  
  //----------------------------------------------------------------------------
  const Linux_SambaPrinterSecurityOptionsInstance&
  Linux_SambaPrinterSecurityOptionsInstanceEnumeration::getNext() {
   	
    Linux_SambaPrinterSecurityOptionsInstanceEnumerationElement* currentElementP =
  	  m_currentElementP;

    m_currentElementP = m_currentElementP->m_nextP;
  	 
    return *(currentElementP->m_elementP);

  }
  	  
  //----------------------------------------------------------------------------
  void
  Linux_SambaPrinterSecurityOptionsInstanceEnumeration::addElement(
    const Linux_SambaPrinterSecurityOptionsInstance& anInstance) {
   	
  	if (m_firstElementP == 0) {
  	  m_firstElementP = new Linux_SambaPrinterSecurityOptionsInstanceEnumerationElement();
  	  m_firstElementP->m_elementP = new Linux_SambaPrinterSecurityOptionsInstance(anInstance);
  	  m_endElementP = m_firstElementP;
  	  m_currentElementP = m_firstElementP;
  	} else {
  	  m_endElementP->m_nextP = new Linux_SambaPrinterSecurityOptionsInstanceEnumerationElement();
  	  m_endElementP = m_endElementP->m_nextP;
  	  m_endElementP->m_elementP = new Linux_SambaPrinterSecurityOptionsInstance(anInstance);
  	}

  }
  
}
