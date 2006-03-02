// =======================================================================
// Linux_SambaCommonSecurityOptionsInstance.cpp
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
#include "Linux_SambaCommonSecurityOptionsInstance.h"
#include "CmpiData.h"
#include "CmpiString.h"
#include "CmpiArray.h"
#include <string>

namespace genProvider {

  //****************************************************************************
  //Linux_SambaCommonSecurityOptionsInstance
  //----------------------------------------------------------------------------
  //empty constructor
  Linux_SambaCommonSecurityOptionsInstance::Linux_SambaCommonSecurityOptionsInstance() {   	
   	init();  	   	
  }
  
  //----------------------------------------------------------------------------
  //copy constructor	
  //----------------------------------------------------------------------------
  Linux_SambaCommonSecurityOptionsInstance::Linux_SambaCommonSecurityOptionsInstance(
    const Linux_SambaCommonSecurityOptionsInstance& anInstance) {   	
   	init(anInstance);  	   	
  }
  
  //----------------------------------------------------------------------------
  //constructor using CmpiInstance
  //----------------------------------------------------------------------------
  Linux_SambaCommonSecurityOptionsInstance::Linux_SambaCommonSecurityOptionsInstance(
    const CmpiInstance& aCmpiInstance,
    const char* anInstanceNamespaceP) {

    CmpiData cmpiData;

    init(); 
    
    CmpiObjectPath cop = aCmpiInstance.getObjectPath();
    cop.setNameSpace(anInstanceNamespaceP);
    setInstanceName(Linux_SambaCommonSecurityOptionsInstanceName(cop));

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

    cmpiData = aCmpiInstance.getProperty("GuestOK");
    if ( ! cmpiData.isNullValue()){
      CMPIBoolean GuestOK = cmpiData;
      setGuestOK(GuestOK);
    }

    cmpiData = aCmpiInstance.getProperty("GuestOnly");
    if ( ! cmpiData.isNullValue()){
      CMPIBoolean GuestOnly = cmpiData;
      setGuestOnly(GuestOnly);
    }

    cmpiData = aCmpiInstance.getProperty("HostsAllow");
    if ( ! cmpiData.isNullValue()){
      CmpiString HostsAllow = cmpiData;
      setHostsAllow(HostsAllow.charPtr());
    }

    cmpiData = aCmpiInstance.getProperty("HostsDeny");
    if ( ! cmpiData.isNullValue()){
      CmpiString HostsDeny = cmpiData;
      setHostsDeny(HostsDeny.charPtr());
    }

    cmpiData = aCmpiInstance.getProperty("ReadOnly");
    if ( ! cmpiData.isNullValue()){
      CMPIBoolean ReadOnly = cmpiData;
      setReadOnly(ReadOnly);
    }

    
  }
  
  //----------------------------------------------------------------------------
  //Destructor
  //----------------------------------------------------------------------------
  Linux_SambaCommonSecurityOptionsInstance::
   ~Linux_SambaCommonSecurityOptionsInstance(){
   	reset();  	  
  }
  
  
  //----------------------------------------------------------------------------
  //copy operator
  //----------------------------------------------------------------------------
  Linux_SambaCommonSecurityOptionsInstance&
  Linux_SambaCommonSecurityOptionsInstance::operator=(
    const Linux_SambaCommonSecurityOptionsInstance& anInstance) {   	
   	
   	init(anInstance);
   	return *this;
  
  }
  
  
  //----------------------------------------------------------------------------
  //converts to CmpiInstance
  //----------------------------------------------------------------------------
  CmpiInstance
  Linux_SambaCommonSecurityOptionsInstance::getCmpiInstance(
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

  	if (isSet.GuestOK) {
  	  
  	  cmpiInstance.setProperty(
  	    "GuestOK",
  	    CmpiBooleanData(m_GuestOK));
  	}

  	if (isSet.GuestOnly) {
  	  
  	  cmpiInstance.setProperty(
  	    "GuestOnly",
  	    CmpiBooleanData(m_GuestOnly));
  	}

  	if (isSet.HostsAllow) {
  	  
  	  cmpiInstance.setProperty(
  	    "HostsAllow",
  	    CmpiData(m_HostsAllow));
  	}

  	if (isSet.HostsDeny) {
  	  
  	  cmpiInstance.setProperty(
  	    "HostsDeny",
  	    CmpiData(m_HostsDeny));
  	}

  	if (isSet.ReadOnly) {
  	  
  	  cmpiInstance.setProperty(
  	    "ReadOnly",
  	    CmpiBooleanData(m_ReadOnly));
  	}

  	
  	return cmpiInstance;
  	
  }
  
  //----------------------------------------------------------------------------
  // InstanceName related methods
  //----------------------------------------------------------------------------
  unsigned int 
  Linux_SambaCommonSecurityOptionsInstance::isInstanceNameSet() const {
  	return isSet.instanceName;
  }
  
  //----------------------------------------------------------------------------
  const Linux_SambaCommonSecurityOptionsInstanceName&
  Linux_SambaCommonSecurityOptionsInstance::getInstanceName() const {

    if( ! isSet.instanceName) {
   	  throw CmpiErrorFormater::getErrorException(
        CmpiErrorFormater::NOT_SET,
        "InstanceName (CIM Key Attributes)",
        "Linux_SambaCommonSecurityOptions");
   	}
  		
   	return m_instanceName;
  
  }

  //----------------------------------------------------------------------------
  void
  Linux_SambaCommonSecurityOptionsInstance::setInstanceName(
    const Linux_SambaCommonSecurityOptionsInstanceName& val) {

    m_instanceName = val;
    isSet.instanceName = 1;

  }
       
  //----------------------------------------------------------------------------
  // Caption related methods
  //----------------------------------------------------------------------------
  unsigned int
  Linux_SambaCommonSecurityOptionsInstance::isCaptionSet() const {
    return isSet.Caption;
  }

  //----------------------------------------------------------------------------
  void
  Linux_SambaCommonSecurityOptionsInstance::setCaption(
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
  Linux_SambaCommonSecurityOptionsInstance::getCaption() const {
    
    if ( ! isSet.Caption) {
   	  throw CmpiErrorFormater::getErrorException(
   	    CmpiErrorFormater::NOT_SET,
        "Caption",
        "Linux_SambaCommonSecurityOptions");
   	}


    return m_Caption;

  }
       
  //----------------------------------------------------------------------------
  // Description related methods
  //----------------------------------------------------------------------------
  unsigned int
  Linux_SambaCommonSecurityOptionsInstance::isDescriptionSet() const {
    return isSet.Description;
  }

  //----------------------------------------------------------------------------
  void
  Linux_SambaCommonSecurityOptionsInstance::setDescription(
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
  Linux_SambaCommonSecurityOptionsInstance::getDescription() const {
    
    if ( ! isSet.Description) {
   	  throw CmpiErrorFormater::getErrorException(
   	    CmpiErrorFormater::NOT_SET,
        "Description",
        "Linux_SambaCommonSecurityOptions");
   	}


    return m_Description;

  }
       
  //----------------------------------------------------------------------------
  // ElementName related methods
  //----------------------------------------------------------------------------
  unsigned int
  Linux_SambaCommonSecurityOptionsInstance::isElementNameSet() const {
    return isSet.ElementName;
  }

  //----------------------------------------------------------------------------
  void
  Linux_SambaCommonSecurityOptionsInstance::setElementName(
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
  Linux_SambaCommonSecurityOptionsInstance::getElementName() const {
    
    if ( ! isSet.ElementName) {
   	  throw CmpiErrorFormater::getErrorException(
   	    CmpiErrorFormater::NOT_SET,
        "ElementName",
        "Linux_SambaCommonSecurityOptions");
   	}


    return m_ElementName;

  }
       
  //----------------------------------------------------------------------------
  // GuestOK related methods
  //----------------------------------------------------------------------------
  unsigned int
  Linux_SambaCommonSecurityOptionsInstance::isGuestOKSet() const {
    return isSet.GuestOK;
  }

  //----------------------------------------------------------------------------
  void Linux_SambaCommonSecurityOptionsInstance::setGuestOK(
    const CMPIBoolean aValue) {
  
    m_GuestOK = aValue;
    isSet.GuestOK = 1;
  
  }       

  //----------------------------------------------------------------------------
  const CMPIBoolean
  Linux_SambaCommonSecurityOptionsInstance::getGuestOK() const {
    
    if ( ! isSet.GuestOK) {
   	  throw CmpiErrorFormater::getErrorException(
   	    CmpiErrorFormater::NOT_SET,
        "GuestOK",
        "Linux_SambaCommonSecurityOptions");
   	}


    return m_GuestOK;

  }
       
  //----------------------------------------------------------------------------
  // GuestOnly related methods
  //----------------------------------------------------------------------------
  unsigned int
  Linux_SambaCommonSecurityOptionsInstance::isGuestOnlySet() const {
    return isSet.GuestOnly;
  }

  //----------------------------------------------------------------------------
  void Linux_SambaCommonSecurityOptionsInstance::setGuestOnly(
    const CMPIBoolean aValue) {
  
    m_GuestOnly = aValue;
    isSet.GuestOnly = 1;
  
  }       

  //----------------------------------------------------------------------------
  const CMPIBoolean
  Linux_SambaCommonSecurityOptionsInstance::getGuestOnly() const {
    
    if ( ! isSet.GuestOnly) {
   	  throw CmpiErrorFormater::getErrorException(
   	    CmpiErrorFormater::NOT_SET,
        "GuestOnly",
        "Linux_SambaCommonSecurityOptions");
   	}


    return m_GuestOnly;

  }
       
  //----------------------------------------------------------------------------
  // HostsAllow related methods
  //----------------------------------------------------------------------------
  unsigned int
  Linux_SambaCommonSecurityOptionsInstance::isHostsAllowSet() const {
    return isSet.HostsAllow;
  }

  //----------------------------------------------------------------------------
  void
  Linux_SambaCommonSecurityOptionsInstance::setHostsAllow(
    const char* aValueP,
    int aCopyFlag) {
    
    if (isSet.HostsAllow) {
      delete [] m_HostsAllow;
    }
    
    if (aCopyFlag && aValueP) {
      char* valueP = new char[strlen(aValueP) + 1];
      strcpy(valueP,aValueP);
      m_HostsAllow = valueP;
    } else {
      m_HostsAllow = aValueP;
    }
    
    isSet.HostsAllow = 1;

  }       

  //----------------------------------------------------------------------------
  const char*
  Linux_SambaCommonSecurityOptionsInstance::getHostsAllow() const {
    
    if ( ! isSet.HostsAllow) {
   	  throw CmpiErrorFormater::getErrorException(
   	    CmpiErrorFormater::NOT_SET,
        "HostsAllow",
        "Linux_SambaCommonSecurityOptions");
   	}


    return m_HostsAllow;

  }
       
  //----------------------------------------------------------------------------
  // HostsDeny related methods
  //----------------------------------------------------------------------------
  unsigned int
  Linux_SambaCommonSecurityOptionsInstance::isHostsDenySet() const {
    return isSet.HostsDeny;
  }

  //----------------------------------------------------------------------------
  void
  Linux_SambaCommonSecurityOptionsInstance::setHostsDeny(
    const char* aValueP,
    int aCopyFlag) {
    
    if (isSet.HostsDeny) {
      delete [] m_HostsDeny;
    }
    
    if (aCopyFlag && aValueP) {
      char* valueP = new char[strlen(aValueP) + 1];
      strcpy(valueP,aValueP);
      m_HostsDeny = valueP;
    } else {
      m_HostsDeny = aValueP;
    }
    
    isSet.HostsDeny = 1;

  }       

  //----------------------------------------------------------------------------
  const char*
  Linux_SambaCommonSecurityOptionsInstance::getHostsDeny() const {
    
    if ( ! isSet.HostsDeny) {
   	  throw CmpiErrorFormater::getErrorException(
   	    CmpiErrorFormater::NOT_SET,
        "HostsDeny",
        "Linux_SambaCommonSecurityOptions");
   	}


    return m_HostsDeny;

  }
       
  //----------------------------------------------------------------------------
  // ReadOnly related methods
  //----------------------------------------------------------------------------
  unsigned int
  Linux_SambaCommonSecurityOptionsInstance::isReadOnlySet() const {
    return isSet.ReadOnly;
  }

  //----------------------------------------------------------------------------
  void Linux_SambaCommonSecurityOptionsInstance::setReadOnly(
    const CMPIBoolean aValue) {
  
    m_ReadOnly = aValue;
    isSet.ReadOnly = 1;
  
  }       

  //----------------------------------------------------------------------------
  const CMPIBoolean
  Linux_SambaCommonSecurityOptionsInstance::getReadOnly() const {
    
    if ( ! isSet.ReadOnly) {
   	  throw CmpiErrorFormater::getErrorException(
   	    CmpiErrorFormater::NOT_SET,
        "ReadOnly",
        "Linux_SambaCommonSecurityOptions");
   	}


    return m_ReadOnly;

  }

  
  //----------------------------------------------------------------------------
  //set isSet attributes to FALSE
  //----------------------------------------------------------------------------
  void
  Linux_SambaCommonSecurityOptionsInstance::init() {
   	isSet.instanceName = 0;
    isSet.Caption = 0;
    isSet.Description = 0;
    isSet.ElementName = 0;
    isSet.GuestOK = 0;
    isSet.GuestOnly = 0;
    isSet.HostsAllow = 0;
    isSet.HostsDeny = 0;
    isSet.ReadOnly = 0;
  	
  }
  
  //----------------------------------------------------------------------------
  //copies another instance properties in this
  //----------------------------------------------------------------------------
  void 
  Linux_SambaCommonSecurityOptionsInstance::init(
    const Linux_SambaCommonSecurityOptionsInstance& anOriginal) {   	

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
   	
    if (anOriginal.isGuestOKSet()) {
      const CMPIBoolean GuestOKOriginal = anOriginal.getGuestOK();
      setGuestOK(GuestOKOriginal);
    }
   	
    if (anOriginal.isGuestOnlySet()) {
      const CMPIBoolean GuestOnlyOriginal = anOriginal.getGuestOnly();
      setGuestOnly(GuestOnlyOriginal);
    }
   	
    if (anOriginal.isHostsAllowSet()) {
      const char* HostsAllowOriginal = anOriginal.getHostsAllow();
      setHostsAllow(HostsAllowOriginal,1);
    }
   	
    if (anOriginal.isHostsDenySet()) {
      const char* HostsDenyOriginal = anOriginal.getHostsDeny();
      setHostsDeny(HostsDenyOriginal,1);
    }
   	
    if (anOriginal.isReadOnlySet()) {
      const CMPIBoolean ReadOnlyOriginal = anOriginal.getReadOnly();
      setReadOnly(ReadOnlyOriginal);
    }
    
  }
  
  //----------------------------------------------------------------------------
  //reset the instance data
  //----------------------------------------------------------------------------
  void
  Linux_SambaCommonSecurityOptionsInstance::reset() {
   	
  	if (isSet.Caption) {
  	  delete(m_Caption);
  	}

  	if (isSet.Description) {
  	  delete(m_Description);
  	}

  	if (isSet.ElementName) {
  	  delete(m_ElementName);
  	}

  	if (isSet.HostsAllow) {
  	  delete(m_HostsAllow);
  	}

  	if (isSet.HostsDeny) {
  	  delete(m_HostsDeny);
  	}

  }
  
  //----------------------------------------------------------------------------
  //Linux_SambaCommonSecurityOptionsInstanceEnumerationElement	
  //----------------------------------------------------------------------------
  Linux_SambaCommonSecurityOptionsInstanceEnumerationElement::Linux_SambaCommonSecurityOptionsInstanceEnumerationElement() {
   	
  	m_elementP = 0;
  	m_nextP = 0;
  	  
  }
  
  //----------------------------------------------------------------------------
  Linux_SambaCommonSecurityOptionsInstanceEnumerationElement::~Linux_SambaCommonSecurityOptionsInstanceEnumerationElement() {
   	
  	if (m_elementP) {
  	  delete(m_elementP);
  	}
  	
  	if (m_nextP) {
  	  delete(m_nextP);
  	}
  	  
  }

  //----------------------------------------------------------------------------
  //Linux_SambaCommonSecurityOptionsInstanceNameEnumeration
  //----------------------------------------------------------------------------
  Linux_SambaCommonSecurityOptionsInstanceEnumeration::Linux_SambaCommonSecurityOptionsInstanceEnumeration() {
   	
    m_firstElementP = 0;
    m_currentElementP = 0;
    m_endElementP = 0;
  
  }
  
  //----------------------------------------------------------------------------
  Linux_SambaCommonSecurityOptionsInstanceEnumeration::Linux_SambaCommonSecurityOptionsInstanceEnumeration(
    const Linux_SambaCommonSecurityOptionsInstanceEnumeration& anInstanceEnumeration) {
   	
    m_firstElementP = 0;
    m_currentElementP = 0;
    m_endElementP = 0;
  	 
    int size = anInstanceEnumeration.getSize();
    for (int x=0; x < size;++x) {
      addElement(anInstanceEnumeration.getElement(x));
    }           

  }
  
  //----------------------------------------------------------------------------
  Linux_SambaCommonSecurityOptionsInstanceEnumeration::~Linux_SambaCommonSecurityOptionsInstanceEnumeration() {
   	
  	if (m_firstElementP) {
  	  delete(m_firstElementP);
  	}
  	  	
  }
  
  //----------------------------------------------------------------------------
  void
  Linux_SambaCommonSecurityOptionsInstanceEnumeration::reset() {
  	
  	m_currentElementP = m_firstElementP;
  	
  }
  	  
  //----------------------------------------------------------------------------
  bool
  Linux_SambaCommonSecurityOptionsInstanceEnumeration::hasNext() const {
  	
  	return (m_currentElementP != 0);
  
  }
  
  //----------------------------------------------------------------------------
  int
  Linux_SambaCommonSecurityOptionsInstanceEnumeration::getSize() const {
  	
    int size = 0;
    Linux_SambaCommonSecurityOptionsInstanceEnumerationElement* followingP = m_firstElementP;
  	
  	while (followingP) {
      followingP = followingP->m_nextP;
      ++size;
    }
  	
    return size;
    
  }
  
  //----------------------------------------------------------------------------
  const Linux_SambaCommonSecurityOptionsInstance&  
  Linux_SambaCommonSecurityOptionsInstanceEnumeration::getElement(int anIndex) const {
   
    Linux_SambaCommonSecurityOptionsInstanceEnumerationElement* followingP = m_firstElementP;
   
    int x = 0;
    while (followingP && (x < anIndex)) {
      followingP = followingP->m_nextP;
      ++x;
    }
    
    return *(followingP->m_elementP);

  }
  
  //----------------------------------------------------------------------------
  const Linux_SambaCommonSecurityOptionsInstance&
  Linux_SambaCommonSecurityOptionsInstanceEnumeration::getNext() {
   	
    Linux_SambaCommonSecurityOptionsInstanceEnumerationElement* currentElementP =
  	  m_currentElementP;

    m_currentElementP = m_currentElementP->m_nextP;
  	 
    return *(currentElementP->m_elementP);

  }
  	  
  //----------------------------------------------------------------------------
  void
  Linux_SambaCommonSecurityOptionsInstanceEnumeration::addElement(
    const Linux_SambaCommonSecurityOptionsInstance& anInstance) {
   	
  	if (m_firstElementP == 0) {
  	  m_firstElementP = new Linux_SambaCommonSecurityOptionsInstanceEnumerationElement();
  	  m_firstElementP->m_elementP = new Linux_SambaCommonSecurityOptionsInstance(anInstance);
  	  m_endElementP = m_firstElementP;
  	  m_currentElementP = m_firstElementP;
  	} else {
  	  m_endElementP->m_nextP = new Linux_SambaCommonSecurityOptionsInstanceEnumerationElement();
  	  m_endElementP = m_endElementP->m_nextP;
  	  m_endElementP->m_elementP = new Linux_SambaCommonSecurityOptionsInstance(anInstance);
  	}

  }
  
}
