// =======================================================================
// Linux_SambaCommonSecurityOptionsManualInstance.cpp
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
#include "Linux_SambaCommonSecurityOptionsManualInstance.h"
#include "CmpiData.h"
#include "CmpiString.h"
#include "CmpiArray.h"
#include <string>

namespace genProvider {

  //****************************************************************************
  //Linux_SambaCommonSecurityOptionsManualInstance
  //----------------------------------------------------------------------------
  //empty constructor
  Linux_SambaCommonSecurityOptionsManualInstance::Linux_SambaCommonSecurityOptionsManualInstance() {   	
   	init();  	   	
  }
  
  //----------------------------------------------------------------------------
  //copy constructor	
  //----------------------------------------------------------------------------
  Linux_SambaCommonSecurityOptionsManualInstance::Linux_SambaCommonSecurityOptionsManualInstance(
    const Linux_SambaCommonSecurityOptionsManualInstance& anInstance) {   	
   	init(anInstance);  	   	
  }
  
  //----------------------------------------------------------------------------
  //constructor using CmpiInstance
  //----------------------------------------------------------------------------
  Linux_SambaCommonSecurityOptionsManualInstance::Linux_SambaCommonSecurityOptionsManualInstance(
    const CmpiInstance& aCmpiInstance,
    const char* anInstanceNamespaceP) {

    CmpiData cmpiData;

    init(); 
    
    CmpiObjectPath cop = aCmpiInstance.getObjectPath();
    cop.setNameSpace(anInstanceNamespaceP);
    setInstanceName(Linux_SambaCommonSecurityOptionsInstanceName(cop));

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
  Linux_SambaCommonSecurityOptionsManualInstance::
   ~Linux_SambaCommonSecurityOptionsManualInstance(){
   	reset();  	  
  }
  
  
  //----------------------------------------------------------------------------
  //copy operator
  //----------------------------------------------------------------------------
  Linux_SambaCommonSecurityOptionsManualInstance&
  Linux_SambaCommonSecurityOptionsManualInstance::operator=(
    const Linux_SambaCommonSecurityOptionsManualInstance& anInstance) {   	
   	
   	init(anInstance);
   	return *this;
  
  }
  
  
  //----------------------------------------------------------------------------
  //converts to CmpiInstance
  //----------------------------------------------------------------------------
  CmpiInstance
  Linux_SambaCommonSecurityOptionsManualInstance::getCmpiInstance(
    const char** aPropertiesPP) const {
   	
   	CmpiObjectPath objectPath=getInstanceName().getObjectPath();      
    CmpiInstance cmpiInstance(objectPath);    
    getInstanceName().fillKeys(cmpiInstance);
    
    if (aPropertiesPP) {
	    cmpiInstance.setPropertyFilter(aPropertiesPP,0);
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
  Linux_SambaCommonSecurityOptionsManualInstance::isInstanceNameSet() const {
  	return isSet.instanceName;
  }
  
  //----------------------------------------------------------------------------
  const Linux_SambaCommonSecurityOptionsInstanceName&
  Linux_SambaCommonSecurityOptionsManualInstance::getInstanceName() const {

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
  Linux_SambaCommonSecurityOptionsManualInstance::setInstanceName(
    const Linux_SambaCommonSecurityOptionsInstanceName& val) {

    m_instanceName = val;
    isSet.instanceName = 1;

  }
       
  //----------------------------------------------------------------------------
  // GuestOK related methods
  //----------------------------------------------------------------------------
  unsigned int
  Linux_SambaCommonSecurityOptionsManualInstance::isGuestOKSet() const {
    return isSet.GuestOK;
  }

  //----------------------------------------------------------------------------
  void Linux_SambaCommonSecurityOptionsManualInstance::setGuestOK(
    const CMPIBoolean aValue) {
  
    m_GuestOK = aValue;
    isSet.GuestOK = 1;
  
  }       

  //----------------------------------------------------------------------------
  const CMPIBoolean
  Linux_SambaCommonSecurityOptionsManualInstance::getGuestOK() const {
    
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
  Linux_SambaCommonSecurityOptionsManualInstance::isGuestOnlySet() const {
    return isSet.GuestOnly;
  }

  //----------------------------------------------------------------------------
  void Linux_SambaCommonSecurityOptionsManualInstance::setGuestOnly(
    const CMPIBoolean aValue) {
  
    m_GuestOnly = aValue;
    isSet.GuestOnly = 1;
  
  }       

  //----------------------------------------------------------------------------
  const CMPIBoolean
  Linux_SambaCommonSecurityOptionsManualInstance::getGuestOnly() const {
    
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
  Linux_SambaCommonSecurityOptionsManualInstance::isHostsAllowSet() const {
    return isSet.HostsAllow;
  }

  //----------------------------------------------------------------------------
  void
  Linux_SambaCommonSecurityOptionsManualInstance::setHostsAllow(
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
  Linux_SambaCommonSecurityOptionsManualInstance::getHostsAllow() const {
    
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
  Linux_SambaCommonSecurityOptionsManualInstance::isHostsDenySet() const {
    return isSet.HostsDeny;
  }

  //----------------------------------------------------------------------------
  void
  Linux_SambaCommonSecurityOptionsManualInstance::setHostsDeny(
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
  Linux_SambaCommonSecurityOptionsManualInstance::getHostsDeny() const {
    
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
  Linux_SambaCommonSecurityOptionsManualInstance::isReadOnlySet() const {
    return isSet.ReadOnly;
  }

  //----------------------------------------------------------------------------
  void Linux_SambaCommonSecurityOptionsManualInstance::setReadOnly(
    const CMPIBoolean aValue) {
  
    m_ReadOnly = aValue;
    isSet.ReadOnly = 1;
  
  }       

  //----------------------------------------------------------------------------
  const CMPIBoolean
  Linux_SambaCommonSecurityOptionsManualInstance::getReadOnly() const {
    
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
  Linux_SambaCommonSecurityOptionsManualInstance::init() {
   	isSet.instanceName = 0;
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
  Linux_SambaCommonSecurityOptionsManualInstance::init(
    const Linux_SambaCommonSecurityOptionsManualInstance& anOriginal) {   	

   	init();
   	   	
    if(anOriginal.isInstanceNameSet()) {
      setInstanceName(anOriginal.getInstanceName());
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
  Linux_SambaCommonSecurityOptionsManualInstance::reset() {
   	
  	if (isSet.HostsAllow) {
  	  delete(m_HostsAllow);
  	}

  	if (isSet.HostsDeny) {
  	  delete(m_HostsDeny);
  	}

  }
  
  //----------------------------------------------------------------------------
  //Linux_SambaCommonSecurityOptionsManualInstanceEnumerationElement	
  //----------------------------------------------------------------------------
  Linux_SambaCommonSecurityOptionsManualInstanceEnumerationElement::Linux_SambaCommonSecurityOptionsManualInstanceEnumerationElement() {
   	
  	m_elementP = 0;
  	m_nextP = 0;
  	  
  }
  
  //----------------------------------------------------------------------------
  Linux_SambaCommonSecurityOptionsManualInstanceEnumerationElement::~Linux_SambaCommonSecurityOptionsManualInstanceEnumerationElement() {
   	
  	if (m_elementP) {
  	  delete(m_elementP);
  	}
  	
  	if (m_nextP) {
  	  delete(m_nextP);
  	}
  	  
  }

  //----------------------------------------------------------------------------
  //Linux_SambaCommonSecurityOptionsManualInstanceNameEnumeration
  //----------------------------------------------------------------------------
  Linux_SambaCommonSecurityOptionsManualInstanceEnumeration::Linux_SambaCommonSecurityOptionsManualInstanceEnumeration() {
   	
    m_firstElementP = 0;
    m_currentElementP = 0;
    m_endElementP = 0;
  
  }
  
  //----------------------------------------------------------------------------
  Linux_SambaCommonSecurityOptionsManualInstanceEnumeration::Linux_SambaCommonSecurityOptionsManualInstanceEnumeration(
    const Linux_SambaCommonSecurityOptionsManualInstanceEnumeration& anInstanceEnumeration) {
   	
    m_firstElementP = 0;
    m_currentElementP = 0;
    m_endElementP = 0;
  	 
    int size = anInstanceEnumeration.getSize();
    for (int x=0; x < size;++x) {
      addElement(anInstanceEnumeration.getElement(x));
    }           

  }
  
  //----------------------------------------------------------------------------
  Linux_SambaCommonSecurityOptionsManualInstanceEnumeration::~Linux_SambaCommonSecurityOptionsManualInstanceEnumeration() {
   	
  	if (m_firstElementP) {
  	  delete(m_firstElementP);
  	}
  	  	
  }
  
  //----------------------------------------------------------------------------
  void
  Linux_SambaCommonSecurityOptionsManualInstanceEnumeration::reset() {
  	
  	m_currentElementP = m_firstElementP;
  	
  }
  	  
  //----------------------------------------------------------------------------
  bool
  Linux_SambaCommonSecurityOptionsManualInstanceEnumeration::hasNext() const {
  	
  	return (m_currentElementP != 0);
  
  }
  
  //----------------------------------------------------------------------------
  int
  Linux_SambaCommonSecurityOptionsManualInstanceEnumeration::getSize() const {
  	
    int size = 0;
    Linux_SambaCommonSecurityOptionsManualInstanceEnumerationElement* followingP = m_firstElementP;
  	
  	while (followingP) {
      followingP = followingP->m_nextP;
      ++size;
    }
  	
    return size;
    
  }
  
  //----------------------------------------------------------------------------
  const Linux_SambaCommonSecurityOptionsManualInstance&  
  Linux_SambaCommonSecurityOptionsManualInstanceEnumeration::getElement(int anIndex) const {
   
    Linux_SambaCommonSecurityOptionsManualInstanceEnumerationElement* followingP = m_firstElementP;
   
    int x = 0;
    while (followingP && (x < anIndex)) {
      followingP = followingP->m_nextP;
      ++x;
    }
    
    return *(followingP->m_elementP);

  }
  
  //----------------------------------------------------------------------------
  const Linux_SambaCommonSecurityOptionsManualInstance&
  Linux_SambaCommonSecurityOptionsManualInstanceEnumeration::getNext() {
   	
    Linux_SambaCommonSecurityOptionsManualInstanceEnumerationElement* currentElementP =
  	  m_currentElementP;

    m_currentElementP = m_currentElementP->m_nextP;
  	 
    return *(currentElementP->m_elementP);

  }
  	  
  //----------------------------------------------------------------------------
  void
  Linux_SambaCommonSecurityOptionsManualInstanceEnumeration::addElement(
    const Linux_SambaCommonSecurityOptionsManualInstance& anInstance) {
   	
  	if (m_firstElementP == 0) {
  	  m_firstElementP = new Linux_SambaCommonSecurityOptionsManualInstanceEnumerationElement();
  	  m_firstElementP->m_elementP = new Linux_SambaCommonSecurityOptionsManualInstance(anInstance);
  	  m_endElementP = m_firstElementP;
  	  m_currentElementP = m_firstElementP;
  	} else {
  	  m_endElementP->m_nextP = new Linux_SambaCommonSecurityOptionsManualInstanceEnumerationElement();
  	  m_endElementP = m_endElementP->m_nextP;
  	  m_endElementP->m_elementP = new Linux_SambaCommonSecurityOptionsManualInstance(anInstance);
  	}

  }
  
}
