/**
 *  Linux_SambaServiceConfigurationForServiceManualInstance.cpp
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


#include "Linux_SambaServiceConfigurationForServiceManualInstance.h"
#include "CmpiData.h"
#include "CmpiString.h"
#include "CmpiArray.h"
#include <string>

namespace genProvider {

  //*********************************************************
  //Linux_SambaServiceConfigurationForServiceManualInstance
  //*********************************************************

  //empty constructor
  Linux_SambaServiceConfigurationForServiceManualInstance::
   Linux_SambaServiceConfigurationForServiceManualInstance(){   	
   	init();  	   	
  };
  
  
  //copy constructor	
  Linux_SambaServiceConfigurationForServiceManualInstance::
   Linux_SambaServiceConfigurationForServiceManualInstance
   (const Linux_SambaServiceConfigurationForServiceManualInstance& original){   	
   	init(original);  	   	
  };
  
  
  //constructor using CmpiInstance
  Linux_SambaServiceConfigurationForServiceManualInstance::
   Linux_SambaServiceConfigurationForServiceManualInstance (const CmpiInstance& inst, const char* instanceNamespace){
    CmpiData cmpiData;
    init(); 
    
    CmpiObjectPath cop=inst.getObjectPath();
    cop.setNameSpace(instanceNamespace);
    setInstanceName(Linux_SambaServiceConfigurationForServiceInstanceName(cop));
    
  }
  
  
  //Destructor
  Linux_SambaServiceConfigurationForServiceManualInstance::
   ~Linux_SambaServiceConfigurationForServiceManualInstance(){
   	reset();  	  
  };
  
  
  //copy operator
  Linux_SambaServiceConfigurationForServiceManualInstance&
   Linux_SambaServiceConfigurationForServiceManualInstance::operator=
   (const Linux_SambaServiceConfigurationForServiceManualInstance& original){   	
   	init(original);
   	return *this;
  };
  
  
  //converts to CmpiInstance
  CmpiInstance Linux_SambaServiceConfigurationForServiceManualInstance::
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
  unsigned int Linux_SambaServiceConfigurationForServiceManualInstance::
   isInstanceNameSet() const{
  	return isSet.instanceName;
  }
  
  const Linux_SambaServiceConfigurationForServiceInstanceName&
    Linux_SambaServiceConfigurationForServiceManualInstance::getInstanceName() const{

    if(!isSet.instanceName)
   	  throw CmpiErrorFormater::getErrorException(
   	   CmpiErrorFormater::NOT_SET,
   	   "InstanceName not set in Linux_SambaServiceConfigurationForService instance");
  		
   	return m_instanceName;
  }

  void Linux_SambaServiceConfigurationForServiceManualInstance::setInstanceName(
   const Linux_SambaServiceConfigurationForServiceInstanceName& val){
    m_instanceName = val;
    isSet.instanceName=1;
  }


  
  //set isSet attributes to FALSE
  void Linux_SambaServiceConfigurationForServiceManualInstance::init(){
   	isSet.instanceName=0;
   	  	
  };
  
  
  //copies another instance properties in this
  void Linux_SambaServiceConfigurationForServiceManualInstance::init
   (const Linux_SambaServiceConfigurationForServiceManualInstance& original){   	
   	init();
   	   	
    if(original.isInstanceNameSet()){
      setInstanceName(original.getInstanceName());
    }    
   }
  
  
  //reset the instance data
  void Linux_SambaServiceConfigurationForServiceManualInstance::reset(){
   	
  	  
  };
  
  
  //*********************************************************
  //Linux_SambaServiceConfigurationForServiceManualInstanceEnumerationElement	
  //*********************************************************
  
  Linux_SambaServiceConfigurationForServiceManualInstanceEnumerationElement::
   Linux_SambaServiceConfigurationForServiceManualInstanceEnumerationElement(){
   	
  	m_elementP=0;
  	m_nextP=0;
  	  
  };
  
  
  Linux_SambaServiceConfigurationForServiceManualInstanceEnumerationElement::
   ~Linux_SambaServiceConfigurationForServiceManualInstanceEnumerationElement(){
   	
  	if (m_elementP!=0)
  	  delete(m_elementP);
  	if (m_nextP!=0)
  	  delete(m_nextP);
  	  
  };

  
  //*********************************************************
  //Linux_SambaServiceConfigurationForServiceManualInstanceNameEnumeration
  //*********************************************************

  Linux_SambaServiceConfigurationForServiceManualInstanceEnumeration::
   Linux_SambaServiceConfigurationForServiceManualInstanceEnumeration(){
   	
  	 firstElementP=0;
     currentElementP=0;
     endElementP=0;
  };
  
  Linux_SambaServiceConfigurationForServiceManualInstanceEnumeration::
   Linux_SambaServiceConfigurationForServiceManualInstanceEnumeration(
   const Linux_SambaServiceConfigurationForServiceManualInstanceEnumeration& original){
   	
     firstElementP=0;
     currentElementP=0;
     endElementP=0;
  	 
     int size=original.getSize();
     for(int i=0;i<size;i++)
       addElement(original.getElement(i));           
  };
  
  	  
  Linux_SambaServiceConfigurationForServiceManualInstanceEnumeration::
   ~Linux_SambaServiceConfigurationForServiceManualInstanceEnumeration(){
   	
  	if (firstElementP!=0)
  	  delete(firstElementP);
  	  	
  };
  
  	  
  void Linux_SambaServiceConfigurationForServiceManualInstanceEnumeration::reset(){
  	
  	currentElementP=firstElementP;
  };
  
  	  
  bool Linux_SambaServiceConfigurationForServiceManualInstanceEnumeration::hasNext() const{
  	
  	return (currentElementP!=0);
  
  };
  
  int Linux_SambaServiceConfigurationForServiceManualInstanceEnumeration::getSize() const{
  	
    int size=0;
    Linux_SambaServiceConfigurationForServiceManualInstanceEnumerationElement* followingP=firstElementP;
  	
  	while(followingP!=0){
        followingP=followingP->m_nextP;
        size++;
    }
  	
    return size;
    
  };
  
  const Linux_SambaServiceConfigurationForServiceManualInstance&  
   Linux_SambaServiceConfigurationForServiceManualInstanceEnumeration::getElement(int pos) const{
   
    Linux_SambaServiceConfigurationForServiceManualInstanceEnumerationElement* followingP=firstElementP;
   
    int i=0;
    while((followingP!=0)&&(i<pos)){
        followingP=followingP->m_nextP;
        i++;
    }
    
    return *(followingP->m_elementP);
  };
  
  	  
  const Linux_SambaServiceConfigurationForServiceManualInstance&
   Linux_SambaServiceConfigurationForServiceManualInstanceEnumeration::getNext() {
   	
  	 Linux_SambaServiceConfigurationForServiceManualInstanceEnumerationElement* currentP=
  	  currentElementP;
  	 currentElementP=currentElementP->m_nextP;
  	 
  	 return *(currentP->m_elementP);
  };
  	  
  void Linux_SambaServiceConfigurationForServiceManualInstanceEnumeration::addElement
   (const Linux_SambaServiceConfigurationForServiceManualInstance& elementP){
   	
  	if(firstElementP==0){
  	  firstElementP=new Linux_SambaServiceConfigurationForServiceManualInstanceEnumerationElement();
  	  firstElementP->m_elementP=new Linux_SambaServiceConfigurationForServiceManualInstance(elementP);
  	  endElementP=firstElementP;
  	  currentElementP=firstElementP;
  	}else{
  	  endElementP->m_nextP=new Linux_SambaServiceConfigurationForServiceManualInstanceEnumerationElement();
  	  endElementP=endElementP->m_nextP;
  	  endElementP->m_elementP=new Linux_SambaServiceConfigurationForServiceManualInstance(elementP);
  	}
  };  
}
 
