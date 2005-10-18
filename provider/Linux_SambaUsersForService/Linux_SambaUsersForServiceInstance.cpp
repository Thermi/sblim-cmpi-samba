/**
 *  Linux_SambaUsersForServiceInstance.cpp
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


#include "Linux_SambaUsersForServiceInstance.h"
#include "CmpiData.h"
#include "CmpiString.h"
#include "CmpiArray.h"
#include <string>

namespace genProvider {

  //*********************************************************
  //Linux_SambaUsersForServiceInstance
  //*********************************************************

  //empty constructor
  Linux_SambaUsersForServiceInstance::
   Linux_SambaUsersForServiceInstance(){   	
   	init();  	   	
  };
  
  
  //copy constructor	
  Linux_SambaUsersForServiceInstance::
   Linux_SambaUsersForServiceInstance
   (const Linux_SambaUsersForServiceInstance& original){   	
   	init(original);  	   	
  };
  
  
  //constructor using CmpiInstance
  Linux_SambaUsersForServiceInstance::
   Linux_SambaUsersForServiceInstance (const CmpiInstance& inst, const char* instanceNamespace){
    CmpiData cmpiData;
    init(); 
    
    CmpiObjectPath cop=inst.getObjectPath();
    cop.setNameSpace(instanceNamespace);
    setInstanceName(Linux_SambaUsersForServiceInstanceName(cop));
    
  }
  
  
  //Destructor
  Linux_SambaUsersForServiceInstance::
   ~Linux_SambaUsersForServiceInstance(){
   	reset();  	  
  };
  
  
  //copy operator
  Linux_SambaUsersForServiceInstance&
   Linux_SambaUsersForServiceInstance::operator=
   (const Linux_SambaUsersForServiceInstance& original){   	
   	init(original);
   	return *this;
  };
  
  
  //converts to CmpiInstance
  CmpiInstance Linux_SambaUsersForServiceInstance::
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
  unsigned int Linux_SambaUsersForServiceInstance::
   isInstanceNameSet() const{
  	return isSet.instanceName;
  }
  
  const Linux_SambaUsersForServiceInstanceName&
    Linux_SambaUsersForServiceInstance::getInstanceName() const{

    if(!isSet.instanceName)
   	  throw CmpiErrorFormater::getErrorException(
   	   CmpiErrorFormater::NOT_SET,
   	   "InstanceName not set in Linux_SambaUsersForService instance");
  		
   	return m_instanceName;
  }

  void Linux_SambaUsersForServiceInstance::setInstanceName(
   const Linux_SambaUsersForServiceInstanceName& val){
    m_instanceName = val;
    isSet.instanceName=1;
  }


  
  //set isSet attributes to FALSE
  void Linux_SambaUsersForServiceInstance::init(){
   	isSet.instanceName=0;
   	  	
  };
  
  
  //copies another instance properties in this
  void Linux_SambaUsersForServiceInstance::init
   (const Linux_SambaUsersForServiceInstance& original){   	
   	init();
   	   	
    if(original.isInstanceNameSet()){
      setInstanceName(original.getInstanceName());
    }    
   }
  
  
  //reset the instance data
  void Linux_SambaUsersForServiceInstance::reset(){
   	
  	  
  };
  
  
  //*********************************************************
  //Linux_SambaUsersForServiceInstanceEnumerationElement	
  //*********************************************************
  
  Linux_SambaUsersForServiceInstanceEnumerationElement::
   Linux_SambaUsersForServiceInstanceEnumerationElement(){
   	
  	m_elementP=0;
  	m_nextP=0;
  	  
  };
  
  
  Linux_SambaUsersForServiceInstanceEnumerationElement::
   ~Linux_SambaUsersForServiceInstanceEnumerationElement(){
   	
  	if (m_elementP!=0)
  	  delete(m_elementP);
  	if (m_nextP!=0)
  	  delete(m_nextP);
  	  
  };

  
  //*********************************************************
  //Linux_SambaUsersForServiceInstanceNameEnumeration
  //*********************************************************

  Linux_SambaUsersForServiceInstanceEnumeration::
   Linux_SambaUsersForServiceInstanceEnumeration(){
   	
  	 firstElementP=0;
     currentElementP=0;
     endElementP=0;
  };
  
  Linux_SambaUsersForServiceInstanceEnumeration::
   Linux_SambaUsersForServiceInstanceEnumeration(
   const Linux_SambaUsersForServiceInstanceEnumeration& original){
   	
     firstElementP=0;
     currentElementP=0;
     endElementP=0;
  	 
     int size=original.getSize();
     for(int i=0;i<size;i++)
       addElement(original.getElement(i));           
  };
  
  	  
  Linux_SambaUsersForServiceInstanceEnumeration::
   ~Linux_SambaUsersForServiceInstanceEnumeration(){
   	
  	if (firstElementP!=0)
  	  delete(firstElementP);
  	  	
  };
  
  	  
  void Linux_SambaUsersForServiceInstanceEnumeration::reset(){
  	
  	currentElementP=firstElementP;
  };
  
  	  
  bool Linux_SambaUsersForServiceInstanceEnumeration::hasNext() const{
  	
  	return (currentElementP!=0);
  
  };
  
  int Linux_SambaUsersForServiceInstanceEnumeration::getSize() const{
  	
    int size=0;
    Linux_SambaUsersForServiceInstanceEnumerationElement* followingP=firstElementP;
  	
  	while(followingP!=0){
        followingP=followingP->m_nextP;
        size++;
    }
  	
    return size;
    
  };
  
  const Linux_SambaUsersForServiceInstance&  
   Linux_SambaUsersForServiceInstanceEnumeration::getElement(int pos) const{
   
    Linux_SambaUsersForServiceInstanceEnumerationElement* followingP=firstElementP;
   
    int i=0;
    while((followingP!=0)&&(i<pos)){
        followingP=followingP->m_nextP;
        i++;
    }
    
    return *(followingP->m_elementP);
  };
  
  	  
  const Linux_SambaUsersForServiceInstance&
   Linux_SambaUsersForServiceInstanceEnumeration::getNext() {
   	
  	 Linux_SambaUsersForServiceInstanceEnumerationElement* currentP=
  	  currentElementP;
  	 currentElementP=currentElementP->m_nextP;
  	 
  	 return *(currentP->m_elementP);
  };
  	  
  void Linux_SambaUsersForServiceInstanceEnumeration::addElement
   (const Linux_SambaUsersForServiceInstance& elementP){
   	
  	if(firstElementP==0){
  	  firstElementP=new Linux_SambaUsersForServiceInstanceEnumerationElement();
  	  firstElementP->m_elementP=new Linux_SambaUsersForServiceInstance(elementP);
  	  endElementP=firstElementP;
  	  currentElementP=firstElementP;
  	}else{
  	  endElementP->m_nextP=new Linux_SambaUsersForServiceInstanceEnumerationElement();
  	  endElementP=endElementP->m_nextP;
  	  endElementP->m_elementP=new Linux_SambaUsersForServiceInstance(elementP);
  	}
  };  
}
 
