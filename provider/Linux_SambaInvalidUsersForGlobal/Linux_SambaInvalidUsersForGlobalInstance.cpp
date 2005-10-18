/**
 *  Linux_SambaInvalidUsersForGlobalInstance.cpp
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


#include "Linux_SambaInvalidUsersForGlobalInstance.h"
#include "CmpiData.h"
#include "CmpiString.h"
#include "CmpiArray.h"
#include <string>

namespace genProvider {

  //*********************************************************
  //Linux_SambaInvalidUsersForGlobalInstance
  //*********************************************************

  //empty constructor
  Linux_SambaInvalidUsersForGlobalInstance::
   Linux_SambaInvalidUsersForGlobalInstance(){   	
   	init();  	   	
  };
  
  
  //copy constructor	
  Linux_SambaInvalidUsersForGlobalInstance::
   Linux_SambaInvalidUsersForGlobalInstance
   (const Linux_SambaInvalidUsersForGlobalInstance& original){   	
   	init(original);  	   	
  };
  
  
  //constructor using CmpiInstance
  Linux_SambaInvalidUsersForGlobalInstance::
   Linux_SambaInvalidUsersForGlobalInstance (const CmpiInstance& inst, const char* instanceNamespace){
    CmpiData cmpiData;
    init(); 
    
    CmpiObjectPath cop=inst.getObjectPath();
    cop.setNameSpace(instanceNamespace);
    setInstanceName(Linux_SambaInvalidUsersForGlobalInstanceName(cop));
    
  }
  
  
  //Destructor
  Linux_SambaInvalidUsersForGlobalInstance::
   ~Linux_SambaInvalidUsersForGlobalInstance(){
   	reset();  	  
  };
  
  
  //copy operator
  Linux_SambaInvalidUsersForGlobalInstance&
   Linux_SambaInvalidUsersForGlobalInstance::operator=
   (const Linux_SambaInvalidUsersForGlobalInstance& original){   	
   	init(original);
   	return *this;
  };
  
  
  //converts to CmpiInstance
  CmpiInstance Linux_SambaInvalidUsersForGlobalInstance::
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
  unsigned int Linux_SambaInvalidUsersForGlobalInstance::
   isInstanceNameSet() const{
  	return isSet.instanceName;
  }
  
  const Linux_SambaInvalidUsersForGlobalInstanceName&
    Linux_SambaInvalidUsersForGlobalInstance::getInstanceName() const{

    if(!isSet.instanceName)
   	  throw CmpiErrorFormater::getErrorException(
   	   CmpiErrorFormater::NOT_SET,
   	   "InstanceName not set in Linux_SambaInvalidUsersForGlobal instance");
  		
   	return m_instanceName;
  }

  void Linux_SambaInvalidUsersForGlobalInstance::setInstanceName(
   const Linux_SambaInvalidUsersForGlobalInstanceName& val){
    m_instanceName = val;
    isSet.instanceName=1;
  }


  
  //set isSet attributes to FALSE
  void Linux_SambaInvalidUsersForGlobalInstance::init(){
   	isSet.instanceName=0;
   	  	
  };
  
  
  //copies another instance properties in this
  void Linux_SambaInvalidUsersForGlobalInstance::init
   (const Linux_SambaInvalidUsersForGlobalInstance& original){   	
   	init();
   	   	
    if(original.isInstanceNameSet()){
      setInstanceName(original.getInstanceName());
    }    
   }
  
  
  //reset the instance data
  void Linux_SambaInvalidUsersForGlobalInstance::reset(){
   	
  	  
  };
  
  
  //*********************************************************
  //Linux_SambaInvalidUsersForGlobalInstanceEnumerationElement	
  //*********************************************************
  
  Linux_SambaInvalidUsersForGlobalInstanceEnumerationElement::
   Linux_SambaInvalidUsersForGlobalInstanceEnumerationElement(){
   	
  	m_elementP=0;
  	m_nextP=0;
  	  
  };
  
  
  Linux_SambaInvalidUsersForGlobalInstanceEnumerationElement::
   ~Linux_SambaInvalidUsersForGlobalInstanceEnumerationElement(){
   	
  	if (m_elementP!=0)
  	  delete(m_elementP);
  	if (m_nextP!=0)
  	  delete(m_nextP);
  	  
  };

  
  //*********************************************************
  //Linux_SambaInvalidUsersForGlobalInstanceNameEnumeration
  //*********************************************************

  Linux_SambaInvalidUsersForGlobalInstanceEnumeration::
   Linux_SambaInvalidUsersForGlobalInstanceEnumeration(){
   	
  	 firstElementP=0;
     currentElementP=0;
     endElementP=0;
  };
  
  Linux_SambaInvalidUsersForGlobalInstanceEnumeration::
   Linux_SambaInvalidUsersForGlobalInstanceEnumeration(
   const Linux_SambaInvalidUsersForGlobalInstanceEnumeration& original){
   	
     firstElementP=0;
     currentElementP=0;
     endElementP=0;
  	 
     int size=original.getSize();
     for(int i=0;i<size;i++)
       addElement(original.getElement(i));           
  };
  
  	  
  Linux_SambaInvalidUsersForGlobalInstanceEnumeration::
   ~Linux_SambaInvalidUsersForGlobalInstanceEnumeration(){
   	
  	if (firstElementP!=0)
  	  delete(firstElementP);
  	  	
  };
  
  	  
  void Linux_SambaInvalidUsersForGlobalInstanceEnumeration::reset(){
  	
  	currentElementP=firstElementP;
  };
  
  	  
  bool Linux_SambaInvalidUsersForGlobalInstanceEnumeration::hasNext() const{
  	
  	return (currentElementP!=0);
  
  };
  
  int Linux_SambaInvalidUsersForGlobalInstanceEnumeration::getSize() const{
  	
    int size=0;
    Linux_SambaInvalidUsersForGlobalInstanceEnumerationElement* followingP=firstElementP;
  	
  	while(followingP!=0){
        followingP=followingP->m_nextP;
        size++;
    }
  	
    return size;
    
  };
  
  const Linux_SambaInvalidUsersForGlobalInstance&  
   Linux_SambaInvalidUsersForGlobalInstanceEnumeration::getElement(int pos) const{
   
    Linux_SambaInvalidUsersForGlobalInstanceEnumerationElement* followingP=firstElementP;
   
    int i=0;
    while((followingP!=0)&&(i<pos)){
        followingP=followingP->m_nextP;
        i++;
    }
    
    return *(followingP->m_elementP);
  };
  
  	  
  const Linux_SambaInvalidUsersForGlobalInstance&
   Linux_SambaInvalidUsersForGlobalInstanceEnumeration::getNext() {
   	
  	 Linux_SambaInvalidUsersForGlobalInstanceEnumerationElement* currentP=
  	  currentElementP;
  	 currentElementP=currentElementP->m_nextP;
  	 
  	 return *(currentP->m_elementP);
  };
  	  
  void Linux_SambaInvalidUsersForGlobalInstanceEnumeration::addElement
   (const Linux_SambaInvalidUsersForGlobalInstance& elementP){
   	
  	if(firstElementP==0){
  	  firstElementP=new Linux_SambaInvalidUsersForGlobalInstanceEnumerationElement();
  	  firstElementP->m_elementP=new Linux_SambaInvalidUsersForGlobalInstance(elementP);
  	  endElementP=firstElementP;
  	  currentElementP=firstElementP;
  	}else{
  	  endElementP->m_nextP=new Linux_SambaInvalidUsersForGlobalInstanceEnumerationElement();
  	  endElementP=endElementP->m_nextP;
  	  endElementP->m_elementP=new Linux_SambaInvalidUsersForGlobalInstance(elementP);
  	}
  };  
}
 
