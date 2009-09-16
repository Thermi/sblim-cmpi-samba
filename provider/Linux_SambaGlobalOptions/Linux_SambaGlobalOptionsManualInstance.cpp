// =======================================================================
// Linux_SambaGlobalOptionsManualInstance.cpp
//     created on Fri, 23 Jun 2006 using ECUTE 2.2.1
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
#include "Linux_SambaGlobalOptionsManualInstance.h"
#include "CmpiData.h"
#include "CmpiString.h"
#include "CmpiArray.h"
#include <string>

namespace genProvider {

  //****************************************************************************
  //Linux_SambaGlobalOptionsManualInstance
  //----------------------------------------------------------------------------
  //empty constructor
  Linux_SambaGlobalOptionsManualInstance::Linux_SambaGlobalOptionsManualInstance() {   	
   	init();  	   	
  }
  
  //----------------------------------------------------------------------------
  //copy constructor	
  //----------------------------------------------------------------------------
  Linux_SambaGlobalOptionsManualInstance::Linux_SambaGlobalOptionsManualInstance(
    const Linux_SambaGlobalOptionsManualInstance& anInstance) {   	
   	init(anInstance);  	   	
  }
  
  //----------------------------------------------------------------------------
  //constructor using CmpiInstance
  //----------------------------------------------------------------------------
  Linux_SambaGlobalOptionsManualInstance::Linux_SambaGlobalOptionsManualInstance(
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
  Linux_SambaGlobalOptionsManualInstance::
   ~Linux_SambaGlobalOptionsManualInstance(){
   	reset();  	  
  }
  
  
  //----------------------------------------------------------------------------
  //copy operator
  //----------------------------------------------------------------------------
  Linux_SambaGlobalOptionsManualInstance&
  Linux_SambaGlobalOptionsManualInstance::operator=(
    const Linux_SambaGlobalOptionsManualInstance& anInstance) {   	
   	
   	init(anInstance);
   	return *this;
  
  }
  
  
  //----------------------------------------------------------------------------
  //converts to CmpiInstance
  //----------------------------------------------------------------------------
  CmpiInstance
  Linux_SambaGlobalOptionsManualInstance::getCmpiInstance(
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
  Linux_SambaGlobalOptionsManualInstance::isInstanceNameSet() const {
  	return isSet.instanceName;
  }
  
  //----------------------------------------------------------------------------
  const Linux_SambaGlobalOptionsInstanceName&
  Linux_SambaGlobalOptionsManualInstance::getInstanceName() const {

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
  Linux_SambaGlobalOptionsManualInstance::setInstanceName(
    const Linux_SambaGlobalOptionsInstanceName& val) {

    m_instanceName = val;
    isSet.instanceName = 1;

  }
       
  //----------------------------------------------------------------------------
  // BindInterfacesOnly related methods
  //----------------------------------------------------------------------------
  unsigned int
  Linux_SambaGlobalOptionsManualInstance::isBindInterfacesOnlySet() const {
    return isSet.BindInterfacesOnly;
  }

  //----------------------------------------------------------------------------
  void Linux_SambaGlobalOptionsManualInstance::setBindInterfacesOnly(
    const CMPIBoolean aValue) {
  
    m_BindInterfacesOnly = aValue;
    isSet.BindInterfacesOnly = 1;
  
  }       

  //----------------------------------------------------------------------------
  const CMPIBoolean
  Linux_SambaGlobalOptionsManualInstance::getBindInterfacesOnly() const {
    
    if ( ! isSet.BindInterfacesOnly) {
   	  throw CmpiErrorFormater::getErrorException(
   	    CmpiErrorFormater::NOT_SET,
        "BindInterfacesOnly",
        "Linux_SambaGlobalOptions");
   	}


    return m_BindInterfacesOnly;

  }
       
  //----------------------------------------------------------------------------
  // Interfaces related methods
  //----------------------------------------------------------------------------
  unsigned int
  Linux_SambaGlobalOptionsManualInstance::isInterfacesSet() const {
    return isSet.Interfaces;
  }

  //----------------------------------------------------------------------------
  void
  Linux_SambaGlobalOptionsManualInstance::setInterfaces(
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
  Linux_SambaGlobalOptionsManualInstance::getInterfaces() const {
    
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
  Linux_SambaGlobalOptionsManualInstance::isNetbiosAliasSet() const {
    return isSet.NetbiosAlias;
  }

  //----------------------------------------------------------------------------
  void
  Linux_SambaGlobalOptionsManualInstance::setNetbiosAlias(
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
  Linux_SambaGlobalOptionsManualInstance::getNetbiosAlias() const {
    
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
  Linux_SambaGlobalOptionsManualInstance::isNetbiosNameSet() const {
    return isSet.NetbiosName;
  }

  //----------------------------------------------------------------------------
  void
  Linux_SambaGlobalOptionsManualInstance::setNetbiosName(
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
  Linux_SambaGlobalOptionsManualInstance::getNetbiosName() const {
    
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
  Linux_SambaGlobalOptionsManualInstance::isPrintableSet() const {
    return isSet.Printable;
  }

  //----------------------------------------------------------------------------
  void Linux_SambaGlobalOptionsManualInstance::setPrintable(
    const CMPIBoolean aValue) {
  
    m_Printable = aValue;
    isSet.Printable = 1;
  
  }       

  //----------------------------------------------------------------------------
  const CMPIBoolean
  Linux_SambaGlobalOptionsManualInstance::getPrintable() const {
    
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
  Linux_SambaGlobalOptionsManualInstance::isServerStringSet() const {
    return isSet.ServerString;
  }

  //----------------------------------------------------------------------------
  void
  Linux_SambaGlobalOptionsManualInstance::setServerString(
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
  Linux_SambaGlobalOptionsManualInstance::getServerString() const {
    
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
  Linux_SambaGlobalOptionsManualInstance::isWorkgroupSet() const {
    return isSet.Workgroup;
  }

  //----------------------------------------------------------------------------
  void
  Linux_SambaGlobalOptionsManualInstance::setWorkgroup(
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
  Linux_SambaGlobalOptionsManualInstance::getWorkgroup() const {
    
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
  Linux_SambaGlobalOptionsManualInstance::init() {
   	isSet.instanceName = 0;
    isSet.BindInterfacesOnly = 0;
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
  Linux_SambaGlobalOptionsManualInstance::init(
    const Linux_SambaGlobalOptionsManualInstance& anOriginal) {   	

   	init();
   	   	
    if(anOriginal.isInstanceNameSet()) {
      setInstanceName(anOriginal.getInstanceName());
    }
       	
    if (anOriginal.isBindInterfacesOnlySet()) {
      const CMPIBoolean BindInterfacesOnlyOriginal = anOriginal.getBindInterfacesOnly();
      setBindInterfacesOnly(BindInterfacesOnlyOriginal);
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
  Linux_SambaGlobalOptionsManualInstance::reset() {
   	
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
  //Linux_SambaGlobalOptionsManualInstanceEnumerationElement	
  //----------------------------------------------------------------------------
  Linux_SambaGlobalOptionsManualInstanceEnumerationElement::Linux_SambaGlobalOptionsManualInstanceEnumerationElement() {
   	
  	m_elementP = 0;
  	m_nextP = 0;
  	  
  }
  
  //----------------------------------------------------------------------------
  Linux_SambaGlobalOptionsManualInstanceEnumerationElement::~Linux_SambaGlobalOptionsManualInstanceEnumerationElement() {
   	
  	if (m_elementP) {
  	  delete(m_elementP);
  	}
  	
  	if (m_nextP) {
  	  delete(m_nextP);
  	}
  	  
  }

  //----------------------------------------------------------------------------
  //Linux_SambaGlobalOptionsManualInstanceNameEnumeration
  //----------------------------------------------------------------------------
  Linux_SambaGlobalOptionsManualInstanceEnumeration::Linux_SambaGlobalOptionsManualInstanceEnumeration() {
   	
    m_firstElementP = 0;
    m_currentElementP = 0;
    m_endElementP = 0;
  
  }
  
  //----------------------------------------------------------------------------
  Linux_SambaGlobalOptionsManualInstanceEnumeration::Linux_SambaGlobalOptionsManualInstanceEnumeration(
    const Linux_SambaGlobalOptionsManualInstanceEnumeration& anInstanceEnumeration) {
   	
    m_firstElementP = 0;
    m_currentElementP = 0;
    m_endElementP = 0;
  	 
    int size = anInstanceEnumeration.getSize();
    for (int x=0; x < size;++x) {
      addElement(anInstanceEnumeration.getElement(x));
    }           

  }
  
  //----------------------------------------------------------------------------
  Linux_SambaGlobalOptionsManualInstanceEnumeration::~Linux_SambaGlobalOptionsManualInstanceEnumeration() {
   	
  	if (m_firstElementP) {
  	  delete(m_firstElementP);
  	}
  	  	
  }
  
  //----------------------------------------------------------------------------
  void
  Linux_SambaGlobalOptionsManualInstanceEnumeration::reset() {
  	
  	m_currentElementP = m_firstElementP;
  	
  }
  	  
  //----------------------------------------------------------------------------
  bool
  Linux_SambaGlobalOptionsManualInstanceEnumeration::hasNext() const {
  	
  	return (m_currentElementP != 0);
  
  }
  
  //----------------------------------------------------------------------------
  int
  Linux_SambaGlobalOptionsManualInstanceEnumeration::getSize() const {
  	
    int size = 0;
    Linux_SambaGlobalOptionsManualInstanceEnumerationElement* followingP = m_firstElementP;
  	
  	while (followingP) {
      followingP = followingP->m_nextP;
      ++size;
    }
  	
    return size;
    
  }
  
  //----------------------------------------------------------------------------
  const Linux_SambaGlobalOptionsManualInstance&  
  Linux_SambaGlobalOptionsManualInstanceEnumeration::getElement(int anIndex) const {
   
    Linux_SambaGlobalOptionsManualInstanceEnumerationElement* followingP = m_firstElementP;
   
    int x = 0;
    while (followingP && (x < anIndex)) {
      followingP = followingP->m_nextP;
      ++x;
    }
    
    return *(followingP->m_elementP);

  }
  
  //----------------------------------------------------------------------------
  const Linux_SambaGlobalOptionsManualInstance&
  Linux_SambaGlobalOptionsManualInstanceEnumeration::getNext() {
   	
    Linux_SambaGlobalOptionsManualInstanceEnumerationElement* currentElementP =
  	  m_currentElementP;

    m_currentElementP = m_currentElementP->m_nextP;
  	 
    return *(currentElementP->m_elementP);

  }
  	  
  //----------------------------------------------------------------------------
  void
  Linux_SambaGlobalOptionsManualInstanceEnumeration::addElement(
    const Linux_SambaGlobalOptionsManualInstance& anInstance) {
   	
  	if (m_firstElementP == 0) {
  	  m_firstElementP = new Linux_SambaGlobalOptionsManualInstanceEnumerationElement();
  	  m_firstElementP->m_elementP = new Linux_SambaGlobalOptionsManualInstance(anInstance);
  	  m_endElementP = m_firstElementP;
  	  m_currentElementP = m_firstElementP;
  	} else {
  	  m_endElementP->m_nextP = new Linux_SambaGlobalOptionsManualInstanceEnumerationElement();
  	  m_endElementP = m_endElementP->m_nextP;
  	  m_endElementP->m_elementP = new Linux_SambaGlobalOptionsManualInstance(anInstance);
  	}

  }
  
}
