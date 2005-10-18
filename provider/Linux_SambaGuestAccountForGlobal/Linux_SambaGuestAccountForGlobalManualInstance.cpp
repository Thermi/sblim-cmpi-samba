/**
 *  Linux_SambaGuestAccountForGlobalManualInstance.cpp
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


#include "Linux_SambaGuestAccountForGlobalManualInstance.h"
#include "CmpiData.h"
#include "CmpiString.h"
#include "CmpiArray.h"
#include <string>

namespace genProvider {

  //*********************************************************
  //Linux_SambaGuestAccountForGlobalManualInstance
  //*********************************************************

  //empty constructor
  Linux_SambaGuestAccountForGlobalManualInstance::
   Linux_SambaGuestAccountForGlobalManualInstance(){   	
   	init();  	   	
  };
  
  
  //copy constructor	
  Linux_SambaGuestAccountForGlobalManualInstance::
   Linux_SambaGuestAccountForGlobalManualInstance
   (const Linux_SambaGuestAccountForGlobalManualInstance& original){   	
   	init(original);  	   	
  };
  
  
  //constructor using CmpiInstance
  Linux_SambaGuestAccountForGlobalManualInstance::
   Linux_SambaGuestAccountForGlobalManualInstance (const CmpiInstance& inst, const char* instanceNamespace){
    CmpiData cmpiData;
    init(); 
    
    CmpiObjectPath cop=inst.getObjectPath();
    cop.setNameSpace(instanceNamespace);
    setInstanceName(Linux_SambaGuestAccountForGlobalInstanceName(cop));
    
  }
  
  
  //Destructor
  Linux_SambaGuestAccountForGlobalManualInstance::
   ~Linux_SambaGuestAccountForGlobalManualInstance(){
   	reset();  	  
  };
  
  
  //copy operator
  Linux_SambaGuestAccountForGlobalManualInstance&
   Linux_SambaGuestAccountForGlobalManualInstance::operator=
   (const Linux_SambaGuestAccountForGlobalManualInstance& original){   	
   	init(original);
   	return *this;
  };
  
  
  //converts to CmpiInstance
  CmpiInstance Linux_SambaGuestAccountForGlobalManualInstance::
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
  unsigned int Linux_SambaGuestAccountForGlobalManualInstance::
   isInstanceNameSet() const{
  	return isSet.instanceName;
  }
  
  const Linux_SambaGuestAccountForGlobalInstanceName&
    Linux_SambaGuestAccountForGlobalManualInstance::getInstanceName() const{

    if(!isSet.instanceName)
   	  throw CmpiErrorFormater::getErrorException(
   	   CmpiErrorFormater::NOT_SET,
   	   "InstanceName not set in Linux_SambaGuestAccountForGlobal instance");
  		
   	return m_instanceName;
  }

  void Linux_SambaGuestAccountForGlobalManualInstance::setInstanceName(
   const Linux_SambaGuestAccountForGlobalInstanceName& val){
    m_instanceName = val;
    isSet.instanceName=1;
  }


  
  //set isSet attributes to FALSE
  void Linux_SambaGuestAccountForGlobalManualInstance::init(){
   	isSet.instanceName=0;
   	  	
  };
  
  
  //copies another instance properties in this
  void Linux_SambaGuestAccountForGlobalManualInstance::init
   (const Linux_SambaGuestAccountForGlobalManualInstance& original){   	
   	init();
   	   	
    if(original.isInstanceNameSet()){
      setInstanceName(original.getInstanceName());
    }    
   }
  
  
  //reset the instance data
  void Linux_SambaGuestAccountForGlobalManualInstance::reset(){
   	
  	  
  };
  
  
  //*********************************************************
  //Linux_SambaGuestAccountForGlobalManualInstanceEnumerationElement	
  //*********************************************************
  
  Linux_SambaGuestAccountForGlobalManualInstanceEnumerationElement::
   Linux_SambaGuestAccountForGlobalManualInstanceEnumerationElement(){
   	
  	m_elementP=0;
  	m_nextP=0;
  	  
  };
  
  
  Linux_SambaGuestAccountForGlobalManualInstanceEnumerationElement::
   ~Linux_SambaGuestAccountForGlobalManualInstanceEnumerationElement(){
   	
  	if (m_elementP!=0)
  	  delete(m_elementP);
  	if (m_nextP!=0)
  	  delete(m_nextP);
  	  
  };

  
  //*********************************************************
  //Linux_SambaGuestAccountForGlobalManualInstanceNameEnumeration
  //*********************************************************

  Linux_SambaGuestAccountForGlobalManualInstanceEnumeration::
   Linux_SambaGuestAccountForGlobalManualInstanceEnumeration(){
   	
  	 firstElementP=0;
     currentElementP=0;
     endElementP=0;
  };
  
  Linux_SambaGuestAccountForGlobalManualInstanceEnumeration::
   Linux_SambaGuestAccountForGlobalManualInstanceEnumeration(
   const Linux_SambaGuestAccountForGlobalManualInstanceEnumeration& original){
   	
     firstElementP=0;
     currentElementP=0;
     endElementP=0;
  	 
     int size=original.getSize();
     for(int i=0;i<size;i++)
       addElement(original.getElement(i));           
  };
  
  	  
  Linux_SambaGuestAccountForGlobalManualInstanceEnumeration::
   ~Linux_SambaGuestAccountForGlobalManualInstanceEnumeration(){
   	
  	if (firstElementP!=0)
  	  delete(firstElementP);
  	  	
  };
  
  	  
  void Linux_SambaGuestAccountForGlobalManualInstanceEnumeration::reset(){
  	
  	currentElementP=firstElementP;
  };
  
  	  
  bool Linux_SambaGuestAccountForGlobalManualInstanceEnumeration::hasNext() const{
  	
  	return (currentElementP!=0);
  
  };
  
  int Linux_SambaGuestAccountForGlobalManualInstanceEnumeration::getSize() const{
  	
    int size=0;
    Linux_SambaGuestAccountForGlobalManualInstanceEnumerationElement* followingP=firstElementP;
  	
  	while(followingP!=0){
        followingP=followingP->m_nextP;
        size++;
    }
  	
    return size;
    
  };
  
  const Linux_SambaGuestAccountForGlobalManualInstance&  
   Linux_SambaGuestAccountForGlobalManualInstanceEnumeration::getElement(int pos) const{
   
    Linux_SambaGuestAccountForGlobalManualInstanceEnumerationElement* followingP=firstElementP;
   
    int i=0;
    while((followingP!=0)&&(i<pos)){
        followingP=followingP->m_nextP;
        i++;
    }
    
    return *(followingP->m_elementP);
  };
  
  	  
  const Linux_SambaGuestAccountForGlobalManualInstance&
   Linux_SambaGuestAccountForGlobalManualInstanceEnumeration::getNext() {
   	
  	 Linux_SambaGuestAccountForGlobalManualInstanceEnumerationElement* currentP=
  	  currentElementP;
  	 currentElementP=currentElementP->m_nextP;
  	 
  	 return *(currentP->m_elementP);
  };
  	  
  void Linux_SambaGuestAccountForGlobalManualInstanceEnumeration::addElement
   (const Linux_SambaGuestAccountForGlobalManualInstance& elementP){
   	
  	if(firstElementP==0){
  	  firstElementP=new Linux_SambaGuestAccountForGlobalManualInstanceEnumerationElement();
  	  firstElementP->m_elementP=new Linux_SambaGuestAccountForGlobalManualInstance(elementP);
  	  endElementP=firstElementP;
  	  currentElementP=firstElementP;
  	}else{
  	  endElementP->m_nextP=new Linux_SambaGuestAccountForGlobalManualInstanceEnumerationElement();
  	  endElementP=endElementP->m_nextP;
  	  endElementP->m_elementP=new Linux_SambaGuestAccountForGlobalManualInstance(elementP);
  	}
  };  
}
 
