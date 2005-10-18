/**
 *  Linux_SambaGuestAccountForGlobalInstance.cpp
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


#include "Linux_SambaGuestAccountForGlobalInstance.h"
#include "CmpiData.h"
#include "CmpiString.h"
#include "CmpiArray.h"
#include <string>

namespace genProvider {

  //*********************************************************
  //Linux_SambaGuestAccountForGlobalInstance
  //*********************************************************

  //empty constructor
  Linux_SambaGuestAccountForGlobalInstance::
   Linux_SambaGuestAccountForGlobalInstance(){   	
   	init();  	   	
  };
  
  
  //copy constructor	
  Linux_SambaGuestAccountForGlobalInstance::
   Linux_SambaGuestAccountForGlobalInstance
   (const Linux_SambaGuestAccountForGlobalInstance& original){   	
   	init(original);  	   	
  };
  
  
  //constructor using CmpiInstance
  Linux_SambaGuestAccountForGlobalInstance::
   Linux_SambaGuestAccountForGlobalInstance (const CmpiInstance& inst, const char* instanceNamespace){
    CmpiData cmpiData;
    init(); 
    
    CmpiObjectPath cop=inst.getObjectPath();
    cop.setNameSpace(instanceNamespace);
    setInstanceName(Linux_SambaGuestAccountForGlobalInstanceName(cop));
    
  }
  
  
  //Destructor
  Linux_SambaGuestAccountForGlobalInstance::
   ~Linux_SambaGuestAccountForGlobalInstance(){
   	reset();  	  
  };
  
  
  //copy operator
  Linux_SambaGuestAccountForGlobalInstance&
   Linux_SambaGuestAccountForGlobalInstance::operator=
   (const Linux_SambaGuestAccountForGlobalInstance& original){   	
   	init(original);
   	return *this;
  };
  
  
  //converts to CmpiInstance
  CmpiInstance Linux_SambaGuestAccountForGlobalInstance::
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
  unsigned int Linux_SambaGuestAccountForGlobalInstance::
   isInstanceNameSet() const{
  	return isSet.instanceName;
  }
  
  const Linux_SambaGuestAccountForGlobalInstanceName&
    Linux_SambaGuestAccountForGlobalInstance::getInstanceName() const{

    if(!isSet.instanceName)
   	  throw CmpiErrorFormater::getErrorException(
   	   CmpiErrorFormater::NOT_SET,
   	   "InstanceName not set in Linux_SambaGuestAccountForGlobal instance");
  		
   	return m_instanceName;
  }

  void Linux_SambaGuestAccountForGlobalInstance::setInstanceName(
   const Linux_SambaGuestAccountForGlobalInstanceName& val){
    m_instanceName = val;
    isSet.instanceName=1;
  }


  
  //set isSet attributes to FALSE
  void Linux_SambaGuestAccountForGlobalInstance::init(){
   	isSet.instanceName=0;
   	  	
  };
  
  
  //copies another instance properties in this
  void Linux_SambaGuestAccountForGlobalInstance::init
   (const Linux_SambaGuestAccountForGlobalInstance& original){   	
   	init();
   	   	
    if(original.isInstanceNameSet()){
      setInstanceName(original.getInstanceName());
    }    
   }
  
  
  //reset the instance data
  void Linux_SambaGuestAccountForGlobalInstance::reset(){
   	
  	  
  };
  
  
  //*********************************************************
  //Linux_SambaGuestAccountForGlobalInstanceEnumerationElement	
  //*********************************************************
  
  Linux_SambaGuestAccountForGlobalInstanceEnumerationElement::
   Linux_SambaGuestAccountForGlobalInstanceEnumerationElement(){
   	
  	m_elementP=0;
  	m_nextP=0;
  	  
  };
  
  
  Linux_SambaGuestAccountForGlobalInstanceEnumerationElement::
   ~Linux_SambaGuestAccountForGlobalInstanceEnumerationElement(){
   	
  	if (m_elementP!=0)
  	  delete(m_elementP);
  	if (m_nextP!=0)
  	  delete(m_nextP);
  	  
  };

  
  //*********************************************************
  //Linux_SambaGuestAccountForGlobalInstanceNameEnumeration
  //*********************************************************

  Linux_SambaGuestAccountForGlobalInstanceEnumeration::
   Linux_SambaGuestAccountForGlobalInstanceEnumeration(){
   	
  	 firstElementP=0;
     currentElementP=0;
     endElementP=0;
  };
  
  Linux_SambaGuestAccountForGlobalInstanceEnumeration::
   Linux_SambaGuestAccountForGlobalInstanceEnumeration(
   const Linux_SambaGuestAccountForGlobalInstanceEnumeration& original){
   	
     firstElementP=0;
     currentElementP=0;
     endElementP=0;
  	 
     int size=original.getSize();
     for(int i=0;i<size;i++)
       addElement(original.getElement(i));           
  };
  
  	  
  Linux_SambaGuestAccountForGlobalInstanceEnumeration::
   ~Linux_SambaGuestAccountForGlobalInstanceEnumeration(){
   	
  	if (firstElementP!=0)
  	  delete(firstElementP);
  	  	
  };
  
  	  
  void Linux_SambaGuestAccountForGlobalInstanceEnumeration::reset(){
  	
  	currentElementP=firstElementP;
  };
  
  	  
  bool Linux_SambaGuestAccountForGlobalInstanceEnumeration::hasNext() const{
  	
  	return (currentElementP!=0);
  
  };
  
  int Linux_SambaGuestAccountForGlobalInstanceEnumeration::getSize() const{
  	
    int size=0;
    Linux_SambaGuestAccountForGlobalInstanceEnumerationElement* followingP=firstElementP;
  	
  	while(followingP!=0){
        followingP=followingP->m_nextP;
        size++;
    }
  	
    return size;
    
  };
  
  const Linux_SambaGuestAccountForGlobalInstance&  
   Linux_SambaGuestAccountForGlobalInstanceEnumeration::getElement(int pos) const{
   
    Linux_SambaGuestAccountForGlobalInstanceEnumerationElement* followingP=firstElementP;
   
    int i=0;
    while((followingP!=0)&&(i<pos)){
        followingP=followingP->m_nextP;
        i++;
    }
    
    return *(followingP->m_elementP);
  };
  
  	  
  const Linux_SambaGuestAccountForGlobalInstance&
   Linux_SambaGuestAccountForGlobalInstanceEnumeration::getNext() {
   	
  	 Linux_SambaGuestAccountForGlobalInstanceEnumerationElement* currentP=
  	  currentElementP;
  	 currentElementP=currentElementP->m_nextP;
  	 
  	 return *(currentP->m_elementP);
  };
  	  
  void Linux_SambaGuestAccountForGlobalInstanceEnumeration::addElement
   (const Linux_SambaGuestAccountForGlobalInstance& elementP){
   	
  	if(firstElementP==0){
  	  firstElementP=new Linux_SambaGuestAccountForGlobalInstanceEnumerationElement();
  	  firstElementP->m_elementP=new Linux_SambaGuestAccountForGlobalInstance(elementP);
  	  endElementP=firstElementP;
  	  currentElementP=firstElementP;
  	}else{
  	  endElementP->m_nextP=new Linux_SambaGuestAccountForGlobalInstanceEnumerationElement();
  	  endElementP=endElementP->m_nextP;
  	  endElementP->m_elementP=new Linux_SambaGuestAccountForGlobalInstance(elementP);
  	}
  };  
}
 
