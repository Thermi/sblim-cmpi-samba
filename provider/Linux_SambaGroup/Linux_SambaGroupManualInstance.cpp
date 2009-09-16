// =======================================================================
// Linux_SambaGroupManualInstance.cpp
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
#include "Linux_SambaGroupManualInstance.h"
#include "CmpiData.h"
#include "CmpiString.h"
#include "CmpiArray.h"
#include <string>

namespace genProvider {

  //****************************************************************************
  //Linux_SambaGroupManualInstance
  //----------------------------------------------------------------------------
  //empty constructor
  Linux_SambaGroupManualInstance::Linux_SambaGroupManualInstance() {   	
   	init();  	   	
  }
  
  //----------------------------------------------------------------------------
  //copy constructor	
  //----------------------------------------------------------------------------
  Linux_SambaGroupManualInstance::Linux_SambaGroupManualInstance(
    const Linux_SambaGroupManualInstance& anInstance) {   	
   	init(anInstance);  	   	
  }
  
  //----------------------------------------------------------------------------
  //constructor using CmpiInstance
  //----------------------------------------------------------------------------
  Linux_SambaGroupManualInstance::Linux_SambaGroupManualInstance(
    const CmpiInstance& aCmpiInstance,
    const char* anInstanceNamespaceP) {

    CmpiData cmpiData;

    init(); 
    
    CmpiObjectPath cop = aCmpiInstance.getObjectPath();
    cop.setNameSpace(anInstanceNamespaceP);
    setInstanceName(Linux_SambaGroupInstanceName(cop));

    cmpiData = aCmpiInstance.getProperty("SystemGroupName");
    if ( ! cmpiData.isNullValue()){
      CmpiString SystemGroupName = cmpiData;
      setSystemGroupName(SystemGroupName.charPtr());
    }

    
  }
  
  //----------------------------------------------------------------------------
  //Destructor
  //----------------------------------------------------------------------------
  Linux_SambaGroupManualInstance::
   ~Linux_SambaGroupManualInstance(){
   	reset();  	  
  }
  
  
  //----------------------------------------------------------------------------
  //copy operator
  //----------------------------------------------------------------------------
  Linux_SambaGroupManualInstance&
  Linux_SambaGroupManualInstance::operator=(
    const Linux_SambaGroupManualInstance& anInstance) {   	
   	
   	init(anInstance);
   	return *this;
  
  }
  
  
  //----------------------------------------------------------------------------
  //converts to CmpiInstance
  //----------------------------------------------------------------------------
  CmpiInstance
  Linux_SambaGroupManualInstance::getCmpiInstance(
    const char** aPropertiesPP) const {
   	
   	CmpiObjectPath objectPath=getInstanceName().getObjectPath();      
    CmpiInstance cmpiInstance(objectPath);    
    getInstanceName().fillKeys(cmpiInstance);
    
    if (aPropertiesPP) {
	    cmpiInstance.setPropertyFilter(aPropertiesPP,0);
    }

  	if (isSet.SystemGroupName) {
  	  
  	  cmpiInstance.setProperty(
  	    "SystemGroupName",
  	    CmpiData(m_SystemGroupName));
  	}

  	
  	return cmpiInstance;
  	
  }
  
  //----------------------------------------------------------------------------
  // InstanceName related methods
  //----------------------------------------------------------------------------
  unsigned int 
  Linux_SambaGroupManualInstance::isInstanceNameSet() const {
  	return isSet.instanceName;
  }
  
  //----------------------------------------------------------------------------
  const Linux_SambaGroupInstanceName&
  Linux_SambaGroupManualInstance::getInstanceName() const {

    if( ! isSet.instanceName) {
   	  throw CmpiErrorFormater::getErrorException(
        CmpiErrorFormater::NOT_SET,
        "InstanceName (CIM Key Attributes)",
        "Linux_SambaGroup");
   	}
  		
   	return m_instanceName;
  
  }

  //----------------------------------------------------------------------------
  void
  Linux_SambaGroupManualInstance::setInstanceName(
    const Linux_SambaGroupInstanceName& val) {

    m_instanceName = val;
    isSet.instanceName = 1;

  }
       
  //----------------------------------------------------------------------------
  // SystemGroupName related methods
  //----------------------------------------------------------------------------
  unsigned int
  Linux_SambaGroupManualInstance::isSystemGroupNameSet() const {
    return isSet.SystemGroupName;
  }

  //----------------------------------------------------------------------------
  void
  Linux_SambaGroupManualInstance::setSystemGroupName(
    const char* aValueP,
    int aCopyFlag) {
    
    if (isSet.SystemGroupName) {
      delete [] m_SystemGroupName;
    }
    
    if (aCopyFlag && aValueP) {
      char* valueP = new char[strlen(aValueP) + 1];
      strcpy(valueP,aValueP);
      m_SystemGroupName = valueP;
    } else {
      m_SystemGroupName = aValueP;
    }
    
    isSet.SystemGroupName = 1;

  }       

  //----------------------------------------------------------------------------
  const char*
  Linux_SambaGroupManualInstance::getSystemGroupName() const {
    
    if ( ! isSet.SystemGroupName) {
   	  throw CmpiErrorFormater::getErrorException(
   	    CmpiErrorFormater::NOT_SET,
        "SystemGroupName is a required attribute for ",
        "Linux_SambaGroup");
   	}


    return m_SystemGroupName;

  }

  
  //----------------------------------------------------------------------------
  //set isSet attributes to FALSE
  //----------------------------------------------------------------------------
  void
  Linux_SambaGroupManualInstance::init() {
   	isSet.instanceName = 0;
    isSet.SystemGroupName = 0;
  	
  }
  
  //----------------------------------------------------------------------------
  //copies another instance properties in this
  //----------------------------------------------------------------------------
  void 
  Linux_SambaGroupManualInstance::init(
    const Linux_SambaGroupManualInstance& anOriginal) {   	

   	init();
   	   	
    if(anOriginal.isInstanceNameSet()) {
      setInstanceName(anOriginal.getInstanceName());
    }
       	
    if (anOriginal.isSystemGroupNameSet()) {
      const char* SystemGroupNameOriginal = anOriginal.getSystemGroupName();
      setSystemGroupName(SystemGroupNameOriginal,1);
    }
    
  }
  
  //----------------------------------------------------------------------------
  //reset the instance data
  //----------------------------------------------------------------------------
  void
  Linux_SambaGroupManualInstance::reset() {
   	
  	if (isSet.SystemGroupName) {
  	  delete(m_SystemGroupName);
  	}

  }
  
  //----------------------------------------------------------------------------
  //Linux_SambaGroupManualInstanceEnumerationElement	
  //----------------------------------------------------------------------------
  Linux_SambaGroupManualInstanceEnumerationElement::Linux_SambaGroupManualInstanceEnumerationElement() {
   	
  	m_elementP = 0;
  	m_nextP = 0;
  	  
  }
  
  //----------------------------------------------------------------------------
  Linux_SambaGroupManualInstanceEnumerationElement::~Linux_SambaGroupManualInstanceEnumerationElement() {
   	
  	if (m_elementP) {
  	  delete(m_elementP);
  	}
  	
  	if (m_nextP) {
  	  delete(m_nextP);
  	}
  	  
  }

  //----------------------------------------------------------------------------
  //Linux_SambaGroupManualInstanceNameEnumeration
  //----------------------------------------------------------------------------
  Linux_SambaGroupManualInstanceEnumeration::Linux_SambaGroupManualInstanceEnumeration() {
   	
    m_firstElementP = 0;
    m_currentElementP = 0;
    m_endElementP = 0;
  
  }
  
  //----------------------------------------------------------------------------
  Linux_SambaGroupManualInstanceEnumeration::Linux_SambaGroupManualInstanceEnumeration(
    const Linux_SambaGroupManualInstanceEnumeration& anInstanceEnumeration) {
   	
    m_firstElementP = 0;
    m_currentElementP = 0;
    m_endElementP = 0;
  	 
    int size = anInstanceEnumeration.getSize();
    for (int x=0; x < size;++x) {
      addElement(anInstanceEnumeration.getElement(x));
    }           

  }
  
  //----------------------------------------------------------------------------
  Linux_SambaGroupManualInstanceEnumeration::~Linux_SambaGroupManualInstanceEnumeration() {
   	
  	if (m_firstElementP) {
  	  delete(m_firstElementP);
  	}
  	  	
  }
  
  //----------------------------------------------------------------------------
  void
  Linux_SambaGroupManualInstanceEnumeration::reset() {
  	
  	m_currentElementP = m_firstElementP;
  	
  }
  	  
  //----------------------------------------------------------------------------
  bool
  Linux_SambaGroupManualInstanceEnumeration::hasNext() const {
  	
  	return (m_currentElementP != 0);
  
  }
  
  //----------------------------------------------------------------------------
  int
  Linux_SambaGroupManualInstanceEnumeration::getSize() const {
  	
    int size = 0;
    Linux_SambaGroupManualInstanceEnumerationElement* followingP = m_firstElementP;
  	
  	while (followingP) {
      followingP = followingP->m_nextP;
      ++size;
    }
  	
    return size;
    
  }
  
  //----------------------------------------------------------------------------
  const Linux_SambaGroupManualInstance&  
  Linux_SambaGroupManualInstanceEnumeration::getElement(int anIndex) const {
   
    Linux_SambaGroupManualInstanceEnumerationElement* followingP = m_firstElementP;
   
    int x = 0;
    while (followingP && (x < anIndex)) {
      followingP = followingP->m_nextP;
      ++x;
    }
    
    return *(followingP->m_elementP);

  }
  
  //----------------------------------------------------------------------------
  const Linux_SambaGroupManualInstance&
  Linux_SambaGroupManualInstanceEnumeration::getNext() {
   	
    Linux_SambaGroupManualInstanceEnumerationElement* currentElementP =
  	  m_currentElementP;

    m_currentElementP = m_currentElementP->m_nextP;
  	 
    return *(currentElementP->m_elementP);

  }
  	  
  //----------------------------------------------------------------------------
  void
  Linux_SambaGroupManualInstanceEnumeration::addElement(
    const Linux_SambaGroupManualInstance& anInstance) {
   	
  	if (m_firstElementP == 0) {
  	  m_firstElementP = new Linux_SambaGroupManualInstanceEnumerationElement();
  	  m_firstElementP->m_elementP = new Linux_SambaGroupManualInstance(anInstance);
  	  m_endElementP = m_firstElementP;
  	  m_currentElementP = m_firstElementP;
  	} else {
  	  m_endElementP->m_nextP = new Linux_SambaGroupManualInstanceEnumerationElement();
  	  m_endElementP = m_endElementP->m_nextP;
  	  m_endElementP->m_elementP = new Linux_SambaGroupManualInstance(anInstance);
  	}

  }
  
}
