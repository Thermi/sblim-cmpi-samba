// =======================================================================
// Linux_SambaServiceConfigurationForServiceInstance.cpp
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
#include "Linux_SambaServiceConfigurationForServiceInstance.h"
#include "CmpiData.h"
#include "CmpiString.h"
#include "CmpiArray.h"
#include <string>

namespace genProvider {

  //****************************************************************************
  //Linux_SambaServiceConfigurationForServiceInstance
  //----------------------------------------------------------------------------
  //empty constructor
  Linux_SambaServiceConfigurationForServiceInstance::Linux_SambaServiceConfigurationForServiceInstance() {   	
   	init();  	   	
  }
  
  //----------------------------------------------------------------------------
  //copy constructor	
  //----------------------------------------------------------------------------
  Linux_SambaServiceConfigurationForServiceInstance::Linux_SambaServiceConfigurationForServiceInstance(
    const Linux_SambaServiceConfigurationForServiceInstance& anInstance) {   	
   	init(anInstance);  	   	
  }
  
  //----------------------------------------------------------------------------
  //constructor using CmpiInstance
  //----------------------------------------------------------------------------
  Linux_SambaServiceConfigurationForServiceInstance::Linux_SambaServiceConfigurationForServiceInstance(
    const CmpiInstance& aCmpiInstance,
    const char* anInstanceNamespaceP) {

    CmpiData cmpiData;

    init(); 
    
    CmpiObjectPath cop = aCmpiInstance.getObjectPath();
    cop.setNameSpace(anInstanceNamespaceP);
    setInstanceName(Linux_SambaServiceConfigurationForServiceInstanceName(cop));

    
  }
  
  //----------------------------------------------------------------------------
  //Destructor
  //----------------------------------------------------------------------------
  Linux_SambaServiceConfigurationForServiceInstance::
   ~Linux_SambaServiceConfigurationForServiceInstance(){
   	reset();  	  
  }
  
  
  //----------------------------------------------------------------------------
  //copy operator
  //----------------------------------------------------------------------------
  Linux_SambaServiceConfigurationForServiceInstance&
  Linux_SambaServiceConfigurationForServiceInstance::operator=(
    const Linux_SambaServiceConfigurationForServiceInstance& anInstance) {   	
   	
   	init(anInstance);
   	return *this;
  
  }
  
  
  //----------------------------------------------------------------------------
  //converts to CmpiInstance
  //----------------------------------------------------------------------------
  CmpiInstance
  Linux_SambaServiceConfigurationForServiceInstance::getCmpiInstance(
    const char** aPropertiesPP) const {
   	
   	CmpiObjectPath objectPath=getInstanceName().getObjectPath();      
    CmpiInstance cmpiInstance(objectPath);    
    getInstanceName().fillKeys(cmpiInstance);
    
    if (aPropertiesPP) {
	    cmpiInstance.setPropertyFilter(aPropertiesPP,0);
    }

  	
  	return cmpiInstance;
  	
  }
  
  //----------------------------------------------------------------------------
  // InstanceName related methods
  //----------------------------------------------------------------------------
  unsigned int 
  Linux_SambaServiceConfigurationForServiceInstance::isInstanceNameSet() const {
  	return isSet.instanceName;
  }
  
  //----------------------------------------------------------------------------
  const Linux_SambaServiceConfigurationForServiceInstanceName&
  Linux_SambaServiceConfigurationForServiceInstance::getInstanceName() const {

    if( ! isSet.instanceName) {
   	  throw CmpiErrorFormater::getErrorException(
        CmpiErrorFormater::NOT_SET,
        "InstanceName (CIM Key Attributes)",
        "Linux_SambaServiceConfigurationForService");
   	}
  		
   	return m_instanceName;
  
  }

  //----------------------------------------------------------------------------
  void
  Linux_SambaServiceConfigurationForServiceInstance::setInstanceName(
    const Linux_SambaServiceConfigurationForServiceInstanceName& val) {

    m_instanceName = val;
    isSet.instanceName = 1;

  }

  
  //----------------------------------------------------------------------------
  //set isSet attributes to FALSE
  //----------------------------------------------------------------------------
  void
  Linux_SambaServiceConfigurationForServiceInstance::init() {
   	isSet.instanceName = 0;
  	
  }
  
  //----------------------------------------------------------------------------
  //copies another instance properties in this
  //----------------------------------------------------------------------------
  void 
  Linux_SambaServiceConfigurationForServiceInstance::init(
    const Linux_SambaServiceConfigurationForServiceInstance& anOriginal) {   	

   	init();
   	   	
    if(anOriginal.isInstanceNameSet()) {
      setInstanceName(anOriginal.getInstanceName());
    }
        
  }
  
  //----------------------------------------------------------------------------
  //reset the instance data
  //----------------------------------------------------------------------------
  void
  Linux_SambaServiceConfigurationForServiceInstance::reset() {
   	
  }
  
  //----------------------------------------------------------------------------
  //Linux_SambaServiceConfigurationForServiceInstanceEnumerationElement	
  //----------------------------------------------------------------------------
  Linux_SambaServiceConfigurationForServiceInstanceEnumerationElement::Linux_SambaServiceConfigurationForServiceInstanceEnumerationElement() {
   	
  	m_elementP = 0;
  	m_nextP = 0;
  	  
  }
  
  //----------------------------------------------------------------------------
  Linux_SambaServiceConfigurationForServiceInstanceEnumerationElement::~Linux_SambaServiceConfigurationForServiceInstanceEnumerationElement() {
   	
  	if (m_elementP) {
  	  delete(m_elementP);
  	}
  	
  	if (m_nextP) {
  	  delete(m_nextP);
  	}
  	  
  }

  //----------------------------------------------------------------------------
  //Linux_SambaServiceConfigurationForServiceInstanceNameEnumeration
  //----------------------------------------------------------------------------
  Linux_SambaServiceConfigurationForServiceInstanceEnumeration::Linux_SambaServiceConfigurationForServiceInstanceEnumeration() {
   	
    m_firstElementP = 0;
    m_currentElementP = 0;
    m_endElementP = 0;
  
  }
  
  //----------------------------------------------------------------------------
  Linux_SambaServiceConfigurationForServiceInstanceEnumeration::Linux_SambaServiceConfigurationForServiceInstanceEnumeration(
    const Linux_SambaServiceConfigurationForServiceInstanceEnumeration& anInstanceEnumeration) {
   	
    m_firstElementP = 0;
    m_currentElementP = 0;
    m_endElementP = 0;
  	 
    int size = anInstanceEnumeration.getSize();
    for (int x=0; x < size;++x) {
      addElement(anInstanceEnumeration.getElement(x));
    }           

  }
  
  //----------------------------------------------------------------------------
  Linux_SambaServiceConfigurationForServiceInstanceEnumeration::~Linux_SambaServiceConfigurationForServiceInstanceEnumeration() {
   	
  	if (m_firstElementP) {
  	  delete(m_firstElementP);
  	}
  	  	
  }
  
  //----------------------------------------------------------------------------
  void
  Linux_SambaServiceConfigurationForServiceInstanceEnumeration::reset() {
  	
  	m_currentElementP = m_firstElementP;
  	
  }
  	  
  //----------------------------------------------------------------------------
  bool
  Linux_SambaServiceConfigurationForServiceInstanceEnumeration::hasNext() const {
  	
  	return (m_currentElementP != 0);
  
  }
  
  //----------------------------------------------------------------------------
  int
  Linux_SambaServiceConfigurationForServiceInstanceEnumeration::getSize() const {
  	
    int size = 0;
    Linux_SambaServiceConfigurationForServiceInstanceEnumerationElement* followingP = m_firstElementP;
  	
  	while (followingP) {
      followingP = followingP->m_nextP;
      ++size;
    }
  	
    return size;
    
  }
  
  //----------------------------------------------------------------------------
  const Linux_SambaServiceConfigurationForServiceInstance&  
  Linux_SambaServiceConfigurationForServiceInstanceEnumeration::getElement(int anIndex) const {
   
    Linux_SambaServiceConfigurationForServiceInstanceEnumerationElement* followingP = m_firstElementP;
   
    int x = 0;
    while (followingP && (x < anIndex)) {
      followingP = followingP->m_nextP;
      ++x;
    }
    
    return *(followingP->m_elementP);

  }
  
  //----------------------------------------------------------------------------
  const Linux_SambaServiceConfigurationForServiceInstance&
  Linux_SambaServiceConfigurationForServiceInstanceEnumeration::getNext() {
   	
    Linux_SambaServiceConfigurationForServiceInstanceEnumerationElement* currentElementP =
  	  m_currentElementP;

    m_currentElementP = m_currentElementP->m_nextP;
  	 
    return *(currentElementP->m_elementP);

  }
  	  
  //----------------------------------------------------------------------------
  void
  Linux_SambaServiceConfigurationForServiceInstanceEnumeration::addElement(
    const Linux_SambaServiceConfigurationForServiceInstance& anInstance) {
   	
  	if (m_firstElementP == 0) {
  	  m_firstElementP = new Linux_SambaServiceConfigurationForServiceInstanceEnumerationElement();
  	  m_firstElementP->m_elementP = new Linux_SambaServiceConfigurationForServiceInstance(anInstance);
  	  m_endElementP = m_firstElementP;
  	  m_currentElementP = m_firstElementP;
  	} else {
  	  m_endElementP->m_nextP = new Linux_SambaServiceConfigurationForServiceInstanceEnumerationElement();
  	  m_endElementP = m_endElementP->m_nextP;
  	  m_endElementP->m_elementP = new Linux_SambaServiceConfigurationForServiceInstance(anInstance);
  	}

  }
  
}
