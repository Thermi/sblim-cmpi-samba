/**
 *  Linux_SambaForceGroupForGlobalInstance.cpp
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


#include "Linux_SambaForceGroupForGlobalInstance.h"
#include "CmpiData.h"
#include "CmpiString.h"
#include "CmpiArray.h"
#include <string>

namespace genProvider {

  //*********************************************************
  //Linux_SambaForceGroupForGlobalInstance
  //*********************************************************

  //empty constructor
  Linux_SambaForceGroupForGlobalInstance::
   Linux_SambaForceGroupForGlobalInstance(){   	
   	init();  	   	
  };
  
  
  //copy constructor	
  Linux_SambaForceGroupForGlobalInstance::
   Linux_SambaForceGroupForGlobalInstance
   (const Linux_SambaForceGroupForGlobalInstance& original){   	
   	init(original);  	   	
  };
  
  
  //constructor using CmpiInstance
  Linux_SambaForceGroupForGlobalInstance::
   Linux_SambaForceGroupForGlobalInstance (const CmpiInstance& inst, const char* instanceNamespace){
    CmpiData cmpiData;
    init(); 
    
    CmpiObjectPath cop=inst.getObjectPath();
    cop.setNameSpace(instanceNamespace);
    setInstanceName(Linux_SambaForceGroupForGlobalInstanceName(cop));
    
  }
  
  
  //Destructor
  Linux_SambaForceGroupForGlobalInstance::
   ~Linux_SambaForceGroupForGlobalInstance(){
   	reset();  	  
  };
  
  
  //copy operator
  Linux_SambaForceGroupForGlobalInstance&
   Linux_SambaForceGroupForGlobalInstance::operator=
   (const Linux_SambaForceGroupForGlobalInstance& original){   	
   	init(original);
   	return *this;
  };
  
  
  //converts to CmpiInstance
  CmpiInstance Linux_SambaForceGroupForGlobalInstance::
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
  unsigned int Linux_SambaForceGroupForGlobalInstance::
   isInstanceNameSet() const{
  	return isSet.instanceName;
  }
  
  const Linux_SambaForceGroupForGlobalInstanceName&
    Linux_SambaForceGroupForGlobalInstance::getInstanceName() const{

    if(!isSet.instanceName)
   	  throw CmpiErrorFormater::getErrorException(
   	   CmpiErrorFormater::NOT_SET,
   	   "InstanceName not set in Linux_SambaForceGroupForGlobal instance");
  		
   	return m_instanceName;
  }

  void Linux_SambaForceGroupForGlobalInstance::setInstanceName(
   const Linux_SambaForceGroupForGlobalInstanceName& val){
    m_instanceName = val;
    isSet.instanceName=1;
  }


  
  //set isSet attributes to FALSE
  void Linux_SambaForceGroupForGlobalInstance::init(){
   	isSet.instanceName=0;
   	  	
  };
  
  
  //copies another instance properties in this
  void Linux_SambaForceGroupForGlobalInstance::init
   (const Linux_SambaForceGroupForGlobalInstance& original){   	
   	init();
   	   	
    if(original.isInstanceNameSet()){
      setInstanceName(original.getInstanceName());
    }    
   }
  
  
  //reset the instance data
  void Linux_SambaForceGroupForGlobalInstance::reset(){
   	
  	  
  };
  
  
  //*********************************************************
  //Linux_SambaForceGroupForGlobalInstanceEnumerationElement	
  //*********************************************************
  
  Linux_SambaForceGroupForGlobalInstanceEnumerationElement::
   Linux_SambaForceGroupForGlobalInstanceEnumerationElement(){
   	
  	m_elementP=0;
  	m_nextP=0;
  	  
  };
  
  
  Linux_SambaForceGroupForGlobalInstanceEnumerationElement::
   ~Linux_SambaForceGroupForGlobalInstanceEnumerationElement(){
   	
  	if (m_elementP!=0)
  	  delete(m_elementP);
  	if (m_nextP!=0)
  	  delete(m_nextP);
  	  
  };

  
  //*********************************************************
  //Linux_SambaForceGroupForGlobalInstanceNameEnumeration
  //*********************************************************

  Linux_SambaForceGroupForGlobalInstanceEnumeration::
   Linux_SambaForceGroupForGlobalInstanceEnumeration(){
   	
  	 firstElementP=0;
     currentElementP=0;
     endElementP=0;
  };
  
  Linux_SambaForceGroupForGlobalInstanceEnumeration::
   Linux_SambaForceGroupForGlobalInstanceEnumeration(
   const Linux_SambaForceGroupForGlobalInstanceEnumeration& original){
   	
     firstElementP=0;
     currentElementP=0;
     endElementP=0;
  	 
     int size=original.getSize();
     for(int i=0;i<size;i++)
       addElement(original.getElement(i));           
  };
  
  	  
  Linux_SambaForceGroupForGlobalInstanceEnumeration::
   ~Linux_SambaForceGroupForGlobalInstanceEnumeration(){
   	
  	if (firstElementP!=0)
  	  delete(firstElementP);
  	  	
  };
  
  	  
  void Linux_SambaForceGroupForGlobalInstanceEnumeration::reset(){
  	
  	currentElementP=firstElementP;
  };
  
  	  
  bool Linux_SambaForceGroupForGlobalInstanceEnumeration::hasNext() const{
  	
  	return (currentElementP!=0);
  
  };
  
  int Linux_SambaForceGroupForGlobalInstanceEnumeration::getSize() const{
  	
    int size=0;
    Linux_SambaForceGroupForGlobalInstanceEnumerationElement* followingP=firstElementP;
  	
  	while(followingP!=0){
        followingP=followingP->m_nextP;
        size++;
    }
  	
    return size;
    
  };
  
  const Linux_SambaForceGroupForGlobalInstance&  
   Linux_SambaForceGroupForGlobalInstanceEnumeration::getElement(int pos) const{
   
    Linux_SambaForceGroupForGlobalInstanceEnumerationElement* followingP=firstElementP;
   
    int i=0;
    while((followingP!=0)&&(i<pos)){
        followingP=followingP->m_nextP;
        i++;
    }
    
    return *(followingP->m_elementP);
  };
  
  	  
  const Linux_SambaForceGroupForGlobalInstance&
   Linux_SambaForceGroupForGlobalInstanceEnumeration::getNext() {
   	
  	 Linux_SambaForceGroupForGlobalInstanceEnumerationElement* currentP=
  	  currentElementP;
  	 currentElementP=currentElementP->m_nextP;
  	 
  	 return *(currentP->m_elementP);
  };
  	  
  void Linux_SambaForceGroupForGlobalInstanceEnumeration::addElement
   (const Linux_SambaForceGroupForGlobalInstance& elementP){
   	
  	if(firstElementP==0){
  	  firstElementP=new Linux_SambaForceGroupForGlobalInstanceEnumerationElement();
  	  firstElementP->m_elementP=new Linux_SambaForceGroupForGlobalInstance(elementP);
  	  endElementP=firstElementP;
  	  currentElementP=firstElementP;
  	}else{
  	  endElementP->m_nextP=new Linux_SambaForceGroupForGlobalInstanceEnumerationElement();
  	  endElementP=endElementP->m_nextP;
  	  endElementP->m_elementP=new Linux_SambaForceGroupForGlobalInstance(elementP);
  	}
  };  
}
 
