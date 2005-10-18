/**
 *  Linux_SambaUserInstance.cpp
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


#include "Linux_SambaUserInstance.h"
#include "CmpiData.h"
#include "CmpiString.h"
#include "CmpiArray.h"
#include <string>

namespace genProvider {

  //*********************************************************
  //Linux_SambaUserInstance
  //*********************************************************

  //empty constructor
  Linux_SambaUserInstance::
   Linux_SambaUserInstance(){   	
   	init();  	   	
  };
  
  
  //copy constructor	
  Linux_SambaUserInstance::
   Linux_SambaUserInstance
   (const Linux_SambaUserInstance& original){   	
   	init(original);  	   	
  };
  
  
  //constructor using CmpiInstance
  Linux_SambaUserInstance::
   Linux_SambaUserInstance (const CmpiInstance& inst, const char* instanceNamespace){
    CmpiData cmpiData;
    init(); 
    
    CmpiObjectPath cop=inst.getObjectPath();
    cop.setNameSpace(instanceNamespace);
    setInstanceName(Linux_SambaUserInstanceName(cop));
    
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
    
    cmpiData = inst.getProperty("SambaUserPassword");
    if(!cmpiData.isNullValue()){
      CmpiString SambaUserPassword = cmpiData;
      setSambaUserPassword(SambaUserPassword.charPtr());
    }
    
    cmpiData = inst.getProperty("SystemUserName");
    if(!cmpiData.isNullValue()){
      CmpiString SystemUserName = cmpiData;
      setSystemUserName(SystemUserName.charPtr());
    }
    
  }
  
  
  //Destructor
  Linux_SambaUserInstance::
   ~Linux_SambaUserInstance(){
   	reset();  	  
  };
  
  
  //copy operator
  Linux_SambaUserInstance&
   Linux_SambaUserInstance::operator=
   (const Linux_SambaUserInstance& original){   	
   	init(original);
   	return *this;
  };
  
  
  //converts to CmpiInstance
  CmpiInstance Linux_SambaUserInstance::
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

  	if(isSet.SambaUserPassword){
  	  cmpiInstance.setProperty("SambaUserPassword",CmpiData(m_SambaUserPassword));
  	}

  	if(isSet.SystemUserName){
  	  cmpiInstance.setProperty("SystemUserName",CmpiData(m_SystemUserName));
  	}
  	
  	return cmpiInstance;
  	
  }
  
  
  //InstanceName related methods
  unsigned int Linux_SambaUserInstance::
   isInstanceNameSet() const{
  	return isSet.instanceName;
  }
  
  const Linux_SambaUserInstanceName&
    Linux_SambaUserInstance::getInstanceName() const{

    if(!isSet.instanceName)
   	  throw CmpiErrorFormater::getErrorException(
   	   CmpiErrorFormater::NOT_SET,
   	   "InstanceName not set in Linux_SambaUser instance");
  		
   	return m_instanceName;
  }

  void Linux_SambaUserInstance::setInstanceName(
   const Linux_SambaUserInstanceName& val){
    m_instanceName = val;
    isSet.instanceName=1;
  }
       
  //Caption related methods
  unsigned int Linux_SambaUserInstance::isCaptionSet() const{
    return isSet.Caption;
  }
  void  Linux_SambaUserInstance::
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
  const char* Linux_SambaUserInstance::
   getCaption() const{
    
    if(!isSet.Caption)
   	  throw CmpiErrorFormater::getErrorException(
   	   CmpiErrorFormater::NOT_SET,
   	   "Caption not set");
   	   	
    return m_Caption;
  }
       
  //Description related methods
  unsigned int Linux_SambaUserInstance::isDescriptionSet() const{
    return isSet.Description;
  }
  void  Linux_SambaUserInstance::
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
  const char* Linux_SambaUserInstance::
   getDescription() const{
    
    if(!isSet.Description)
   	  throw CmpiErrorFormater::getErrorException(
   	   CmpiErrorFormater::NOT_SET,
   	   "Description not set");
   	   	
    return m_Description;
  }
       
  //ElementName related methods
  unsigned int Linux_SambaUserInstance::isElementNameSet() const{
    return isSet.ElementName;
  }
  void  Linux_SambaUserInstance::
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
  const char* Linux_SambaUserInstance::
   getElementName() const{
    
    if(!isSet.ElementName)
   	  throw CmpiErrorFormater::getErrorException(
   	   CmpiErrorFormater::NOT_SET,
   	   "ElementName not set");
   	   	
    return m_ElementName;
  }
       
  //SambaUserPassword related methods
  unsigned int Linux_SambaUserInstance::isSambaUserPasswordSet() const{
    return isSet.SambaUserPassword;
  }
  void  Linux_SambaUserInstance::
   setSambaUserPassword(const char* val, int makeCopy){
    if (isSet.SambaUserPassword) {
      delete []m_SambaUserPassword;
    }
    if (makeCopy&&val) {
      char* tmpval = new char[strlen(val)+1];
      strcpy(tmpval,val);
      m_SambaUserPassword = tmpval;
    } else {
      m_SambaUserPassword = val;
    }
    isSet.SambaUserPassword=1;
  }       
  const char* Linux_SambaUserInstance::
   getSambaUserPassword() const{
    
    if(!isSet.SambaUserPassword)
   	  throw CmpiErrorFormater::getErrorException(
   	   CmpiErrorFormater::NOT_SET,
   	   "SambaUserPassword not set");
   	   	
    return m_SambaUserPassword;
  }
       
  //SystemUserName related methods
  unsigned int Linux_SambaUserInstance::isSystemUserNameSet() const{
    return isSet.SystemUserName;
  }
  void  Linux_SambaUserInstance::
   setSystemUserName(const char* val, int makeCopy){
    if (isSet.SystemUserName) {
      delete []m_SystemUserName;
    }
    if (makeCopy&&val) {
      char* tmpval = new char[strlen(val)+1];
      strcpy(tmpval,val);
      m_SystemUserName = tmpval;
    } else {
      m_SystemUserName = val;
    }
    isSet.SystemUserName=1;
  }       
  const char* Linux_SambaUserInstance::
   getSystemUserName() const{
    
    if(!isSet.SystemUserName)
   	  throw CmpiErrorFormater::getErrorException(
   	   CmpiErrorFormater::NOT_SET,
   	   "SystemUserName not set");
   	   	
    return m_SystemUserName;
  }


  
  //set isSet attributes to FALSE
  void Linux_SambaUserInstance::init(){
   	isSet.instanceName=0;
   	   	
    isSet.Caption=0;   	
    isSet.Description=0;   	
    isSet.ElementName=0;   	
    isSet.SambaUserPassword=0;   	
    isSet.SystemUserName=0;  	
  };
  
  
  //copies another instance properties in this
  void Linux_SambaUserInstance::init
   (const Linux_SambaUserInstance& original){   	
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
    if(original.isSambaUserPasswordSet()){
      const char* SambaUserPasswordOriginal=original.getSambaUserPassword();
      setSambaUserPassword(SambaUserPasswordOriginal, 1);
    }   	
    if(original.isSystemUserNameSet()){
      const char* SystemUserNameOriginal=original.getSystemUserName();
      setSystemUserName(SystemUserNameOriginal, 1);
    }    
   }
  
  
  //reset the instance data
  void Linux_SambaUserInstance::reset(){
   	

  	if (isSet.Caption)
  	  delete(m_Caption);

  	if (isSet.Description)
  	  delete(m_Description);

  	if (isSet.ElementName)
  	  delete(m_ElementName);

  	if (isSet.SambaUserPassword)
  	  delete(m_SambaUserPassword);

  	if (isSet.SystemUserName)
  	  delete(m_SystemUserName);
  	  
  };
  
  
  //*********************************************************
  //Linux_SambaUserInstanceEnumerationElement	
  //*********************************************************
  
  Linux_SambaUserInstanceEnumerationElement::
   Linux_SambaUserInstanceEnumerationElement(){
   	
  	m_elementP=0;
  	m_nextP=0;
  	  
  };
  
  
  Linux_SambaUserInstanceEnumerationElement::
   ~Linux_SambaUserInstanceEnumerationElement(){
   	
  	if (m_elementP!=0)
  	  delete(m_elementP);
  	if (m_nextP!=0)
  	  delete(m_nextP);
  	  
  };

  
  //*********************************************************
  //Linux_SambaUserInstanceNameEnumeration
  //*********************************************************

  Linux_SambaUserInstanceEnumeration::
   Linux_SambaUserInstanceEnumeration(){
   	
  	 firstElementP=0;
     currentElementP=0;
     endElementP=0;
  };
  
  Linux_SambaUserInstanceEnumeration::
   Linux_SambaUserInstanceEnumeration(
   const Linux_SambaUserInstanceEnumeration& original){
   	
     firstElementP=0;
     currentElementP=0;
     endElementP=0;
  	 
     int size=original.getSize();
     for(int i=0;i<size;i++)
       addElement(original.getElement(i));           
  };
  
  	  
  Linux_SambaUserInstanceEnumeration::
   ~Linux_SambaUserInstanceEnumeration(){
   	
  	if (firstElementP!=0)
  	  delete(firstElementP);
  	  	
  };
  
  	  
  void Linux_SambaUserInstanceEnumeration::reset(){
  	
  	currentElementP=firstElementP;
  };
  
  	  
  bool Linux_SambaUserInstanceEnumeration::hasNext() const{
  	
  	return (currentElementP!=0);
  
  };
  
  int Linux_SambaUserInstanceEnumeration::getSize() const{
  	
    int size=0;
    Linux_SambaUserInstanceEnumerationElement* followingP=firstElementP;
  	
  	while(followingP!=0){
        followingP=followingP->m_nextP;
        size++;
    }
  	
    return size;
    
  };
  
  const Linux_SambaUserInstance&  
   Linux_SambaUserInstanceEnumeration::getElement(int pos) const{
   
    Linux_SambaUserInstanceEnumerationElement* followingP=firstElementP;
   
    int i=0;
    while((followingP!=0)&&(i<pos)){
        followingP=followingP->m_nextP;
        i++;
    }
    
    return *(followingP->m_elementP);
  };
  
  	  
  const Linux_SambaUserInstance&
   Linux_SambaUserInstanceEnumeration::getNext() {
   	
  	 Linux_SambaUserInstanceEnumerationElement* currentP=
  	  currentElementP;
  	 currentElementP=currentElementP->m_nextP;
  	 
  	 return *(currentP->m_elementP);
  };
  	  
  void Linux_SambaUserInstanceEnumeration::addElement
   (const Linux_SambaUserInstance& elementP){
   	
  	if(firstElementP==0){
  	  firstElementP=new Linux_SambaUserInstanceEnumerationElement();
  	  firstElementP->m_elementP=new Linux_SambaUserInstance(elementP);
  	  endElementP=firstElementP;
  	  currentElementP=firstElementP;
  	}else{
  	  endElementP->m_nextP=new Linux_SambaUserInstanceEnumerationElement();
  	  endElementP=endElementP->m_nextP;
  	  endElementP->m_elementP=new Linux_SambaUserInstance(elementP);
  	}
  };  
}
 
