// =======================================================================
// Linux_SambaPrinterPrintingOptionsManualInstance.cpp
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
#include "Linux_SambaPrinterPrintingOptionsManualInstance.h"
#include "CmpiData.h"
#include "CmpiString.h"
#include "CmpiArray.h"
#include <string>

namespace genProvider {

  //****************************************************************************
  //Linux_SambaPrinterPrintingOptionsManualInstance
  //----------------------------------------------------------------------------
  //empty constructor
  Linux_SambaPrinterPrintingOptionsManualInstance::Linux_SambaPrinterPrintingOptionsManualInstance() {   	
   	init();  	   	
  }
  
  //----------------------------------------------------------------------------
  //copy constructor	
  //----------------------------------------------------------------------------
  Linux_SambaPrinterPrintingOptionsManualInstance::Linux_SambaPrinterPrintingOptionsManualInstance(
    const Linux_SambaPrinterPrintingOptionsManualInstance& anInstance) {   	
   	init(anInstance);  	   	
  }
  
  //----------------------------------------------------------------------------
  //constructor using CmpiInstance
  //----------------------------------------------------------------------------
  Linux_SambaPrinterPrintingOptionsManualInstance::Linux_SambaPrinterPrintingOptionsManualInstance(
    const CmpiInstance& aCmpiInstance,
    const char* anInstanceNamespaceP) {

    CmpiData cmpiData;

    init(); 
    
    CmpiObjectPath cop = aCmpiInstance.getObjectPath();
    cop.setNameSpace(anInstanceNamespaceP);
    setInstanceName(Linux_SambaPrinterPrintingOptionsInstanceName(cop));

    cmpiData = aCmpiInstance.getProperty("CupsOptions");
    if ( ! cmpiData.isNullValue()){
      CmpiString CupsOptions = cmpiData;
      setCupsOptions(CupsOptions.charPtr());
    }

    cmpiData = aCmpiInstance.getProperty("DefaultDevMode");
    if ( ! cmpiData.isNullValue()){
      CMPIBoolean DefaultDevMode = cmpiData;
      setDefaultDevMode(DefaultDevMode);
    }

    cmpiData = aCmpiInstance.getProperty("MaxPrintjobs");
    if ( ! cmpiData.isNullValue()){
      CMPIUint64 MaxPrintjobs = cmpiData;
      setMaxPrintjobs(MaxPrintjobs);
    }

    cmpiData = aCmpiInstance.getProperty("MaxReportedPrintjobs");
    if ( ! cmpiData.isNullValue()){
      CMPIUint64 MaxReportedPrintjobs = cmpiData;
      setMaxReportedPrintjobs(MaxReportedPrintjobs);
    }

    cmpiData = aCmpiInstance.getProperty("PrintCommand");
    if ( ! cmpiData.isNullValue()){
      CmpiString PrintCommand = cmpiData;
      setPrintCommand(PrintCommand.charPtr());
    }

    cmpiData = aCmpiInstance.getProperty("UseClientDriver");
    if ( ! cmpiData.isNullValue()){
      CMPIBoolean UseClientDriver = cmpiData;
      setUseClientDriver(UseClientDriver);
    }

    
  }
  
  //----------------------------------------------------------------------------
  //Destructor
  //----------------------------------------------------------------------------
  Linux_SambaPrinterPrintingOptionsManualInstance::
   ~Linux_SambaPrinterPrintingOptionsManualInstance(){
   	reset();  	  
  }
  
  
  //----------------------------------------------------------------------------
  //copy operator
  //----------------------------------------------------------------------------
  Linux_SambaPrinterPrintingOptionsManualInstance&
  Linux_SambaPrinterPrintingOptionsManualInstance::operator=(
    const Linux_SambaPrinterPrintingOptionsManualInstance& anInstance) {   	
   	
   	init(anInstance);
   	return *this;
  
  }
  
  
  //----------------------------------------------------------------------------
  //converts to CmpiInstance
  //----------------------------------------------------------------------------
  CmpiInstance
  Linux_SambaPrinterPrintingOptionsManualInstance::getCmpiInstance(
    const char** aPropertiesPP) const {
   	
   	CmpiObjectPath objectPath=getInstanceName().getObjectPath();      
    CmpiInstance cmpiInstance(objectPath);    
    getInstanceName().fillKeys(cmpiInstance);
    
    if (aPropertiesPP) {
	    cmpiInstance.setPropertyFilter(aPropertiesPP,0);
    }

  	if (isSet.CupsOptions) {
  	  
  	  cmpiInstance.setProperty(
  	    "CupsOptions",
  	    CmpiData(m_CupsOptions));
  	}

  	if (isSet.DefaultDevMode) {
  	  
  	  cmpiInstance.setProperty(
  	    "DefaultDevMode",
  	    CmpiBooleanData(m_DefaultDevMode));
  	}

  	if (isSet.MaxPrintjobs) {
  	  
  	  cmpiInstance.setProperty(
  	    "MaxPrintjobs",
  	    CmpiData(m_MaxPrintjobs));
  	}

  	if (isSet.MaxReportedPrintjobs) {
  	  
  	  cmpiInstance.setProperty(
  	    "MaxReportedPrintjobs",
  	    CmpiData(m_MaxReportedPrintjobs));
  	}

  	if (isSet.PrintCommand) {
  	  
  	  cmpiInstance.setProperty(
  	    "PrintCommand",
  	    CmpiData(m_PrintCommand));
  	}

  	if (isSet.UseClientDriver) {
  	  
  	  cmpiInstance.setProperty(
  	    "UseClientDriver",
  	    CmpiBooleanData(m_UseClientDriver));
  	}

  	
  	return cmpiInstance;
  	
  }
  
  //----------------------------------------------------------------------------
  // InstanceName related methods
  //----------------------------------------------------------------------------
  unsigned int 
  Linux_SambaPrinterPrintingOptionsManualInstance::isInstanceNameSet() const {
  	return isSet.instanceName;
  }
  
  //----------------------------------------------------------------------------
  const Linux_SambaPrinterPrintingOptionsInstanceName&
  Linux_SambaPrinterPrintingOptionsManualInstance::getInstanceName() const {

    if( ! isSet.instanceName) {
   	  throw CmpiErrorFormater::getErrorException(
        CmpiErrorFormater::NOT_SET,
        "InstanceName (CIM Key Attributes)",
        "Linux_SambaPrinterPrintingOptions");
   	}
  		
   	return m_instanceName;
  
  }

  //----------------------------------------------------------------------------
  void
  Linux_SambaPrinterPrintingOptionsManualInstance::setInstanceName(
    const Linux_SambaPrinterPrintingOptionsInstanceName& val) {

    m_instanceName = val;
    isSet.instanceName = 1;

  }
       
  //----------------------------------------------------------------------------
  // CupsOptions related methods
  //----------------------------------------------------------------------------
  unsigned int
  Linux_SambaPrinterPrintingOptionsManualInstance::isCupsOptionsSet() const {
    return isSet.CupsOptions;
  }

  //----------------------------------------------------------------------------
  void
  Linux_SambaPrinterPrintingOptionsManualInstance::setCupsOptions(
    const char* aValueP,
    int aCopyFlag) {
    
    if (isSet.CupsOptions) {
      delete [] m_CupsOptions;
    }
    
    if (aCopyFlag && aValueP) {
      char* valueP = new char[strlen(aValueP) + 1];
      strcpy(valueP,aValueP);
      m_CupsOptions = valueP;
    } else {
      m_CupsOptions = aValueP;
    }
    
    isSet.CupsOptions = 1;

  }       

  //----------------------------------------------------------------------------
  const char*
  Linux_SambaPrinterPrintingOptionsManualInstance::getCupsOptions() const {
    
    if ( ! isSet.CupsOptions) {
   	  throw CmpiErrorFormater::getErrorException(
   	    CmpiErrorFormater::NOT_SET,
        "CupsOptions",
        "Linux_SambaPrinterPrintingOptions");
   	}


    return m_CupsOptions;

  }
       
  //----------------------------------------------------------------------------
  // DefaultDevMode related methods
  //----------------------------------------------------------------------------
  unsigned int
  Linux_SambaPrinterPrintingOptionsManualInstance::isDefaultDevModeSet() const {
    return isSet.DefaultDevMode;
  }

  //----------------------------------------------------------------------------
  void Linux_SambaPrinterPrintingOptionsManualInstance::setDefaultDevMode(
    const CMPIBoolean aValue) {
  
    m_DefaultDevMode = aValue;
    isSet.DefaultDevMode = 1;
  
  }       

  //----------------------------------------------------------------------------
  const CMPIBoolean
  Linux_SambaPrinterPrintingOptionsManualInstance::getDefaultDevMode() const {
    
    if ( ! isSet.DefaultDevMode) {
   	  throw CmpiErrorFormater::getErrorException(
   	    CmpiErrorFormater::NOT_SET,
        "DefaultDevMode",
        "Linux_SambaPrinterPrintingOptions");
   	}


    return m_DefaultDevMode;

  }
       
  //----------------------------------------------------------------------------
  // MaxPrintjobs related methods
  //----------------------------------------------------------------------------
  unsigned int
  Linux_SambaPrinterPrintingOptionsManualInstance::isMaxPrintjobsSet() const {
    return isSet.MaxPrintjobs;
  }

  //----------------------------------------------------------------------------
  void Linux_SambaPrinterPrintingOptionsManualInstance::setMaxPrintjobs(
    const CMPIUint64 aValue) {
  
    m_MaxPrintjobs = aValue;
    isSet.MaxPrintjobs = 1;
  
  }       

  //----------------------------------------------------------------------------
  const CMPIUint64
  Linux_SambaPrinterPrintingOptionsManualInstance::getMaxPrintjobs() const {
    
    if ( ! isSet.MaxPrintjobs) {
   	  throw CmpiErrorFormater::getErrorException(
   	    CmpiErrorFormater::NOT_SET,
        "MaxPrintjobs",
        "Linux_SambaPrinterPrintingOptions");
   	}


    return m_MaxPrintjobs;

  }
       
  //----------------------------------------------------------------------------
  // MaxReportedPrintjobs related methods
  //----------------------------------------------------------------------------
  unsigned int
  Linux_SambaPrinterPrintingOptionsManualInstance::isMaxReportedPrintjobsSet() const {
    return isSet.MaxReportedPrintjobs;
  }

  //----------------------------------------------------------------------------
  void Linux_SambaPrinterPrintingOptionsManualInstance::setMaxReportedPrintjobs(
    const CMPIUint64 aValue) {
  
    m_MaxReportedPrintjobs = aValue;
    isSet.MaxReportedPrintjobs = 1;
  
  }       

  //----------------------------------------------------------------------------
  const CMPIUint64
  Linux_SambaPrinterPrintingOptionsManualInstance::getMaxReportedPrintjobs() const {
    
    if ( ! isSet.MaxReportedPrintjobs) {
   	  throw CmpiErrorFormater::getErrorException(
   	    CmpiErrorFormater::NOT_SET,
        "MaxReportedPrintjobs",
        "Linux_SambaPrinterPrintingOptions");
   	}


    return m_MaxReportedPrintjobs;

  }
       
  //----------------------------------------------------------------------------
  // PrintCommand related methods
  //----------------------------------------------------------------------------
  unsigned int
  Linux_SambaPrinterPrintingOptionsManualInstance::isPrintCommandSet() const {
    return isSet.PrintCommand;
  }

  //----------------------------------------------------------------------------
  void
  Linux_SambaPrinterPrintingOptionsManualInstance::setPrintCommand(
    const char* aValueP,
    int aCopyFlag) {
    
    if (isSet.PrintCommand) {
      delete [] m_PrintCommand;
    }
    
    if (aCopyFlag && aValueP) {
      char* valueP = new char[strlen(aValueP) + 1];
      strcpy(valueP,aValueP);
      m_PrintCommand = valueP;
    } else {
      m_PrintCommand = aValueP;
    }
    
    isSet.PrintCommand = 1;

  }       

  //----------------------------------------------------------------------------
  const char*
  Linux_SambaPrinterPrintingOptionsManualInstance::getPrintCommand() const {
    
    if ( ! isSet.PrintCommand) {
   	  throw CmpiErrorFormater::getErrorException(
   	    CmpiErrorFormater::NOT_SET,
        "PrintCommand",
        "Linux_SambaPrinterPrintingOptions");
   	}


    return m_PrintCommand;

  }
       
  //----------------------------------------------------------------------------
  // UseClientDriver related methods
  //----------------------------------------------------------------------------
  unsigned int
  Linux_SambaPrinterPrintingOptionsManualInstance::isUseClientDriverSet() const {
    return isSet.UseClientDriver;
  }

  //----------------------------------------------------------------------------
  void Linux_SambaPrinterPrintingOptionsManualInstance::setUseClientDriver(
    const CMPIBoolean aValue) {
  
    m_UseClientDriver = aValue;
    isSet.UseClientDriver = 1;
  
  }       

  //----------------------------------------------------------------------------
  const CMPIBoolean
  Linux_SambaPrinterPrintingOptionsManualInstance::getUseClientDriver() const {
    
    if ( ! isSet.UseClientDriver) {
   	  throw CmpiErrorFormater::getErrorException(
   	    CmpiErrorFormater::NOT_SET,
        "UseClientDriver",
        "Linux_SambaPrinterPrintingOptions");
   	}


    return m_UseClientDriver;

  }

  
  //----------------------------------------------------------------------------
  //set isSet attributes to FALSE
  //----------------------------------------------------------------------------
  void
  Linux_SambaPrinterPrintingOptionsManualInstance::init() {
   	isSet.instanceName = 0;
    isSet.CupsOptions = 0;
    isSet.DefaultDevMode = 0;
    isSet.MaxPrintjobs = 0;
    isSet.MaxReportedPrintjobs = 0;
    isSet.PrintCommand = 0;
    isSet.UseClientDriver = 0;
  	
  }
  
  //----------------------------------------------------------------------------
  //copies another instance properties in this
  //----------------------------------------------------------------------------
  void 
  Linux_SambaPrinterPrintingOptionsManualInstance::init(
    const Linux_SambaPrinterPrintingOptionsManualInstance& anOriginal) {   	

   	init();
   	   	
    if(anOriginal.isInstanceNameSet()) {
      setInstanceName(anOriginal.getInstanceName());
    }
       	
    if (anOriginal.isCupsOptionsSet()) {
      const char* CupsOptionsOriginal = anOriginal.getCupsOptions();
      setCupsOptions(CupsOptionsOriginal,1);
    }
   	
    if (anOriginal.isDefaultDevModeSet()) {
      const CMPIBoolean DefaultDevModeOriginal = anOriginal.getDefaultDevMode();
      setDefaultDevMode(DefaultDevModeOriginal);
    }
   	
    if (anOriginal.isMaxPrintjobsSet()) {
      const CMPIUint64 MaxPrintjobsOriginal = anOriginal.getMaxPrintjobs();
      setMaxPrintjobs(MaxPrintjobsOriginal);
    }
   	
    if (anOriginal.isMaxReportedPrintjobsSet()) {
      const CMPIUint64 MaxReportedPrintjobsOriginal = anOriginal.getMaxReportedPrintjobs();
      setMaxReportedPrintjobs(MaxReportedPrintjobsOriginal);
    }
   	
    if (anOriginal.isPrintCommandSet()) {
      const char* PrintCommandOriginal = anOriginal.getPrintCommand();
      setPrintCommand(PrintCommandOriginal,1);
    }
   	
    if (anOriginal.isUseClientDriverSet()) {
      const CMPIBoolean UseClientDriverOriginal = anOriginal.getUseClientDriver();
      setUseClientDriver(UseClientDriverOriginal);
    }
    
  }
  
  //----------------------------------------------------------------------------
  //reset the instance data
  //----------------------------------------------------------------------------
  void
  Linux_SambaPrinterPrintingOptionsManualInstance::reset() {
   	
  	if (isSet.CupsOptions) {
  	  delete(m_CupsOptions);
  	}

  	if (isSet.PrintCommand) {
  	  delete(m_PrintCommand);
  	}

  }
  
  //----------------------------------------------------------------------------
  //Linux_SambaPrinterPrintingOptionsManualInstanceEnumerationElement	
  //----------------------------------------------------------------------------
  Linux_SambaPrinterPrintingOptionsManualInstanceEnumerationElement::Linux_SambaPrinterPrintingOptionsManualInstanceEnumerationElement() {
   	
  	m_elementP = 0;
  	m_nextP = 0;
  	  
  }
  
  //----------------------------------------------------------------------------
  Linux_SambaPrinterPrintingOptionsManualInstanceEnumerationElement::~Linux_SambaPrinterPrintingOptionsManualInstanceEnumerationElement() {
   	
  	if (m_elementP) {
  	  delete(m_elementP);
  	}
  	
  	if (m_nextP) {
  	  delete(m_nextP);
  	}
  	  
  }

  //----------------------------------------------------------------------------
  //Linux_SambaPrinterPrintingOptionsManualInstanceNameEnumeration
  //----------------------------------------------------------------------------
  Linux_SambaPrinterPrintingOptionsManualInstanceEnumeration::Linux_SambaPrinterPrintingOptionsManualInstanceEnumeration() {
   	
    m_firstElementP = 0;
    m_currentElementP = 0;
    m_endElementP = 0;
  
  }
  
  //----------------------------------------------------------------------------
  Linux_SambaPrinterPrintingOptionsManualInstanceEnumeration::Linux_SambaPrinterPrintingOptionsManualInstanceEnumeration(
    const Linux_SambaPrinterPrintingOptionsManualInstanceEnumeration& anInstanceEnumeration) {
   	
    m_firstElementP = 0;
    m_currentElementP = 0;
    m_endElementP = 0;
  	 
    int size = anInstanceEnumeration.getSize();
    for (int x=0; x < size;++x) {
      addElement(anInstanceEnumeration.getElement(x));
    }           

  }
  
  //----------------------------------------------------------------------------
  Linux_SambaPrinterPrintingOptionsManualInstanceEnumeration::~Linux_SambaPrinterPrintingOptionsManualInstanceEnumeration() {
   	
  	if (m_firstElementP) {
  	  delete(m_firstElementP);
  	}
  	  	
  }
  
  //----------------------------------------------------------------------------
  void
  Linux_SambaPrinterPrintingOptionsManualInstanceEnumeration::reset() {
  	
  	m_currentElementP = m_firstElementP;
  	
  }
  	  
  //----------------------------------------------------------------------------
  bool
  Linux_SambaPrinterPrintingOptionsManualInstanceEnumeration::hasNext() const {
  	
  	return (m_currentElementP != 0);
  
  }
  
  //----------------------------------------------------------------------------
  int
  Linux_SambaPrinterPrintingOptionsManualInstanceEnumeration::getSize() const {
  	
    int size = 0;
    Linux_SambaPrinterPrintingOptionsManualInstanceEnumerationElement* followingP = m_firstElementP;
  	
  	while (followingP) {
      followingP = followingP->m_nextP;
      ++size;
    }
  	
    return size;
    
  }
  
  //----------------------------------------------------------------------------
  const Linux_SambaPrinterPrintingOptionsManualInstance&  
  Linux_SambaPrinterPrintingOptionsManualInstanceEnumeration::getElement(int anIndex) const {
   
    Linux_SambaPrinterPrintingOptionsManualInstanceEnumerationElement* followingP = m_firstElementP;
   
    int x = 0;
    while (followingP && (x < anIndex)) {
      followingP = followingP->m_nextP;
      ++x;
    }
    
    return *(followingP->m_elementP);

  }
  
  //----------------------------------------------------------------------------
  const Linux_SambaPrinterPrintingOptionsManualInstance&
  Linux_SambaPrinterPrintingOptionsManualInstanceEnumeration::getNext() {
   	
    Linux_SambaPrinterPrintingOptionsManualInstanceEnumerationElement* currentElementP =
  	  m_currentElementP;

    m_currentElementP = m_currentElementP->m_nextP;
  	 
    return *(currentElementP->m_elementP);

  }
  	  
  //----------------------------------------------------------------------------
  void
  Linux_SambaPrinterPrintingOptionsManualInstanceEnumeration::addElement(
    const Linux_SambaPrinterPrintingOptionsManualInstance& anInstance) {
   	
  	if (m_firstElementP == 0) {
  	  m_firstElementP = new Linux_SambaPrinterPrintingOptionsManualInstanceEnumerationElement();
  	  m_firstElementP->m_elementP = new Linux_SambaPrinterPrintingOptionsManualInstance(anInstance);
  	  m_endElementP = m_firstElementP;
  	  m_currentElementP = m_firstElementP;
  	} else {
  	  m_endElementP->m_nextP = new Linux_SambaPrinterPrintingOptionsManualInstanceEnumerationElement();
  	  m_endElementP = m_endElementP->m_nextP;
  	  m_endElementP->m_elementP = new Linux_SambaPrinterPrintingOptionsManualInstance(anInstance);
  	}

  }
  
}
