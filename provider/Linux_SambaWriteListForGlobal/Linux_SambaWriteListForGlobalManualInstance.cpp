/**
 *  Linux_SambaWriteListForGlobalManualInstance.cpp
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


#include "Linux_SambaWriteListForGlobalManualInstance.h"
#include "CmpiData.h"
#include "CmpiString.h"
#include "CmpiArray.h"
#include <string>

namespace genProvider {

  //*********************************************************
  //Linux_SambaWriteListForGlobalManualInstance
  //*********************************************************

  //empty constructor
  Linux_SambaWriteListForGlobalManualInstance::
   Linux_SambaWriteListForGlobalManualInstance(){   	
   	init();  	   	
  };
  
  
  //copy constructor	
  Linux_SambaWriteListForGlobalManualInstance::
   Linux_SambaWriteListForGlobalManualInstance
   (const Linux_SambaWriteListForGlobalManualInstance& original){   	
   	init(original);  	   	
  };
  
  
  //constructor using CmpiInstance
  Linux_SambaWriteListForGlobalManualInstance::
   Linux_SambaWriteListForGlobalManualInstance (const CmpiInstance& inst, const char* instanceNamespace){
    CmpiData cmpiData;
    init(); 
    
    CmpiObjectPath cop=inst.getObjectPath();
    cop.setNameSpace(instanceNamespace);
    setInstanceName(Linux_SambaWriteListForGlobalInstanceName(cop));
    
  }
  
  
  //Destructor
  Linux_SambaWriteListForGlobalManualInstance::
   ~Linux_SambaWriteListForGlobalManualInstance(){
   	reset();  	  
  };
  
  
  //copy operator
  Linux_SambaWriteListForGlobalManualInstance&
   Linux_SambaWriteListForGlobalManualInstance::operator=
   (const Linux_SambaWriteListForGlobalManualInstance& original){   	
   	init(original);
   	return *this;
  };
  
  
  //converts to CmpiInstance
  CmpiInstance Linux_SambaWriteListForGlobalManualInstance::
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
  unsigned int Linux_SambaWriteListForGlobalManualInstance::
   isInstanceNameSet() const{
  	return isSet.instanceName;
  }
  
  const Linux_SambaWriteListForGlobalInstanceName&
    Linux_SambaWriteListForGlobalManualInstance::getInstanceName() const{

    if(!isSet.instanceName)
   	  throw CmpiErrorFormater::getErrorException(
   	   CmpiErrorFormater::NOT_SET,
   	   "InstanceName not set in Linux_SambaWriteListForGlobal instance");
  		
   	return m_instanceName;
  }

  void Linux_SambaWriteListForGlobalManualInstance::setInstanceName(
   const Linux_SambaWriteListForGlobalInstanceName& val){
    m_instanceName = val;
    isSet.instanceName=1;
  }


  
  //set isSet attributes to FALSE
  void Linux_SambaWriteListForGlobalManualInstance::init(){
   	isSet.instanceName=0;
   	  	
  };
  
  
  //copies another instance properties in this
  void Linux_SambaWriteListForGlobalManualInstance::init
   (const Linux_SambaWriteListForGlobalManualInstance& original){   	
   	init();
   	   	
    if(original.isInstanceNameSet()){
      setInstanceName(original.getInstanceName());
    }    
   }
  
  
  //reset the instance data
  void Linux_SambaWriteListForGlobalManualInstance::reset(){
   	
  	  
  };
  
  
  //*********************************************************
  //Linux_SambaWriteListForGlobalManualInstanceEnumerationElement	
  //*********************************************************
  
  Linux_SambaWriteListForGlobalManualInstanceEnumerationElement::
   Linux_SambaWriteListForGlobalManualInstanceEnumerationElement(){
   	
  	m_elementP=0;
  	m_nextP=0;
  	  
  };
  
  
  Linux_SambaWriteListForGlobalManualInstanceEnumerationElement::
   ~Linux_SambaWriteListForGlobalManualInstanceEnumerationElement(){
   	
  	if (m_elementP!=0)
  	  delete(m_elementP);
  	if (m_nextP!=0)
  	  delete(m_nextP);
  	  
  };

  
  //*********************************************************
  //Linux_SambaWriteListForGlobalManualInstanceNameEnumeration
  //*********************************************************

  Linux_SambaWriteListForGlobalManualInstanceEnumeration::
   Linux_SambaWriteListForGlobalManualInstanceEnumeration(){
   	
  	 firstElementP=0;
     currentElementP=0;
     endElementP=0;
  };
  
  Linux_SambaWriteListForGlobalManualInstanceEnumeration::
   Linux_SambaWriteListForGlobalManualInstanceEnumeration(
   const Linux_SambaWriteListForGlobalManualInstanceEnumeration& original){
   	
     firstElementP=0;
     currentElementP=0;
     endElementP=0;
  	 
     int size=original.getSize();
     for(int i=0;i<size;i++)
       addElement(original.getElement(i));           
  };
  
  	  
  Linux_SambaWriteListForGlobalManualInstanceEnumeration::
   ~Linux_SambaWriteListForGlobalManualInstanceEnumeration(){
   	
  	if (firstElementP!=0)
  	  delete(firstElementP);
  	  	
  };
  
  	  
  void Linux_SambaWriteListForGlobalManualInstanceEnumeration::reset(){
  	
  	currentElementP=firstElementP;
  };
  
  	  
  bool Linux_SambaWriteListForGlobalManualInstanceEnumeration::hasNext() const{
  	
  	return (currentElementP!=0);
  
  };
  
  int Linux_SambaWriteListForGlobalManualInstanceEnumeration::getSize() const{
  	
    int size=0;
    Linux_SambaWriteListForGlobalManualInstanceEnumerationElement* followingP=firstElementP;
  	
  	while(followingP!=0){
        followingP=followingP->m_nextP;
        size++;
    }
  	
    return size;
    
  };
  
  const Linux_SambaWriteListForGlobalManualInstance&  
   Linux_SambaWriteListForGlobalManualInstanceEnumeration::getElement(int pos) const{
   
    Linux_SambaWriteListForGlobalManualInstanceEnumerationElement* followingP=firstElementP;
   
    int i=0;
    while((followingP!=0)&&(i<pos)){
        followingP=followingP->m_nextP;
        i++;
    }
    
    return *(followingP->m_elementP);
  };
  
  	  
  const Linux_SambaWriteListForGlobalManualInstance&
   Linux_SambaWriteListForGlobalManualInstanceEnumeration::getNext() {
   	
  	 Linux_SambaWriteListForGlobalManualInstanceEnumerationElement* currentP=
  	  currentElementP;
  	 currentElementP=currentElementP->m_nextP;
  	 
  	 return *(currentP->m_elementP);
  };
  	  
  void Linux_SambaWriteListForGlobalManualInstanceEnumeration::addElement
   (const Linux_SambaWriteListForGlobalManualInstance& elementP){
   	
  	if(firstElementP==0){
  	  firstElementP=new Linux_SambaWriteListForGlobalManualInstanceEnumerationElement();
  	  firstElementP->m_elementP=new Linux_SambaWriteListForGlobalManualInstance(elementP);
  	  endElementP=firstElementP;
  	  currentElementP=firstElementP;
  	}else{
  	  endElementP->m_nextP=new Linux_SambaWriteListForGlobalManualInstanceEnumerationElement();
  	  endElementP=endElementP->m_nextP;
  	  endElementP->m_elementP=new Linux_SambaWriteListForGlobalManualInstance(elementP);
  	}
  };  
}
 