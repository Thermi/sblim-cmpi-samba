/**
 *  Linux_SambaServiceConfigurationForServiceInstance.cpp
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


#include "Linux_SambaServiceConfigurationForServiceInstance.h"
#include "CmpiData.h"
#include "CmpiString.h"
#include "CmpiArray.h"
#include <string>

namespace genProvider {

  //*********************************************************
  //Linux_SambaServiceConfigurationForServiceInstance
  //*********************************************************

  //empty constructor
  Linux_SambaServiceConfigurationForServiceInstance::
   Linux_SambaServiceConfigurationForServiceInstance(){   	
   	init();  	   	
  };
  
  
  //copy constructor	
  Linux_SambaServiceConfigurationForServiceInstance::
   Linux_SambaServiceConfigurationForServiceInstance
   (const Linux_SambaServiceConfigurationForServiceInstance& original){   	
   	init(original);  	   	
  };
  
  
  //constructor using CmpiInstance
  Linux_SambaServiceConfigurationForServiceInstance::
   Linux_SambaServiceConfigurationForServiceInstance (const CmpiInstance& inst, const char* instanceNamespace){
    CmpiData cmpiData;
    init(); 
    
    CmpiObjectPath cop=inst.getObjectPath();
    cop.setNameSpace(instanceNamespace);
    setInstanceName(Linux_SambaServiceConfigurationForServiceInstanceName(cop));
    
  }
  
  
  //Destructor
  Linux_SambaServiceConfigurationForServiceInstance::
   ~Linux_SambaServiceConfigurationForServiceInstance(){
   	reset();  	  
  };
  
  
  //copy operator
  Linux_SambaServiceConfigurationForServiceInstance&
   Linux_SambaServiceConfigurationForServiceInstance::operator=
   (const Linux_SambaServiceConfigurationForServiceInstance& original){   	
   	init(original);
   	return *this;
  };
  
  
  //converts to CmpiInstance
  CmpiInstance Linux_SambaServiceConfigurationForServiceInstance::
   getCmpiInstance(const char** properties) const{
   	
   	CmpiObjectPath objectPath=getInstanceName().getObjectPath();      
    CmpiInstance cmpiInstance(objectPath);    
    getInstanceName().fillKeys(cmpiInstance);
    
    if (properties) {
	  cmpiInstance.setPropertyFilter(properties,0);
    }
  	
  	return cmpiInstance;
  	
  }
  
  
  //InstanceName related methods
  unsigned int Linux_SambaServiceConfigurationForServiceInstance::
   isInstanceNameSet() const{
  	return isSet.instanceName;
  }
  
  const Linux_SambaServiceConfigurationForServiceInstanceName&
    Linux_SambaServiceConfigurationForServiceInstance::getInstanceName() const{

    if(!isSet.instanceName)
   	  throw CmpiErrorFormater::getErrorException(
   	   CmpiErrorFormater::NOT_SET,
   	   "InstanceName not set in Linux_SambaServiceConfigurationForService instance");
  		
   	return m_instanceName;
  }

  void Linux_SambaServiceConfigurationForServiceInstance::setInstanceName(
   const Linux_SambaServiceConfigurationForServiceInstanceName& val){
    m_instanceName = val;
    isSet.instanceName=1;
  }


  
  //set isSet attributes to FALSE
  void Linux_SambaServiceConfigurationForServiceInstance::init(){
   	isSet.instanceName=0;
   	  	
  };
  
  
  //copies another instance properties in this
  void Linux_SambaServiceConfigurationForServiceInstance::init
   (const Linux_SambaServiceConfigurationForServiceInstance& original){   	
   	init();
   	   	
    if(original.isInstanceNameSet()){
      setInstanceName(original.getInstanceName());
    }    
   }
  
  
  //reset the instance data
  void Linux_SambaServiceConfigurationForServiceInstance::reset(){
   	
  	  
  };
  
  
  //*********************************************************
  //Linux_SambaServiceConfigurationForServiceInstanceEnumerationElement	
  //*********************************************************
  
  Linux_SambaServiceConfigurationForServiceInstanceEnumerationElement::
   Linux_SambaServiceConfigurationForServiceInstanceEnumerationElement(){
   	
  	m_elementP=0;
  	m_nextP=0;
  	  
  };
  
  
  Linux_SambaServiceConfigurationForServiceInstanceEnumerationElement::
   ~Linux_SambaServiceConfigurationForServiceInstanceEnumerationElement(){
   	
  	if (m_elementP!=0)
  	  delete(m_elementP);
  	if (m_nextP!=0)
  	  delete(m_nextP);
  	  
  };

  
  //*********************************************************
  //Linux_SambaServiceConfigurationForServiceInstanceNameEnumeration
  //*********************************************************

  Linux_SambaServiceConfigurationForServiceInstanceEnumeration::
   Linux_SambaServiceConfigurationForServiceInstanceEnumeration(){
   	
  	 firstElementP=0;
     currentElementP=0;
     endElementP=0;
  };
  
  Linux_SambaServiceConfigurationForServiceInstanceEnumeration::
   Linux_SambaServiceConfigurationForServiceInstanceEnumeration(
   const Linux_SambaServiceConfigurationForServiceInstanceEnumeration& original){
   	
     firstElementP=0;
     currentElementP=0;
     endElementP=0;
  	 
     int size=original.getSize();
     for(int i=0;i<size;i++)
       addElement(original.getElement(i));           
  };
  
  	  
  Linux_SambaServiceConfigurationForServiceInstanceEnumeration::
   ~Linux_SambaServiceConfigurationForServiceInstanceEnumeration(){
   	
  	if (firstElementP!=0)
  	  delete(firstElementP);
  	  	
  };
  
  	  
  void Linux_SambaServiceConfigurationForServiceInstanceEnumeration::reset(){
  	
  	currentElementP=firstElementP;
  };
  
  	  
  bool Linux_SambaServiceConfigurationForServiceInstanceEnumeration::hasNext() const{
  	
  	return (currentElementP!=0);
  
  };
  
  int Linux_SambaServiceConfigurationForServiceInstanceEnumeration::getSize() const{
  	
    int size=0;
    Linux_SambaServiceConfigurationForServiceInstanceEnumerationElement* followingP=firstElementP;
  	
  	while(followingP!=0){
        followingP=followingP->m_nextP;
        size++;
    }
  	
    return size;
    
  };
  
  const Linux_SambaServiceConfigurationForServiceInstance&  
   Linux_SambaServiceConfigurationForServiceInstanceEnumeration::getElement(int pos) const{
   
    Linux_SambaServiceConfigurationForServiceInstanceEnumerationElement* followingP=firstElementP;
   
    int i=0;
    while((followingP!=0)&&(i<pos)){
        followingP=followingP->m_nextP;
        i++;
    }
    
    return *(followingP->m_elementP);
  };
  
  	  
  const Linux_SambaServiceConfigurationForServiceInstance&
   Linux_SambaServiceConfigurationForServiceInstanceEnumeration::getNext() {
   	
  	 Linux_SambaServiceConfigurationForServiceInstanceEnumerationElement* currentP=
  	  currentElementP;
  	 currentElementP=currentElementP->m_nextP;
  	 
  	 return *(currentP->m_elementP);
  };
  	  
  void Linux_SambaServiceConfigurationForServiceInstanceEnumeration::addElement
   (const Linux_SambaServiceConfigurationForServiceInstance& elementP){
   	
  	if(firstElementP==0){
  	  firstElementP=new Linux_SambaServiceConfigurationForServiceInstanceEnumerationElement();
  	  firstElementP->m_elementP=new Linux_SambaServiceConfigurationForServiceInstance(elementP);
  	  endElementP=firstElementP;
  	  currentElementP=firstElementP;
  	}else{
  	  endElementP->m_nextP=new Linux_SambaServiceConfigurationForServiceInstanceEnumerationElement();
  	  endElementP=endElementP->m_nextP;
  	  endElementP->m_elementP=new Linux_SambaServiceConfigurationForServiceInstance(elementP);
  	}
  };  
}
 
