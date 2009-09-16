// =======================================================================
// Linux_SambaShareBrowseOptionsManualInstance.cpp
//     created on Mon, 26 Jun 2006 using ECUTE 2.2.1
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
#include "Linux_SambaShareBrowseOptionsManualInstance.h"
#include "CmpiData.h"
#include "CmpiString.h"
#include "CmpiArray.h"
#include <string>

namespace genProvider {

  //****************************************************************************
  //Linux_SambaShareBrowseOptionsManualInstance
  //----------------------------------------------------------------------------
  //empty constructor
  Linux_SambaShareBrowseOptionsManualInstance::Linux_SambaShareBrowseOptionsManualInstance() {   	
   	init();  	   	
  }
  
  //----------------------------------------------------------------------------
  //copy constructor	
  //----------------------------------------------------------------------------
  Linux_SambaShareBrowseOptionsManualInstance::Linux_SambaShareBrowseOptionsManualInstance(
    const Linux_SambaShareBrowseOptionsManualInstance& anInstance) {   	
   	init(anInstance);  	   	
  }
  
  //----------------------------------------------------------------------------
  //constructor using CmpiInstance
  //----------------------------------------------------------------------------
  Linux_SambaShareBrowseOptionsManualInstance::Linux_SambaShareBrowseOptionsManualInstance(
    const CmpiInstance& aCmpiInstance,
    const char* anInstanceNamespaceP) {

    CmpiData cmpiData;

    init(); 
    
    CmpiObjectPath cop = aCmpiInstance.getObjectPath();
    cop.setNameSpace(anInstanceNamespaceP);
    setInstanceName(Linux_SambaShareBrowseOptionsInstanceName(cop));

    cmpiData = aCmpiInstance.getProperty("Browsable");
    if ( ! cmpiData.isNullValue()){
      CMPIBoolean Browsable = cmpiData;
      setBrowsable(Browsable);
    }

    
  }
  
  //----------------------------------------------------------------------------
  //Destructor
  //----------------------------------------------------------------------------
  Linux_SambaShareBrowseOptionsManualInstance::
   ~Linux_SambaShareBrowseOptionsManualInstance(){
   	reset();  	  
  }
  
  
  //----------------------------------------------------------------------------
  //copy operator
  //----------------------------------------------------------------------------
  Linux_SambaShareBrowseOptionsManualInstance&
  Linux_SambaShareBrowseOptionsManualInstance::operator=(
    const Linux_SambaShareBrowseOptionsManualInstance& anInstance) {   	
   	
   	init(anInstance);
   	return *this;
  
  }
  
  
  //----------------------------------------------------------------------------
  //converts to CmpiInstance
  //----------------------------------------------------------------------------
  CmpiInstance
  Linux_SambaShareBrowseOptionsManualInstance::getCmpiInstance(
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
  Linux_SambaShareBrowseOptionsManualInstance::isInstanceNameSet() const {
  	return isSet.instanceName;
  }
  
  //----------------------------------------------------------------------------
  const Linux_SambaShareBrowseOptionsInstanceName&
  Linux_SambaShareBrowseOptionsManualInstance::getInstanceName() const {

    if( ! isSet.instanceName) {
   	  throw CmpiErrorFormater::getErrorException(
        CmpiErrorFormater::NOT_SET,
        "InstanceName (CIM Key Attributes)",
        "Linux_SambaShareBrowseOptions");
   	}
  		
   	return m_instanceName;
  
  }

  //----------------------------------------------------------------------------
  void
  Linux_SambaShareBrowseOptionsManualInstance::setInstanceName(
    const Linux_SambaShareBrowseOptionsInstanceName& val) {

    m_instanceName = val;
    isSet.instanceName = 1;

  }
       
  //----------------------------------------------------------------------------
  // Browsable related methods
  //----------------------------------------------------------------------------
  unsigned int
  Linux_SambaShareBrowseOptionsManualInstance::isBrowsableSet() const {
    return isSet.Browsable;
  }

  //----------------------------------------------------------------------------
  void Linux_SambaShareBrowseOptionsManualInstance::setBrowsable(
    const CMPIBoolean aValue) {
  
    m_Browsable = aValue;
    isSet.Browsable = 1;
  
  }       

  //----------------------------------------------------------------------------
  const CMPIBoolean
  Linux_SambaShareBrowseOptionsManualInstance::getBrowsable() const {
    
    if ( ! isSet.Browsable) {
   	  throw CmpiErrorFormater::getErrorException(
   	    CmpiErrorFormater::NOT_SET,
        "Browsable",
        "Linux_SambaShareBrowseOptions");
   	}


    return m_Browsable;

  }

  
  //----------------------------------------------------------------------------
  //set isSet attributes to FALSE
  //----------------------------------------------------------------------------
  void
  Linux_SambaShareBrowseOptionsManualInstance::init() {
   	isSet.instanceName = 0;
    isSet.Browsable = 0;
  	
  }
  
  //----------------------------------------------------------------------------
  //copies another instance properties in this
  //----------------------------------------------------------------------------
  void 
  Linux_SambaShareBrowseOptionsManualInstance::init(
    const Linux_SambaShareBrowseOptionsManualInstance& anOriginal) {   	

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
  Linux_SambaShareBrowseOptionsManualInstance::reset() {
   	
  }
  
  //----------------------------------------------------------------------------
  //Linux_SambaShareBrowseOptionsManualInstanceEnumerationElement	
  //----------------------------------------------------------------------------
  Linux_SambaShareBrowseOptionsManualInstanceEnumerationElement::Linux_SambaShareBrowseOptionsManualInstanceEnumerationElement() {
   	
  	m_elementP = 0;
  	m_nextP = 0;
  	  
  }
  
  //----------------------------------------------------------------------------
  Linux_SambaShareBrowseOptionsManualInstanceEnumerationElement::~Linux_SambaShareBrowseOptionsManualInstanceEnumerationElement() {
   	
  	if (m_elementP) {
  	  delete(m_elementP);
  	}
  	
  	if (m_nextP) {
  	  delete(m_nextP);
  	}
  	  
  }

  //----------------------------------------------------------------------------
  //Linux_SambaShareBrowseOptionsManualInstanceNameEnumeration
  //----------------------------------------------------------------------------
  Linux_SambaShareBrowseOptionsManualInstanceEnumeration::Linux_SambaShareBrowseOptionsManualInstanceEnumeration() {
   	
    m_firstElementP = 0;
    m_currentElementP = 0;
    m_endElementP = 0;
  
  }
  
  //----------------------------------------------------------------------------
  Linux_SambaShareBrowseOptionsManualInstanceEnumeration::Linux_SambaShareBrowseOptionsManualInstanceEnumeration(
    const Linux_SambaShareBrowseOptionsManualInstanceEnumeration& anInstanceEnumeration) {
   	
    m_firstElementP = 0;
    m_currentElementP = 0;
    m_endElementP = 0;
  	 
    int size = anInstanceEnumeration.getSize();
    for (int x=0; x < size;++x) {
      addElement(anInstanceEnumeration.getElement(x));
    }           

  }
  
  //----------------------------------------------------------------------------
  Linux_SambaShareBrowseOptionsManualInstanceEnumeration::~Linux_SambaShareBrowseOptionsManualInstanceEnumeration() {
   	
  	if (m_firstElementP) {
  	  delete(m_firstElementP);
  	}
  	  	
  }
  
  //----------------------------------------------------------------------------
  void
  Linux_SambaShareBrowseOptionsManualInstanceEnumeration::reset() {
  	
  	m_currentElementP = m_firstElementP;
  	
  }
  	  
  //----------------------------------------------------------------------------
  bool
  Linux_SambaShareBrowseOptionsManualInstanceEnumeration::hasNext() const {
  	
  	return (m_currentElementP != 0);
  
  }
  
  //----------------------------------------------------------------------------
  int
  Linux_SambaShareBrowseOptionsManualInstanceEnumeration::getSize() const {
  	
    int size = 0;
    Linux_SambaShareBrowseOptionsManualInstanceEnumerationElement* followingP = m_firstElementP;
  	
  	while (followingP) {
      followingP = followingP->m_nextP;
      ++size;
    }
  	
    return size;
    
  }
  
  //----------------------------------------------------------------------------
  const Linux_SambaShareBrowseOptionsManualInstance&  
  Linux_SambaShareBrowseOptionsManualInstanceEnumeration::getElement(int anIndex) const {
   
    Linux_SambaShareBrowseOptionsManualInstanceEnumerationElement* followingP = m_firstElementP;
   
    int x = 0;
    while (followingP && (x < anIndex)) {
      followingP = followingP->m_nextP;
      ++x;
    }
    
    return *(followingP->m_elementP);

  }
  
  //----------------------------------------------------------------------------
  const Linux_SambaShareBrowseOptionsManualInstance&
  Linux_SambaShareBrowseOptionsManualInstanceEnumeration::getNext() {
   	
    Linux_SambaShareBrowseOptionsManualInstanceEnumerationElement* currentElementP =
  	  m_currentElementP;

    m_currentElementP = m_currentElementP->m_nextP;
  	 
    return *(currentElementP->m_elementP);

  }
  	  
  //----------------------------------------------------------------------------
  void
  Linux_SambaShareBrowseOptionsManualInstanceEnumeration::addElement(
    const Linux_SambaShareBrowseOptionsManualInstance& anInstance) {
   	
  	if (m_firstElementP == 0) {
  	  m_firstElementP = new Linux_SambaShareBrowseOptionsManualInstanceEnumerationElement();
  	  m_firstElementP->m_elementP = new Linux_SambaShareBrowseOptionsManualInstance(anInstance);
  	  m_endElementP = m_firstElementP;
  	  m_currentElementP = m_firstElementP;
  	} else {
  	  m_endElementP->m_nextP = new Linux_SambaShareBrowseOptionsManualInstanceEnumerationElement();
  	  m_endElementP = m_endElementP->m_nextP;
  	  m_endElementP->m_elementP = new Linux_SambaShareBrowseOptionsManualInstance(anInstance);
  	}

  }
  
}
