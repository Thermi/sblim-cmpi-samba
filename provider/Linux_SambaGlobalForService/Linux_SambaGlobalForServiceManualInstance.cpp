/**
 *  Linux_SambaGlobalForServiceManualInstance.cpp
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


#include "Linux_SambaGlobalForServiceManualInstance.h"
#include "CmpiData.h"
#include "CmpiString.h"
#include "CmpiArray.h"
#include <string>

namespace genProvider {

  //*********************************************************
  //Linux_SambaGlobalForServiceManualInstance
  //*********************************************************

  //empty constructor
  Linux_SambaGlobalForServiceManualInstance::
   Linux_SambaGlobalForServiceManualInstance(){   	
   	init();  	   	
  };
  
  
  //copy constructor	
  Linux_SambaGlobalForServiceManualInstance::
   Linux_SambaGlobalForServiceManualInstance
   (const Linux_SambaGlobalForServiceManualInstance& original){   	
   	init(original);  	   	
  };
  
  
  //constructor using CmpiInstance
  Linux_SambaGlobalForServiceManualInstance::
   Linux_SambaGlobalForServiceManualInstance (const CmpiInstance& inst, const char* instanceNamespace){
    CmpiData cmpiData;
    init(); 
    
    CmpiObjectPath cop=inst.getObjectPath();
    cop.setNameSpace(instanceNamespace);
    setInstanceName(Linux_SambaGlobalForServiceInstanceName(cop));
    
  }
  
  
  //Destructor
  Linux_SambaGlobalForServiceManualInstance::
   ~Linux_SambaGlobalForServiceManualInstance(){
   	reset();  	  
  };
  
  
  //copy operator
  Linux_SambaGlobalForServiceManualInstance&
   Linux_SambaGlobalForServiceManualInstance::operator=
   (const Linux_SambaGlobalForServiceManualInstance& original){   	
   	init(original);
   	return *this;
  };
  
  
  //converts to CmpiInstance
  CmpiInstance Linux_SambaGlobalForServiceManualInstance::
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
  unsigned int Linux_SambaGlobalForServiceManualInstance::
   isInstanceNameSet() const{
  	return isSet.instanceName;
  }
  
  const Linux_SambaGlobalForServiceInstanceName&
    Linux_SambaGlobalForServiceManualInstance::getInstanceName() const{

    if(!isSet.instanceName)
   	  throw CmpiErrorFormater::getErrorException(
   	   CmpiErrorFormater::NOT_SET,
   	   "InstanceName not set in Linux_SambaGlobalForService instance");
  		
   	return m_instanceName;
  }

  void Linux_SambaGlobalForServiceManualInstance::setInstanceName(
   const Linux_SambaGlobalForServiceInstanceName& val){
    m_instanceName = val;
    isSet.instanceName=1;
  }


  
  //set isSet attributes to FALSE
  void Linux_SambaGlobalForServiceManualInstance::init(){
   	isSet.instanceName=0;
   	  	
  };
  
  
  //copies another instance properties in this
  void Linux_SambaGlobalForServiceManualInstance::init
   (const Linux_SambaGlobalForServiceManualInstance& original){   	
   	init();
   	   	
    if(original.isInstanceNameSet()){
      setInstanceName(original.getInstanceName());
    }    
   }
  
  
  //reset the instance data
  void Linux_SambaGlobalForServiceManualInstance::reset(){
   	
  	  
  };
  
  
  //*********************************************************
  //Linux_SambaGlobalForServiceManualInstanceEnumerationElement	
  //*********************************************************
  
  Linux_SambaGlobalForServiceManualInstanceEnumerationElement::
   Linux_SambaGlobalForServiceManualInstanceEnumerationElement(){
   	
  	m_elementP=0;
  	m_nextP=0;
  	  
  };
  
  
  Linux_SambaGlobalForServiceManualInstanceEnumerationElement::
   ~Linux_SambaGlobalForServiceManualInstanceEnumerationElement(){
   	
  	if (m_elementP!=0)
  	  delete(m_elementP);
  	if (m_nextP!=0)
  	  delete(m_nextP);
  	  
  };

  
  //*********************************************************
  //Linux_SambaGlobalForServiceManualInstanceNameEnumeration
  //*********************************************************

  Linux_SambaGlobalForServiceManualInstanceEnumeration::
   Linux_SambaGlobalForServiceManualInstanceEnumeration(){
   	
  	 firstElementP=0;
     currentElementP=0;
     endElementP=0;
  };
  
  Linux_SambaGlobalForServiceManualInstanceEnumeration::
   Linux_SambaGlobalForServiceManualInstanceEnumeration(
   const Linux_SambaGlobalForServiceManualInstanceEnumeration& original){
   	
     firstElementP=0;
     currentElementP=0;
     endElementP=0;
  	 
     int size=original.getSize();
     for(int i=0;i<size;i++)
       addElement(original.getElement(i));           
  };
  
  	  
  Linux_SambaGlobalForServiceManualInstanceEnumeration::
   ~Linux_SambaGlobalForServiceManualInstanceEnumeration(){
   	
  	if (firstElementP!=0)
  	  delete(firstElementP);
  	  	
  };
  
  	  
  void Linux_SambaGlobalForServiceManualInstanceEnumeration::reset(){
  	
  	currentElementP=firstElementP;
  };
  
  	  
  bool Linux_SambaGlobalForServiceManualInstanceEnumeration::hasNext() const{
  	
  	return (currentElementP!=0);
  
  };
  
  int Linux_SambaGlobalForServiceManualInstanceEnumeration::getSize() const{
  	
    int size=0;
    Linux_SambaGlobalForServiceManualInstanceEnumerationElement* followingP=firstElementP;
  	
  	while(followingP!=0){
        followingP=followingP->m_nextP;
        size++;
    }
  	
    return size;
    
  };
  
  const Linux_SambaGlobalForServiceManualInstance&  
   Linux_SambaGlobalForServiceManualInstanceEnumeration::getElement(int pos) const{
   
    Linux_SambaGlobalForServiceManualInstanceEnumerationElement* followingP=firstElementP;
   
    int i=0;
    while((followingP!=0)&&(i<pos)){
        followingP=followingP->m_nextP;
        i++;
    }
    
    return *(followingP->m_elementP);
  };
  
  	  
  const Linux_SambaGlobalForServiceManualInstance&
   Linux_SambaGlobalForServiceManualInstanceEnumeration::getNext() {
   	
  	 Linux_SambaGlobalForServiceManualInstanceEnumerationElement* currentP=
  	  currentElementP;
  	 currentElementP=currentElementP->m_nextP;
  	 
  	 return *(currentP->m_elementP);
  };
  	  
  void Linux_SambaGlobalForServiceManualInstanceEnumeration::addElement
   (const Linux_SambaGlobalForServiceManualInstance& elementP){
   	
  	if(firstElementP==0){
  	  firstElementP=new Linux_SambaGlobalForServiceManualInstanceEnumerationElement();
  	  firstElementP->m_elementP=new Linux_SambaGlobalForServiceManualInstance(elementP);
  	  endElementP=firstElementP;
  	  currentElementP=firstElementP;
  	}else{
  	  endElementP->m_nextP=new Linux_SambaGlobalForServiceManualInstanceEnumerationElement();
  	  endElementP=endElementP->m_nextP;
  	  endElementP->m_elementP=new Linux_SambaGlobalForServiceManualInstance(elementP);
  	}
  };  
}
 
