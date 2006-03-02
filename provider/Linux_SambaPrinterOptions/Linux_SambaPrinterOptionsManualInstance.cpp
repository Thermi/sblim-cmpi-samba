// =======================================================================
// Linux_SambaPrinterOptionsManualInstance.cpp
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
#include "Linux_SambaPrinterOptionsManualInstance.h"
#include "CmpiData.h"
#include "CmpiString.h"
#include "CmpiArray.h"
#include <string>

namespace genProvider {

  //****************************************************************************
  //Linux_SambaPrinterOptionsManualInstance
  //----------------------------------------------------------------------------
  //empty constructor
  Linux_SambaPrinterOptionsManualInstance::Linux_SambaPrinterOptionsManualInstance() {   	
   	init();  	   	
  }
  
  //----------------------------------------------------------------------------
  //copy constructor	
  //----------------------------------------------------------------------------
  Linux_SambaPrinterOptionsManualInstance::Linux_SambaPrinterOptionsManualInstance(
    const Linux_SambaPrinterOptionsManualInstance& anInstance) {   	
   	init(anInstance);  	   	
  }
  
  //----------------------------------------------------------------------------
  //constructor using CmpiInstance
  //----------------------------------------------------------------------------
  Linux_SambaPrinterOptionsManualInstance::Linux_SambaPrinterOptionsManualInstance(
    const CmpiInstance& aCmpiInstance,
    const char* anInstanceNamespaceP) {

    CmpiData cmpiData;

    init(); 
    
    CmpiObjectPath cop = aCmpiInstance.getObjectPath();
    cop.setNameSpace(anInstanceNamespaceP);
    setInstanceName(Linux_SambaPrinterOptionsInstanceName(cop));

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

    cmpiData = aCmpiInstance.getProperty("SystemPrinterName");
    if ( ! cmpiData.isNullValue()){
      CmpiString SystemPrinterName = cmpiData;
      setSystemPrinterName(SystemPrinterName.charPtr());
    }

    
  }
  
  //----------------------------------------------------------------------------
  //Destructor
  //----------------------------------------------------------------------------
  Linux_SambaPrinterOptionsManualInstance::
   ~Linux_SambaPrinterOptionsManualInstance(){
   	reset();  	  
  }
  
  
  //----------------------------------------------------------------------------
  //copy operator
  //----------------------------------------------------------------------------
  Linux_SambaPrinterOptionsManualInstance&
  Linux_SambaPrinterOptionsManualInstance::operator=(
    const Linux_SambaPrinterOptionsManualInstance& anInstance) {   	
   	
   	init(anInstance);
   	return *this;
  
  }
  
  
  //----------------------------------------------------------------------------
  //converts to CmpiInstance
  //----------------------------------------------------------------------------
  CmpiInstance
  Linux_SambaPrinterOptionsManualInstance::getCmpiInstance(
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

  	if (isSet.SystemPrinterName) {
  	  
  	  cmpiInstance.setProperty(
  	    "SystemPrinterName",
  	    CmpiData(m_SystemPrinterName));
  	}

  	
  	return cmpiInstance;
  	
  }
  
  //----------------------------------------------------------------------------
  // InstanceName related methods
  //----------------------------------------------------------------------------
  unsigned int 
  Linux_SambaPrinterOptionsManualInstance::isInstanceNameSet() const {
  	return isSet.instanceName;
  }
  
  //----------------------------------------------------------------------------
  const Linux_SambaPrinterOptionsInstanceName&
  Linux_SambaPrinterOptionsManualInstance::getInstanceName() const {

    if( ! isSet.instanceName) {
   	  throw CmpiErrorFormater::getErrorException(
        CmpiErrorFormater::NOT_SET,
        "InstanceName (CIM Key Attributes)",
        "Linux_SambaPrinterOptions");
   	}
  		
   	return m_instanceName;
  
  }

  //----------------------------------------------------------------------------
  void
  Linux_SambaPrinterOptionsManualInstance::setInstanceName(
    const Linux_SambaPrinterOptionsInstanceName& val) {

    m_instanceName = val;
    isSet.instanceName = 1;

  }
       
  //----------------------------------------------------------------------------
  // Available related methods
  //----------------------------------------------------------------------------
  unsigned int
  Linux_SambaPrinterOptionsManualInstance::isAvailableSet() const {
    return isSet.Available;
  }

  //----------------------------------------------------------------------------
  void Linux_SambaPrinterOptionsManualInstance::setAvailable(
    const CMPIBoolean aValue) {
  
    m_Available = aValue;
    isSet.Available = 1;
  
  }       

  //----------------------------------------------------------------------------
  const CMPIBoolean
  Linux_SambaPrinterOptionsManualInstance::getAvailable() const {
    
    if ( ! isSet.Available) {
   	  throw CmpiErrorFormater::getErrorException(
   	    CmpiErrorFormater::NOT_SET,
        "Available",
        "Linux_SambaPrinterOptions");
   	}


    return m_Available;

  }
       
  //----------------------------------------------------------------------------
  // Comment related methods
  //----------------------------------------------------------------------------
  unsigned int
  Linux_SambaPrinterOptionsManualInstance::isCommentSet() const {
    return isSet.Comment;
  }

  //----------------------------------------------------------------------------
  void
  Linux_SambaPrinterOptionsManualInstance::setComment(
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
  Linux_SambaPrinterOptionsManualInstance::getComment() const {
    
    if ( ! isSet.Comment) {
   	  throw CmpiErrorFormater::getErrorException(
   	    CmpiErrorFormater::NOT_SET,
        "Comment",
        "Linux_SambaPrinterOptions");
   	}


    return m_Comment;

  }
       
  //----------------------------------------------------------------------------
  // Path related methods
  //----------------------------------------------------------------------------
  unsigned int
  Linux_SambaPrinterOptionsManualInstance::isPathSet() const {
    return isSet.Path;
  }

  //----------------------------------------------------------------------------
  void
  Linux_SambaPrinterOptionsManualInstance::setPath(
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
  Linux_SambaPrinterOptionsManualInstance::getPath() const {
    
    if ( ! isSet.Path) {
   	  throw CmpiErrorFormater::getErrorException(
   	    CmpiErrorFormater::NOT_SET,
        "Path",
        "Linux_SambaPrinterOptions");
   	}


    return m_Path;

  }
       
  //----------------------------------------------------------------------------
  // Printable related methods
  //----------------------------------------------------------------------------
  unsigned int
  Linux_SambaPrinterOptionsManualInstance::isPrintableSet() const {
    return isSet.Printable;
  }

  //----------------------------------------------------------------------------
  void Linux_SambaPrinterOptionsManualInstance::setPrintable(
    const CMPIBoolean aValue) {
  
    m_Printable = aValue;
    isSet.Printable = 1;
  
  }       

  //----------------------------------------------------------------------------
  const CMPIBoolean
  Linux_SambaPrinterOptionsManualInstance::getPrintable() const {
    
    if ( ! isSet.Printable) {
   	  throw CmpiErrorFormater::getErrorException(
   	    CmpiErrorFormater::NOT_SET,
        "Printable",
        "Linux_SambaPrinterOptions");
   	}


    return m_Printable;

  }
       
  //----------------------------------------------------------------------------
  // SystemPrinterName related methods
  //----------------------------------------------------------------------------
  unsigned int
  Linux_SambaPrinterOptionsManualInstance::isSystemPrinterNameSet() const {
    return isSet.SystemPrinterName;
  }

  //----------------------------------------------------------------------------
  void
  Linux_SambaPrinterOptionsManualInstance::setSystemPrinterName(
    const char* aValueP,
    int aCopyFlag) {
    
    if (isSet.SystemPrinterName) {
      delete [] m_SystemPrinterName;
    }
    
    if (aCopyFlag && aValueP) {
      char* valueP = new char[strlen(aValueP) + 1];
      strcpy(valueP,aValueP);
      m_SystemPrinterName = valueP;
    } else {
      m_SystemPrinterName = aValueP;
    }
    
    isSet.SystemPrinterName = 1;

  }       

  //----------------------------------------------------------------------------
  const char*
  Linux_SambaPrinterOptionsManualInstance::getSystemPrinterName() const {
    
    if ( ! isSet.SystemPrinterName) {
   	  throw CmpiErrorFormater::getErrorException(
   	    CmpiErrorFormater::NOT_SET,
        "SystemPrinterName",
        "Linux_SambaPrinterOptions");
   	}


    return m_SystemPrinterName;

  }

  
  //----------------------------------------------------------------------------
  //set isSet attributes to FALSE
  //----------------------------------------------------------------------------
  void
  Linux_SambaPrinterOptionsManualInstance::init() {
   	isSet.instanceName = 0;
    isSet.Available = 0;
    isSet.Comment = 0;
    isSet.Path = 0;
    isSet.Printable = 0;
    isSet.SystemPrinterName = 0;
  	
  }
  
  //----------------------------------------------------------------------------
  //copies another instance properties in this
  //----------------------------------------------------------------------------
  void 
  Linux_SambaPrinterOptionsManualInstance::init(
    const Linux_SambaPrinterOptionsManualInstance& anOriginal) {   	

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
   	
    if (anOriginal.isSystemPrinterNameSet()) {
      const char* SystemPrinterNameOriginal = anOriginal.getSystemPrinterName();
      setSystemPrinterName(SystemPrinterNameOriginal,1);
    }
    
  }
  
  //----------------------------------------------------------------------------
  //reset the instance data
  //----------------------------------------------------------------------------
  void
  Linux_SambaPrinterOptionsManualInstance::reset() {
   	
  	if (isSet.Comment) {
  	  delete(m_Comment);
  	}

  	if (isSet.Path) {
  	  delete(m_Path);
  	}

  	if (isSet.SystemPrinterName) {
  	  delete(m_SystemPrinterName);
  	}

  }
  
  //----------------------------------------------------------------------------
  //Linux_SambaPrinterOptionsManualInstanceEnumerationElement	
  //----------------------------------------------------------------------------
  Linux_SambaPrinterOptionsManualInstanceEnumerationElement::Linux_SambaPrinterOptionsManualInstanceEnumerationElement() {
   	
  	m_elementP = 0;
  	m_nextP = 0;
  	  
  }
  
  //----------------------------------------------------------------------------
  Linux_SambaPrinterOptionsManualInstanceEnumerationElement::~Linux_SambaPrinterOptionsManualInstanceEnumerationElement() {
   	
  	if (m_elementP) {
  	  delete(m_elementP);
  	}
  	
  	if (m_nextP) {
  	  delete(m_nextP);
  	}
  	  
  }

  //----------------------------------------------------------------------------
  //Linux_SambaPrinterOptionsManualInstanceNameEnumeration
  //----------------------------------------------------------------------------
  Linux_SambaPrinterOptionsManualInstanceEnumeration::Linux_SambaPrinterOptionsManualInstanceEnumeration() {
   	
    m_firstElementP = 0;
    m_currentElementP = 0;
    m_endElementP = 0;
  
  }
  
  //----------------------------------------------------------------------------
  Linux_SambaPrinterOptionsManualInstanceEnumeration::Linux_SambaPrinterOptionsManualInstanceEnumeration(
    const Linux_SambaPrinterOptionsManualInstanceEnumeration& anInstanceEnumeration) {
   	
    m_firstElementP = 0;
    m_currentElementP = 0;
    m_endElementP = 0;
  	 
    int size = anInstanceEnumeration.getSize();
    for (int x=0; x < size;++x) {
      addElement(anInstanceEnumeration.getElement(x));
    }           

  }
  
  //----------------------------------------------------------------------------
  Linux_SambaPrinterOptionsManualInstanceEnumeration::~Linux_SambaPrinterOptionsManualInstanceEnumeration() {
   	
  	if (m_firstElementP) {
  	  delete(m_firstElementP);
  	}
  	  	
  }
  
  //----------------------------------------------------------------------------
  void
  Linux_SambaPrinterOptionsManualInstanceEnumeration::reset() {
  	
  	m_currentElementP = m_firstElementP;
  	
  }
  	  
  //----------------------------------------------------------------------------
  bool
  Linux_SambaPrinterOptionsManualInstanceEnumeration::hasNext() const {
  	
  	return (m_currentElementP != 0);
  
  }
  
  //----------------------------------------------------------------------------
  int
  Linux_SambaPrinterOptionsManualInstanceEnumeration::getSize() const {
  	
    int size = 0;
    Linux_SambaPrinterOptionsManualInstanceEnumerationElement* followingP = m_firstElementP;
  	
  	while (followingP) {
      followingP = followingP->m_nextP;
      ++size;
    }
  	
    return size;
    
  }
  
  //----------------------------------------------------------------------------
  const Linux_SambaPrinterOptionsManualInstance&  
  Linux_SambaPrinterOptionsManualInstanceEnumeration::getElement(int anIndex) const {
   
    Linux_SambaPrinterOptionsManualInstanceEnumerationElement* followingP = m_firstElementP;
   
    int x = 0;
    while (followingP && (x < anIndex)) {
      followingP = followingP->m_nextP;
      ++x;
    }
    
    return *(followingP->m_elementP);

  }
  
  //----------------------------------------------------------------------------
  const Linux_SambaPrinterOptionsManualInstance&
  Linux_SambaPrinterOptionsManualInstanceEnumeration::getNext() {
   	
    Linux_SambaPrinterOptionsManualInstanceEnumerationElement* currentElementP =
  	  m_currentElementP;

    m_currentElementP = m_currentElementP->m_nextP;
  	 
    return *(currentElementP->m_elementP);

  }
  	  
  //----------------------------------------------------------------------------
  void
  Linux_SambaPrinterOptionsManualInstanceEnumeration::addElement(
    const Linux_SambaPrinterOptionsManualInstance& anInstance) {
   	
  	if (m_firstElementP == 0) {
  	  m_firstElementP = new Linux_SambaPrinterOptionsManualInstanceEnumerationElement();
  	  m_firstElementP->m_elementP = new Linux_SambaPrinterOptionsManualInstance(anInstance);
  	  m_endElementP = m_firstElementP;
  	  m_currentElementP = m_firstElementP;
  	} else {
  	  m_endElementP->m_nextP = new Linux_SambaPrinterOptionsManualInstanceEnumerationElement();
  	  m_endElementP = m_endElementP->m_nextP;
  	  m_endElementP->m_elementP = new Linux_SambaPrinterOptionsManualInstance(anInstance);
  	}

  }
  
}
