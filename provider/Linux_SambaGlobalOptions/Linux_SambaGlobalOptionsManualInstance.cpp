/**
 *  Linux_SambaGlobalOptionsManualInstance.cpp
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


#include "Linux_SambaGlobalOptionsManualInstance.h"
#include "CmpiData.h"
#include "CmpiString.h"
#include "CmpiArray.h"
#include <string>

namespace genProvider {

  //*********************************************************
  //Linux_SambaGlobalOptionsManualInstance
  //*********************************************************

  //empty constructor
  Linux_SambaGlobalOptionsManualInstance::
   Linux_SambaGlobalOptionsManualInstance(){   	
   	init();  	   	
  };
  
  
  //copy constructor	
  Linux_SambaGlobalOptionsManualInstance::
   Linux_SambaGlobalOptionsManualInstance
   (const Linux_SambaGlobalOptionsManualInstance& original){   	
   	init(original);  	   	
  };
  
  
  //constructor using CmpiInstance
  Linux_SambaGlobalOptionsManualInstance::
   Linux_SambaGlobalOptionsManualInstance (const CmpiInstance& inst, const char* instanceNamespace){
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
  Linux_SambaGlobalOptionsManualInstance::
   ~Linux_SambaGlobalOptionsManualInstance(){
   	reset();  	  
  };
  
  
  //copy operator
  Linux_SambaGlobalOptionsManualInstance&
   Linux_SambaGlobalOptionsManualInstance::operator=
   (const Linux_SambaGlobalOptionsManualInstance& original){   	
   	init(original);
   	return *this;
  };
  
  
  //converts to CmpiInstance
  CmpiInstance Linux_SambaGlobalOptionsManualInstance::
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
  unsigned int Linux_SambaGlobalOptionsManualInstance::
   isInstanceNameSet() const{
  	return isSet.instanceName;
  }
  
  const Linux_SambaGlobalOptionsInstanceName&
    Linux_SambaGlobalOptionsManualInstance::getInstanceName() const{

    if(!isSet.instanceName)
   	  throw CmpiErrorFormater::getErrorException(
   	   CmpiErrorFormater::NOT_SET,
   	   "InstanceName not set in Linux_SambaGlobalOptions instance");
  		
   	return m_instanceName;
  }

  void Linux_SambaGlobalOptionsManualInstance::setInstanceName(
   const Linux_SambaGlobalOptionsInstanceName& val){
    m_instanceName = val;
    isSet.instanceName=1;
  }
       
  //BindInterfacesOnly related methods
  unsigned int Linux_SambaGlobalOptionsManualInstance::isBindInterfacesOnlySet() const{
    return isSet.BindInterfacesOnly;
  }
  void Linux_SambaGlobalOptionsManualInstance::
   setBindInterfacesOnly(const CMPIBoolean val){
    m_BindInterfacesOnly = val;
    isSet.BindInterfacesOnly=1;
  }       
  const CMPIBoolean Linux_SambaGlobalOptionsManualInstance::
   getBindInterfacesOnly() const{
    
    if(!isSet.BindInterfacesOnly)
   	  throw CmpiErrorFormater::getErrorException(
   	   CmpiErrorFormater::NOT_SET,
   	   "BindInterfacesOnly not set");
   	   	
    return m_BindInterfacesOnly;
  }
       
  //Interfaces related methods
  unsigned int Linux_SambaGlobalOptionsManualInstance::isInterfacesSet() const{
    return isSet.Interfaces;
  }
  void  Linux_SambaGlobalOptionsManualInstance::
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
  const char* Linux_SambaGlobalOptionsManualInstance::
   getInterfaces() const{
    
    if(!isSet.Interfaces)
   	  throw CmpiErrorFormater::getErrorException(
   	   CmpiErrorFormater::NOT_SET,
   	   "Interfaces not set");
   	   	
    return m_Interfaces;
  }
       
  //NetbiosAlias related methods
  unsigned int Linux_SambaGlobalOptionsManualInstance::isNetbiosAliasSet() const{
    return isSet.NetbiosAlias;
  }
  void  Linux_SambaGlobalOptionsManualInstance::
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
  const char* Linux_SambaGlobalOptionsManualInstance::
   getNetbiosAlias() const{
    
    if(!isSet.NetbiosAlias)
   	  throw CmpiErrorFormater::getErrorException(
   	   CmpiErrorFormater::NOT_SET,
   	   "NetbiosAlias not set");
   	   	
    return m_NetbiosAlias;
  }
       
  //NetbiosName related methods
  unsigned int Linux_SambaGlobalOptionsManualInstance::isNetbiosNameSet() const{
    return isSet.NetbiosName;
  }
  void  Linux_SambaGlobalOptionsManualInstance::
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
  const char* Linux_SambaGlobalOptionsManualInstance::
   getNetbiosName() const{
    
    if(!isSet.NetbiosName)
   	  throw CmpiErrorFormater::getErrorException(
   	   CmpiErrorFormater::NOT_SET,
   	   "NetbiosName not set");
   	   	
    return m_NetbiosName;
  }
       
  //Printable related methods
  unsigned int Linux_SambaGlobalOptionsManualInstance::isPrintableSet() const{
    return isSet.Printable;
  }
  void Linux_SambaGlobalOptionsManualInstance::
   setPrintable(const CMPIBoolean val){
    m_Printable = val;
    isSet.Printable=1;
  }       
  const CMPIBoolean Linux_SambaGlobalOptionsManualInstance::
   getPrintable() const{
    
    if(!isSet.Printable)
   	  throw CmpiErrorFormater::getErrorException(
   	   CmpiErrorFormater::NOT_SET,
   	   "Printable not set");
   	   	
    return m_Printable;
  }
       
  //ServerString related methods
  unsigned int Linux_SambaGlobalOptionsManualInstance::isServerStringSet() const{
    return isSet.ServerString;
  }
  void  Linux_SambaGlobalOptionsManualInstance::
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
  const char* Linux_SambaGlobalOptionsManualInstance::
   getServerString() const{
    
    if(!isSet.ServerString)
   	  throw CmpiErrorFormater::getErrorException(
   	   CmpiErrorFormater::NOT_SET,
   	   "ServerString not set");
   	   	
    return m_ServerString;
  }
       
  //Workgroup related methods
  unsigned int Linux_SambaGlobalOptionsManualInstance::isWorkgroupSet() const{
    return isSet.Workgroup;
  }
  void  Linux_SambaGlobalOptionsManualInstance::
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
  const char* Linux_SambaGlobalOptionsManualInstance::
   getWorkgroup() const{
    
    if(!isSet.Workgroup)
   	  throw CmpiErrorFormater::getErrorException(
   	   CmpiErrorFormater::NOT_SET,
   	   "Workgroup not set");
   	   	
    return m_Workgroup;
  }


  
  //set isSet attributes to FALSE
  void Linux_SambaGlobalOptionsManualInstance::init(){
   	isSet.instanceName=0;
   	   	
    isSet.BindInterfacesOnly=0;   	
    isSet.Interfaces=0;   	
    isSet.NetbiosAlias=0;   	
    isSet.NetbiosName=0;   	
    isSet.Printable=0;   	
    isSet.ServerString=0;   	
    isSet.Workgroup=0;  	
  };
  
  
  //copies another instance properties in this
  void Linux_SambaGlobalOptionsManualInstance::init
   (const Linux_SambaGlobalOptionsManualInstance& original){   	
   	init();
   	   	
    if(original.isInstanceNameSet()){
      setInstanceName(original.getInstanceName());
    }   	
    if(original.isBindInterfacesOnlySet()){
      const CMPIBoolean BindInterfacesOnlyOriginal=original.getBindInterfacesOnly();
      setBindInterfacesOnly(BindInterfacesOnlyOriginal);
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
  void Linux_SambaGlobalOptionsManualInstance::reset(){
   	

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
  //Linux_SambaGlobalOptionsManualInstanceEnumerationElement	
  //*********************************************************
  
  Linux_SambaGlobalOptionsManualInstanceEnumerationElement::
   Linux_SambaGlobalOptionsManualInstanceEnumerationElement(){
   	
  	m_elementP=0;
  	m_nextP=0;
  	  
  };
  
  
  Linux_SambaGlobalOptionsManualInstanceEnumerationElement::
   ~Linux_SambaGlobalOptionsManualInstanceEnumerationElement(){
   	
  	if (m_elementP!=0)
  	  delete(m_elementP);
  	if (m_nextP!=0)
  	  delete(m_nextP);
  	  
  };

  
  //*********************************************************
  //Linux_SambaGlobalOptionsManualInstanceNameEnumeration
  //*********************************************************

  Linux_SambaGlobalOptionsManualInstanceEnumeration::
   Linux_SambaGlobalOptionsManualInstanceEnumeration(){
   	
  	 firstElementP=0;
     currentElementP=0;
     endElementP=0;
  };
  
  Linux_SambaGlobalOptionsManualInstanceEnumeration::
   Linux_SambaGlobalOptionsManualInstanceEnumeration(
   const Linux_SambaGlobalOptionsManualInstanceEnumeration& original){
   	
     firstElementP=0;
     currentElementP=0;
     endElementP=0;
  	 
     int size=original.getSize();
     for(int i=0;i<size;i++)
       addElement(original.getElement(i));           
  };
  
  	  
  Linux_SambaGlobalOptionsManualInstanceEnumeration::
   ~Linux_SambaGlobalOptionsManualInstanceEnumeration(){
   	
  	if (firstElementP!=0)
  	  delete(firstElementP);
  	  	
  };
  
  	  
  void Linux_SambaGlobalOptionsManualInstanceEnumeration::reset(){
  	
  	currentElementP=firstElementP;
  };
  
  	  
  bool Linux_SambaGlobalOptionsManualInstanceEnumeration::hasNext() const{
  	
  	return (currentElementP!=0);
  
  };
  
  int Linux_SambaGlobalOptionsManualInstanceEnumeration::getSize() const{
  	
    int size=0;
    Linux_SambaGlobalOptionsManualInstanceEnumerationElement* followingP=firstElementP;
  	
  	while(followingP!=0){
        followingP=followingP->m_nextP;
        size++;
    }
  	
    return size;
    
  };
  
  const Linux_SambaGlobalOptionsManualInstance&  
   Linux_SambaGlobalOptionsManualInstanceEnumeration::getElement(int pos) const{
   
    Linux_SambaGlobalOptionsManualInstanceEnumerationElement* followingP=firstElementP;
   
    int i=0;
    while((followingP!=0)&&(i<pos)){
        followingP=followingP->m_nextP;
        i++;
    }
    
    return *(followingP->m_elementP);
  };
  
  	  
  const Linux_SambaGlobalOptionsManualInstance&
   Linux_SambaGlobalOptionsManualInstanceEnumeration::getNext() {
   	
  	 Linux_SambaGlobalOptionsManualInstanceEnumerationElement* currentP=
  	  currentElementP;
  	 currentElementP=currentElementP->m_nextP;
  	 
  	 return *(currentP->m_elementP);
  };
  	  
  void Linux_SambaGlobalOptionsManualInstanceEnumeration::addElement
   (const Linux_SambaGlobalOptionsManualInstance& elementP){
   	
  	if(firstElementP==0){
  	  firstElementP=new Linux_SambaGlobalOptionsManualInstanceEnumerationElement();
  	  firstElementP->m_elementP=new Linux_SambaGlobalOptionsManualInstance(elementP);
  	  endElementP=firstElementP;
  	  currentElementP=firstElementP;
  	}else{
  	  endElementP->m_nextP=new Linux_SambaGlobalOptionsManualInstanceEnumerationElement();
  	  endElementP=endElementP->m_nextP;
  	  endElementP->m_elementP=new Linux_SambaGlobalOptionsManualInstance(elementP);
  	}
  };  
}
 
