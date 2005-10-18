/**
 *  Linux_SambaCommonSecurityOptionsInstance.cpp
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


#include "Linux_SambaCommonSecurityOptionsInstance.h"
#include "CmpiData.h"
#include "CmpiString.h"
#include "CmpiArray.h"
#include <string>

namespace genProvider {

  //*********************************************************
  //Linux_SambaCommonSecurityOptionsInstance
  //*********************************************************

  //empty constructor
  Linux_SambaCommonSecurityOptionsInstance::
   Linux_SambaCommonSecurityOptionsInstance(){   	
   	init();  	   	
  };
  
  
  //copy constructor	
  Linux_SambaCommonSecurityOptionsInstance::
   Linux_SambaCommonSecurityOptionsInstance
   (const Linux_SambaCommonSecurityOptionsInstance& original){   	
   	init(original);  	   	
  };
  
  
  //constructor using CmpiInstance
  Linux_SambaCommonSecurityOptionsInstance::
   Linux_SambaCommonSecurityOptionsInstance (const CmpiInstance& inst, const char* instanceNamespace){
    CmpiData cmpiData;
    init(); 
    
    CmpiObjectPath cop=inst.getObjectPath();
    cop.setNameSpace(instanceNamespace);
    setInstanceName(Linux_SambaCommonSecurityOptionsInstanceName(cop));
    
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
  Linux_SambaCommonSecurityOptionsInstance::
   ~Linux_SambaCommonSecurityOptionsInstance(){
   	reset();  	  
  };
  
  
  //copy operator
  Linux_SambaCommonSecurityOptionsInstance&
   Linux_SambaCommonSecurityOptionsInstance::operator=
   (const Linux_SambaCommonSecurityOptionsInstance& original){   	
   	init(original);
   	return *this;
  };
  
  
  //converts to CmpiInstance
  CmpiInstance Linux_SambaCommonSecurityOptionsInstance::
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
  unsigned int Linux_SambaCommonSecurityOptionsInstance::
   isInstanceNameSet() const{
  	return isSet.instanceName;
  }
  
  const Linux_SambaCommonSecurityOptionsInstanceName&
    Linux_SambaCommonSecurityOptionsInstance::getInstanceName() const{

    if(!isSet.instanceName)
   	  throw CmpiErrorFormater::getErrorException(
   	   CmpiErrorFormater::NOT_SET,
   	   "InstanceName not set in Linux_SambaCommonSecurityOptions instance");
  		
   	return m_instanceName;
  }

  void Linux_SambaCommonSecurityOptionsInstance::setInstanceName(
   const Linux_SambaCommonSecurityOptionsInstanceName& val){
    m_instanceName = val;
    isSet.instanceName=1;
  }
       
  //Caption related methods
  unsigned int Linux_SambaCommonSecurityOptionsInstance::isCaptionSet() const{
    return isSet.Caption;
  }
  void  Linux_SambaCommonSecurityOptionsInstance::
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
  const char* Linux_SambaCommonSecurityOptionsInstance::
   getCaption() const{
    
    if(!isSet.Caption)
   	  throw CmpiErrorFormater::getErrorException(
   	   CmpiErrorFormater::NOT_SET,
   	   "Caption not set");
   	   	
    return m_Caption;
  }
       
  //Description related methods
  unsigned int Linux_SambaCommonSecurityOptionsInstance::isDescriptionSet() const{
    return isSet.Description;
  }
  void  Linux_SambaCommonSecurityOptionsInstance::
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
  const char* Linux_SambaCommonSecurityOptionsInstance::
   getDescription() const{
    
    if(!isSet.Description)
   	  throw CmpiErrorFormater::getErrorException(
   	   CmpiErrorFormater::NOT_SET,
   	   "Description not set");
   	   	
    return m_Description;
  }
       
  //ElementName related methods
  unsigned int Linux_SambaCommonSecurityOptionsInstance::isElementNameSet() const{
    return isSet.ElementName;
  }
  void  Linux_SambaCommonSecurityOptionsInstance::
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
  const char* Linux_SambaCommonSecurityOptionsInstance::
   getElementName() const{
    
    if(!isSet.ElementName)
   	  throw CmpiErrorFormater::getErrorException(
   	   CmpiErrorFormater::NOT_SET,
   	   "ElementName not set");
   	   	
    return m_ElementName;
  }
       
  //GuestOK related methods
  unsigned int Linux_SambaCommonSecurityOptionsInstance::isGuestOKSet() const{
    return isSet.GuestOK;
  }
  void Linux_SambaCommonSecurityOptionsInstance::
   setGuestOK(const CMPIBoolean val){
    m_GuestOK = val;
    isSet.GuestOK=1;
  }       
  const CMPIBoolean Linux_SambaCommonSecurityOptionsInstance::
   getGuestOK() const{
    
    if(!isSet.GuestOK)
   	  throw CmpiErrorFormater::getErrorException(
   	   CmpiErrorFormater::NOT_SET,
   	   "GuestOK not set");
   	   	
    return m_GuestOK;
  }
       
  //GuestOnly related methods
  unsigned int Linux_SambaCommonSecurityOptionsInstance::isGuestOnlySet() const{
    return isSet.GuestOnly;
  }
  void Linux_SambaCommonSecurityOptionsInstance::
   setGuestOnly(const CMPIBoolean val){
    m_GuestOnly = val;
    isSet.GuestOnly=1;
  }       
  const CMPIBoolean Linux_SambaCommonSecurityOptionsInstance::
   getGuestOnly() const{
    
    if(!isSet.GuestOnly)
   	  throw CmpiErrorFormater::getErrorException(
   	   CmpiErrorFormater::NOT_SET,
   	   "GuestOnly not set");
   	   	
    return m_GuestOnly;
  }
       
  //HostsAllow related methods
  unsigned int Linux_SambaCommonSecurityOptionsInstance::isHostsAllowSet() const{
    return isSet.HostsAllow;
  }
  void  Linux_SambaCommonSecurityOptionsInstance::
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
  const char* Linux_SambaCommonSecurityOptionsInstance::
   getHostsAllow() const{
    
    if(!isSet.HostsAllow)
   	  throw CmpiErrorFormater::getErrorException(
   	   CmpiErrorFormater::NOT_SET,
   	   "HostsAllow not set");
   	   	
    return m_HostsAllow;
  }
       
  //HostsDeny related methods
  unsigned int Linux_SambaCommonSecurityOptionsInstance::isHostsDenySet() const{
    return isSet.HostsDeny;
  }
  void  Linux_SambaCommonSecurityOptionsInstance::
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
  const char* Linux_SambaCommonSecurityOptionsInstance::
   getHostsDeny() const{
    
    if(!isSet.HostsDeny)
   	  throw CmpiErrorFormater::getErrorException(
   	   CmpiErrorFormater::NOT_SET,
   	   "HostsDeny not set");
   	   	
    return m_HostsDeny;
  }
       
  //ReadOnly related methods
  unsigned int Linux_SambaCommonSecurityOptionsInstance::isReadOnlySet() const{
    return isSet.ReadOnly;
  }
  void Linux_SambaCommonSecurityOptionsInstance::
   setReadOnly(const CMPIBoolean val){
    m_ReadOnly = val;
    isSet.ReadOnly=1;
  }       
  const CMPIBoolean Linux_SambaCommonSecurityOptionsInstance::
   getReadOnly() const{
    
    if(!isSet.ReadOnly)
   	  throw CmpiErrorFormater::getErrorException(
   	   CmpiErrorFormater::NOT_SET,
   	   "ReadOnly not set");
   	   	
    return m_ReadOnly;
  }


  
  //set isSet attributes to FALSE
  void Linux_SambaCommonSecurityOptionsInstance::init(){
   	isSet.instanceName=0;
   	   	
    isSet.Caption=0;   	
    isSet.Description=0;   	
    isSet.ElementName=0;   	
    isSet.GuestOK=0;   	
    isSet.GuestOnly=0;   	
    isSet.HostsAllow=0;   	
    isSet.HostsDeny=0;   	
    isSet.ReadOnly=0;  	
  };
  
  
  //copies another instance properties in this
  void Linux_SambaCommonSecurityOptionsInstance::init
   (const Linux_SambaCommonSecurityOptionsInstance& original){   	
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
  void Linux_SambaCommonSecurityOptionsInstance::reset(){
   	

  	if (isSet.Caption)
  	  delete(m_Caption);

  	if (isSet.Description)
  	  delete(m_Description);

  	if (isSet.ElementName)
  	  delete(m_ElementName);

  	if (isSet.HostsAllow)
  	  delete(m_HostsAllow);

  	if (isSet.HostsDeny)
  	  delete(m_HostsDeny);
  	  
  };
  
  
  //*********************************************************
  //Linux_SambaCommonSecurityOptionsInstanceEnumerationElement	
  //*********************************************************
  
  Linux_SambaCommonSecurityOptionsInstanceEnumerationElement::
   Linux_SambaCommonSecurityOptionsInstanceEnumerationElement(){
   	
  	m_elementP=0;
  	m_nextP=0;
  	  
  };
  
  
  Linux_SambaCommonSecurityOptionsInstanceEnumerationElement::
   ~Linux_SambaCommonSecurityOptionsInstanceEnumerationElement(){
   	
  	if (m_elementP!=0)
  	  delete(m_elementP);
  	if (m_nextP!=0)
  	  delete(m_nextP);
  	  
  };

  
  //*********************************************************
  //Linux_SambaCommonSecurityOptionsInstanceNameEnumeration
  //*********************************************************

  Linux_SambaCommonSecurityOptionsInstanceEnumeration::
   Linux_SambaCommonSecurityOptionsInstanceEnumeration(){
   	
  	 firstElementP=0;
     currentElementP=0;
     endElementP=0;
  };
  
  Linux_SambaCommonSecurityOptionsInstanceEnumeration::
   Linux_SambaCommonSecurityOptionsInstanceEnumeration(
   const Linux_SambaCommonSecurityOptionsInstanceEnumeration& original){
   	
     firstElementP=0;
     currentElementP=0;
     endElementP=0;
  	 
     int size=original.getSize();
     for(int i=0;i<size;i++)
       addElement(original.getElement(i));           
  };
  
  	  
  Linux_SambaCommonSecurityOptionsInstanceEnumeration::
   ~Linux_SambaCommonSecurityOptionsInstanceEnumeration(){
   	
  	if (firstElementP!=0)
  	  delete(firstElementP);
  	  	
  };
  
  	  
  void Linux_SambaCommonSecurityOptionsInstanceEnumeration::reset(){
  	
  	currentElementP=firstElementP;
  };
  
  	  
  bool Linux_SambaCommonSecurityOptionsInstanceEnumeration::hasNext() const{
  	
  	return (currentElementP!=0);
  
  };
  
  int Linux_SambaCommonSecurityOptionsInstanceEnumeration::getSize() const{
  	
    int size=0;
    Linux_SambaCommonSecurityOptionsInstanceEnumerationElement* followingP=firstElementP;
  	
  	while(followingP!=0){
        followingP=followingP->m_nextP;
        size++;
    }
  	
    return size;
    
  };
  
  const Linux_SambaCommonSecurityOptionsInstance&  
   Linux_SambaCommonSecurityOptionsInstanceEnumeration::getElement(int pos) const{
   
    Linux_SambaCommonSecurityOptionsInstanceEnumerationElement* followingP=firstElementP;
   
    int i=0;
    while((followingP!=0)&&(i<pos)){
        followingP=followingP->m_nextP;
        i++;
    }
    
    return *(followingP->m_elementP);
  };
  
  	  
  const Linux_SambaCommonSecurityOptionsInstance&
   Linux_SambaCommonSecurityOptionsInstanceEnumeration::getNext() {
   	
  	 Linux_SambaCommonSecurityOptionsInstanceEnumerationElement* currentP=
  	  currentElementP;
  	 currentElementP=currentElementP->m_nextP;
  	 
  	 return *(currentP->m_elementP);
  };
  	  
  void Linux_SambaCommonSecurityOptionsInstanceEnumeration::addElement
   (const Linux_SambaCommonSecurityOptionsInstance& elementP){
   	
  	if(firstElementP==0){
  	  firstElementP=new Linux_SambaCommonSecurityOptionsInstanceEnumerationElement();
  	  firstElementP->m_elementP=new Linux_SambaCommonSecurityOptionsInstance(elementP);
  	  endElementP=firstElementP;
  	  currentElementP=firstElementP;
  	}else{
  	  endElementP->m_nextP=new Linux_SambaCommonSecurityOptionsInstanceEnumerationElement();
  	  endElementP=endElementP->m_nextP;
  	  endElementP->m_elementP=new Linux_SambaCommonSecurityOptionsInstance(elementP);
  	}
  };  
}
 
