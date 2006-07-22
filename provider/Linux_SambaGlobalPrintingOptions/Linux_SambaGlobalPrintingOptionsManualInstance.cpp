// =======================================================================
// Linux_SambaGlobalPrintingOptionsManualInstance.cpp
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
#include "Linux_SambaGlobalPrintingOptionsManualInstance.h"
#include "CmpiData.h"
#include "CmpiString.h"
#include "CmpiArray.h"
#include <string>

namespace genProvider {

  //****************************************************************************
  //Linux_SambaGlobalPrintingOptionsManualInstance
  //----------------------------------------------------------------------------
  //empty constructor
  Linux_SambaGlobalPrintingOptionsManualInstance::Linux_SambaGlobalPrintingOptionsManualInstance() {   	
   	init();  	   	
  }
  
  //----------------------------------------------------------------------------
  //copy constructor	
  //----------------------------------------------------------------------------
  Linux_SambaGlobalPrintingOptionsManualInstance::Linux_SambaGlobalPrintingOptionsManualInstance(
    const Linux_SambaGlobalPrintingOptionsManualInstance& anInstance) {   	
   	init(anInstance);  	   	
  }
  
  //----------------------------------------------------------------------------
  //constructor using CmpiInstance
  //----------------------------------------------------------------------------
  Linux_SambaGlobalPrintingOptionsManualInstance::Linux_SambaGlobalPrintingOptionsManualInstance(
    const CmpiInstance& aCmpiInstance,
    const char* anInstanceNamespaceP) {

    CmpiData cmpiData;

    init(); 
    
    CmpiObjectPath cop = aCmpiInstance.getObjectPath();
    cop.setNameSpace(anInstanceNamespaceP);
    setInstanceName(Linux_SambaGlobalPrintingOptionsInstanceName(cop));

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

    cmpiData = aCmpiInstance.getProperty("PrintcapCacheTime");
    if ( ! cmpiData.isNullValue()){
      CMPIUint64 PrintcapCacheTime = cmpiData;
      setPrintcapCacheTime(PrintcapCacheTime);
    }

    cmpiData = aCmpiInstance.getProperty("SystemPrinterName");
    if ( ! cmpiData.isNullValue()){
      CmpiString SystemPrinterName = cmpiData;
      setSystemPrinterName(SystemPrinterName.charPtr());
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
  Linux_SambaGlobalPrintingOptionsManualInstance::
   ~Linux_SambaGlobalPrintingOptionsManualInstance(){
   	reset();  	  
  }
  
  
  //----------------------------------------------------------------------------
  //copy operator
  //----------------------------------------------------------------------------
  Linux_SambaGlobalPrintingOptionsManualInstance&
  Linux_SambaGlobalPrintingOptionsManualInstance::operator=(
    const Linux_SambaGlobalPrintingOptionsManualInstance& anInstance) {   	
   	
   	init(anInstance);
   	return *this;
  
  }
  
  
  //----------------------------------------------------------------------------
  //converts to CmpiInstance
  //----------------------------------------------------------------------------
  CmpiInstance
  Linux_SambaGlobalPrintingOptionsManualInstance::getCmpiInstance(
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

  	if (isSet.PrintcapCacheTime) {
  	  
  	  cmpiInstance.setProperty(
  	    "PrintcapCacheTime",
  	    CmpiData(m_PrintcapCacheTime));
  	}

  	if (isSet.SystemPrinterName) {
  	  
  	  cmpiInstance.setProperty(
  	    "SystemPrinterName",
  	    CmpiData(m_SystemPrinterName));
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
  Linux_SambaGlobalPrintingOptionsManualInstance::isInstanceNameSet() const {
  	return isSet.instanceName;
  }
  
  //----------------------------------------------------------------------------
  const Linux_SambaGlobalPrintingOptionsInstanceName&
  Linux_SambaGlobalPrintingOptionsManualInstance::getInstanceName() const {

    if( ! isSet.instanceName) {
   	  throw CmpiErrorFormater::getErrorException(
        CmpiErrorFormater::NOT_SET,
        "InstanceName (CIM Key Attributes)",
        "Linux_SambaGlobalPrintingOptions");
   	}
  		
   	return m_instanceName;
  
  }

  //----------------------------------------------------------------------------
  void
  Linux_SambaGlobalPrintingOptionsManualInstance::setInstanceName(
    const Linux_SambaGlobalPrintingOptionsInstanceName& val) {

    m_instanceName = val;
    isSet.instanceName = 1;

  }
       
  //----------------------------------------------------------------------------
  // CupsOptions related methods
  //----------------------------------------------------------------------------
  unsigned int
  Linux_SambaGlobalPrintingOptionsManualInstance::isCupsOptionsSet() const {
    return isSet.CupsOptions;
  }

  //----------------------------------------------------------------------------
  void
  Linux_SambaGlobalPrintingOptionsManualInstance::setCupsOptions(
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
  Linux_SambaGlobalPrintingOptionsManualInstance::getCupsOptions() const {
    
    if ( ! isSet.CupsOptions) {
   	  throw CmpiErrorFormater::getErrorException(
   	    CmpiErrorFormater::NOT_SET,
        "CupsOptions",
        "Linux_SambaGlobalPrintingOptions");
   	}


    return m_CupsOptions;

  }
       
  //----------------------------------------------------------------------------
  // DefaultDevMode related methods
  //----------------------------------------------------------------------------
  unsigned int
  Linux_SambaGlobalPrintingOptionsManualInstance::isDefaultDevModeSet() const {
    return isSet.DefaultDevMode;
  }

  //----------------------------------------------------------------------------
  void Linux_SambaGlobalPrintingOptionsManualInstance::setDefaultDevMode(
    const CMPIBoolean aValue) {
  
    m_DefaultDevMode = aValue;
    isSet.DefaultDevMode = 1;
  
  }       

  //----------------------------------------------------------------------------
  const CMPIBoolean
  Linux_SambaGlobalPrintingOptionsManualInstance::getDefaultDevMode() const {
    
    if ( ! isSet.DefaultDevMode) {
   	  throw CmpiErrorFormater::getErrorException(
   	    CmpiErrorFormater::NOT_SET,
        "DefaultDevMode",
        "Linux_SambaGlobalPrintingOptions");
   	}


    return m_DefaultDevMode;

  }
       
  //----------------------------------------------------------------------------
  // MaxPrintjobs related methods
  //----------------------------------------------------------------------------
  unsigned int
  Linux_SambaGlobalPrintingOptionsManualInstance::isMaxPrintjobsSet() const {
    return isSet.MaxPrintjobs;
  }

  //----------------------------------------------------------------------------
  void Linux_SambaGlobalPrintingOptionsManualInstance::setMaxPrintjobs(
    const CMPIUint64 aValue) {
  
    m_MaxPrintjobs = aValue;
    isSet.MaxPrintjobs = 1;
  
  }       

  //----------------------------------------------------------------------------
  const CMPIUint64
  Linux_SambaGlobalPrintingOptionsManualInstance::getMaxPrintjobs() const {
    
    if ( ! isSet.MaxPrintjobs) {
   	  throw CmpiErrorFormater::getErrorException(
   	    CmpiErrorFormater::NOT_SET,
        "MaxPrintjobs",
        "Linux_SambaGlobalPrintingOptions");
   	}


    return m_MaxPrintjobs;

  }
       
  //----------------------------------------------------------------------------
  // MaxReportedPrintjobs related methods
  //----------------------------------------------------------------------------
  unsigned int
  Linux_SambaGlobalPrintingOptionsManualInstance::isMaxReportedPrintjobsSet() const {
    return isSet.MaxReportedPrintjobs;
  }

  //----------------------------------------------------------------------------
  void Linux_SambaGlobalPrintingOptionsManualInstance::setMaxReportedPrintjobs(
    const CMPIUint64 aValue) {
  
    m_MaxReportedPrintjobs = aValue;
    isSet.MaxReportedPrintjobs = 1;
  
  }       

  //----------------------------------------------------------------------------
  const CMPIUint64
  Linux_SambaGlobalPrintingOptionsManualInstance::getMaxReportedPrintjobs() const {
    
    if ( ! isSet.MaxReportedPrintjobs) {
   	  throw CmpiErrorFormater::getErrorException(
   	    CmpiErrorFormater::NOT_SET,
        "MaxReportedPrintjobs",
        "Linux_SambaGlobalPrintingOptions");
   	}


    return m_MaxReportedPrintjobs;

  }
       
  //----------------------------------------------------------------------------
  // PrintCommand related methods
  //----------------------------------------------------------------------------
  unsigned int
  Linux_SambaGlobalPrintingOptionsManualInstance::isPrintCommandSet() const {
    return isSet.PrintCommand;
  }

  //----------------------------------------------------------------------------
  void
  Linux_SambaGlobalPrintingOptionsManualInstance::setPrintCommand(
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
  Linux_SambaGlobalPrintingOptionsManualInstance::getPrintCommand() const {
    
    if ( ! isSet.PrintCommand) {
   	  throw CmpiErrorFormater::getErrorException(
   	    CmpiErrorFormater::NOT_SET,
        "PrintCommand",
        "Linux_SambaGlobalPrintingOptions");
   	}


    return m_PrintCommand;

  }
       
  //----------------------------------------------------------------------------
  // PrintcapCacheTime related methods
  //----------------------------------------------------------------------------
  unsigned int
  Linux_SambaGlobalPrintingOptionsManualInstance::isPrintcapCacheTimeSet() const {
    return isSet.PrintcapCacheTime;
  }

  //----------------------------------------------------------------------------
  void Linux_SambaGlobalPrintingOptionsManualInstance::setPrintcapCacheTime(
    const CMPIUint64 aValue) {
  
    m_PrintcapCacheTime = aValue;
    isSet.PrintcapCacheTime = 1;
  
  }       

  //----------------------------------------------------------------------------
  const CMPIUint64
  Linux_SambaGlobalPrintingOptionsManualInstance::getPrintcapCacheTime() const {
    
    if ( ! isSet.PrintcapCacheTime) {
   	  throw CmpiErrorFormater::getErrorException(
   	    CmpiErrorFormater::NOT_SET,
        "PrintcapCacheTime",
        "Linux_SambaGlobalPrintingOptions");
   	}


    return m_PrintcapCacheTime;

  }
       
  //----------------------------------------------------------------------------
  // SystemPrinterName related methods
  //----------------------------------------------------------------------------
  unsigned int
  Linux_SambaGlobalPrintingOptionsManualInstance::isSystemPrinterNameSet() const {
    return isSet.SystemPrinterName;
  }

  //----------------------------------------------------------------------------
  void
  Linux_SambaGlobalPrintingOptionsManualInstance::setSystemPrinterName(
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
  Linux_SambaGlobalPrintingOptionsManualInstance::getSystemPrinterName() const {
    
    if ( ! isSet.SystemPrinterName) {
   	  throw CmpiErrorFormater::getErrorException(
   	    CmpiErrorFormater::NOT_SET,
        "SystemPrinterName",
        "Linux_SambaGlobalPrintingOptions");
   	}


    return m_SystemPrinterName;

  }
       
  //----------------------------------------------------------------------------
  // UseClientDriver related methods
  //----------------------------------------------------------------------------
  unsigned int
  Linux_SambaGlobalPrintingOptionsManualInstance::isUseClientDriverSet() const {
    return isSet.UseClientDriver;
  }

  //----------------------------------------------------------------------------
  void Linux_SambaGlobalPrintingOptionsManualInstance::setUseClientDriver(
    const CMPIBoolean aValue) {
  
    m_UseClientDriver = aValue;
    isSet.UseClientDriver = 1;
  
  }       

  //----------------------------------------------------------------------------
  const CMPIBoolean
  Linux_SambaGlobalPrintingOptionsManualInstance::getUseClientDriver() const {
    
    if ( ! isSet.UseClientDriver) {
   	  throw CmpiErrorFormater::getErrorException(
   	    CmpiErrorFormater::NOT_SET,
        "UseClientDriver",
        "Linux_SambaGlobalPrintingOptions");
   	}


    return m_UseClientDriver;

  }

  
  //----------------------------------------------------------------------------
  //set isSet attributes to FALSE
  //----------------------------------------------------------------------------
  void
  Linux_SambaGlobalPrintingOptionsManualInstance::init() {
   	isSet.instanceName = 0;
    isSet.CupsOptions = 0;
    isSet.DefaultDevMode = 0;
    isSet.MaxPrintjobs = 0;
    isSet.MaxReportedPrintjobs = 0;
    isSet.PrintCommand = 0;
    isSet.PrintcapCacheTime = 0;
    isSet.SystemPrinterName = 0;
    isSet.UseClientDriver = 0;
  	
  }
  
  //----------------------------------------------------------------------------
  //copies another instance properties in this
  //----------------------------------------------------------------------------
  void 
  Linux_SambaGlobalPrintingOptionsManualInstance::init(
    const Linux_SambaGlobalPrintingOptionsManualInstance& anOriginal) {   	

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
   	
    if (anOriginal.isPrintcapCacheTimeSet()) {
      const CMPIUint64 PrintcapCacheTimeOriginal = anOriginal.getPrintcapCacheTime();
      setPrintcapCacheTime(PrintcapCacheTimeOriginal);
    }
   	
    if (anOriginal.isSystemPrinterNameSet()) {
      const char* SystemPrinterNameOriginal = anOriginal.getSystemPrinterName();
      setSystemPrinterName(SystemPrinterNameOriginal,1);
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
  Linux_SambaGlobalPrintingOptionsManualInstance::reset() {
   	
  	if (isSet.CupsOptions) {
  	  delete(m_CupsOptions);
  	}

  	if (isSet.PrintCommand) {
  	  delete(m_PrintCommand);
  	}

  	if (isSet.SystemPrinterName) {
  	  delete(m_SystemPrinterName);
  	}

  }
  
  //----------------------------------------------------------------------------
  //Linux_SambaGlobalPrintingOptionsManualInstanceEnumerationElement	
  //----------------------------------------------------------------------------
  Linux_SambaGlobalPrintingOptionsManualInstanceEnumerationElement::Linux_SambaGlobalPrintingOptionsManualInstanceEnumerationElement() {
   	
  	m_elementP = 0;
  	m_nextP = 0;
  	  
  }
  
  //----------------------------------------------------------------------------
  Linux_SambaGlobalPrintingOptionsManualInstanceEnumerationElement::~Linux_SambaGlobalPrintingOptionsManualInstanceEnumerationElement() {
   	
  	if (m_elementP) {
  	  delete(m_elementP);
  	}
  	
  	if (m_nextP) {
  	  delete(m_nextP);
  	}
  	  
  }

  //----------------------------------------------------------------------------
  //Linux_SambaGlobalPrintingOptionsManualInstanceNameEnumeration
  //----------------------------------------------------------------------------
  Linux_SambaGlobalPrintingOptionsManualInstanceEnumeration::Linux_SambaGlobalPrintingOptionsManualInstanceEnumeration() {
   	
    m_firstElementP = 0;
    m_currentElementP = 0;
    m_endElementP = 0;
  
  }
  
  //----------------------------------------------------------------------------
  Linux_SambaGlobalPrintingOptionsManualInstanceEnumeration::Linux_SambaGlobalPrintingOptionsManualInstanceEnumeration(
    const Linux_SambaGlobalPrintingOptionsManualInstanceEnumeration& anInstanceEnumeration) {
   	
    m_firstElementP = 0;
    m_currentElementP = 0;
    m_endElementP = 0;
  	 
    int size = anInstanceEnumeration.getSize();
    for (int x=0; x < size;++x) {
      addElement(anInstanceEnumeration.getElement(x));
    }           

  }
  
  //----------------------------------------------------------------------------
  Linux_SambaGlobalPrintingOptionsManualInstanceEnumeration::~Linux_SambaGlobalPrintingOptionsManualInstanceEnumeration() {
   	
  	if (m_firstElementP) {
  	  delete(m_firstElementP);
  	}
  	  	
  }
  
  //----------------------------------------------------------------------------
  void
  Linux_SambaGlobalPrintingOptionsManualInstanceEnumeration::reset() {
  	
  	m_currentElementP = m_firstElementP;
  	
  }
  	  
  //----------------------------------------------------------------------------
  bool
  Linux_SambaGlobalPrintingOptionsManualInstanceEnumeration::hasNext() const {
  	
  	return (m_currentElementP != 0);
  
  }
  
  //----------------------------------------------------------------------------
  int
  Linux_SambaGlobalPrintingOptionsManualInstanceEnumeration::getSize() const {
  	
    int size = 0;
    Linux_SambaGlobalPrintingOptionsManualInstanceEnumerationElement* followingP = m_firstElementP;
  	
  	while (followingP) {
      followingP = followingP->m_nextP;
      ++size;
    }
  	
    return size;
    
  }
  
  //----------------------------------------------------------------------------
  const Linux_SambaGlobalPrintingOptionsManualInstance&  
  Linux_SambaGlobalPrintingOptionsManualInstanceEnumeration::getElement(int anIndex) const {
   
    Linux_SambaGlobalPrintingOptionsManualInstanceEnumerationElement* followingP = m_firstElementP;
   
    int x = 0;
    while (followingP && (x < anIndex)) {
      followingP = followingP->m_nextP;
      ++x;
    }
    
    return *(followingP->m_elementP);

  }
  
  //----------------------------------------------------------------------------
  const Linux_SambaGlobalPrintingOptionsManualInstance&
  Linux_SambaGlobalPrintingOptionsManualInstanceEnumeration::getNext() {
   	
    Linux_SambaGlobalPrintingOptionsManualInstanceEnumerationElement* currentElementP =
  	  m_currentElementP;

    m_currentElementP = m_currentElementP->m_nextP;
  	 
    return *(currentElementP->m_elementP);

  }
  	  
  //----------------------------------------------------------------------------
  void
  Linux_SambaGlobalPrintingOptionsManualInstanceEnumeration::addElement(
    const Linux_SambaGlobalPrintingOptionsManualInstance& anInstance) {
   	
  	if (m_firstElementP == 0) {
  	  m_firstElementP = new Linux_SambaGlobalPrintingOptionsManualInstanceEnumerationElement();
  	  m_firstElementP->m_elementP = new Linux_SambaGlobalPrintingOptionsManualInstance(anInstance);
  	  m_endElementP = m_firstElementP;
  	  m_currentElementP = m_firstElementP;
  	} else {
  	  m_endElementP->m_nextP = new Linux_SambaGlobalPrintingOptionsManualInstanceEnumerationElement();
  	  m_endElementP = m_endElementP->m_nextP;
  	  m_endElementP->m_elementP = new Linux_SambaGlobalPrintingOptionsManualInstance(anInstance);
  	}

  }
  
}
