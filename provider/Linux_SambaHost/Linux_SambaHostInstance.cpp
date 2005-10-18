/**
 *  Linux_SambaHostInstance.cpp
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


#include "Linux_SambaHostInstance.h"
#include "CmpiData.h"
#include "CmpiString.h"
#include "CmpiArray.h"
#include <string>

namespace genProvider {

  //*********************************************************
  //Linux_SambaHostInstance
  //*********************************************************

  //empty constructor
  Linux_SambaHostInstance::
   Linux_SambaHostInstance(){   	
   	init();  	   	
  };
  
  
  //copy constructor	
  Linux_SambaHostInstance::
   Linux_SambaHostInstance
   (const Linux_SambaHostInstance& original){   	
   	init(original);  	   	
  };
  
  
  //constructor using CmpiInstance
  Linux_SambaHostInstance::
   Linux_SambaHostInstance (const CmpiInstance& inst, const char* instanceNamespace){
    CmpiData cmpiData;
    init(); 
    
    CmpiObjectPath cop=inst.getObjectPath();
    cop.setNameSpace(instanceNamespace);
    setInstanceName(Linux_SambaHostInstanceName(cop));
    
  }
  
  
  //Destructor
  Linux_SambaHostInstance::
   ~Linux_SambaHostInstance(){
   	reset();  	  
  };
  
  
  //copy operator
  Linux_SambaHostInstance&
   Linux_SambaHostInstance::operator=
   (const Linux_SambaHostInstance& original){   	
   	init(original);
   	return *this;
  };
  
  
  //converts to CmpiInstance
  CmpiInstance Linux_SambaHostInstance::
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
  unsigned int Linux_SambaHostInstance::
   isInstanceNameSet() const{
  	return isSet.instanceName;
  }
  
  const Linux_SambaHostInstanceName&
    Linux_SambaHostInstance::getInstanceName() const{

    if(!isSet.instanceName)
   	  throw CmpiErrorFormater::getErrorException(
   	   CmpiErrorFormater::NOT_SET,
   	   "InstanceName not set in Linux_SambaHost instance");
  		
   	return m_instanceName;
  }

  void Linux_SambaHostInstance::setInstanceName(
   const Linux_SambaHostInstanceName& val){
    m_instanceName = val;
    isSet.instanceName=1;
  }


  
  //set isSet attributes to FALSE
  void Linux_SambaHostInstance::init(){
   	isSet.instanceName=0;
   	  	
  };
  
  
  //copies another instance properties in this
  void Linux_SambaHostInstance::init
   (const Linux_SambaHostInstance& original){   	
   	init();
   	   	
    if(original.isInstanceNameSet()){
      setInstanceName(original.getInstanceName());
    }    
   }
  
  
  //reset the instance data
  void Linux_SambaHostInstance::reset(){
   	
  	  
  };
  
  
  //*********************************************************
  //Linux_SambaHostInstanceEnumerationElement	
  //*********************************************************
  
  Linux_SambaHostInstanceEnumerationElement::
   Linux_SambaHostInstanceEnumerationElement(){
   	
  	m_elementP=0;
  	m_nextP=0;
  	  
  };
  
  
  Linux_SambaHostInstanceEnumerationElement::
   ~Linux_SambaHostInstanceEnumerationElement(){
   	
  	if (m_elementP!=0)
  	  delete(m_elementP);
  	if (m_nextP!=0)
  	  delete(m_nextP);
  	  
  };

  
  //*********************************************************
  //Linux_SambaHostInstanceNameEnumeration
  //*********************************************************

  Linux_SambaHostInstanceEnumeration::
   Linux_SambaHostInstanceEnumeration(){
   	
  	 firstElementP=0;
     currentElementP=0;
     endElementP=0;
  };
  
  Linux_SambaHostInstanceEnumeration::
   Linux_SambaHostInstanceEnumeration(
   const Linux_SambaHostInstanceEnumeration& original){
   	
     firstElementP=0;
     currentElementP=0;
     endElementP=0;
  	 
     int size=original.getSize();
     for(int i=0;i<size;i++)
       addElement(original.getElement(i));           
  };
  
  	  
  Linux_SambaHostInstanceEnumeration::
   ~Linux_SambaHostInstanceEnumeration(){
   	
  	if (firstElementP!=0)
  	  delete(firstElementP);
  	  	
  };
  
  	  
  void Linux_SambaHostInstanceEnumeration::reset(){
  	
  	currentElementP=firstElementP;
  };
  
  	  
  bool Linux_SambaHostInstanceEnumeration::hasNext() const{
  	
  	return (currentElementP!=0);
  
  };
  
  int Linux_SambaHostInstanceEnumeration::getSize() const{
  	
    int size=0;
    Linux_SambaHostInstanceEnumerationElement* followingP=firstElementP;
  	
  	while(followingP!=0){
        followingP=followingP->m_nextP;
        size++;
    }
  	
    return size;
    
  };
  
  const Linux_SambaHostInstance&  
   Linux_SambaHostInstanceEnumeration::getElement(int pos) const{
   
    Linux_SambaHostInstanceEnumerationElement* followingP=firstElementP;
   
    int i=0;
    while((followingP!=0)&&(i<pos)){
        followingP=followingP->m_nextP;
        i++;
    }
    
    return *(followingP->m_elementP);
  };
  
  	  
  const Linux_SambaHostInstance&
   Linux_SambaHostInstanceEnumeration::getNext() {
   	
  	 Linux_SambaHostInstanceEnumerationElement* currentP=
  	  currentElementP;
  	 currentElementP=currentElementP->m_nextP;
  	 
  	 return *(currentP->m_elementP);
  };
  	  
  void Linux_SambaHostInstanceEnumeration::addElement
   (const Linux_SambaHostInstance& elementP){
   	
  	if(firstElementP==0){
  	  firstElementP=new Linux_SambaHostInstanceEnumerationElement();
  	  firstElementP->m_elementP=new Linux_SambaHostInstance(elementP);
  	  endElementP=firstElementP;
  	  currentElementP=firstElementP;
  	}else{
  	  endElementP->m_nextP=new Linux_SambaHostInstanceEnumerationElement();
  	  endElementP=endElementP->m_nextP;
  	  endElementP->m_elementP=new Linux_SambaHostInstance(elementP);
  	}
  };  
}
 
