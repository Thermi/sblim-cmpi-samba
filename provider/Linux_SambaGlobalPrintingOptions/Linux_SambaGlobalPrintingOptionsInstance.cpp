// =======================================================================
// Linux_SambaGlobalPrintingOptionsInstance.cpp
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
#include "Linux_SambaGlobalPrintingOptionsInstance.h"
#include "CmpiData.h"
#include "CmpiString.h"
#include "CmpiArray.h"
#include <string>

namespace genProvider {

  //****************************************************************************
  //Linux_SambaGlobalPrintingOptionsInstance
  //----------------------------------------------------------------------------
  //empty constructor
  Linux_SambaGlobalPrintingOptionsInstance::Linux_SambaGlobalPrintingOptionsInstance() {   	
   	init();  	   	
  }
  
  //----------------------------------------------------------------------------
  //copy constructor	
  //----------------------------------------------------------------------------
  Linux_SambaGlobalPrintingOptionsInstance::Linux_SambaGlobalPrintingOptionsInstance(
    const Linux_SambaGlobalPrintingOptionsInstance& anInstance) {   	
   	init(anInstance);  	   	
  }
  
  //----------------------------------------------------------------------------
  //constructor using CmpiInstance
  //----------------------------------------------------------------------------
  Linux_SambaGlobalPrintingOptionsInstance::Linux_SambaGlobalPrintingOptionsInstance(
    const CmpiInstance& aCmpiInstance,
    const char* anInstanceNamespaceP) {

    CmpiData cmpiData;

    init(); 
    
    CmpiObjectPath cop = aCmpiInstance.getObjectPath();
    cop.setNameSpace(anInstanceNamespaceP);
    setInstanceName(Linux_SambaGlobalPrintingOptionsInstanceName(cop));

    cmpiData = aCmpiInstance.getProperty("Caption");
    if ( ! cmpiData.isNullValue()){
      CmpiString Caption = cmpiData;
      setCaption(Caption.charPtr());
    }

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
  Linux_SambaGlobalPrintingOptionsInstance::
   ~Linux_SambaGlobalPrintingOptionsInstance(){
   	reset();  	  
  }
  
  
  //----------------------------------------------------------------------------
  //copy operator
  //----------------------------------------------------------------------------
  Linux_SambaGlobalPrintingOptionsInstance&
  Linux_SambaGlobalPrintingOptionsInstance::operator=(
    const Linux_SambaGlobalPrintingOptionsInstance& anInstance) {   	
   	
   	init(anInstance);
   	return *this;
  
  }
  
  
  //----------------------------------------------------------------------------
  //converts to CmpiInstance
  //----------------------------------------------------------------------------
  CmpiInstance
  Linux_SambaGlobalPrintingOptionsInstance::getCmpiInstance(
    const char** aPropertiesPP) const {
   	
   	CmpiObjectPath objectPath=getInstanceName().getObjectPath();      
    CmpiInstance cmpiInstance(objectPath);    
    getInstanceName().fillKeys(cmpiInstance);
    
    if (aPropertiesPP) {
	    cmpiInstance.setPropertyFilter(aPropertiesPP,0);
    }

  	if (isSet.Caption) {
  	  
  	  cmpiInstance.setProperty(
  	    "Caption",
  	    CmpiData(m_Caption));
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
  Linux_SambaGlobalPrintingOptionsInstance::isInstanceNameSet() const {
  	return isSet.instanceName;
  }
  
  //----------------------------------------------------------------------------
  const Linux_SambaGlobalPrintingOptionsInstanceName&
  Linux_SambaGlobalPrintingOptionsInstance::getInstanceName() const {

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
  Linux_SambaGlobalPrintingOptionsInstance::setInstanceName(
    const Linux_SambaGlobalPrintingOptionsInstanceName& val) {

    m_instanceName = val;
    isSet.instanceName = 1;

  }
       
  //----------------------------------------------------------------------------
  // Caption related methods
  //----------------------------------------------------------------------------
  unsigned int
  Linux_SambaGlobalPrintingOptionsInstance::isCaptionSet() const {
    return isSet.Caption;
  }

  //----------------------------------------------------------------------------
  void
  Linux_SambaGlobalPrintingOptionsInstance::setCaption(
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
  Linux_SambaGlobalPrintingOptionsInstance::getCaption() const {
    
    if ( ! isSet.Caption) {
   	  throw CmpiErrorFormater::getErrorException(
   	    CmpiErrorFormater::NOT_SET,
        "Caption",
        "Linux_SambaGlobalPrintingOptions");
   	}


    return m_Caption;

  }
       
  //----------------------------------------------------------------------------
  // CupsOptions related methods
  //----------------------------------------------------------------------------
  unsigned int
  Linux_SambaGlobalPrintingOptionsInstance::isCupsOptionsSet() const {
    return isSet.CupsOptions;
  }

  //----------------------------------------------------------------------------
  void
  Linux_SambaGlobalPrintingOptionsInstance::setCupsOptions(
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
  Linux_SambaGlobalPrintingOptionsInstance::getCupsOptions() const {
    
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
  Linux_SambaGlobalPrintingOptionsInstance::isDefaultDevModeSet() const {
    return isSet.DefaultDevMode;
  }

  //----------------------------------------------------------------------------
  void Linux_SambaGlobalPrintingOptionsInstance::setDefaultDevMode(
    const CMPIBoolean aValue) {
  
    m_DefaultDevMode = aValue;
    isSet.DefaultDevMode = 1;
  
  }       

  //----------------------------------------------------------------------------
  const CMPIBoolean
  Linux_SambaGlobalPrintingOptionsInstance::getDefaultDevMode() const {
    
    if ( ! isSet.DefaultDevMode) {
   	  throw CmpiErrorFormater::getErrorException(
   	    CmpiErrorFormater::NOT_SET,
        "DefaultDevMode",
        "Linux_SambaGlobalPrintingOptions");
   	}


    return m_DefaultDevMode;

  }
       
  //----------------------------------------------------------------------------
  // Description related methods
  //----------------------------------------------------------------------------
  unsigned int
  Linux_SambaGlobalPrintingOptionsInstance::isDescriptionSet() const {
    return isSet.Description;
  }

  //----------------------------------------------------------------------------
  void
  Linux_SambaGlobalPrintingOptionsInstance::setDescription(
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
  Linux_SambaGlobalPrintingOptionsInstance::getDescription() const {
    
    if ( ! isSet.Description) {
   	  throw CmpiErrorFormater::getErrorException(
   	    CmpiErrorFormater::NOT_SET,
        "Description",
        "Linux_SambaGlobalPrintingOptions");
   	}


    return m_Description;

  }
       
  //----------------------------------------------------------------------------
  // ElementName related methods
  //----------------------------------------------------------------------------
  unsigned int
  Linux_SambaGlobalPrintingOptionsInstance::isElementNameSet() const {
    return isSet.ElementName;
  }

  //----------------------------------------------------------------------------
  void
  Linux_SambaGlobalPrintingOptionsInstance::setElementName(
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
  Linux_SambaGlobalPrintingOptionsInstance::getElementName() const {
    
    if ( ! isSet.ElementName) {
   	  throw CmpiErrorFormater::getErrorException(
   	    CmpiErrorFormater::NOT_SET,
        "ElementName",
        "Linux_SambaGlobalPrintingOptions");
   	}


    return m_ElementName;

  }
       
  //----------------------------------------------------------------------------
  // MaxPrintjobs related methods
  //----------------------------------------------------------------------------
  unsigned int
  Linux_SambaGlobalPrintingOptionsInstance::isMaxPrintjobsSet() const {
    return isSet.MaxPrintjobs;
  }

  //----------------------------------------------------------------------------
  void Linux_SambaGlobalPrintingOptionsInstance::setMaxPrintjobs(
    const CMPIUint64 aValue) {
  
    m_MaxPrintjobs = aValue;
    isSet.MaxPrintjobs = 1;
  
  }       

  //----------------------------------------------------------------------------
  const CMPIUint64
  Linux_SambaGlobalPrintingOptionsInstance::getMaxPrintjobs() const {
    
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
  Linux_SambaGlobalPrintingOptionsInstance::isMaxReportedPrintjobsSet() const {
    return isSet.MaxReportedPrintjobs;
  }

  //----------------------------------------------------------------------------
  void Linux_SambaGlobalPrintingOptionsInstance::setMaxReportedPrintjobs(
    const CMPIUint64 aValue) {
  
    m_MaxReportedPrintjobs = aValue;
    isSet.MaxReportedPrintjobs = 1;
  
  }       

  //----------------------------------------------------------------------------
  const CMPIUint64
  Linux_SambaGlobalPrintingOptionsInstance::getMaxReportedPrintjobs() const {
    
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
  Linux_SambaGlobalPrintingOptionsInstance::isPrintCommandSet() const {
    return isSet.PrintCommand;
  }

  //----------------------------------------------------------------------------
  void
  Linux_SambaGlobalPrintingOptionsInstance::setPrintCommand(
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
  Linux_SambaGlobalPrintingOptionsInstance::getPrintCommand() const {
    
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
  Linux_SambaGlobalPrintingOptionsInstance::isPrintcapCacheTimeSet() const {
    return isSet.PrintcapCacheTime;
  }

  //----------------------------------------------------------------------------
  void Linux_SambaGlobalPrintingOptionsInstance::setPrintcapCacheTime(
    const CMPIUint64 aValue) {
  
    m_PrintcapCacheTime = aValue;
    isSet.PrintcapCacheTime = 1;
  
  }       

  //----------------------------------------------------------------------------
  const CMPIUint64
  Linux_SambaGlobalPrintingOptionsInstance::getPrintcapCacheTime() const {
    
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
  Linux_SambaGlobalPrintingOptionsInstance::isSystemPrinterNameSet() const {
    return isSet.SystemPrinterName;
  }

  //----------------------------------------------------------------------------
  void
  Linux_SambaGlobalPrintingOptionsInstance::setSystemPrinterName(
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
  Linux_SambaGlobalPrintingOptionsInstance::getSystemPrinterName() const {
    
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
  Linux_SambaGlobalPrintingOptionsInstance::isUseClientDriverSet() const {
    return isSet.UseClientDriver;
  }

  //----------------------------------------------------------------------------
  void Linux_SambaGlobalPrintingOptionsInstance::setUseClientDriver(
    const CMPIBoolean aValue) {
  
    m_UseClientDriver = aValue;
    isSet.UseClientDriver = 1;
  
  }       

  //----------------------------------------------------------------------------
  const CMPIBoolean
  Linux_SambaGlobalPrintingOptionsInstance::getUseClientDriver() const {
    
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
  Linux_SambaGlobalPrintingOptionsInstance::init() {
   	isSet.instanceName = 0;
    isSet.Caption = 0;
    isSet.CupsOptions = 0;
    isSet.DefaultDevMode = 0;
    isSet.Description = 0;
    isSet.ElementName = 0;
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
  Linux_SambaGlobalPrintingOptionsInstance::init(
    const Linux_SambaGlobalPrintingOptionsInstance& anOriginal) {   	

   	init();
   	   	
    if(anOriginal.isInstanceNameSet()) {
      setInstanceName(anOriginal.getInstanceName());
    }
       	
    if (anOriginal.isCaptionSet()) {
      const char* CaptionOriginal = anOriginal.getCaption();
      setCaption(CaptionOriginal,1);
    }
   	
    if (anOriginal.isCupsOptionsSet()) {
      const char* CupsOptionsOriginal = anOriginal.getCupsOptions();
      setCupsOptions(CupsOptionsOriginal,1);
    }
   	
    if (anOriginal.isDefaultDevModeSet()) {
      const CMPIBoolean DefaultDevModeOriginal = anOriginal.getDefaultDevMode();
      setDefaultDevMode(DefaultDevModeOriginal);
    }
   	
    if (anOriginal.isDescriptionSet()) {
      const char* DescriptionOriginal = anOriginal.getDescription();
      setDescription(DescriptionOriginal,1);
    }
   	
    if (anOriginal.isElementNameSet()) {
      const char* ElementNameOriginal = anOriginal.getElementName();
      setElementName(ElementNameOriginal,1);
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
  Linux_SambaGlobalPrintingOptionsInstance::reset() {
   	
  	if (isSet.Caption) {
  	  delete(m_Caption);
  	}

  	if (isSet.CupsOptions) {
  	  delete(m_CupsOptions);
  	}

  	if (isSet.Description) {
  	  delete(m_Description);
  	}

  	if (isSet.ElementName) {
  	  delete(m_ElementName);
  	}

  	if (isSet.PrintCommand) {
  	  delete(m_PrintCommand);
  	}

  	if (isSet.SystemPrinterName) {
  	  delete(m_SystemPrinterName);
  	}

  }
  
  //----------------------------------------------------------------------------
  //Linux_SambaGlobalPrintingOptionsInstanceEnumerationElement	
  //----------------------------------------------------------------------------
  Linux_SambaGlobalPrintingOptionsInstanceEnumerationElement::Linux_SambaGlobalPrintingOptionsInstanceEnumerationElement() {
   	
  	m_elementP = 0;
  	m_nextP = 0;
  	  
  }
  
  //----------------------------------------------------------------------------
  Linux_SambaGlobalPrintingOptionsInstanceEnumerationElement::~Linux_SambaGlobalPrintingOptionsInstanceEnumerationElement() {
   	
  	if (m_elementP) {
  	  delete(m_elementP);
  	}
  	
  	if (m_nextP) {
  	  delete(m_nextP);
  	}
  	  
  }

  //----------------------------------------------------------------------------
  //Linux_SambaGlobalPrintingOptionsInstanceNameEnumeration
  //----------------------------------------------------------------------------
  Linux_SambaGlobalPrintingOptionsInstanceEnumeration::Linux_SambaGlobalPrintingOptionsInstanceEnumeration() {
   	
    m_firstElementP = 0;
    m_currentElementP = 0;
    m_endElementP = 0;
  
  }
  
  //----------------------------------------------------------------------------
  Linux_SambaGlobalPrintingOptionsInstanceEnumeration::Linux_SambaGlobalPrintingOptionsInstanceEnumeration(
    const Linux_SambaGlobalPrintingOptionsInstanceEnumeration& anInstanceEnumeration) {
   	
    m_firstElementP = 0;
    m_currentElementP = 0;
    m_endElementP = 0;
  	 
    int size = anInstanceEnumeration.getSize();
    for (int x=0; x < size;++x) {
      addElement(anInstanceEnumeration.getElement(x));
    }           

  }
  
  //----------------------------------------------------------------------------
  Linux_SambaGlobalPrintingOptionsInstanceEnumeration::~Linux_SambaGlobalPrintingOptionsInstanceEnumeration() {
   	
  	if (m_firstElementP) {
  	  delete(m_firstElementP);
  	}
  	  	
  }
  
  //----------------------------------------------------------------------------
  void
  Linux_SambaGlobalPrintingOptionsInstanceEnumeration::reset() {
  	
  	m_currentElementP = m_firstElementP;
  	
  }
  	  
  //----------------------------------------------------------------------------
  bool
  Linux_SambaGlobalPrintingOptionsInstanceEnumeration::hasNext() const {
  	
  	return (m_currentElementP != 0);
  
  }
  
  //----------------------------------------------------------------------------
  int
  Linux_SambaGlobalPrintingOptionsInstanceEnumeration::getSize() const {
  	
    int size = 0;
    Linux_SambaGlobalPrintingOptionsInstanceEnumerationElement* followingP = m_firstElementP;
  	
  	while (followingP) {
      followingP = followingP->m_nextP;
      ++size;
    }
  	
    return size;
    
  }
  
  //----------------------------------------------------------------------------
  const Linux_SambaGlobalPrintingOptionsInstance&  
  Linux_SambaGlobalPrintingOptionsInstanceEnumeration::getElement(int anIndex) const {
   
    Linux_SambaGlobalPrintingOptionsInstanceEnumerationElement* followingP = m_firstElementP;
   
    int x = 0;
    while (followingP && (x < anIndex)) {
      followingP = followingP->m_nextP;
      ++x;
    }
    
    return *(followingP->m_elementP);

  }
  
  //----------------------------------------------------------------------------
  const Linux_SambaGlobalPrintingOptionsInstance&
  Linux_SambaGlobalPrintingOptionsInstanceEnumeration::getNext() {
   	
    Linux_SambaGlobalPrintingOptionsInstanceEnumerationElement* currentElementP =
  	  m_currentElementP;

    m_currentElementP = m_currentElementP->m_nextP;
  	 
    return *(currentElementP->m_elementP);

  }
  	  
  //----------------------------------------------------------------------------
  void
  Linux_SambaGlobalPrintingOptionsInstanceEnumeration::addElement(
    const Linux_SambaGlobalPrintingOptionsInstance& anInstance) {
   	
  	if (m_firstElementP == 0) {
  	  m_firstElementP = new Linux_SambaGlobalPrintingOptionsInstanceEnumerationElement();
  	  m_firstElementP->m_elementP = new Linux_SambaGlobalPrintingOptionsInstance(anInstance);
  	  m_endElementP = m_firstElementP;
  	  m_currentElementP = m_firstElementP;
  	} else {
  	  m_endElementP->m_nextP = new Linux_SambaGlobalPrintingOptionsInstanceEnumerationElement();
  	  m_endElementP = m_endElementP->m_nextP;
  	  m_endElementP->m_elementP = new Linux_SambaGlobalPrintingOptionsInstance(anInstance);
  	}

  }
  
}
