// =======================================================================
// Linux_SambaServiceManualInstance.cpp
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
#include "Linux_SambaServiceManualInstance.h"
#include "CmpiData.h"
#include "CmpiString.h"
#include "CmpiArray.h"
#include <string>

namespace genProvider {

  //****************************************************************************
  //Linux_SambaServiceManualInstance
  //----------------------------------------------------------------------------
  //empty constructor
  Linux_SambaServiceManualInstance::Linux_SambaServiceManualInstance() {   	
   	init();  	   	
  }
  
  //----------------------------------------------------------------------------
  //copy constructor	
  //----------------------------------------------------------------------------
  Linux_SambaServiceManualInstance::Linux_SambaServiceManualInstance(
    const Linux_SambaServiceManualInstance& anInstance) {   	
   	init(anInstance);  	   	
  }
  
  //----------------------------------------------------------------------------
  //constructor using CmpiInstance
  //----------------------------------------------------------------------------
  Linux_SambaServiceManualInstance::Linux_SambaServiceManualInstance(
    const CmpiInstance& aCmpiInstance,
    const char* anInstanceNamespaceP) {

    CmpiData cmpiData;

    init(); 
    
    CmpiObjectPath cop = aCmpiInstance.getObjectPath();
    cop.setNameSpace(anInstanceNamespaceP);
    setInstanceName(Linux_SambaServiceInstanceName(cop));

    cmpiData = aCmpiInstance.getProperty("Started");
    if ( ! cmpiData.isNullValue()){
      CMPIBoolean Started = cmpiData;
      setStarted(Started);
    }

    
  }
  
  //----------------------------------------------------------------------------
  //Destructor
  //----------------------------------------------------------------------------
  Linux_SambaServiceManualInstance::
   ~Linux_SambaServiceManualInstance(){
   	reset();  	  
  }
  
  
  //----------------------------------------------------------------------------
  //copy operator
  //----------------------------------------------------------------------------
  Linux_SambaServiceManualInstance&
  Linux_SambaServiceManualInstance::operator=(
    const Linux_SambaServiceManualInstance& anInstance) {   	
   	
   	init(anInstance);
   	return *this;
  
  }
  
  
  //----------------------------------------------------------------------------
  //converts to CmpiInstance
  //----------------------------------------------------------------------------
  CmpiInstance
  Linux_SambaServiceManualInstance::getCmpiInstance(
    const char** aPropertiesPP) const {
   	
   	CmpiObjectPath objectPath=getInstanceName().getObjectPath();      
    CmpiInstance cmpiInstance(objectPath);    
    getInstanceName().fillKeys(cmpiInstance);
    
    if (aPropertiesPP) {
	    cmpiInstance.setPropertyFilter(aPropertiesPP,0);
    }

  	if (isSet.Started) {
  	  
  	  cmpiInstance.setProperty(
  	    "Started",
  	    CmpiBooleanData(m_Started));
  	}

  	
  	return cmpiInstance;
  	
  }
  
  //----------------------------------------------------------------------------
  // InstanceName related methods
  //----------------------------------------------------------------------------
  unsigned int 
  Linux_SambaServiceManualInstance::isInstanceNameSet() const {
  	return isSet.instanceName;
  }
  
  //----------------------------------------------------------------------------
  const Linux_SambaServiceInstanceName&
  Linux_SambaServiceManualInstance::getInstanceName() const {

    if( ! isSet.instanceName) {
   	  throw CmpiErrorFormater::getErrorException(
        CmpiErrorFormater::NOT_SET,
        "InstanceName (CIM Key Attributes)",
        "Linux_SambaService");
   	}
  		
   	return m_instanceName;
  
  }

  //----------------------------------------------------------------------------
  void
  Linux_SambaServiceManualInstance::setInstanceName(
    const Linux_SambaServiceInstanceName& val) {

    m_instanceName = val;
    isSet.instanceName = 1;

  }
       
  //----------------------------------------------------------------------------
  // Started related methods
  //----------------------------------------------------------------------------
  unsigned int
  Linux_SambaServiceManualInstance::isStartedSet() const {
    return isSet.Started;
  }

  //----------------------------------------------------------------------------
  void Linux_SambaServiceManualInstance::setStarted(
    const CMPIBoolean aValue) {
  
    m_Started = aValue;
    isSet.Started = 1;
  
  }       

  //----------------------------------------------------------------------------
  const CMPIBoolean
  Linux_SambaServiceManualInstance::getStarted() const {
    
    if ( ! isSet.Started) {
   	  throw CmpiErrorFormater::getErrorException(
   	    CmpiErrorFormater::NOT_SET,
        "Started",
        "Linux_SambaService");
   	}


    return m_Started;

  }

  
  //----------------------------------------------------------------------------
  //set isSet attributes to FALSE
  //----------------------------------------------------------------------------
  void
  Linux_SambaServiceManualInstance::init() {
   	isSet.instanceName = 0;
    isSet.Started = 0;
  	
  }
  
  //----------------------------------------------------------------------------
  //copies another instance properties in this
  //----------------------------------------------------------------------------
  void 
  Linux_SambaServiceManualInstance::init(
    const Linux_SambaServiceManualInstance& anOriginal) {   	

   	init();
   	   	
    if(anOriginal.isInstanceNameSet()) {
      setInstanceName(anOriginal.getInstanceName());
    }
       	
    if (anOriginal.isStartedSet()) {
      const CMPIBoolean StartedOriginal = anOriginal.getStarted();
      setStarted(StartedOriginal);
    }
    
  }
  
  //----------------------------------------------------------------------------
  //reset the instance data
  //----------------------------------------------------------------------------
  void
  Linux_SambaServiceManualInstance::reset() {
   	
  }
  
  //----------------------------------------------------------------------------
  //Linux_SambaServiceManualInstanceEnumerationElement	
  //----------------------------------------------------------------------------
  Linux_SambaServiceManualInstanceEnumerationElement::Linux_SambaServiceManualInstanceEnumerationElement() {
   	
  	m_elementP = 0;
  	m_nextP = 0;
  	  
  }
  
  //----------------------------------------------------------------------------
  Linux_SambaServiceManualInstanceEnumerationElement::~Linux_SambaServiceManualInstanceEnumerationElement() {
   	
  	if (m_elementP) {
  	  delete(m_elementP);
  	}
  	
  	if (m_nextP) {
  	  delete(m_nextP);
  	}
  	  
  }

  //----------------------------------------------------------------------------
  //Linux_SambaServiceManualInstanceNameEnumeration
  //----------------------------------------------------------------------------
  Linux_SambaServiceManualInstanceEnumeration::Linux_SambaServiceManualInstanceEnumeration() {
   	
    m_firstElementP = 0;
    m_currentElementP = 0;
    m_endElementP = 0;
  
  }
  
  //----------------------------------------------------------------------------
  Linux_SambaServiceManualInstanceEnumeration::Linux_SambaServiceManualInstanceEnumeration(
    const Linux_SambaServiceManualInstanceEnumeration& anInstanceEnumeration) {
   	
    m_firstElementP = 0;
    m_currentElementP = 0;
    m_endElementP = 0;
  	 
    int size = anInstanceEnumeration.getSize();
    for (int x=0; x < size;++x) {
      addElement(anInstanceEnumeration.getElement(x));
    }           

  }
  
  //----------------------------------------------------------------------------
  Linux_SambaServiceManualInstanceEnumeration::~Linux_SambaServiceManualInstanceEnumeration() {
   	
  	if (m_firstElementP) {
  	  delete(m_firstElementP);
  	}
  	  	
  }
  
  //----------------------------------------------------------------------------
  void
  Linux_SambaServiceManualInstanceEnumeration::reset() {
  	
  	m_currentElementP = m_firstElementP;
  	
  }
  	  
  //----------------------------------------------------------------------------
  bool
  Linux_SambaServiceManualInstanceEnumeration::hasNext() const {
  	
  	return (m_currentElementP != 0);
  
  }
  
  //----------------------------------------------------------------------------
  int
  Linux_SambaServiceManualInstanceEnumeration::getSize() const {
  	
    int size = 0;
    Linux_SambaServiceManualInstanceEnumerationElement* followingP = m_firstElementP;
  	
  	while (followingP) {
      followingP = followingP->m_nextP;
      ++size;
    }
  	
    return size;
    
  }
  
  //----------------------------------------------------------------------------
  const Linux_SambaServiceManualInstance&  
  Linux_SambaServiceManualInstanceEnumeration::getElement(int anIndex) const {
   
    Linux_SambaServiceManualInstanceEnumerationElement* followingP = m_firstElementP;
   
    int x = 0;
    while (followingP && (x < anIndex)) {
      followingP = followingP->m_nextP;
      ++x;
    }
    
    return *(followingP->m_elementP);

  }
  
  //----------------------------------------------------------------------------
  const Linux_SambaServiceManualInstance&
  Linux_SambaServiceManualInstanceEnumeration::getNext() {
   	
    Linux_SambaServiceManualInstanceEnumerationElement* currentElementP =
  	  m_currentElementP;

    m_currentElementP = m_currentElementP->m_nextP;
  	 
    return *(currentElementP->m_elementP);

  }
  	  
  //----------------------------------------------------------------------------
  void
  Linux_SambaServiceManualInstanceEnumeration::addElement(
    const Linux_SambaServiceManualInstance& anInstance) {
   	
  	if (m_firstElementP == 0) {
  	  m_firstElementP = new Linux_SambaServiceManualInstanceEnumerationElement();
  	  m_firstElementP->m_elementP = new Linux_SambaServiceManualInstance(anInstance);
  	  m_endElementP = m_firstElementP;
  	  m_currentElementP = m_firstElementP;
  	} else {
  	  m_endElementP->m_nextP = new Linux_SambaServiceManualInstanceEnumerationElement();
  	  m_endElementP = m_endElementP->m_nextP;
  	  m_endElementP->m_elementP = new Linux_SambaServiceManualInstance(anInstance);
  	}

  }
  
}
