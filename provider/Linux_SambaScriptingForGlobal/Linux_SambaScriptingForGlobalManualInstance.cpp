/**
 *  Linux_SambaScriptingForGlobalManualInstance.cpp
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


#include "Linux_SambaScriptingForGlobalManualInstance.h"
#include "CmpiData.h"
#include "CmpiString.h"
#include "CmpiArray.h"
#include <string>

namespace genProvider {

  //*********************************************************
  //Linux_SambaScriptingForGlobalManualInstance
  //*********************************************************

  //empty constructor
  Linux_SambaScriptingForGlobalManualInstance::
   Linux_SambaScriptingForGlobalManualInstance(){   	
   	init();  	   	
  };
  
  
  //copy constructor	
  Linux_SambaScriptingForGlobalManualInstance::
   Linux_SambaScriptingForGlobalManualInstance
   (const Linux_SambaScriptingForGlobalManualInstance& original){   	
   	init(original);  	   	
  };
  
  
  //constructor using CmpiInstance
  Linux_SambaScriptingForGlobalManualInstance::
   Linux_SambaScriptingForGlobalManualInstance (const CmpiInstance& inst, const char* instanceNamespace){
    CmpiData cmpiData;
    init(); 
    
    CmpiObjectPath cop=inst.getObjectPath();
    cop.setNameSpace(instanceNamespace);
    setInstanceName(Linux_SambaScriptingForGlobalInstanceName(cop));
    
  }
  
  
  //Destructor
  Linux_SambaScriptingForGlobalManualInstance::
   ~Linux_SambaScriptingForGlobalManualInstance(){
   	reset();  	  
  };
  
  
  //copy operator
  Linux_SambaScriptingForGlobalManualInstance&
   Linux_SambaScriptingForGlobalManualInstance::operator=
   (const Linux_SambaScriptingForGlobalManualInstance& original){   	
   	init(original);
   	return *this;
  };
  
  
  //converts to CmpiInstance
  CmpiInstance Linux_SambaScriptingForGlobalManualInstance::
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
  unsigned int Linux_SambaScriptingForGlobalManualInstance::
   isInstanceNameSet() const{
  	return isSet.instanceName;
  }
  
  const Linux_SambaScriptingForGlobalInstanceName&
    Linux_SambaScriptingForGlobalManualInstance::getInstanceName() const{

    if(!isSet.instanceName)
   	  throw CmpiErrorFormater::getErrorException(
   	   CmpiErrorFormater::NOT_SET,
   	   "InstanceName not set in Linux_SambaScriptingForGlobal instance");
  		
   	return m_instanceName;
  }

  void Linux_SambaScriptingForGlobalManualInstance::setInstanceName(
   const Linux_SambaScriptingForGlobalInstanceName& val){
    m_instanceName = val;
    isSet.instanceName=1;
  }


  
  //set isSet attributes to FALSE
  void Linux_SambaScriptingForGlobalManualInstance::init(){
   	isSet.instanceName=0;
   	  	
  };
  
  
  //copies another instance properties in this
  void Linux_SambaScriptingForGlobalManualInstance::init
   (const Linux_SambaScriptingForGlobalManualInstance& original){   	
   	init();
   	   	
    if(original.isInstanceNameSet()){
      setInstanceName(original.getInstanceName());
    }    
   }
  
  
  //reset the instance data
  void Linux_SambaScriptingForGlobalManualInstance::reset(){
   	
  	  
  };
  
  
  //*********************************************************
  //Linux_SambaScriptingForGlobalManualInstanceEnumerationElement	
  //*********************************************************
  
  Linux_SambaScriptingForGlobalManualInstanceEnumerationElement::
   Linux_SambaScriptingForGlobalManualInstanceEnumerationElement(){
   	
  	m_elementP=0;
  	m_nextP=0;
  	  
  };
  
  
  Linux_SambaScriptingForGlobalManualInstanceEnumerationElement::
   ~Linux_SambaScriptingForGlobalManualInstanceEnumerationElement(){
   	
  	if (m_elementP!=0)
  	  delete(m_elementP);
  	if (m_nextP!=0)
  	  delete(m_nextP);
  	  
  };

  
  //*********************************************************
  //Linux_SambaScriptingForGlobalManualInstanceNameEnumeration
  //*********************************************************

  Linux_SambaScriptingForGlobalManualInstanceEnumeration::
   Linux_SambaScriptingForGlobalManualInstanceEnumeration(){
   	
  	 firstElementP=0;
     currentElementP=0;
     endElementP=0;
  };
  
  Linux_SambaScriptingForGlobalManualInstanceEnumeration::
   Linux_SambaScriptingForGlobalManualInstanceEnumeration(
   const Linux_SambaScriptingForGlobalManualInstanceEnumeration& original){
   	
     firstElementP=0;
     currentElementP=0;
     endElementP=0;
  	 
     int size=original.getSize();
     for(int i=0;i<size;i++)
       addElement(original.getElement(i));           
  };
  
  	  
  Linux_SambaScriptingForGlobalManualInstanceEnumeration::
   ~Linux_SambaScriptingForGlobalManualInstanceEnumeration(){
   	
  	if (firstElementP!=0)
  	  delete(firstElementP);
  	  	
  };
  
  	  
  void Linux_SambaScriptingForGlobalManualInstanceEnumeration::reset(){
  	
  	currentElementP=firstElementP;
  };
  
  	  
  bool Linux_SambaScriptingForGlobalManualInstanceEnumeration::hasNext() const{
  	
  	return (currentElementP!=0);
  
  };
  
  int Linux_SambaScriptingForGlobalManualInstanceEnumeration::getSize() const{
  	
    int size=0;
    Linux_SambaScriptingForGlobalManualInstanceEnumerationElement* followingP=firstElementP;
  	
  	while(followingP!=0){
        followingP=followingP->m_nextP;
        size++;
    }
  	
    return size;
    
  };
  
  const Linux_SambaScriptingForGlobalManualInstance&  
   Linux_SambaScriptingForGlobalManualInstanceEnumeration::getElement(int pos) const{
   
    Linux_SambaScriptingForGlobalManualInstanceEnumerationElement* followingP=firstElementP;
   
    int i=0;
    while((followingP!=0)&&(i<pos)){
        followingP=followingP->m_nextP;
        i++;
    }
    
    return *(followingP->m_elementP);
  };
  
  	  
  const Linux_SambaScriptingForGlobalManualInstance&
   Linux_SambaScriptingForGlobalManualInstanceEnumeration::getNext() {
   	
  	 Linux_SambaScriptingForGlobalManualInstanceEnumerationElement* currentP=
  	  currentElementP;
  	 currentElementP=currentElementP->m_nextP;
  	 
  	 return *(currentP->m_elementP);
  };
  	  
  void Linux_SambaScriptingForGlobalManualInstanceEnumeration::addElement
   (const Linux_SambaScriptingForGlobalManualInstance& elementP){
   	
  	if(firstElementP==0){
  	  firstElementP=new Linux_SambaScriptingForGlobalManualInstanceEnumerationElement();
  	  firstElementP->m_elementP=new Linux_SambaScriptingForGlobalManualInstance(elementP);
  	  endElementP=firstElementP;
  	  currentElementP=firstElementP;
  	}else{
  	  endElementP->m_nextP=new Linux_SambaScriptingForGlobalManualInstanceEnumerationElement();
  	  endElementP=endElementP->m_nextP;
  	  endElementP->m_elementP=new Linux_SambaScriptingForGlobalManualInstance(elementP);
  	}
  };  
}
 
