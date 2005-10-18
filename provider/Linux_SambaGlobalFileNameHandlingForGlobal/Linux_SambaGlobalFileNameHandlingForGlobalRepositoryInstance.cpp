/**
 *  Linux_SambaGlobalFileNameHandlingForGlobalRepositoryInstance.cpp
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


#include "Linux_SambaGlobalFileNameHandlingForGlobalRepositoryInstance.h"
#include "CmpiData.h"
#include "CmpiString.h"
#include "CmpiArray.h"
#include <string>

namespace genProvider {

  //*********************************************************
  //Linux_SambaGlobalFileNameHandlingForGlobalRepositoryInstance
  //*********************************************************

  //empty constructor
  Linux_SambaGlobalFileNameHandlingForGlobalRepositoryInstance::
   Linux_SambaGlobalFileNameHandlingForGlobalRepositoryInstance(){   	
   	init();  	   	
  };
  
  
  //copy constructor	
  Linux_SambaGlobalFileNameHandlingForGlobalRepositoryInstance::
   Linux_SambaGlobalFileNameHandlingForGlobalRepositoryInstance
   (const Linux_SambaGlobalFileNameHandlingForGlobalRepositoryInstance& original){   	
   	init(original);  	   	
  };
  
  
  //constructor using CmpiInstance
  Linux_SambaGlobalFileNameHandlingForGlobalRepositoryInstance::
   Linux_SambaGlobalFileNameHandlingForGlobalRepositoryInstance (const CmpiInstance& inst, const char* instanceNamespace){
    CmpiData cmpiData;
    init(); 
    
    CmpiObjectPath cop=inst.getObjectPath();
    cop.setNameSpace(instanceNamespace);
    setInstanceName(Linux_SambaGlobalFileNameHandlingForGlobalInstanceName(cop));
    
  }
  
  
  //Destructor
  Linux_SambaGlobalFileNameHandlingForGlobalRepositoryInstance::
   ~Linux_SambaGlobalFileNameHandlingForGlobalRepositoryInstance(){
   	reset();  	  
  };
  
  
  //copy operator
  Linux_SambaGlobalFileNameHandlingForGlobalRepositoryInstance&
   Linux_SambaGlobalFileNameHandlingForGlobalRepositoryInstance::operator=
   (const Linux_SambaGlobalFileNameHandlingForGlobalRepositoryInstance& original){   	
   	init(original);
   	return *this;
  };
  
  
  //converts to CmpiInstance
  CmpiInstance Linux_SambaGlobalFileNameHandlingForGlobalRepositoryInstance::
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
  unsigned int Linux_SambaGlobalFileNameHandlingForGlobalRepositoryInstance::
   isInstanceNameSet() const{
  	return isSet.instanceName;
  }
  
  const Linux_SambaGlobalFileNameHandlingForGlobalInstanceName&
    Linux_SambaGlobalFileNameHandlingForGlobalRepositoryInstance::getInstanceName() const{

    if(!isSet.instanceName)
   	  throw CmpiErrorFormater::getErrorException(
   	   CmpiErrorFormater::NOT_SET,
   	   "InstanceName not set in Linux_SambaGlobalFileNameHandlingForGlobal instance");
  		
   	return m_instanceName;
  }

  void Linux_SambaGlobalFileNameHandlingForGlobalRepositoryInstance::setInstanceName(
   const Linux_SambaGlobalFileNameHandlingForGlobalInstanceName& val){
    m_instanceName = val;
    isSet.instanceName=1;
  }


  
  //set isSet attributes to FALSE
  void Linux_SambaGlobalFileNameHandlingForGlobalRepositoryInstance::init(){
   	isSet.instanceName=0;
   	  	
  };
  
  
  //copies another instance properties in this
  void Linux_SambaGlobalFileNameHandlingForGlobalRepositoryInstance::init
   (const Linux_SambaGlobalFileNameHandlingForGlobalRepositoryInstance& original){   	
   	init();
   	   	
    if(original.isInstanceNameSet()){
      setInstanceName(original.getInstanceName());
    }    
   }
  
  
  //reset the instance data
  void Linux_SambaGlobalFileNameHandlingForGlobalRepositoryInstance::reset(){
   	
  	  
  };
  
  
  //*********************************************************
  //Linux_SambaGlobalFileNameHandlingForGlobalRepositoryInstanceEnumerationElement	
  //*********************************************************
  
  Linux_SambaGlobalFileNameHandlingForGlobalRepositoryInstanceEnumerationElement::
   Linux_SambaGlobalFileNameHandlingForGlobalRepositoryInstanceEnumerationElement(){
   	
  	m_elementP=0;
  	m_nextP=0;
  	  
  };
  
  
  Linux_SambaGlobalFileNameHandlingForGlobalRepositoryInstanceEnumerationElement::
   ~Linux_SambaGlobalFileNameHandlingForGlobalRepositoryInstanceEnumerationElement(){
   	
  	if (m_elementP!=0)
  	  delete(m_elementP);
  	if (m_nextP!=0)
  	  delete(m_nextP);
  	  
  };

  
  //*********************************************************
  //Linux_SambaGlobalFileNameHandlingForGlobalRepositoryInstanceNameEnumeration
  //*********************************************************

  Linux_SambaGlobalFileNameHandlingForGlobalRepositoryInstanceEnumeration::
   Linux_SambaGlobalFileNameHandlingForGlobalRepositoryInstanceEnumeration(){
   	
  	 firstElementP=0;
     currentElementP=0;
     endElementP=0;
  };
  
  Linux_SambaGlobalFileNameHandlingForGlobalRepositoryInstanceEnumeration::
   Linux_SambaGlobalFileNameHandlingForGlobalRepositoryInstanceEnumeration(
   const Linux_SambaGlobalFileNameHandlingForGlobalRepositoryInstanceEnumeration& original){
   	
     firstElementP=0;
     currentElementP=0;
     endElementP=0;
  	 
     int size=original.getSize();
     for(int i=0;i<size;i++)
       addElement(original.getElement(i));           
  };
  
  	  
  Linux_SambaGlobalFileNameHandlingForGlobalRepositoryInstanceEnumeration::
   ~Linux_SambaGlobalFileNameHandlingForGlobalRepositoryInstanceEnumeration(){
   	
  	if (firstElementP!=0)
  	  delete(firstElementP);
  	  	
  };
  
  	  
  void Linux_SambaGlobalFileNameHandlingForGlobalRepositoryInstanceEnumeration::reset(){
  	
  	currentElementP=firstElementP;
  };
  
  	  
  bool Linux_SambaGlobalFileNameHandlingForGlobalRepositoryInstanceEnumeration::hasNext() const{
  	
  	return (currentElementP!=0);
  
  };
  
  int Linux_SambaGlobalFileNameHandlingForGlobalRepositoryInstanceEnumeration::getSize() const{
  	
    int size=0;
    Linux_SambaGlobalFileNameHandlingForGlobalRepositoryInstanceEnumerationElement* followingP=firstElementP;
  	
  	while(followingP!=0){
        followingP=followingP->m_nextP;
        size++;
    }
  	
    return size;
    
  };
  
  const Linux_SambaGlobalFileNameHandlingForGlobalRepositoryInstance&  
   Linux_SambaGlobalFileNameHandlingForGlobalRepositoryInstanceEnumeration::getElement(int pos) const{
   
    Linux_SambaGlobalFileNameHandlingForGlobalRepositoryInstanceEnumerationElement* followingP=firstElementP;
   
    int i=0;
    while((followingP!=0)&&(i<pos)){
        followingP=followingP->m_nextP;
        i++;
    }
    
    return *(followingP->m_elementP);
  };
  
  	  
  const Linux_SambaGlobalFileNameHandlingForGlobalRepositoryInstance&
   Linux_SambaGlobalFileNameHandlingForGlobalRepositoryInstanceEnumeration::getNext() {
   	
  	 Linux_SambaGlobalFileNameHandlingForGlobalRepositoryInstanceEnumerationElement* currentP=
  	  currentElementP;
  	 currentElementP=currentElementP->m_nextP;
  	 
  	 return *(currentP->m_elementP);
  };
  	  
  void Linux_SambaGlobalFileNameHandlingForGlobalRepositoryInstanceEnumeration::addElement
   (const Linux_SambaGlobalFileNameHandlingForGlobalRepositoryInstance& elementP){
   	
  	if(firstElementP==0){
  	  firstElementP=new Linux_SambaGlobalFileNameHandlingForGlobalRepositoryInstanceEnumerationElement();
  	  firstElementP->m_elementP=new Linux_SambaGlobalFileNameHandlingForGlobalRepositoryInstance(elementP);
  	  endElementP=firstElementP;
  	  currentElementP=firstElementP;
  	}else{
  	  endElementP->m_nextP=new Linux_SambaGlobalFileNameHandlingForGlobalRepositoryInstanceEnumerationElement();
  	  endElementP=endElementP->m_nextP;
  	  endElementP->m_elementP=new Linux_SambaGlobalFileNameHandlingForGlobalRepositoryInstance(elementP);
  	}
  };  
}
 
