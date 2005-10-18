/**
 *  Linux_SambaReadListForGlobalInstance.cpp
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


#include "Linux_SambaReadListForGlobalInstance.h"
#include "CmpiData.h"
#include "CmpiString.h"
#include "CmpiArray.h"
#include <string>

namespace genProvider {

  //*********************************************************
  //Linux_SambaReadListForGlobalInstance
  //*********************************************************

  //empty constructor
  Linux_SambaReadListForGlobalInstance::
   Linux_SambaReadListForGlobalInstance(){   	
   	init();  	   	
  };
  
  
  //copy constructor	
  Linux_SambaReadListForGlobalInstance::
   Linux_SambaReadListForGlobalInstance
   (const Linux_SambaReadListForGlobalInstance& original){   	
   	init(original);  	   	
  };
  
  
  //constructor using CmpiInstance
  Linux_SambaReadListForGlobalInstance::
   Linux_SambaReadListForGlobalInstance (const CmpiInstance& inst, const char* instanceNamespace){
    CmpiData cmpiData;
    init(); 
    
    CmpiObjectPath cop=inst.getObjectPath();
    cop.setNameSpace(instanceNamespace);
    setInstanceName(Linux_SambaReadListForGlobalInstanceName(cop));
    
  }
  
  
  //Destructor
  Linux_SambaReadListForGlobalInstance::
   ~Linux_SambaReadListForGlobalInstance(){
   	reset();  	  
  };
  
  
  //copy operator
  Linux_SambaReadListForGlobalInstance&
   Linux_SambaReadListForGlobalInstance::operator=
   (const Linux_SambaReadListForGlobalInstance& original){   	
   	init(original);
   	return *this;
  };
  
  
  //converts to CmpiInstance
  CmpiInstance Linux_SambaReadListForGlobalInstance::
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
  unsigned int Linux_SambaReadListForGlobalInstance::
   isInstanceNameSet() const{
  	return isSet.instanceName;
  }
  
  const Linux_SambaReadListForGlobalInstanceName&
    Linux_SambaReadListForGlobalInstance::getInstanceName() const{

    if(!isSet.instanceName)
   	  throw CmpiErrorFormater::getErrorException(
   	   CmpiErrorFormater::NOT_SET,
   	   "InstanceName not set in Linux_SambaReadListForGlobal instance");
  		
   	return m_instanceName;
  }

  void Linux_SambaReadListForGlobalInstance::setInstanceName(
   const Linux_SambaReadListForGlobalInstanceName& val){
    m_instanceName = val;
    isSet.instanceName=1;
  }


  
  //set isSet attributes to FALSE
  void Linux_SambaReadListForGlobalInstance::init(){
   	isSet.instanceName=0;
   	  	
  };
  
  
  //copies another instance properties in this
  void Linux_SambaReadListForGlobalInstance::init
   (const Linux_SambaReadListForGlobalInstance& original){   	
   	init();
   	   	
    if(original.isInstanceNameSet()){
      setInstanceName(original.getInstanceName());
    }    
   }
  
  
  //reset the instance data
  void Linux_SambaReadListForGlobalInstance::reset(){
   	
  	  
  };
  
  
  //*********************************************************
  //Linux_SambaReadListForGlobalInstanceEnumerationElement	
  //*********************************************************
  
  Linux_SambaReadListForGlobalInstanceEnumerationElement::
   Linux_SambaReadListForGlobalInstanceEnumerationElement(){
   	
  	m_elementP=0;
  	m_nextP=0;
  	  
  };
  
  
  Linux_SambaReadListForGlobalInstanceEnumerationElement::
   ~Linux_SambaReadListForGlobalInstanceEnumerationElement(){
   	
  	if (m_elementP!=0)
  	  delete(m_elementP);
  	if (m_nextP!=0)
  	  delete(m_nextP);
  	  
  };

  
  //*********************************************************
  //Linux_SambaReadListForGlobalInstanceNameEnumeration
  //*********************************************************

  Linux_SambaReadListForGlobalInstanceEnumeration::
   Linux_SambaReadListForGlobalInstanceEnumeration(){
   	
  	 firstElementP=0;
     currentElementP=0;
     endElementP=0;
  };
  
  Linux_SambaReadListForGlobalInstanceEnumeration::
   Linux_SambaReadListForGlobalInstanceEnumeration(
   const Linux_SambaReadListForGlobalInstanceEnumeration& original){
   	
     firstElementP=0;
     currentElementP=0;
     endElementP=0;
  	 
     int size=original.getSize();
     for(int i=0;i<size;i++)
       addElement(original.getElement(i));           
  };
  
  	  
  Linux_SambaReadListForGlobalInstanceEnumeration::
   ~Linux_SambaReadListForGlobalInstanceEnumeration(){
   	
  	if (firstElementP!=0)
  	  delete(firstElementP);
  	  	
  };
  
  	  
  void Linux_SambaReadListForGlobalInstanceEnumeration::reset(){
  	
  	currentElementP=firstElementP;
  };
  
  	  
  bool Linux_SambaReadListForGlobalInstanceEnumeration::hasNext() const{
  	
  	return (currentElementP!=0);
  
  };
  
  int Linux_SambaReadListForGlobalInstanceEnumeration::getSize() const{
  	
    int size=0;
    Linux_SambaReadListForGlobalInstanceEnumerationElement* followingP=firstElementP;
  	
  	while(followingP!=0){
        followingP=followingP->m_nextP;
        size++;
    }
  	
    return size;
    
  };
  
  const Linux_SambaReadListForGlobalInstance&  
   Linux_SambaReadListForGlobalInstanceEnumeration::getElement(int pos) const{
   
    Linux_SambaReadListForGlobalInstanceEnumerationElement* followingP=firstElementP;
   
    int i=0;
    while((followingP!=0)&&(i<pos)){
        followingP=followingP->m_nextP;
        i++;
    }
    
    return *(followingP->m_elementP);
  };
  
  	  
  const Linux_SambaReadListForGlobalInstance&
   Linux_SambaReadListForGlobalInstanceEnumeration::getNext() {
   	
  	 Linux_SambaReadListForGlobalInstanceEnumerationElement* currentP=
  	  currentElementP;
  	 currentElementP=currentElementP->m_nextP;
  	 
  	 return *(currentP->m_elementP);
  };
  	  
  void Linux_SambaReadListForGlobalInstanceEnumeration::addElement
   (const Linux_SambaReadListForGlobalInstance& elementP){
   	
  	if(firstElementP==0){
  	  firstElementP=new Linux_SambaReadListForGlobalInstanceEnumerationElement();
  	  firstElementP->m_elementP=new Linux_SambaReadListForGlobalInstance(elementP);
  	  endElementP=firstElementP;
  	  currentElementP=firstElementP;
  	}else{
  	  endElementP->m_nextP=new Linux_SambaReadListForGlobalInstanceEnumerationElement();
  	  endElementP=endElementP->m_nextP;
  	  endElementP->m_elementP=new Linux_SambaReadListForGlobalInstance(elementP);
  	}
  };  
}
 
