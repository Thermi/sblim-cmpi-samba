/**
 *  Linux_SambaReadListForGlobalManualInstance.cpp
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


#include "Linux_SambaReadListForGlobalManualInstance.h"
#include "CmpiData.h"
#include "CmpiString.h"
#include "CmpiArray.h"
#include <string>

namespace genProvider {

  //*********************************************************
  //Linux_SambaReadListForGlobalManualInstance
  //*********************************************************

  //empty constructor
  Linux_SambaReadListForGlobalManualInstance::
   Linux_SambaReadListForGlobalManualInstance(){   	
   	init();  	   	
  };
  
  
  //copy constructor	
  Linux_SambaReadListForGlobalManualInstance::
   Linux_SambaReadListForGlobalManualInstance
   (const Linux_SambaReadListForGlobalManualInstance& original){   	
   	init(original);  	   	
  };
  
  
  //constructor using CmpiInstance
  Linux_SambaReadListForGlobalManualInstance::
   Linux_SambaReadListForGlobalManualInstance (const CmpiInstance& inst, const char* instanceNamespace){
    CmpiData cmpiData;
    init(); 
    
    CmpiObjectPath cop=inst.getObjectPath();
    cop.setNameSpace(instanceNamespace);
    setInstanceName(Linux_SambaReadListForGlobalInstanceName(cop));
    
  }
  
  
  //Destructor
  Linux_SambaReadListForGlobalManualInstance::
   ~Linux_SambaReadListForGlobalManualInstance(){
   	reset();  	  
  };
  
  
  //copy operator
  Linux_SambaReadListForGlobalManualInstance&
   Linux_SambaReadListForGlobalManualInstance::operator=
   (const Linux_SambaReadListForGlobalManualInstance& original){   	
   	init(original);
   	return *this;
  };
  
  
  //converts to CmpiInstance
  CmpiInstance Linux_SambaReadListForGlobalManualInstance::
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
  unsigned int Linux_SambaReadListForGlobalManualInstance::
   isInstanceNameSet() const{
  	return isSet.instanceName;
  }
  
  const Linux_SambaReadListForGlobalInstanceName&
    Linux_SambaReadListForGlobalManualInstance::getInstanceName() const{

    if(!isSet.instanceName)
   	  throw CmpiErrorFormater::getErrorException(
   	   CmpiErrorFormater::NOT_SET,
   	   "InstanceName not set in Linux_SambaReadListForGlobal instance");
  		
   	return m_instanceName;
  }

  void Linux_SambaReadListForGlobalManualInstance::setInstanceName(
   const Linux_SambaReadListForGlobalInstanceName& val){
    m_instanceName = val;
    isSet.instanceName=1;
  }


  
  //set isSet attributes to FALSE
  void Linux_SambaReadListForGlobalManualInstance::init(){
   	isSet.instanceName=0;
   	  	
  };
  
  
  //copies another instance properties in this
  void Linux_SambaReadListForGlobalManualInstance::init
   (const Linux_SambaReadListForGlobalManualInstance& original){   	
   	init();
   	   	
    if(original.isInstanceNameSet()){
      setInstanceName(original.getInstanceName());
    }    
   }
  
  
  //reset the instance data
  void Linux_SambaReadListForGlobalManualInstance::reset(){
   	
  	  
  };
  
  
  //*********************************************************
  //Linux_SambaReadListForGlobalManualInstanceEnumerationElement	
  //*********************************************************
  
  Linux_SambaReadListForGlobalManualInstanceEnumerationElement::
   Linux_SambaReadListForGlobalManualInstanceEnumerationElement(){
   	
  	m_elementP=0;
  	m_nextP=0;
  	  
  };
  
  
  Linux_SambaReadListForGlobalManualInstanceEnumerationElement::
   ~Linux_SambaReadListForGlobalManualInstanceEnumerationElement(){
   	
  	if (m_elementP!=0)
  	  delete(m_elementP);
  	if (m_nextP!=0)
  	  delete(m_nextP);
  	  
  };

  
  //*********************************************************
  //Linux_SambaReadListForGlobalManualInstanceNameEnumeration
  //*********************************************************

  Linux_SambaReadListForGlobalManualInstanceEnumeration::
   Linux_SambaReadListForGlobalManualInstanceEnumeration(){
   	
  	 firstElementP=0;
     currentElementP=0;
     endElementP=0;
  };
  
  Linux_SambaReadListForGlobalManualInstanceEnumeration::
   Linux_SambaReadListForGlobalManualInstanceEnumeration(
   const Linux_SambaReadListForGlobalManualInstanceEnumeration& original){
   	
     firstElementP=0;
     currentElementP=0;
     endElementP=0;
  	 
     int size=original.getSize();
     for(int i=0;i<size;i++)
       addElement(original.getElement(i));           
  };
  
  	  
  Linux_SambaReadListForGlobalManualInstanceEnumeration::
   ~Linux_SambaReadListForGlobalManualInstanceEnumeration(){
   	
  	if (firstElementP!=0)
  	  delete(firstElementP);
  	  	
  };
  
  	  
  void Linux_SambaReadListForGlobalManualInstanceEnumeration::reset(){
  	
  	currentElementP=firstElementP;
  };
  
  	  
  bool Linux_SambaReadListForGlobalManualInstanceEnumeration::hasNext() const{
  	
  	return (currentElementP!=0);
  
  };
  
  int Linux_SambaReadListForGlobalManualInstanceEnumeration::getSize() const{
  	
    int size=0;
    Linux_SambaReadListForGlobalManualInstanceEnumerationElement* followingP=firstElementP;
  	
  	while(followingP!=0){
        followingP=followingP->m_nextP;
        size++;
    }
  	
    return size;
    
  };
  
  const Linux_SambaReadListForGlobalManualInstance&  
   Linux_SambaReadListForGlobalManualInstanceEnumeration::getElement(int pos) const{
   
    Linux_SambaReadListForGlobalManualInstanceEnumerationElement* followingP=firstElementP;
   
    int i=0;
    while((followingP!=0)&&(i<pos)){
        followingP=followingP->m_nextP;
        i++;
    }
    
    return *(followingP->m_elementP);
  };
  
  	  
  const Linux_SambaReadListForGlobalManualInstance&
   Linux_SambaReadListForGlobalManualInstanceEnumeration::getNext() {
   	
  	 Linux_SambaReadListForGlobalManualInstanceEnumerationElement* currentP=
  	  currentElementP;
  	 currentElementP=currentElementP->m_nextP;
  	 
  	 return *(currentP->m_elementP);
  };
  	  
  void Linux_SambaReadListForGlobalManualInstanceEnumeration::addElement
   (const Linux_SambaReadListForGlobalManualInstance& elementP){
   	
  	if(firstElementP==0){
  	  firstElementP=new Linux_SambaReadListForGlobalManualInstanceEnumerationElement();
  	  firstElementP->m_elementP=new Linux_SambaReadListForGlobalManualInstance(elementP);
  	  endElementP=firstElementP;
  	  currentElementP=firstElementP;
  	}else{
  	  endElementP->m_nextP=new Linux_SambaReadListForGlobalManualInstanceEnumerationElement();
  	  endElementP=endElementP->m_nextP;
  	  endElementP->m_elementP=new Linux_SambaReadListForGlobalManualInstance(elementP);
  	}
  };  
}
 
