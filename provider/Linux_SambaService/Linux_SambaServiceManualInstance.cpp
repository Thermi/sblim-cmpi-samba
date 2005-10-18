/**
 *  Linux_SambaServiceManualInstance.cpp
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


#include "Linux_SambaServiceManualInstance.h"
#include "CmpiData.h"
#include "CmpiString.h"
#include "CmpiArray.h"
#include <string>

namespace genProvider {

  //*********************************************************
  //Linux_SambaServiceManualInstance
  //*********************************************************

  //empty constructor
  Linux_SambaServiceManualInstance::
   Linux_SambaServiceManualInstance(){   	
   	init();  	   	
  };
  
  
  //copy constructor	
  Linux_SambaServiceManualInstance::
   Linux_SambaServiceManualInstance
   (const Linux_SambaServiceManualInstance& original){   	
   	init(original);  	   	
  };
  
  
  //constructor using CmpiInstance
  Linux_SambaServiceManualInstance::
   Linux_SambaServiceManualInstance (const CmpiInstance& inst, const char* instanceNamespace){
    CmpiData cmpiData;
    init(); 
    
    CmpiObjectPath cop=inst.getObjectPath();
    cop.setNameSpace(instanceNamespace);
    setInstanceName(Linux_SambaServiceInstanceName(cop));
    
    cmpiData = inst.getProperty("Started");
    if(!cmpiData.isNullValue()){
      CMPIBoolean Started = cmpiData;
      setStarted(Started);
    }
    
  }
  
  
  //Destructor
  Linux_SambaServiceManualInstance::
   ~Linux_SambaServiceManualInstance(){
   	reset();  	  
  };
  
  
  //copy operator
  Linux_SambaServiceManualInstance&
   Linux_SambaServiceManualInstance::operator=
   (const Linux_SambaServiceManualInstance& original){   	
   	init(original);
   	return *this;
  };
  
  
  //converts to CmpiInstance
  CmpiInstance Linux_SambaServiceManualInstance::
   getCmpiInstance(const char** properties) const{
   	
   	CmpiObjectPath objectPath=getInstanceName().getObjectPath();      
    CmpiInstance cmpiInstance(objectPath);    
    getInstanceName().fillKeys(cmpiInstance);
    
    if (properties) {
	  cmpiInstance.setPropertyFilter(properties,0);
    }

  	if(isSet.Started){
  	  cmpiInstance.setProperty("Started",CmpiBooleanData(m_Started));
  	}
  	
  	return cmpiInstance;
  	
  }
  
  
  //InstanceName related methods
  unsigned int Linux_SambaServiceManualInstance::
   isInstanceNameSet() const{
  	return isSet.instanceName;
  }
  
  const Linux_SambaServiceInstanceName&
    Linux_SambaServiceManualInstance::getInstanceName() const{

    if(!isSet.instanceName)
   	  throw CmpiErrorFormater::getErrorException(
   	   CmpiErrorFormater::NOT_SET,
   	   "InstanceName not set in Linux_SambaService instance");
  		
   	return m_instanceName;
  }

  void Linux_SambaServiceManualInstance::setInstanceName(
   const Linux_SambaServiceInstanceName& val){
    m_instanceName = val;
    isSet.instanceName=1;
  }
       
  //Started related methods
  unsigned int Linux_SambaServiceManualInstance::isStartedSet() const{
    return isSet.Started;
  }
  void Linux_SambaServiceManualInstance::
   setStarted(const CMPIBoolean val){
    m_Started = val;
    isSet.Started=1;
  }       
  const CMPIBoolean Linux_SambaServiceManualInstance::
   getStarted() const{
    
    if(!isSet.Started)
   	  throw CmpiErrorFormater::getErrorException(
   	   CmpiErrorFormater::NOT_SET,
   	   "Started not set");
   	   	
    return m_Started;
  }


  
  //set isSet attributes to FALSE
  void Linux_SambaServiceManualInstance::init(){
   	isSet.instanceName=0;
   	   	
    isSet.Started=0;  	
  };
  
  
  //copies another instance properties in this
  void Linux_SambaServiceManualInstance::init
   (const Linux_SambaServiceManualInstance& original){   	
   	init();
   	   	
    if(original.isInstanceNameSet()){
      setInstanceName(original.getInstanceName());
    }   	
    if(original.isStartedSet()){
      const CMPIBoolean StartedOriginal=original.getStarted();
      setStarted(StartedOriginal);
    }    
   }
  
  
  //reset the instance data
  void Linux_SambaServiceManualInstance::reset(){
   	
  	  
  };
  
  
  //*********************************************************
  //Linux_SambaServiceManualInstanceEnumerationElement	
  //*********************************************************
  
  Linux_SambaServiceManualInstanceEnumerationElement::
   Linux_SambaServiceManualInstanceEnumerationElement(){
   	
  	m_elementP=0;
  	m_nextP=0;
  	  
  };
  
  
  Linux_SambaServiceManualInstanceEnumerationElement::
   ~Linux_SambaServiceManualInstanceEnumerationElement(){
   	
  	if (m_elementP!=0)
  	  delete(m_elementP);
  	if (m_nextP!=0)
  	  delete(m_nextP);
  	  
  };

  
  //*********************************************************
  //Linux_SambaServiceManualInstanceNameEnumeration
  //*********************************************************

  Linux_SambaServiceManualInstanceEnumeration::
   Linux_SambaServiceManualInstanceEnumeration(){
   	
  	 firstElementP=0;
     currentElementP=0;
     endElementP=0;
  };
  
  Linux_SambaServiceManualInstanceEnumeration::
   Linux_SambaServiceManualInstanceEnumeration(
   const Linux_SambaServiceManualInstanceEnumeration& original){
   	
     firstElementP=0;
     currentElementP=0;
     endElementP=0;
  	 
     int size=original.getSize();
     for(int i=0;i<size;i++)
       addElement(original.getElement(i));           
  };
  
  	  
  Linux_SambaServiceManualInstanceEnumeration::
   ~Linux_SambaServiceManualInstanceEnumeration(){
   	
  	if (firstElementP!=0)
  	  delete(firstElementP);
  	  	
  };
  
  	  
  void Linux_SambaServiceManualInstanceEnumeration::reset(){
  	
  	currentElementP=firstElementP;
  };
  
  	  
  bool Linux_SambaServiceManualInstanceEnumeration::hasNext() const{
  	
  	return (currentElementP!=0);
  
  };
  
  int Linux_SambaServiceManualInstanceEnumeration::getSize() const{
  	
    int size=0;
    Linux_SambaServiceManualInstanceEnumerationElement* followingP=firstElementP;
  	
  	while(followingP!=0){
        followingP=followingP->m_nextP;
        size++;
    }
  	
    return size;
    
  };
  
  const Linux_SambaServiceManualInstance&  
   Linux_SambaServiceManualInstanceEnumeration::getElement(int pos) const{
   
    Linux_SambaServiceManualInstanceEnumerationElement* followingP=firstElementP;
   
    int i=0;
    while((followingP!=0)&&(i<pos)){
        followingP=followingP->m_nextP;
        i++;
    }
    
    return *(followingP->m_elementP);
  };
  
  	  
  const Linux_SambaServiceManualInstance&
   Linux_SambaServiceManualInstanceEnumeration::getNext() {
   	
  	 Linux_SambaServiceManualInstanceEnumerationElement* currentP=
  	  currentElementP;
  	 currentElementP=currentElementP->m_nextP;
  	 
  	 return *(currentP->m_elementP);
  };
  	  
  void Linux_SambaServiceManualInstanceEnumeration::addElement
   (const Linux_SambaServiceManualInstance& elementP){
   	
  	if(firstElementP==0){
  	  firstElementP=new Linux_SambaServiceManualInstanceEnumerationElement();
  	  firstElementP->m_elementP=new Linux_SambaServiceManualInstance(elementP);
  	  endElementP=firstElementP;
  	  currentElementP=firstElementP;
  	}else{
  	  endElementP->m_nextP=new Linux_SambaServiceManualInstanceEnumerationElement();
  	  endElementP=endElementP->m_nextP;
  	  endElementP->m_elementP=new Linux_SambaServiceManualInstance(elementP);
  	}
  };  
}
 
