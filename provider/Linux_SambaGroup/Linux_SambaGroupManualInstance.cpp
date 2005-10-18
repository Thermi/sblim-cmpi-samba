/**
 *  Linux_SambaGroupManualInstance.cpp
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


#include "Linux_SambaGroupManualInstance.h"
#include "CmpiData.h"
#include "CmpiString.h"
#include "CmpiArray.h"
#include <string>

namespace genProvider {

  //*********************************************************
  //Linux_SambaGroupManualInstance
  //*********************************************************

  //empty constructor
  Linux_SambaGroupManualInstance::
   Linux_SambaGroupManualInstance(){   	
   	init();  	   	
  };
  
  
  //copy constructor	
  Linux_SambaGroupManualInstance::
   Linux_SambaGroupManualInstance
   (const Linux_SambaGroupManualInstance& original){   	
   	init(original);  	   	
  };
  
  
  //constructor using CmpiInstance
  Linux_SambaGroupManualInstance::
   Linux_SambaGroupManualInstance (const CmpiInstance& inst, const char* instanceNamespace){
    CmpiData cmpiData;
    init(); 
    
    CmpiObjectPath cop=inst.getObjectPath();
    cop.setNameSpace(instanceNamespace);
    setInstanceName(Linux_SambaGroupInstanceName(cop));
    
    cmpiData = inst.getProperty("SystemGroupName");
    if(!cmpiData.isNullValue()){
      CmpiString SystemGroupName = cmpiData;
      setSystemGroupName(SystemGroupName.charPtr());
    }
    
  }
  
  
  //Destructor
  Linux_SambaGroupManualInstance::
   ~Linux_SambaGroupManualInstance(){
   	reset();  	  
  };
  
  
  //copy operator
  Linux_SambaGroupManualInstance&
   Linux_SambaGroupManualInstance::operator=
   (const Linux_SambaGroupManualInstance& original){   	
   	init(original);
   	return *this;
  };
  
  
  //converts to CmpiInstance
  CmpiInstance Linux_SambaGroupManualInstance::
   getCmpiInstance(const char** properties) const{
   	
   	CmpiObjectPath objectPath=getInstanceName().getObjectPath();      
    CmpiInstance cmpiInstance(objectPath);    
    getInstanceName().fillKeys(cmpiInstance);
    
    if (properties) {
	  cmpiInstance.setPropertyFilter(properties,0);
    }

  	if(isSet.SystemGroupName){
  	  cmpiInstance.setProperty("SystemGroupName",CmpiData(m_SystemGroupName));
  	}
  	
  	return cmpiInstance;
  	
  }
  
  
  //InstanceName related methods
  unsigned int Linux_SambaGroupManualInstance::
   isInstanceNameSet() const{
  	return isSet.instanceName;
  }
  
  const Linux_SambaGroupInstanceName&
    Linux_SambaGroupManualInstance::getInstanceName() const{

    if(!isSet.instanceName)
   	  throw CmpiErrorFormater::getErrorException(
   	   CmpiErrorFormater::NOT_SET,
   	   "InstanceName not set in Linux_SambaGroup instance");
  		
   	return m_instanceName;
  }

  void Linux_SambaGroupManualInstance::setInstanceName(
   const Linux_SambaGroupInstanceName& val){
    m_instanceName = val;
    isSet.instanceName=1;
  }
       
  //SystemGroupName related methods
  unsigned int Linux_SambaGroupManualInstance::isSystemGroupNameSet() const{
    return isSet.SystemGroupName;
  }
  void  Linux_SambaGroupManualInstance::
   setSystemGroupName(const char* val, int makeCopy){
    if (isSet.SystemGroupName) {
      delete []m_SystemGroupName;
    }
    if (makeCopy&&val) {
      char* tmpval = new char[strlen(val)+1];
      strcpy(tmpval,val);
      m_SystemGroupName = tmpval;
    } else {
      m_SystemGroupName = val;
    }
    isSet.SystemGroupName=1;
  }       
  const char* Linux_SambaGroupManualInstance::
   getSystemGroupName() const{
    
    if(!isSet.SystemGroupName)
   	  throw CmpiErrorFormater::getErrorException(
   	   CmpiErrorFormater::NOT_SET,
   	   "SystemGroupName not set");
   	   	
    return m_SystemGroupName;
  }


  
  //set isSet attributes to FALSE
  void Linux_SambaGroupManualInstance::init(){
   	isSet.instanceName=0;
   	   	
    isSet.SystemGroupName=0;  	
  };
  
  
  //copies another instance properties in this
  void Linux_SambaGroupManualInstance::init
   (const Linux_SambaGroupManualInstance& original){   	
   	init();
   	   	
    if(original.isInstanceNameSet()){
      setInstanceName(original.getInstanceName());
    }   	
    if(original.isSystemGroupNameSet()){
      const char* SystemGroupNameOriginal=original.getSystemGroupName();
      setSystemGroupName(SystemGroupNameOriginal, 1);
    }    
   }
  
  
  //reset the instance data
  void Linux_SambaGroupManualInstance::reset(){
   	

  	if (isSet.SystemGroupName)
  	  delete(m_SystemGroupName);
  	  
  };
  
  
  //*********************************************************
  //Linux_SambaGroupManualInstanceEnumerationElement	
  //*********************************************************
  
  Linux_SambaGroupManualInstanceEnumerationElement::
   Linux_SambaGroupManualInstanceEnumerationElement(){
   	
  	m_elementP=0;
  	m_nextP=0;
  	  
  };
  
  
  Linux_SambaGroupManualInstanceEnumerationElement::
   ~Linux_SambaGroupManualInstanceEnumerationElement(){
   	
  	if (m_elementP!=0)
  	  delete(m_elementP);
  	if (m_nextP!=0)
  	  delete(m_nextP);
  	  
  };

  
  //*********************************************************
  //Linux_SambaGroupManualInstanceNameEnumeration
  //*********************************************************

  Linux_SambaGroupManualInstanceEnumeration::
   Linux_SambaGroupManualInstanceEnumeration(){
   	
  	 firstElementP=0;
     currentElementP=0;
     endElementP=0;
  };
  
  Linux_SambaGroupManualInstanceEnumeration::
   Linux_SambaGroupManualInstanceEnumeration(
   const Linux_SambaGroupManualInstanceEnumeration& original){
   	
     firstElementP=0;
     currentElementP=0;
     endElementP=0;
  	 
     int size=original.getSize();
     for(int i=0;i<size;i++)
       addElement(original.getElement(i));           
  };
  
  	  
  Linux_SambaGroupManualInstanceEnumeration::
   ~Linux_SambaGroupManualInstanceEnumeration(){
   	
  	if (firstElementP!=0)
  	  delete(firstElementP);
  	  	
  };
  
  	  
  void Linux_SambaGroupManualInstanceEnumeration::reset(){
  	
  	currentElementP=firstElementP;
  };
  
  	  
  bool Linux_SambaGroupManualInstanceEnumeration::hasNext() const{
  	
  	return (currentElementP!=0);
  
  };
  
  int Linux_SambaGroupManualInstanceEnumeration::getSize() const{
  	
    int size=0;
    Linux_SambaGroupManualInstanceEnumerationElement* followingP=firstElementP;
  	
  	while(followingP!=0){
        followingP=followingP->m_nextP;
        size++;
    }
  	
    return size;
    
  };
  
  const Linux_SambaGroupManualInstance&  
   Linux_SambaGroupManualInstanceEnumeration::getElement(int pos) const{
   
    Linux_SambaGroupManualInstanceEnumerationElement* followingP=firstElementP;
   
    int i=0;
    while((followingP!=0)&&(i<pos)){
        followingP=followingP->m_nextP;
        i++;
    }
    
    return *(followingP->m_elementP);
  };
  
  	  
  const Linux_SambaGroupManualInstance&
   Linux_SambaGroupManualInstanceEnumeration::getNext() {
   	
  	 Linux_SambaGroupManualInstanceEnumerationElement* currentP=
  	  currentElementP;
  	 currentElementP=currentElementP->m_nextP;
  	 
  	 return *(currentP->m_elementP);
  };
  	  
  void Linux_SambaGroupManualInstanceEnumeration::addElement
   (const Linux_SambaGroupManualInstance& elementP){
   	
  	if(firstElementP==0){
  	  firstElementP=new Linux_SambaGroupManualInstanceEnumerationElement();
  	  firstElementP->m_elementP=new Linux_SambaGroupManualInstance(elementP);
  	  endElementP=firstElementP;
  	  currentElementP=firstElementP;
  	}else{
  	  endElementP->m_nextP=new Linux_SambaGroupManualInstanceEnumerationElement();
  	  endElementP=endElementP->m_nextP;
  	  endElementP->m_elementP=new Linux_SambaGroupManualInstance(elementP);
  	}
  };  
}
 
