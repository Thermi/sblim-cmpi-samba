/**
 *  Linux_SambaServiceInstance.cpp
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


#include "Linux_SambaServiceInstance.h"
#include "CmpiData.h"
#include "CmpiString.h"
#include "CmpiArray.h"
#include <string>

namespace genProvider {

  //*********************************************************
  //Linux_SambaServiceInstance
  //*********************************************************

  //empty constructor
  Linux_SambaServiceInstance::
   Linux_SambaServiceInstance(){   	
   	init();  	   	
  };
  
  
  //copy constructor	
  Linux_SambaServiceInstance::
   Linux_SambaServiceInstance
   (const Linux_SambaServiceInstance& original){   	
   	init(original);  	   	
  };
  
  
  //constructor using CmpiInstance
  Linux_SambaServiceInstance::
   Linux_SambaServiceInstance (const CmpiInstance& inst, const char* instanceNamespace){
    CmpiData cmpiData;
    init(); 
    
    CmpiObjectPath cop=inst.getObjectPath();
    cop.setNameSpace(instanceNamespace);
    setInstanceName(Linux_SambaServiceInstanceName(cop));
    
    cmpiData = inst.getProperty("Caption");
    if(!cmpiData.isNullValue()){
      CmpiString Caption = cmpiData;
      setCaption(Caption.charPtr());
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
    
    cmpiData = inst.getProperty("EnabledDefault");
    if(!cmpiData.isNullValue()){
      CMPIUint16 EnabledDefault = cmpiData;
      setEnabledDefault(EnabledDefault);
    }
    
    cmpiData = inst.getProperty("EnabledState");
    if(!cmpiData.isNullValue()){
      CMPIUint16 EnabledState = cmpiData;
      setEnabledState(EnabledState);
    }
    
    cmpiData = inst.getProperty("InstallDate");
    if(!cmpiData.isNullValue()){
      CmpiDateTime InstallDate = cmpiData;
      setInstallDate(InstallDate);
    }
    
    cmpiData = inst.getProperty("OperationalStatus");
    if(!cmpiData.isNullValue()){
      CmpiArray OperationalStatus = cmpiData;
      unsigned int OperationalStatusSize;
      const CMPIUint16* OperationalStatusArray;
      ArrayConverter::makeArray(OperationalStatus, (CMPIUint16**)&OperationalStatusArray, OperationalStatusSize);
      setOperationalStatus(OperationalStatusArray, OperationalStatusSize, 0);
    }
    
    cmpiData = inst.getProperty("OtherEnabledState");
    if(!cmpiData.isNullValue()){
      CmpiString OtherEnabledState = cmpiData;
      setOtherEnabledState(OtherEnabledState.charPtr());
    }
    
    cmpiData = inst.getProperty("PrimaryOwnerContact");
    if(!cmpiData.isNullValue()){
      CmpiString PrimaryOwnerContact = cmpiData;
      setPrimaryOwnerContact(PrimaryOwnerContact.charPtr());
    }
    
    cmpiData = inst.getProperty("PrimaryOwnerName");
    if(!cmpiData.isNullValue()){
      CmpiString PrimaryOwnerName = cmpiData;
      setPrimaryOwnerName(PrimaryOwnerName.charPtr());
    }
    
    cmpiData = inst.getProperty("RequestedState");
    if(!cmpiData.isNullValue()){
      CMPIUint16 RequestedState = cmpiData;
      setRequestedState(RequestedState);
    }
    
    cmpiData = inst.getProperty("StartMode");
    if(!cmpiData.isNullValue()){
      CmpiString StartMode = cmpiData;
      setStartMode(StartMode.charPtr());
    }
    
    cmpiData = inst.getProperty("Started");
    if(!cmpiData.isNullValue()){
      CMPIBoolean Started = cmpiData;
      setStarted(Started);
    }
    
    cmpiData = inst.getProperty("Status");
    if(!cmpiData.isNullValue()){
      CmpiString Status = cmpiData;
      setStatus(Status.charPtr());
    }
    
    cmpiData = inst.getProperty("StatusDescriptions");
    if(!cmpiData.isNullValue()){
      CmpiArray StatusDescriptions = cmpiData;
      unsigned int StatusDescriptionsSize;
      const char** StatusDescriptionsArray;
      ArrayConverter::makeArray(StatusDescriptions, (char***)&StatusDescriptionsArray, StatusDescriptionsSize);
      setStatusDescriptions(StatusDescriptionsArray, StatusDescriptionsSize, 0);
    }
    
    cmpiData = inst.getProperty("TimeOfLastStateChange");
    if(!cmpiData.isNullValue()){
      CmpiDateTime TimeOfLastStateChange = cmpiData;
      setTimeOfLastStateChange(TimeOfLastStateChange);
    }
    
  }
  
  
  //Destructor
  Linux_SambaServiceInstance::
   ~Linux_SambaServiceInstance(){
   	reset();  	  
  };
  
  
  //copy operator
  Linux_SambaServiceInstance&
   Linux_SambaServiceInstance::operator=
   (const Linux_SambaServiceInstance& original){   	
   	init(original);
   	return *this;
  };
  
  
  //converts to CmpiInstance
  CmpiInstance Linux_SambaServiceInstance::
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

  	if(isSet.Description){
  	  cmpiInstance.setProperty("Description",CmpiData(m_Description));
  	}

  	if(isSet.ElementName){
  	  cmpiInstance.setProperty("ElementName",CmpiData(m_ElementName));
  	}

  	if(isSet.EnabledDefault){
  	  cmpiInstance.setProperty("EnabledDefault",CmpiData(m_EnabledDefault));
  	}

  	if(isSet.EnabledState){
  	  cmpiInstance.setProperty("EnabledState",CmpiData(m_EnabledState));
  	}

  	if(isSet.InstallDate){
  	  cmpiInstance.setProperty("InstallDate",CmpiData(m_InstallDate));
  	}

  	if(isSet.OperationalStatus){
  	  unsigned int OperationalStatusSize;
      const CMPIUint16* arrayOperationalStatus=getOperationalStatus(OperationalStatusSize);
      CmpiArray arrayCmpiOperationalStatus=CmpiArray(OperationalStatusSize,CMPI_uint16);
      for(unsigned int i=0;i<OperationalStatusSize;i++)
        arrayCmpiOperationalStatus[i]=CmpiData(arrayOperationalStatus[i]);
  	cmpiInstance.setProperty("OperationalStatus",CmpiData(arrayCmpiOperationalStatus));
  	}

  	if(isSet.OtherEnabledState){
  	  cmpiInstance.setProperty("OtherEnabledState",CmpiData(m_OtherEnabledState));
  	}

  	if(isSet.PrimaryOwnerContact){
  	  cmpiInstance.setProperty("PrimaryOwnerContact",CmpiData(m_PrimaryOwnerContact));
  	}

  	if(isSet.PrimaryOwnerName){
  	  cmpiInstance.setProperty("PrimaryOwnerName",CmpiData(m_PrimaryOwnerName));
  	}

  	if(isSet.RequestedState){
  	  cmpiInstance.setProperty("RequestedState",CmpiData(m_RequestedState));
  	}

  	if(isSet.StartMode){
  	  cmpiInstance.setProperty("StartMode",CmpiData(m_StartMode));
  	}

  	if(isSet.Started){
  	  cmpiInstance.setProperty("Started",CmpiBooleanData(m_Started));
  	}

  	if(isSet.Status){
  	  cmpiInstance.setProperty("Status",CmpiData(m_Status));
  	}

  	if(isSet.StatusDescriptions){
  	  unsigned int StatusDescriptionsSize;
      const char** arrayStatusDescriptions=getStatusDescriptions(StatusDescriptionsSize);
      CmpiArray arrayCmpiStatusDescriptions=CmpiArray(StatusDescriptionsSize,CMPI_chars);
      for(unsigned int i=0;i<StatusDescriptionsSize;i++)
        arrayCmpiStatusDescriptions[i]=CmpiData(arrayStatusDescriptions[i]);
  	cmpiInstance.setProperty("StatusDescriptions",CmpiData(arrayCmpiStatusDescriptions));
  	}

  	if(isSet.TimeOfLastStateChange){
  	  cmpiInstance.setProperty("TimeOfLastStateChange",CmpiData(m_TimeOfLastStateChange));
  	}
  	
  	return cmpiInstance;
  	
  }
  
  
  //InstanceName related methods
  unsigned int Linux_SambaServiceInstance::
   isInstanceNameSet() const{
  	return isSet.instanceName;
  }
  
  const Linux_SambaServiceInstanceName&
    Linux_SambaServiceInstance::getInstanceName() const{

    if(!isSet.instanceName)
   	  throw CmpiErrorFormater::getErrorException(
   	   CmpiErrorFormater::NOT_SET,
   	   "InstanceName not set in Linux_SambaService instance");
  		
   	return m_instanceName;
  }

  void Linux_SambaServiceInstance::setInstanceName(
   const Linux_SambaServiceInstanceName& val){
    m_instanceName = val;
    isSet.instanceName=1;
  }
       
  //Caption related methods
  unsigned int Linux_SambaServiceInstance::isCaptionSet() const{
    return isSet.Caption;
  }
  void  Linux_SambaServiceInstance::
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
  const char* Linux_SambaServiceInstance::
   getCaption() const{
    
    if(!isSet.Caption)
   	  throw CmpiErrorFormater::getErrorException(
   	   CmpiErrorFormater::NOT_SET,
   	   "Caption not set");
   	   	
    return m_Caption;
  }
       
  //Description related methods
  unsigned int Linux_SambaServiceInstance::isDescriptionSet() const{
    return isSet.Description;
  }
  void  Linux_SambaServiceInstance::
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
  const char* Linux_SambaServiceInstance::
   getDescription() const{
    
    if(!isSet.Description)
   	  throw CmpiErrorFormater::getErrorException(
   	   CmpiErrorFormater::NOT_SET,
   	   "Description not set");
   	   	
    return m_Description;
  }
       
  //ElementName related methods
  unsigned int Linux_SambaServiceInstance::isElementNameSet() const{
    return isSet.ElementName;
  }
  void  Linux_SambaServiceInstance::
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
  const char* Linux_SambaServiceInstance::
   getElementName() const{
    
    if(!isSet.ElementName)
   	  throw CmpiErrorFormater::getErrorException(
   	   CmpiErrorFormater::NOT_SET,
   	   "ElementName not set");
   	   	
    return m_ElementName;
  }
       
  //EnabledDefault related methods
  unsigned int Linux_SambaServiceInstance::isEnabledDefaultSet() const{
    return isSet.EnabledDefault;
  }
  void Linux_SambaServiceInstance::
   setEnabledDefault(const CMPIUint16 val){
    m_EnabledDefault = val;
    isSet.EnabledDefault=1;
  }       
  const CMPIUint16 Linux_SambaServiceInstance::
   getEnabledDefault() const{
    
    if(!isSet.EnabledDefault)
   	  throw CmpiErrorFormater::getErrorException(
   	   CmpiErrorFormater::NOT_SET,
   	   "EnabledDefault not set");
   	   	
    return m_EnabledDefault;
  }
       
  //EnabledState related methods
  unsigned int Linux_SambaServiceInstance::isEnabledStateSet() const{
    return isSet.EnabledState;
  }
  void Linux_SambaServiceInstance::
   setEnabledState(const CMPIUint16 val){
    m_EnabledState = val;
    isSet.EnabledState=1;
  }       
  const CMPIUint16 Linux_SambaServiceInstance::
   getEnabledState() const{
    
    if(!isSet.EnabledState)
   	  throw CmpiErrorFormater::getErrorException(
   	   CmpiErrorFormater::NOT_SET,
   	   "EnabledState not set");
   	   	
    return m_EnabledState;
  }
       
  //InstallDate related methods
  unsigned int Linux_SambaServiceInstance::isInstallDateSet() const{
    return isSet.InstallDate;
  }
  void Linux_SambaServiceInstance::
   setInstallDate(const CmpiDateTime& val){
    m_InstallDate = val;
    isSet.InstallDate=1;
  }       
  const CmpiDateTime& Linux_SambaServiceInstance::
   getInstallDate() const{
    
    if(!isSet.InstallDate)
   	  throw CmpiErrorFormater::getErrorException(
   	   CmpiErrorFormater::NOT_SET,
   	   "InstallDate not set");
   	   	
    return m_InstallDate;
  }
       
  //OperationalStatus related methods
  unsigned int Linux_SambaServiceInstance::isOperationalStatusSet() const{
    return isSet.OperationalStatus;
  }
  void Linux_SambaServiceInstance::
   setOperationalStatus(const CMPIUint16* val, const unsigned int size, int makeCopy){
    OperationalStatusArraySize=size;
    if (isSet.OperationalStatus) {
      delete []m_OperationalStatus;
    }
    if (makeCopy&&val) {
      CMPIUint16* AnArray = new CMPIUint16[size];
      for(unsigned int i=0;i<size;i++)
        AnArray[i] = val[i];
      m_OperationalStatus=AnArray;
    } else {
      m_OperationalStatus = val;
    }
    isSet.OperationalStatus=1;
  }       
  const CMPIUint16* Linux_SambaServiceInstance::
   getOperationalStatus(unsigned int& size) const{
    
    if(!isSet.OperationalStatus)
   	  throw CmpiErrorFormater::getErrorException(
   	   CmpiErrorFormater::NOT_SET,
   	   "OperationalStatus not set");
   	   	
    size=OperationalStatusArraySize;
    return m_OperationalStatus;
  }
       
  //OtherEnabledState related methods
  unsigned int Linux_SambaServiceInstance::isOtherEnabledStateSet() const{
    return isSet.OtherEnabledState;
  }
  void  Linux_SambaServiceInstance::
   setOtherEnabledState(const char* val, int makeCopy){
    if (isSet.OtherEnabledState) {
      delete []m_OtherEnabledState;
    }
    if (makeCopy&&val) {
      char* tmpval = new char[strlen(val)+1];
      strcpy(tmpval,val);
      m_OtherEnabledState = tmpval;
    } else {
      m_OtherEnabledState = val;
    }
    isSet.OtherEnabledState=1;
  }       
  const char* Linux_SambaServiceInstance::
   getOtherEnabledState() const{
    
    if(!isSet.OtherEnabledState)
   	  throw CmpiErrorFormater::getErrorException(
   	   CmpiErrorFormater::NOT_SET,
   	   "OtherEnabledState not set");
   	   	
    return m_OtherEnabledState;
  }
       
  //PrimaryOwnerContact related methods
  unsigned int Linux_SambaServiceInstance::isPrimaryOwnerContactSet() const{
    return isSet.PrimaryOwnerContact;
  }
  void  Linux_SambaServiceInstance::
   setPrimaryOwnerContact(const char* val, int makeCopy){
    if (isSet.PrimaryOwnerContact) {
      delete []m_PrimaryOwnerContact;
    }
    if (makeCopy&&val) {
      char* tmpval = new char[strlen(val)+1];
      strcpy(tmpval,val);
      m_PrimaryOwnerContact = tmpval;
    } else {
      m_PrimaryOwnerContact = val;
    }
    isSet.PrimaryOwnerContact=1;
  }       
  const char* Linux_SambaServiceInstance::
   getPrimaryOwnerContact() const{
    
    if(!isSet.PrimaryOwnerContact)
   	  throw CmpiErrorFormater::getErrorException(
   	   CmpiErrorFormater::NOT_SET,
   	   "PrimaryOwnerContact not set");
   	   	
    return m_PrimaryOwnerContact;
  }
       
  //PrimaryOwnerName related methods
  unsigned int Linux_SambaServiceInstance::isPrimaryOwnerNameSet() const{
    return isSet.PrimaryOwnerName;
  }
  void  Linux_SambaServiceInstance::
   setPrimaryOwnerName(const char* val, int makeCopy){
    if (isSet.PrimaryOwnerName) {
      delete []m_PrimaryOwnerName;
    }
    if (makeCopy&&val) {
      char* tmpval = new char[strlen(val)+1];
      strcpy(tmpval,val);
      m_PrimaryOwnerName = tmpval;
    } else {
      m_PrimaryOwnerName = val;
    }
    isSet.PrimaryOwnerName=1;
  }       
  const char* Linux_SambaServiceInstance::
   getPrimaryOwnerName() const{
    
    if(!isSet.PrimaryOwnerName)
   	  throw CmpiErrorFormater::getErrorException(
   	   CmpiErrorFormater::NOT_SET,
   	   "PrimaryOwnerName not set");
   	   	
    return m_PrimaryOwnerName;
  }
       
  //RequestedState related methods
  unsigned int Linux_SambaServiceInstance::isRequestedStateSet() const{
    return isSet.RequestedState;
  }
  void Linux_SambaServiceInstance::
   setRequestedState(const CMPIUint16 val){
    m_RequestedState = val;
    isSet.RequestedState=1;
  }       
  const CMPIUint16 Linux_SambaServiceInstance::
   getRequestedState() const{
    
    if(!isSet.RequestedState)
   	  throw CmpiErrorFormater::getErrorException(
   	   CmpiErrorFormater::NOT_SET,
   	   "RequestedState not set");
   	   	
    return m_RequestedState;
  }
       
  //StartMode related methods
  unsigned int Linux_SambaServiceInstance::isStartModeSet() const{
    return isSet.StartMode;
  }
  void  Linux_SambaServiceInstance::
   setStartMode(const char* val, int makeCopy){
    if (isSet.StartMode) {
      delete []m_StartMode;
    }
    if (makeCopy&&val) {
      char* tmpval = new char[strlen(val)+1];
      strcpy(tmpval,val);
      m_StartMode = tmpval;
    } else {
      m_StartMode = val;
    }
    isSet.StartMode=1;
  }       
  const char* Linux_SambaServiceInstance::
   getStartMode() const{
    
    if(!isSet.StartMode)
   	  throw CmpiErrorFormater::getErrorException(
   	   CmpiErrorFormater::NOT_SET,
   	   "StartMode not set");
   	   	
    return m_StartMode;
  }
       
  //Started related methods
  unsigned int Linux_SambaServiceInstance::isStartedSet() const{
    return isSet.Started;
  }
  void Linux_SambaServiceInstance::
   setStarted(const CMPIBoolean val){
    m_Started = val;
    isSet.Started=1;
  }       
  const CMPIBoolean Linux_SambaServiceInstance::
   getStarted() const{
    
    if(!isSet.Started)
   	  throw CmpiErrorFormater::getErrorException(
   	   CmpiErrorFormater::NOT_SET,
   	   "Started not set");
   	   	
    return m_Started;
  }
       
  //Status related methods
  unsigned int Linux_SambaServiceInstance::isStatusSet() const{
    return isSet.Status;
  }
  void  Linux_SambaServiceInstance::
   setStatus(const char* val, int makeCopy){
    if (isSet.Status) {
      delete []m_Status;
    }
    if (makeCopy&&val) {
      char* tmpval = new char[strlen(val)+1];
      strcpy(tmpval,val);
      m_Status = tmpval;
    } else {
      m_Status = val;
    }
    isSet.Status=1;
  }       
  const char* Linux_SambaServiceInstance::
   getStatus() const{
    
    if(!isSet.Status)
   	  throw CmpiErrorFormater::getErrorException(
   	   CmpiErrorFormater::NOT_SET,
   	   "Status not set");
   	   	
    return m_Status;
  }
       
  //StatusDescriptions related methods
  unsigned int Linux_SambaServiceInstance::isStatusDescriptionsSet() const{
    return isSet.StatusDescriptions;
  }
  void  Linux_SambaServiceInstance::
   setStatusDescriptions(const char** val, const unsigned int size, int makeCopy){
    StatusDescriptionsArraySize=size;
    if (isSet.StatusDescriptions) {
      delete m_StatusDescriptions;
    }
    if (makeCopy&&val) {
      m_StatusDescriptions = new const char*[size];
      for(unsigned int i=0;i<size;i++){
        char* aString = new char[strlen(val[i])+1];
        strcpy(aString,val[i]);
        m_StatusDescriptions[i]=aString;
      }      
    } else {
      m_StatusDescriptions = val;
    }
    isSet.StatusDescriptions=1;
  }       
  const char** Linux_SambaServiceInstance::
   getStatusDescriptions(unsigned int& size) const{
    
    if(!isSet.StatusDescriptions)
   	  throw CmpiErrorFormater::getErrorException(
   	   CmpiErrorFormater::NOT_SET,
   	   "StatusDescriptions not set");
   	   	
    size=StatusDescriptionsArraySize;
    return m_StatusDescriptions;
  }
       
  //TimeOfLastStateChange related methods
  unsigned int Linux_SambaServiceInstance::isTimeOfLastStateChangeSet() const{
    return isSet.TimeOfLastStateChange;
  }
  void Linux_SambaServiceInstance::
   setTimeOfLastStateChange(const CmpiDateTime& val){
    m_TimeOfLastStateChange = val;
    isSet.TimeOfLastStateChange=1;
  }       
  const CmpiDateTime& Linux_SambaServiceInstance::
   getTimeOfLastStateChange() const{
    
    if(!isSet.TimeOfLastStateChange)
   	  throw CmpiErrorFormater::getErrorException(
   	   CmpiErrorFormater::NOT_SET,
   	   "TimeOfLastStateChange not set");
   	   	
    return m_TimeOfLastStateChange;
  }


  
  //set isSet attributes to FALSE
  void Linux_SambaServiceInstance::init(){
   	isSet.instanceName=0;
   	   	
    isSet.Caption=0;   	
    isSet.Description=0;   	
    isSet.ElementName=0;   	
    isSet.EnabledDefault=0;   	
    isSet.EnabledState=0;   	
    isSet.InstallDate=0;   	
    isSet.OperationalStatus=0;   	
    OperationalStatusArraySize=0;   	
    isSet.OtherEnabledState=0;   	
    isSet.PrimaryOwnerContact=0;   	
    isSet.PrimaryOwnerName=0;   	
    isSet.RequestedState=0;   	
    isSet.StartMode=0;   	
    isSet.Started=0;   	
    isSet.Status=0;   	
    isSet.StatusDescriptions=0;   	
    StatusDescriptionsArraySize=0;   	
    isSet.TimeOfLastStateChange=0;  	
  };
  
  
  //copies another instance properties in this
  void Linux_SambaServiceInstance::init
   (const Linux_SambaServiceInstance& original){   	
   	init();
   	   	
    if(original.isInstanceNameSet()){
      setInstanceName(original.getInstanceName());
    }   	
    if(original.isCaptionSet()){
      const char* CaptionOriginal=original.getCaption();
      setCaption(CaptionOriginal, 1);
    }   	
    if(original.isDescriptionSet()){
      const char* DescriptionOriginal=original.getDescription();
      setDescription(DescriptionOriginal, 1);
    }   	
    if(original.isElementNameSet()){
      const char* ElementNameOriginal=original.getElementName();
      setElementName(ElementNameOriginal, 1);
    }   	
    if(original.isEnabledDefaultSet()){
      const CMPIUint16 EnabledDefaultOriginal=original.getEnabledDefault();
      setEnabledDefault(EnabledDefaultOriginal);
    }   	
    if(original.isEnabledStateSet()){
      const CMPIUint16 EnabledStateOriginal=original.getEnabledState();
      setEnabledState(EnabledStateOriginal);
    }   	
    if(original.isInstallDateSet()){
      const CmpiDateTime& InstallDateOriginal=original.getInstallDate();
      setInstallDate(InstallDateOriginal);
    }   	
    if(original.isOperationalStatusSet()){
      unsigned int sizeOperationalStatus;
    const CMPIUint16* OperationalStatusOriginal=original.getOperationalStatus(sizeOperationalStatus);
      setOperationalStatus(OperationalStatusOriginal, sizeOperationalStatus, 1);
    }   	
    if(original.isOtherEnabledStateSet()){
      const char* OtherEnabledStateOriginal=original.getOtherEnabledState();
      setOtherEnabledState(OtherEnabledStateOriginal, 1);
    }   	
    if(original.isPrimaryOwnerContactSet()){
      const char* PrimaryOwnerContactOriginal=original.getPrimaryOwnerContact();
      setPrimaryOwnerContact(PrimaryOwnerContactOriginal, 1);
    }   	
    if(original.isPrimaryOwnerNameSet()){
      const char* PrimaryOwnerNameOriginal=original.getPrimaryOwnerName();
      setPrimaryOwnerName(PrimaryOwnerNameOriginal, 1);
    }   	
    if(original.isRequestedStateSet()){
      const CMPIUint16 RequestedStateOriginal=original.getRequestedState();
      setRequestedState(RequestedStateOriginal);
    }   	
    if(original.isStartModeSet()){
      const char* StartModeOriginal=original.getStartMode();
      setStartMode(StartModeOriginal, 1);
    }   	
    if(original.isStartedSet()){
      const CMPIBoolean StartedOriginal=original.getStarted();
      setStarted(StartedOriginal);
    }   	
    if(original.isStatusSet()){
      const char* StatusOriginal=original.getStatus();
      setStatus(StatusOriginal, 1);
    }   	
    if(original.isStatusDescriptionsSet()){
      unsigned int sizeStatusDescriptions;
    const char** StatusDescriptionsOriginal=original.getStatusDescriptions(sizeStatusDescriptions);
      setStatusDescriptions(StatusDescriptionsOriginal, sizeStatusDescriptions, 1);
    }   	
    if(original.isTimeOfLastStateChangeSet()){
      const CmpiDateTime& TimeOfLastStateChangeOriginal=original.getTimeOfLastStateChange();
      setTimeOfLastStateChange(TimeOfLastStateChangeOriginal);
    }    
   }
  
  
  //reset the instance data
  void Linux_SambaServiceInstance::reset(){
   	

  	if (isSet.Caption)
  	  delete(m_Caption);

  	if (isSet.Description)
  	  delete(m_Description);

  	if (isSet.ElementName)
  	  delete(m_ElementName);

  	if (isSet.OperationalStatus){
  	  ArrayConverter::destructArray((CMPIUint16*)m_OperationalStatus);
  	}

  	if (isSet.OtherEnabledState)
  	  delete(m_OtherEnabledState);

  	if (isSet.PrimaryOwnerContact)
  	  delete(m_PrimaryOwnerContact);

  	if (isSet.PrimaryOwnerName)
  	  delete(m_PrimaryOwnerName);

  	if (isSet.StartMode)
  	  delete(m_StartMode);

  	if (isSet.Status)
  	  delete(m_Status);

  	if (isSet.StatusDescriptions){
  	  ArrayConverter::destructArray((char**)(char**)m_StatusDescriptions,StatusDescriptionsArraySize);
  	}
  	  
  };
  
  
  //*********************************************************
  //Linux_SambaServiceInstanceEnumerationElement	
  //*********************************************************
  
  Linux_SambaServiceInstanceEnumerationElement::
   Linux_SambaServiceInstanceEnumerationElement(){
   	
  	m_elementP=0;
  	m_nextP=0;
  	  
  };
  
  
  Linux_SambaServiceInstanceEnumerationElement::
   ~Linux_SambaServiceInstanceEnumerationElement(){
   	
  	if (m_elementP!=0)
  	  delete(m_elementP);
  	if (m_nextP!=0)
  	  delete(m_nextP);
  	  
  };

  
  //*********************************************************
  //Linux_SambaServiceInstanceNameEnumeration
  //*********************************************************

  Linux_SambaServiceInstanceEnumeration::
   Linux_SambaServiceInstanceEnumeration(){
   	
  	 firstElementP=0;
     currentElementP=0;
     endElementP=0;
  };
  
  Linux_SambaServiceInstanceEnumeration::
   Linux_SambaServiceInstanceEnumeration(
   const Linux_SambaServiceInstanceEnumeration& original){
   	
     firstElementP=0;
     currentElementP=0;
     endElementP=0;
  	 
     int size=original.getSize();
     for(int i=0;i<size;i++)
       addElement(original.getElement(i));           
  };
  
  	  
  Linux_SambaServiceInstanceEnumeration::
   ~Linux_SambaServiceInstanceEnumeration(){
   	
  	if (firstElementP!=0)
  	  delete(firstElementP);
  	  	
  };
  
  	  
  void Linux_SambaServiceInstanceEnumeration::reset(){
  	
  	currentElementP=firstElementP;
  };
  
  	  
  bool Linux_SambaServiceInstanceEnumeration::hasNext() const{
  	
  	return (currentElementP!=0);
  
  };
  
  int Linux_SambaServiceInstanceEnumeration::getSize() const{
  	
    int size=0;
    Linux_SambaServiceInstanceEnumerationElement* followingP=firstElementP;
  	
  	while(followingP!=0){
        followingP=followingP->m_nextP;
        size++;
    }
  	
    return size;
    
  };
  
  const Linux_SambaServiceInstance&  
   Linux_SambaServiceInstanceEnumeration::getElement(int pos) const{
   
    Linux_SambaServiceInstanceEnumerationElement* followingP=firstElementP;
   
    int i=0;
    while((followingP!=0)&&(i<pos)){
        followingP=followingP->m_nextP;
        i++;
    }
    
    return *(followingP->m_elementP);
  };
  
  	  
  const Linux_SambaServiceInstance&
   Linux_SambaServiceInstanceEnumeration::getNext() {
   	
  	 Linux_SambaServiceInstanceEnumerationElement* currentP=
  	  currentElementP;
  	 currentElementP=currentElementP->m_nextP;
  	 
  	 return *(currentP->m_elementP);
  };
  	  
  void Linux_SambaServiceInstanceEnumeration::addElement
   (const Linux_SambaServiceInstance& elementP){
   	
  	if(firstElementP==0){
  	  firstElementP=new Linux_SambaServiceInstanceEnumerationElement();
  	  firstElementP->m_elementP=new Linux_SambaServiceInstance(elementP);
  	  endElementP=firstElementP;
  	  currentElementP=firstElementP;
  	}else{
  	  endElementP->m_nextP=new Linux_SambaServiceInstanceEnumerationElement();
  	  endElementP=endElementP->m_nextP;
  	  endElementP->m_elementP=new Linux_SambaServiceInstance(elementP);
  	}
  };  
}
 
