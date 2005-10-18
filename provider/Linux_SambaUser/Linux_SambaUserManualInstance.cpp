/**
 *  Linux_SambaUserManualInstance.cpp
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


#include "Linux_SambaUserManualInstance.h"
#include "CmpiData.h"
#include "CmpiString.h"
#include "CmpiArray.h"
#include <string>

namespace genProvider {

  //*********************************************************
  //Linux_SambaUserManualInstance
  //*********************************************************

  //empty constructor
  Linux_SambaUserManualInstance::
   Linux_SambaUserManualInstance(){   	
   	init();  	   	
  };
  
  
  //copy constructor	
  Linux_SambaUserManualInstance::
   Linux_SambaUserManualInstance
   (const Linux_SambaUserManualInstance& original){   	
   	init(original);  	   	
  };
  
  
  //constructor using CmpiInstance
  Linux_SambaUserManualInstance::
   Linux_SambaUserManualInstance (const CmpiInstance& inst, const char* instanceNamespace){
    CmpiData cmpiData;
    init(); 
    
    CmpiObjectPath cop=inst.getObjectPath();
    cop.setNameSpace(instanceNamespace);
    setInstanceName(Linux_SambaUserInstanceName(cop));
    
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
  Linux_SambaUserManualInstance::
   ~Linux_SambaUserManualInstance(){
   	reset();  	  
  };
  
  
  //copy operator
  Linux_SambaUserManualInstance&
   Linux_SambaUserManualInstance::operator=
   (const Linux_SambaUserManualInstance& original){   	
   	init(original);
   	return *this;
  };
  
  
  //converts to CmpiInstance
  CmpiInstance Linux_SambaUserManualInstance::
   getCmpiInstance(const char** properties) const{
   	
   	CmpiObjectPath objectPath=getInstanceName().getObjectPath();      
    CmpiInstance cmpiInstance(objectPath);    
    getInstanceName().fillKeys(cmpiInstance);
    
    if (properties) {
	  cmpiInstance.setPropertyFilter(properties,0);
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
  unsigned int Linux_SambaUserManualInstance::
   isInstanceNameSet() const{
  	return isSet.instanceName;
  }
  
  const Linux_SambaUserInstanceName&
    Linux_SambaUserManualInstance::getInstanceName() const{

    if(!isSet.instanceName)
   	  throw CmpiErrorFormater::getErrorException(
   	   CmpiErrorFormater::NOT_SET,
   	   "InstanceName not set in Linux_SambaUser instance");
  		
   	return m_instanceName;
  }

  void Linux_SambaUserManualInstance::setInstanceName(
   const Linux_SambaUserInstanceName& val){
    m_instanceName = val;
    isSet.instanceName=1;
  }
       
  //SambaUserPassword related methods
  unsigned int Linux_SambaUserManualInstance::isSambaUserPasswordSet() const{
    return isSet.SambaUserPassword;
  }
  void  Linux_SambaUserManualInstance::
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
  const char* Linux_SambaUserManualInstance::
   getSambaUserPassword() const{
    
    if(!isSet.SambaUserPassword)
   	  throw CmpiErrorFormater::getErrorException(
   	   CmpiErrorFormater::NOT_SET,
   	   "SambaUserPassword not set");
   	   	
    return m_SambaUserPassword;
  }
       
  //SystemUserName related methods
  unsigned int Linux_SambaUserManualInstance::isSystemUserNameSet() const{
    return isSet.SystemUserName;
  }
  void  Linux_SambaUserManualInstance::
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
  const char* Linux_SambaUserManualInstance::
   getSystemUserName() const{
    
    if(!isSet.SystemUserName)
   	  throw CmpiErrorFormater::getErrorException(
   	   CmpiErrorFormater::NOT_SET,
   	   "SystemUserName not set");
   	   	
    return m_SystemUserName;
  }


  
  //set isSet attributes to FALSE
  void Linux_SambaUserManualInstance::init(){
   	isSet.instanceName=0;
   	   	
    isSet.SambaUserPassword=0;   	
    isSet.SystemUserName=0;  	
  };
  
  
  //copies another instance properties in this
  void Linux_SambaUserManualInstance::init
   (const Linux_SambaUserManualInstance& original){   	
   	init();
   	   	
    if(original.isInstanceNameSet()){
      setInstanceName(original.getInstanceName());
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
  void Linux_SambaUserManualInstance::reset(){
   	

  	if (isSet.SambaUserPassword)
  	  delete(m_SambaUserPassword);

  	if (isSet.SystemUserName)
  	  delete(m_SystemUserName);
  	  
  };
  
  
  //*********************************************************
  //Linux_SambaUserManualInstanceEnumerationElement	
  //*********************************************************
  
  Linux_SambaUserManualInstanceEnumerationElement::
   Linux_SambaUserManualInstanceEnumerationElement(){
   	
  	m_elementP=0;
  	m_nextP=0;
  	  
  };
  
  
  Linux_SambaUserManualInstanceEnumerationElement::
   ~Linux_SambaUserManualInstanceEnumerationElement(){
   	
  	if (m_elementP!=0)
  	  delete(m_elementP);
  	if (m_nextP!=0)
  	  delete(m_nextP);
  	  
  };

  
  //*********************************************************
  //Linux_SambaUserManualInstanceNameEnumeration
  //*********************************************************

  Linux_SambaUserManualInstanceEnumeration::
   Linux_SambaUserManualInstanceEnumeration(){
   	
  	 firstElementP=0;
     currentElementP=0;
     endElementP=0;
  };
  
  Linux_SambaUserManualInstanceEnumeration::
   Linux_SambaUserManualInstanceEnumeration(
   const Linux_SambaUserManualInstanceEnumeration& original){
   	
     firstElementP=0;
     currentElementP=0;
     endElementP=0;
  	 
     int size=original.getSize();
     for(int i=0;i<size;i++)
       addElement(original.getElement(i));           
  };
  
  	  
  Linux_SambaUserManualInstanceEnumeration::
   ~Linux_SambaUserManualInstanceEnumeration(){
   	
  	if (firstElementP!=0)
  	  delete(firstElementP);
  	  	
  };
  
  	  
  void Linux_SambaUserManualInstanceEnumeration::reset(){
  	
  	currentElementP=firstElementP;
  };
  
  	  
  bool Linux_SambaUserManualInstanceEnumeration::hasNext() const{
  	
  	return (currentElementP!=0);
  
  };
  
  int Linux_SambaUserManualInstanceEnumeration::getSize() const{
  	
    int size=0;
    Linux_SambaUserManualInstanceEnumerationElement* followingP=firstElementP;
  	
  	while(followingP!=0){
        followingP=followingP->m_nextP;
        size++;
    }
  	
    return size;
    
  };
  
  const Linux_SambaUserManualInstance&  
   Linux_SambaUserManualInstanceEnumeration::getElement(int pos) const{
   
    Linux_SambaUserManualInstanceEnumerationElement* followingP=firstElementP;
   
    int i=0;
    while((followingP!=0)&&(i<pos)){
        followingP=followingP->m_nextP;
        i++;
    }
    
    return *(followingP->m_elementP);
  };
  
  	  
  const Linux_SambaUserManualInstance&
   Linux_SambaUserManualInstanceEnumeration::getNext() {
   	
  	 Linux_SambaUserManualInstanceEnumerationElement* currentP=
  	  currentElementP;
  	 currentElementP=currentElementP->m_nextP;
  	 
  	 return *(currentP->m_elementP);
  };
  	  
  void Linux_SambaUserManualInstanceEnumeration::addElement
   (const Linux_SambaUserManualInstance& elementP){
   	
  	if(firstElementP==0){
  	  firstElementP=new Linux_SambaUserManualInstanceEnumerationElement();
  	  firstElementP->m_elementP=new Linux_SambaUserManualInstance(elementP);
  	  endElementP=firstElementP;
  	  currentElementP=firstElementP;
  	}else{
  	  endElementP->m_nextP=new Linux_SambaUserManualInstanceEnumerationElement();
  	  endElementP=endElementP->m_nextP;
  	  endElementP->m_elementP=new Linux_SambaUserManualInstance(elementP);
  	}
  };  
}
 
