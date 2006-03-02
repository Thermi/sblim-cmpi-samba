// =======================================================================
// Linux_SambaShareFileNameHandlingOptionsManualInstance.cpp
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
#include "Linux_SambaShareFileNameHandlingOptionsManualInstance.h"
#include "CmpiData.h"
#include "CmpiString.h"
#include "CmpiArray.h"
#include <string>

namespace genProvider {

  //****************************************************************************
  //Linux_SambaShareFileNameHandlingOptionsManualInstance
  //----------------------------------------------------------------------------
  //empty constructor
  Linux_SambaShareFileNameHandlingOptionsManualInstance::Linux_SambaShareFileNameHandlingOptionsManualInstance() {   	
   	init();  	   	
  }
  
  //----------------------------------------------------------------------------
  //copy constructor	
  //----------------------------------------------------------------------------
  Linux_SambaShareFileNameHandlingOptionsManualInstance::Linux_SambaShareFileNameHandlingOptionsManualInstance(
    const Linux_SambaShareFileNameHandlingOptionsManualInstance& anInstance) {   	
   	init(anInstance);  	   	
  }
  
  //----------------------------------------------------------------------------
  //constructor using CmpiInstance
  //----------------------------------------------------------------------------
  Linux_SambaShareFileNameHandlingOptionsManualInstance::Linux_SambaShareFileNameHandlingOptionsManualInstance(
    const CmpiInstance& aCmpiInstance,
    const char* anInstanceNamespaceP) {

    CmpiData cmpiData;

    init(); 
    
    CmpiObjectPath cop = aCmpiInstance.getObjectPath();
    cop.setNameSpace(anInstanceNamespaceP);
    setInstanceName(Linux_SambaShareFileNameHandlingOptionsInstanceName(cop));

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
  Linux_SambaShareFileNameHandlingOptionsManualInstance::
   ~Linux_SambaShareFileNameHandlingOptionsManualInstance(){
   	reset();  	  
  }
  
  
  //----------------------------------------------------------------------------
  //copy operator
  //----------------------------------------------------------------------------
  Linux_SambaShareFileNameHandlingOptionsManualInstance&
  Linux_SambaShareFileNameHandlingOptionsManualInstance::operator=(
    const Linux_SambaShareFileNameHandlingOptionsManualInstance& anInstance) {   	
   	
   	init(anInstance);
   	return *this;
  
  }
  
  
  //----------------------------------------------------------------------------
  //converts to CmpiInstance
  //----------------------------------------------------------------------------
  CmpiInstance
  Linux_SambaShareFileNameHandlingOptionsManualInstance::getCmpiInstance(
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
  Linux_SambaShareFileNameHandlingOptionsManualInstance::isInstanceNameSet() const {
  	return isSet.instanceName;
  }
  
  //----------------------------------------------------------------------------
  const Linux_SambaShareFileNameHandlingOptionsInstanceName&
  Linux_SambaShareFileNameHandlingOptionsManualInstance::getInstanceName() const {

    if( ! isSet.instanceName) {
   	  throw CmpiErrorFormater::getErrorException(
        CmpiErrorFormater::NOT_SET,
        "InstanceName (CIM Key Attributes)",
        "Linux_SambaShareFileNameHandlingOptions");
   	}
  		
   	return m_instanceName;
  
  }

  //----------------------------------------------------------------------------
  void
  Linux_SambaShareFileNameHandlingOptionsManualInstance::setInstanceName(
    const Linux_SambaShareFileNameHandlingOptionsInstanceName& val) {

    m_instanceName = val;
    isSet.instanceName = 1;

  }
       
  //----------------------------------------------------------------------------
  // CaseSensitive related methods
  //----------------------------------------------------------------------------
  unsigned int
  Linux_SambaShareFileNameHandlingOptionsManualInstance::isCaseSensitiveSet() const {
    return isSet.CaseSensitive;
  }

  //----------------------------------------------------------------------------
  void Linux_SambaShareFileNameHandlingOptionsManualInstance::setCaseSensitive(
    const CMPIBoolean aValue) {
  
    m_CaseSensitive = aValue;
    isSet.CaseSensitive = 1;
  
  }       

  //----------------------------------------------------------------------------
  const CMPIBoolean
  Linux_SambaShareFileNameHandlingOptionsManualInstance::getCaseSensitive() const {
    
    if ( ! isSet.CaseSensitive) {
   	  throw CmpiErrorFormater::getErrorException(
   	    CmpiErrorFormater::NOT_SET,
        "CaseSensitive",
        "Linux_SambaShareFileNameHandlingOptions");
   	}


    return m_CaseSensitive;

  }
       
  //----------------------------------------------------------------------------
  // DosFiletimes related methods
  //----------------------------------------------------------------------------
  unsigned int
  Linux_SambaShareFileNameHandlingOptionsManualInstance::isDosFiletimesSet() const {
    return isSet.DosFiletimes;
  }

  //----------------------------------------------------------------------------
  void Linux_SambaShareFileNameHandlingOptionsManualInstance::setDosFiletimes(
    const CMPIBoolean aValue) {
  
    m_DosFiletimes = aValue;
    isSet.DosFiletimes = 1;
  
  }       

  //----------------------------------------------------------------------------
  const CMPIBoolean
  Linux_SambaShareFileNameHandlingOptionsManualInstance::getDosFiletimes() const {
    
    if ( ! isSet.DosFiletimes) {
   	  throw CmpiErrorFormater::getErrorException(
   	    CmpiErrorFormater::NOT_SET,
        "DosFiletimes",
        "Linux_SambaShareFileNameHandlingOptions");
   	}


    return m_DosFiletimes;

  }
       
  //----------------------------------------------------------------------------
  // HideDotFiles related methods
  //----------------------------------------------------------------------------
  unsigned int
  Linux_SambaShareFileNameHandlingOptionsManualInstance::isHideDotFilesSet() const {
    return isSet.HideDotFiles;
  }

  //----------------------------------------------------------------------------
  void Linux_SambaShareFileNameHandlingOptionsManualInstance::setHideDotFiles(
    const CMPIBoolean aValue) {
  
    m_HideDotFiles = aValue;
    isSet.HideDotFiles = 1;
  
  }       

  //----------------------------------------------------------------------------
  const CMPIBoolean
  Linux_SambaShareFileNameHandlingOptionsManualInstance::getHideDotFiles() const {
    
    if ( ! isSet.HideDotFiles) {
   	  throw CmpiErrorFormater::getErrorException(
   	    CmpiErrorFormater::NOT_SET,
        "HideDotFiles",
        "Linux_SambaShareFileNameHandlingOptions");
   	}


    return m_HideDotFiles;

  }

  
  //----------------------------------------------------------------------------
  //set isSet attributes to FALSE
  //----------------------------------------------------------------------------
  void
  Linux_SambaShareFileNameHandlingOptionsManualInstance::init() {
   	isSet.instanceName = 0;
    isSet.CaseSensitive = 0;
    isSet.DosFiletimes = 0;
    isSet.HideDotFiles = 0;
  	
  }
  
  //----------------------------------------------------------------------------
  //copies another instance properties in this
  //----------------------------------------------------------------------------
  void 
  Linux_SambaShareFileNameHandlingOptionsManualInstance::init(
    const Linux_SambaShareFileNameHandlingOptionsManualInstance& anOriginal) {   	

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
  Linux_SambaShareFileNameHandlingOptionsManualInstance::reset() {
   	
  }
  
  //----------------------------------------------------------------------------
  //Linux_SambaShareFileNameHandlingOptionsManualInstanceEnumerationElement	
  //----------------------------------------------------------------------------
  Linux_SambaShareFileNameHandlingOptionsManualInstanceEnumerationElement::Linux_SambaShareFileNameHandlingOptionsManualInstanceEnumerationElement() {
   	
  	m_elementP = 0;
  	m_nextP = 0;
  	  
  }
  
  //----------------------------------------------------------------------------
  Linux_SambaShareFileNameHandlingOptionsManualInstanceEnumerationElement::~Linux_SambaShareFileNameHandlingOptionsManualInstanceEnumerationElement() {
   	
  	if (m_elementP) {
  	  delete(m_elementP);
  	}
  	
  	if (m_nextP) {
  	  delete(m_nextP);
  	}
  	  
  }

  //----------------------------------------------------------------------------
  //Linux_SambaShareFileNameHandlingOptionsManualInstanceNameEnumeration
  //----------------------------------------------------------------------------
  Linux_SambaShareFileNameHandlingOptionsManualInstanceEnumeration::Linux_SambaShareFileNameHandlingOptionsManualInstanceEnumeration() {
   	
    m_firstElementP = 0;
    m_currentElementP = 0;
    m_endElementP = 0;
  
  }
  
  //----------------------------------------------------------------------------
  Linux_SambaShareFileNameHandlingOptionsManualInstanceEnumeration::Linux_SambaShareFileNameHandlingOptionsManualInstanceEnumeration(
    const Linux_SambaShareFileNameHandlingOptionsManualInstanceEnumeration& anInstanceEnumeration) {
   	
    m_firstElementP = 0;
    m_currentElementP = 0;
    m_endElementP = 0;
  	 
    int size = anInstanceEnumeration.getSize();
    for (int x=0; x < size;++x) {
      addElement(anInstanceEnumeration.getElement(x));
    }           

  }
  
  //----------------------------------------------------------------------------
  Linux_SambaShareFileNameHandlingOptionsManualInstanceEnumeration::~Linux_SambaShareFileNameHandlingOptionsManualInstanceEnumeration() {
   	
  	if (m_firstElementP) {
  	  delete(m_firstElementP);
  	}
  	  	
  }
  
  //----------------------------------------------------------------------------
  void
  Linux_SambaShareFileNameHandlingOptionsManualInstanceEnumeration::reset() {
  	
  	m_currentElementP = m_firstElementP;
  	
  }
  	  
  //----------------------------------------------------------------------------
  bool
  Linux_SambaShareFileNameHandlingOptionsManualInstanceEnumeration::hasNext() const {
  	
  	return (m_currentElementP != 0);
  
  }
  
  //----------------------------------------------------------------------------
  int
  Linux_SambaShareFileNameHandlingOptionsManualInstanceEnumeration::getSize() const {
  	
    int size = 0;
    Linux_SambaShareFileNameHandlingOptionsManualInstanceEnumerationElement* followingP = m_firstElementP;
  	
  	while (followingP) {
      followingP = followingP->m_nextP;
      ++size;
    }
  	
    return size;
    
  }
  
  //----------------------------------------------------------------------------
  const Linux_SambaShareFileNameHandlingOptionsManualInstance&  
  Linux_SambaShareFileNameHandlingOptionsManualInstanceEnumeration::getElement(int anIndex) const {
   
    Linux_SambaShareFileNameHandlingOptionsManualInstanceEnumerationElement* followingP = m_firstElementP;
   
    int x = 0;
    while (followingP && (x < anIndex)) {
      followingP = followingP->m_nextP;
      ++x;
    }
    
    return *(followingP->m_elementP);

  }
  
  //----------------------------------------------------------------------------
  const Linux_SambaShareFileNameHandlingOptionsManualInstance&
  Linux_SambaShareFileNameHandlingOptionsManualInstanceEnumeration::getNext() {
   	
    Linux_SambaShareFileNameHandlingOptionsManualInstanceEnumerationElement* currentElementP =
  	  m_currentElementP;

    m_currentElementP = m_currentElementP->m_nextP;
  	 
    return *(currentElementP->m_elementP);

  }
  	  
  //----------------------------------------------------------------------------
  void
  Linux_SambaShareFileNameHandlingOptionsManualInstanceEnumeration::addElement(
    const Linux_SambaShareFileNameHandlingOptionsManualInstance& anInstance) {
   	
  	if (m_firstElementP == 0) {
  	  m_firstElementP = new Linux_SambaShareFileNameHandlingOptionsManualInstanceEnumerationElement();
  	  m_firstElementP->m_elementP = new Linux_SambaShareFileNameHandlingOptionsManualInstance(anInstance);
  	  m_endElementP = m_firstElementP;
  	  m_currentElementP = m_firstElementP;
  	} else {
  	  m_endElementP->m_nextP = new Linux_SambaShareFileNameHandlingOptionsManualInstanceEnumerationElement();
  	  m_endElementP = m_endElementP->m_nextP;
  	  m_endElementP->m_elementP = new Linux_SambaShareFileNameHandlingOptionsManualInstance(anInstance);
  	}

  }
  
}
