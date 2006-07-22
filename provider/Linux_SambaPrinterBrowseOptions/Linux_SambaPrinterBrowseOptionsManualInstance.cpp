// =======================================================================
// Linux_SambaPrinterBrowseOptionsManualInstance.cpp
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
#include "Linux_SambaPrinterBrowseOptionsManualInstance.h"
#include "CmpiData.h"
#include "CmpiString.h"
#include "CmpiArray.h"
#include <string>

namespace genProvider {

  //****************************************************************************
  //Linux_SambaPrinterBrowseOptionsManualInstance
  //----------------------------------------------------------------------------
  //empty constructor
  Linux_SambaPrinterBrowseOptionsManualInstance::Linux_SambaPrinterBrowseOptionsManualInstance() {   	
   	init();  	   	
  }
  
  //----------------------------------------------------------------------------
  //copy constructor	
  //----------------------------------------------------------------------------
  Linux_SambaPrinterBrowseOptionsManualInstance::Linux_SambaPrinterBrowseOptionsManualInstance(
    const Linux_SambaPrinterBrowseOptionsManualInstance& anInstance) {   	
   	init(anInstance);  	   	
  }
  
  //----------------------------------------------------------------------------
  //constructor using CmpiInstance
  //----------------------------------------------------------------------------
  Linux_SambaPrinterBrowseOptionsManualInstance::Linux_SambaPrinterBrowseOptionsManualInstance(
    const CmpiInstance& aCmpiInstance,
    const char* anInstanceNamespaceP) {

    CmpiData cmpiData;

    init(); 
    
    CmpiObjectPath cop = aCmpiInstance.getObjectPath();
    cop.setNameSpace(anInstanceNamespaceP);
    setInstanceName(Linux_SambaPrinterBrowseOptionsInstanceName(cop));

    cmpiData = aCmpiInstance.getProperty("Browsable");
    if ( ! cmpiData.isNullValue()){
      CMPIBoolean Browsable = cmpiData;
      setBrowsable(Browsable);
    }

    
  }
  
  //----------------------------------------------------------------------------
  //Destructor
  //----------------------------------------------------------------------------
  Linux_SambaPrinterBrowseOptionsManualInstance::
   ~Linux_SambaPrinterBrowseOptionsManualInstance(){
   	reset();  	  
  }
  
  
  //----------------------------------------------------------------------------
  //copy operator
  //----------------------------------------------------------------------------
  Linux_SambaPrinterBrowseOptionsManualInstance&
  Linux_SambaPrinterBrowseOptionsManualInstance::operator=(
    const Linux_SambaPrinterBrowseOptionsManualInstance& anInstance) {   	
   	
   	init(anInstance);
   	return *this;
  
  }
  
  
  //----------------------------------------------------------------------------
  //converts to CmpiInstance
  //----------------------------------------------------------------------------
  CmpiInstance
  Linux_SambaPrinterBrowseOptionsManualInstance::getCmpiInstance(
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

  	
  	return cmpiInstance;
  	
  }
  
  //----------------------------------------------------------------------------
  // InstanceName related methods
  //----------------------------------------------------------------------------
  unsigned int 
  Linux_SambaPrinterBrowseOptionsManualInstance::isInstanceNameSet() const {
  	return isSet.instanceName;
  }
  
  //----------------------------------------------------------------------------
  const Linux_SambaPrinterBrowseOptionsInstanceName&
  Linux_SambaPrinterBrowseOptionsManualInstance::getInstanceName() const {

    if( ! isSet.instanceName) {
   	  throw CmpiErrorFormater::getErrorException(
        CmpiErrorFormater::NOT_SET,
        "InstanceName (CIM Key Attributes)",
        "Linux_SambaPrinterBrowseOptions");
   	}
  		
   	return m_instanceName;
  
  }

  //----------------------------------------------------------------------------
  void
  Linux_SambaPrinterBrowseOptionsManualInstance::setInstanceName(
    const Linux_SambaPrinterBrowseOptionsInstanceName& val) {

    m_instanceName = val;
    isSet.instanceName = 1;

  }
       
  //----------------------------------------------------------------------------
  // Browsable related methods
  //----------------------------------------------------------------------------
  unsigned int
  Linux_SambaPrinterBrowseOptionsManualInstance::isBrowsableSet() const {
    return isSet.Browsable;
  }

  //----------------------------------------------------------------------------
  void Linux_SambaPrinterBrowseOptionsManualInstance::setBrowsable(
    const CMPIBoolean aValue) {
  
    m_Browsable = aValue;
    isSet.Browsable = 1;
  
  }       

  //----------------------------------------------------------------------------
  const CMPIBoolean
  Linux_SambaPrinterBrowseOptionsManualInstance::getBrowsable() const {
    
    if ( ! isSet.Browsable) {
   	  throw CmpiErrorFormater::getErrorException(
   	    CmpiErrorFormater::NOT_SET,
        "Browsable",
        "Linux_SambaPrinterBrowseOptions");
   	}


    return m_Browsable;

  }

  
  //----------------------------------------------------------------------------
  //set isSet attributes to FALSE
  //----------------------------------------------------------------------------
  void
  Linux_SambaPrinterBrowseOptionsManualInstance::init() {
   	isSet.instanceName = 0;
    isSet.Browsable = 0;
  	
  }
  
  //----------------------------------------------------------------------------
  //copies another instance properties in this
  //----------------------------------------------------------------------------
  void 
  Linux_SambaPrinterBrowseOptionsManualInstance::init(
    const Linux_SambaPrinterBrowseOptionsManualInstance& anOriginal) {   	

   	init();
   	   	
    if(anOriginal.isInstanceNameSet()) {
      setInstanceName(anOriginal.getInstanceName());
    }
       	
    if (anOriginal.isBrowsableSet()) {
      const CMPIBoolean BrowsableOriginal = anOriginal.getBrowsable();
      setBrowsable(BrowsableOriginal);
    }
    
  }
  
  //----------------------------------------------------------------------------
  //reset the instance data
  //----------------------------------------------------------------------------
  void
  Linux_SambaPrinterBrowseOptionsManualInstance::reset() {
   	
  }
  
  //----------------------------------------------------------------------------
  //Linux_SambaPrinterBrowseOptionsManualInstanceEnumerationElement	
  //----------------------------------------------------------------------------
  Linux_SambaPrinterBrowseOptionsManualInstanceEnumerationElement::Linux_SambaPrinterBrowseOptionsManualInstanceEnumerationElement() {
   	
  	m_elementP = 0;
  	m_nextP = 0;
  	  
  }
  
  //----------------------------------------------------------------------------
  Linux_SambaPrinterBrowseOptionsManualInstanceEnumerationElement::~Linux_SambaPrinterBrowseOptionsManualInstanceEnumerationElement() {
   	
  	if (m_elementP) {
  	  delete(m_elementP);
  	}
  	
  	if (m_nextP) {
  	  delete(m_nextP);
  	}
  	  
  }

  //----------------------------------------------------------------------------
  //Linux_SambaPrinterBrowseOptionsManualInstanceNameEnumeration
  //----------------------------------------------------------------------------
  Linux_SambaPrinterBrowseOptionsManualInstanceEnumeration::Linux_SambaPrinterBrowseOptionsManualInstanceEnumeration() {
   	
    m_firstElementP = 0;
    m_currentElementP = 0;
    m_endElementP = 0;
  
  }
  
  //----------------------------------------------------------------------------
  Linux_SambaPrinterBrowseOptionsManualInstanceEnumeration::Linux_SambaPrinterBrowseOptionsManualInstanceEnumeration(
    const Linux_SambaPrinterBrowseOptionsManualInstanceEnumeration& anInstanceEnumeration) {
   	
    m_firstElementP = 0;
    m_currentElementP = 0;
    m_endElementP = 0;
  	 
    int size = anInstanceEnumeration.getSize();
    for (int x=0; x < size;++x) {
      addElement(anInstanceEnumeration.getElement(x));
    }           

  }
  
  //----------------------------------------------------------------------------
  Linux_SambaPrinterBrowseOptionsManualInstanceEnumeration::~Linux_SambaPrinterBrowseOptionsManualInstanceEnumeration() {
   	
  	if (m_firstElementP) {
  	  delete(m_firstElementP);
  	}
  	  	
  }
  
  //----------------------------------------------------------------------------
  void
  Linux_SambaPrinterBrowseOptionsManualInstanceEnumeration::reset() {
  	
  	m_currentElementP = m_firstElementP;
  	
  }
  	  
  //----------------------------------------------------------------------------
  bool
  Linux_SambaPrinterBrowseOptionsManualInstanceEnumeration::hasNext() const {
  	
  	return (m_currentElementP != 0);
  
  }
  
  //----------------------------------------------------------------------------
  int
  Linux_SambaPrinterBrowseOptionsManualInstanceEnumeration::getSize() const {
  	
    int size = 0;
    Linux_SambaPrinterBrowseOptionsManualInstanceEnumerationElement* followingP = m_firstElementP;
  	
  	while (followingP) {
      followingP = followingP->m_nextP;
      ++size;
    }
  	
    return size;
    
  }
  
  //----------------------------------------------------------------------------
  const Linux_SambaPrinterBrowseOptionsManualInstance&  
  Linux_SambaPrinterBrowseOptionsManualInstanceEnumeration::getElement(int anIndex) const {
   
    Linux_SambaPrinterBrowseOptionsManualInstanceEnumerationElement* followingP = m_firstElementP;
   
    int x = 0;
    while (followingP && (x < anIndex)) {
      followingP = followingP->m_nextP;
      ++x;
    }
    
    return *(followingP->m_elementP);

  }
  
  //----------------------------------------------------------------------------
  const Linux_SambaPrinterBrowseOptionsManualInstance&
  Linux_SambaPrinterBrowseOptionsManualInstanceEnumeration::getNext() {
   	
    Linux_SambaPrinterBrowseOptionsManualInstanceEnumerationElement* currentElementP =
  	  m_currentElementP;

    m_currentElementP = m_currentElementP->m_nextP;
  	 
    return *(currentElementP->m_elementP);

  }
  	  
  //----------------------------------------------------------------------------
  void
  Linux_SambaPrinterBrowseOptionsManualInstanceEnumeration::addElement(
    const Linux_SambaPrinterBrowseOptionsManualInstance& anInstance) {
   	
  	if (m_firstElementP == 0) {
  	  m_firstElementP = new Linux_SambaPrinterBrowseOptionsManualInstanceEnumerationElement();
  	  m_firstElementP->m_elementP = new Linux_SambaPrinterBrowseOptionsManualInstance(anInstance);
  	  m_endElementP = m_firstElementP;
  	  m_currentElementP = m_firstElementP;
  	} else {
  	  m_endElementP->m_nextP = new Linux_SambaPrinterBrowseOptionsManualInstanceEnumerationElement();
  	  m_endElementP = m_endElementP->m_nextP;
  	  m_endElementP->m_elementP = new Linux_SambaPrinterBrowseOptionsManualInstance(anInstance);
  	}

  }
  
}
