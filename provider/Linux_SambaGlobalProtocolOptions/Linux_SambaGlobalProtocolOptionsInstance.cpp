// =======================================================================
// Linux_SambaGlobalProtocolOptionsInstance.cpp
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
#include "Linux_SambaGlobalProtocolOptionsInstance.h"
#include "CmpiData.h"
#include "CmpiString.h"
#include "CmpiArray.h"
#include <string>

namespace genProvider {

  //****************************************************************************
  //Linux_SambaGlobalProtocolOptionsInstance
  //----------------------------------------------------------------------------
  //empty constructor
  Linux_SambaGlobalProtocolOptionsInstance::Linux_SambaGlobalProtocolOptionsInstance() {   	
   	init();  	   	
  }
  
  //----------------------------------------------------------------------------
  //copy constructor	
  //----------------------------------------------------------------------------
  Linux_SambaGlobalProtocolOptionsInstance::Linux_SambaGlobalProtocolOptionsInstance(
    const Linux_SambaGlobalProtocolOptionsInstance& anInstance) {   	
   	init(anInstance);  	   	
  }
  
  //----------------------------------------------------------------------------
  //constructor using CmpiInstance
  //----------------------------------------------------------------------------
  Linux_SambaGlobalProtocolOptionsInstance::Linux_SambaGlobalProtocolOptionsInstance(
    const CmpiInstance& aCmpiInstance,
    const char* anInstanceNamespaceP) {

    CmpiData cmpiData;

    init(); 
    
    CmpiObjectPath cop = aCmpiInstance.getObjectPath();
    cop.setNameSpace(anInstanceNamespaceP);
    setInstanceName(Linux_SambaGlobalProtocolOptionsInstanceName(cop));

    cmpiData = aCmpiInstance.getProperty("AclCompatibility");
    if ( ! cmpiData.isNullValue()){
      CMPIUint8 AclCompatibility = cmpiData;
      setAclCompatibility(AclCompatibility);
    }

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

    cmpiData = aCmpiInstance.getProperty("EASupport");
    if ( ! cmpiData.isNullValue()){
      CMPIBoolean EASupport = cmpiData;
      setEASupport(EASupport);
    }

    cmpiData = aCmpiInstance.getProperty("ElementName");
    if ( ! cmpiData.isNullValue()){
      CmpiString ElementName = cmpiData;
      setElementName(ElementName.charPtr());
    }

    cmpiData = aCmpiInstance.getProperty("NTACLSupport");
    if ( ! cmpiData.isNullValue()){
      CMPIBoolean NTACLSupport = cmpiData;
      setNTACLSupport(NTACLSupport);
    }

    
  }
  
  //----------------------------------------------------------------------------
  //Destructor
  //----------------------------------------------------------------------------
  Linux_SambaGlobalProtocolOptionsInstance::
   ~Linux_SambaGlobalProtocolOptionsInstance(){
   	reset();  	  
  }
  
  
  //----------------------------------------------------------------------------
  //copy operator
  //----------------------------------------------------------------------------
  Linux_SambaGlobalProtocolOptionsInstance&
  Linux_SambaGlobalProtocolOptionsInstance::operator=(
    const Linux_SambaGlobalProtocolOptionsInstance& anInstance) {   	
   	
   	init(anInstance);
   	return *this;
  
  }
  
  
  //----------------------------------------------------------------------------
  //converts to CmpiInstance
  //----------------------------------------------------------------------------
  CmpiInstance
  Linux_SambaGlobalProtocolOptionsInstance::getCmpiInstance(
    const char** aPropertiesPP) const {
   	
   	CmpiObjectPath objectPath=getInstanceName().getObjectPath();      
    CmpiInstance cmpiInstance(objectPath);    
    getInstanceName().fillKeys(cmpiInstance);
    
    if (aPropertiesPP) {
	    cmpiInstance.setPropertyFilter(aPropertiesPP,0);
    }

  	if (isSet.AclCompatibility) {
  	  
  	  cmpiInstance.setProperty(
  	    "AclCompatibility",
  	    CmpiData(m_AclCompatibility));
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

  	if (isSet.EASupport) {
  	  
  	  cmpiInstance.setProperty(
  	    "EASupport",
  	    CmpiBooleanData(m_EASupport));
  	}

  	if (isSet.ElementName) {
  	  
  	  cmpiInstance.setProperty(
  	    "ElementName",
  	    CmpiData(m_ElementName));
  	}

  	if (isSet.NTACLSupport) {
  	  
  	  cmpiInstance.setProperty(
  	    "NTACLSupport",
  	    CmpiBooleanData(m_NTACLSupport));
  	}

  	
  	return cmpiInstance;
  	
  }
  
  //----------------------------------------------------------------------------
  // InstanceName related methods
  //----------------------------------------------------------------------------
  unsigned int 
  Linux_SambaGlobalProtocolOptionsInstance::isInstanceNameSet() const {
  	return isSet.instanceName;
  }
  
  //----------------------------------------------------------------------------
  const Linux_SambaGlobalProtocolOptionsInstanceName&
  Linux_SambaGlobalProtocolOptionsInstance::getInstanceName() const {

    if( ! isSet.instanceName) {
   	  throw CmpiErrorFormater::getErrorException(
        CmpiErrorFormater::NOT_SET,
        "InstanceName (CIM Key Attributes)",
        "Linux_SambaGlobalProtocolOptions");
   	}
  		
   	return m_instanceName;
  
  }

  //----------------------------------------------------------------------------
  void
  Linux_SambaGlobalProtocolOptionsInstance::setInstanceName(
    const Linux_SambaGlobalProtocolOptionsInstanceName& val) {

    m_instanceName = val;
    isSet.instanceName = 1;

  }
       
  //----------------------------------------------------------------------------
  // AclCompatibility related methods
  //----------------------------------------------------------------------------
  unsigned int
  Linux_SambaGlobalProtocolOptionsInstance::isAclCompatibilitySet() const {
    return isSet.AclCompatibility;
  }

  //----------------------------------------------------------------------------
  void Linux_SambaGlobalProtocolOptionsInstance::setAclCompatibility(
    const CMPIUint8 aValue) {
  
    m_AclCompatibility = aValue;
    isSet.AclCompatibility = 1;
  
  }       

  //----------------------------------------------------------------------------
  const CMPIUint8
  Linux_SambaGlobalProtocolOptionsInstance::getAclCompatibility() const {
    
    if ( ! isSet.AclCompatibility) {
   	  throw CmpiErrorFormater::getErrorException(
   	    CmpiErrorFormater::NOT_SET,
        "AclCompatibility",
        "Linux_SambaGlobalProtocolOptions");
   	}


    return m_AclCompatibility;

  }
       
  //----------------------------------------------------------------------------
  // Caption related methods
  //----------------------------------------------------------------------------
  unsigned int
  Linux_SambaGlobalProtocolOptionsInstance::isCaptionSet() const {
    return isSet.Caption;
  }

  //----------------------------------------------------------------------------
  void
  Linux_SambaGlobalProtocolOptionsInstance::setCaption(
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
  Linux_SambaGlobalProtocolOptionsInstance::getCaption() const {
    
    if ( ! isSet.Caption) {
   	  throw CmpiErrorFormater::getErrorException(
   	    CmpiErrorFormater::NOT_SET,
        "Caption",
        "Linux_SambaGlobalProtocolOptions");
   	}


    return m_Caption;

  }
       
  //----------------------------------------------------------------------------
  // Description related methods
  //----------------------------------------------------------------------------
  unsigned int
  Linux_SambaGlobalProtocolOptionsInstance::isDescriptionSet() const {
    return isSet.Description;
  }

  //----------------------------------------------------------------------------
  void
  Linux_SambaGlobalProtocolOptionsInstance::setDescription(
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
  Linux_SambaGlobalProtocolOptionsInstance::getDescription() const {
    
    if ( ! isSet.Description) {
   	  throw CmpiErrorFormater::getErrorException(
   	    CmpiErrorFormater::NOT_SET,
        "Description",
        "Linux_SambaGlobalProtocolOptions");
   	}


    return m_Description;

  }
       
  //----------------------------------------------------------------------------
  // EASupport related methods
  //----------------------------------------------------------------------------
  unsigned int
  Linux_SambaGlobalProtocolOptionsInstance::isEASupportSet() const {
    return isSet.EASupport;
  }

  //----------------------------------------------------------------------------
  void Linux_SambaGlobalProtocolOptionsInstance::setEASupport(
    const CMPIBoolean aValue) {
  
    m_EASupport = aValue;
    isSet.EASupport = 1;
  
  }       

  //----------------------------------------------------------------------------
  const CMPIBoolean
  Linux_SambaGlobalProtocolOptionsInstance::getEASupport() const {
    
    if ( ! isSet.EASupport) {
   	  throw CmpiErrorFormater::getErrorException(
   	    CmpiErrorFormater::NOT_SET,
        "EASupport",
        "Linux_SambaGlobalProtocolOptions");
   	}


    return m_EASupport;

  }
       
  //----------------------------------------------------------------------------
  // ElementName related methods
  //----------------------------------------------------------------------------
  unsigned int
  Linux_SambaGlobalProtocolOptionsInstance::isElementNameSet() const {
    return isSet.ElementName;
  }

  //----------------------------------------------------------------------------
  void
  Linux_SambaGlobalProtocolOptionsInstance::setElementName(
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
  Linux_SambaGlobalProtocolOptionsInstance::getElementName() const {
    
    if ( ! isSet.ElementName) {
   	  throw CmpiErrorFormater::getErrorException(
   	    CmpiErrorFormater::NOT_SET,
        "ElementName",
        "Linux_SambaGlobalProtocolOptions");
   	}


    return m_ElementName;

  }
       
  //----------------------------------------------------------------------------
  // NTACLSupport related methods
  //----------------------------------------------------------------------------
  unsigned int
  Linux_SambaGlobalProtocolOptionsInstance::isNTACLSupportSet() const {
    return isSet.NTACLSupport;
  }

  //----------------------------------------------------------------------------
  void Linux_SambaGlobalProtocolOptionsInstance::setNTACLSupport(
    const CMPIBoolean aValue) {
  
    m_NTACLSupport = aValue;
    isSet.NTACLSupport = 1;
  
  }       

  //----------------------------------------------------------------------------
  const CMPIBoolean
  Linux_SambaGlobalProtocolOptionsInstance::getNTACLSupport() const {
    
    if ( ! isSet.NTACLSupport) {
   	  throw CmpiErrorFormater::getErrorException(
   	    CmpiErrorFormater::NOT_SET,
        "NTACLSupport",
        "Linux_SambaGlobalProtocolOptions");
   	}


    return m_NTACLSupport;

  }

  
  //----------------------------------------------------------------------------
  //set isSet attributes to FALSE
  //----------------------------------------------------------------------------
  void
  Linux_SambaGlobalProtocolOptionsInstance::init() {
   	isSet.instanceName = 0;
    isSet.AclCompatibility = 0;
    isSet.Caption = 0;
    isSet.Description = 0;
    isSet.EASupport = 0;
    isSet.ElementName = 0;
    isSet.NTACLSupport = 0;
  	
  }
  
  //----------------------------------------------------------------------------
  //copies another instance properties in this
  //----------------------------------------------------------------------------
  void 
  Linux_SambaGlobalProtocolOptionsInstance::init(
    const Linux_SambaGlobalProtocolOptionsInstance& anOriginal) {   	

   	init();
   	   	
    if(anOriginal.isInstanceNameSet()) {
      setInstanceName(anOriginal.getInstanceName());
    }
       	
    if (anOriginal.isAclCompatibilitySet()) {
      const CMPIUint8 AclCompatibilityOriginal = anOriginal.getAclCompatibility();
      setAclCompatibility(AclCompatibilityOriginal);
    }
   	
    if (anOriginal.isCaptionSet()) {
      const char* CaptionOriginal = anOriginal.getCaption();
      setCaption(CaptionOriginal,1);
    }
   	
    if (anOriginal.isDescriptionSet()) {
      const char* DescriptionOriginal = anOriginal.getDescription();
      setDescription(DescriptionOriginal,1);
    }
   	
    if (anOriginal.isEASupportSet()) {
      const CMPIBoolean EASupportOriginal = anOriginal.getEASupport();
      setEASupport(EASupportOriginal);
    }
   	
    if (anOriginal.isElementNameSet()) {
      const char* ElementNameOriginal = anOriginal.getElementName();
      setElementName(ElementNameOriginal,1);
    }
   	
    if (anOriginal.isNTACLSupportSet()) {
      const CMPIBoolean NTACLSupportOriginal = anOriginal.getNTACLSupport();
      setNTACLSupport(NTACLSupportOriginal);
    }
    
  }
  
  //----------------------------------------------------------------------------
  //reset the instance data
  //----------------------------------------------------------------------------
  void
  Linux_SambaGlobalProtocolOptionsInstance::reset() {
   	
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
  //Linux_SambaGlobalProtocolOptionsInstanceEnumerationElement	
  //----------------------------------------------------------------------------
  Linux_SambaGlobalProtocolOptionsInstanceEnumerationElement::Linux_SambaGlobalProtocolOptionsInstanceEnumerationElement() {
   	
  	m_elementP = 0;
  	m_nextP = 0;
  	  
  }
  
  //----------------------------------------------------------------------------
  Linux_SambaGlobalProtocolOptionsInstanceEnumerationElement::~Linux_SambaGlobalProtocolOptionsInstanceEnumerationElement() {
   	
  	if (m_elementP) {
  	  delete(m_elementP);
  	}
  	
  	if (m_nextP) {
  	  delete(m_nextP);
  	}
  	  
  }

  //----------------------------------------------------------------------------
  //Linux_SambaGlobalProtocolOptionsInstanceNameEnumeration
  //----------------------------------------------------------------------------
  Linux_SambaGlobalProtocolOptionsInstanceEnumeration::Linux_SambaGlobalProtocolOptionsInstanceEnumeration() {
   	
    m_firstElementP = 0;
    m_currentElementP = 0;
    m_endElementP = 0;
  
  }
  
  //----------------------------------------------------------------------------
  Linux_SambaGlobalProtocolOptionsInstanceEnumeration::Linux_SambaGlobalProtocolOptionsInstanceEnumeration(
    const Linux_SambaGlobalProtocolOptionsInstanceEnumeration& anInstanceEnumeration) {
   	
    m_firstElementP = 0;
    m_currentElementP = 0;
    m_endElementP = 0;
  	 
    int size = anInstanceEnumeration.getSize();
    for (int x=0; x < size;++x) {
      addElement(anInstanceEnumeration.getElement(x));
    }           

  }
  
  //----------------------------------------------------------------------------
  Linux_SambaGlobalProtocolOptionsInstanceEnumeration::~Linux_SambaGlobalProtocolOptionsInstanceEnumeration() {
   	
  	if (m_firstElementP) {
  	  delete(m_firstElementP);
  	}
  	  	
  }
  
  //----------------------------------------------------------------------------
  void
  Linux_SambaGlobalProtocolOptionsInstanceEnumeration::reset() {
  	
  	m_currentElementP = m_firstElementP;
  	
  }
  	  
  //----------------------------------------------------------------------------
  bool
  Linux_SambaGlobalProtocolOptionsInstanceEnumeration::hasNext() const {
  	
  	return (m_currentElementP != 0);
  
  }
  
  //----------------------------------------------------------------------------
  int
  Linux_SambaGlobalProtocolOptionsInstanceEnumeration::getSize() const {
  	
    int size = 0;
    Linux_SambaGlobalProtocolOptionsInstanceEnumerationElement* followingP = m_firstElementP;
  	
  	while (followingP) {
      followingP = followingP->m_nextP;
      ++size;
    }
  	
    return size;
    
  }
  
  //----------------------------------------------------------------------------
  const Linux_SambaGlobalProtocolOptionsInstance&  
  Linux_SambaGlobalProtocolOptionsInstanceEnumeration::getElement(int anIndex) const {
   
    Linux_SambaGlobalProtocolOptionsInstanceEnumerationElement* followingP = m_firstElementP;
   
    int x = 0;
    while (followingP && (x < anIndex)) {
      followingP = followingP->m_nextP;
      ++x;
    }
    
    return *(followingP->m_elementP);

  }
  
  //----------------------------------------------------------------------------
  const Linux_SambaGlobalProtocolOptionsInstance&
  Linux_SambaGlobalProtocolOptionsInstanceEnumeration::getNext() {
   	
    Linux_SambaGlobalProtocolOptionsInstanceEnumerationElement* currentElementP =
  	  m_currentElementP;

    m_currentElementP = m_currentElementP->m_nextP;
  	 
    return *(currentElementP->m_elementP);

  }
  	  
  //----------------------------------------------------------------------------
  void
  Linux_SambaGlobalProtocolOptionsInstanceEnumeration::addElement(
    const Linux_SambaGlobalProtocolOptionsInstance& anInstance) {
   	
  	if (m_firstElementP == 0) {
  	  m_firstElementP = new Linux_SambaGlobalProtocolOptionsInstanceEnumerationElement();
  	  m_firstElementP->m_elementP = new Linux_SambaGlobalProtocolOptionsInstance(anInstance);
  	  m_endElementP = m_firstElementP;
  	  m_currentElementP = m_firstElementP;
  	} else {
  	  m_endElementP->m_nextP = new Linux_SambaGlobalProtocolOptionsInstanceEnumerationElement();
  	  m_endElementP = m_endElementP->m_nextP;
  	  m_endElementP->m_elementP = new Linux_SambaGlobalProtocolOptionsInstance(anInstance);
  	}

  }
  
}
