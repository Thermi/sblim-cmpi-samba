// =======================================================================
// Linux_SambaUserManualInstance.cpp
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
#include "Linux_SambaUserManualInstance.h"
#include "CmpiData.h"
#include "CmpiString.h"
#include "CmpiArray.h"
#include <string>

namespace genProvider {

  //****************************************************************************
  //Linux_SambaUserManualInstance
  //----------------------------------------------------------------------------
  //empty constructor
  Linux_SambaUserManualInstance::Linux_SambaUserManualInstance() {   	
   	init();  	   	
  }
  
  //----------------------------------------------------------------------------
  //copy constructor	
  //----------------------------------------------------------------------------
  Linux_SambaUserManualInstance::Linux_SambaUserManualInstance(
    const Linux_SambaUserManualInstance& anInstance) {   	
   	init(anInstance);  	   	
  }
  
  //----------------------------------------------------------------------------
  //constructor using CmpiInstance
  //----------------------------------------------------------------------------
  Linux_SambaUserManualInstance::Linux_SambaUserManualInstance(
    const CmpiInstance& aCmpiInstance,
    const char* anInstanceNamespaceP) {

    CmpiData cmpiData;

    init(); 
    
    CmpiObjectPath cop = aCmpiInstance.getObjectPath();
    cop.setNameSpace(anInstanceNamespaceP);
    setInstanceName(Linux_SambaUserInstanceName(cop));

    cmpiData = aCmpiInstance.getProperty("SambaUserPassword");
    if ( ! cmpiData.isNullValue()){
      CmpiString SambaUserPassword = cmpiData;
      setSambaUserPassword(SambaUserPassword.charPtr());
    }

    cmpiData = aCmpiInstance.getProperty("SystemUserName");
    if ( ! cmpiData.isNullValue()){
      CmpiString SystemUserName = cmpiData;
      setSystemUserName(SystemUserName.charPtr());
    }

    
  }
  
  //----------------------------------------------------------------------------
  //Destructor
  //----------------------------------------------------------------------------
  Linux_SambaUserManualInstance::
   ~Linux_SambaUserManualInstance(){
   	reset();  	  
  }
  
  
  //----------------------------------------------------------------------------
  //copy operator
  //----------------------------------------------------------------------------
  Linux_SambaUserManualInstance&
  Linux_SambaUserManualInstance::operator=(
    const Linux_SambaUserManualInstance& anInstance) {   	
   	
   	init(anInstance);
   	return *this;
  
  }
  
  
  //----------------------------------------------------------------------------
  //converts to CmpiInstance
  //----------------------------------------------------------------------------
  CmpiInstance
  Linux_SambaUserManualInstance::getCmpiInstance(
    const char** aPropertiesPP) const {
   	
   	CmpiObjectPath objectPath=getInstanceName().getObjectPath();      
    CmpiInstance cmpiInstance(objectPath);    
    getInstanceName().fillKeys(cmpiInstance);
    
    if (aPropertiesPP) {
	    cmpiInstance.setPropertyFilter(aPropertiesPP,0);
    }

  	if (isSet.SambaUserPassword) {
  	  
  	  cmpiInstance.setProperty(
  	    "SambaUserPassword",
  	    CmpiData(m_SambaUserPassword));
  	}

  	if (isSet.SystemUserName) {
  	  
  	  cmpiInstance.setProperty(
  	    "SystemUserName",
  	    CmpiData(m_SystemUserName));
  	}

  	
  	return cmpiInstance;
  	
  }
  
  //----------------------------------------------------------------------------
  // InstanceName related methods
  //----------------------------------------------------------------------------
  unsigned int 
  Linux_SambaUserManualInstance::isInstanceNameSet() const {
  	return isSet.instanceName;
  }
  
  //----------------------------------------------------------------------------
  const Linux_SambaUserInstanceName&
  Linux_SambaUserManualInstance::getInstanceName() const {

    if( ! isSet.instanceName) {
   	  throw CmpiErrorFormater::getErrorException(
        CmpiErrorFormater::NOT_SET,
        "InstanceName (CIM Key Attributes)",
        "Linux_SambaUser");
   	}
  		
   	return m_instanceName;
  
  }

  //----------------------------------------------------------------------------
  void
  Linux_SambaUserManualInstance::setInstanceName(
    const Linux_SambaUserInstanceName& val) {

    m_instanceName = val;
    isSet.instanceName = 1;

  }
       
  //----------------------------------------------------------------------------
  // SambaUserPassword related methods
  //----------------------------------------------------------------------------
  unsigned int
  Linux_SambaUserManualInstance::isSambaUserPasswordSet() const {
    return isSet.SambaUserPassword;
  }

  //----------------------------------------------------------------------------
  void
  Linux_SambaUserManualInstance::setSambaUserPassword(
    const char* aValueP,
    int aCopyFlag) {
    
    if (isSet.SambaUserPassword) {
      delete [] m_SambaUserPassword;
    }
    
    if (aCopyFlag && aValueP) {
      char* valueP = new char[strlen(aValueP) + 1];
      strcpy(valueP,aValueP);
      m_SambaUserPassword = valueP;
    } else {
      m_SambaUserPassword = aValueP;
    }
    
    isSet.SambaUserPassword = 1;

  }       

  //----------------------------------------------------------------------------
  const char*
  Linux_SambaUserManualInstance::getSambaUserPassword() const {
    
    if ( ! isSet.SambaUserPassword) {
   	  throw CmpiErrorFormater::getErrorException(
   	    CmpiErrorFormater::NOT_SET,
        "SambaUserPassword is a required attribute for ",
        "Linux_SambaUser");
    }

    return m_SambaUserPassword;

  }
       
  //----------------------------------------------------------------------------
  // SystemUserName related methods
  //----------------------------------------------------------------------------
  unsigned int
  Linux_SambaUserManualInstance::isSystemUserNameSet() const {
    return isSet.SystemUserName;
  }

  //----------------------------------------------------------------------------
  void
  Linux_SambaUserManualInstance::setSystemUserName(
    const char* aValueP,
    int aCopyFlag) {
    
    if (isSet.SystemUserName) {
      delete [] m_SystemUserName;
    }
    
    if (aCopyFlag && aValueP) {
      char* valueP = new char[strlen(aValueP) + 1];
      strcpy(valueP,aValueP);
      m_SystemUserName = valueP;
    } else {
      m_SystemUserName = aValueP;
    }
    
    isSet.SystemUserName = 1;

  }       

  //----------------------------------------------------------------------------
  const char*
  Linux_SambaUserManualInstance::getSystemUserName() const {
    
    if ( ! isSet.SystemUserName) {
  	  throw CmpiErrorFormater::getErrorException(
   	    CmpiErrorFormater::NOT_SET,
        "SystemUserName is a requird attribute for ",
        "Linux_SambaUser");
 	}

    return m_SystemUserName;

  }

  
  //----------------------------------------------------------------------------
  //set isSet attributes to FALSE
  //----------------------------------------------------------------------------
  void
  Linux_SambaUserManualInstance::init() {
   	isSet.instanceName = 0;
    isSet.SambaUserPassword = 0;
    isSet.SystemUserName = 0;
  	
  }
  
  //----------------------------------------------------------------------------
  //copies another instance properties in this
  //----------------------------------------------------------------------------
  void 
  Linux_SambaUserManualInstance::init(
    const Linux_SambaUserManualInstance& anOriginal) {   	

   	init();
   	   	
    if(anOriginal.isInstanceNameSet()) {
      setInstanceName(anOriginal.getInstanceName());
    }
       	
    if (anOriginal.isSambaUserPasswordSet()) {
      const char* SambaUserPasswordOriginal = anOriginal.getSambaUserPassword();
      setSambaUserPassword(SambaUserPasswordOriginal,1);
    }
   	
    if (anOriginal.isSystemUserNameSet()) {
      const char* SystemUserNameOriginal = anOriginal.getSystemUserName();
      setSystemUserName(SystemUserNameOriginal,1);
    }
    
  }
  
  //----------------------------------------------------------------------------
  //reset the instance data
  //----------------------------------------------------------------------------
  void
  Linux_SambaUserManualInstance::reset() {
   	
  	if (isSet.SambaUserPassword) {
  	  delete(m_SambaUserPassword);
  	}

  	if (isSet.SystemUserName) {
  	  delete(m_SystemUserName);
  	}

  }
  
  //----------------------------------------------------------------------------
  //Linux_SambaUserManualInstanceEnumerationElement	
  //----------------------------------------------------------------------------
  Linux_SambaUserManualInstanceEnumerationElement::Linux_SambaUserManualInstanceEnumerationElement() {
   	
  	m_elementP = 0;
  	m_nextP = 0;
  	  
  }
  
  //----------------------------------------------------------------------------
  Linux_SambaUserManualInstanceEnumerationElement::~Linux_SambaUserManualInstanceEnumerationElement() {
   	
  	if (m_elementP) {
  	  delete(m_elementP);
  	}
  	
  	if (m_nextP) {
  	  delete(m_nextP);
  	}
  	  
  }

  //----------------------------------------------------------------------------
  //Linux_SambaUserManualInstanceNameEnumeration
  //----------------------------------------------------------------------------
  Linux_SambaUserManualInstanceEnumeration::Linux_SambaUserManualInstanceEnumeration() {
   	
    m_firstElementP = 0;
    m_currentElementP = 0;
    m_endElementP = 0;
  
  }
  
  //----------------------------------------------------------------------------
  Linux_SambaUserManualInstanceEnumeration::Linux_SambaUserManualInstanceEnumeration(
    const Linux_SambaUserManualInstanceEnumeration& anInstanceEnumeration) {
   	
    m_firstElementP = 0;
    m_currentElementP = 0;
    m_endElementP = 0;
  	 
    int size = anInstanceEnumeration.getSize();
    for (int x=0; x < size;++x) {
      addElement(anInstanceEnumeration.getElement(x));
    }           

  }
  
  //----------------------------------------------------------------------------
  Linux_SambaUserManualInstanceEnumeration::~Linux_SambaUserManualInstanceEnumeration() {
   	
  	if (m_firstElementP) {
  	  delete(m_firstElementP);
  	}
  	  	
  }
  
  //----------------------------------------------------------------------------
  void
  Linux_SambaUserManualInstanceEnumeration::reset() {
  	
  	m_currentElementP = m_firstElementP;
  	
  }
  	  
  //----------------------------------------------------------------------------
  bool
  Linux_SambaUserManualInstanceEnumeration::hasNext() const {
  	
  	return (m_currentElementP != 0);
  
  }
  
  //----------------------------------------------------------------------------
  int
  Linux_SambaUserManualInstanceEnumeration::getSize() const {
  	
    int size = 0;
    Linux_SambaUserManualInstanceEnumerationElement* followingP = m_firstElementP;
  	
  	while (followingP) {
      followingP = followingP->m_nextP;
      ++size;
    }
  	
    return size;
    
  }
  
  //----------------------------------------------------------------------------
  const Linux_SambaUserManualInstance&  
  Linux_SambaUserManualInstanceEnumeration::getElement(int anIndex) const {
   
    Linux_SambaUserManualInstanceEnumerationElement* followingP = m_firstElementP;
   
    int x = 0;
    while (followingP && (x < anIndex)) {
      followingP = followingP->m_nextP;
      ++x;
    }
    
    return *(followingP->m_elementP);

  }
  
  //----------------------------------------------------------------------------
  const Linux_SambaUserManualInstance&
  Linux_SambaUserManualInstanceEnumeration::getNext() {
   	
    Linux_SambaUserManualInstanceEnumerationElement* currentElementP =
  	  m_currentElementP;

    m_currentElementP = m_currentElementP->m_nextP;
  	 
    return *(currentElementP->m_elementP);

  }
  	  
  //----------------------------------------------------------------------------
  void
  Linux_SambaUserManualInstanceEnumeration::addElement(
    const Linux_SambaUserManualInstance& anInstance) {
   	
  	if (m_firstElementP == 0) {
  	  m_firstElementP = new Linux_SambaUserManualInstanceEnumerationElement();
  	  m_firstElementP->m_elementP = new Linux_SambaUserManualInstance(anInstance);
  	  m_endElementP = m_firstElementP;
  	  m_currentElementP = m_firstElementP;
  	} else {
  	  m_endElementP->m_nextP = new Linux_SambaUserManualInstanceEnumerationElement();
  	  m_endElementP = m_endElementP->m_nextP;
  	  m_endElementP->m_elementP = new Linux_SambaUserManualInstance(anInstance);
  	}

  }
  
}
