/**
 *  Linux_SambaValidUsersForShareInstance.cpp
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


#include "Linux_SambaValidUsersForShareInstance.h"
#include "CmpiData.h"
#include "CmpiString.h"
#include "CmpiArray.h"
#include <string>

namespace genProvider {

  //*********************************************************
  //Linux_SambaValidUsersForShareInstance
  //*********************************************************

  //empty constructor
  Linux_SambaValidUsersForShareInstance::
   Linux_SambaValidUsersForShareInstance(){   	
   	init();  	   	
  };
  
  
  //copy constructor	
  Linux_SambaValidUsersForShareInstance::
   Linux_SambaValidUsersForShareInstance
   (const Linux_SambaValidUsersForShareInstance& original){   	
   	init(original);  	   	
  };
  
  
  //constructor using CmpiInstance
  Linux_SambaValidUsersForShareInstance::
   Linux_SambaValidUsersForShareInstance (const CmpiInstance& inst, const char* instanceNamespace){
    CmpiData cmpiData;
    init(); 
    
    CmpiObjectPath cop=inst.getObjectPath();
    cop.setNameSpace(instanceNamespace);
    setInstanceName(Linux_SambaValidUsersForShareInstanceName(cop));
    
  }
  
  
  //Destructor
  Linux_SambaValidUsersForShareInstance::
   ~Linux_SambaValidUsersForShareInstance(){
   	reset();  	  
  };
  
  
  //copy operator
  Linux_SambaValidUsersForShareInstance&
   Linux_SambaValidUsersForShareInstance::operator=
   (const Linux_SambaValidUsersForShareInstance& original){   	
   	init(original);
   	return *this;
  };
  
  
  //converts to CmpiInstance
  CmpiInstance Linux_SambaValidUsersForShareInstance::
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
  unsigned int Linux_SambaValidUsersForShareInstance::
   isInstanceNameSet() const{
  	return isSet.instanceName;
  }
  
  const Linux_SambaValidUsersForShareInstanceName&
    Linux_SambaValidUsersForShareInstance::getInstanceName() const{

    if(!isSet.instanceName)
   	  throw CmpiErrorFormater::getErrorException(
   	   CmpiErrorFormater::NOT_SET,
   	   "InstanceName not set in Linux_SambaValidUsersForShare instance");
  		
   	return m_instanceName;
  }

  void Linux_SambaValidUsersForShareInstance::setInstanceName(
   const Linux_SambaValidUsersForShareInstanceName& val){
    m_instanceName = val;
    isSet.instanceName=1;
  }


  
  //set isSet attributes to FALSE
  void Linux_SambaValidUsersForShareInstance::init(){
   	isSet.instanceName=0;
   	  	
  };
  
  
  //copies another instance properties in this
  void Linux_SambaValidUsersForShareInstance::init
   (const Linux_SambaValidUsersForShareInstance& original){   	
   	init();
   	   	
    if(original.isInstanceNameSet()){
      setInstanceName(original.getInstanceName());
    }    
   }
  
  
  //reset the instance data
  void Linux_SambaValidUsersForShareInstance::reset(){
   	
  	  
  };
  
  
  //*********************************************************
  //Linux_SambaValidUsersForShareInstanceEnumerationElement	
  //*********************************************************
  
  Linux_SambaValidUsersForShareInstanceEnumerationElement::
   Linux_SambaValidUsersForShareInstanceEnumerationElement(){
   	
  	m_elementP=0;
  	m_nextP=0;
  	  
  };
  
  
  Linux_SambaValidUsersForShareInstanceEnumerationElement::
   ~Linux_SambaValidUsersForShareInstanceEnumerationElement(){
   	
  	if (m_elementP!=0)
  	  delete(m_elementP);
  	if (m_nextP!=0)
  	  delete(m_nextP);
  	  
  };

  
  //*********************************************************
  //Linux_SambaValidUsersForShareInstanceNameEnumeration
  //*********************************************************

  Linux_SambaValidUsersForShareInstanceEnumeration::
   Linux_SambaValidUsersForShareInstanceEnumeration(){
   	
  	 firstElementP=0;
     currentElementP=0;
     endElementP=0;
  };
  
  Linux_SambaValidUsersForShareInstanceEnumeration::
   Linux_SambaValidUsersForShareInstanceEnumeration(
   const Linux_SambaValidUsersForShareInstanceEnumeration& original){
   	
     firstElementP=0;
     currentElementP=0;
     endElementP=0;
  	 
     int size=original.getSize();
     for(int i=0;i<size;i++)
       addElement(original.getElement(i));           
  };
  
  	  
  Linux_SambaValidUsersForShareInstanceEnumeration::
   ~Linux_SambaValidUsersForShareInstanceEnumeration(){
   	
  	if (firstElementP!=0)
  	  delete(firstElementP);
  	  	
  };
  
  	  
  void Linux_SambaValidUsersForShareInstanceEnumeration::reset(){
  	
  	currentElementP=firstElementP;
  };
  
  	  
  bool Linux_SambaValidUsersForShareInstanceEnumeration::hasNext() const{
  	
  	return (currentElementP!=0);
  
  };
  
  int Linux_SambaValidUsersForShareInstanceEnumeration::getSize() const{
  	
    int size=0;
    Linux_SambaValidUsersForShareInstanceEnumerationElement* followingP=firstElementP;
  	
  	while(followingP!=0){
        followingP=followingP->m_nextP;
        size++;
    }
  	
    return size;
    
  };
  
  const Linux_SambaValidUsersForShareInstance&  
   Linux_SambaValidUsersForShareInstanceEnumeration::getElement(int pos) const{
   
    Linux_SambaValidUsersForShareInstanceEnumerationElement* followingP=firstElementP;
   
    int i=0;
    while((followingP!=0)&&(i<pos)){
        followingP=followingP->m_nextP;
        i++;
    }
    
    return *(followingP->m_elementP);
  };
  
  	  
  const Linux_SambaValidUsersForShareInstance&
   Linux_SambaValidUsersForShareInstanceEnumeration::getNext() {
   	
  	 Linux_SambaValidUsersForShareInstanceEnumerationElement* currentP=
  	  currentElementP;
  	 currentElementP=currentElementP->m_nextP;
  	 
  	 return *(currentP->m_elementP);
  };
  	  
  void Linux_SambaValidUsersForShareInstanceEnumeration::addElement
   (const Linux_SambaValidUsersForShareInstance& elementP){
   	
  	if(firstElementP==0){
  	  firstElementP=new Linux_SambaValidUsersForShareInstanceEnumerationElement();
  	  firstElementP->m_elementP=new Linux_SambaValidUsersForShareInstance(elementP);
  	  endElementP=firstElementP;
  	  currentElementP=firstElementP;
  	}else{
  	  endElementP->m_nextP=new Linux_SambaValidUsersForShareInstanceEnumerationElement();
  	  endElementP=endElementP->m_nextP;
  	  endElementP->m_elementP=new Linux_SambaValidUsersForShareInstance(elementP);
  	}
  };  
}
 
