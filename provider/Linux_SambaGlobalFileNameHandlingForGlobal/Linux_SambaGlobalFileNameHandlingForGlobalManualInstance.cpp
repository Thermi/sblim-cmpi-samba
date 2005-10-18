/**
 *  Linux_SambaGlobalFileNameHandlingForGlobalManualInstance.cpp
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


#include "Linux_SambaGlobalFileNameHandlingForGlobalManualInstance.h"
#include "CmpiData.h"
#include "CmpiString.h"
#include "CmpiArray.h"
#include <string>

namespace genProvider {

  //*********************************************************
  //Linux_SambaGlobalFileNameHandlingForGlobalManualInstance
  //*********************************************************

  //empty constructor
  Linux_SambaGlobalFileNameHandlingForGlobalManualInstance::
   Linux_SambaGlobalFileNameHandlingForGlobalManualInstance(){   	
   	init();  	   	
  };
  
  
  //copy constructor	
  Linux_SambaGlobalFileNameHandlingForGlobalManualInstance::
   Linux_SambaGlobalFileNameHandlingForGlobalManualInstance
   (const Linux_SambaGlobalFileNameHandlingForGlobalManualInstance& original){   	
   	init(original);  	   	
  };
  
  
  //constructor using CmpiInstance
  Linux_SambaGlobalFileNameHandlingForGlobalManualInstance::
   Linux_SambaGlobalFileNameHandlingForGlobalManualInstance (const CmpiInstance& inst, const char* instanceNamespace){
    CmpiData cmpiData;
    init(); 
    
    CmpiObjectPath cop=inst.getObjectPath();
    cop.setNameSpace(instanceNamespace);
    setInstanceName(Linux_SambaGlobalFileNameHandlingForGlobalInstanceName(cop));
    
  }
  
  
  //Destructor
  Linux_SambaGlobalFileNameHandlingForGlobalManualInstance::
   ~Linux_SambaGlobalFileNameHandlingForGlobalManualInstance(){
   	reset();  	  
  };
  
  
  //copy operator
  Linux_SambaGlobalFileNameHandlingForGlobalManualInstance&
   Linux_SambaGlobalFileNameHandlingForGlobalManualInstance::operator=
   (const Linux_SambaGlobalFileNameHandlingForGlobalManualInstance& original){   	
   	init(original);
   	return *this;
  };
  
  
  //converts to CmpiInstance
  CmpiInstance Linux_SambaGlobalFileNameHandlingForGlobalManualInstance::
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
  unsigned int Linux_SambaGlobalFileNameHandlingForGlobalManualInstance::
   isInstanceNameSet() const{
  	return isSet.instanceName;
  }
  
  const Linux_SambaGlobalFileNameHandlingForGlobalInstanceName&
    Linux_SambaGlobalFileNameHandlingForGlobalManualInstance::getInstanceName() const{

    if(!isSet.instanceName)
   	  throw CmpiErrorFormater::getErrorException(
   	   CmpiErrorFormater::NOT_SET,
   	   "InstanceName not set in Linux_SambaGlobalFileNameHandlingForGlobal instance");
  		
   	return m_instanceName;
  }

  void Linux_SambaGlobalFileNameHandlingForGlobalManualInstance::setInstanceName(
   const Linux_SambaGlobalFileNameHandlingForGlobalInstanceName& val){
    m_instanceName = val;
    isSet.instanceName=1;
  }


  
  //set isSet attributes to FALSE
  void Linux_SambaGlobalFileNameHandlingForGlobalManualInstance::init(){
   	isSet.instanceName=0;
   	  	
  };
  
  
  //copies another instance properties in this
  void Linux_SambaGlobalFileNameHandlingForGlobalManualInstance::init
   (const Linux_SambaGlobalFileNameHandlingForGlobalManualInstance& original){   	
   	init();
   	   	
    if(original.isInstanceNameSet()){
      setInstanceName(original.getInstanceName());
    }    
   }
  
  
  //reset the instance data
  void Linux_SambaGlobalFileNameHandlingForGlobalManualInstance::reset(){
   	
  	  
  };
  
  
  //*********************************************************
  //Linux_SambaGlobalFileNameHandlingForGlobalManualInstanceEnumerationElement	
  //*********************************************************
  
  Linux_SambaGlobalFileNameHandlingForGlobalManualInstanceEnumerationElement::
   Linux_SambaGlobalFileNameHandlingForGlobalManualInstanceEnumerationElement(){
   	
  	m_elementP=0;
  	m_nextP=0;
  	  
  };
  
  
  Linux_SambaGlobalFileNameHandlingForGlobalManualInstanceEnumerationElement::
   ~Linux_SambaGlobalFileNameHandlingForGlobalManualInstanceEnumerationElement(){
   	
  	if (m_elementP!=0)
  	  delete(m_elementP);
  	if (m_nextP!=0)
  	  delete(m_nextP);
  	  
  };

  
  //*********************************************************
  //Linux_SambaGlobalFileNameHandlingForGlobalManualInstanceNameEnumeration
  //*********************************************************

  Linux_SambaGlobalFileNameHandlingForGlobalManualInstanceEnumeration::
   Linux_SambaGlobalFileNameHandlingForGlobalManualInstanceEnumeration(){
   	
  	 firstElementP=0;
     currentElementP=0;
     endElementP=0;
  };
  
  Linux_SambaGlobalFileNameHandlingForGlobalManualInstanceEnumeration::
   Linux_SambaGlobalFileNameHandlingForGlobalManualInstanceEnumeration(
   const Linux_SambaGlobalFileNameHandlingForGlobalManualInstanceEnumeration& original){
   	
     firstElementP=0;
     currentElementP=0;
     endElementP=0;
  	 
     int size=original.getSize();
     for(int i=0;i<size;i++)
       addElement(original.getElement(i));           
  };
  
  	  
  Linux_SambaGlobalFileNameHandlingForGlobalManualInstanceEnumeration::
   ~Linux_SambaGlobalFileNameHandlingForGlobalManualInstanceEnumeration(){
   	
  	if (firstElementP!=0)
  	  delete(firstElementP);
  	  	
  };
  
  	  
  void Linux_SambaGlobalFileNameHandlingForGlobalManualInstanceEnumeration::reset(){
  	
  	currentElementP=firstElementP;
  };
  
  	  
  bool Linux_SambaGlobalFileNameHandlingForGlobalManualInstanceEnumeration::hasNext() const{
  	
  	return (currentElementP!=0);
  
  };
  
  int Linux_SambaGlobalFileNameHandlingForGlobalManualInstanceEnumeration::getSize() const{
  	
    int size=0;
    Linux_SambaGlobalFileNameHandlingForGlobalManualInstanceEnumerationElement* followingP=firstElementP;
  	
  	while(followingP!=0){
        followingP=followingP->m_nextP;
        size++;
    }
  	
    return size;
    
  };
  
  const Linux_SambaGlobalFileNameHandlingForGlobalManualInstance&  
   Linux_SambaGlobalFileNameHandlingForGlobalManualInstanceEnumeration::getElement(int pos) const{
   
    Linux_SambaGlobalFileNameHandlingForGlobalManualInstanceEnumerationElement* followingP=firstElementP;
   
    int i=0;
    while((followingP!=0)&&(i<pos)){
        followingP=followingP->m_nextP;
        i++;
    }
    
    return *(followingP->m_elementP);
  };
  
  	  
  const Linux_SambaGlobalFileNameHandlingForGlobalManualInstance&
   Linux_SambaGlobalFileNameHandlingForGlobalManualInstanceEnumeration::getNext() {
   	
  	 Linux_SambaGlobalFileNameHandlingForGlobalManualInstanceEnumerationElement* currentP=
  	  currentElementP;
  	 currentElementP=currentElementP->m_nextP;
  	 
  	 return *(currentP->m_elementP);
  };
  	  
  void Linux_SambaGlobalFileNameHandlingForGlobalManualInstanceEnumeration::addElement
   (const Linux_SambaGlobalFileNameHandlingForGlobalManualInstance& elementP){
   	
  	if(firstElementP==0){
  	  firstElementP=new Linux_SambaGlobalFileNameHandlingForGlobalManualInstanceEnumerationElement();
  	  firstElementP->m_elementP=new Linux_SambaGlobalFileNameHandlingForGlobalManualInstance(elementP);
  	  endElementP=firstElementP;
  	  currentElementP=firstElementP;
  	}else{
  	  endElementP->m_nextP=new Linux_SambaGlobalFileNameHandlingForGlobalManualInstanceEnumerationElement();
  	  endElementP=endElementP->m_nextP;
  	  endElementP->m_elementP=new Linux_SambaGlobalFileNameHandlingForGlobalManualInstance(elementP);
  	}
  };  
}
 
