// =======================================================================
// Linux_SambaGlobalFileNameHandlingOptionsManualInstance.cpp
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
#include "Linux_SambaGlobalFileNameHandlingOptionsManualInstance.h"
#include "CmpiData.h"
#include "CmpiString.h"
#include "CmpiArray.h"
#include <string>

namespace genProvider {

  //****************************************************************************
  //Linux_SambaGlobalFileNameHandlingOptionsManualInstance
  //----------------------------------------------------------------------------
  //empty constructor
  Linux_SambaGlobalFileNameHandlingOptionsManualInstance::Linux_SambaGlobalFileNameHandlingOptionsManualInstance() {   	
   	init();  	   	
  }
  
  //----------------------------------------------------------------------------
  //copy constructor	
  //----------------------------------------------------------------------------
  Linux_SambaGlobalFileNameHandlingOptionsManualInstance::Linux_SambaGlobalFileNameHandlingOptionsManualInstance(
    const Linux_SambaGlobalFileNameHandlingOptionsManualInstance& anInstance) {   	
   	init(anInstance);  	   	
  }
  
  //----------------------------------------------------------------------------
  //constructor using CmpiInstance
  //----------------------------------------------------------------------------
  Linux_SambaGlobalFileNameHandlingOptionsManualInstance::Linux_SambaGlobalFileNameHandlingOptionsManualInstance(
    const CmpiInstance& aCmpiInstance,
    const char* anInstanceNamespaceP) {

    CmpiData cmpiData;

    init(); 
    
    CmpiObjectPath cop = aCmpiInstance.getObjectPath();
    cop.setNameSpace(anInstanceNamespaceP);
    setInstanceName(Linux_SambaGlobalFileNameHandlingOptionsInstanceName(cop));

    cmpiData = aCmpiInstance.getProperty("CaseSensitive");
    if ( ! cmpiData.isNullValue()){
      CMPIBoolean CaseSensitive = cmpiData;
      setCaseSensitive(CaseSensitive);
    }

    cmpiData = aCmpiInstance.getProperty("DosFiletimes");
    if ( ! cmpiData.isNullValue()){
      CMPIBoolean DosFiletimes = cmpiData;
      setDosFiletimes(DosFiletimes);
    }

    cmpiData = aCmpiInstance.getProperty("HideDotFiles");
    if ( ! cmpiData.isNullValue()){
      CMPIBoolean HideDotFiles = cmpiData;
      setHideDotFiles(HideDotFiles);
    }

    
  }
  
  //----------------------------------------------------------------------------
  //Destructor
  //----------------------------------------------------------------------------
  Linux_SambaGlobalFileNameHandlingOptionsManualInstance::
   ~Linux_SambaGlobalFileNameHandlingOptionsManualInstance(){
   	reset();  	  
  }
  
  
  //----------------------------------------------------------------------------
  //copy operator
  //----------------------------------------------------------------------------
  Linux_SambaGlobalFileNameHandlingOptionsManualInstance&
  Linux_SambaGlobalFileNameHandlingOptionsManualInstance::operator=(
    const Linux_SambaGlobalFileNameHandlingOptionsManualInstance& anInstance) {   	
   	
   	init(anInstance);
   	return *this;
  
  }
  
  
  //----------------------------------------------------------------------------
  //converts to CmpiInstance
  //----------------------------------------------------------------------------
  CmpiInstance
  Linux_SambaGlobalFileNameHandlingOptionsManualInstance::getCmpiInstance(
    const char** aPropertiesPP) const {
   	
   	CmpiObjectPath objectPath=getInstanceName().getObjectPath();      
    CmpiInstance cmpiInstance(objectPath);    
    getInstanceName().fillKeys(cmpiInstance);
    
    if (aPropertiesPP) {
	    cmpiInstance.setPropertyFilter(aPropertiesPP,0);
    }

  	if (isSet.CaseSensitive) {
  	  
  	  cmpiInstance.setProperty(
  	    "CaseSensitive",
  	    CmpiBooleanData(m_CaseSensitive));
  	}

  	if (isSet.DosFiletimes) {
  	  
  	  cmpiInstance.setProperty(
  	    "DosFiletimes",
  	    CmpiBooleanData(m_DosFiletimes));
  	}

  	if (isSet.HideDotFiles) {
  	  
  	  cmpiInstance.setProperty(
  	    "HideDotFiles",
  	    CmpiBooleanData(m_HideDotFiles));
  	}

  	
  	return cmpiInstance;
  	
  }
  
  //----------------------------------------------------------------------------
  // InstanceName related methods
  //----------------------------------------------------------------------------
  unsigned int 
  Linux_SambaGlobalFileNameHandlingOptionsManualInstance::isInstanceNameSet() const {
  	return isSet.instanceName;
  }
  
  //----------------------------------------------------------------------------
  const Linux_SambaGlobalFileNameHandlingOptionsInstanceName&
  Linux_SambaGlobalFileNameHandlingOptionsManualInstance::getInstanceName() const {

    if( ! isSet.instanceName) {
   	  throw CmpiErrorFormater::getErrorException(
        CmpiErrorFormater::NOT_SET,
        "InstanceName (CIM Key Attributes)",
        "Linux_SambaGlobalFileNameHandlingOptions");
   	}
  		
   	return m_instanceName;
  
  }

  //----------------------------------------------------------------------------
  void
  Linux_SambaGlobalFileNameHandlingOptionsManualInstance::setInstanceName(
    const Linux_SambaGlobalFileNameHandlingOptionsInstanceName& val) {

    m_instanceName = val;
    isSet.instanceName = 1;

  }
       
  //----------------------------------------------------------------------------
  // CaseSensitive related methods
  //----------------------------------------------------------------------------
  unsigned int
  Linux_SambaGlobalFileNameHandlingOptionsManualInstance::isCaseSensitiveSet() const {
    return isSet.CaseSensitive;
  }

  //----------------------------------------------------------------------------
  void Linux_SambaGlobalFileNameHandlingOptionsManualInstance::setCaseSensitive(
    const CMPIBoolean aValue) {
  
    m_CaseSensitive = aValue;
    isSet.CaseSensitive = 1;
  
  }       

  //----------------------------------------------------------------------------
  const CMPIBoolean
  Linux_SambaGlobalFileNameHandlingOptionsManualInstance::getCaseSensitive() const {
    
    if ( ! isSet.CaseSensitive) {
   	  throw CmpiErrorFormater::getErrorException(
   	    CmpiErrorFormater::NOT_SET,
        "CaseSensitive",
        "Linux_SambaGlobalFileNameHandlingOptions");
   	}


    return m_CaseSensitive;

  }
       
  //----------------------------------------------------------------------------
  // DosFiletimes related methods
  //----------------------------------------------------------------------------
  unsigned int
  Linux_SambaGlobalFileNameHandlingOptionsManualInstance::isDosFiletimesSet() const {
    return isSet.DosFiletimes;
  }

  //----------------------------------------------------------------------------
  void Linux_SambaGlobalFileNameHandlingOptionsManualInstance::setDosFiletimes(
    const CMPIBoolean aValue) {
  
    m_DosFiletimes = aValue;
    isSet.DosFiletimes = 1;
  
  }       

  //----------------------------------------------------------------------------
  const CMPIBoolean
  Linux_SambaGlobalFileNameHandlingOptionsManualInstance::getDosFiletimes() const {
    
    if ( ! isSet.DosFiletimes) {
   	  throw CmpiErrorFormater::getErrorException(
   	    CmpiErrorFormater::NOT_SET,
        "DosFiletimes",
        "Linux_SambaGlobalFileNameHandlingOptions");
   	}


    return m_DosFiletimes;

  }
       
  //----------------------------------------------------------------------------
  // HideDotFiles related methods
  //----------------------------------------------------------------------------
  unsigned int
  Linux_SambaGlobalFileNameHandlingOptionsManualInstance::isHideDotFilesSet() const {
    return isSet.HideDotFiles;
  }

  //----------------------------------------------------------------------------
  void Linux_SambaGlobalFileNameHandlingOptionsManualInstance::setHideDotFiles(
    const CMPIBoolean aValue) {
  
    m_HideDotFiles = aValue;
    isSet.HideDotFiles = 1;
  
  }       

  //----------------------------------------------------------------------------
  const CMPIBoolean
  Linux_SambaGlobalFileNameHandlingOptionsManualInstance::getHideDotFiles() const {
    
    if ( ! isSet.HideDotFiles) {
   	  throw CmpiErrorFormater::getErrorException(
   	    CmpiErrorFormater::NOT_SET,
        "HideDotFiles",
        "Linux_SambaGlobalFileNameHandlingOptions");
   	}


    return m_HideDotFiles;

  }

  
  //----------------------------------------------------------------------------
  //set isSet attributes to FALSE
  //----------------------------------------------------------------------------
  void
  Linux_SambaGlobalFileNameHandlingOptionsManualInstance::init() {
   	isSet.instanceName = 0;
    isSet.CaseSensitive = 0;
    isSet.DosFiletimes = 0;
    isSet.HideDotFiles = 0;
  	
  }
  
  //----------------------------------------------------------------------------
  //copies another instance properties in this
  //----------------------------------------------------------------------------
  void 
  Linux_SambaGlobalFileNameHandlingOptionsManualInstance::init(
    const Linux_SambaGlobalFileNameHandlingOptionsManualInstance& anOriginal) {   	

   	init();
   	   	
    if(anOriginal.isInstanceNameSet()) {
      setInstanceName(anOriginal.getInstanceName());
    }
       	
    if (anOriginal.isCaseSensitiveSet()) {
      const CMPIBoolean CaseSensitiveOriginal = anOriginal.getCaseSensitive();
      setCaseSensitive(CaseSensitiveOriginal);
    }
   	
    if (anOriginal.isDosFiletimesSet()) {
      const CMPIBoolean DosFiletimesOriginal = anOriginal.getDosFiletimes();
      setDosFiletimes(DosFiletimesOriginal);
    }
   	
    if (anOriginal.isHideDotFilesSet()) {
      const CMPIBoolean HideDotFilesOriginal = anOriginal.getHideDotFiles();
      setHideDotFiles(HideDotFilesOriginal);
    }
    
  }
  
  //----------------------------------------------------------------------------
  //reset the instance data
  //----------------------------------------------------------------------------
  void
  Linux_SambaGlobalFileNameHandlingOptionsManualInstance::reset() {
   	
  }
  
  //----------------------------------------------------------------------------
  //Linux_SambaGlobalFileNameHandlingOptionsManualInstanceEnumerationElement	
  //----------------------------------------------------------------------------
  Linux_SambaGlobalFileNameHandlingOptionsManualInstanceEnumerationElement::Linux_SambaGlobalFileNameHandlingOptionsManualInstanceEnumerationElement() {
   	
  	m_elementP = 0;
  	m_nextP = 0;
  	  
  }
  
  //----------------------------------------------------------------------------
  Linux_SambaGlobalFileNameHandlingOptionsManualInstanceEnumerationElement::~Linux_SambaGlobalFileNameHandlingOptionsManualInstanceEnumerationElement() {
   	
  	if (m_elementP) {
  	  delete(m_elementP);
  	}
  	
  	if (m_nextP) {
  	  delete(m_nextP);
  	}
  	  
  }

  //----------------------------------------------------------------------------
  //Linux_SambaGlobalFileNameHandlingOptionsManualInstanceNameEnumeration
  //----------------------------------------------------------------------------
  Linux_SambaGlobalFileNameHandlingOptionsManualInstanceEnumeration::Linux_SambaGlobalFileNameHandlingOptionsManualInstanceEnumeration() {
   	
    m_firstElementP = 0;
    m_currentElementP = 0;
    m_endElementP = 0;
  
  }
  
  //----------------------------------------------------------------------------
  Linux_SambaGlobalFileNameHandlingOptionsManualInstanceEnumeration::Linux_SambaGlobalFileNameHandlingOptionsManualInstanceEnumeration(
    const Linux_SambaGlobalFileNameHandlingOptionsManualInstanceEnumeration& anInstanceEnumeration) {
   	
    m_firstElementP = 0;
    m_currentElementP = 0;
    m_endElementP = 0;
  	 
    int size = anInstanceEnumeration.getSize();
    for (int x=0; x < size;++x) {
      addElement(anInstanceEnumeration.getElement(x));
    }           

  }
  
  //----------------------------------------------------------------------------
  Linux_SambaGlobalFileNameHandlingOptionsManualInstanceEnumeration::~Linux_SambaGlobalFileNameHandlingOptionsManualInstanceEnumeration() {
   	
  	if (m_firstElementP) {
  	  delete(m_firstElementP);
  	}
  	  	
  }
  
  //----------------------------------------------------------------------------
  void
  Linux_SambaGlobalFileNameHandlingOptionsManualInstanceEnumeration::reset() {
  	
  	m_currentElementP = m_firstElementP;
  	
  }
  	  
  //----------------------------------------------------------------------------
  bool
  Linux_SambaGlobalFileNameHandlingOptionsManualInstanceEnumeration::hasNext() const {
  	
  	return (m_currentElementP != 0);
  
  }
  
  //----------------------------------------------------------------------------
  int
  Linux_SambaGlobalFileNameHandlingOptionsManualInstanceEnumeration::getSize() const {
  	
    int size = 0;
    Linux_SambaGlobalFileNameHandlingOptionsManualInstanceEnumerationElement* followingP = m_firstElementP;
  	
  	while (followingP) {
      followingP = followingP->m_nextP;
      ++size;
    }
  	
    return size;
    
  }
  
  //----------------------------------------------------------------------------
  const Linux_SambaGlobalFileNameHandlingOptionsManualInstance&  
  Linux_SambaGlobalFileNameHandlingOptionsManualInstanceEnumeration::getElement(int anIndex) const {
   
    Linux_SambaGlobalFileNameHandlingOptionsManualInstanceEnumerationElement* followingP = m_firstElementP;
   
    int x = 0;
    while (followingP && (x < anIndex)) {
      followingP = followingP->m_nextP;
      ++x;
    }
    
    return *(followingP->m_elementP);

  }
  
  //----------------------------------------------------------------------------
  const Linux_SambaGlobalFileNameHandlingOptionsManualInstance&
  Linux_SambaGlobalFileNameHandlingOptionsManualInstanceEnumeration::getNext() {
   	
    Linux_SambaGlobalFileNameHandlingOptionsManualInstanceEnumerationElement* currentElementP =
  	  m_currentElementP;

    m_currentElementP = m_currentElementP->m_nextP;
  	 
    return *(currentElementP->m_elementP);

  }
  	  
  //----------------------------------------------------------------------------
  void
  Linux_SambaGlobalFileNameHandlingOptionsManualInstanceEnumeration::addElement(
    const Linux_SambaGlobalFileNameHandlingOptionsManualInstance& anInstance) {
   	
  	if (m_firstElementP == 0) {
  	  m_firstElementP = new Linux_SambaGlobalFileNameHandlingOptionsManualInstanceEnumerationElement();
  	  m_firstElementP->m_elementP = new Linux_SambaGlobalFileNameHandlingOptionsManualInstance(anInstance);
  	  m_endElementP = m_firstElementP;
  	  m_currentElementP = m_firstElementP;
  	} else {
  	  m_endElementP->m_nextP = new Linux_SambaGlobalFileNameHandlingOptionsManualInstanceEnumerationElement();
  	  m_endElementP = m_endElementP->m_nextP;
  	  m_endElementP->m_elementP = new Linux_SambaGlobalFileNameHandlingOptionsManualInstance(anInstance);
  	}

  }
  
}
