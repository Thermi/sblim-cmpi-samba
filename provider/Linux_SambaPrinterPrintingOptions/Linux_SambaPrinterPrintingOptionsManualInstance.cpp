/**
 *  Linux_SambaPrinterPrintingOptionsManualInstance.cpp
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


#include "Linux_SambaPrinterPrintingOptionsManualInstance.h"
#include "CmpiData.h"
#include "CmpiString.h"
#include "CmpiArray.h"
#include <string>

namespace genProvider {

  //*********************************************************
  //Linux_SambaPrinterPrintingOptionsManualInstance
  //*********************************************************

  //empty constructor
  Linux_SambaPrinterPrintingOptionsManualInstance::
   Linux_SambaPrinterPrintingOptionsManualInstance(){   	
   	init();  	   	
  };
  
  
  //copy constructor	
  Linux_SambaPrinterPrintingOptionsManualInstance::
   Linux_SambaPrinterPrintingOptionsManualInstance
   (const Linux_SambaPrinterPrintingOptionsManualInstance& original){   	
   	init(original);  	   	
  };
  
  
  //constructor using CmpiInstance
  Linux_SambaPrinterPrintingOptionsManualInstance::
   Linux_SambaPrinterPrintingOptionsManualInstance (const CmpiInstance& inst, const char* instanceNamespace){
    CmpiData cmpiData;
    init(); 
    
    CmpiObjectPath cop=inst.getObjectPath();
    cop.setNameSpace(instanceNamespace);
    setInstanceName(Linux_SambaPrinterPrintingOptionsInstanceName(cop));
    
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
    
    cmpiData = inst.getProperty("UseClientDriver");
    if(!cmpiData.isNullValue()){
      CMPIBoolean UseClientDriver = cmpiData;
      setUseClientDriver(UseClientDriver);
    }
    
  }
  
  
  //Destructor
  Linux_SambaPrinterPrintingOptionsManualInstance::
   ~Linux_SambaPrinterPrintingOptionsManualInstance(){
   	reset();  	  
  };
  
  
  //copy operator
  Linux_SambaPrinterPrintingOptionsManualInstance&
   Linux_SambaPrinterPrintingOptionsManualInstance::operator=
   (const Linux_SambaPrinterPrintingOptionsManualInstance& original){   	
   	init(original);
   	return *this;
  };
  
  
  //converts to CmpiInstance
  CmpiInstance Linux_SambaPrinterPrintingOptionsManualInstance::
   getCmpiInstance(const char** properties) const{
   	
   	CmpiObjectPath objectPath=getInstanceName().getObjectPath();      
    CmpiInstance cmpiInstance(objectPath);    
    getInstanceName().fillKeys(cmpiInstance);
    
    if (properties) {
	  cmpiInstance.setPropertyFilter(properties,0);
    }

  	if(isSet.CupsOptions){
  	  cmpiInstance.setProperty("CupsOptions",CmpiData(m_CupsOptions));
  	}

  	if(isSet.DefaultDevMode){
  	  cmpiInstance.setProperty("DefaultDevMode",CmpiBooleanData(m_DefaultDevMode));
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

  	if(isSet.UseClientDriver){
  	  cmpiInstance.setProperty("UseClientDriver",CmpiBooleanData(m_UseClientDriver));
  	}
  	
  	return cmpiInstance;
  	
  }
  
  
  //InstanceName related methods
  unsigned int Linux_SambaPrinterPrintingOptionsManualInstance::
   isInstanceNameSet() const{
  	return isSet.instanceName;
  }
  
  const Linux_SambaPrinterPrintingOptionsInstanceName&
    Linux_SambaPrinterPrintingOptionsManualInstance::getInstanceName() const{

    if(!isSet.instanceName)
   	  throw CmpiErrorFormater::getErrorException(
   	   CmpiErrorFormater::NOT_SET,
   	   "InstanceName not set in Linux_SambaPrinterPrintingOptions instance");
  		
   	return m_instanceName;
  }

  void Linux_SambaPrinterPrintingOptionsManualInstance::setInstanceName(
   const Linux_SambaPrinterPrintingOptionsInstanceName& val){
    m_instanceName = val;
    isSet.instanceName=1;
  }
       
  //CupsOptions related methods
  unsigned int Linux_SambaPrinterPrintingOptionsManualInstance::isCupsOptionsSet() const{
    return isSet.CupsOptions;
  }
  void  Linux_SambaPrinterPrintingOptionsManualInstance::
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
  const char* Linux_SambaPrinterPrintingOptionsManualInstance::
   getCupsOptions() const{
    
    if(!isSet.CupsOptions)
   	  throw CmpiErrorFormater::getErrorException(
   	   CmpiErrorFormater::NOT_SET,
   	   "CupsOptions not set");
   	   	
    return m_CupsOptions;
  }
       
  //DefaultDevMode related methods
  unsigned int Linux_SambaPrinterPrintingOptionsManualInstance::isDefaultDevModeSet() const{
    return isSet.DefaultDevMode;
  }
  void Linux_SambaPrinterPrintingOptionsManualInstance::
   setDefaultDevMode(const CMPIBoolean val){
    m_DefaultDevMode = val;
    isSet.DefaultDevMode=1;
  }       
  const CMPIBoolean Linux_SambaPrinterPrintingOptionsManualInstance::
   getDefaultDevMode() const{
    
    if(!isSet.DefaultDevMode)
   	  throw CmpiErrorFormater::getErrorException(
   	   CmpiErrorFormater::NOT_SET,
   	   "DefaultDevMode not set");
   	   	
    return m_DefaultDevMode;
  }
       
  //MaxPrintjobs related methods
  unsigned int Linux_SambaPrinterPrintingOptionsManualInstance::isMaxPrintjobsSet() const{
    return isSet.MaxPrintjobs;
  }
  void Linux_SambaPrinterPrintingOptionsManualInstance::
   setMaxPrintjobs(const CMPIUint64 val){
    m_MaxPrintjobs = val;
    isSet.MaxPrintjobs=1;
  }       
  const CMPIUint64 Linux_SambaPrinterPrintingOptionsManualInstance::
   getMaxPrintjobs() const{
    
    if(!isSet.MaxPrintjobs)
   	  throw CmpiErrorFormater::getErrorException(
   	   CmpiErrorFormater::NOT_SET,
   	   "MaxPrintjobs not set");
   	   	
    return m_MaxPrintjobs;
  }
       
  //MaxReportedPrintjobs related methods
  unsigned int Linux_SambaPrinterPrintingOptionsManualInstance::isMaxReportedPrintjobsSet() const{
    return isSet.MaxReportedPrintjobs;
  }
  void Linux_SambaPrinterPrintingOptionsManualInstance::
   setMaxReportedPrintjobs(const CMPIUint64 val){
    m_MaxReportedPrintjobs = val;
    isSet.MaxReportedPrintjobs=1;
  }       
  const CMPIUint64 Linux_SambaPrinterPrintingOptionsManualInstance::
   getMaxReportedPrintjobs() const{
    
    if(!isSet.MaxReportedPrintjobs)
   	  throw CmpiErrorFormater::getErrorException(
   	   CmpiErrorFormater::NOT_SET,
   	   "MaxReportedPrintjobs not set");
   	   	
    return m_MaxReportedPrintjobs;
  }
       
  //PrintCommand related methods
  unsigned int Linux_SambaPrinterPrintingOptionsManualInstance::isPrintCommandSet() const{
    return isSet.PrintCommand;
  }
  void  Linux_SambaPrinterPrintingOptionsManualInstance::
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
  const char* Linux_SambaPrinterPrintingOptionsManualInstance::
   getPrintCommand() const{
    
    if(!isSet.PrintCommand)
   	  throw CmpiErrorFormater::getErrorException(
   	   CmpiErrorFormater::NOT_SET,
   	   "PrintCommand not set");
   	   	
    return m_PrintCommand;
  }
       
  //UseClientDriver related methods
  unsigned int Linux_SambaPrinterPrintingOptionsManualInstance::isUseClientDriverSet() const{
    return isSet.UseClientDriver;
  }
  void Linux_SambaPrinterPrintingOptionsManualInstance::
   setUseClientDriver(const CMPIBoolean val){
    m_UseClientDriver = val;
    isSet.UseClientDriver=1;
  }       
  const CMPIBoolean Linux_SambaPrinterPrintingOptionsManualInstance::
   getUseClientDriver() const{
    
    if(!isSet.UseClientDriver)
   	  throw CmpiErrorFormater::getErrorException(
   	   CmpiErrorFormater::NOT_SET,
   	   "UseClientDriver not set");
   	   	
    return m_UseClientDriver;
  }


  
  //set isSet attributes to FALSE
  void Linux_SambaPrinterPrintingOptionsManualInstance::init(){
   	isSet.instanceName=0;
   	   	
    isSet.CupsOptions=0;   	
    isSet.DefaultDevMode=0;   	
    isSet.MaxPrintjobs=0;   	
    isSet.MaxReportedPrintjobs=0;   	
    isSet.PrintCommand=0;   	
    isSet.UseClientDriver=0;  	
  };
  
  
  //copies another instance properties in this
  void Linux_SambaPrinterPrintingOptionsManualInstance::init
   (const Linux_SambaPrinterPrintingOptionsManualInstance& original){   	
   	init();
   	   	
    if(original.isInstanceNameSet()){
      setInstanceName(original.getInstanceName());
    }   	
    if(original.isCupsOptionsSet()){
      const char* CupsOptionsOriginal=original.getCupsOptions();
      setCupsOptions(CupsOptionsOriginal, 1);
    }   	
    if(original.isDefaultDevModeSet()){
      const CMPIBoolean DefaultDevModeOriginal=original.getDefaultDevMode();
      setDefaultDevMode(DefaultDevModeOriginal);
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
    if(original.isUseClientDriverSet()){
      const CMPIBoolean UseClientDriverOriginal=original.getUseClientDriver();
      setUseClientDriver(UseClientDriverOriginal);
    }    
   }
  
  
  //reset the instance data
  void Linux_SambaPrinterPrintingOptionsManualInstance::reset(){
   	

  	if (isSet.CupsOptions)
  	  delete(m_CupsOptions);

  	if (isSet.PrintCommand)
  	  delete(m_PrintCommand);
  	  
  };
  
  
  //*********************************************************
  //Linux_SambaPrinterPrintingOptionsManualInstanceEnumerationElement	
  //*********************************************************
  
  Linux_SambaPrinterPrintingOptionsManualInstanceEnumerationElement::
   Linux_SambaPrinterPrintingOptionsManualInstanceEnumerationElement(){
   	
  	m_elementP=0;
  	m_nextP=0;
  	  
  };
  
  
  Linux_SambaPrinterPrintingOptionsManualInstanceEnumerationElement::
   ~Linux_SambaPrinterPrintingOptionsManualInstanceEnumerationElement(){
   	
  	if (m_elementP!=0)
  	  delete(m_elementP);
  	if (m_nextP!=0)
  	  delete(m_nextP);
  	  
  };

  
  //*********************************************************
  //Linux_SambaPrinterPrintingOptionsManualInstanceNameEnumeration
  //*********************************************************

  Linux_SambaPrinterPrintingOptionsManualInstanceEnumeration::
   Linux_SambaPrinterPrintingOptionsManualInstanceEnumeration(){
   	
  	 firstElementP=0;
     currentElementP=0;
     endElementP=0;
  };
  
  Linux_SambaPrinterPrintingOptionsManualInstanceEnumeration::
   Linux_SambaPrinterPrintingOptionsManualInstanceEnumeration(
   const Linux_SambaPrinterPrintingOptionsManualInstanceEnumeration& original){
   	
     firstElementP=0;
     currentElementP=0;
     endElementP=0;
  	 
     int size=original.getSize();
     for(int i=0;i<size;i++)
       addElement(original.getElement(i));           
  };
  
  	  
  Linux_SambaPrinterPrintingOptionsManualInstanceEnumeration::
   ~Linux_SambaPrinterPrintingOptionsManualInstanceEnumeration(){
   	
  	if (firstElementP!=0)
  	  delete(firstElementP);
  	  	
  };
  
  	  
  void Linux_SambaPrinterPrintingOptionsManualInstanceEnumeration::reset(){
  	
  	currentElementP=firstElementP;
  };
  
  	  
  bool Linux_SambaPrinterPrintingOptionsManualInstanceEnumeration::hasNext() const{
  	
  	return (currentElementP!=0);
  
  };
  
  int Linux_SambaPrinterPrintingOptionsManualInstanceEnumeration::getSize() const{
  	
    int size=0;
    Linux_SambaPrinterPrintingOptionsManualInstanceEnumerationElement* followingP=firstElementP;
  	
  	while(followingP!=0){
        followingP=followingP->m_nextP;
        size++;
    }
  	
    return size;
    
  };
  
  const Linux_SambaPrinterPrintingOptionsManualInstance&  
   Linux_SambaPrinterPrintingOptionsManualInstanceEnumeration::getElement(int pos) const{
   
    Linux_SambaPrinterPrintingOptionsManualInstanceEnumerationElement* followingP=firstElementP;
   
    int i=0;
    while((followingP!=0)&&(i<pos)){
        followingP=followingP->m_nextP;
        i++;
    }
    
    return *(followingP->m_elementP);
  };
  
  	  
  const Linux_SambaPrinterPrintingOptionsManualInstance&
   Linux_SambaPrinterPrintingOptionsManualInstanceEnumeration::getNext() {
   	
  	 Linux_SambaPrinterPrintingOptionsManualInstanceEnumerationElement* currentP=
  	  currentElementP;
  	 currentElementP=currentElementP->m_nextP;
  	 
  	 return *(currentP->m_elementP);
  };
  	  
  void Linux_SambaPrinterPrintingOptionsManualInstanceEnumeration::addElement
   (const Linux_SambaPrinterPrintingOptionsManualInstance& elementP){
   	
  	if(firstElementP==0){
  	  firstElementP=new Linux_SambaPrinterPrintingOptionsManualInstanceEnumerationElement();
  	  firstElementP->m_elementP=new Linux_SambaPrinterPrintingOptionsManualInstance(elementP);
  	  endElementP=firstElementP;
  	  currentElementP=firstElementP;
  	}else{
  	  endElementP->m_nextP=new Linux_SambaPrinterPrintingOptionsManualInstanceEnumerationElement();
  	  endElementP=endElementP->m_nextP;
  	  endElementP->m_elementP=new Linux_SambaPrinterPrintingOptionsManualInstance(elementP);
  	}
  };  
}
 
