/**
 *  Linux_SambaCommonSecurityOptionsManualInstance.cpp
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


#include "Linux_SambaCommonSecurityOptionsManualInstance.h"
#include "CmpiData.h"
#include "CmpiString.h"
#include "CmpiArray.h"
#include <string>

namespace genProvider {

  //*********************************************************
  //Linux_SambaCommonSecurityOptionsManualInstance
  //*********************************************************

  //empty constructor
  Linux_SambaCommonSecurityOptionsManualInstance::
   Linux_SambaCommonSecurityOptionsManualInstance(){   	
   	init();  	   	
  };
  
  
  //copy constructor	
  Linux_SambaCommonSecurityOptionsManualInstance::
   Linux_SambaCommonSecurityOptionsManualInstance
   (const Linux_SambaCommonSecurityOptionsManualInstance& original){   	
   	init(original);  	   	
  };
  
  
  //constructor using CmpiInstance
  Linux_SambaCommonSecurityOptionsManualInstance::
   Linux_SambaCommonSecurityOptionsManualInstance (const CmpiInstance& inst, const char* instanceNamespace){
    CmpiData cmpiData;
    init(); 
    
    CmpiObjectPath cop=inst.getObjectPath();
    cop.setNameSpace(instanceNamespace);
    setInstanceName(Linux_SambaCommonSecurityOptionsInstanceName(cop));
    
    cmpiData = inst.getProperty("GuestOK");
    if(!cmpiData.isNullValue()){
      CMPIBoolean GuestOK = cmpiData;
      setGuestOK(GuestOK);
    }
    
    cmpiData = inst.getProperty("GuestOnly");
    if(!cmpiData.isNullValue()){
      CMPIBoolean GuestOnly = cmpiData;
      setGuestOnly(GuestOnly);
    }
    
    cmpiData = inst.getProperty("HostsAllow");
    if(!cmpiData.isNullValue()){
      CmpiString HostsAllow = cmpiData;
      setHostsAllow(HostsAllow.charPtr());
    }
    
    cmpiData = inst.getProperty("HostsDeny");
    if(!cmpiData.isNullValue()){
      CmpiString HostsDeny = cmpiData;
      setHostsDeny(HostsDeny.charPtr());
    }
    
    cmpiData = inst.getProperty("ReadOnly");
    if(!cmpiData.isNullValue()){
      CMPIBoolean ReadOnly = cmpiData;
      setReadOnly(ReadOnly);
    }
    
  }
  
  
  //Destructor
  Linux_SambaCommonSecurityOptionsManualInstance::
   ~Linux_SambaCommonSecurityOptionsManualInstance(){
   	reset();  	  
  };
  
  
  //copy operator
  Linux_SambaCommonSecurityOptionsManualInstance&
   Linux_SambaCommonSecurityOptionsManualInstance::operator=
   (const Linux_SambaCommonSecurityOptionsManualInstance& original){   	
   	init(original);
   	return *this;
  };
  
  
  //converts to CmpiInstance
  CmpiInstance Linux_SambaCommonSecurityOptionsManualInstance::
   getCmpiInstance(const char** properties) const{
   	
   	CmpiObjectPath objectPath=getInstanceName().getObjectPath();      
    CmpiInstance cmpiInstance(objectPath);    
    getInstanceName().fillKeys(cmpiInstance);
    
    if (properties) {
	  cmpiInstance.setPropertyFilter(properties,0);
    }

  	if(isSet.GuestOK){
  	  cmpiInstance.setProperty("GuestOK",CmpiBooleanData(m_GuestOK));
  	}

  	if(isSet.GuestOnly){
  	  cmpiInstance.setProperty("GuestOnly",CmpiBooleanData(m_GuestOnly));
  	}

  	if(isSet.HostsAllow){
  	  cmpiInstance.setProperty("HostsAllow",CmpiData(m_HostsAllow));
  	}

  	if(isSet.HostsDeny){
  	  cmpiInstance.setProperty("HostsDeny",CmpiData(m_HostsDeny));
  	}

  	if(isSet.ReadOnly){
  	  cmpiInstance.setProperty("ReadOnly",CmpiBooleanData(m_ReadOnly));
  	}
  	
  	return cmpiInstance;
  	
  }
  
  
  //InstanceName related methods
  unsigned int Linux_SambaCommonSecurityOptionsManualInstance::
   isInstanceNameSet() const{
  	return isSet.instanceName;
  }
  
  const Linux_SambaCommonSecurityOptionsInstanceName&
    Linux_SambaCommonSecurityOptionsManualInstance::getInstanceName() const{

    if(!isSet.instanceName)
   	  throw CmpiErrorFormater::getErrorException(
   	   CmpiErrorFormater::NOT_SET,
   	   "InstanceName not set in Linux_SambaCommonSecurityOptions instance");
  		
   	return m_instanceName;
  }

  void Linux_SambaCommonSecurityOptionsManualInstance::setInstanceName(
   const Linux_SambaCommonSecurityOptionsInstanceName& val){
    m_instanceName = val;
    isSet.instanceName=1;
  }
       
  //GuestOK related methods
  unsigned int Linux_SambaCommonSecurityOptionsManualInstance::isGuestOKSet() const{
    return isSet.GuestOK;
  }
  void Linux_SambaCommonSecurityOptionsManualInstance::
   setGuestOK(const CMPIBoolean val){
    m_GuestOK = val;
    isSet.GuestOK=1;
  }       
  const CMPIBoolean Linux_SambaCommonSecurityOptionsManualInstance::
   getGuestOK() const{
    
    if(!isSet.GuestOK)
   	  throw CmpiErrorFormater::getErrorException(
   	   CmpiErrorFormater::NOT_SET,
   	   "GuestOK not set");
   	   	
    return m_GuestOK;
  }
       
  //GuestOnly related methods
  unsigned int Linux_SambaCommonSecurityOptionsManualInstance::isGuestOnlySet() const{
    return isSet.GuestOnly;
  }
  void Linux_SambaCommonSecurityOptionsManualInstance::
   setGuestOnly(const CMPIBoolean val){
    m_GuestOnly = val;
    isSet.GuestOnly=1;
  }       
  const CMPIBoolean Linux_SambaCommonSecurityOptionsManualInstance::
   getGuestOnly() const{
    
    if(!isSet.GuestOnly)
   	  throw CmpiErrorFormater::getErrorException(
   	   CmpiErrorFormater::NOT_SET,
   	   "GuestOnly not set");
   	   	
    return m_GuestOnly;
  }
       
  //HostsAllow related methods
  unsigned int Linux_SambaCommonSecurityOptionsManualInstance::isHostsAllowSet() const{
    return isSet.HostsAllow;
  }
  void  Linux_SambaCommonSecurityOptionsManualInstance::
   setHostsAllow(const char* val, int makeCopy){
    if (isSet.HostsAllow) {
      delete []m_HostsAllow;
    }
    if (makeCopy&&val) {
      char* tmpval = new char[strlen(val)+1];
      strcpy(tmpval,val);
      m_HostsAllow = tmpval;
    } else {
      m_HostsAllow = val;
    }
    isSet.HostsAllow=1;
  }       
  const char* Linux_SambaCommonSecurityOptionsManualInstance::
   getHostsAllow() const{
    
    if(!isSet.HostsAllow)
   	  throw CmpiErrorFormater::getErrorException(
   	   CmpiErrorFormater::NOT_SET,
   	   "HostsAllow not set");
   	   	
    return m_HostsAllow;
  }
       
  //HostsDeny related methods
  unsigned int Linux_SambaCommonSecurityOptionsManualInstance::isHostsDenySet() const{
    return isSet.HostsDeny;
  }
  void  Linux_SambaCommonSecurityOptionsManualInstance::
   setHostsDeny(const char* val, int makeCopy){
    if (isSet.HostsDeny) {
      delete []m_HostsDeny;
    }
    if (makeCopy&&val) {
      char* tmpval = new char[strlen(val)+1];
      strcpy(tmpval,val);
      m_HostsDeny = tmpval;
    } else {
      m_HostsDeny = val;
    }
    isSet.HostsDeny=1;
  }       
  const char* Linux_SambaCommonSecurityOptionsManualInstance::
   getHostsDeny() const{
    
    if(!isSet.HostsDeny)
   	  throw CmpiErrorFormater::getErrorException(
   	   CmpiErrorFormater::NOT_SET,
   	   "HostsDeny not set");
   	   	
    return m_HostsDeny;
  }
       
  //ReadOnly related methods
  unsigned int Linux_SambaCommonSecurityOptionsManualInstance::isReadOnlySet() const{
    return isSet.ReadOnly;
  }
  void Linux_SambaCommonSecurityOptionsManualInstance::
   setReadOnly(const CMPIBoolean val){
    m_ReadOnly = val;
    isSet.ReadOnly=1;
  }       
  const CMPIBoolean Linux_SambaCommonSecurityOptionsManualInstance::
   getReadOnly() const{
    
    if(!isSet.ReadOnly)
   	  throw CmpiErrorFormater::getErrorException(
   	   CmpiErrorFormater::NOT_SET,
   	   "ReadOnly not set");
   	   	
    return m_ReadOnly;
  }


  
  //set isSet attributes to FALSE
  void Linux_SambaCommonSecurityOptionsManualInstance::init(){
   	isSet.instanceName=0;
   	   	
    isSet.GuestOK=0;   	
    isSet.GuestOnly=0;   	
    isSet.HostsAllow=0;   	
    isSet.HostsDeny=0;   	
    isSet.ReadOnly=0;  	
  };
  
  
  //copies another instance properties in this
  void Linux_SambaCommonSecurityOptionsManualInstance::init
   (const Linux_SambaCommonSecurityOptionsManualInstance& original){   	
   	init();
   	   	
    if(original.isInstanceNameSet()){
      setInstanceName(original.getInstanceName());
    }   	
    if(original.isGuestOKSet()){
      const CMPIBoolean GuestOKOriginal=original.getGuestOK();
      setGuestOK(GuestOKOriginal);
    }   	
    if(original.isGuestOnlySet()){
      const CMPIBoolean GuestOnlyOriginal=original.getGuestOnly();
      setGuestOnly(GuestOnlyOriginal);
    }   	
    if(original.isHostsAllowSet()){
      const char* HostsAllowOriginal=original.getHostsAllow();
      setHostsAllow(HostsAllowOriginal, 1);
    }   	
    if(original.isHostsDenySet()){
      const char* HostsDenyOriginal=original.getHostsDeny();
      setHostsDeny(HostsDenyOriginal, 1);
    }   	
    if(original.isReadOnlySet()){
      const CMPIBoolean ReadOnlyOriginal=original.getReadOnly();
      setReadOnly(ReadOnlyOriginal);
    }    
   }
  
  
  //reset the instance data
  void Linux_SambaCommonSecurityOptionsManualInstance::reset(){
   	

  	if (isSet.HostsAllow)
  	  delete(m_HostsAllow);

  	if (isSet.HostsDeny)
  	  delete(m_HostsDeny);
  	  
  };
  
  
  //*********************************************************
  //Linux_SambaCommonSecurityOptionsManualInstanceEnumerationElement	
  //*********************************************************
  
  Linux_SambaCommonSecurityOptionsManualInstanceEnumerationElement::
   Linux_SambaCommonSecurityOptionsManualInstanceEnumerationElement(){
   	
  	m_elementP=0;
  	m_nextP=0;
  	  
  };
  
  
  Linux_SambaCommonSecurityOptionsManualInstanceEnumerationElement::
   ~Linux_SambaCommonSecurityOptionsManualInstanceEnumerationElement(){
   	
  	if (m_elementP!=0)
  	  delete(m_elementP);
  	if (m_nextP!=0)
  	  delete(m_nextP);
  	  
  };

  
  //*********************************************************
  //Linux_SambaCommonSecurityOptionsManualInstanceNameEnumeration
  //*********************************************************

  Linux_SambaCommonSecurityOptionsManualInstanceEnumeration::
   Linux_SambaCommonSecurityOptionsManualInstanceEnumeration(){
   	
  	 firstElementP=0;
     currentElementP=0;
     endElementP=0;
  };
  
  Linux_SambaCommonSecurityOptionsManualInstanceEnumeration::
   Linux_SambaCommonSecurityOptionsManualInstanceEnumeration(
   const Linux_SambaCommonSecurityOptionsManualInstanceEnumeration& original){
   	
     firstElementP=0;
     currentElementP=0;
     endElementP=0;
  	 
     int size=original.getSize();
     for(int i=0;i<size;i++)
       addElement(original.getElement(i));           
  };
  
  	  
  Linux_SambaCommonSecurityOptionsManualInstanceEnumeration::
   ~Linux_SambaCommonSecurityOptionsManualInstanceEnumeration(){
   	
  	if (firstElementP!=0)
  	  delete(firstElementP);
  	  	
  };
  
  	  
  void Linux_SambaCommonSecurityOptionsManualInstanceEnumeration::reset(){
  	
  	currentElementP=firstElementP;
  };
  
  	  
  bool Linux_SambaCommonSecurityOptionsManualInstanceEnumeration::hasNext() const{
  	
  	return (currentElementP!=0);
  
  };
  
  int Linux_SambaCommonSecurityOptionsManualInstanceEnumeration::getSize() const{
  	
    int size=0;
    Linux_SambaCommonSecurityOptionsManualInstanceEnumerationElement* followingP=firstElementP;
  	
  	while(followingP!=0){
        followingP=followingP->m_nextP;
        size++;
    }
  	
    return size;
    
  };
  
  const Linux_SambaCommonSecurityOptionsManualInstance&  
   Linux_SambaCommonSecurityOptionsManualInstanceEnumeration::getElement(int pos) const{
   
    Linux_SambaCommonSecurityOptionsManualInstanceEnumerationElement* followingP=firstElementP;
   
    int i=0;
    while((followingP!=0)&&(i<pos)){
        followingP=followingP->m_nextP;
        i++;
    }
    
    return *(followingP->m_elementP);
  };
  
  	  
  const Linux_SambaCommonSecurityOptionsManualInstance&
   Linux_SambaCommonSecurityOptionsManualInstanceEnumeration::getNext() {
   	
  	 Linux_SambaCommonSecurityOptionsManualInstanceEnumerationElement* currentP=
  	  currentElementP;
  	 currentElementP=currentElementP->m_nextP;
  	 
  	 return *(currentP->m_elementP);
  };
  	  
  void Linux_SambaCommonSecurityOptionsManualInstanceEnumeration::addElement
   (const Linux_SambaCommonSecurityOptionsManualInstance& elementP){
   	
  	if(firstElementP==0){
  	  firstElementP=new Linux_SambaCommonSecurityOptionsManualInstanceEnumerationElement();
  	  firstElementP->m_elementP=new Linux_SambaCommonSecurityOptionsManualInstance(elementP);
  	  endElementP=firstElementP;
  	  currentElementP=firstElementP;
  	}else{
  	  endElementP->m_nextP=new Linux_SambaCommonSecurityOptionsManualInstanceEnumerationElement();
  	  endElementP=endElementP->m_nextP;
  	  endElementP->m_elementP=new Linux_SambaCommonSecurityOptionsManualInstance(elementP);
  	}
  };  
}
 
