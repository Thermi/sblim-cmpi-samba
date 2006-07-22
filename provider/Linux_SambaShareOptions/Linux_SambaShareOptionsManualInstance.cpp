// =======================================================================
// Linux_SambaShareOptionsManualInstance.cpp
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
#include "Linux_SambaShareOptionsManualInstance.h"
#include "CmpiData.h"
#include "CmpiString.h"
#include "CmpiArray.h"
#include <string>

namespace genProvider {

  //****************************************************************************
  //Linux_SambaShareOptionsManualInstance
  //----------------------------------------------------------------------------
  //empty constructor
  Linux_SambaShareOptionsManualInstance::Linux_SambaShareOptionsManualInstance() {   	
   	init();  	   	
  }
  
  //----------------------------------------------------------------------------
  //copy constructor	
  //----------------------------------------------------------------------------
  Linux_SambaShareOptionsManualInstance::Linux_SambaShareOptionsManualInstance(
    const Linux_SambaShareOptionsManualInstance& anInstance) {   	
   	init(anInstance);  	   	
  }
  
  //----------------------------------------------------------------------------
  //constructor using CmpiInstance
  //----------------------------------------------------------------------------
  Linux_SambaShareOptionsManualInstance::Linux_SambaShareOptionsManualInstance(
    const CmpiInstance& aCmpiInstance,
    const char* anInstanceNamespaceP) {

    CmpiData cmpiData;

    init(); 
    
    CmpiObjectPath cop = aCmpiInstance.getObjectPath();
    cop.setNameSpace(anInstanceNamespaceP);
    setInstanceName(Linux_SambaShareOptionsInstanceName(cop));

    cmpiData = aCmpiInstance.getProperty("Available");
    if ( ! cmpiData.isNullValue()){
      CMPIBoolean Available = cmpiData;
      setAvailable(Available);
    }

    cmpiData = aCmpiInstance.getProperty("Comment");
    if ( ! cmpiData.isNullValue()){
      CmpiString Comment = cmpiData;
      setComment(Comment.charPtr());
    }

    cmpiData = aCmpiInstance.getProperty("Path");
    if ( ! cmpiData.isNullValue()){
      CmpiString Path = cmpiData;
      setPath(Path.charPtr());
    }

    cmpiData = aCmpiInstance.getProperty("Printable");
    if ( ! cmpiData.isNullValue()){
      CMPIBoolean Printable = cmpiData;
      setPrintable(Printable);
    }

    
  }
  
  //----------------------------------------------------------------------------
  //Destructor
  //----------------------------------------------------------------------------
  Linux_SambaShareOptionsManualInstance::
   ~Linux_SambaShareOptionsManualInstance(){
   	reset();  	  
  }
  
  
  //----------------------------------------------------------------------------
  //copy operator
  //----------------------------------------------------------------------------
  Linux_SambaShareOptionsManualInstance&
  Linux_SambaShareOptionsManualInstance::operator=(
    const Linux_SambaShareOptionsManualInstance& anInstance) {   	
   	
   	init(anInstance);
   	return *this;
  
  }
  
  
  //----------------------------------------------------------------------------
  //converts to CmpiInstance
  //----------------------------------------------------------------------------
  CmpiInstance
  Linux_SambaShareOptionsManualInstance::getCmpiInstance(
    const char** aPropertiesPP) const {
   	
   	CmpiObjectPath objectPath=getInstanceName().getObjectPath();      
    CmpiInstance cmpiInstance(objectPath);    
    getInstanceName().fillKeys(cmpiInstance);
    
    if (aPropertiesPP) {
	    cmpiInstance.setPropertyFilter(aPropertiesPP,0);
    }

  	if (isSet.Available) {
  	  
  	  cmpiInstance.setProperty(
  	    "Available",
  	    CmpiBooleanData(m_Available));
  	}

  	if (isSet.Comment) {
  	  
  	  cmpiInstance.setProperty(
  	    "Comment",
  	    CmpiData(m_Comment));
  	}

  	if (isSet.Path) {
  	  
  	  cmpiInstance.setProperty(
  	    "Path",
  	    CmpiData(m_Path));
  	}

  	if (isSet.Printable) {
  	  
  	  cmpiInstance.setProperty(
  	    "Printable",
  	    CmpiBooleanData(m_Printable));
  	}

  	
  	return cmpiInstance;
  	
  }
  
  //----------------------------------------------------------------------------
  // InstanceName related methods
  //----------------------------------------------------------------------------
  unsigned int 
  Linux_SambaShareOptionsManualInstance::isInstanceNameSet() const {
  	return isSet.instanceName;
  }
  
  //----------------------------------------------------------------------------
  const Linux_SambaShareOptionsInstanceName&
  Linux_SambaShareOptionsManualInstance::getInstanceName() const {

    if( ! isSet.instanceName) {
   	  throw CmpiErrorFormater::getErrorException(
        CmpiErrorFormater::NOT_SET,
        "InstanceName (CIM Key Attributes)",
        "Linux_SambaShareOptions");
   	}
  		
   	return m_instanceName;
  
  }

  //----------------------------------------------------------------------------
  void
  Linux_SambaShareOptionsManualInstance::setInstanceName(
    const Linux_SambaShareOptionsInstanceName& val) {

    m_instanceName = val;
    isSet.instanceName = 1;

  }
       
  //----------------------------------------------------------------------------
  // Available related methods
  //----------------------------------------------------------------------------
  unsigned int
  Linux_SambaShareOptionsManualInstance::isAvailableSet() const {
    return isSet.Available;
  }

  //----------------------------------------------------------------------------
  void Linux_SambaShareOptionsManualInstance::setAvailable(
    const CMPIBoolean aValue) {
  
    m_Available = aValue;
    isSet.Available = 1;
  
  }       

  //----------------------------------------------------------------------------
  const CMPIBoolean
  Linux_SambaShareOptionsManualInstance::getAvailable() const {
    
    if ( ! isSet.Available) {
   	  throw CmpiErrorFormater::getErrorException(
   	    CmpiErrorFormater::NOT_SET,
        "Available",
        "Linux_SambaShareOptions");
   	}


    return m_Available;

  }
       
  //----------------------------------------------------------------------------
  // Comment related methods
  //----------------------------------------------------------------------------
  unsigned int
  Linux_SambaShareOptionsManualInstance::isCommentSet() const {
    return isSet.Comment;
  }

  //----------------------------------------------------------------------------
  void
  Linux_SambaShareOptionsManualInstance::setComment(
    const char* aValueP,
    int aCopyFlag) {
    
    if (isSet.Comment) {
      delete [] m_Comment;
    }
    
    if (aCopyFlag && aValueP) {
      char* valueP = new char[strlen(aValueP) + 1];
      strcpy(valueP,aValueP);
      m_Comment = valueP;
    } else {
      m_Comment = aValueP;
    }
    
    isSet.Comment = 1;

  }       

  //----------------------------------------------------------------------------
  const char*
  Linux_SambaShareOptionsManualInstance::getComment() const {
    
    if ( ! isSet.Comment) {
   	  throw CmpiErrorFormater::getErrorException(
   	    CmpiErrorFormater::NOT_SET,
        "Comment",
        "Linux_SambaShareOptions");
   	}


    return m_Comment;

  }
       
  //----------------------------------------------------------------------------
  // Path related methods
  //----------------------------------------------------------------------------
  unsigned int
  Linux_SambaShareOptionsManualInstance::isPathSet() const {
    return isSet.Path;
  }

  //----------------------------------------------------------------------------
  void
  Linux_SambaShareOptionsManualInstance::setPath(
    const char* aValueP,
    int aCopyFlag) {
    
    if (isSet.Path) {
      delete [] m_Path;
    }
    
    if (aCopyFlag && aValueP) {
      char* valueP = new char[strlen(aValueP) + 1];
      strcpy(valueP,aValueP);
      m_Path = valueP;
    } else {
      m_Path = aValueP;
    }
    
    isSet.Path = 1;

  }       

  //----------------------------------------------------------------------------
  const char*
  Linux_SambaShareOptionsManualInstance::getPath() const {
    
    if ( ! isSet.Path) {
   	  throw CmpiErrorFormater::getErrorException(
   	    CmpiErrorFormater::NOT_SET,
        "Path",
        "Linux_SambaShareOptions");
   	}


    return m_Path;

  }
       
  //----------------------------------------------------------------------------
  // Printable related methods
  //----------------------------------------------------------------------------
  unsigned int
  Linux_SambaShareOptionsManualInstance::isPrintableSet() const {
    return isSet.Printable;
  }

  //----------------------------------------------------------------------------
  void Linux_SambaShareOptionsManualInstance::setPrintable(
    const CMPIBoolean aValue) {
  
    m_Printable = aValue;
    isSet.Printable = 1;
  
  }       

  //----------------------------------------------------------------------------
  const CMPIBoolean
  Linux_SambaShareOptionsManualInstance::getPrintable() const {
    
    if ( ! isSet.Printable) {
   	  throw CmpiErrorFormater::getErrorException(
   	    CmpiErrorFormater::NOT_SET,
        "Printable",
        "Linux_SambaShareOptions");
   	}


    return m_Printable;

  }

  
  //----------------------------------------------------------------------------
  //set isSet attributes to FALSE
  //----------------------------------------------------------------------------
  void
  Linux_SambaShareOptionsManualInstance::init() {
   	isSet.instanceName = 0;
    isSet.Available = 0;
    isSet.Comment = 0;
    isSet.Path = 0;
    isSet.Printable = 0;
  	
  }
  
  //----------------------------------------------------------------------------
  //copies another instance properties in this
  //----------------------------------------------------------------------------
  void 
  Linux_SambaShareOptionsManualInstance::init(
    const Linux_SambaShareOptionsManualInstance& anOriginal) {   	

   	init();
   	   	
    if(anOriginal.isInstanceNameSet()) {
      setInstanceName(anOriginal.getInstanceName());
    }
       	
    if (anOriginal.isAvailableSet()) {
      const CMPIBoolean AvailableOriginal = anOriginal.getAvailable();
      setAvailable(AvailableOriginal);
    }
   	
    if (anOriginal.isCommentSet()) {
      const char* CommentOriginal = anOriginal.getComment();
      setComment(CommentOriginal,1);
    }
   	
    if (anOriginal.isPathSet()) {
      const char* PathOriginal = anOriginal.getPath();
      setPath(PathOriginal,1);
    }
   	
    if (anOriginal.isPrintableSet()) {
      const CMPIBoolean PrintableOriginal = anOriginal.getPrintable();
      setPrintable(PrintableOriginal);
    }
    
  }
  
  //----------------------------------------------------------------------------
  //reset the instance data
  //----------------------------------------------------------------------------
  void
  Linux_SambaShareOptionsManualInstance::reset() {
   	
  	if (isSet.Comment) {
  	  delete(m_Comment);
  	}

  	if (isSet.Path) {
  	  delete(m_Path);
  	}

  }
  
  //----------------------------------------------------------------------------
  //Linux_SambaShareOptionsManualInstanceEnumerationElement	
  //----------------------------------------------------------------------------
  Linux_SambaShareOptionsManualInstanceEnumerationElement::Linux_SambaShareOptionsManualInstanceEnumerationElement() {
   	
  	m_elementP = 0;
  	m_nextP = 0;
  	  
  }
  
  //----------------------------------------------------------------------------
  Linux_SambaShareOptionsManualInstanceEnumerationElement::~Linux_SambaShareOptionsManualInstanceEnumerationElement() {
   	
  	if (m_elementP) {
  	  delete(m_elementP);
  	}
  	
  	if (m_nextP) {
  	  delete(m_nextP);
  	}
  	  
  }

  //----------------------------------------------------------------------------
  //Linux_SambaShareOptionsManualInstanceNameEnumeration
  //----------------------------------------------------------------------------
  Linux_SambaShareOptionsManualInstanceEnumeration::Linux_SambaShareOptionsManualInstanceEnumeration() {
   	
    m_firstElementP = 0;
    m_currentElementP = 0;
    m_endElementP = 0;
  
  }
  
  //----------------------------------------------------------------------------
  Linux_SambaShareOptionsManualInstanceEnumeration::Linux_SambaShareOptionsManualInstanceEnumeration(
    const Linux_SambaShareOptionsManualInstanceEnumeration& anInstanceEnumeration) {
   	
    m_firstElementP = 0;
    m_currentElementP = 0;
    m_endElementP = 0;
  	 
    int size = anInstanceEnumeration.getSize();
    for (int x=0; x < size;++x) {
      addElement(anInstanceEnumeration.getElement(x));
    }           

  }
  
  //----------------------------------------------------------------------------
  Linux_SambaShareOptionsManualInstanceEnumeration::~Linux_SambaShareOptionsManualInstanceEnumeration() {
   	
  	if (m_firstElementP) {
  	  delete(m_firstElementP);
  	}
  	  	
  }
  
  //----------------------------------------------------------------------------
  void
  Linux_SambaShareOptionsManualInstanceEnumeration::reset() {
  	
  	m_currentElementP = m_firstElementP;
  	
  }
  	  
  //----------------------------------------------------------------------------
  bool
  Linux_SambaShareOptionsManualInstanceEnumeration::hasNext() const {
  	
  	return (m_currentElementP != 0);
  
  }
  
  //----------------------------------------------------------------------------
  int
  Linux_SambaShareOptionsManualInstanceEnumeration::getSize() const {
  	
    int size = 0;
    Linux_SambaShareOptionsManualInstanceEnumerationElement* followingP = m_firstElementP;
  	
  	while (followingP) {
      followingP = followingP->m_nextP;
      ++size;
    }
  	
    return size;
    
  }
  
  //----------------------------------------------------------------------------
  const Linux_SambaShareOptionsManualInstance&  
  Linux_SambaShareOptionsManualInstanceEnumeration::getElement(int anIndex) const {
   
    Linux_SambaShareOptionsManualInstanceEnumerationElement* followingP = m_firstElementP;
   
    int x = 0;
    while (followingP && (x < anIndex)) {
      followingP = followingP->m_nextP;
      ++x;
    }
    
    return *(followingP->m_elementP);

  }
  
  //----------------------------------------------------------------------------
  const Linux_SambaShareOptionsManualInstance&
  Linux_SambaShareOptionsManualInstanceEnumeration::getNext() {
   	
    Linux_SambaShareOptionsManualInstanceEnumerationElement* currentElementP =
  	  m_currentElementP;

    m_currentElementP = m_currentElementP->m_nextP;
  	 
    return *(currentElementP->m_elementP);

  }
  	  
  //----------------------------------------------------------------------------
  void
  Linux_SambaShareOptionsManualInstanceEnumeration::addElement(
    const Linux_SambaShareOptionsManualInstance& anInstance) {
   	
  	if (m_firstElementP == 0) {
  	  m_firstElementP = new Linux_SambaShareOptionsManualInstanceEnumerationElement();
  	  m_firstElementP->m_elementP = new Linux_SambaShareOptionsManualInstance(anInstance);
  	  m_endElementP = m_firstElementP;
  	  m_currentElementP = m_firstElementP;
  	} else {
  	  m_endElementP->m_nextP = new Linux_SambaShareOptionsManualInstanceEnumerationElement();
  	  m_endElementP = m_endElementP->m_nextP;
  	  m_endElementP->m_elementP = new Linux_SambaShareOptionsManualInstance(anInstance);
  	}

  }
  
}
