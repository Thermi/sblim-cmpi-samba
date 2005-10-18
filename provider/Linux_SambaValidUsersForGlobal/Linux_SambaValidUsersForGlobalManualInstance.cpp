/**
 *  Linux_SambaValidUsersForGlobalManualInstance.cpp
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


#include "Linux_SambaValidUsersForGlobalManualInstance.h"
#include "CmpiData.h"
#include "CmpiString.h"
#include "CmpiArray.h"
#include <string>

namespace genProvider {

  //*********************************************************
  //Linux_SambaValidUsersForGlobalManualInstance
  //*********************************************************

  //empty constructor
  Linux_SambaValidUsersForGlobalManualInstance::
   Linux_SambaValidUsersForGlobalManualInstance(){   	
   	init();  	   	
  };
  
  
  //copy constructor	
  Linux_SambaValidUsersForGlobalManualInstance::
   Linux_SambaValidUsersForGlobalManualInstance
   (const Linux_SambaValidUsersForGlobalManualInstance& original){   	
   	init(original);  	   	
  };
  
  
  //constructor using CmpiInstance
  Linux_SambaValidUsersForGlobalManualInstance::
   Linux_SambaValidUsersForGlobalManualInstance (const CmpiInstance& inst, const char* instanceNamespace){
    CmpiData cmpiData;
    init(); 
    
    CmpiObjectPath cop=inst.getObjectPath();
    cop.setNameSpace(instanceNamespace);
    setInstanceName(Linux_SambaValidUsersForGlobalInstanceName(cop));
    
  }
  
  
  //Destructor
  Linux_SambaValidUsersForGlobalManualInstance::
   ~Linux_SambaValidUsersForGlobalManualInstance(){
   	reset();  	  
  };
  
  
  //copy operator
  Linux_SambaValidUsersForGlobalManualInstance&
   Linux_SambaValidUsersForGlobalManualInstance::operator=
   (const Linux_SambaValidUsersForGlobalManualInstance& original){   	
   	init(original);
   	return *this;
  };
  
  
  //converts to CmpiInstance
  CmpiInstance Linux_SambaValidUsersForGlobalManualInstance::
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
  unsigned int Linux_SambaValidUsersForGlobalManualInstance::
   isInstanceNameSet() const{
  	return isSet.instanceName;
  }
  
  const Linux_SambaValidUsersForGlobalInstanceName&
    Linux_SambaValidUsersForGlobalManualInstance::getInstanceName() const{

    if(!isSet.instanceName)
   	  throw CmpiErrorFormater::getErrorException(
   	   CmpiErrorFormater::NOT_SET,
   	   "InstanceName not set in Linux_SambaValidUsersForGlobal instance");
  		
   	return m_instanceName;
  }

  void Linux_SambaValidUsersForGlobalManualInstance::setInstanceName(
   const Linux_SambaValidUsersForGlobalInstanceName& val){
    m_instanceName = val;
    isSet.instanceName=1;
  }


  
  //set isSet attributes to FALSE
  void Linux_SambaValidUsersForGlobalManualInstance::init(){
   	isSet.instanceName=0;
   	  	
  };
  
  
  //copies another instance properties in this
  void Linux_SambaValidUsersForGlobalManualInstance::init
   (const Linux_SambaValidUsersForGlobalManualInstance& original){   	
   	init();
   	   	
    if(original.isInstanceNameSet()){
      setInstanceName(original.getInstanceName());
    }    
   }
  
  
  //reset the instance data
  void Linux_SambaValidUsersForGlobalManualInstance::reset(){
   	
  	  
  };
  
  
  //*********************************************************
  //Linux_SambaValidUsersForGlobalManualInstanceEnumerationElement	
  //*********************************************************
  
  Linux_SambaValidUsersForGlobalManualInstanceEnumerationElement::
   Linux_SambaValidUsersForGlobalManualInstanceEnumerationElement(){
   	
  	m_elementP=0;
  	m_nextP=0;
  	  
  };
  
  
  Linux_SambaValidUsersForGlobalManualInstanceEnumerationElement::
   ~Linux_SambaValidUsersForGlobalManualInstanceEnumerationElement(){
   	
  	if (m_elementP!=0)
  	  delete(m_elementP);
  	if (m_nextP!=0)
  	  delete(m_nextP);
  	  
  };

  
  //*********************************************************
  //Linux_SambaValidUsersForGlobalManualInstanceNameEnumeration
  //*********************************************************

  Linux_SambaValidUsersForGlobalManualInstanceEnumeration::
   Linux_SambaValidUsersForGlobalManualInstanceEnumeration(){
   	
  	 firstElementP=0;
     currentElementP=0;
     endElementP=0;
  };
  
  Linux_SambaValidUsersForGlobalManualInstanceEnumeration::
   Linux_SambaValidUsersForGlobalManualInstanceEnumeration(
   const Linux_SambaValidUsersForGlobalManualInstanceEnumeration& original){
   	
     firstElementP=0;
     currentElementP=0;
     endElementP=0;
  	 
     int size=original.getSize();
     for(int i=0;i<size;i++)
       addElement(original.getElement(i));           
  };
  
  	  
  Linux_SambaValidUsersForGlobalManualInstanceEnumeration::
   ~Linux_SambaValidUsersForGlobalManualInstanceEnumeration(){
   	
  	if (firstElementP!=0)
  	  delete(firstElementP);
  	  	
  };
  
  	  
  void Linux_SambaValidUsersForGlobalManualInstanceEnumeration::reset(){
  	
  	currentElementP=firstElementP;
  };
  
  	  
  bool Linux_SambaValidUsersForGlobalManualInstanceEnumeration::hasNext() const{
  	
  	return (currentElementP!=0);
  
  };
  
  int Linux_SambaValidUsersForGlobalManualInstanceEnumeration::getSize() const{
  	
    int size=0;
    Linux_SambaValidUsersForGlobalManualInstanceEnumerationElement* followingP=firstElementP;
  	
  	while(followingP!=0){
        followingP=followingP->m_nextP;
        size++;
    }
  	
    return size;
    
  };
  
  const Linux_SambaValidUsersForGlobalManualInstance&  
   Linux_SambaValidUsersForGlobalManualInstanceEnumeration::getElement(int pos) const{
   
    Linux_SambaValidUsersForGlobalManualInstanceEnumerationElement* followingP=firstElementP;
   
    int i=0;
    while((followingP!=0)&&(i<pos)){
        followingP=followingP->m_nextP;
        i++;
    }
    
    return *(followingP->m_elementP);
  };
  
  	  
  const Linux_SambaValidUsersForGlobalManualInstance&
   Linux_SambaValidUsersForGlobalManualInstanceEnumeration::getNext() {
   	
  	 Linux_SambaValidUsersForGlobalManualInstanceEnumerationElement* currentP=
  	  currentElementP;
  	 currentElementP=currentElementP->m_nextP;
  	 
  	 return *(currentP->m_elementP);
  };
  	  
  void Linux_SambaValidUsersForGlobalManualInstanceEnumeration::addElement
   (const Linux_SambaValidUsersForGlobalManualInstance& elementP){
   	
  	if(firstElementP==0){
  	  firstElementP=new Linux_SambaValidUsersForGlobalManualInstanceEnumerationElement();
  	  firstElementP->m_elementP=new Linux_SambaValidUsersForGlobalManualInstance(elementP);
  	  endElementP=firstElementP;
  	  currentElementP=firstElementP;
  	}else{
  	  endElementP->m_nextP=new Linux_SambaValidUsersForGlobalManualInstanceEnumerationElement();
  	  endElementP=endElementP->m_nextP;
  	  endElementP->m_elementP=new Linux_SambaValidUsersForGlobalManualInstance(elementP);
  	}
  };  
}
 
