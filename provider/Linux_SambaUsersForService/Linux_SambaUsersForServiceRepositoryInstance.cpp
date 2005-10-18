/**
 *  Linux_SambaUsersForServiceRepositoryInstance.cpp
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


#include "Linux_SambaUsersForServiceRepositoryInstance.h"
#include "CmpiData.h"
#include "CmpiString.h"
#include "CmpiArray.h"
#include <string>

namespace genProvider {

  //*********************************************************
  //Linux_SambaUsersForServiceRepositoryInstance
  //*********************************************************

  //empty constructor
  Linux_SambaUsersForServiceRepositoryInstance::
   Linux_SambaUsersForServiceRepositoryInstance(){   	
   	init();  	   	
  };
  
  
  //copy constructor	
  Linux_SambaUsersForServiceRepositoryInstance::
   Linux_SambaUsersForServiceRepositoryInstance
   (const Linux_SambaUsersForServiceRepositoryInstance& original){   	
   	init(original);  	   	
  };
  
  
  //constructor using CmpiInstance
  Linux_SambaUsersForServiceRepositoryInstance::
   Linux_SambaUsersForServiceRepositoryInstance (const CmpiInstance& inst, const char* instanceNamespace){
    CmpiData cmpiData;
    init(); 
    
    CmpiObjectPath cop=inst.getObjectPath();
    cop.setNameSpace(instanceNamespace);
    setInstanceName(Linux_SambaUsersForServiceInstanceName(cop));
    
  }
  
  
  //Destructor
  Linux_SambaUsersForServiceRepositoryInstance::
   ~Linux_SambaUsersForServiceRepositoryInstance(){
   	reset();  	  
  };
  
  
  //copy operator
  Linux_SambaUsersForServiceRepositoryInstance&
   Linux_SambaUsersForServiceRepositoryInstance::operator=
   (const Linux_SambaUsersForServiceRepositoryInstance& original){   	
   	init(original);
   	return *this;
  };
  
  
  //converts to CmpiInstance
  CmpiInstance Linux_SambaUsersForServiceRepositoryInstance::
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
  unsigned int Linux_SambaUsersForServiceRepositoryInstance::
   isInstanceNameSet() const{
  	return isSet.instanceName;
  }
  
  const Linux_SambaUsersForServiceInstanceName&
    Linux_SambaUsersForServiceRepositoryInstance::getInstanceName() const{

    if(!isSet.instanceName)
   	  throw CmpiErrorFormater::getErrorException(
   	   CmpiErrorFormater::NOT_SET,
   	   "InstanceName not set in Linux_SambaUsersForService instance");
  		
   	return m_instanceName;
  }

  void Linux_SambaUsersForServiceRepositoryInstance::setInstanceName(
   const Linux_SambaUsersForServiceInstanceName& val){
    m_instanceName = val;
    isSet.instanceName=1;
  }


  
  //set isSet attributes to FALSE
  void Linux_SambaUsersForServiceRepositoryInstance::init(){
   	isSet.instanceName=0;
   	  	
  };
  
  
  //copies another instance properties in this
  void Linux_SambaUsersForServiceRepositoryInstance::init
   (const Linux_SambaUsersForServiceRepositoryInstance& original){   	
   	init();
   	   	
    if(original.isInstanceNameSet()){
      setInstanceName(original.getInstanceName());
    }    
   }
  
  
  //reset the instance data
  void Linux_SambaUsersForServiceRepositoryInstance::reset(){
   	
  	  
  };
  
  
  //*********************************************************
  //Linux_SambaUsersForServiceRepositoryInstanceEnumerationElement	
  //*********************************************************
  
  Linux_SambaUsersForServiceRepositoryInstanceEnumerationElement::
   Linux_SambaUsersForServiceRepositoryInstanceEnumerationElement(){
   	
  	m_elementP=0;
  	m_nextP=0;
  	  
  };
  
  
  Linux_SambaUsersForServiceRepositoryInstanceEnumerationElement::
   ~Linux_SambaUsersForServiceRepositoryInstanceEnumerationElement(){
   	
  	if (m_elementP!=0)
  	  delete(m_elementP);
  	if (m_nextP!=0)
  	  delete(m_nextP);
  	  
  };

  
  //*********************************************************
  //Linux_SambaUsersForServiceRepositoryInstanceNameEnumeration
  //*********************************************************

  Linux_SambaUsersForServiceRepositoryInstanceEnumeration::
   Linux_SambaUsersForServiceRepositoryInstanceEnumeration(){
   	
  	 firstElementP=0;
     currentElementP=0;
     endElementP=0;
  };
  
  Linux_SambaUsersForServiceRepositoryInstanceEnumeration::
   Linux_SambaUsersForServiceRepositoryInstanceEnumeration(
   const Linux_SambaUsersForServiceRepositoryInstanceEnumeration& original){
   	
     firstElementP=0;
     currentElementP=0;
     endElementP=0;
  	 
     int size=original.getSize();
     for(int i=0;i<size;i++)
       addElement(original.getElement(i));           
  };
  
  	  
  Linux_SambaUsersForServiceRepositoryInstanceEnumeration::
   ~Linux_SambaUsersForServiceRepositoryInstanceEnumeration(){
   	
  	if (firstElementP!=0)
  	  delete(firstElementP);
  	  	
  };
  
  	  
  void Linux_SambaUsersForServiceRepositoryInstanceEnumeration::reset(){
  	
  	currentElementP=firstElementP;
  };
  
  	  
  bool Linux_SambaUsersForServiceRepositoryInstanceEnumeration::hasNext() const{
  	
  	return (currentElementP!=0);
  
  };
  
  int Linux_SambaUsersForServiceRepositoryInstanceEnumeration::getSize() const{
  	
    int size=0;
    Linux_SambaUsersForServiceRepositoryInstanceEnumerationElement* followingP=firstElementP;
  	
  	while(followingP!=0){
        followingP=followingP->m_nextP;
        size++;
    }
  	
    return size;
    
  };
  
  const Linux_SambaUsersForServiceRepositoryInstance&  
   Linux_SambaUsersForServiceRepositoryInstanceEnumeration::getElement(int pos) const{
   
    Linux_SambaUsersForServiceRepositoryInstanceEnumerationElement* followingP=firstElementP;
   
    int i=0;
    while((followingP!=0)&&(i<pos)){
        followingP=followingP->m_nextP;
        i++;
    }
    
    return *(followingP->m_elementP);
  };
  
  	  
  const Linux_SambaUsersForServiceRepositoryInstance&
   Linux_SambaUsersForServiceRepositoryInstanceEnumeration::getNext() {
   	
  	 Linux_SambaUsersForServiceRepositoryInstanceEnumerationElement* currentP=
  	  currentElementP;
  	 currentElementP=currentElementP->m_nextP;
  	 
  	 return *(currentP->m_elementP);
  };
  	  
  void Linux_SambaUsersForServiceRepositoryInstanceEnumeration::addElement
   (const Linux_SambaUsersForServiceRepositoryInstance& elementP){
   	
  	if(firstElementP==0){
  	  firstElementP=new Linux_SambaUsersForServiceRepositoryInstanceEnumerationElement();
  	  firstElementP->m_elementP=new Linux_SambaUsersForServiceRepositoryInstance(elementP);
  	  endElementP=firstElementP;
  	  currentElementP=firstElementP;
  	}else{
  	  endElementP->m_nextP=new Linux_SambaUsersForServiceRepositoryInstanceEnumerationElement();
  	  endElementP=endElementP->m_nextP;
  	  endElementP->m_elementP=new Linux_SambaUsersForServiceRepositoryInstance(elementP);
  	}
  };  
}
 
