/**
 *  Linux_SambaShareFileNameHandlingOptionsRepositoryInstance.cpp
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


#include "Linux_SambaShareFileNameHandlingOptionsRepositoryInstance.h"
#include "CmpiData.h"
#include "CmpiString.h"
#include "CmpiArray.h"
#include <string>

namespace genProvider {

  //*********************************************************
  //Linux_SambaShareFileNameHandlingOptionsRepositoryInstance
  //*********************************************************

  //empty constructor
  Linux_SambaShareFileNameHandlingOptionsRepositoryInstance::
   Linux_SambaShareFileNameHandlingOptionsRepositoryInstance(){   	
   	init();  	   	
  };
  
  
  //copy constructor	
  Linux_SambaShareFileNameHandlingOptionsRepositoryInstance::
   Linux_SambaShareFileNameHandlingOptionsRepositoryInstance
   (const Linux_SambaShareFileNameHandlingOptionsRepositoryInstance& original){   	
   	init(original);  	   	
  };
  
  
  //constructor using CmpiInstance
  Linux_SambaShareFileNameHandlingOptionsRepositoryInstance::
   Linux_SambaShareFileNameHandlingOptionsRepositoryInstance (const CmpiInstance& inst, const char* instanceNamespace){
    CmpiData cmpiData;
    init(); 
    
    CmpiObjectPath cop=inst.getObjectPath();
    cop.setNameSpace(instanceNamespace);
    setInstanceName(Linux_SambaShareFileNameHandlingOptionsInstanceName(cop));
    
  }
  
  
  //Destructor
  Linux_SambaShareFileNameHandlingOptionsRepositoryInstance::
   ~Linux_SambaShareFileNameHandlingOptionsRepositoryInstance(){
   	reset();  	  
  };
  
  
  //copy operator
  Linux_SambaShareFileNameHandlingOptionsRepositoryInstance&
   Linux_SambaShareFileNameHandlingOptionsRepositoryInstance::operator=
   (const Linux_SambaShareFileNameHandlingOptionsRepositoryInstance& original){   	
   	init(original);
   	return *this;
  };
  
  
  //converts to CmpiInstance
  CmpiInstance Linux_SambaShareFileNameHandlingOptionsRepositoryInstance::
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
  unsigned int Linux_SambaShareFileNameHandlingOptionsRepositoryInstance::
   isInstanceNameSet() const{
  	return isSet.instanceName;
  }
  
  const Linux_SambaShareFileNameHandlingOptionsInstanceName&
    Linux_SambaShareFileNameHandlingOptionsRepositoryInstance::getInstanceName() const{

    if(!isSet.instanceName)
   	  throw CmpiErrorFormater::getErrorException(
   	   CmpiErrorFormater::NOT_SET,
   	   "InstanceName not set in Linux_SambaShareFileNameHandlingOptions instance");
  		
   	return m_instanceName;
  }

  void Linux_SambaShareFileNameHandlingOptionsRepositoryInstance::setInstanceName(
   const Linux_SambaShareFileNameHandlingOptionsInstanceName& val){
    m_instanceName = val;
    isSet.instanceName=1;
  }


  
  //set isSet attributes to FALSE
  void Linux_SambaShareFileNameHandlingOptionsRepositoryInstance::init(){
   	isSet.instanceName=0;
   	  	
  };
  
  
  //copies another instance properties in this
  void Linux_SambaShareFileNameHandlingOptionsRepositoryInstance::init
   (const Linux_SambaShareFileNameHandlingOptionsRepositoryInstance& original){   	
   	init();
   	   	
    if(original.isInstanceNameSet()){
      setInstanceName(original.getInstanceName());
    }    
   }
  
  
  //reset the instance data
  void Linux_SambaShareFileNameHandlingOptionsRepositoryInstance::reset(){
   	
  	  
  };
  
  
  //*********************************************************
  //Linux_SambaShareFileNameHandlingOptionsRepositoryInstanceEnumerationElement	
  //*********************************************************
  
  Linux_SambaShareFileNameHandlingOptionsRepositoryInstanceEnumerationElement::
   Linux_SambaShareFileNameHandlingOptionsRepositoryInstanceEnumerationElement(){
   	
  	m_elementP=0;
  	m_nextP=0;
  	  
  };
  
  
  Linux_SambaShareFileNameHandlingOptionsRepositoryInstanceEnumerationElement::
   ~Linux_SambaShareFileNameHandlingOptionsRepositoryInstanceEnumerationElement(){
   	
  	if (m_elementP!=0)
  	  delete(m_elementP);
  	if (m_nextP!=0)
  	  delete(m_nextP);
  	  
  };

  
  //*********************************************************
  //Linux_SambaShareFileNameHandlingOptionsRepositoryInstanceNameEnumeration
  //*********************************************************

  Linux_SambaShareFileNameHandlingOptionsRepositoryInstanceEnumeration::
   Linux_SambaShareFileNameHandlingOptionsRepositoryInstanceEnumeration(){
   	
  	 firstElementP=0;
     currentElementP=0;
     endElementP=0;
  };
  
  Linux_SambaShareFileNameHandlingOptionsRepositoryInstanceEnumeration::
   Linux_SambaShareFileNameHandlingOptionsRepositoryInstanceEnumeration(
   const Linux_SambaShareFileNameHandlingOptionsRepositoryInstanceEnumeration& original){
   	
     firstElementP=0;
     currentElementP=0;
     endElementP=0;
  	 
     int size=original.getSize();
     for(int i=0;i<size;i++)
       addElement(original.getElement(i));           
  };
  
  	  
  Linux_SambaShareFileNameHandlingOptionsRepositoryInstanceEnumeration::
   ~Linux_SambaShareFileNameHandlingOptionsRepositoryInstanceEnumeration(){
   	
  	if (firstElementP!=0)
  	  delete(firstElementP);
  	  	
  };
  
  	  
  void Linux_SambaShareFileNameHandlingOptionsRepositoryInstanceEnumeration::reset(){
  	
  	currentElementP=firstElementP;
  };
  
  	  
  bool Linux_SambaShareFileNameHandlingOptionsRepositoryInstanceEnumeration::hasNext() const{
  	
  	return (currentElementP!=0);
  
  };
  
  int Linux_SambaShareFileNameHandlingOptionsRepositoryInstanceEnumeration::getSize() const{
  	
    int size=0;
    Linux_SambaShareFileNameHandlingOptionsRepositoryInstanceEnumerationElement* followingP=firstElementP;
  	
  	while(followingP!=0){
        followingP=followingP->m_nextP;
        size++;
    }
  	
    return size;
    
  };
  
  const Linux_SambaShareFileNameHandlingOptionsRepositoryInstance&  
   Linux_SambaShareFileNameHandlingOptionsRepositoryInstanceEnumeration::getElement(int pos) const{
   
    Linux_SambaShareFileNameHandlingOptionsRepositoryInstanceEnumerationElement* followingP=firstElementP;
   
    int i=0;
    while((followingP!=0)&&(i<pos)){
        followingP=followingP->m_nextP;
        i++;
    }
    
    return *(followingP->m_elementP);
  };
  
  	  
  const Linux_SambaShareFileNameHandlingOptionsRepositoryInstance&
   Linux_SambaShareFileNameHandlingOptionsRepositoryInstanceEnumeration::getNext() {
   	
  	 Linux_SambaShareFileNameHandlingOptionsRepositoryInstanceEnumerationElement* currentP=
  	  currentElementP;
  	 currentElementP=currentElementP->m_nextP;
  	 
  	 return *(currentP->m_elementP);
  };
  	  
  void Linux_SambaShareFileNameHandlingOptionsRepositoryInstanceEnumeration::addElement
   (const Linux_SambaShareFileNameHandlingOptionsRepositoryInstance& elementP){
   	
  	if(firstElementP==0){
  	  firstElementP=new Linux_SambaShareFileNameHandlingOptionsRepositoryInstanceEnumerationElement();
  	  firstElementP->m_elementP=new Linux_SambaShareFileNameHandlingOptionsRepositoryInstance(elementP);
  	  endElementP=firstElementP;
  	  currentElementP=firstElementP;
  	}else{
  	  endElementP->m_nextP=new Linux_SambaShareFileNameHandlingOptionsRepositoryInstanceEnumerationElement();
  	  endElementP=endElementP->m_nextP;
  	  endElementP->m_elementP=new Linux_SambaShareFileNameHandlingOptionsRepositoryInstance(elementP);
  	}
  };  
}
 
