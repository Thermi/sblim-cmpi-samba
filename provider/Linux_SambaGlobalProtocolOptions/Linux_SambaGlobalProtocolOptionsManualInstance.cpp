// =======================================================================
// Linux_SambaGlobalProtocolOptionsManualInstance.cpp
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
#include "Linux_SambaGlobalProtocolOptionsManualInstance.h"
#include "CmpiData.h"
#include "CmpiString.h"
#include "CmpiArray.h"
#include <string>

namespace genProvider {

  //****************************************************************************
  //Linux_SambaGlobalProtocolOptionsManualInstance
  //----------------------------------------------------------------------------
  //empty constructor
  Linux_SambaGlobalProtocolOptionsManualInstance::Linux_SambaGlobalProtocolOptionsManualInstance() {   	
   	init();  	   	
  }
  
  //----------------------------------------------------------------------------
  //copy constructor	
  //----------------------------------------------------------------------------
  Linux_SambaGlobalProtocolOptionsManualInstance::Linux_SambaGlobalProtocolOptionsManualInstance(
    const Linux_SambaGlobalProtocolOptionsManualInstance& anInstance) {   	
   	init(anInstance);  	   	
  }
  
  //----------------------------------------------------------------------------
  //constructor using CmpiInstance
  //----------------------------------------------------------------------------
  Linux_SambaGlobalProtocolOptionsManualInstance::Linux_SambaGlobalProtocolOptionsManualInstance(
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

    cmpiData = aCmpiInstance.getProperty("EASupport");
    if ( ! cmpiData.isNullValue()){
      CMPIBoolean EASupport = cmpiData;
      setEASupport(EASupport);
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
  Linux_SambaGlobalProtocolOptionsManualInstance::
   ~Linux_SambaGlobalProtocolOptionsManualInstance(){
   	reset();  	  
  }
  
  
  //----------------------------------------------------------------------------
  //copy operator
  //----------------------------------------------------------------------------
  Linux_SambaGlobalProtocolOptionsManualInstance&
  Linux_SambaGlobalProtocolOptionsManualInstance::operator=(
    const Linux_SambaGlobalProtocolOptionsManualInstance& anInstance) {   	
   	
   	init(anInstance);
   	return *this;
  
  }
  
  
  //----------------------------------------------------------------------------
  //converts to CmpiInstance
  //----------------------------------------------------------------------------
  CmpiInstance
  Linux_SambaGlobalProtocolOptionsManualInstance::getCmpiInstance(
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

  	if (isSet.EASupport) {
  	  
  	  cmpiInstance.setProperty(
  	    "EASupport",
  	    CmpiBooleanData(m_EASupport));
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
  Linux_SambaGlobalProtocolOptionsManualInstance::isInstanceNameSet() const {
  	return isSet.instanceName;
  }
  
  //----------------------------------------------------------------------------
  const Linux_SambaGlobalProtocolOptionsInstanceName&
  Linux_SambaGlobalProtocolOptionsManualInstance::getInstanceName() const {

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
  Linux_SambaGlobalProtocolOptionsManualInstance::setInstanceName(
    const Linux_SambaGlobalProtocolOptionsInstanceName& val) {

    m_instanceName = val;
    isSet.instanceName = 1;

  }
       
  //----------------------------------------------------------------------------
  // AclCompatibility related methods
  //----------------------------------------------------------------------------
  unsigned int
  Linux_SambaGlobalProtocolOptionsManualInstance::isAclCompatibilitySet() const {
    return isSet.AclCompatibility;
  }

  //----------------------------------------------------------------------------
  void Linux_SambaGlobalProtocolOptionsManualInstance::setAclCompatibility(
    const CMPIUint8 aValue) {
  
    m_AclCompatibility = aValue;
    isSet.AclCompatibility = 1;
  
  }       

  //----------------------------------------------------------------------------
  const CMPIUint8
  Linux_SambaGlobalProtocolOptionsManualInstance::getAclCompatibility() const {
    
    if ( ! isSet.AclCompatibility) {
   	  throw CmpiErrorFormater::getErrorException(
   	    CmpiErrorFormater::NOT_SET,
        "AclCompatibility",
        "Linux_SambaGlobalProtocolOptions");
   	}


    return m_AclCompatibility;

  }
       
  //----------------------------------------------------------------------------
  // EASupport related methods
  //----------------------------------------------------------------------------
  unsigned int
  Linux_SambaGlobalProtocolOptionsManualInstance::isEASupportSet() const {
    return isSet.EASupport;
  }

  //----------------------------------------------------------------------------
  void Linux_SambaGlobalProtocolOptionsManualInstance::setEASupport(
    const CMPIBoolean aValue) {
  
    m_EASupport = aValue;
    isSet.EASupport = 1;
  
  }       

  //----------------------------------------------------------------------------
  const CMPIBoolean
  Linux_SambaGlobalProtocolOptionsManualInstance::getEASupport() const {
    
    if ( ! isSet.EASupport) {
   	  throw CmpiErrorFormater::getErrorException(
   	    CmpiErrorFormater::NOT_SET,
        "EASupport",
        "Linux_SambaGlobalProtocolOptions");
   	}


    return m_EASupport;

  }
       
  //----------------------------------------------------------------------------
  // NTACLSupport related methods
  //----------------------------------------------------------------------------
  unsigned int
  Linux_SambaGlobalProtocolOptionsManualInstance::isNTACLSupportSet() const {
    return isSet.NTACLSupport;
  }

  //----------------------------------------------------------------------------
  void Linux_SambaGlobalProtocolOptionsManualInstance::setNTACLSupport(
    const CMPIBoolean aValue) {
  
    m_NTACLSupport = aValue;
    isSet.NTACLSupport = 1;
  
  }       

  //----------------------------------------------------------------------------
  const CMPIBoolean
  Linux_SambaGlobalProtocolOptionsManualInstance::getNTACLSupport() const {
    
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
  Linux_SambaGlobalProtocolOptionsManualInstance::init() {
   	isSet.instanceName = 0;
    isSet.AclCompatibility = 0;
    isSet.EASupport = 0;
    isSet.NTACLSupport = 0;
  	
  }
  
  //----------------------------------------------------------------------------
  //copies another instance properties in this
  //----------------------------------------------------------------------------
  void 
  Linux_SambaGlobalProtocolOptionsManualInstance::init(
    const Linux_SambaGlobalProtocolOptionsManualInstance& anOriginal) {   	

   	init();
   	   	
    if(anOriginal.isInstanceNameSet()) {
      setInstanceName(anOriginal.getInstanceName());
    }
       	
    if (anOriginal.isAclCompatibilitySet()) {
      const CMPIUint8 AclCompatibilityOriginal = anOriginal.getAclCompatibility();
      setAclCompatibility(AclCompatibilityOriginal);
    }
   	
    if (anOriginal.isEASupportSet()) {
      const CMPIBoolean EASupportOriginal = anOriginal.getEASupport();
      setEASupport(EASupportOriginal);
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
  Linux_SambaGlobalProtocolOptionsManualInstance::reset() {
   	
  }
  
  //----------------------------------------------------------------------------
  //Linux_SambaGlobalProtocolOptionsManualInstanceEnumerationElement	
  //----------------------------------------------------------------------------
  Linux_SambaGlobalProtocolOptionsManualInstanceEnumerationElement::Linux_SambaGlobalProtocolOptionsManualInstanceEnumerationElement() {
   	
  	m_elementP = 0;
  	m_nextP = 0;
  	  
  }
  
  //----------------------------------------------------------------------------
  Linux_SambaGlobalProtocolOptionsManualInstanceEnumerationElement::~Linux_SambaGlobalProtocolOptionsManualInstanceEnumerationElement() {
   	
  	if (m_elementP) {
  	  delete(m_elementP);
  	}
  	
  	if (m_nextP) {
  	  delete(m_nextP);
  	}
  	  
  }

  //----------------------------------------------------------------------------
  //Linux_SambaGlobalProtocolOptionsManualInstanceNameEnumeration
  //----------------------------------------------------------------------------
  Linux_SambaGlobalProtocolOptionsManualInstanceEnumeration::Linux_SambaGlobalProtocolOptionsManualInstanceEnumeration() {
   	
    m_firstElementP = 0;
    m_currentElementP = 0;
    m_endElementP = 0;
  
  }
  
  //----------------------------------------------------------------------------
  Linux_SambaGlobalProtocolOptionsManualInstanceEnumeration::Linux_SambaGlobalProtocolOptionsManualInstanceEnumeration(
    const Linux_SambaGlobalProtocolOptionsManualInstanceEnumeration& anInstanceEnumeration) {
   	
    m_firstElementP = 0;
    m_currentElementP = 0;
    m_endElementP = 0;
  	 
    int size = anInstanceEnumeration.getSize();
    for (int x=0; x < size;++x) {
      addElement(anInstanceEnumeration.getElement(x));
    }           

  }
  
  //----------------------------------------------------------------------------
  Linux_SambaGlobalProtocolOptionsManualInstanceEnumeration::~Linux_SambaGlobalProtocolOptionsManualInstanceEnumeration() {
   	
  	if (m_firstElementP) {
  	  delete(m_firstElementP);
  	}
  	  	
  }
  
  //----------------------------------------------------------------------------
  void
  Linux_SambaGlobalProtocolOptionsManualInstanceEnumeration::reset() {
  	
  	m_currentElementP = m_firstElementP;
  	
  }
  	  
  //----------------------------------------------------------------------------
  bool
  Linux_SambaGlobalProtocolOptionsManualInstanceEnumeration::hasNext() const {
  	
  	return (m_currentElementP != 0);
  
  }
  
  //----------------------------------------------------------------------------
  int
  Linux_SambaGlobalProtocolOptionsManualInstanceEnumeration::getSize() const {
  	
    int size = 0;
    Linux_SambaGlobalProtocolOptionsManualInstanceEnumerationElement* followingP = m_firstElementP;
  	
  	while (followingP) {
      followingP = followingP->m_nextP;
      ++size;
    }
  	
    return size;
    
  }
  
  //----------------------------------------------------------------------------
  const Linux_SambaGlobalProtocolOptionsManualInstance&  
  Linux_SambaGlobalProtocolOptionsManualInstanceEnumeration::getElement(int anIndex) const {
   
    Linux_SambaGlobalProtocolOptionsManualInstanceEnumerationElement* followingP = m_firstElementP;
   
    int x = 0;
    while (followingP && (x < anIndex)) {
      followingP = followingP->m_nextP;
      ++x;
    }
    
    return *(followingP->m_elementP);

  }
  
  //----------------------------------------------------------------------------
  const Linux_SambaGlobalProtocolOptionsManualInstance&
  Linux_SambaGlobalProtocolOptionsManualInstanceEnumeration::getNext() {
   	
    Linux_SambaGlobalProtocolOptionsManualInstanceEnumerationElement* currentElementP =
  	  m_currentElementP;

    m_currentElementP = m_currentElementP->m_nextP;
  	 
    return *(currentElementP->m_elementP);

  }
  	  
  //----------------------------------------------------------------------------
  void
  Linux_SambaGlobalProtocolOptionsManualInstanceEnumeration::addElement(
    const Linux_SambaGlobalProtocolOptionsManualInstance& anInstance) {
   	
  	if (m_firstElementP == 0) {
  	  m_firstElementP = new Linux_SambaGlobalProtocolOptionsManualInstanceEnumerationElement();
  	  m_firstElementP->m_elementP = new Linux_SambaGlobalProtocolOptionsManualInstance(anInstance);
  	  m_endElementP = m_firstElementP;
  	  m_currentElementP = m_firstElementP;
  	} else {
  	  m_endElementP->m_nextP = new Linux_SambaGlobalProtocolOptionsManualInstanceEnumerationElement();
  	  m_endElementP = m_endElementP->m_nextP;
  	  m_endElementP->m_elementP = new Linux_SambaGlobalProtocolOptionsManualInstance(anInstance);
  	}

  }
  
}
