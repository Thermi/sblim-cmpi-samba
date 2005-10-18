/**
 *  Linux_SambaGlobalOptionsInstance.cpp
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


#include "Linux_SambaGlobalOptionsInstance.h"
#include "CmpiData.h"
#include "CmpiString.h"
#include "CmpiArray.h"
#include <string>

namespace genProvider {

  //*********************************************************
  //Linux_SambaGlobalOptionsInstance
  //*********************************************************

  //empty constructor
  Linux_SambaGlobalOptionsInstance::
   Linux_SambaGlobalOptionsInstance(){   	
   	init();  	   	
  };
  
  
  //copy constructor	
  Linux_SambaGlobalOptionsInstance::
   Linux_SambaGlobalOptionsInstance
   (const Linux_SambaGlobalOptionsInstance& original){   	
   	init(original);  	   	
  };
  
  
  //constructor using CmpiInstance
  Linux_SambaGlobalOptionsInstance::
   Linux_SambaGlobalOptionsInstance (const CmpiInstance& inst, const char* instanceNamespace){
    CmpiData cmpiData;
    init(); 
    
    CmpiObjectPath cop=inst.getObjectPath();
    cop.setNameSpace(instanceNamespace);
    setInstanceName(Linux_SambaGlobalOptionsInstanceName(cop));
    
    cmpiData = inst.getProperty("BindInterfacesOnly");
    if(!cmpiData.isNullValue()){
      CMPIBoolean BindInterfacesOnly = cmpiData;
      setBindInterfacesOnly(BindInterfacesOnly);
    }
    
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
    
    cmpiData = inst.getProperty("Interfaces");
    if(!cmpiData.isNullValue()){
      CmpiString Interfaces = cmpiData;
      setInterfaces(Interfaces.charPtr());
    }
    
    cmpiData = inst.getProperty("NetbiosAlias");
    if(!cmpiData.isNullValue()){
      CmpiString NetbiosAlias = cmpiData;
      setNetbiosAlias(NetbiosAlias.charPtr());
    }
    
    cmpiData = inst.getProperty("NetbiosName");
    if(!cmpiData.isNullValue()){
      CmpiString NetbiosName = cmpiData;
      setNetbiosName(NetbiosName.charPtr());
    }
    
    cmpiData = inst.getProperty("Printable");
    if(!cmpiData.isNullValue()){
      CMPIBoolean Printable = cmpiData;
      setPrintable(Printable);
    }
    
    cmpiData = inst.getProperty("ServerString");
    if(!cmpiData.isNullValue()){
      CmpiString ServerString = cmpiData;
      setServerString(ServerString.charPtr());
    }
    
    cmpiData = inst.getProperty("Workgroup");
    if(!cmpiData.isNullValue()){
      CmpiString Workgroup = cmpiData;
      setWorkgroup(Workgroup.charPtr());
    }
    
  }
  
  
  //Destructor
  Linux_SambaGlobalOptionsInstance::
   ~Linux_SambaGlobalOptionsInstance(){
   	reset();  	  
  };
  
  
  //copy operator
  Linux_SambaGlobalOptionsInstance&
   Linux_SambaGlobalOptionsInstance::operator=
   (const Linux_SambaGlobalOptionsInstance& original){   	
   	init(original);
   	return *this;
  };
  
  
  //converts to CmpiInstance
  CmpiInstance Linux_SambaGlobalOptionsInstance::
   getCmpiInstance(const char** properties) const{
   	
   	CmpiObjectPath objectPath=getInstanceName().getObjectPath();      
    CmpiInstance cmpiInstance(objectPath);    
    getInstanceName().fillKeys(cmpiInstance);
    
    if (properties) {
	  cmpiInstance.setPropertyFilter(properties,0);
    }

  	if(isSet.BindInterfacesOnly){
  	  cmpiInstance.setProperty("BindInterfacesOnly",CmpiBooleanData(m_BindInterfacesOnly));
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

  	if(isSet.Interfaces){
  	  cmpiInstance.setProperty("Interfaces",CmpiData(m_Interfaces));
  	}

  	if(isSet.NetbiosAlias){
  	  cmpiInstance.setProperty("NetbiosAlias",CmpiData(m_NetbiosAlias));
  	}

  	if(isSet.NetbiosName){
  	  cmpiInstance.setProperty("NetbiosName",CmpiData(m_NetbiosName));
  	}

  	if(isSet.Printable){
  	  cmpiInstance.setProperty("Printable",CmpiBooleanData(m_Printable));
  	}

  	if(isSet.ServerString){
  	  cmpiInstance.setProperty("ServerString",CmpiData(m_ServerString));
  	}

  	if(isSet.Workgroup){
  	  cmpiInstance.setProperty("Workgroup",CmpiData(m_Workgroup));
  	}
  	
  	return cmpiInstance;
  	
  }
  
  
  //InstanceName related methods
  unsigned int Linux_SambaGlobalOptionsInstance::
   isInstanceNameSet() const{
  	return isSet.instanceName;
  }
  
  const Linux_SambaGlobalOptionsInstanceName&
    Linux_SambaGlobalOptionsInstance::getInstanceName() const{

    if(!isSet.instanceName)
   	  throw CmpiErrorFormater::getErrorException(
   	   CmpiErrorFormater::NOT_SET,
   	   "InstanceName not set in Linux_SambaGlobalOptions instance");
  		
   	return m_instanceName;
  }

  void Linux_SambaGlobalOptionsInstance::setInstanceName(
   const Linux_SambaGlobalOptionsInstanceName& val){
    m_instanceName = val;
    isSet.instanceName=1;
  }
       
  //BindInterfacesOnly related methods
  unsigned int Linux_SambaGlobalOptionsInstance::isBindInterfacesOnlySet() const{
    return isSet.BindInterfacesOnly;
  }
  void Linux_SambaGlobalOptionsInstance::
   setBindInterfacesOnly(const CMPIBoolean val){
    m_BindInterfacesOnly = val;
    isSet.BindInterfacesOnly=1;
  }       
  const CMPIBoolean Linux_SambaGlobalOptionsInstance::
   getBindInterfacesOnly() const{
    
    if(!isSet.BindInterfacesOnly)
   	  throw CmpiErrorFormater::getErrorException(
   	   CmpiErrorFormater::NOT_SET,
   	   "BindInterfacesOnly not set");
   	   	
    return m_BindInterfacesOnly;
  }
       
  //Caption related methods
  unsigned int Linux_SambaGlobalOptionsInstance::isCaptionSet() const{
    return isSet.Caption;
  }
  void  Linux_SambaGlobalOptionsInstance::
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
  const char* Linux_SambaGlobalOptionsInstance::
   getCaption() const{
    
    if(!isSet.Caption)
   	  throw CmpiErrorFormater::getErrorException(
   	   CmpiErrorFormater::NOT_SET,
   	   "Caption not set");
   	   	
    return m_Caption;
  }
       
  //Description related methods
  unsigned int Linux_SambaGlobalOptionsInstance::isDescriptionSet() const{
    return isSet.Description;
  }
  void  Linux_SambaGlobalOptionsInstance::
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
  const char* Linux_SambaGlobalOptionsInstance::
   getDescription() const{
    
    if(!isSet.Description)
   	  throw CmpiErrorFormater::getErrorException(
   	   CmpiErrorFormater::NOT_SET,
   	   "Description not set");
   	   	
    return m_Description;
  }
       
  //ElementName related methods
  unsigned int Linux_SambaGlobalOptionsInstance::isElementNameSet() const{
    return isSet.ElementName;
  }
  void  Linux_SambaGlobalOptionsInstance::
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
  const char* Linux_SambaGlobalOptionsInstance::
   getElementName() const{
    
    if(!isSet.ElementName)
   	  throw CmpiErrorFormater::getErrorException(
   	   CmpiErrorFormater::NOT_SET,
   	   "ElementName not set");
   	   	
    return m_ElementName;
  }
       
  //Interfaces related methods
  unsigned int Linux_SambaGlobalOptionsInstance::isInterfacesSet() const{
    return isSet.Interfaces;
  }
  void  Linux_SambaGlobalOptionsInstance::
   setInterfaces(const char* val, int makeCopy){
    if (isSet.Interfaces) {
      delete []m_Interfaces;
    }
    if (makeCopy&&val) {
      char* tmpval = new char[strlen(val)+1];
      strcpy(tmpval,val);
      m_Interfaces = tmpval;
    } else {
      m_Interfaces = val;
    }
    isSet.Interfaces=1;
  }       
  const char* Linux_SambaGlobalOptionsInstance::
   getInterfaces() const{
    
    if(!isSet.Interfaces)
   	  throw CmpiErrorFormater::getErrorException(
   	   CmpiErrorFormater::NOT_SET,
   	   "Interfaces not set");
   	   	
    return m_Interfaces;
  }
       
  //NetbiosAlias related methods
  unsigned int Linux_SambaGlobalOptionsInstance::isNetbiosAliasSet() const{
    return isSet.NetbiosAlias;
  }
  void  Linux_SambaGlobalOptionsInstance::
   setNetbiosAlias(const char* val, int makeCopy){
    if (isSet.NetbiosAlias) {
      delete []m_NetbiosAlias;
    }
    if (makeCopy&&val) {
      char* tmpval = new char[strlen(val)+1];
      strcpy(tmpval,val);
      m_NetbiosAlias = tmpval;
    } else {
      m_NetbiosAlias = val;
    }
    isSet.NetbiosAlias=1;
  }       
  const char* Linux_SambaGlobalOptionsInstance::
   getNetbiosAlias() const{
    
    if(!isSet.NetbiosAlias)
   	  throw CmpiErrorFormater::getErrorException(
   	   CmpiErrorFormater::NOT_SET,
   	   "NetbiosAlias not set");
   	   	
    return m_NetbiosAlias;
  }
       
  //NetbiosName related methods
  unsigned int Linux_SambaGlobalOptionsInstance::isNetbiosNameSet() const{
    return isSet.NetbiosName;
  }
  void  Linux_SambaGlobalOptionsInstance::
   setNetbiosName(const char* val, int makeCopy){
    if (isSet.NetbiosName) {
      delete []m_NetbiosName;
    }
    if (makeCopy&&val) {
      char* tmpval = new char[strlen(val)+1];
      strcpy(tmpval,val);
      m_NetbiosName = tmpval;
    } else {
      m_NetbiosName = val;
    }
    isSet.NetbiosName=1;
  }       
  const char* Linux_SambaGlobalOptionsInstance::
   getNetbiosName() const{
    
    if(!isSet.NetbiosName)
   	  throw CmpiErrorFormater::getErrorException(
   	   CmpiErrorFormater::NOT_SET,
   	   "NetbiosName not set");
   	   	
    return m_NetbiosName;
  }
       
  //Printable related methods
  unsigned int Linux_SambaGlobalOptionsInstance::isPrintableSet() const{
    return isSet.Printable;
  }
  void Linux_SambaGlobalOptionsInstance::
   setPrintable(const CMPIBoolean val){
    m_Printable = val;
    isSet.Printable=1;
  }       
  const CMPIBoolean Linux_SambaGlobalOptionsInstance::
   getPrintable() const{
    
    if(!isSet.Printable)
   	  throw CmpiErrorFormater::getErrorException(
   	   CmpiErrorFormater::NOT_SET,
   	   "Printable not set");
   	   	
    return m_Printable;
  }
       
  //ServerString related methods
  unsigned int Linux_SambaGlobalOptionsInstance::isServerStringSet() const{
    return isSet.ServerString;
  }
  void  Linux_SambaGlobalOptionsInstance::
   setServerString(const char* val, int makeCopy){
    if (isSet.ServerString) {
      delete []m_ServerString;
    }
    if (makeCopy&&val) {
      char* tmpval = new char[strlen(val)+1];
      strcpy(tmpval,val);
      m_ServerString = tmpval;
    } else {
      m_ServerString = val;
    }
    isSet.ServerString=1;
  }       
  const char* Linux_SambaGlobalOptionsInstance::
   getServerString() const{
    
    if(!isSet.ServerString)
   	  throw CmpiErrorFormater::getErrorException(
   	   CmpiErrorFormater::NOT_SET,
   	   "ServerString not set");
   	   	
    return m_ServerString;
  }
       
  //Workgroup related methods
  unsigned int Linux_SambaGlobalOptionsInstance::isWorkgroupSet() const{
    return isSet.Workgroup;
  }
  void  Linux_SambaGlobalOptionsInstance::
   setWorkgroup(const char* val, int makeCopy){
    if (isSet.Workgroup) {
      delete []m_Workgroup;
    }
    if (makeCopy&&val) {
      char* tmpval = new char[strlen(val)+1];
      strcpy(tmpval,val);
      m_Workgroup = tmpval;
    } else {
      m_Workgroup = val;
    }
    isSet.Workgroup=1;
  }       
  const char* Linux_SambaGlobalOptionsInstance::
   getWorkgroup() const{
    
    if(!isSet.Workgroup)
   	  throw CmpiErrorFormater::getErrorException(
   	   CmpiErrorFormater::NOT_SET,
   	   "Workgroup not set");
   	   	
    return m_Workgroup;
  }


  
  //set isSet attributes to FALSE
  void Linux_SambaGlobalOptionsInstance::init(){
   	isSet.instanceName=0;
   	   	
    isSet.BindInterfacesOnly=0;   	
    isSet.Caption=0;   	
    isSet.Description=0;   	
    isSet.ElementName=0;   	
    isSet.Interfaces=0;   	
    isSet.NetbiosAlias=0;   	
    isSet.NetbiosName=0;   	
    isSet.Printable=0;   	
    isSet.ServerString=0;   	
    isSet.Workgroup=0;  	
  };
  
  
  //copies another instance properties in this
  void Linux_SambaGlobalOptionsInstance::init
   (const Linux_SambaGlobalOptionsInstance& original){   	
   	init();
   	   	
    if(original.isInstanceNameSet()){
      setInstanceName(original.getInstanceName());
    }   	
    if(original.isBindInterfacesOnlySet()){
      const CMPIBoolean BindInterfacesOnlyOriginal=original.getBindInterfacesOnly();
      setBindInterfacesOnly(BindInterfacesOnlyOriginal);
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
    if(original.isInterfacesSet()){
      const char* InterfacesOriginal=original.getInterfaces();
      setInterfaces(InterfacesOriginal, 1);
    }   	
    if(original.isNetbiosAliasSet()){
      const char* NetbiosAliasOriginal=original.getNetbiosAlias();
      setNetbiosAlias(NetbiosAliasOriginal, 1);
    }   	
    if(original.isNetbiosNameSet()){
      const char* NetbiosNameOriginal=original.getNetbiosName();
      setNetbiosName(NetbiosNameOriginal, 1);
    }   	
    if(original.isPrintableSet()){
      const CMPIBoolean PrintableOriginal=original.getPrintable();
      setPrintable(PrintableOriginal);
    }   	
    if(original.isServerStringSet()){
      const char* ServerStringOriginal=original.getServerString();
      setServerString(ServerStringOriginal, 1);
    }   	
    if(original.isWorkgroupSet()){
      const char* WorkgroupOriginal=original.getWorkgroup();
      setWorkgroup(WorkgroupOriginal, 1);
    }    
   }
  
  
  //reset the instance data
  void Linux_SambaGlobalOptionsInstance::reset(){
   	

  	if (isSet.Caption)
  	  delete(m_Caption);

  	if (isSet.Description)
  	  delete(m_Description);

  	if (isSet.ElementName)
  	  delete(m_ElementName);

  	if (isSet.Interfaces)
  	  delete(m_Interfaces);

  	if (isSet.NetbiosAlias)
  	  delete(m_NetbiosAlias);

  	if (isSet.NetbiosName)
  	  delete(m_NetbiosName);

  	if (isSet.ServerString)
  	  delete(m_ServerString);

  	if (isSet.Workgroup)
  	  delete(m_Workgroup);
  	  
  };
  
  
  //*********************************************************
  //Linux_SambaGlobalOptionsInstanceEnumerationElement	
  //*********************************************************
  
  Linux_SambaGlobalOptionsInstanceEnumerationElement::
   Linux_SambaGlobalOptionsInstanceEnumerationElement(){
   	
  	m_elementP=0;
  	m_nextP=0;
  	  
  };
  
  
  Linux_SambaGlobalOptionsInstanceEnumerationElement::
   ~Linux_SambaGlobalOptionsInstanceEnumerationElement(){
   	
  	if (m_elementP!=0)
  	  delete(m_elementP);
  	if (m_nextP!=0)
  	  delete(m_nextP);
  	  
  };

  
  //*********************************************************
  //Linux_SambaGlobalOptionsInstanceNameEnumeration
  //*********************************************************

  Linux_SambaGlobalOptionsInstanceEnumeration::
   Linux_SambaGlobalOptionsInstanceEnumeration(){
   	
  	 firstElementP=0;
     currentElementP=0;
     endElementP=0;
  };
  
  Linux_SambaGlobalOptionsInstanceEnumeration::
   Linux_SambaGlobalOptionsInstanceEnumeration(
   const Linux_SambaGlobalOptionsInstanceEnumeration& original){
   	
     firstElementP=0;
     currentElementP=0;
     endElementP=0;
  	 
     int size=original.getSize();
     for(int i=0;i<size;i++)
       addElement(original.getElement(i));           
  };
  
  	  
  Linux_SambaGlobalOptionsInstanceEnumeration::
   ~Linux_SambaGlobalOptionsInstanceEnumeration(){
   	
  	if (firstElementP!=0)
  	  delete(firstElementP);
  	  	
  };
  
  	  
  void Linux_SambaGlobalOptionsInstanceEnumeration::reset(){
  	
  	currentElementP=firstElementP;
  };
  
  	  
  bool Linux_SambaGlobalOptionsInstanceEnumeration::hasNext() const{
  	
  	return (currentElementP!=0);
  
  };
  
  int Linux_SambaGlobalOptionsInstanceEnumeration::getSize() const{
  	
    int size=0;
    Linux_SambaGlobalOptionsInstanceEnumerationElement* followingP=firstElementP;
  	
  	while(followingP!=0){
        followingP=followingP->m_nextP;
        size++;
    }
  	
    return size;
    
  };
  
  const Linux_SambaGlobalOptionsInstance&  
   Linux_SambaGlobalOptionsInstanceEnumeration::getElement(int pos) const{
   
    Linux_SambaGlobalOptionsInstanceEnumerationElement* followingP=firstElementP;
   
    int i=0;
    while((followingP!=0)&&(i<pos)){
        followingP=followingP->m_nextP;
        i++;
    }
    
    return *(followingP->m_elementP);
  };
  
  	  
  const Linux_SambaGlobalOptionsInstance&
   Linux_SambaGlobalOptionsInstanceEnumeration::getNext() {
   	
  	 Linux_SambaGlobalOptionsInstanceEnumerationElement* currentP=
  	  currentElementP;
  	 currentElementP=currentElementP->m_nextP;
  	 
  	 return *(currentP->m_elementP);
  };
  	  
  void Linux_SambaGlobalOptionsInstanceEnumeration::addElement
   (const Linux_SambaGlobalOptionsInstance& elementP){
   	
  	if(firstElementP==0){
  	  firstElementP=new Linux_SambaGlobalOptionsInstanceEnumerationElement();
  	  firstElementP->m_elementP=new Linux_SambaGlobalOptionsInstance(elementP);
  	  endElementP=firstElementP;
  	  currentElementP=firstElementP;
  	}else{
  	  endElementP->m_nextP=new Linux_SambaGlobalOptionsInstanceEnumerationElement();
  	  endElementP=endElementP->m_nextP;
  	  endElementP->m_elementP=new Linux_SambaGlobalOptionsInstance(elementP);
  	}
  };  
}
 
