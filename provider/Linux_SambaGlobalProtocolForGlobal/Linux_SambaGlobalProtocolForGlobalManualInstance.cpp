/**
 *  Linux_SambaGlobalProtocolForGlobalManualInstance.cpp
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


#include "Linux_SambaGlobalProtocolForGlobalManualInstance.h"
#include "CmpiData.h"
#include "CmpiString.h"
#include "CmpiArray.h"
#include <string>

namespace genProvider {

  //*********************************************************
  //Linux_SambaGlobalProtocolForGlobalManualInstance
  //*********************************************************

  //empty constructor
  Linux_SambaGlobalProtocolForGlobalManualInstance::
   Linux_SambaGlobalProtocolForGlobalManualInstance(){   	
   	init();  	   	
  };
  
  
  //copy constructor	
  Linux_SambaGlobalProtocolForGlobalManualInstance::
   Linux_SambaGlobalProtocolForGlobalManualInstance
   (const Linux_SambaGlobalProtocolForGlobalManualInstance& original){   	
   	init(original);  	   	
  };
  
  
  //constructor using CmpiInstance
  Linux_SambaGlobalProtocolForGlobalManualInstance::
   Linux_SambaGlobalProtocolForGlobalManualInstance (const CmpiInstance& inst, const char* instanceNamespace){
    CmpiData cmpiData;
    init(); 
    
    CmpiObjectPath cop=inst.getObjectPath();
    cop.setNameSpace(instanceNamespace);
    setInstanceName(Linux_SambaGlobalProtocolForGlobalInstanceName(cop));
    
  }
  
  
  //Destructor
  Linux_SambaGlobalProtocolForGlobalManualInstance::
   ~Linux_SambaGlobalProtocolForGlobalManualInstance(){
   	reset();  	  
  };
  
  
  //copy operator
  Linux_SambaGlobalProtocolForGlobalManualInstance&
   Linux_SambaGlobalProtocolForGlobalManualInstance::operator=
   (const Linux_SambaGlobalProtocolForGlobalManualInstance& original){   	
   	init(original);
   	return *this;
  };
  
  
  //converts to CmpiInstance
  CmpiInstance Linux_SambaGlobalProtocolForGlobalManualInstance::
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
  unsigned int Linux_SambaGlobalProtocolForGlobalManualInstance::
   isInstanceNameSet() const{
  	return isSet.instanceName;
  }
  
  const Linux_SambaGlobalProtocolForGlobalInstanceName&
    Linux_SambaGlobalProtocolForGlobalManualInstance::getInstanceName() const{

    if(!isSet.instanceName)
   	  throw CmpiErrorFormater::getErrorException(
   	   CmpiErrorFormater::NOT_SET,
   	   "InstanceName not set in Linux_SambaGlobalProtocolForGlobal instance");
  		
   	return m_instanceName;
  }

  void Linux_SambaGlobalProtocolForGlobalManualInstance::setInstanceName(
   const Linux_SambaGlobalProtocolForGlobalInstanceName& val){
    m_instanceName = val;
    isSet.instanceName=1;
  }


  
  //set isSet attributes to FALSE
  void Linux_SambaGlobalProtocolForGlobalManualInstance::init(){
   	isSet.instanceName=0;
   	  	
  };
  
  
  //copies another instance properties in this
  void Linux_SambaGlobalProtocolForGlobalManualInstance::init
   (const Linux_SambaGlobalProtocolForGlobalManualInstance& original){   	
   	init();
   	   	
    if(original.isInstanceNameSet()){
      setInstanceName(original.getInstanceName());
    }    
   }
  
  
  //reset the instance data
  void Linux_SambaGlobalProtocolForGlobalManualInstance::reset(){
   	
  	  
  };
  
  
  //*********************************************************
  //Linux_SambaGlobalProtocolForGlobalManualInstanceEnumerationElement	
  //*********************************************************
  
  Linux_SambaGlobalProtocolForGlobalManualInstanceEnumerationElement::
   Linux_SambaGlobalProtocolForGlobalManualInstanceEnumerationElement(){
   	
  	m_elementP=0;
  	m_nextP=0;
  	  
  };
  
  
  Linux_SambaGlobalProtocolForGlobalManualInstanceEnumerationElement::
   ~Linux_SambaGlobalProtocolForGlobalManualInstanceEnumerationElement(){
   	
  	if (m_elementP!=0)
  	  delete(m_elementP);
  	if (m_nextP!=0)
  	  delete(m_nextP);
  	  
  };

  
  //*********************************************************
  //Linux_SambaGlobalProtocolForGlobalManualInstanceNameEnumeration
  //*********************************************************

  Linux_SambaGlobalProtocolForGlobalManualInstanceEnumeration::
   Linux_SambaGlobalProtocolForGlobalManualInstanceEnumeration(){
   	
  	 firstElementP=0;
     currentElementP=0;
     endElementP=0;
  };
  
  Linux_SambaGlobalProtocolForGlobalManualInstanceEnumeration::
   Linux_SambaGlobalProtocolForGlobalManualInstanceEnumeration(
   const Linux_SambaGlobalProtocolForGlobalManualInstanceEnumeration& original){
   	
     firstElementP=0;
     currentElementP=0;
     endElementP=0;
  	 
     int size=original.getSize();
     for(int i=0;i<size;i++)
       addElement(original.getElement(i));           
  };
  
  	  
  Linux_SambaGlobalProtocolForGlobalManualInstanceEnumeration::
   ~Linux_SambaGlobalProtocolForGlobalManualInstanceEnumeration(){
   	
  	if (firstElementP!=0)
  	  delete(firstElementP);
  	  	
  };
  
  	  
  void Linux_SambaGlobalProtocolForGlobalManualInstanceEnumeration::reset(){
  	
  	currentElementP=firstElementP;
  };
  
  	  
  bool Linux_SambaGlobalProtocolForGlobalManualInstanceEnumeration::hasNext() const{
  	
  	return (currentElementP!=0);
  
  };
  
  int Linux_SambaGlobalProtocolForGlobalManualInstanceEnumeration::getSize() const{
  	
    int size=0;
    Linux_SambaGlobalProtocolForGlobalManualInstanceEnumerationElement* followingP=firstElementP;
  	
  	while(followingP!=0){
        followingP=followingP->m_nextP;
        size++;
    }
  	
    return size;
    
  };
  
  const Linux_SambaGlobalProtocolForGlobalManualInstance&  
   Linux_SambaGlobalProtocolForGlobalManualInstanceEnumeration::getElement(int pos) const{
   
    Linux_SambaGlobalProtocolForGlobalManualInstanceEnumerationElement* followingP=firstElementP;
   
    int i=0;
    while((followingP!=0)&&(i<pos)){
        followingP=followingP->m_nextP;
        i++;
    }
    
    return *(followingP->m_elementP);
  };
  
  	  
  const Linux_SambaGlobalProtocolForGlobalManualInstance&
   Linux_SambaGlobalProtocolForGlobalManualInstanceEnumeration::getNext() {
   	
  	 Linux_SambaGlobalProtocolForGlobalManualInstanceEnumerationElement* currentP=
  	  currentElementP;
  	 currentElementP=currentElementP->m_nextP;
  	 
  	 return *(currentP->m_elementP);
  };
  	  
  void Linux_SambaGlobalProtocolForGlobalManualInstanceEnumeration::addElement
   (const Linux_SambaGlobalProtocolForGlobalManualInstance& elementP){
   	
  	if(firstElementP==0){
  	  firstElementP=new Linux_SambaGlobalProtocolForGlobalManualInstanceEnumerationElement();
  	  firstElementP->m_elementP=new Linux_SambaGlobalProtocolForGlobalManualInstance(elementP);
  	  endElementP=firstElementP;
  	  currentElementP=firstElementP;
  	}else{
  	  endElementP->m_nextP=new Linux_SambaGlobalProtocolForGlobalManualInstanceEnumerationElement();
  	  endElementP=endElementP->m_nextP;
  	  endElementP->m_elementP=new Linux_SambaGlobalProtocolForGlobalManualInstance(elementP);
  	}
  };  
}
 
