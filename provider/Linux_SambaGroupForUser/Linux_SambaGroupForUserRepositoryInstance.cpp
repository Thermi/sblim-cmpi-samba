/**
 *  Linux_SambaGroupForUserRepositoryInstance.cpp
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


#include "Linux_SambaGroupForUserRepositoryInstance.h"
#include "CmpiData.h"
#include "CmpiString.h"
#include "CmpiArray.h"
#include <string>

namespace genProvider {

  //*********************************************************
  //Linux_SambaGroupForUserRepositoryInstance
  //*********************************************************

  //empty constructor
  Linux_SambaGroupForUserRepositoryInstance::
   Linux_SambaGroupForUserRepositoryInstance(){   	
   	init();  	   	
  };
  
  
  //copy constructor	
  Linux_SambaGroupForUserRepositoryInstance::
   Linux_SambaGroupForUserRepositoryInstance
   (const Linux_SambaGroupForUserRepositoryInstance& original){   	
   	init(original);  	   	
  };
  
  
  //constructor using CmpiInstance
  Linux_SambaGroupForUserRepositoryInstance::
   Linux_SambaGroupForUserRepositoryInstance (const CmpiInstance& inst, const char* instanceNamespace){
    CmpiData cmpiData;
    init(); 
    
    CmpiObjectPath cop=inst.getObjectPath();
    cop.setNameSpace(instanceNamespace);
    setInstanceName(Linux_SambaGroupForUserInstanceName(cop));
    
  }
  
  
  //Destructor
  Linux_SambaGroupForUserRepositoryInstance::
   ~Linux_SambaGroupForUserRepositoryInstance(){
   	reset();  	  
  };
  
  
  //copy operator
  Linux_SambaGroupForUserRepositoryInstance&
   Linux_SambaGroupForUserRepositoryInstance::operator=
   (const Linux_SambaGroupForUserRepositoryInstance& original){   	
   	init(original);
   	return *this;
  };
  
  
  //converts to CmpiInstance
  CmpiInstance Linux_SambaGroupForUserRepositoryInstance::
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
  unsigned int Linux_SambaGroupForUserRepositoryInstance::
   isInstanceNameSet() const{
  	return isSet.instanceName;
  }
  
  const Linux_SambaGroupForUserInstanceName&
    Linux_SambaGroupForUserRepositoryInstance::getInstanceName() const{

    if(!isSet.instanceName)
   	  throw CmpiErrorFormater::getErrorException(
   	   CmpiErrorFormater::NOT_SET,
   	   "InstanceName not set in Linux_SambaGroupForUser instance");
  		
   	return m_instanceName;
  }

  void Linux_SambaGroupForUserRepositoryInstance::setInstanceName(
   const Linux_SambaGroupForUserInstanceName& val){
    m_instanceName = val;
    isSet.instanceName=1;
  }


  
  //set isSet attributes to FALSE
  void Linux_SambaGroupForUserRepositoryInstance::init(){
   	isSet.instanceName=0;
   	  	
  };
  
  
  //copies another instance properties in this
  void Linux_SambaGroupForUserRepositoryInstance::init
   (const Linux_SambaGroupForUserRepositoryInstance& original){   	
   	init();
   	   	
    if(original.isInstanceNameSet()){
      setInstanceName(original.getInstanceName());
    }    
   }
  
  
  //reset the instance data
  void Linux_SambaGroupForUserRepositoryInstance::reset(){
   	
  	  
  };
  
  
  //*********************************************************
  //Linux_SambaGroupForUserRepositoryInstanceEnumerationElement	
  //*********************************************************
  
  Linux_SambaGroupForUserRepositoryInstanceEnumerationElement::
   Linux_SambaGroupForUserRepositoryInstanceEnumerationElement(){
   	
  	m_elementP=0;
  	m_nextP=0;
  	  
  };
  
  
  Linux_SambaGroupForUserRepositoryInstanceEnumerationElement::
   ~Linux_SambaGroupForUserRepositoryInstanceEnumerationElement(){
   	
  	if (m_elementP!=0)
  	  delete(m_elementP);
  	if (m_nextP!=0)
  	  delete(m_nextP);
  	  
  };

  
  //*********************************************************
  //Linux_SambaGroupForUserRepositoryInstanceNameEnumeration
  //*********************************************************

  Linux_SambaGroupForUserRepositoryInstanceEnumeration::
   Linux_SambaGroupForUserRepositoryInstanceEnumeration(){
   	
  	 firstElementP=0;
     currentElementP=0;
     endElementP=0;
  };
  
  Linux_SambaGroupForUserRepositoryInstanceEnumeration::
   Linux_SambaGroupForUserRepositoryInstanceEnumeration(
   const Linux_SambaGroupForUserRepositoryInstanceEnumeration& original){
   	
     firstElementP=0;
     currentElementP=0;
     endElementP=0;
  	 
     int size=original.getSize();
     for(int i=0;i<size;i++)
       addElement(original.getElement(i));           
  };
  
  	  
  Linux_SambaGroupForUserRepositoryInstanceEnumeration::
   ~Linux_SambaGroupForUserRepositoryInstanceEnumeration(){
   	
  	if (firstElementP!=0)
  	  delete(firstElementP);
  	  	
  };
  
  	  
  void Linux_SambaGroupForUserRepositoryInstanceEnumeration::reset(){
  	
  	currentElementP=firstElementP;
  };
  
  	  
  bool Linux_SambaGroupForUserRepositoryInstanceEnumeration::hasNext() const{
  	
  	return (currentElementP!=0);
  
  };
  
  int Linux_SambaGroupForUserRepositoryInstanceEnumeration::getSize() const{
  	
    int size=0;
    Linux_SambaGroupForUserRepositoryInstanceEnumerationElement* followingP=firstElementP;
  	
  	while(followingP!=0){
        followingP=followingP->m_nextP;
        size++;
    }
  	
    return size;
    
  };
  
  const Linux_SambaGroupForUserRepositoryInstance&  
   Linux_SambaGroupForUserRepositoryInstanceEnumeration::getElement(int pos) const{
   
    Linux_SambaGroupForUserRepositoryInstanceEnumerationElement* followingP=firstElementP;
   
    int i=0;
    while((followingP!=0)&&(i<pos)){
        followingP=followingP->m_nextP;
        i++;
    }
    
    return *(followingP->m_elementP);
  };
  
  	  
  const Linux_SambaGroupForUserRepositoryInstance&
   Linux_SambaGroupForUserRepositoryInstanceEnumeration::getNext() {
   	
  	 Linux_SambaGroupForUserRepositoryInstanceEnumerationElement* currentP=
  	  currentElementP;
  	 currentElementP=currentElementP->m_nextP;
  	 
  	 return *(currentP->m_elementP);
  };
  	  
  void Linux_SambaGroupForUserRepositoryInstanceEnumeration::addElement
   (const Linux_SambaGroupForUserRepositoryInstance& elementP){
   	
  	if(firstElementP==0){
  	  firstElementP=new Linux_SambaGroupForUserRepositoryInstanceEnumerationElement();
  	  firstElementP->m_elementP=new Linux_SambaGroupForUserRepositoryInstance(elementP);
  	  endElementP=firstElementP;
  	  currentElementP=firstElementP;
  	}else{
  	  endElementP->m_nextP=new Linux_SambaGroupForUserRepositoryInstanceEnumerationElement();
  	  endElementP=endElementP->m_nextP;
  	  endElementP->m_elementP=new Linux_SambaGroupForUserRepositoryInstance(elementP);
  	}
  };  
}
 
