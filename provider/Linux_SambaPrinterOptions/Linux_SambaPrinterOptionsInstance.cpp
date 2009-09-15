// =======================================================================
// Linux_SambaPrinterOptionsInstance.cpp
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
#include "Linux_SambaPrinterOptionsInstance.h"
#include "CmpiData.h"
#include "CmpiString.h"
#include "CmpiArray.h"
#include <string>

namespace genProvider {

  //****************************************************************************
  //Linux_SambaPrinterOptionsInstance
  //----------------------------------------------------------------------------
  //empty constructor
  Linux_SambaPrinterOptionsInstance::Linux_SambaPrinterOptionsInstance() {   	
   	init();  	   	
  }
  
  //----------------------------------------------------------------------------
  //copy constructor	
  //----------------------------------------------------------------------------
  Linux_SambaPrinterOptionsInstance::Linux_SambaPrinterOptionsInstance(
    const Linux_SambaPrinterOptionsInstance& anInstance) {   	
   	init(anInstance);  	   	
  }
  
  //----------------------------------------------------------------------------
  //constructor using CmpiInstance
  //----------------------------------------------------------------------------
  Linux_SambaPrinterOptionsInstance::Linux_SambaPrinterOptionsInstance(
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

    cmpiData = aCmpiInstance.getProperty("Caption");
    if ( ! cmpiData.isNullValue()){
      CmpiString Caption = cmpiData;
      setCaption(Caption.charPtr());
    }

    cmpiData = aCmpiInstance.getProperty("Comment");
    if ( ! cmpiData.isNullValue()){
      CmpiString Comment = cmpiData;
      setComment(Comment.charPtr());
    }

    cmpiData = aCmpiInstance.getProperty("Description");
    if ( ! cmpiData.isNullValue()){
      CmpiString Description = cmpiData;
      setDescription(Description.charPtr());
    }

    cmpiData = aCmpiInstance.getProperty("ElementName");
    if ( ! cmpiData.isNullValue()){
      CmpiString ElementName = cmpiData;
      setElementName(ElementName.charPtr());
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
  Linux_SambaPrinterOptionsInstance::
   ~Linux_SambaPrinterOptionsInstance(){
   	reset();  	  
  }
  
  
  //----------------------------------------------------------------------------
  //copy operator
  //----------------------------------------------------------------------------
  Linux_SambaPrinterOptionsInstance&
  Linux_SambaPrinterOptionsInstance::operator=(
    const Linux_SambaPrinterOptionsInstance& anInstance) {   	
   	
   	init(anInstance);
   	return *this;
  
  }
  
  
  //----------------------------------------------------------------------------
  //converts to CmpiInstance
  //----------------------------------------------------------------------------
  CmpiInstance
  Linux_SambaPrinterOptionsInstance::getCmpiInstance(
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

  	if (isSet.Caption) {
  	  
  	  cmpiInstance.setProperty(
  	    "Caption",
  	    CmpiData(m_Caption));
  	}

  	if (isSet.Comment) {
  	  
  	  cmpiInstance.setProperty(
  	    "Comment",
  	    CmpiData(m_Comment));
  	}

  	if (isSet.Description) {
  	  
  	  cmpiInstance.setProperty(
  	    "Description",
  	    CmpiData(m_Description));
  	}

  	if (isSet.ElementName) {
  	  
  	  cmpiInstance.setProperty(
  	    "ElementName",
  	    CmpiData(m_ElementName));
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
  Linux_SambaPrinterOptionsInstance::isInstanceNameSet() const {
  	return isSet.instanceName;
  }
  
  //----------------------------------------------------------------------------
  const Linux_SambaPrinterOptionsInstanceName&
  Linux_SambaPrinterOptionsInstance::getInstanceName() const {

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
  Linux_SambaPrinterOptionsInstance::setInstanceName(
    const Linux_SambaPrinterOptionsInstanceName& val) {

    m_instanceName = val;
    isSet.instanceName = 1;

  }
       
  //----------------------------------------------------------------------------
  // Available related methods
  //----------------------------------------------------------------------------
  unsigned int
  Linux_SambaPrinterOptionsInstance::isAvailableSet() const {
    return isSet.Available;
  }

  //----------------------------------------------------------------------------
  void Linux_SambaPrinterOptionsInstance::setAvailable(
    const CMPIBoolean aValue) {
  
    m_Available = aValue;
    isSet.Available = 1;
  
  }       

  //----------------------------------------------------------------------------
  const CMPIBoolean
  Linux_SambaPrinterOptionsInstance::getAvailable() const {
    
    if ( ! isSet.Available) {
   	  throw CmpiErrorFormater::getErrorException(
   	    CmpiErrorFormater::NOT_SET,
        "Available",
        "Linux_SambaPrinterOptions");
   	}


    return m_Available;

  }
       
  //----------------------------------------------------------------------------
  // Caption related methods
  //----------------------------------------------------------------------------
  unsigned int
  Linux_SambaPrinterOptionsInstance::isCaptionSet() const {
    return isSet.Caption;
  }

  //----------------------------------------------------------------------------
  void
  Linux_SambaPrinterOptionsInstance::setCaption(
    const char* aValueP,
    int aCopyFlag) {
    
    if (isSet.Caption) {
      delete [] m_Caption;
    }
    
    if (aCopyFlag && aValueP) {
      char* valueP = new char[strlen(aValueP) + 1];
      strcpy(valueP,aValueP);
      m_Caption = valueP;
    } else {
      m_Caption = aValueP;
    }
    
    isSet.Caption = 1;

  }       

  //----------------------------------------------------------------------------
  const char*
  Linux_SambaPrinterOptionsInstance::getCaption() const {
    
    if ( ! isSet.Caption) {
   	  throw CmpiErrorFormater::getErrorException(
   	    CmpiErrorFormater::NOT_SET,
        "Caption",
        "Linux_SambaPrinterOptions");
   	}


    return m_Caption;

  }
       
  //----------------------------------------------------------------------------
  // Comment related methods
  //----------------------------------------------------------------------------
  unsigned int
  Linux_SambaPrinterOptionsInstance::isCommentSet() const {
    return isSet.Comment;
  }

  //----------------------------------------------------------------------------
  void
  Linux_SambaPrinterOptionsInstance::setComment(
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
  Linux_SambaPrinterOptionsInstance::getComment() const {
    
    if ( ! isSet.Comment) {
   	  throw CmpiErrorFormater::getErrorException(
   	    CmpiErrorFormater::NOT_SET,
        "Comment",
        "Linux_SambaPrinterOptions");
   	}


    return m_Comment;

  }
       
  //----------------------------------------------------------------------------
  // Description related methods
  //----------------------------------------------------------------------------
  unsigned int
  Linux_SambaPrinterOptionsInstance::isDescriptionSet() const {
    return isSet.Description;
  }

  //----------------------------------------------------------------------------
  void
  Linux_SambaPrinterOptionsInstance::setDescription(
    const char* aValueP,
    int aCopyFlag) {
    
    if (isSet.Description) {
      delete [] m_Description;
    }
    
    if (aCopyFlag && aValueP) {
      char* valueP = new char[strlen(aValueP) + 1];
      strcpy(valueP,aValueP);
      m_Description = valueP;
    } else {
      m_Description = aValueP;
    }
    
    isSet.Description = 1;

  }       

  //----------------------------------------------------------------------------
  const char*
  Linux_SambaPrinterOptionsInstance::getDescription() const {
    
    if ( ! isSet.Description) {
   	  throw CmpiErrorFormater::getErrorException(
   	    CmpiErrorFormater::NOT_SET,
        "Description",
        "Linux_SambaPrinterOptions");
   	}


    return m_Description;

  }
       
  //----------------------------------------------------------------------------
  // ElementName related methods
  //----------------------------------------------------------------------------
  unsigned int
  Linux_SambaPrinterOptionsInstance::isElementNameSet() const {
    return isSet.ElementName;
  }

  //----------------------------------------------------------------------------
  void
  Linux_SambaPrinterOptionsInstance::setElementName(
    const char* aValueP,
    int aCopyFlag) {
    
    if (isSet.ElementName) {
      delete [] m_ElementName;
    }
    
    if (aCopyFlag && aValueP) {
      char* valueP = new char[strlen(aValueP) + 1];
      strcpy(valueP,aValueP);
      m_ElementName = valueP;
    } else {
      m_ElementName = aValueP;
    }
    
    isSet.ElementName = 1;

  }       

  //----------------------------------------------------------------------------
  const char*
  Linux_SambaPrinterOptionsInstance::getElementName() const {
    
    if ( ! isSet.ElementName) {
   	  throw CmpiErrorFormater::getErrorException(
   	    CmpiErrorFormater::NOT_SET,
        "ElementName",
        "Linux_SambaPrinterOptions");
   	}


    return m_ElementName;

  }
       
  //----------------------------------------------------------------------------
  // Path related methods
  //----------------------------------------------------------------------------
  unsigned int
  Linux_SambaPrinterOptionsInstance::isPathSet() const {
    return isSet.Path;
  }

  //----------------------------------------------------------------------------
  void
  Linux_SambaPrinterOptionsInstance::setPath(
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
  Linux_SambaPrinterOptionsInstance::getPath() const {
    
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
  Linux_SambaPrinterOptionsInstance::isPrintableSet() const {
    return isSet.Printable;
  }

  //----------------------------------------------------------------------------
  void Linux_SambaPrinterOptionsInstance::setPrintable(
    const CMPIBoolean aValue) {
  
    m_Printable = aValue;
    isSet.Printable = 1;
  
  }       

  //----------------------------------------------------------------------------
  const CMPIBoolean
  Linux_SambaPrinterOptionsInstance::getPrintable() const {
    
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
  Linux_SambaPrinterOptionsInstance::isSystemPrinterNameSet() const {
    return isSet.SystemPrinterName;
  }

  //----------------------------------------------------------------------------
  void
  Linux_SambaPrinterOptionsInstance::setSystemPrinterName(
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
  Linux_SambaPrinterOptionsInstance::getSystemPrinterName() const {
    
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
  Linux_SambaPrinterOptionsInstance::init() {
   	isSet.instanceName = 0;
    isSet.Available = 0;
    isSet.Caption = 0;
    isSet.Comment = 0;
    isSet.Description = 0;
    isSet.ElementName = 0;
    isSet.Path = 0;
    isSet.Printable = 0;
    isSet.SystemPrinterName = 0;
  	
  }
  
  //----------------------------------------------------------------------------
  //copies another instance properties in this
  //----------------------------------------------------------------------------
  void 
  Linux_SambaPrinterOptionsInstance::init(
    const Linux_SambaPrinterOptionsInstance& anOriginal) {   	

   	init();
   	   	
    if(anOriginal.isInstanceNameSet()) {
      setInstanceName(anOriginal.getInstanceName());
    }
       	
    if (anOriginal.isAvailableSet()) {
      const CMPIBoolean AvailableOriginal = anOriginal.getAvailable();
      setAvailable(AvailableOriginal);
    }
   	
    if (anOriginal.isCaptionSet()) {
      const char* CaptionOriginal = anOriginal.getCaption();
      setCaption(CaptionOriginal,1);
    }
   	
    if (anOriginal.isCommentSet()) {
      const char* CommentOriginal = anOriginal.getComment();
      setComment(CommentOriginal,1);
    }
   	
    if (anOriginal.isDescriptionSet()) {
      const char* DescriptionOriginal = anOriginal.getDescription();
      setDescription(DescriptionOriginal,1);
    }
   	
    if (anOriginal.isElementNameSet()) {
      const char* ElementNameOriginal = anOriginal.getElementName();
      setElementName(ElementNameOriginal,1);
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
  Linux_SambaPrinterOptionsInstance::reset() {
   	
  	if (isSet.Caption) {
  	  delete(m_Caption);
  	}

  	if (isSet.Comment) {
  	  delete(m_Comment);
  	}

  	if (isSet.Description) {
  	  delete(m_Description);
  	}

  	if (isSet.ElementName) {
  	  delete(m_ElementName);
  	}

  	if (isSet.Path) {
  	  delete(m_Path);
  	}

  	if (isSet.SystemPrinterName) {
  	  delete(m_SystemPrinterName);
  	}

  }
  
  //----------------------------------------------------------------------------
  //Linux_SambaPrinterOptionsInstanceEnumerationElement	
  //----------------------------------------------------------------------------
  Linux_SambaPrinterOptionsInstanceEnumerationElement::Linux_SambaPrinterOptionsInstanceEnumerationElement() {
   	
  	m_elementP = 0;
  	m_nextP = 0;
  	  
  }
  
  //----------------------------------------------------------------------------
  Linux_SambaPrinterOptionsInstanceEnumerationElement::~Linux_SambaPrinterOptionsInstanceEnumerationElement() {
   	
  	if (m_elementP) {
  	  delete(m_elementP);
  	}
  	
  	if (m_nextP) {
  	  delete(m_nextP);
  	}
  	  
  }

  //----------------------------------------------------------------------------
  //Linux_SambaPrinterOptionsInstanceNameEnumeration
  //----------------------------------------------------------------------------
  Linux_SambaPrinterOptionsInstanceEnumeration::Linux_SambaPrinterOptionsInstanceEnumeration() {
   	
    m_firstElementP = 0;
    m_currentElementP = 0;
    m_endElementP = 0;
  
  }
  
  //----------------------------------------------------------------------------
  Linux_SambaPrinterOptionsInstanceEnumeration::Linux_SambaPrinterOptionsInstanceEnumeration(
    const Linux_SambaPrinterOptionsInstanceEnumeration& anInstanceEnumeration) {
   	
    m_firstElementP = 0;
    m_currentElementP = 0;
    m_endElementP = 0;
  	 
    int size = anInstanceEnumeration.getSize();
    for (int x=0; x < size;++x) {
      addElement(anInstanceEnumeration.getElement(x));
    }           

  }
  
  //----------------------------------------------------------------------------
  Linux_SambaPrinterOptionsInstanceEnumeration::~Linux_SambaPrinterOptionsInstanceEnumeration() {
   	
  	if (m_firstElementP) {
  	  delete(m_firstElementP);
  	}
  	  	
  }
  
  //----------------------------------------------------------------------------
  void
  Linux_SambaPrinterOptionsInstanceEnumeration::reset() {
  	
  	m_currentElementP = m_firstElementP;
  	
  }
  	  
  //----------------------------------------------------------------------------
  bool
  Linux_SambaPrinterOptionsInstanceEnumeration::hasNext() const {
  	
  	return (m_currentElementP != 0);
  
  }
  
  //----------------------------------------------------------------------------
  int
  Linux_SambaPrinterOptionsInstanceEnumeration::getSize() const {
  	
    int size = 0;
    Linux_SambaPrinterOptionsInstanceEnumerationElement* followingP = m_firstElementP;
  	
  	while (followingP) {
      followingP = followingP->m_nextP;
      ++size;
    }
  	
    return size;
    
  }
  
  //----------------------------------------------------------------------------
  const Linux_SambaPrinterOptionsInstance&  
  Linux_SambaPrinterOptionsInstanceEnumeration::getElement(int anIndex) const {
   
    Linux_SambaPrinterOptionsInstanceEnumerationElement* followingP = m_firstElementP;
   
    int x = 0;
    while (followingP && (x < anIndex)) {
      followingP = followingP->m_nextP;
      ++x;
    }
    
    return *(followingP->m_elementP);

  }
  
  //----------------------------------------------------------------------------
  const Linux_SambaPrinterOptionsInstance&
  Linux_SambaPrinterOptionsInstanceEnumeration::getNext() {
   	
    Linux_SambaPrinterOptionsInstanceEnumerationElement* currentElementP =
  	  m_currentElementP;

    m_currentElementP = m_currentElementP->m_nextP;
  	 
    return *(currentElementP->m_elementP);

  }
  	  
  //----------------------------------------------------------------------------
  void
  Linux_SambaPrinterOptionsInstanceEnumeration::addElement(
    const Linux_SambaPrinterOptionsInstance& anInstance) {
   	
  	if (m_firstElementP == 0) {
  	  m_firstElementP = new Linux_SambaPrinterOptionsInstanceEnumerationElement();
  	  m_firstElementP->m_elementP = new Linux_SambaPrinterOptionsInstance(anInstance);
  	  m_endElementP = m_firstElementP;
  	  m_currentElementP = m_firstElementP;
  	} else {
  	  m_endElementP->m_nextP = new Linux_SambaPrinterOptionsInstanceEnumerationElement();
  	  m_endElementP = m_endElementP->m_nextP;
  	  m_endElementP->m_elementP = new Linux_SambaPrinterOptionsInstance(anInstance);
  	}

  }
  
}
