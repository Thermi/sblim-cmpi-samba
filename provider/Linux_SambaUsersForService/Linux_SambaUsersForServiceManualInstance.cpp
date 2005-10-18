/**
 *  Linux_SambaUsersForServiceManualInstance.cpp
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


#include "Linux_SambaUsersForServiceManualInstance.h"
#include "CmpiData.h"
#include "CmpiString.h"
#include "CmpiArray.h"
#include <string>

namespace genProvider {

  //*********************************************************
  //Linux_SambaUsersForServiceManualInstance
  //*********************************************************

  //empty constructor
  Linux_SambaUsersForServiceManualInstance::
   Linux_SambaUsersForServiceManualInstance(){   	
   	init();  	   	
  };
  
  
  //copy constructor	
  Linux_SambaUsersForServiceManualInstance::
   Linux_SambaUsersForServiceManualInstance
   (const Linux_SambaUsersForServiceManualInstance& original){   	
   	init(original);  	   	
  };
  
  
  //constructor using CmpiInstance
  Linux_SambaUsersForServiceManualInstance::
   Linux_SambaUsersForServiceManualInstance (const CmpiInstance& inst, const char* instanceNamespace){
    CmpiData cmpiData;
    init(); 
    
    CmpiObjectPath cop=inst.getObjectPath();
    cop.setNameSpace(instanceNamespace);
    setInstanceName(Linux_SambaUsersForServiceInstanceName(cop));
    
  }
  
  
  //Destructor
  Linux_SambaUsersForServiceManualInstance::
   ~Linux_SambaUsersForServiceManualInstance(){
   	reset();  	  
  };
  
  
  //copy operator
  Linux_SambaUsersForServiceManualInstance&
   Linux_SambaUsersForServiceManualInstance::operator=
   (const Linux_SambaUsersForServiceManualInstance& original){   	
   	init(original);
   	return *this;
  };
  
  
  //converts to CmpiInstance
  CmpiInstance Linux_SambaUsersForServiceManualInstance::
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
  unsigned int Linux_SambaUsersForServiceManualInstance::
   isInstanceNameSet() const{
  	return isSet.instanceName;
  }
  
  const Linux_SambaUsersForServiceInstanceName&
    Linux_SambaUsersForServiceManualInstance::getInstanceName() const{

    if(!isSet.instanceName)
   	  throw CmpiErrorFormater::getErrorException(
   	   CmpiErrorFormater::NOT_SET,
   	   "InstanceName not set in Linux_SambaUsersForService instance");
  		
   	return m_instanceName;
  }

  void Linux_SambaUsersForServiceManualInstance::setInstanceName(
   const Linux_SambaUsersForServiceInstanceName& val){
    m_instanceName = val;
    isSet.instanceName=1;
  }


  
  //set isSet attributes to FALSE
  void Linux_SambaUsersForServiceManualInstance::init(){
   	isSet.instanceName=0;
   	  	
  };
  
  
  //copies another instance properties in this
  void Linux_SambaUsersForServiceManualInstance::init
   (const Linux_SambaUsersForServiceManualInstance& original){   	
   	init();
   	   	
    if(original.isInstanceNameSet()){
      setInstanceName(original.getInstanceName());
    }    
   }
  
  
  //reset the instance data
  void Linux_SambaUsersForServiceManualInstance::reset(){
   	
  	  
  };
  
  
  //*********************************************************
  //Linux_SambaUsersForServiceManualInstanceEnumerationElement	
  //*********************************************************
  
  Linux_SambaUsersForServiceManualInstanceEnumerationElement::
   Linux_SambaUsersForServiceManualInstanceEnumerationElement(){
   	
  	m_elementP=0;
  	m_nextP=0;
  	  
  };
  
  
  Linux_SambaUsersForServiceManualInstanceEnumerationElement::
   ~Linux_SambaUsersForServiceManualInstanceEnumerationElement(){
   	
  	if (m_elementP!=0)
  	  delete(m_elementP);
  	if (m_nextP!=0)
  	  delete(m_nextP);
  	  
  };

  
  //*********************************************************
  //Linux_SambaUsersForServiceManualInstanceNameEnumeration
  //*********************************************************

  Linux_SambaUsersForServiceManualInstanceEnumeration::
   Linux_SambaUsersForServiceManualInstanceEnumeration(){
   	
  	 firstElementP=0;
     currentElementP=0;
     endElementP=0;
  };
  
  Linux_SambaUsersForServiceManualInstanceEnumeration::
   Linux_SambaUsersForServiceManualInstanceEnumeration(
   const Linux_SambaUsersForServiceManualInstanceEnumeration& original){
   	
     firstElementP=0;
     currentElementP=0;
     endElementP=0;
  	 
     int size=original.getSize();
     for(int i=0;i<size;i++)
       addElement(original.getElement(i));           
  };
  
  	  
  Linux_SambaUsersForServiceManualInstanceEnumeration::
   ~Linux_SambaUsersForServiceManualInstanceEnumeration(){
   	
  	if (firstElementP!=0)
  	  delete(firstElementP);
  	  	
  };
  
  	  
  void Linux_SambaUsersForServiceManualInstanceEnumeration::reset(){
  	
  	currentElementP=firstElementP;
  };
  
  	  
  bool Linux_SambaUsersForServiceManualInstanceEnumeration::hasNext() const{
  	
  	return (currentElementP!=0);
  
  };
  
  int Linux_SambaUsersForServiceManualInstanceEnumeration::getSize() const{
  	
    int size=0;
    Linux_SambaUsersForServiceManualInstanceEnumerationElement* followingP=firstElementP;
  	
  	while(followingP!=0){
        followingP=followingP->m_nextP;
        size++;
    }
  	
    return size;
    
  };
  
  const Linux_SambaUsersForServiceManualInstance&  
   Linux_SambaUsersForServiceManualInstanceEnumeration::getElement(int pos) const{
   
    Linux_SambaUsersForServiceManualInstanceEnumerationElement* followingP=firstElementP;
   
    int i=0;
    while((followingP!=0)&&(i<pos)){
        followingP=followingP->m_nextP;
        i++;
    }
    
    return *(followingP->m_elementP);
  };
  
  	  
  const Linux_SambaUsersForServiceManualInstance&
   Linux_SambaUsersForServiceManualInstanceEnumeration::getNext() {
   	
  	 Linux_SambaUsersForServiceManualInstanceEnumerationElement* currentP=
  	  currentElementP;
  	 currentElementP=currentElementP->m_nextP;
  	 
  	 return *(currentP->m_elementP);
  };
  	  
  void Linux_SambaUsersForServiceManualInstanceEnumeration::addElement
   (const Linux_SambaUsersForServiceManualInstance& elementP){
   	
  	if(firstElementP==0){
  	  firstElementP=new Linux_SambaUsersForServiceManualInstanceEnumerationElement();
  	  firstElementP->m_elementP=new Linux_SambaUsersForServiceManualInstance(elementP);
  	  endElementP=firstElementP;
  	  currentElementP=firstElementP;
  	}else{
  	  endElementP->m_nextP=new Linux_SambaUsersForServiceManualInstanceEnumerationElement();
  	  endElementP=endElementP->m_nextP;
  	  endElementP->m_elementP=new Linux_SambaUsersForServiceManualInstance(elementP);
  	}
  };  
}
 
