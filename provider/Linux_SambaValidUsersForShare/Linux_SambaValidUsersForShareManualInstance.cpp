/**
 *  Linux_SambaValidUsersForShareManualInstance.cpp
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


#include "Linux_SambaValidUsersForShareManualInstance.h"
#include "CmpiData.h"
#include "CmpiString.h"
#include "CmpiArray.h"
#include <string>

namespace genProvider {

  //*********************************************************
  //Linux_SambaValidUsersForShareManualInstance
  //*********************************************************

  //empty constructor
  Linux_SambaValidUsersForShareManualInstance::
   Linux_SambaValidUsersForShareManualInstance(){   	
   	init();  	   	
  };
  
  
  //copy constructor	
  Linux_SambaValidUsersForShareManualInstance::
   Linux_SambaValidUsersForShareManualInstance
   (const Linux_SambaValidUsersForShareManualInstance& original){   	
   	init(original);  	   	
  };
  
  
  //constructor using CmpiInstance
  Linux_SambaValidUsersForShareManualInstance::
   Linux_SambaValidUsersForShareManualInstance (const CmpiInstance& inst, const char* instanceNamespace){
    CmpiData cmpiData;
    init(); 
    
    CmpiObjectPath cop=inst.getObjectPath();
    cop.setNameSpace(instanceNamespace);
    setInstanceName(Linux_SambaValidUsersForShareInstanceName(cop));
    
  }
  
  
  //Destructor
  Linux_SambaValidUsersForShareManualInstance::
   ~Linux_SambaValidUsersForShareManualInstance(){
   	reset();  	  
  };
  
  
  //copy operator
  Linux_SambaValidUsersForShareManualInstance&
   Linux_SambaValidUsersForShareManualInstance::operator=
   (const Linux_SambaValidUsersForShareManualInstance& original){   	
   	init(original);
   	return *this;
  };
  
  
  //converts to CmpiInstance
  CmpiInstance Linux_SambaValidUsersForShareManualInstance::
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
  unsigned int Linux_SambaValidUsersForShareManualInstance::
   isInstanceNameSet() const{
  	return isSet.instanceName;
  }
  
  const Linux_SambaValidUsersForShareInstanceName&
    Linux_SambaValidUsersForShareManualInstance::getInstanceName() const{

    if(!isSet.instanceName)
   	  throw CmpiErrorFormater::getErrorException(
   	   CmpiErrorFormater::NOT_SET,
   	   "InstanceName not set in Linux_SambaValidUsersForShare instance");
  		
   	return m_instanceName;
  }

  void Linux_SambaValidUsersForShareManualInstance::setInstanceName(
   const Linux_SambaValidUsersForShareInstanceName& val){
    m_instanceName = val;
    isSet.instanceName=1;
  }


  
  //set isSet attributes to FALSE
  void Linux_SambaValidUsersForShareManualInstance::init(){
   	isSet.instanceName=0;
   	  	
  };
  
  
  //copies another instance properties in this
  void Linux_SambaValidUsersForShareManualInstance::init
   (const Linux_SambaValidUsersForShareManualInstance& original){   	
   	init();
   	   	
    if(original.isInstanceNameSet()){
      setInstanceName(original.getInstanceName());
    }    
   }
  
  
  //reset the instance data
  void Linux_SambaValidUsersForShareManualInstance::reset(){
   	
  	  
  };
  
  
  //*********************************************************
  //Linux_SambaValidUsersForShareManualInstanceEnumerationElement	
  //*********************************************************
  
  Linux_SambaValidUsersForShareManualInstanceEnumerationElement::
   Linux_SambaValidUsersForShareManualInstanceEnumerationElement(){
   	
  	m_elementP=0;
  	m_nextP=0;
  	  
  };
  
  
  Linux_SambaValidUsersForShareManualInstanceEnumerationElement::
   ~Linux_SambaValidUsersForShareManualInstanceEnumerationElement(){
   	
  	if (m_elementP!=0)
  	  delete(m_elementP);
  	if (m_nextP!=0)
  	  delete(m_nextP);
  	  
  };

  
  //*********************************************************
  //Linux_SambaValidUsersForShareManualInstanceNameEnumeration
  //*********************************************************

  Linux_SambaValidUsersForShareManualInstanceEnumeration::
   Linux_SambaValidUsersForShareManualInstanceEnumeration(){
   	
  	 firstElementP=0;
     currentElementP=0;
     endElementP=0;
  };
  
  Linux_SambaValidUsersForShareManualInstanceEnumeration::
   Linux_SambaValidUsersForShareManualInstanceEnumeration(
   const Linux_SambaValidUsersForShareManualInstanceEnumeration& original){
   	
     firstElementP=0;
     currentElementP=0;
     endElementP=0;
  	 
     int size=original.getSize();
     for(int i=0;i<size;i++)
       addElement(original.getElement(i));           
  };
  
  	  
  Linux_SambaValidUsersForShareManualInstanceEnumeration::
   ~Linux_SambaValidUsersForShareManualInstanceEnumeration(){
   	
  	if (firstElementP!=0)
  	  delete(firstElementP);
  	  	
  };
  
  	  
  void Linux_SambaValidUsersForShareManualInstanceEnumeration::reset(){
  	
  	currentElementP=firstElementP;
  };
  
  	  
  bool Linux_SambaValidUsersForShareManualInstanceEnumeration::hasNext() const{
  	
  	return (currentElementP!=0);
  
  };
  
  int Linux_SambaValidUsersForShareManualInstanceEnumeration::getSize() const{
  	
    int size=0;
    Linux_SambaValidUsersForShareManualInstanceEnumerationElement* followingP=firstElementP;
  	
  	while(followingP!=0){
        followingP=followingP->m_nextP;
        size++;
    }
  	
    return size;
    
  };
  
  const Linux_SambaValidUsersForShareManualInstance&  
   Linux_SambaValidUsersForShareManualInstanceEnumeration::getElement(int pos) const{
   
    Linux_SambaValidUsersForShareManualInstanceEnumerationElement* followingP=firstElementP;
   
    int i=0;
    while((followingP!=0)&&(i<pos)){
        followingP=followingP->m_nextP;
        i++;
    }
    
    return *(followingP->m_elementP);
  };
  
  	  
  const Linux_SambaValidUsersForShareManualInstance&
   Linux_SambaValidUsersForShareManualInstanceEnumeration::getNext() {
   	
  	 Linux_SambaValidUsersForShareManualInstanceEnumerationElement* currentP=
  	  currentElementP;
  	 currentElementP=currentElementP->m_nextP;
  	 
  	 return *(currentP->m_elementP);
  };
  	  
  void Linux_SambaValidUsersForShareManualInstanceEnumeration::addElement
   (const Linux_SambaValidUsersForShareManualInstance& elementP){
   	
  	if(firstElementP==0){
  	  firstElementP=new Linux_SambaValidUsersForShareManualInstanceEnumerationElement();
  	  firstElementP->m_elementP=new Linux_SambaValidUsersForShareManualInstance(elementP);
  	  endElementP=firstElementP;
  	  currentElementP=firstElementP;
  	}else{
  	  endElementP->m_nextP=new Linux_SambaValidUsersForShareManualInstanceEnumerationElement();
  	  endElementP=endElementP->m_nextP;
  	  endElementP->m_elementP=new Linux_SambaValidUsersForShareManualInstance(elementP);
  	}
  };  
}
 
