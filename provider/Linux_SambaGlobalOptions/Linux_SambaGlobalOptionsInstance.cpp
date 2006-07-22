// =======================================================================
// Linux_SambaGlobalOptionsInstance.cpp
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
#include "Linux_SambaGlobalOptionsInstance.h"
#include "CmpiData.h"
#include "CmpiString.h"
#include "CmpiArray.h"
#include <string>

namespace genProvider {

  //****************************************************************************
  //Linux_SambaGlobalOptionsInstance
  //----------------------------------------------------------------------------
  //empty constructor
  Linux_SambaGlobalOptionsInstance::Linux_SambaGlobalOptionsInstance() {   	
   	init();  	   	
  }
  
  //----------------------------------------------------------------------------
  //copy constructor	
  //----------------------------------------------------------------------------
  Linux_SambaGlobalOptionsInstance::Linux_SambaGlobalOptionsInstance(
    const Linux_SambaGlobalOptionsInstance& anInstance) {   	
   	init(anInstance);  	   	
  }
  
  //----------------------------------------------------------------------------
  //constructor using CmpiInstance
  //----------------------------------------------------------------------------
  Linux_SambaGlobalOptionsInstance::Linux_SambaGlobalOptionsInstance(
    const CmpiInstance& aCmpiInstance,
    const char* anInstanceNamespaceP) {

    CmpiData cmpiData;

    init(); 
    
    CmpiObjectPath cop = aCmpiInstance.getObjectPath();
    cop.setNameSpace(anInstanceNamespaceP);
    setInstanceName(Linux_SambaGlobalOptionsInstanceName(cop));

    cmpiData = aCmpiInstance.getProperty("BindInterfacesOnly");
    if ( ! cmpiData.isNullValue()){
      CMPIBoolean BindInterfacesOnly = cmpiData;
      setBindInterfacesOnly(BindInterfacesOnly);
    }

    cmpiData = aCmpiInstance.getProperty("Caption");
    if ( ! cmpiData.isNullValue()){
      CmpiString Caption = cmpiData;
      setCaption(Caption.charPtr());
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

    cmpiData = aCmpiInstance.getProperty("Interfaces");
    if ( ! cmpiData.isNullValue()){
      CmpiString Interfaces = cmpiData;
      setInterfaces(Interfaces.charPtr());
    }

    cmpiData = aCmpiInstance.getProperty("NetbiosAlias");
    if ( ! cmpiData.isNullValue()){
      CmpiString NetbiosAlias = cmpiData;
      setNetbiosAlias(NetbiosAlias.charPtr());
    }

    cmpiData = aCmpiInstance.getProperty("NetbiosName");
    if ( ! cmpiData.isNullValue()){
      CmpiString NetbiosName = cmpiData;
      setNetbiosName(NetbiosName.charPtr());
    }

    cmpiData = aCmpiInstance.getProperty("Printable");
    if ( ! cmpiData.isNullValue()){
      CMPIBoolean Printable = cmpiData;
      setPrintable(Printable);
    }

    cmpiData = aCmpiInstance.getProperty("ServerString");
    if ( ! cmpiData.isNullValue()){
      CmpiString ServerString = cmpiData;
      setServerString(ServerString.charPtr());
    }

    cmpiData = aCmpiInstance.getProperty("Workgroup");
    if ( ! cmpiData.isNullValue()){
      CmpiString Workgroup = cmpiData;
      setWorkgroup(Workgroup.charPtr());
    }

    
  }
  
  //----------------------------------------------------------------------------
  //Destructor
  //----------------------------------------------------------------------------
  Linux_SambaGlobalOptionsInstance::
   ~Linux_SambaGlobalOptionsInstance(){
   	reset();  	  
  }
  
  
  //----------------------------------------------------------------------------
  //copy operator
  //----------------------------------------------------------------------------
  Linux_SambaGlobalOptionsInstance&
  Linux_SambaGlobalOptionsInstance::operator=(
    const Linux_SambaGlobalOptionsInstance& anInstance) {   	
   	
   	init(anInstance);
   	return *this;
  
  }
  
  
  //----------------------------------------------------------------------------
  //converts to CmpiInstance
  //----------------------------------------------------------------------------
  CmpiInstance
  Linux_SambaGlobalOptionsInstance::getCmpiInstance(
    const char** aPropertiesPP) const {
   	
   	CmpiObjectPath objectPath=getInstanceName().getObjectPath();      
    CmpiInstance cmpiInstance(objectPath);    
    getInstanceName().fillKeys(cmpiInstance);
    
    if (aPropertiesPP) {
	    cmpiInstance.setPropertyFilter(aPropertiesPP,0);
    }

  	if (isSet.BindInterfacesOnly) {
  	  
  	  cmpiInstance.setProperty(
  	    "BindInterfacesOnly",
  	    CmpiBooleanData(m_BindInterfacesOnly));
  	}

  	if (isSet.Caption) {
  	  
  	  cmpiInstance.setProperty(
  	    "Caption",
  	    CmpiData(m_Caption));
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

  	if (isSet.Interfaces) {
  	  
  	  cmpiInstance.setProperty(
  	    "Interfaces",
  	    CmpiData(m_Interfaces));
  	}

  	if (isSet.NetbiosAlias) {
  	  
  	  cmpiInstance.setProperty(
  	    "NetbiosAlias",
  	    CmpiData(m_NetbiosAlias));
  	}

  	if (isSet.NetbiosName) {
  	  
  	  cmpiInstance.setProperty(
  	    "NetbiosName",
  	    CmpiData(m_NetbiosName));
  	}

  	if (isSet.Printable) {
  	  
  	  cmpiInstance.setProperty(
  	    "Printable",
  	    CmpiBooleanData(m_Printable));
  	}

  	if (isSet.ServerString) {
  	  
  	  cmpiInstance.setProperty(
  	    "ServerString",
  	    CmpiData(m_ServerString));
  	}

  	if (isSet.Workgroup) {
  	  
  	  cmpiInstance.setProperty(
  	    "Workgroup",
  	    CmpiData(m_Workgroup));
  	}

  	
  	return cmpiInstance;
  	
  }
  
  //----------------------------------------------------------------------------
  // InstanceName related methods
  //----------------------------------------------------------------------------
  unsigned int 
  Linux_SambaGlobalOptionsInstance::isInstanceNameSet() const {
  	return isSet.instanceName;
  }
  
  //----------------------------------------------------------------------------
  const Linux_SambaGlobalOptionsInstanceName&
  Linux_SambaGlobalOptionsInstance::getInstanceName() const {

    if( ! isSet.instanceName) {
   	  throw CmpiErrorFormater::getErrorException(
        CmpiErrorFormater::NOT_SET,
        "InstanceName (CIM Key Attributes)",
        "Linux_SambaGlobalOptions");
   	}
  		
   	return m_instanceName;
  
  }

  //----------------------------------------------------------------------------
  void
  Linux_SambaGlobalOptionsInstance::setInstanceName(
    const Linux_SambaGlobalOptionsInstanceName& val) {

    m_instanceName = val;
    isSet.instanceName = 1;

  }
       
  //----------------------------------------------------------------------------
  // BindInterfacesOnly related methods
  //----------------------------------------------------------------------------
  unsigned int
  Linux_SambaGlobalOptionsInstance::isBindInterfacesOnlySet() const {
    return isSet.BindInterfacesOnly;
  }

  //----------------------------------------------------------------------------
  void Linux_SambaGlobalOptionsInstance::setBindInterfacesOnly(
    const CMPIBoolean aValue) {
  
    m_BindInterfacesOnly = aValue;
    isSet.BindInterfacesOnly = 1;
  
  }       

  //----------------------------------------------------------------------------
  const CMPIBoolean
  Linux_SambaGlobalOptionsInstance::getBindInterfacesOnly() const {
    
    if ( ! isSet.BindInterfacesOnly) {
   	  throw CmpiErrorFormater::getErrorException(
   	    CmpiErrorFormater::NOT_SET,
        "BindInterfacesOnly",
        "Linux_SambaGlobalOptions");
   	}


    return m_BindInterfacesOnly;

  }
       
  //----------------------------------------------------------------------------
  // Caption related methods
  //----------------------------------------------------------------------------
  unsigned int
  Linux_SambaGlobalOptionsInstance::isCaptionSet() const {
    return isSet.Caption;
  }

  //----------------------------------------------------------------------------
  void
  Linux_SambaGlobalOptionsInstance::setCaption(
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
  Linux_SambaGlobalOptionsInstance::getCaption() const {
    
    if ( ! isSet.Caption) {
   	  throw CmpiErrorFormater::getErrorException(
   	    CmpiErrorFormater::NOT_SET,
        "Caption",
        "Linux_SambaGlobalOptions");
   	}


    return m_Caption;

  }
       
  //----------------------------------------------------------------------------
  // Description related methods
  //----------------------------------------------------------------------------
  unsigned int
  Linux_SambaGlobalOptionsInstance::isDescriptionSet() const {
    return isSet.Description;
  }

  //----------------------------------------------------------------------------
  void
  Linux_SambaGlobalOptionsInstance::setDescription(
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
  Linux_SambaGlobalOptionsInstance::getDescription() const {
    
    if ( ! isSet.Description) {
   	  throw CmpiErrorFormater::getErrorException(
   	    CmpiErrorFormater::NOT_SET,
        "Description",
        "Linux_SambaGlobalOptions");
   	}


    return m_Description;

  }
       
  //----------------------------------------------------------------------------
  // ElementName related methods
  //----------------------------------------------------------------------------
  unsigned int
  Linux_SambaGlobalOptionsInstance::isElementNameSet() const {
    return isSet.ElementName;
  }

  //----------------------------------------------------------------------------
  void
  Linux_SambaGlobalOptionsInstance::setElementName(
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
  Linux_SambaGlobalOptionsInstance::getElementName() const {
    
    if ( ! isSet.ElementName) {
   	  throw CmpiErrorFormater::getErrorException(
   	    CmpiErrorFormater::NOT_SET,
        "ElementName",
        "Linux_SambaGlobalOptions");
   	}


    return m_ElementName;

  }
       
  //----------------------------------------------------------------------------
  // Interfaces related methods
  //----------------------------------------------------------------------------
  unsigned int
  Linux_SambaGlobalOptionsInstance::isInterfacesSet() const {
    return isSet.Interfaces;
  }

  //----------------------------------------------------------------------------
  void
  Linux_SambaGlobalOptionsInstance::setInterfaces(
    const char* aValueP,
    int aCopyFlag) {
    
    if (isSet.Interfaces) {
      delete [] m_Interfaces;
    }
    
    if (aCopyFlag && aValueP) {
      char* valueP = new char[strlen(aValueP) + 1];
      strcpy(valueP,aValueP);
      m_Interfaces = valueP;
    } else {
      m_Interfaces = aValueP;
    }
    
    isSet.Interfaces = 1;

  }       

  //----------------------------------------------------------------------------
  const char*
  Linux_SambaGlobalOptionsInstance::getInterfaces() const {
    
    if ( ! isSet.Interfaces) {
   	  throw CmpiErrorFormater::getErrorException(
   	    CmpiErrorFormater::NOT_SET,
        "Interfaces",
        "Linux_SambaGlobalOptions");
   	}


    return m_Interfaces;

  }
       
  //----------------------------------------------------------------------------
  // NetbiosAlias related methods
  //----------------------------------------------------------------------------
  unsigned int
  Linux_SambaGlobalOptionsInstance::isNetbiosAliasSet() const {
    return isSet.NetbiosAlias;
  }

  //----------------------------------------------------------------------------
  void
  Linux_SambaGlobalOptionsInstance::setNetbiosAlias(
    const char* aValueP,
    int aCopyFlag) {
    
    if (isSet.NetbiosAlias) {
      delete [] m_NetbiosAlias;
    }
    
    if (aCopyFlag && aValueP) {
      char* valueP = new char[strlen(aValueP) + 1];
      strcpy(valueP,aValueP);
      m_NetbiosAlias = valueP;
    } else {
      m_NetbiosAlias = aValueP;
    }
    
    isSet.NetbiosAlias = 1;

  }       

  //----------------------------------------------------------------------------
  const char*
  Linux_SambaGlobalOptionsInstance::getNetbiosAlias() const {
    
    if ( ! isSet.NetbiosAlias) {
   	  throw CmpiErrorFormater::getErrorException(
   	    CmpiErrorFormater::NOT_SET,
        "NetbiosAlias",
        "Linux_SambaGlobalOptions");
   	}


    return m_NetbiosAlias;

  }
       
  //----------------------------------------------------------------------------
  // NetbiosName related methods
  //----------------------------------------------------------------------------
  unsigned int
  Linux_SambaGlobalOptionsInstance::isNetbiosNameSet() const {
    return isSet.NetbiosName;
  }

  //----------------------------------------------------------------------------
  void
  Linux_SambaGlobalOptionsInstance::setNetbiosName(
    const char* aValueP,
    int aCopyFlag) {
    
    if (isSet.NetbiosName) {
      delete [] m_NetbiosName;
    }
    
    if (aCopyFlag && aValueP) {
      char* valueP = new char[strlen(aValueP) + 1];
      strcpy(valueP,aValueP);
      m_NetbiosName = valueP;
    } else {
      m_NetbiosName = aValueP;
    }
    
    isSet.NetbiosName = 1;

  }       

  //----------------------------------------------------------------------------
  const char*
  Linux_SambaGlobalOptionsInstance::getNetbiosName() const {
    
    if ( ! isSet.NetbiosName) {
   	  throw CmpiErrorFormater::getErrorException(
   	    CmpiErrorFormater::NOT_SET,
        "NetbiosName",
        "Linux_SambaGlobalOptions");
   	}


    return m_NetbiosName;

  }
       
  //----------------------------------------------------------------------------
  // Printable related methods
  //----------------------------------------------------------------------------
  unsigned int
  Linux_SambaGlobalOptionsInstance::isPrintableSet() const {
    return isSet.Printable;
  }

  //----------------------------------------------------------------------------
  void Linux_SambaGlobalOptionsInstance::setPrintable(
    const CMPIBoolean aValue) {
  
    m_Printable = aValue;
    isSet.Printable = 1;
  
  }       

  //----------------------------------------------------------------------------
  const CMPIBoolean
  Linux_SambaGlobalOptionsInstance::getPrintable() const {
    
    if ( ! isSet.Printable) {
   	  throw CmpiErrorFormater::getErrorException(
   	    CmpiErrorFormater::NOT_SET,
        "Printable",
        "Linux_SambaGlobalOptions");
   	}


    return m_Printable;

  }
       
  //----------------------------------------------------------------------------
  // ServerString related methods
  //----------------------------------------------------------------------------
  unsigned int
  Linux_SambaGlobalOptionsInstance::isServerStringSet() const {
    return isSet.ServerString;
  }

  //----------------------------------------------------------------------------
  void
  Linux_SambaGlobalOptionsInstance::setServerString(
    const char* aValueP,
    int aCopyFlag) {
    
    if (isSet.ServerString) {
      delete [] m_ServerString;
    }
    
    if (aCopyFlag && aValueP) {
      char* valueP = new char[strlen(aValueP) + 1];
      strcpy(valueP,aValueP);
      m_ServerString = valueP;
    } else {
      m_ServerString = aValueP;
    }
    
    isSet.ServerString = 1;

  }       

  //----------------------------------------------------------------------------
  const char*
  Linux_SambaGlobalOptionsInstance::getServerString() const {
    
    if ( ! isSet.ServerString) {
   	  throw CmpiErrorFormater::getErrorException(
   	    CmpiErrorFormater::NOT_SET,
        "ServerString",
        "Linux_SambaGlobalOptions");
   	}


    return m_ServerString;

  }
       
  //----------------------------------------------------------------------------
  // Workgroup related methods
  //----------------------------------------------------------------------------
  unsigned int
  Linux_SambaGlobalOptionsInstance::isWorkgroupSet() const {
    return isSet.Workgroup;
  }

  //----------------------------------------------------------------------------
  void
  Linux_SambaGlobalOptionsInstance::setWorkgroup(
    const char* aValueP,
    int aCopyFlag) {
    
    if (isSet.Workgroup) {
      delete [] m_Workgroup;
    }
    
    if (aCopyFlag && aValueP) {
      char* valueP = new char[strlen(aValueP) + 1];
      strcpy(valueP,aValueP);
      m_Workgroup = valueP;
    } else {
      m_Workgroup = aValueP;
    }
    
    isSet.Workgroup = 1;

  }       

  //----------------------------------------------------------------------------
  const char*
  Linux_SambaGlobalOptionsInstance::getWorkgroup() const {
    
    if ( ! isSet.Workgroup) {
   	  throw CmpiErrorFormater::getErrorException(
   	    CmpiErrorFormater::NOT_SET,
        "Workgroup",
        "Linux_SambaGlobalOptions");
   	}


    return m_Workgroup;

  }

  
  //----------------------------------------------------------------------------
  //set isSet attributes to FALSE
  //----------------------------------------------------------------------------
  void
  Linux_SambaGlobalOptionsInstance::init() {
   	isSet.instanceName = 0;
    isSet.BindInterfacesOnly = 0;
    isSet.Caption = 0;
    isSet.Description = 0;
    isSet.ElementName = 0;
    isSet.Interfaces = 0;
    isSet.NetbiosAlias = 0;
    isSet.NetbiosName = 0;
    isSet.Printable = 0;
    isSet.ServerString = 0;
    isSet.Workgroup = 0;
  	
  }
  
  //----------------------------------------------------------------------------
  //copies another instance properties in this
  //----------------------------------------------------------------------------
  void 
  Linux_SambaGlobalOptionsInstance::init(
    const Linux_SambaGlobalOptionsInstance& anOriginal) {   	

   	init();
   	   	
    if(anOriginal.isInstanceNameSet()) {
      setInstanceName(anOriginal.getInstanceName());
    }
       	
    if (anOriginal.isBindInterfacesOnlySet()) {
      const CMPIBoolean BindInterfacesOnlyOriginal = anOriginal.getBindInterfacesOnly();
      setBindInterfacesOnly(BindInterfacesOnlyOriginal);
    }
   	
    if (anOriginal.isCaptionSet()) {
      const char* CaptionOriginal = anOriginal.getCaption();
      setCaption(CaptionOriginal,1);
    }
   	
    if (anOriginal.isDescriptionSet()) {
      const char* DescriptionOriginal = anOriginal.getDescription();
      setDescription(DescriptionOriginal,1);
    }
   	
    if (anOriginal.isElementNameSet()) {
      const char* ElementNameOriginal = anOriginal.getElementName();
      setElementName(ElementNameOriginal,1);
    }
   	
    if (anOriginal.isInterfacesSet()) {
      const char* InterfacesOriginal = anOriginal.getInterfaces();
      setInterfaces(InterfacesOriginal,1);
    }
   	
    if (anOriginal.isNetbiosAliasSet()) {
      const char* NetbiosAliasOriginal = anOriginal.getNetbiosAlias();
      setNetbiosAlias(NetbiosAliasOriginal,1);
    }
   	
    if (anOriginal.isNetbiosNameSet()) {
      const char* NetbiosNameOriginal = anOriginal.getNetbiosName();
      setNetbiosName(NetbiosNameOriginal,1);
    }
   	
    if (anOriginal.isPrintableSet()) {
      const CMPIBoolean PrintableOriginal = anOriginal.getPrintable();
      setPrintable(PrintableOriginal);
    }
   	
    if (anOriginal.isServerStringSet()) {
      const char* ServerStringOriginal = anOriginal.getServerString();
      setServerString(ServerStringOriginal,1);
    }
   	
    if (anOriginal.isWorkgroupSet()) {
      const char* WorkgroupOriginal = anOriginal.getWorkgroup();
      setWorkgroup(WorkgroupOriginal,1);
    }
    
  }
  
  //----------------------------------------------------------------------------
  //reset the instance data
  //----------------------------------------------------------------------------
  void
  Linux_SambaGlobalOptionsInstance::reset() {
   	
  	if (isSet.Caption) {
  	  delete(m_Caption);
  	}

  	if (isSet.Description) {
  	  delete(m_Description);
  	}

  	if (isSet.ElementName) {
  	  delete(m_ElementName);
  	}

  	if (isSet.Interfaces) {
  	  delete(m_Interfaces);
  	}

  	if (isSet.NetbiosAlias) {
  	  delete(m_NetbiosAlias);
  	}

  	if (isSet.NetbiosName) {
  	  delete(m_NetbiosName);
  	}

  	if (isSet.ServerString) {
  	  delete(m_ServerString);
  	}

  	if (isSet.Workgroup) {
  	  delete(m_Workgroup);
  	}

  }
  
  //----------------------------------------------------------------------------
  //Linux_SambaGlobalOptionsInstanceEnumerationElement	
  //----------------------------------------------------------------------------
  Linux_SambaGlobalOptionsInstanceEnumerationElement::Linux_SambaGlobalOptionsInstanceEnumerationElement() {
   	
  	m_elementP = 0;
  	m_nextP = 0;
  	  
  }
  
  //----------------------------------------------------------------------------
  Linux_SambaGlobalOptionsInstanceEnumerationElement::~Linux_SambaGlobalOptionsInstanceEnumerationElement() {
   	
  	if (m_elementP) {
  	  delete(m_elementP);
  	}
  	
  	if (m_nextP) {
  	  delete(m_nextP);
  	}
  	  
  }

  //----------------------------------------------------------------------------
  //Linux_SambaGlobalOptionsInstanceNameEnumeration
  //----------------------------------------------------------------------------
  Linux_SambaGlobalOptionsInstanceEnumeration::Linux_SambaGlobalOptionsInstanceEnumeration() {
   	
    m_firstElementP = 0;
    m_currentElementP = 0;
    m_endElementP = 0;
  
  }
  
  //----------------------------------------------------------------------------
  Linux_SambaGlobalOptionsInstanceEnumeration::Linux_SambaGlobalOptionsInstanceEnumeration(
    const Linux_SambaGlobalOptionsInstanceEnumeration& anInstanceEnumeration) {
   	
    m_firstElementP = 0;
    m_currentElementP = 0;
    m_endElementP = 0;
  	 
    int size = anInstanceEnumeration.getSize();
    for (int x=0; x < size;++x) {
      addElement(anInstanceEnumeration.getElement(x));
    }           

  }
  
  //----------------------------------------------------------------------------
  Linux_SambaGlobalOptionsInstanceEnumeration::~Linux_SambaGlobalOptionsInstanceEnumeration() {
   	
  	if (m_firstElementP) {
  	  delete(m_firstElementP);
  	}
  	  	
  }
  
  //----------------------------------------------------------------------------
  void
  Linux_SambaGlobalOptionsInstanceEnumeration::reset() {
  	
  	m_currentElementP = m_firstElementP;
  	
  }
  	  
  //----------------------------------------------------------------------------
  bool
  Linux_SambaGlobalOptionsInstanceEnumeration::hasNext() const {
  	
  	return (m_currentElementP != 0);
  
  }
  
  //----------------------------------------------------------------------------
  int
  Linux_SambaGlobalOptionsInstanceEnumeration::getSize() const {
  	
    int size = 0;
    Linux_SambaGlobalOptionsInstanceEnumerationElement* followingP = m_firstElementP;
  	
  	while (followingP) {
      followingP = followingP->m_nextP;
      ++size;
    }
  	
    return size;
    
  }
  
  //----------------------------------------------------------------------------
  const Linux_SambaGlobalOptionsInstance&  
  Linux_SambaGlobalOptionsInstanceEnumeration::getElement(int anIndex) const {
   
    Linux_SambaGlobalOptionsInstanceEnumerationElement* followingP = m_firstElementP;
   
    int x = 0;
    while (followingP && (x < anIndex)) {
      followingP = followingP->m_nextP;
      ++x;
    }
    
    return *(followingP->m_elementP);

  }
  
  //----------------------------------------------------------------------------
  const Linux_SambaGlobalOptionsInstance&
  Linux_SambaGlobalOptionsInstanceEnumeration::getNext() {
   	
    Linux_SambaGlobalOptionsInstanceEnumerationElement* currentElementP =
  	  m_currentElementP;

    m_currentElementP = m_currentElementP->m_nextP;
  	 
    return *(currentElementP->m_elementP);

  }
  	  
  //----------------------------------------------------------------------------
  void
  Linux_SambaGlobalOptionsInstanceEnumeration::addElement(
    const Linux_SambaGlobalOptionsInstance& anInstance) {
   	
  	if (m_firstElementP == 0) {
  	  m_firstElementP = new Linux_SambaGlobalOptionsInstanceEnumerationElement();
  	  m_firstElementP->m_elementP = new Linux_SambaGlobalOptionsInstance(anInstance);
  	  m_endElementP = m_firstElementP;
  	  m_currentElementP = m_firstElementP;
  	} else {
  	  m_endElementP->m_nextP = new Linux_SambaGlobalOptionsInstanceEnumerationElement();
  	  m_endElementP = m_endElementP->m_nextP;
  	  m_endElementP->m_elementP = new Linux_SambaGlobalOptionsInstance(anInstance);
  	}

  }
  
}
