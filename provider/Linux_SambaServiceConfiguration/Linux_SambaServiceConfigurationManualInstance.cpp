// =======================================================================
// Linux_SambaServiceConfigurationManualInstance.cpp
//     created on Fri, 23 Jun 2006 using ECUTE 2.2.1
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
#include "Linux_SambaServiceConfigurationManualInstance.h"
#include "CmpiData.h"
#include "CmpiString.h"
#include "CmpiArray.h"
#include <string>

namespace genProvider {

  //****************************************************************************
  //Linux_SambaServiceConfigurationManualInstance
  //----------------------------------------------------------------------------
  //empty constructor
  Linux_SambaServiceConfigurationManualInstance::Linux_SambaServiceConfigurationManualInstance() {   	
   	init();  	   	
  }
  
  //----------------------------------------------------------------------------
  //copy constructor	
  //----------------------------------------------------------------------------
  Linux_SambaServiceConfigurationManualInstance::Linux_SambaServiceConfigurationManualInstance(
    const Linux_SambaServiceConfigurationManualInstance& anInstance) {   	
   	init(anInstance);  	   	
  }
  
  //----------------------------------------------------------------------------
  //constructor using CmpiInstance
  //----------------------------------------------------------------------------
  Linux_SambaServiceConfigurationManualInstance::Linux_SambaServiceConfigurationManualInstance(
    const CmpiInstance& aCmpiInstance,
    const char* anInstanceNamespaceP) {

    CmpiData cmpiData;

    init(); 
    
    CmpiObjectPath cop = aCmpiInstance.getObjectPath();
    cop.setNameSpace(anInstanceNamespaceP);
    setInstanceName(Linux_SambaServiceConfigurationInstanceName(cop));

    cmpiData = aCmpiInstance.getProperty("ConfigurationFile");
    if ( ! cmpiData.isNullValue()){
      CmpiString ConfigurationFile = cmpiData;
      setConfigurationFile(ConfigurationFile.charPtr());
    }

    
  }
  
  //----------------------------------------------------------------------------
  //Destructor
  //----------------------------------------------------------------------------
  Linux_SambaServiceConfigurationManualInstance::
   ~Linux_SambaServiceConfigurationManualInstance(){
   	reset();  	  
  }
  
  
  //----------------------------------------------------------------------------
  //copy operator
  //----------------------------------------------------------------------------
  Linux_SambaServiceConfigurationManualInstance&
  Linux_SambaServiceConfigurationManualInstance::operator=(
    const Linux_SambaServiceConfigurationManualInstance& anInstance) {   	
   	
   	init(anInstance);
   	return *this;
  
  }
  
  
  //----------------------------------------------------------------------------
  //converts to CmpiInstance
  //----------------------------------------------------------------------------
  CmpiInstance
  Linux_SambaServiceConfigurationManualInstance::getCmpiInstance(
    const char** aPropertiesPP) const {
   	
   	CmpiObjectPath objectPath=getInstanceName().getObjectPath();      
    CmpiInstance cmpiInstance(objectPath);    
    getInstanceName().fillKeys(cmpiInstance);
    
    if (aPropertiesPP) {
	    cmpiInstance.setPropertyFilter(aPropertiesPP,0);
    }

  	if (isSet.ConfigurationFile) {
  	  
  	  cmpiInstance.setProperty(
  	    "ConfigurationFile",
  	    CmpiData(m_ConfigurationFile));
  	}

  	
  	return cmpiInstance;
  	
  }
  
  //----------------------------------------------------------------------------
  // InstanceName related methods
  //----------------------------------------------------------------------------
  unsigned int 
  Linux_SambaServiceConfigurationManualInstance::isInstanceNameSet() const {
  	return isSet.instanceName;
  }
  
  //----------------------------------------------------------------------------
  const Linux_SambaServiceConfigurationInstanceName&
  Linux_SambaServiceConfigurationManualInstance::getInstanceName() const {

    if( ! isSet.instanceName) {
   	  throw CmpiErrorFormater::getErrorException(
        CmpiErrorFormater::NOT_SET,
        "InstanceName (CIM Key Attributes)",
        "Linux_SambaServiceConfiguration");
   	}
  		
   	return m_instanceName;
  
  }

  //----------------------------------------------------------------------------
  void
  Linux_SambaServiceConfigurationManualInstance::setInstanceName(
    const Linux_SambaServiceConfigurationInstanceName& val) {

    m_instanceName = val;
    isSet.instanceName = 1;

  }
       
  //----------------------------------------------------------------------------
  // ConfigurationFile related methods
  //----------------------------------------------------------------------------
  unsigned int
  Linux_SambaServiceConfigurationManualInstance::isConfigurationFileSet() const {
    return isSet.ConfigurationFile;
  }

  //----------------------------------------------------------------------------
  void
  Linux_SambaServiceConfigurationManualInstance::setConfigurationFile(
    const char* aValueP,
    int aCopyFlag) {
    
    if (isSet.ConfigurationFile) {
      delete [] m_ConfigurationFile;
    }
    
    if (aCopyFlag && aValueP) {
      char* valueP = new char[strlen(aValueP) + 1];
      strcpy(valueP,aValueP);
      m_ConfigurationFile = valueP;
    } else {
      m_ConfigurationFile = aValueP;
    }
    
    isSet.ConfigurationFile = 1;

  }       

  //----------------------------------------------------------------------------
  const char*
  Linux_SambaServiceConfigurationManualInstance::getConfigurationFile() const {
    
    if ( ! isSet.ConfigurationFile) {
   	  throw CmpiErrorFormater::getErrorException(
   	    CmpiErrorFormater::NOT_SET,
        "ConfigurationFile",
        "Linux_SambaServiceConfiguration");
   	}


    return m_ConfigurationFile;

  }

  
  //----------------------------------------------------------------------------
  //set isSet attributes to FALSE
  //----------------------------------------------------------------------------
  void
  Linux_SambaServiceConfigurationManualInstance::init() {
   	isSet.instanceName = 0;
    isSet.ConfigurationFile = 0;
  	
  }
  
  //----------------------------------------------------------------------------
  //copies another instance properties in this
  //----------------------------------------------------------------------------
  void 
  Linux_SambaServiceConfigurationManualInstance::init(
    const Linux_SambaServiceConfigurationManualInstance& anOriginal) {   	

   	init();
   	   	
    if(anOriginal.isInstanceNameSet()) {
      setInstanceName(anOriginal.getInstanceName());
    }
       	
    if (anOriginal.isConfigurationFileSet()) {
      const char* ConfigurationFileOriginal = anOriginal.getConfigurationFile();
      setConfigurationFile(ConfigurationFileOriginal,1);
    }
    
  }
  
  //----------------------------------------------------------------------------
  //reset the instance data
  //----------------------------------------------------------------------------
  void
  Linux_SambaServiceConfigurationManualInstance::reset() {
   	
  	if (isSet.ConfigurationFile) {
  	  delete(m_ConfigurationFile);
  	}

  }
  
  //----------------------------------------------------------------------------
  //Linux_SambaServiceConfigurationManualInstanceEnumerationElement	
  //----------------------------------------------------------------------------
  Linux_SambaServiceConfigurationManualInstanceEnumerationElement::Linux_SambaServiceConfigurationManualInstanceEnumerationElement() {
   	
  	m_elementP = 0;
  	m_nextP = 0;
  	  
  }
  
  //----------------------------------------------------------------------------
  Linux_SambaServiceConfigurationManualInstanceEnumerationElement::~Linux_SambaServiceConfigurationManualInstanceEnumerationElement() {
   	
  	if (m_elementP) {
  	  delete(m_elementP);
  	}
  	
  	if (m_nextP) {
  	  delete(m_nextP);
  	}
  	  
  }

  //----------------------------------------------------------------------------
  //Linux_SambaServiceConfigurationManualInstanceNameEnumeration
  //----------------------------------------------------------------------------
  Linux_SambaServiceConfigurationManualInstanceEnumeration::Linux_SambaServiceConfigurationManualInstanceEnumeration() {
   	
    m_firstElementP = 0;
    m_currentElementP = 0;
    m_endElementP = 0;
  
  }
  
  //----------------------------------------------------------------------------
  Linux_SambaServiceConfigurationManualInstanceEnumeration::Linux_SambaServiceConfigurationManualInstanceEnumeration(
    const Linux_SambaServiceConfigurationManualInstanceEnumeration& anInstanceEnumeration) {
   	
    m_firstElementP = 0;
    m_currentElementP = 0;
    m_endElementP = 0;
  	 
    int size = anInstanceEnumeration.getSize();
    for (int x=0; x < size;++x) {
      addElement(anInstanceEnumeration.getElement(x));
    }           

  }
  
  //----------------------------------------------------------------------------
  Linux_SambaServiceConfigurationManualInstanceEnumeration::~Linux_SambaServiceConfigurationManualInstanceEnumeration() {
   	
  	if (m_firstElementP) {
  	  delete(m_firstElementP);
  	}
  	  	
  }
  
  //----------------------------------------------------------------------------
  void
  Linux_SambaServiceConfigurationManualInstanceEnumeration::reset() {
  	
  	m_currentElementP = m_firstElementP;
  	
  }
  	  
  //----------------------------------------------------------------------------
  bool
  Linux_SambaServiceConfigurationManualInstanceEnumeration::hasNext() const {
  	
  	return (m_currentElementP != 0);
  
  }
  
  //----------------------------------------------------------------------------
  int
  Linux_SambaServiceConfigurationManualInstanceEnumeration::getSize() const {
  	
    int size = 0;
    Linux_SambaServiceConfigurationManualInstanceEnumerationElement* followingP = m_firstElementP;
  	
  	while (followingP) {
      followingP = followingP->m_nextP;
      ++size;
    }
  	
    return size;
    
  }
  
  //----------------------------------------------------------------------------
  const Linux_SambaServiceConfigurationManualInstance&  
  Linux_SambaServiceConfigurationManualInstanceEnumeration::getElement(int anIndex) const {
   
    Linux_SambaServiceConfigurationManualInstanceEnumerationElement* followingP = m_firstElementP;
   
    int x = 0;
    while (followingP && (x < anIndex)) {
      followingP = followingP->m_nextP;
      ++x;
    }
    
    return *(followingP->m_elementP);

  }
  
  //----------------------------------------------------------------------------
  const Linux_SambaServiceConfigurationManualInstance&
  Linux_SambaServiceConfigurationManualInstanceEnumeration::getNext() {
   	
    Linux_SambaServiceConfigurationManualInstanceEnumerationElement* currentElementP =
  	  m_currentElementP;

    m_currentElementP = m_currentElementP->m_nextP;
  	 
    return *(currentElementP->m_elementP);

  }
  	  
  //----------------------------------------------------------------------------
  void
  Linux_SambaServiceConfigurationManualInstanceEnumeration::addElement(
    const Linux_SambaServiceConfigurationManualInstance& anInstance) {
   	
  	if (m_firstElementP == 0) {
  	  m_firstElementP = new Linux_SambaServiceConfigurationManualInstanceEnumerationElement();
  	  m_firstElementP->m_elementP = new Linux_SambaServiceConfigurationManualInstance(anInstance);
  	  m_endElementP = m_firstElementP;
  	  m_currentElementP = m_firstElementP;
  	} else {
  	  m_endElementP->m_nextP = new Linux_SambaServiceConfigurationManualInstanceEnumerationElement();
  	  m_endElementP = m_endElementP->m_nextP;
  	  m_endElementP->m_elementP = new Linux_SambaServiceConfigurationManualInstance(anInstance);
  	}

  }
  
}
