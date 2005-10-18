/**
 *  Linux_SambaGlobalForServiceInstance.cpp
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


#include "Linux_SambaGlobalForServiceInstance.h"
#include "CmpiData.h"
#include "CmpiString.h"
#include "CmpiArray.h"
#include <string>

namespace genProvider {

  //*********************************************************
  //Linux_SambaGlobalForServiceInstance
  //*********************************************************

  //empty constructor
  Linux_SambaGlobalForServiceInstance::
   Linux_SambaGlobalForServiceInstance(){   	
   	init();  	   	
  };
  
  
  //copy constructor	
  Linux_SambaGlobalForServiceInstance::
   Linux_SambaGlobalForServiceInstance
   (const Linux_SambaGlobalForServiceInstance& original){   	
   	init(original);  	   	
  };
  
  
  //constructor using CmpiInstance
  Linux_SambaGlobalForServiceInstance::
   Linux_SambaGlobalForServiceInstance (const CmpiInstance& inst, const char* instanceNamespace){
    CmpiData cmpiData;
    init(); 
    
    CmpiObjectPath cop=inst.getObjectPath();
    cop.setNameSpace(instanceNamespace);
    setInstanceName(Linux_SambaGlobalForServiceInstanceName(cop));
    
    cmpiData = inst.getProperty("IsCurrent");
    if(!cmpiData.isNullValue()){
      CMPIUint16 IsCurrent = cmpiData;
      setIsCurrent(IsCurrent);
    }
    
    cmpiData = inst.getProperty("IsDefault");
    if(!cmpiData.isNullValue()){
      CMPIUint16 IsDefault = cmpiData;
      setIsDefault(IsDefault);
    }
    
  }
  
  
  //Destructor
  Linux_SambaGlobalForServiceInstance::
   ~Linux_SambaGlobalForServiceInstance(){
   	reset();  	  
  };
  
  
  //copy operator
  Linux_SambaGlobalForServiceInstance&
   Linux_SambaGlobalForServiceInstance::operator=
   (const Linux_SambaGlobalForServiceInstance& original){   	
   	init(original);
   	return *this;
  };
  
  
  //converts to CmpiInstance
  CmpiInstance Linux_SambaGlobalForServiceInstance::
   getCmpiInstance(const char** properties) const{
   	
   	CmpiObjectPath objectPath=getInstanceName().getObjectPath();      
    CmpiInstance cmpiInstance(objectPath);    
    getInstanceName().fillKeys(cmpiInstance);
    
    if (properties) {
	  cmpiInstance.setPropertyFilter(properties,0);
    }

  	if(isSet.IsCurrent){
  	  cmpiInstance.setProperty("IsCurrent",CmpiData(m_IsCurrent));
  	}

  	if(isSet.IsDefault){
  	  cmpiInstance.setProperty("IsDefault",CmpiData(m_IsDefault));
  	}
  	
  	return cmpiInstance;
  	
  }
  
  
  //InstanceName related methods
  unsigned int Linux_SambaGlobalForServiceInstance::
   isInstanceNameSet() const{
  	return isSet.instanceName;
  }
  
  const Linux_SambaGlobalForServiceInstanceName&
    Linux_SambaGlobalForServiceInstance::getInstanceName() const{

    if(!isSet.instanceName)
   	  throw CmpiErrorFormater::getErrorException(
   	   CmpiErrorFormater::NOT_SET,
   	   "InstanceName not set in Linux_SambaGlobalForService instance");
  		
   	return m_instanceName;
  }

  void Linux_SambaGlobalForServiceInstance::setInstanceName(
   const Linux_SambaGlobalForServiceInstanceName& val){
    m_instanceName = val;
    isSet.instanceName=1;
  }
       
  //IsCurrent related methods
  unsigned int Linux_SambaGlobalForServiceInstance::isIsCurrentSet() const{
    return isSet.IsCurrent;
  }
  void Linux_SambaGlobalForServiceInstance::
   setIsCurrent(const CMPIUint16 val){
    m_IsCurrent = val;
    isSet.IsCurrent=1;
  }       
  const CMPIUint16 Linux_SambaGlobalForServiceInstance::
   getIsCurrent() const{
    
    if(!isSet.IsCurrent)
   	  throw CmpiErrorFormater::getErrorException(
   	   CmpiErrorFormater::NOT_SET,
   	   "IsCurrent not set");
   	   	
    return m_IsCurrent;
  }
       
  //IsDefault related methods
  unsigned int Linux_SambaGlobalForServiceInstance::isIsDefaultSet() const{
    return isSet.IsDefault;
  }
  void Linux_SambaGlobalForServiceInstance::
   setIsDefault(const CMPIUint16 val){
    m_IsDefault = val;
    isSet.IsDefault=1;
  }       
  const CMPIUint16 Linux_SambaGlobalForServiceInstance::
   getIsDefault() const{
    
    if(!isSet.IsDefault)
   	  throw CmpiErrorFormater::getErrorException(
   	   CmpiErrorFormater::NOT_SET,
   	   "IsDefault not set");
   	   	
    return m_IsDefault;
  }


  
  //set isSet attributes to FALSE
  void Linux_SambaGlobalForServiceInstance::init(){
   	isSet.instanceName=0;
   	   	
    isSet.IsCurrent=0;   	
    isSet.IsDefault=0;  	
  };
  
  
  //copies another instance properties in this
  void Linux_SambaGlobalForServiceInstance::init
   (const Linux_SambaGlobalForServiceInstance& original){   	
   	init();
   	   	
    if(original.isInstanceNameSet()){
      setInstanceName(original.getInstanceName());
    }   	
    if(original.isIsCurrentSet()){
      const CMPIUint16 IsCurrentOriginal=original.getIsCurrent();
      setIsCurrent(IsCurrentOriginal);
    }   	
    if(original.isIsDefaultSet()){
      const CMPIUint16 IsDefaultOriginal=original.getIsDefault();
      setIsDefault(IsDefaultOriginal);
    }    
   }
  
  
  //reset the instance data
  void Linux_SambaGlobalForServiceInstance::reset(){
   	
  	  
  };
  
  
  //*********************************************************
  //Linux_SambaGlobalForServiceInstanceEnumerationElement	
  //*********************************************************
  
  Linux_SambaGlobalForServiceInstanceEnumerationElement::
   Linux_SambaGlobalForServiceInstanceEnumerationElement(){
   	
  	m_elementP=0;
  	m_nextP=0;
  	  
  };
  
  
  Linux_SambaGlobalForServiceInstanceEnumerationElement::
   ~Linux_SambaGlobalForServiceInstanceEnumerationElement(){
   	
  	if (m_elementP!=0)
  	  delete(m_elementP);
  	if (m_nextP!=0)
  	  delete(m_nextP);
  	  
  };

  
  //*********************************************************
  //Linux_SambaGlobalForServiceInstanceNameEnumeration
  //*********************************************************

  Linux_SambaGlobalForServiceInstanceEnumeration::
   Linux_SambaGlobalForServiceInstanceEnumeration(){
   	
  	 firstElementP=0;
     currentElementP=0;
     endElementP=0;
  };
  
  Linux_SambaGlobalForServiceInstanceEnumeration::
   Linux_SambaGlobalForServiceInstanceEnumeration(
   const Linux_SambaGlobalForServiceInstanceEnumeration& original){
   	
     firstElementP=0;
     currentElementP=0;
     endElementP=0;
  	 
     int size=original.getSize();
     for(int i=0;i<size;i++)
       addElement(original.getElement(i));           
  };
  
  	  
  Linux_SambaGlobalForServiceInstanceEnumeration::
   ~Linux_SambaGlobalForServiceInstanceEnumeration(){
   	
  	if (firstElementP!=0)
  	  delete(firstElementP);
  	  	
  };
  
  	  
  void Linux_SambaGlobalForServiceInstanceEnumeration::reset(){
  	
  	currentElementP=firstElementP;
  };
  
  	  
  bool Linux_SambaGlobalForServiceInstanceEnumeration::hasNext() const{
  	
  	return (currentElementP!=0);
  
  };
  
  int Linux_SambaGlobalForServiceInstanceEnumeration::getSize() const{
  	
    int size=0;
    Linux_SambaGlobalForServiceInstanceEnumerationElement* followingP=firstElementP;
  	
  	while(followingP!=0){
        followingP=followingP->m_nextP;
        size++;
    }
  	
    return size;
    
  };
  
  const Linux_SambaGlobalForServiceInstance&  
   Linux_SambaGlobalForServiceInstanceEnumeration::getElement(int pos) const{
   
    Linux_SambaGlobalForServiceInstanceEnumerationElement* followingP=firstElementP;
   
    int i=0;
    while((followingP!=0)&&(i<pos)){
        followingP=followingP->m_nextP;
        i++;
    }
    
    return *(followingP->m_elementP);
  };
  
  	  
  const Linux_SambaGlobalForServiceInstance&
   Linux_SambaGlobalForServiceInstanceEnumeration::getNext() {
   	
  	 Linux_SambaGlobalForServiceInstanceEnumerationElement* currentP=
  	  currentElementP;
  	 currentElementP=currentElementP->m_nextP;
  	 
  	 return *(currentP->m_elementP);
  };
  	  
  void Linux_SambaGlobalForServiceInstanceEnumeration::addElement
   (const Linux_SambaGlobalForServiceInstance& elementP){
   	
  	if(firstElementP==0){
  	  firstElementP=new Linux_SambaGlobalForServiceInstanceEnumerationElement();
  	  firstElementP->m_elementP=new Linux_SambaGlobalForServiceInstance(elementP);
  	  endElementP=firstElementP;
  	  currentElementP=firstElementP;
  	}else{
  	  endElementP->m_nextP=new Linux_SambaGlobalForServiceInstanceEnumerationElement();
  	  endElementP=endElementP->m_nextP;
  	  endElementP->m_elementP=new Linux_SambaGlobalForServiceInstance(elementP);
  	}
  };  
}
 
