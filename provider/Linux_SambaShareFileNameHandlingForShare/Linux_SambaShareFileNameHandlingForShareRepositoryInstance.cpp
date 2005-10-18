/**
 *  Linux_SambaShareFileNameHandlingForShareRepositoryInstance.cpp
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


#include "Linux_SambaShareFileNameHandlingForShareRepositoryInstance.h"
#include "CmpiData.h"
#include "CmpiString.h"
#include "CmpiArray.h"
#include <string>

namespace genProvider {

  //*********************************************************
  //Linux_SambaShareFileNameHandlingForShareRepositoryInstance
  //*********************************************************

  //empty constructor
  Linux_SambaShareFileNameHandlingForShareRepositoryInstance::
   Linux_SambaShareFileNameHandlingForShareRepositoryInstance(){   	
   	init();  	   	
  };
  
  
  //copy constructor	
  Linux_SambaShareFileNameHandlingForShareRepositoryInstance::
   Linux_SambaShareFileNameHandlingForShareRepositoryInstance
   (const Linux_SambaShareFileNameHandlingForShareRepositoryInstance& original){   	
   	init(original);  	   	
  };
  
  
  //constructor using CmpiInstance
  Linux_SambaShareFileNameHandlingForShareRepositoryInstance::
   Linux_SambaShareFileNameHandlingForShareRepositoryInstance (const CmpiInstance& inst, const char* instanceNamespace){
    CmpiData cmpiData;
    init(); 
    
    CmpiObjectPath cop=inst.getObjectPath();
    cop.setNameSpace(instanceNamespace);
    setInstanceName(Linux_SambaShareFileNameHandlingForShareInstanceName(cop));
    
  }
  
  
  //Destructor
  Linux_SambaShareFileNameHandlingForShareRepositoryInstance::
   ~Linux_SambaShareFileNameHandlingForShareRepositoryInstance(){
   	reset();  	  
  };
  
  
  //copy operator
  Linux_SambaShareFileNameHandlingForShareRepositoryInstance&
   Linux_SambaShareFileNameHandlingForShareRepositoryInstance::operator=
   (const Linux_SambaShareFileNameHandlingForShareRepositoryInstance& original){   	
   	init(original);
   	return *this;
  };
  
  
  //converts to CmpiInstance
  CmpiInstance Linux_SambaShareFileNameHandlingForShareRepositoryInstance::
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
  unsigned int Linux_SambaShareFileNameHandlingForShareRepositoryInstance::
   isInstanceNameSet() const{
  	return isSet.instanceName;
  }
  
  const Linux_SambaShareFileNameHandlingForShareInstanceName&
    Linux_SambaShareFileNameHandlingForShareRepositoryInstance::getInstanceName() const{

    if(!isSet.instanceName)
   	  throw CmpiErrorFormater::getErrorException(
   	   CmpiErrorFormater::NOT_SET,
   	   "InstanceName not set in Linux_SambaShareFileNameHandlingForShare instance");
  		
   	return m_instanceName;
  }

  void Linux_SambaShareFileNameHandlingForShareRepositoryInstance::setInstanceName(
   const Linux_SambaShareFileNameHandlingForShareInstanceName& val){
    m_instanceName = val;
    isSet.instanceName=1;
  }


  
  //set isSet attributes to FALSE
  void Linux_SambaShareFileNameHandlingForShareRepositoryInstance::init(){
   	isSet.instanceName=0;
   	  	
  };
  
  
  //copies another instance properties in this
  void Linux_SambaShareFileNameHandlingForShareRepositoryInstance::init
   (const Linux_SambaShareFileNameHandlingForShareRepositoryInstance& original){   	
   	init();
   	   	
    if(original.isInstanceNameSet()){
      setInstanceName(original.getInstanceName());
    }    
   }
  
  
  //reset the instance data
  void Linux_SambaShareFileNameHandlingForShareRepositoryInstance::reset(){
   	
  	  
  };
  
  
  //*********************************************************
  //Linux_SambaShareFileNameHandlingForShareRepositoryInstanceEnumerationElement	
  //*********************************************************
  
  Linux_SambaShareFileNameHandlingForShareRepositoryInstanceEnumerationElement::
   Linux_SambaShareFileNameHandlingForShareRepositoryInstanceEnumerationElement(){
   	
  	m_elementP=0;
  	m_nextP=0;
  	  
  };
  
  
  Linux_SambaShareFileNameHandlingForShareRepositoryInstanceEnumerationElement::
   ~Linux_SambaShareFileNameHandlingForShareRepositoryInstanceEnumerationElement(){
   	
  	if (m_elementP!=0)
  	  delete(m_elementP);
  	if (m_nextP!=0)
  	  delete(m_nextP);
  	  
  };

  
  //*********************************************************
  //Linux_SambaShareFileNameHandlingForShareRepositoryInstanceNameEnumeration
  //*********************************************************

  Linux_SambaShareFileNameHandlingForShareRepositoryInstanceEnumeration::
   Linux_SambaShareFileNameHandlingForShareRepositoryInstanceEnumeration(){
   	
  	 firstElementP=0;
     currentElementP=0;
     endElementP=0;
  };
  
  Linux_SambaShareFileNameHandlingForShareRepositoryInstanceEnumeration::
   Linux_SambaShareFileNameHandlingForShareRepositoryInstanceEnumeration(
   const Linux_SambaShareFileNameHandlingForShareRepositoryInstanceEnumeration& original){
   	
     firstElementP=0;
     currentElementP=0;
     endElementP=0;
  	 
     int size=original.getSize();
     for(int i=0;i<size;i++)
       addElement(original.getElement(i));           
  };
  
  	  
  Linux_SambaShareFileNameHandlingForShareRepositoryInstanceEnumeration::
   ~Linux_SambaShareFileNameHandlingForShareRepositoryInstanceEnumeration(){
   	
  	if (firstElementP!=0)
  	  delete(firstElementP);
  	  	
  };
  
  	  
  void Linux_SambaShareFileNameHandlingForShareRepositoryInstanceEnumeration::reset(){
  	
  	currentElementP=firstElementP;
  };
  
  	  
  bool Linux_SambaShareFileNameHandlingForShareRepositoryInstanceEnumeration::hasNext() const{
  	
  	return (currentElementP!=0);
  
  };
  
  int Linux_SambaShareFileNameHandlingForShareRepositoryInstanceEnumeration::getSize() const{
  	
    int size=0;
    Linux_SambaShareFileNameHandlingForShareRepositoryInstanceEnumerationElement* followingP=firstElementP;
  	
  	while(followingP!=0){
        followingP=followingP->m_nextP;
        size++;
    }
  	
    return size;
    
  };
  
  const Linux_SambaShareFileNameHandlingForShareRepositoryInstance&  
   Linux_SambaShareFileNameHandlingForShareRepositoryInstanceEnumeration::getElement(int pos) const{
   
    Linux_SambaShareFileNameHandlingForShareRepositoryInstanceEnumerationElement* followingP=firstElementP;
   
    int i=0;
    while((followingP!=0)&&(i<pos)){
        followingP=followingP->m_nextP;
        i++;
    }
    
    return *(followingP->m_elementP);
  };
  
  	  
  const Linux_SambaShareFileNameHandlingForShareRepositoryInstance&
   Linux_SambaShareFileNameHandlingForShareRepositoryInstanceEnumeration::getNext() {
   	
  	 Linux_SambaShareFileNameHandlingForShareRepositoryInstanceEnumerationElement* currentP=
  	  currentElementP;
  	 currentElementP=currentElementP->m_nextP;
  	 
  	 return *(currentP->m_elementP);
  };
  	  
  void Linux_SambaShareFileNameHandlingForShareRepositoryInstanceEnumeration::addElement
   (const Linux_SambaShareFileNameHandlingForShareRepositoryInstance& elementP){
   	
  	if(firstElementP==0){
  	  firstElementP=new Linux_SambaShareFileNameHandlingForShareRepositoryInstanceEnumerationElement();
  	  firstElementP->m_elementP=new Linux_SambaShareFileNameHandlingForShareRepositoryInstance(elementP);
  	  endElementP=firstElementP;
  	  currentElementP=firstElementP;
  	}else{
  	  endElementP->m_nextP=new Linux_SambaShareFileNameHandlingForShareRepositoryInstanceEnumerationElement();
  	  endElementP=endElementP->m_nextP;
  	  endElementP->m_elementP=new Linux_SambaShareFileNameHandlingForShareRepositoryInstance(elementP);
  	}
  };  
}
 
