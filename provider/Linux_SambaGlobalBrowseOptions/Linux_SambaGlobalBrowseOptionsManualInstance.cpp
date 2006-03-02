// =======================================================================
// Linux_SambaGlobalBrowseOptionsManualInstance.cpp
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
#include "Linux_SambaGlobalBrowseOptionsManualInstance.h"
#include "CmpiData.h"
#include "CmpiString.h"
#include "CmpiArray.h"
#include <string>

namespace genProvider {

  //****************************************************************************
  //Linux_SambaGlobalBrowseOptionsManualInstance
  //----------------------------------------------------------------------------
  //empty constructor
  Linux_SambaGlobalBrowseOptionsManualInstance::Linux_SambaGlobalBrowseOptionsManualInstance() {   	
   	init();  	   	
  }
  
  //----------------------------------------------------------------------------
  //copy constructor	
  //----------------------------------------------------------------------------
  Linux_SambaGlobalBrowseOptionsManualInstance::Linux_SambaGlobalBrowseOptionsManualInstance(
    const Linux_SambaGlobalBrowseOptionsManualInstance& anInstance) {   	
   	init(anInstance);  	   	
  }
  
  //----------------------------------------------------------------------------
  //constructor using CmpiInstance
  //----------------------------------------------------------------------------
  Linux_SambaGlobalBrowseOptionsManualInstance::Linux_SambaGlobalBrowseOptionsManualInstance(
    const CmpiInstance& aCmpiInstance,
    const char* anInstanceNamespaceP) {

    CmpiData cmpiData;

    init(); 
    
    CmpiObjectPath cop = aCmpiInstance.getObjectPath();
    cop.setNameSpace(anInstanceNamespaceP);
    setInstanceName(Linux_SambaGlobalBrowseOptionsInstanceName(cop));

    cmpiData = aCmpiInstance.getProperty("Browsable");
    if ( ! cmpiData.isNullValue()){
      CMPIBoolean Browsable = cmpiData;
      setBrowsable(Browsable);
    }

    cmpiData = aCmpiInstance.getProperty("DomainMaster");
    if ( ! cmpiData.isNullValue()){
      CMPIUint16 DomainMaster = cmpiData;
      setDomainMaster(DomainMaster);
    }

    
  }
  
  //----------------------------------------------------------------------------
  //Destructor
  //----------------------------------------------------------------------------
  Linux_SambaGlobalBrowseOptionsManualInstance::
   ~Linux_SambaGlobalBrowseOptionsManualInstance(){
   	reset();  	  
  }
  
  
  //----------------------------------------------------------------------------
  //copy operator
  //----------------------------------------------------------------------------
  Linux_SambaGlobalBrowseOptionsManualInstance&
  Linux_SambaGlobalBrowseOptionsManualInstance::operator=(
    const Linux_SambaGlobalBrowseOptionsManualInstance& anInstance) {   	
   	
   	init(anInstance);
   	return *this;
  
  }
  
  
  //----------------------------------------------------------------------------
  //converts to CmpiInstance
  //----------------------------------------------------------------------------
  CmpiInstance
  Linux_SambaGlobalBrowseOptionsManualInstance::getCmpiInstance(
    const char** aPropertiesPP) const {
   	
   	CmpiObjectPath objectPath=getInstanceName().getObjectPath();      
    CmpiInstance cmpiInstance(objectPath);    
    getInstanceName().fillKeys(cmpiInstance);
    
    if (aPropertiesPP) {
	    cmpiInstance.setPropertyFilter(aPropertiesPP,0);
    }

  	if (isSet.Browsable) {
  	  
  	  cmpiInstance.setProperty(
  	    "Browsable",
  	    CmpiBooleanData(m_Browsable));
  	}

  	if (isSet.DomainMaster) {
  	  
  	  cmpiInstance.setProperty(
  	    "DomainMaster",
  	    CmpiData(m_DomainMaster));
  	}

  	
  	return cmpiInstance;
  	
  }
  
  //----------------------------------------------------------------------------
  // InstanceName related methods
  //----------------------------------------------------------------------------
  unsigned int 
  Linux_SambaGlobalBrowseOptionsManualInstance::isInstanceNameSet() const {
  	return isSet.instanceName;
  }
  
  //----------------------------------------------------------------------------
  const Linux_SambaGlobalBrowseOptionsInstanceName&
  Linux_SambaGlobalBrowseOptionsManualInstance::getInstanceName() const {

    if( ! isSet.instanceName) {
   	  throw CmpiErrorFormater::getErrorException(
        CmpiErrorFormater::NOT_SET,
        "InstanceName (CIM Key Attributes)",
        "Linux_SambaGlobalBrowseOptions");
   	}
  		
   	return m_instanceName;
  
  }

  //----------------------------------------------------------------------------
  void
  Linux_SambaGlobalBrowseOptionsManualInstance::setInstanceName(
    const Linux_SambaGlobalBrowseOptionsInstanceName& val) {

    m_instanceName = val;
    isSet.instanceName = 1;

  }
       
  //----------------------------------------------------------------------------
  // Browsable related methods
  //----------------------------------------------------------------------------
  unsigned int
  Linux_SambaGlobalBrowseOptionsManualInstance::isBrowsableSet() const {
    return isSet.Browsable;
  }

  //----------------------------------------------------------------------------
  void Linux_SambaGlobalBrowseOptionsManualInstance::setBrowsable(
    const CMPIBoolean aValue) {
  
    m_Browsable = aValue;
    isSet.Browsable = 1;
  
  }       

  //----------------------------------------------------------------------------
  const CMPIBoolean
  Linux_SambaGlobalBrowseOptionsManualInstance::getBrowsable() const {
    
    if ( ! isSet.Browsable) {
   	  throw CmpiErrorFormater::getErrorException(
   	    CmpiErrorFormater::NOT_SET,
        "Browsable",
        "Linux_SambaGlobalBrowseOptions");
   	}


    return m_Browsable;

  }
       
  //----------------------------------------------------------------------------
  // DomainMaster related methods
  //----------------------------------------------------------------------------
  unsigned int
  Linux_SambaGlobalBrowseOptionsManualInstance::isDomainMasterSet() const {
    return isSet.DomainMaster;
  }

  //----------------------------------------------------------------------------
  void Linux_SambaGlobalBrowseOptionsManualInstance::setDomainMaster(
    const CMPIUint16 aValue) {
  
    m_DomainMaster = aValue;
    isSet.DomainMaster = 1;
  
  }       

  //----------------------------------------------------------------------------
  const CMPIUint16
  Linux_SambaGlobalBrowseOptionsManualInstance::getDomainMaster() const {
    
    if ( ! isSet.DomainMaster) {
   	  throw CmpiErrorFormater::getErrorException(
   	    CmpiErrorFormater::NOT_SET,
        "DomainMaster",
        "Linux_SambaGlobalBrowseOptions");
   	}


    return m_DomainMaster;

  }

  
  //----------------------------------------------------------------------------
  //set isSet attributes to FALSE
  //----------------------------------------------------------------------------
  void
  Linux_SambaGlobalBrowseOptionsManualInstance::init() {
   	isSet.instanceName = 0;
    isSet.Browsable = 0;
    isSet.DomainMaster = 0;
  	
  }
  
  //----------------------------------------------------------------------------
  //copies another instance properties in this
  //----------------------------------------------------------------------------
  void 
  Linux_SambaGlobalBrowseOptionsManualInstance::init(
    const Linux_SambaGlobalBrowseOptionsManualInstance& anOriginal) {   	

   	init();
   	   	
    if(anOriginal.isInstanceNameSet()) {
      setInstanceName(anOriginal.getInstanceName());
    }
       	
    if (anOriginal.isBrowsableSet()) {
      const CMPIBoolean BrowsableOriginal = anOriginal.getBrowsable();
      setBrowsable(BrowsableOriginal);
    }
   	
    if (anOriginal.isDomainMasterSet()) {
      const CMPIUint16 DomainMasterOriginal = anOriginal.getDomainMaster();
      setDomainMaster(DomainMasterOriginal);
    }
    
  }
  
  //----------------------------------------------------------------------------
  //reset the instance data
  //----------------------------------------------------------------------------
  void
  Linux_SambaGlobalBrowseOptionsManualInstance::reset() {
   	
  }
  
  //----------------------------------------------------------------------------
  //Linux_SambaGlobalBrowseOptionsManualInstanceEnumerationElement	
  //----------------------------------------------------------------------------
  Linux_SambaGlobalBrowseOptionsManualInstanceEnumerationElement::Linux_SambaGlobalBrowseOptionsManualInstanceEnumerationElement() {
   	
  	m_elementP = 0;
  	m_nextP = 0;
  	  
  }
  
  //----------------------------------------------------------------------------
  Linux_SambaGlobalBrowseOptionsManualInstanceEnumerationElement::~Linux_SambaGlobalBrowseOptionsManualInstanceEnumerationElement() {
   	
  	if (m_elementP) {
  	  delete(m_elementP);
  	}
  	
  	if (m_nextP) {
  	  delete(m_nextP);
  	}
  	  
  }

  //----------------------------------------------------------------------------
  //Linux_SambaGlobalBrowseOptionsManualInstanceNameEnumeration
  //----------------------------------------------------------------------------
  Linux_SambaGlobalBrowseOptionsManualInstanceEnumeration::Linux_SambaGlobalBrowseOptionsManualInstanceEnumeration() {
   	
    m_firstElementP = 0;
    m_currentElementP = 0;
    m_endElementP = 0;
  
  }
  
  //----------------------------------------------------------------------------
  Linux_SambaGlobalBrowseOptionsManualInstanceEnumeration::Linux_SambaGlobalBrowseOptionsManualInstanceEnumeration(
    const Linux_SambaGlobalBrowseOptionsManualInstanceEnumeration& anInstanceEnumeration) {
   	
    m_firstElementP = 0;
    m_currentElementP = 0;
    m_endElementP = 0;
  	 
    int size = anInstanceEnumeration.getSize();
    for (int x=0; x < size;++x) {
      addElement(anInstanceEnumeration.getElement(x));
    }           

  }
  
  //----------------------------------------------------------------------------
  Linux_SambaGlobalBrowseOptionsManualInstanceEnumeration::~Linux_SambaGlobalBrowseOptionsManualInstanceEnumeration() {
   	
  	if (m_firstElementP) {
  	  delete(m_firstElementP);
  	}
  	  	
  }
  
  //----------------------------------------------------------------------------
  void
  Linux_SambaGlobalBrowseOptionsManualInstanceEnumeration::reset() {
  	
  	m_currentElementP = m_firstElementP;
  	
  }
  	  
  //----------------------------------------------------------------------------
  bool
  Linux_SambaGlobalBrowseOptionsManualInstanceEnumeration::hasNext() const {
  	
  	return (m_currentElementP != 0);
  
  }
  
  //----------------------------------------------------------------------------
  int
  Linux_SambaGlobalBrowseOptionsManualInstanceEnumeration::getSize() const {
  	
    int size = 0;
    Linux_SambaGlobalBrowseOptionsManualInstanceEnumerationElement* followingP = m_firstElementP;
  	
  	while (followingP) {
      followingP = followingP->m_nextP;
      ++size;
    }
  	
    return size;
    
  }
  
  //----------------------------------------------------------------------------
  const Linux_SambaGlobalBrowseOptionsManualInstance&  
  Linux_SambaGlobalBrowseOptionsManualInstanceEnumeration::getElement(int anIndex) const {
   
    Linux_SambaGlobalBrowseOptionsManualInstanceEnumerationElement* followingP = m_firstElementP;
   
    int x = 0;
    while (followingP && (x < anIndex)) {
      followingP = followingP->m_nextP;
      ++x;
    }
    
    return *(followingP->m_elementP);

  }
  
  //----------------------------------------------------------------------------
  const Linux_SambaGlobalBrowseOptionsManualInstance&
  Linux_SambaGlobalBrowseOptionsManualInstanceEnumeration::getNext() {
   	
    Linux_SambaGlobalBrowseOptionsManualInstanceEnumerationElement* currentElementP =
  	  m_currentElementP;

    m_currentElementP = m_currentElementP->m_nextP;
  	 
    return *(currentElementP->m_elementP);

  }
  	  
  //----------------------------------------------------------------------------
  void
  Linux_SambaGlobalBrowseOptionsManualInstanceEnumeration::addElement(
    const Linux_SambaGlobalBrowseOptionsManualInstance& anInstance) {
   	
  	if (m_firstElementP == 0) {
  	  m_firstElementP = new Linux_SambaGlobalBrowseOptionsManualInstanceEnumerationElement();
  	  m_firstElementP->m_elementP = new Linux_SambaGlobalBrowseOptionsManualInstance(anInstance);
  	  m_endElementP = m_firstElementP;
  	  m_currentElementP = m_firstElementP;
  	} else {
  	  m_endElementP->m_nextP = new Linux_SambaGlobalBrowseOptionsManualInstanceEnumerationElement();
  	  m_endElementP = m_endElementP->m_nextP;
  	  m_endElementP->m_elementP = new Linux_SambaGlobalBrowseOptionsManualInstance(anInstance);
  	}

  }
  
}
