/**
 *  Linux_SambaGroupForUserInstance.cpp
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


#include "Linux_SambaGroupForUserInstance.h"
#include "CmpiData.h"
#include "CmpiString.h"
#include "CmpiArray.h"
#include <string>

namespace genProvider {

  //*********************************************************
  //Linux_SambaGroupForUserInstance
  //*********************************************************

  //empty constructor
  Linux_SambaGroupForUserInstance::
   Linux_SambaGroupForUserInstance(){   	
   	init();  	   	
  };
  
  
  //copy constructor	
  Linux_SambaGroupForUserInstance::
   Linux_SambaGroupForUserInstance
   (const Linux_SambaGroupForUserInstance& original){   	
   	init(original);  	   	
  };
  
  
  //constructor using CmpiInstance
  Linux_SambaGroupForUserInstance::
   Linux_SambaGroupForUserInstance (const CmpiInstance& inst, const char* instanceNamespace){
    CmpiData cmpiData;
    init(); 
    
    CmpiObjectPath cop=inst.getObjectPath();
    cop.setNameSpace(instanceNamespace);
    setInstanceName(Linux_SambaGroupForUserInstanceName(cop));
    
  }
  
  
  //Destructor
  Linux_SambaGroupForUserInstance::
   ~Linux_SambaGroupForUserInstance(){
   	reset();  	  
  };
  
  
  //copy operator
  Linux_SambaGroupForUserInstance&
   Linux_SambaGroupForUserInstance::operator=
   (const Linux_SambaGroupForUserInstance& original){   	
   	init(original);
   	return *this;
  };
  
  
  //converts to CmpiInstance
  CmpiInstance Linux_SambaGroupForUserInstance::
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
  unsigned int Linux_SambaGroupForUserInstance::
   isInstanceNameSet() const{
  	return isSet.instanceName;
  }
  
  const Linux_SambaGroupForUserInstanceName&
    Linux_SambaGroupForUserInstance::getInstanceName() const{

    if(!isSet.instanceName)
   	  throw CmpiErrorFormater::getErrorException(
   	   CmpiErrorFormater::NOT_SET,
   	   "InstanceName not set in Linux_SambaGroupForUser instance");
  		
   	return m_instanceName;
  }

  void Linux_SambaGroupForUserInstance::setInstanceName(
   const Linux_SambaGroupForUserInstanceName& val){
    m_instanceName = val;
    isSet.instanceName=1;
  }


  
  //set isSet attributes to FALSE
  void Linux_SambaGroupForUserInstance::init(){
   	isSet.instanceName=0;
   	  	
  };
  
  
  //copies another instance properties in this
  void Linux_SambaGroupForUserInstance::init
   (const Linux_SambaGroupForUserInstance& original){   	
   	init();
   	   	
    if(original.isInstanceNameSet()){
      setInstanceName(original.getInstanceName());
    }    
   }
  
  
  //reset the instance data
  void Linux_SambaGroupForUserInstance::reset(){
   	
  	  
  };
  
  
  //*********************************************************
  //Linux_SambaGroupForUserInstanceEnumerationElement	
  //*********************************************************
  
  Linux_SambaGroupForUserInstanceEnumerationElement::
   Linux_SambaGroupForUserInstanceEnumerationElement(){
   	
  	m_elementP=0;
  	m_nextP=0;
  	  
  };
  
  
  Linux_SambaGroupForUserInstanceEnumerationElement::
   ~Linux_SambaGroupForUserInstanceEnumerationElement(){
   	
  	if (m_elementP!=0)
  	  delete(m_elementP);
  	if (m_nextP!=0)
  	  delete(m_nextP);
  	  
  };

  
  //*********************************************************
  //Linux_SambaGroupForUserInstanceNameEnumeration
  //*********************************************************

  Linux_SambaGroupForUserInstanceEnumeration::
   Linux_SambaGroupForUserInstanceEnumeration(){
   	
  	 firstElementP=0;
     currentElementP=0;
     endElementP=0;
  };
  
  Linux_SambaGroupForUserInstanceEnumeration::
   Linux_SambaGroupForUserInstanceEnumeration(
   const Linux_SambaGroupForUserInstanceEnumeration& original){
   	
     firstElementP=0;
     currentElementP=0;
     endElementP=0;
  	 
     int size=original.getSize();
     for(int i=0;i<size;i++)
       addElement(original.getElement(i));           
  };
  
  	  
  Linux_SambaGroupForUserInstanceEnumeration::
   ~Linux_SambaGroupForUserInstanceEnumeration(){
   	
  	if (firstElementP!=0)
  	  delete(firstElementP);
  	  	
  };
  
  	  
  void Linux_SambaGroupForUserInstanceEnumeration::reset(){
  	
  	currentElementP=firstElementP;
  };
  
  	  
  bool Linux_SambaGroupForUserInstanceEnumeration::hasNext() const{
  	
  	return (currentElementP!=0);
  
  };
  
  int Linux_SambaGroupForUserInstanceEnumeration::getSize() const{
  	
    int size=0;
    Linux_SambaGroupForUserInstanceEnumerationElement* followingP=firstElementP;
  	
  	while(followingP!=0){
        followingP=followingP->m_nextP;
        size++;
    }
  	
    return size;
    
  };
  
  const Linux_SambaGroupForUserInstance&  
   Linux_SambaGroupForUserInstanceEnumeration::getElement(int pos) const{
   
    Linux_SambaGroupForUserInstanceEnumerationElement* followingP=firstElementP;
   
    int i=0;
    while((followingP!=0)&&(i<pos)){
        followingP=followingP->m_nextP;
        i++;
    }
    
    return *(followingP->m_elementP);
  };
  
  	  
  const Linux_SambaGroupForUserInstance&
   Linux_SambaGroupForUserInstanceEnumeration::getNext() {
   	
  	 Linux_SambaGroupForUserInstanceEnumerationElement* currentP=
  	  currentElementP;
  	 currentElementP=currentElementP->m_nextP;
  	 
  	 return *(currentP->m_elementP);
  };
  	  
  void Linux_SambaGroupForUserInstanceEnumeration::addElement
   (const Linux_SambaGroupForUserInstance& elementP){
   	
  	if(firstElementP==0){
  	  firstElementP=new Linux_SambaGroupForUserInstanceEnumerationElement();
  	  firstElementP->m_elementP=new Linux_SambaGroupForUserInstance(elementP);
  	  endElementP=firstElementP;
  	  currentElementP=firstElementP;
  	}else{
  	  endElementP->m_nextP=new Linux_SambaGroupForUserInstanceEnumerationElement();
  	  endElementP=endElementP->m_nextP;
  	  endElementP->m_elementP=new Linux_SambaGroupForUserInstance(elementP);
  	}
  };  
}
 
