// =======================================================================
// Linux_SambaShareProtocolOptionsManualInstance.cpp
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
#include "Linux_SambaShareProtocolOptionsManualInstance.h"
#include "CmpiData.h"
#include "CmpiString.h"
#include "CmpiArray.h"
#include <string>

namespace genProvider {

  //****************************************************************************
  //Linux_SambaShareProtocolOptionsManualInstance
  //----------------------------------------------------------------------------
  //empty constructor
  Linux_SambaShareProtocolOptionsManualInstance::Linux_SambaShareProtocolOptionsManualInstance() {   	
   	init();  	   	
  }
  
  //----------------------------------------------------------------------------
  //copy constructor	
  //----------------------------------------------------------------------------
  Linux_SambaShareProtocolOptionsManualInstance::Linux_SambaShareProtocolOptionsManualInstance(
    const Linux_SambaShareProtocolOptionsManualInstance& anInstance) {   	
   	init(anInstance);  	   	
  }
  
  //----------------------------------------------------------------------------
  //constructor using CmpiInstance
  //----------------------------------------------------------------------------
  Linux_SambaShareProtocolOptionsManualInstance::Linux_SambaShareProtocolOptionsManualInstance(
    const CmpiInstance& aCmpiInstance,
    const char* anInstanceNamespaceP) {

    CmpiData cmpiData;

    init(); 
    
    CmpiObjectPath cop = aCmpiInstance.getObjectPath();
    cop.setNameSpace(anInstanceNamespaceP);
    setInstanceName(Linux_SambaShareProtocolOptionsInstanceName(cop));

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
  Linux_SambaShareProtocolOptionsManualInstance::
   ~Linux_SambaShareProtocolOptionsManualInstance(){
   	reset();  	  
  }
  
  
  //----------------------------------------------------------------------------
  //copy operator
  //----------------------------------------------------------------------------
  Linux_SambaShareProtocolOptionsManualInstance&
  Linux_SambaShareProtocolOptionsManualInstance::operator=(
    const Linux_SambaShareProtocolOptionsManualInstance& anInstance) {   	
   	
   	init(anInstance);
   	return *this;
  
  }
  
  
  //----------------------------------------------------------------------------
  //converts to CmpiInstance
  //----------------------------------------------------------------------------
  CmpiInstance
  Linux_SambaShareProtocolOptionsManualInstance::getCmpiInstance(
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
  Linux_SambaShareProtocolOptionsManualInstance::isInstanceNameSet() const {
  	return isSet.instanceName;
  }
  
  //----------------------------------------------------------------------------
  const Linux_SambaShareProtocolOptionsInstanceName&
  Linux_SambaShareProtocolOptionsManualInstance::getInstanceName() const {

    if( ! isSet.instanceName) {
   	  throw CmpiErrorFormater::getErrorException(
        CmpiErrorFormater::NOT_SET,
        "InstanceName (CIM Key Attributes)",
        "Linux_SambaShareProtocolOptions");
   	}
  		
   	return m_instanceName;
  
  }

  //----------------------------------------------------------------------------
  void
  Linux_SambaShareProtocolOptionsManualInstance::setInstanceName(
    const Linux_SambaShareProtocolOptionsInstanceName& val) {

    m_instanceName = val;
    isSet.instanceName = 1;

  }
       
  //----------------------------------------------------------------------------
  // AclCompatibility related methods
  //----------------------------------------------------------------------------
  unsigned int
  Linux_SambaShareProtocolOptionsManualInstance::isAclCompatibilitySet() const {
    return isSet.AclCompatibility;
  }

  //----------------------------------------------------------------------------
  void Linux_SambaShareProtocolOptionsManualInstance::setAclCompatibility(
    const CMPIUint8 aValue) {
  
    m_AclCompatibility = aValue;
    isSet.AclCompatibility = 1;
  
  }       

  //----------------------------------------------------------------------------
  const CMPIUint8
  Linux_SambaShareProtocolOptionsManualInstance::getAclCompatibility() const {
    
    if ( ! isSet.AclCompatibility) {
   	  throw CmpiErrorFormater::getErrorException(
   	    CmpiErrorFormater::NOT_SET,
        "AclCompatibility",
        "Linux_SambaShareProtocolOptions");
   	}


    return m_AclCompatibility;

  }
       
  //----------------------------------------------------------------------------
  // EASupport related methods
  //----------------------------------------------------------------------------
  unsigned int
  Linux_SambaShareProtocolOptionsManualInstance::isEASupportSet() const {
    return isSet.EASupport;
  }

  //----------------------------------------------------------------------------
  void Linux_SambaShareProtocolOptionsManualInstance::setEASupport(
    const CMPIBoolean aValue) {
  
    m_EASupport = aValue;
    isSet.EASupport = 1;
  
  }       

  //----------------------------------------------------------------------------
  const CMPIBoolean
  Linux_SambaShareProtocolOptionsManualInstance::getEASupport() const {
    
    if ( ! isSet.EASupport) {
   	  throw CmpiErrorFormater::getErrorException(
   	    CmpiErrorFormater::NOT_SET,
        "EASupport",
        "Linux_SambaShareProtocolOptions");
   	}


    return m_EASupport;

  }
       
  //----------------------------------------------------------------------------
  // NTACLSupport related methods
  //----------------------------------------------------------------------------
  unsigned int
  Linux_SambaShareProtocolOptionsManualInstance::isNTACLSupportSet() const {
    return isSet.NTACLSupport;
  }

  //----------------------------------------------------------------------------
  void Linux_SambaShareProtocolOptionsManualInstance::setNTACLSupport(
    const CMPIBoolean aValue) {
  
    m_NTACLSupport = aValue;
    isSet.NTACLSupport = 1;
  
  }       

  //----------------------------------------------------------------------------
  const CMPIBoolean
  Linux_SambaShareProtocolOptionsManualInstance::getNTACLSupport() const {
    
    if ( ! isSet.NTACLSupport) {
   	  throw CmpiErrorFormater::getErrorException(
   	    CmpiErrorFormater::NOT_SET,
        "NTACLSupport",
        "Linux_SambaShareProtocolOptions");
   	}


    return m_NTACLSupport;

  }

  
  //----------------------------------------------------------------------------
  //set isSet attributes to FALSE
  //----------------------------------------------------------------------------
  void
  Linux_SambaShareProtocolOptionsManualInstance::init() {
   	isSet.instanceName = 0;
    isSet.AclCompatibility = 0;
    isSet.EASupport = 0;
    isSet.NTACLSupport = 0;
  	
  }
  
  //----------------------------------------------------------------------------
  //copies another instance properties in this
  //----------------------------------------------------------------------------
  void 
  Linux_SambaShareProtocolOptionsManualInstance::init(
    const Linux_SambaShareProtocolOptionsManualInstance& anOriginal) {   	

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
  Linux_SambaShareProtocolOptionsManualInstance::reset() {
   	
  }
  
  //----------------------------------------------------------------------------
  //Linux_SambaShareProtocolOptionsManualInstanceEnumerationElement	
  //----------------------------------------------------------------------------
  Linux_SambaShareProtocolOptionsManualInstanceEnumerationElement::Linux_SambaShareProtocolOptionsManualInstanceEnumerationElement() {
   	
  	m_elementP = 0;
  	m_nextP = 0;
  	  
  }
  
  //----------------------------------------------------------------------------
  Linux_SambaShareProtocolOptionsManualInstanceEnumerationElement::~Linux_SambaShareProtocolOptionsManualInstanceEnumerationElement() {
   	
  	if (m_elementP) {
  	  delete(m_elementP);
  	}
  	
  	if (m_nextP) {
  	  delete(m_nextP);
  	}
  	  
  }

  //----------------------------------------------------------------------------
  //Linux_SambaShareProtocolOptionsManualInstanceNameEnumeration
  //----------------------------------------------------------------------------
  Linux_SambaShareProtocolOptionsManualInstanceEnumeration::Linux_SambaShareProtocolOptionsManualInstanceEnumeration() {
   	
    m_firstElementP = 0;
    m_currentElementP = 0;
    m_endElementP = 0;
  
  }
  
  //----------------------------------------------------------------------------
  Linux_SambaShareProtocolOptionsManualInstanceEnumeration::Linux_SambaShareProtocolOptionsManualInstanceEnumeration(
    const Linux_SambaShareProtocolOptionsManualInstanceEnumeration& anInstanceEnumeration) {
   	
    m_firstElementP = 0;
    m_currentElementP = 0;
    m_endElementP = 0;
  	 
    int size = anInstanceEnumeration.getSize();
    for (int x=0; x < size;++x) {
      addElement(anInstanceEnumeration.getElement(x));
    }           

  }
  
  //----------------------------------------------------------------------------
  Linux_SambaShareProtocolOptionsManualInstanceEnumeration::~Linux_SambaShareProtocolOptionsManualInstanceEnumeration() {
   	
  	if (m_firstElementP) {
  	  delete(m_firstElementP);
  	}
  	  	
  }
  
  //----------------------------------------------------------------------------
  void
  Linux_SambaShareProtocolOptionsManualInstanceEnumeration::reset() {
  	
  	m_currentElementP = m_firstElementP;
  	
  }
  	  
  //----------------------------------------------------------------------------
  bool
  Linux_SambaShareProtocolOptionsManualInstanceEnumeration::hasNext() const {
  	
  	return (m_currentElementP != 0);
  
  }
  
  //----------------------------------------------------------------------------
  int
  Linux_SambaShareProtocolOptionsManualInstanceEnumeration::getSize() const {
  	
    int size = 0;
    Linux_SambaShareProtocolOptionsManualInstanceEnumerationElement* followingP = m_firstElementP;
  	
  	while (followingP) {
      followingP = followingP->m_nextP;
      ++size;
    }
  	
    return size;
    
  }
  
  //----------------------------------------------------------------------------
  const Linux_SambaShareProtocolOptionsManualInstance&  
  Linux_SambaShareProtocolOptionsManualInstanceEnumeration::getElement(int anIndex) const {
   
    Linux_SambaShareProtocolOptionsManualInstanceEnumerationElement* followingP = m_firstElementP;
   
    int x = 0;
    while (followingP && (x < anIndex)) {
      followingP = followingP->m_nextP;
      ++x;
    }
    
    return *(followingP->m_elementP);

  }
  
  //----------------------------------------------------------------------------
  const Linux_SambaShareProtocolOptionsManualInstance&
  Linux_SambaShareProtocolOptionsManualInstanceEnumeration::getNext() {
   	
    Linux_SambaShareProtocolOptionsManualInstanceEnumerationElement* currentElementP =
  	  m_currentElementP;

    m_currentElementP = m_currentElementP->m_nextP;
  	 
    return *(currentElementP->m_elementP);

  }
  	  
  //----------------------------------------------------------------------------
  void
  Linux_SambaShareProtocolOptionsManualInstanceEnumeration::addElement(
    const Linux_SambaShareProtocolOptionsManualInstance& anInstance) {
   	
  	if (m_firstElementP == 0) {
  	  m_firstElementP = new Linux_SambaShareProtocolOptionsManualInstanceEnumerationElement();
  	  m_firstElementP->m_elementP = new Linux_SambaShareProtocolOptionsManualInstance(anInstance);
  	  m_endElementP = m_firstElementP;
  	  m_currentElementP = m_firstElementP;
  	} else {
  	  m_endElementP->m_nextP = new Linux_SambaShareProtocolOptionsManualInstanceEnumerationElement();
  	  m_endElementP = m_endElementP->m_nextP;
  	  m_endElementP->m_elementP = new Linux_SambaShareProtocolOptionsManualInstance(anInstance);
  	}

  }
  
}
