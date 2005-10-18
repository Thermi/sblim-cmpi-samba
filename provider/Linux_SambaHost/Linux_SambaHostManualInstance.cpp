/**
 *  Linux_SambaHostManualInstance.cpp
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


#include "Linux_SambaHostManualInstance.h"
#include "CmpiData.h"
#include "CmpiString.h"
#include "CmpiArray.h"
#include <string>

namespace genProvider {

  //*********************************************************
  //Linux_SambaHostManualInstance
  //*********************************************************

  //empty constructor
  Linux_SambaHostManualInstance::
   Linux_SambaHostManualInstance(){   	
   	init();  	   	
  };
  
  
  //copy constructor	
  Linux_SambaHostManualInstance::
   Linux_SambaHostManualInstance
   (const Linux_SambaHostManualInstance& original){   	
   	init(original);  	   	
  };
  
  
  //constructor using CmpiInstance
  Linux_SambaHostManualInstance::
   Linux_SambaHostManualInstance (const CmpiInstance& inst, const char* instanceNamespace){
    CmpiData cmpiData;
    init(); 
    
    CmpiObjectPath cop=inst.getObjectPath();
    cop.setNameSpace(instanceNamespace);
    setInstanceName(Linux_SambaHostInstanceName(cop));
    
  }
  
  
  //Destructor
  Linux_SambaHostManualInstance::
   ~Linux_SambaHostManualInstance(){
   	reset();  	  
  };
  
  
  //copy operator
  Linux_SambaHostManualInstance&
   Linux_SambaHostManualInstance::operator=
   (const Linux_SambaHostManualInstance& original){   	
   	init(original);
   	return *this;
  };
  
  
  //converts to CmpiInstance
  CmpiInstance Linux_SambaHostManualInstance::
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
  unsigned int Linux_SambaHostManualInstance::
   isInstanceNameSet() const{
  	return isSet.instanceName;
  }
  
  const Linux_SambaHostInstanceName&
    Linux_SambaHostManualInstance::getInstanceName() const{

    if(!isSet.instanceName)
   	  throw CmpiErrorFormater::getErrorException(
   	   CmpiErrorFormater::NOT_SET,
   	   "InstanceName not set in Linux_SambaHost instance");
  		
   	return m_instanceName;
  }

  void Linux_SambaHostManualInstance::setInstanceName(
   const Linux_SambaHostInstanceName& val){
    m_instanceName = val;
    isSet.instanceName=1;
  }


  
  //set isSet attributes to FALSE
  void Linux_SambaHostManualInstance::init(){
   	isSet.instanceName=0;
   	  	
  };
  
  
  //copies another instance properties in this
  void Linux_SambaHostManualInstance::init
   (const Linux_SambaHostManualInstance& original){   	
   	init();
   	   	
    if(original.isInstanceNameSet()){
      setInstanceName(original.getInstanceName());
    }    
   }
  
  
  //reset the instance data
  void Linux_SambaHostManualInstance::reset(){
   	
  	  
  };
  
  
  //*********************************************************
  //Linux_SambaHostManualInstanceEnumerationElement	
  //*********************************************************
  
  Linux_SambaHostManualInstanceEnumerationElement::
   Linux_SambaHostManualInstanceEnumerationElement(){
   	
  	m_elementP=0;
  	m_nextP=0;
  	  
  };
  
  
  Linux_SambaHostManualInstanceEnumerationElement::
   ~Linux_SambaHostManualInstanceEnumerationElement(){
   	
  	if (m_elementP!=0)
  	  delete(m_elementP);
  	if (m_nextP!=0)
  	  delete(m_nextP);
  	  
  };

  
  //*********************************************************
  //Linux_SambaHostManualInstanceNameEnumeration
  //*********************************************************

  Linux_SambaHostManualInstanceEnumeration::
   Linux_SambaHostManualInstanceEnumeration(){
   	
  	 firstElementP=0;
     currentElementP=0;
     endElementP=0;
  };
  
  Linux_SambaHostManualInstanceEnumeration::
   Linux_SambaHostManualInstanceEnumeration(
   const Linux_SambaHostManualInstanceEnumeration& original){
   	
     firstElementP=0;
     currentElementP=0;
     endElementP=0;
  	 
     int size=original.getSize();
     for(int i=0;i<size;i++)
       addElement(original.getElement(i));           
  };
  
  	  
  Linux_SambaHostManualInstanceEnumeration::
   ~Linux_SambaHostManualInstanceEnumeration(){
   	
  	if (firstElementP!=0)
  	  delete(firstElementP);
  	  	
  };
  
  	  
  void Linux_SambaHostManualInstanceEnumeration::reset(){
  	
  	currentElementP=firstElementP;
  };
  
  	  
  bool Linux_SambaHostManualInstanceEnumeration::hasNext() const{
  	
  	return (currentElementP!=0);
  
  };
  
  int Linux_SambaHostManualInstanceEnumeration::getSize() const{
  	
    int size=0;
    Linux_SambaHostManualInstanceEnumerationElement* followingP=firstElementP;
  	
  	while(followingP!=0){
        followingP=followingP->m_nextP;
        size++;
    }
  	
    return size;
    
  };
  
  const Linux_SambaHostManualInstance&  
   Linux_SambaHostManualInstanceEnumeration::getElement(int pos) const{
   
    Linux_SambaHostManualInstanceEnumerationElement* followingP=firstElementP;
   
    int i=0;
    while((followingP!=0)&&(i<pos)){
        followingP=followingP->m_nextP;
        i++;
    }
    
    return *(followingP->m_elementP);
  };
  
  	  
  const Linux_SambaHostManualInstance&
   Linux_SambaHostManualInstanceEnumeration::getNext() {
   	
  	 Linux_SambaHostManualInstanceEnumerationElement* currentP=
  	  currentElementP;
  	 currentElementP=currentElementP->m_nextP;
  	 
  	 return *(currentP->m_elementP);
  };
  	  
  void Linux_SambaHostManualInstanceEnumeration::addElement
   (const Linux_SambaHostManualInstance& elementP){
   	
  	if(firstElementP==0){
  	  firstElementP=new Linux_SambaHostManualInstanceEnumerationElement();
  	  firstElementP->m_elementP=new Linux_SambaHostManualInstance(elementP);
  	  endElementP=firstElementP;
  	  currentElementP=firstElementP;
  	}else{
  	  endElementP->m_nextP=new Linux_SambaHostManualInstanceEnumerationElement();
  	  endElementP=endElementP->m_nextP;
  	  endElementP->m_elementP=new Linux_SambaHostManualInstance(elementP);
  	}
  };  
}
 
