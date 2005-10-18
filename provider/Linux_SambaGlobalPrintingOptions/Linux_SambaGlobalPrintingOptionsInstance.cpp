/**
 *  Linux_SambaGlobalPrintingOptionsInstance.cpp
 * 
 * (C) Copyright IBM Corp. 2005
 *
 * THIS FILE IS PROVIDED UNDER THE TERMS OF THE COMMON PUBLIC LICENSE
 * ("AGREEMENT"). ANY USE, REPRODUCTION OR DISTRIBUTION OF THIS FILE
 * CONSTITUTES RECIPIENTS ACCEPTANCE OF THE AGREEMENT.
 *
 * You can obtain a current copy of the Common Public License from
 * http://www.opensource.org/licenses/cpl1.0.php
 *
 * Author:     Rodrigo Ceron <rceron@br.ibm.com>
 *
 * Contributors:
 *
 */


#include "Linux_SambaGlobalPrintingOptionsInstance.h"
#include "CmpiData.h"
#include "CmpiString.h"
#include "CmpiArray.h"
#include <string>

namespace genProvider {

  //*********************************************************
  //Linux_SambaGlobalPrintingOptionsInstance
  //*********************************************************

  //empty constructor
  Linux_SambaGlobalPrintingOptionsInstance::
   Linux_SambaGlobalPrintingOptionsInstance(){   	
   	init();  	   	
  };
  
  
  //copy constructor	
  Linux_SambaGlobalPrintingOptionsInstance::
   Linux_SambaGlobalPrintingOptionsInstance
   (const Linux_SambaGlobalPrintingOptionsInstance& original){   	
   	init(original);  	   	
  };
  
  
  //constructor using CmpiInstance
  Linux_SambaGlobalPrintingOptionsInstance::
   Linux_SambaGlobalPrintingOptionsInstance (const CmpiInstance& inst, const char* instanceNamespace){
    CmpiData cmpiData;
    init(); 
    
    CmpiObjectPath cop=inst.getObjectPath();
    cop.setNameSpace(instanceNamespace);
    setInstanceName(Linux_SambaGlobalPrintingOptionsInstanceName(cop));
    
    cmpiData = inst.getProperty("Caption");
    if(!cmpiData.isNullValue()){
      CmpiString Caption = cmpiData;
      setCaption(Caption.charPtr());
    }
    
    cmpiData = inst.getProperty("CupsOptions");
    if(!cmpiData.isNullValue()){
      CmpiString CupsOptions = cmpiData;
      setCupsOptions(CupsOptions.charPtr());
    }
    
    cmpiData = inst.getProperty("DefaultDevMode");
    if(!cmpiData.isNullValue()){
      CMPIBoolean DefaultDevMode = cmpiData;
      setDefaultDevMode(DefaultDevMode);
    }
    
    cmpiData = inst.getProperty("Description");
    if(!cmpiData.isNullValue()){
      CmpiString Description = cmpiData;
      setDescription(Description.charPtr());
    }
    
    cmpiData = inst.getProperty("ElementName");
    if(!cmpiData.isNullValue()){
      CmpiString ElementName = cmpiData;
      setElementName(ElementName.charPtr());
    }
    
    cmpiData = inst.getProperty("MaxPrintjobs");
    if(!cmpiData.isNullValue()){
      CMPIUint64 MaxPrintjobs = cmpiData;
      setMaxPrintjobs(MaxPrintjobs);
    }
    
    cmpiData = inst.getProperty("MaxReportedPrintjobs");
    if(!cmpiData.isNullValue()){
      CMPIUint64 MaxReportedPrintjobs = cmpiData;
      setMaxReportedPrintjobs(MaxReportedPrintjobs);
    }
    
    cmpiData = inst.getProperty("PrintCommand");
    if(!cmpiData.isNullValue()){
      CmpiString PrintCommand = cmpiData;
      setPrintCommand(PrintCommand.charPtr());
    }
    
    cmpiData = inst.getProperty("PrintcapCacheTime");
    if(!cmpiData.isNullValue()){
      CMPIUint64 PrintcapCacheTime = cmpiData;
      setPrintcapCacheTime(PrintcapCacheTime);
    }
    
    cmpiData = inst.getProperty("SystemPrinterName");
    if(!cmpiData.isNullValue()){
      CmpiString SystemPrinterName = cmpiData;
      setSystemPrinterName(SystemPrinterName.charPtr());
    }
    
    cmpiData = inst.getProperty("UseClientDriver");
    if(!cmpiData.isNullValue()){
      CMPIBoolean UseClientDriver = cmpiData;
      setUseClientDriver(UseClientDriver);
    }
    
  }
  
  
  //Destructor
  Linux_SambaGlobalPrintingOptionsInstance::
   ~Linux_SambaGlobalPrintingOptionsInstance(){
   	reset();  	  
  };
  
  
  //copy operator
  Linux_SambaGlobalPrintingOptionsInstance&
   Linux_SambaGlobalPrintingOptionsInstance::operator=
   (const Linux_SambaGlobalPrintingOptionsInstance& original){   	
   	init(original);
   	return *this;
  };
  
  
  //converts to CmpiInstance
  CmpiInstance Linux_SambaGlobalPrintingOptionsInstance::
   getCmpiInstance(const char** properties) const{
   	
   	CmpiObjectPath objectPath=getInstanceName().getObjectPath();      
    CmpiInstance cmpiInstance(objectPath);    
    getInstanceName().fillKeys(cmpiInstance);
    
    if (properties) {
	  cmpiInstance.setPropertyFilter(properties,0);
    }

  	if(isSet.Caption){
  	  cmpiInstance.setProperty("Caption",CmpiData(m_Caption));
  	}

  	if(isSet.CupsOptions){
  	  cmpiInstance.setProperty("CupsOptions",CmpiData(m_CupsOptions));
  	}

  	if(isSet.DefaultDevMode){
  	  cmpiInstance.setProperty("DefaultDevMode",CmpiBooleanData(m_DefaultDevMode));
  	}

  	if(isSet.Description){
  	  cmpiInstance.setProperty("Description",CmpiData(m_Description));
  	}

  	if(isSet.ElementName){
  	  cmpiInstance.setProperty("ElementName",CmpiData(m_ElementName));
  	}

  	if(isSet.MaxPrintjobs){
  	  cmpiInstance.setProperty("MaxPrintjobs",CmpiData(m_MaxPrintjobs));
  	}

  	if(isSet.MaxReportedPrintjobs){
  	  cmpiInstance.setProperty("MaxReportedPrintjobs",CmpiData(m_MaxReportedPrintjobs));
  	}

  	if(isSet.PrintCommand){
  	  cmpiInstance.setProperty("PrintCommand",CmpiData(m_PrintCommand));
  	}

  	if(isSet.PrintcapCacheTime){
  	  cmpiInstance.setProperty("PrintcapCacheTime",CmpiData(m_PrintcapCacheTime));
  	}

  	if(isSet.SystemPrinterName){
  	  cmpiInstance.setProperty("SystemPrinterName",CmpiData(m_SystemPrinterName));
  	}

  	if(isSet.UseClientDriver){
  	  cmpiInstance.setProperty("UseClientDriver",CmpiBooleanData(m_UseClientDriver));
  	}
  	
  	return cmpiInstance;
  	
  }
  
  
  //InstanceName related methods
  unsigned int Linux_SambaGlobalPrintingOptionsInstance::
   isInstanceNameSet() const{
  	return isSet.instanceName;
  }
  
  const Linux_SambaGlobalPrintingOptionsInstanceName&
    Linux_SambaGlobalPrintingOptionsInstance::getInstanceName() const{

    if(!isSet.instanceName)
   	  throw CmpiErrorFormater::getErrorException(
   	   CmpiErrorFormater::NOT_SET,
   	   "InstanceName not set in Linux_SambaGlobalPrintingOptions instance");
  		
   	return m_instanceName;
  }

  void Linux_SambaGlobalPrintingOptionsInstance::setInstanceName(
   const Linux_SambaGlobalPrintingOptionsInstanceName& val){
    m_instanceName = val;
    isSet.instanceName=1;
  }
       
  //Caption related methods
  unsigned int Linux_SambaGlobalPrintingOptionsInstance::isCaptionSet() const{
    return isSet.Caption;
  }
  void  Linux_SambaGlobalPrintingOptionsInstance::
   setCaption(const char* val, int makeCopy){
    if (isSet.Caption) {
      delete []m_Caption;
    }
    if (makeCopy&&val) {
      char* tmpval = new char[strlen(val)+1];
      strcpy(tmpval,val);
      m_Caption = tmpval;
    } else {
      m_Caption = val;
    }
    isSet.Caption=1;
  }       
  const char* Linux_SambaGlobalPrintingOptionsInstance::
   getCaption() const{
    
    if(!isSet.Caption)
   	  throw CmpiErrorFormater::getErrorException(
   	   CmpiErrorFormater::NOT_SET,
   	   "Caption not set");
   	   	
    return m_Caption;
  }
       
  //CupsOptions related methods
  unsigned int Linux_SambaGlobalPrintingOptionsInstance::isCupsOptionsSet() const{
    return isSet.CupsOptions;
  }
  void  Linux_SambaGlobalPrintingOptionsInstance::
   setCupsOptions(const char* val, int makeCopy){
    if (isSet.CupsOptions) {
      delete []m_CupsOptions;
    }
    if (makeCopy&&val) {
      char* tmpval = new char[strlen(val)+1];
      strcpy(tmpval,val);
      m_CupsOptions = tmpval;
    } else {
      m_CupsOptions = val;
    }
    isSet.CupsOptions=1;
  }       
  const char* Linux_SambaGlobalPrintingOptionsInstance::
   getCupsOptions() const{
    
    if(!isSet.CupsOptions)
   	  throw CmpiErrorFormater::getErrorException(
   	   CmpiErrorFormater::NOT_SET,
   	   "CupsOptions not set");
   	   	
    return m_CupsOptions;
  }
       
  //DefaultDevMode related methods
  unsigned int Linux_SambaGlobalPrintingOptionsInstance::isDefaultDevModeSet() const{
    return isSet.DefaultDevMode;
  }
  void Linux_SambaGlobalPrintingOptionsInstance::
   setDefaultDevMode(const CMPIBoolean val){
    m_DefaultDevMode = val;
    isSet.DefaultDevMode=1;
  }       
  const CMPIBoolean Linux_SambaGlobalPrintingOptionsInstance::
   getDefaultDevMode() const{
    
    if(!isSet.DefaultDevMode)
   	  throw CmpiErrorFormater::getErrorException(
   	   CmpiErrorFormater::NOT_SET,
   	   "DefaultDevMode not set");
   	   	
    return m_DefaultDevMode;
  }
       
  //Description related methods
  unsigned int Linux_SambaGlobalPrintingOptionsInstance::isDescriptionSet() const{
    return isSet.Description;
  }
  void  Linux_SambaGlobalPrintingOptionsInstance::
   setDescription(const char* val, int makeCopy){
    if (isSet.Description) {
      delete []m_Description;
    }
    if (makeCopy&&val) {
      char* tmpval = new char[strlen(val)+1];
      strcpy(tmpval,val);
      m_Description = tmpval;
    } else {
      m_Description = val;
    }
    isSet.Description=1;
  }       
  const char* Linux_SambaGlobalPrintingOptionsInstance::
   getDescription() const{
    
    if(!isSet.Description)
   	  throw CmpiErrorFormater::getErrorException(
   	   CmpiErrorFormater::NOT_SET,
   	   "Description not set");
   	   	
    return m_Description;
  }
       
  //ElementName related methods
  unsigned int Linux_SambaGlobalPrintingOptionsInstance::isElementNameSet() const{
    return isSet.ElementName;
  }
  void  Linux_SambaGlobalPrintingOptionsInstance::
   setElementName(const char* val, int makeCopy){
    if (isSet.ElementName) {
      delete []m_ElementName;
    }
    if (makeCopy&&val) {
      char* tmpval = new char[strlen(val)+1];
      strcpy(tmpval,val);
      m_ElementName = tmpval;
    } else {
      m_ElementName = val;
    }
    isSet.ElementName=1;
  }       
  const char* Linux_SambaGlobalPrintingOptionsInstance::
   getElementName() const{
    
    if(!isSet.ElementName)
   	  throw CmpiErrorFormater::getErrorException(
   	   CmpiErrorFormater::NOT_SET,
   	   "ElementName not set");
   	   	
    return m_ElementName;
  }
       
  //MaxPrintjobs related methods
  unsigned int Linux_SambaGlobalPrintingOptionsInstance::isMaxPrintjobsSet() const{
    return isSet.MaxPrintjobs;
  }
  void Linux_SambaGlobalPrintingOptionsInstance::
   setMaxPrintjobs(const CMPIUint64 val){
    m_MaxPrintjobs = val;
    isSet.MaxPrintjobs=1;
  }       
  const CMPIUint64 Linux_SambaGlobalPrintingOptionsInstance::
   getMaxPrintjobs() const{
    
    if(!isSet.MaxPrintjobs)
   	  throw CmpiErrorFormater::getErrorException(
   	   CmpiErrorFormater::NOT_SET,
   	   "MaxPrintjobs not set");
   	   	
    return m_MaxPrintjobs;
  }
       
  //MaxReportedPrintjobs related methods
  unsigned int Linux_SambaGlobalPrintingOptionsInstance::isMaxReportedPrintjobsSet() const{
    return isSet.MaxReportedPrintjobs;
  }
  void Linux_SambaGlobalPrintingOptionsInstance::
   setMaxReportedPrintjobs(const CMPIUint64 val){
    m_MaxReportedPrintjobs = val;
    isSet.MaxReportedPrintjobs=1;
  }       
  const CMPIUint64 Linux_SambaGlobalPrintingOptionsInstance::
   getMaxReportedPrintjobs() const{
    
    if(!isSet.MaxReportedPrintjobs)
   	  throw CmpiErrorFormater::getErrorException(
   	   CmpiErrorFormater::NOT_SET,
   	   "MaxReportedPrintjobs not set");
   	   	
    return m_MaxReportedPrintjobs;
  }
       
  //PrintCommand related methods
  unsigned int Linux_SambaGlobalPrintingOptionsInstance::isPrintCommandSet() const{
    return isSet.PrintCommand;
  }
  void  Linux_SambaGlobalPrintingOptionsInstance::
   setPrintCommand(const char* val, int makeCopy){
    if (isSet.PrintCommand) {
      delete []m_PrintCommand;
    }
    if (makeCopy&&val) {
      char* tmpval = new char[strlen(val)+1];
      strcpy(tmpval,val);
      m_PrintCommand = tmpval;
    } else {
      m_PrintCommand = val;
    }
    isSet.PrintCommand=1;
  }       
  const char* Linux_SambaGlobalPrintingOptionsInstance::
   getPrintCommand() const{
    
    if(!isSet.PrintCommand)
   	  throw CmpiErrorFormater::getErrorException(
   	   CmpiErrorFormater::NOT_SET,
   	   "PrintCommand not set");
   	   	
    return m_PrintCommand;
  }
       
  //PrintcapCacheTime related methods
  unsigned int Linux_SambaGlobalPrintingOptionsInstance::isPrintcapCacheTimeSet() const{
    return isSet.PrintcapCacheTime;
  }
  void Linux_SambaGlobalPrintingOptionsInstance::
   setPrintcapCacheTime(const CMPIUint64 val){
    m_PrintcapCacheTime = val;
    isSet.PrintcapCacheTime=1;
  }       
  const CMPIUint64 Linux_SambaGlobalPrintingOptionsInstance::
   getPrintcapCacheTime() const{
    
    if(!isSet.PrintcapCacheTime)
   	  throw CmpiErrorFormater::getErrorException(
   	   CmpiErrorFormater::NOT_SET,
   	   "PrintcapCacheTime not set");
   	   	
    return m_PrintcapCacheTime;
  }
       
  //SystemPrinterName related methods
  unsigned int Linux_SambaGlobalPrintingOptionsInstance::isSystemPrinterNameSet() const{
    return isSet.SystemPrinterName;
  }
  void  Linux_SambaGlobalPrintingOptionsInstance::
   setSystemPrinterName(const char* val, int makeCopy){
    if (isSet.SystemPrinterName) {
      delete []m_SystemPrinterName;
    }
    if (makeCopy&&val) {
      char* tmpval = new char[strlen(val)+1];
      strcpy(tmpval,val);
      m_SystemPrinterName = tmpval;
    } else {
      m_SystemPrinterName = val;
    }
    isSet.SystemPrinterName=1;
  }       
  const char* Linux_SambaGlobalPrintingOptionsInstance::
   getSystemPrinterName() const{
    
    if(!isSet.SystemPrinterName)
   	  throw CmpiErrorFormater::getErrorException(
   	   CmpiErrorFormater::NOT_SET,
   	   "SystemPrinterName not set");
   	   	
    return m_SystemPrinterName;
  }
       
  //UseClientDriver related methods
  unsigned int Linux_SambaGlobalPrintingOptionsInstance::isUseClientDriverSet() const{
    return isSet.UseClientDriver;
  }
  void Linux_SambaGlobalPrintingOptionsInstance::
   setUseClientDriver(const CMPIBoolean val){
    m_UseClientDriver = val;
    isSet.UseClientDriver=1;
  }       
  const CMPIBoolean Linux_SambaGlobalPrintingOptionsInstance::
   getUseClientDriver() const{
    
    if(!isSet.UseClientDriver)
   	  throw CmpiErrorFormater::getErrorException(
   	   CmpiErrorFormater::NOT_SET,
   	   "UseClientDriver not set");
   	   	
    return m_UseClientDriver;
  }


  
  //set isSet attributes to FALSE
  void Linux_SambaGlobalPrintingOptionsInstance::init(){
   	isSet.instanceName=0;
   	   	
    isSet.Caption=0;   	
    isSet.CupsOptions=0;   	
    isSet.DefaultDevMode=0;   	
    isSet.Description=0;   	
    isSet.ElementName=0;   	
    isSet.MaxPrintjobs=0;   	
    isSet.MaxReportedPrintjobs=0;   	
    isSet.PrintCommand=0;   	
    isSet.PrintcapCacheTime=0;   	
    isSet.SystemPrinterName=0;   	
    isSet.UseClientDriver=0;  	
  };
  
  
  //copies another instance properties in this
  void Linux_SambaGlobalPrintingOptionsInstance::init
   (const Linux_SambaGlobalPrintingOptionsInstance& original){   	
   	init();
   	   	
    if(original.isInstanceNameSet()){
      setInstanceName(original.getInstanceName());
    }   	
    if(original.isCaptionSet()){
      const char* CaptionOriginal=original.getCaption();
      setCaption(CaptionOriginal, 1);
    }   	
    if(original.isCupsOptionsSet()){
      const char* CupsOptionsOriginal=original.getCupsOptions();
      setCupsOptions(CupsOptionsOriginal, 1);
    }   	
    if(original.isDefaultDevModeSet()){
      const CMPIBoolean DefaultDevModeOriginal=original.getDefaultDevMode();
      setDefaultDevMode(DefaultDevModeOriginal);
    }   	
    if(original.isDescriptionSet()){
      const char* DescriptionOriginal=original.getDescription();
      setDescription(DescriptionOriginal, 1);
    }   	
    if(original.isElementNameSet()){
      const char* ElementNameOriginal=original.getElementName();
      setElementName(ElementNameOriginal, 1);
    }   	
    if(original.isMaxPrintjobsSet()){
      const CMPIUint64 MaxPrintjobsOriginal=original.getMaxPrintjobs();
      setMaxPrintjobs(MaxPrintjobsOriginal);
    }   	
    if(original.isMaxReportedPrintjobsSet()){
      const CMPIUint64 MaxReportedPrintjobsOriginal=original.getMaxReportedPrintjobs();
      setMaxReportedPrintjobs(MaxReportedPrintjobsOriginal);
    }   	
    if(original.isPrintCommandSet()){
      const char* PrintCommandOriginal=original.getPrintCommand();
      setPrintCommand(PrintCommandOriginal, 1);
    }   	
    if(original.isPrintcapCacheTimeSet()){
      const CMPIUint64 PrintcapCacheTimeOriginal=original.getPrintcapCacheTime();
      setPrintcapCacheTime(PrintcapCacheTimeOriginal);
    }   	
    if(original.isSystemPrinterNameSet()){
      const char* SystemPrinterNameOriginal=original.getSystemPrinterName();
      setSystemPrinterName(SystemPrinterNameOriginal, 1);
    }   	
    if(original.isUseClientDriverSet()){
      const CMPIBoolean UseClientDriverOriginal=original.getUseClientDriver();
      setUseClientDriver(UseClientDriverOriginal);
    }    
   }
  
  
  //reset the instance data
  void Linux_SambaGlobalPrintingOptionsInstance::reset(){
   	

  	if (isSet.Caption)
  	  delete(m_Caption);

  	if (isSet.CupsOptions)
  	  delete(m_CupsOptions);

  	if (isSet.Description)
  	  delete(m_Description);

  	if (isSet.ElementName)
  	  delete(m_ElementName);

  	if (isSet.PrintCommand)
  	  delete(m_PrintCommand);

  	if (isSet.SystemPrinterName)
  	  delete(m_SystemPrinterName);
  	  
  };
  
  
  //*********************************************************
  //Linux_SambaGlobalPrintingOptionsInstanceEnumerationElement	
  //*********************************************************
  
  Linux_SambaGlobalPrintingOptionsInstanceEnumerationElement::
   Linux_SambaGlobalPrintingOptionsInstanceEnumerationElement(){
   	
  	m_elementP=0;
  	m_nextP=0;
  	  
  };
  
  
  Linux_SambaGlobalPrintingOptionsInstanceEnumerationElement::
   ~Linux_SambaGlobalPrintingOptionsInstanceEnumerationElement(){
   	
  	if (m_elementP!=0)
  	  delete(m_elementP);
  	if (m_nextP!=0)
  	  delete(m_nextP);
  	  
  };

  
  //*********************************************************
  //Linux_SambaGlobalPrintingOptionsInstanceNameEnumeration
  //*********************************************************

  Linux_SambaGlobalPrintingOptionsInstanceEnumeration::
   Linux_SambaGlobalPrintingOptionsInstanceEnumeration(){
   	
  	 firstElementP=0;
     currentElementP=0;
     endElementP=0;
  };
  
  Linux_SambaGlobalPrintingOptionsInstanceEnumeration::
   Linux_SambaGlobalPrintingOptionsInstanceEnumeration(
   const Linux_SambaGlobalPrintingOptionsInstanceEnumeration& original){
   	
     firstElementP=0;
     currentElementP=0;
     endElementP=0;
  	 
     int size=original.getSize();
     for(int i=0;i<size;i++)
       addElement(original.getElement(i));           
  };
  
  	  
  Linux_SambaGlobalPrintingOptionsInstanceEnumeration::
   ~Linux_SambaGlobalPrintingOptionsInstanceEnumeration(){
   	
  	if (firstElementP!=0)
  	  delete(firstElementP);
  	  	
  };
  
  	  
  void Linux_SambaGlobalPrintingOptionsInstanceEnumeration::reset(){
  	
  	currentElementP=firstElementP;
  };
  
  	  
  bool Linux_SambaGlobalPrintingOptionsInstanceEnumeration::hasNext() const{
  	
  	return (currentElementP!=0);
  
  };
  
  int Linux_SambaGlobalPrintingOptionsInstanceEnumeration::getSize() const{
  	
    int size=0;
    Linux_SambaGlobalPrintingOptionsInstanceEnumerationElement* followingP=firstElementP;
  	
  	while(followingP!=0){
        followingP=followingP->m_nextP;
        size++;
    }
  	
    return size;
    
  };
  
  const Linux_SambaGlobalPrintingOptionsInstance&  
   Linux_SambaGlobalPrintingOptionsInstanceEnumeration::getElement(int pos) const{
   
    Linux_SambaGlobalPrintingOptionsInstanceEnumerationElement* followingP=firstElementP;
   
    int i=0;
    while((followingP!=0)&&(i<pos)){
        followingP=followingP->m_nextP;
        i++;
    }
    
    return *(followingP->m_elementP);
  };
  
  	  
  const Linux_SambaGlobalPrintingOptionsInstance&
   Linux_SambaGlobalPrintingOptionsInstanceEnumeration::getNext() {
   	
  	 Linux_SambaGlobalPrintingOptionsInstanceEnumerationElement* currentP=
  	  currentElementP;
  	 currentElementP=currentElementP->m_nextP;
  	 
  	 return *(currentP->m_elementP);
  };
  	  
  void Linux_SambaGlobalPrintingOptionsInstanceEnumeration::addElement
   (const Linux_SambaGlobalPrintingOptionsInstance& elementP){
   	
  	if(firstElementP==0){
  	  firstElementP=new Linux_SambaGlobalPrintingOptionsInstanceEnumerationElement();
  	  firstElementP->m_elementP=new Linux_SambaGlobalPrintingOptionsInstance(elementP);
  	  endElementP=firstElementP;
  	  currentElementP=firstElementP;
  	}else{
  	  endElementP->m_nextP=new Linux_SambaGlobalPrintingOptionsInstanceEnumerationElement();
  	  endElementP=endElementP->m_nextP;
  	  endElementP->m_elementP=new Linux_SambaGlobalPrintingOptionsInstance(elementP);
  	}
  };  
}
 
