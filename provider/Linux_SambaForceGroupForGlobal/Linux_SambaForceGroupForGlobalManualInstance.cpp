/**
 *  Linux_SambaForceGroupForGlobalManualInstance.cpp
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


#include "Linux_SambaForceGroupForGlobalManualInstance.h"
#include "CmpiData.h"
#include "CmpiString.h"
#include "CmpiArray.h"
#include <string>

namespace genProvider {

  //*********************************************************
  //Linux_SambaForceGroupForGlobalManualInstance
  //*********************************************************

  //empty constructor
  Linux_SambaForceGroupForGlobalManualInstance::
   Linux_SambaForceGroupForGlobalManualInstance(){   	
   	init();  	   	
  };
  
  
  //copy constructor	
  Linux_SambaForceGroupForGlobalManualInstance::
   Linux_SambaForceGroupForGlobalManualInstance
   (const Linux_SambaForceGroupForGlobalManualInstance& original){   	
   	init(original);  	   	
  };
  
  
  //constructor using CmpiInstance
  Linux_SambaForceGroupForGlobalManualInstance::
   Linux_SambaForceGroupForGlobalManualInstance (const CmpiInstance& inst, const char* instanceNamespace){
    CmpiData cmpiData;
    init(); 
    
    CmpiObjectPath cop=inst.getObjectPath();
    cop.setNameSpace(instanceNamespace);
    setInstanceName(Linux_SambaForceGroupForGlobalInstanceName(cop));
    
  }
  
  
  //Destructor
  Linux_SambaForceGroupForGlobalManualInstance::
   ~Linux_SambaForceGroupForGlobalManualInstance(){
   	reset();  	  
  };
  
  
  //copy operator
  Linux_SambaForceGroupForGlobalManualInstance&
   Linux_SambaForceGroupForGlobalManualInstance::operator=
   (const Linux_SambaForceGroupForGlobalManualInstance& original){   	
   	init(original);
   	return *this;
  };
  
  
  //converts to CmpiInstance
  CmpiInstance Linux_SambaForceGroupForGlobalManualInstance::
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
  unsigned int Linux_SambaForceGroupForGlobalManualInstance::
   isInstanceNameSet() const{
  	return isSet.instanceName;
  }
  
  const Linux_SambaForceGroupForGlobalInstanceName&
    Linux_SambaForceGroupForGlobalManualInstance::getInstanceName() const{

    if(!isSet.instanceName)
   	  throw CmpiErrorFormater::getErrorException(
   	   CmpiErrorFormater::NOT_SET,
   	   "InstanceName not set in Linux_SambaForceGroupForGlobal instance");
  		
   	return m_instanceName;
  }

  void Linux_SambaForceGroupForGlobalManualInstance::setInstanceName(
   const Linux_SambaForceGroupForGlobalInstanceName& val){
    m_instanceName = val;
    isSet.instanceName=1;
  }


  
  //set isSet attributes to FALSE
  void Linux_SambaForceGroupForGlobalManualInstance::init(){
   	isSet.instanceName=0;
   	  	
  };
  
  
  //copies another instance properties in this
  void Linux_SambaForceGroupForGlobalManualInstance::init
   (const Linux_SambaForceGroupForGlobalManualInstance& original){   	
   	init();
   	   	
    if(original.isInstanceNameSet()){
      setInstanceName(original.getInstanceName());
    }    
   }
  
  
  //reset the instance data
  void Linux_SambaForceGroupForGlobalManualInstance::reset(){
   	
  	  
  };
  
  
  //*********************************************************
  //Linux_SambaForceGroupForGlobalManualInstanceEnumerationElement	
  //*********************************************************
  
  Linux_SambaForceGroupForGlobalManualInstanceEnumerationElement::
   Linux_SambaForceGroupForGlobalManualInstanceEnumerationElement(){
   	
  	m_elementP=0;
  	m_nextP=0;
  	  
  };
  
  
  Linux_SambaForceGroupForGlobalManualInstanceEnumerationElement::
   ~Linux_SambaForceGroupForGlobalManualInstanceEnumerationElement(){
   	
  	if (m_elementP!=0)
  	  delete(m_elementP);
  	if (m_nextP!=0)
  	  delete(m_nextP);
  	  
  };

  
  //*********************************************************
  //Linux_SambaForceGroupForGlobalManualInstanceNameEnumeration
  //*********************************************************

  Linux_SambaForceGroupForGlobalManualInstanceEnumeration::
   Linux_SambaForceGroupForGlobalManualInstanceEnumeration(){
   	
  	 firstElementP=0;
     currentElementP=0;
     endElementP=0;
  };
  
  Linux_SambaForceGroupForGlobalManualInstanceEnumeration::
   Linux_SambaForceGroupForGlobalManualInstanceEnumeration(
   const Linux_SambaForceGroupForGlobalManualInstanceEnumeration& original){
   	
     firstElementP=0;
     currentElementP=0;
     endElementP=0;
  	 
     int size=original.getSize();
     for(int i=0;i<size;i++)
       addElement(original.getElement(i));           
  };
  
  	  
  Linux_SambaForceGroupForGlobalManualInstanceEnumeration::
   ~Linux_SambaForceGroupForGlobalManualInstanceEnumeration(){
   	
  	if (firstElementP!=0)
  	  delete(firstElementP);
  	  	
  };
  
  	  
  void Linux_SambaForceGroupForGlobalManualInstanceEnumeration::reset(){
  	
  	currentElementP=firstElementP;
  };
  
  	  
  bool Linux_SambaForceGroupForGlobalManualInstanceEnumeration::hasNext() const{
  	
  	return (currentElementP!=0);
  
  };
  
  int Linux_SambaForceGroupForGlobalManualInstanceEnumeration::getSize() const{
  	
    int size=0;
    Linux_SambaForceGroupForGlobalManualInstanceEnumerationElement* followingP=firstElementP;
  	
  	while(followingP!=0){
        followingP=followingP->m_nextP;
        size++;
    }
  	
    return size;
    
  };
  
  const Linux_SambaForceGroupForGlobalManualInstance&  
   Linux_SambaForceGroupForGlobalManualInstanceEnumeration::getElement(int pos) const{
   
    Linux_SambaForceGroupForGlobalManualInstanceEnumerationElement* followingP=firstElementP;
   
    int i=0;
    while((followingP!=0)&&(i<pos)){
        followingP=followingP->m_nextP;
        i++;
    }
    
    return *(followingP->m_elementP);
  };
  
  	  
  const Linux_SambaForceGroupForGlobalManualInstance&
   Linux_SambaForceGroupForGlobalManualInstanceEnumeration::getNext() {
   	
  	 Linux_SambaForceGroupForGlobalManualInstanceEnumerationElement* currentP=
  	  currentElementP;
  	 currentElementP=currentElementP->m_nextP;
  	 
  	 return *(currentP->m_elementP);
  };
  	  
  void Linux_SambaForceGroupForGlobalManualInstanceEnumeration::addElement
   (const Linux_SambaForceGroupForGlobalManualInstance& elementP){
   	
  	if(firstElementP==0){
  	  firstElementP=new Linux_SambaForceGroupForGlobalManualInstanceEnumerationElement();
  	  firstElementP->m_elementP=new Linux_SambaForceGroupForGlobalManualInstance(elementP);
  	  endElementP=firstElementP;
  	  currentElementP=firstElementP;
  	}else{
  	  endElementP->m_nextP=new Linux_SambaForceGroupForGlobalManualInstanceEnumerationElement();
  	  endElementP=endElementP->m_nextP;
  	  endElementP->m_elementP=new Linux_SambaForceGroupForGlobalManualInstance(elementP);
  	}
  };  
}
 
