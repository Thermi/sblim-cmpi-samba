/**
 *  Linux_SambaForceUserForGlobalManualInstance.cpp
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


#include "Linux_SambaForceUserForGlobalManualInstance.h"
#include "CmpiData.h"
#include "CmpiString.h"
#include "CmpiArray.h"
#include <string>

namespace genProvider {

  //*********************************************************
  //Linux_SambaForceUserForGlobalManualInstance
  //*********************************************************

  //empty constructor
  Linux_SambaForceUserForGlobalManualInstance::
   Linux_SambaForceUserForGlobalManualInstance(){   	
   	init();  	   	
  };
  
  
  //copy constructor	
  Linux_SambaForceUserForGlobalManualInstance::
   Linux_SambaForceUserForGlobalManualInstance
   (const Linux_SambaForceUserForGlobalManualInstance& original){   	
   	init(original);  	   	
  };
  
  
  //constructor using CmpiInstance
  Linux_SambaForceUserForGlobalManualInstance::
   Linux_SambaForceUserForGlobalManualInstance (const CmpiInstance& inst, const char* instanceNamespace){
    CmpiData cmpiData;
    init(); 
    
    CmpiObjectPath cop=inst.getObjectPath();
    cop.setNameSpace(instanceNamespace);
    setInstanceName(Linux_SambaForceUserForGlobalInstanceName(cop));
    
  }
  
  
  //Destructor
  Linux_SambaForceUserForGlobalManualInstance::
   ~Linux_SambaForceUserForGlobalManualInstance(){
   	reset();  	  
  };
  
  
  //copy operator
  Linux_SambaForceUserForGlobalManualInstance&
   Linux_SambaForceUserForGlobalManualInstance::operator=
   (const Linux_SambaForceUserForGlobalManualInstance& original){   	
   	init(original);
   	return *this;
  };
  
  
  //converts to CmpiInstance
  CmpiInstance Linux_SambaForceUserForGlobalManualInstance::
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
  unsigned int Linux_SambaForceUserForGlobalManualInstance::
   isInstanceNameSet() const{
  	return isSet.instanceName;
  }
  
  const Linux_SambaForceUserForGlobalInstanceName&
    Linux_SambaForceUserForGlobalManualInstance::getInstanceName() const{

    if(!isSet.instanceName)
   	  throw CmpiErrorFormater::getErrorException(
   	   CmpiErrorFormater::NOT_SET,
   	   "InstanceName not set in Linux_SambaForceUserForGlobal instance");
  		
   	return m_instanceName;
  }

  void Linux_SambaForceUserForGlobalManualInstance::setInstanceName(
   const Linux_SambaForceUserForGlobalInstanceName& val){
    m_instanceName = val;
    isSet.instanceName=1;
  }


  
  //set isSet attributes to FALSE
  void Linux_SambaForceUserForGlobalManualInstance::init(){
   	isSet.instanceName=0;
   	  	
  };
  
  
  //copies another instance properties in this
  void Linux_SambaForceUserForGlobalManualInstance::init
   (const Linux_SambaForceUserForGlobalManualInstance& original){   	
   	init();
   	   	
    if(original.isInstanceNameSet()){
      setInstanceName(original.getInstanceName());
    }    
   }
  
  
  //reset the instance data
  void Linux_SambaForceUserForGlobalManualInstance::reset(){
   	
  	  
  };
  
  
  //*********************************************************
  //Linux_SambaForceUserForGlobalManualInstanceEnumerationElement	
  //*********************************************************
  
  Linux_SambaForceUserForGlobalManualInstanceEnumerationElement::
   Linux_SambaForceUserForGlobalManualInstanceEnumerationElement(){
   	
  	m_elementP=0;
  	m_nextP=0;
  	  
  };
  
  
  Linux_SambaForceUserForGlobalManualInstanceEnumerationElement::
   ~Linux_SambaForceUserForGlobalManualInstanceEnumerationElement(){
   	
  	if (m_elementP!=0)
  	  delete(m_elementP);
  	if (m_nextP!=0)
  	  delete(m_nextP);
  	  
  };

  
  //*********************************************************
  //Linux_SambaForceUserForGlobalManualInstanceNameEnumeration
  //*********************************************************

  Linux_SambaForceUserForGlobalManualInstanceEnumeration::
   Linux_SambaForceUserForGlobalManualInstanceEnumeration(){
   	
  	 firstElementP=0;
     currentElementP=0;
     endElementP=0;
  };
  
  Linux_SambaForceUserForGlobalManualInstanceEnumeration::
   Linux_SambaForceUserForGlobalManualInstanceEnumeration(
   const Linux_SambaForceUserForGlobalManualInstanceEnumeration& original){
   	
     firstElementP=0;
     currentElementP=0;
     endElementP=0;
  	 
     int size=original.getSize();
     for(int i=0;i<size;i++)
       addElement(original.getElement(i));           
  };
  
  	  
  Linux_SambaForceUserForGlobalManualInstanceEnumeration::
   ~Linux_SambaForceUserForGlobalManualInstanceEnumeration(){
   	
  	if (firstElementP!=0)
  	  delete(firstElementP);
  	  	
  };
  
  	  
  void Linux_SambaForceUserForGlobalManualInstanceEnumeration::reset(){
  	
  	currentElementP=firstElementP;
  };
  
  	  
  bool Linux_SambaForceUserForGlobalManualInstanceEnumeration::hasNext() const{
  	
  	return (currentElementP!=0);
  
  };
  
  int Linux_SambaForceUserForGlobalManualInstanceEnumeration::getSize() const{
  	
    int size=0;
    Linux_SambaForceUserForGlobalManualInstanceEnumerationElement* followingP=firstElementP;
  	
  	while(followingP!=0){
        followingP=followingP->m_nextP;
        size++;
    }
  	
    return size;
    
  };
  
  const Linux_SambaForceUserForGlobalManualInstance&  
   Linux_SambaForceUserForGlobalManualInstanceEnumeration::getElement(int pos) const{
   
    Linux_SambaForceUserForGlobalManualInstanceEnumerationElement* followingP=firstElementP;
   
    int i=0;
    while((followingP!=0)&&(i<pos)){
        followingP=followingP->m_nextP;
        i++;
    }
    
    return *(followingP->m_elementP);
  };
  
  	  
  const Linux_SambaForceUserForGlobalManualInstance&
   Linux_SambaForceUserForGlobalManualInstanceEnumeration::getNext() {
   	
  	 Linux_SambaForceUserForGlobalManualInstanceEnumerationElement* currentP=
  	  currentElementP;
  	 currentElementP=currentElementP->m_nextP;
  	 
  	 return *(currentP->m_elementP);
  };
  	  
  void Linux_SambaForceUserForGlobalManualInstanceEnumeration::addElement
   (const Linux_SambaForceUserForGlobalManualInstance& elementP){
   	
  	if(firstElementP==0){
  	  firstElementP=new Linux_SambaForceUserForGlobalManualInstanceEnumerationElement();
  	  firstElementP->m_elementP=new Linux_SambaForceUserForGlobalManualInstance(elementP);
  	  endElementP=firstElementP;
  	  currentElementP=firstElementP;
  	}else{
  	  endElementP->m_nextP=new Linux_SambaForceUserForGlobalManualInstanceEnumerationElement();
  	  endElementP=endElementP->m_nextP;
  	  endElementP->m_elementP=new Linux_SambaForceUserForGlobalManualInstance(elementP);
  	}
  };  
}
 
