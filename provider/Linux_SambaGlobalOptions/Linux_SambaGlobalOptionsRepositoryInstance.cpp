/**
 *  Linux_SambaGlobalOptionsRepositoryInstance.cpp
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


#include "Linux_SambaGlobalOptionsRepositoryInstance.h"
#include "CmpiData.h"
#include "CmpiString.h"
#include "CmpiArray.h"
#include <string>

namespace genProvider {

  //*********************************************************
  //Linux_SambaGlobalOptionsRepositoryInstance
  //*********************************************************

  //empty constructor
  Linux_SambaGlobalOptionsRepositoryInstance::
   Linux_SambaGlobalOptionsRepositoryInstance(){   	
   	init();  	   	
  };
  
  
  //copy constructor	
  Linux_SambaGlobalOptionsRepositoryInstance::
   Linux_SambaGlobalOptionsRepositoryInstance
   (const Linux_SambaGlobalOptionsRepositoryInstance& original){   	
   	init(original);  	   	
  };
  
  
  //constructor using CmpiInstance
  Linux_SambaGlobalOptionsRepositoryInstance::
   Linux_SambaGlobalOptionsRepositoryInstance (const CmpiInstance& inst, const char* instanceNamespace){
    CmpiData cmpiData;
    init(); 
    
    CmpiObjectPath cop=inst.getObjectPath();
    cop.setNameSpace(instanceNamespace);
    setInstanceName(Linux_SambaGlobalOptionsInstanceName(cop));
    
  }
  
  
  //Destructor
  Linux_SambaGlobalOptionsRepositoryInstance::
   ~Linux_SambaGlobalOptionsRepositoryInstance(){
   	reset();  	  
  };
  
  
  //copy operator
  Linux_SambaGlobalOptionsRepositoryInstance&
   Linux_SambaGlobalOptionsRepositoryInstance::operator=
   (const Linux_SambaGlobalOptionsRepositoryInstance& original){   	
   	init(original);
   	return *this;
  };
  
  
  //converts to CmpiInstance
  CmpiInstance Linux_SambaGlobalOptionsRepositoryInstance::
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
  unsigned int Linux_SambaGlobalOptionsRepositoryInstance::
   isInstanceNameSet() const{
  	return isSet.instanceName;
  }
  
  const Linux_SambaGlobalOptionsInstanceName&
    Linux_SambaGlobalOptionsRepositoryInstance::getInstanceName() const{

    if(!isSet.instanceName)
   	  throw CmpiErrorFormater::getErrorException(
   	   CmpiErrorFormater::NOT_SET,
   	   "InstanceName not set in Linux_SambaGlobalOptions instance");
  		
   	return m_instanceName;
  }

  void Linux_SambaGlobalOptionsRepositoryInstance::setInstanceName(
   const Linux_SambaGlobalOptionsInstanceName& val){
    m_instanceName = val;
    isSet.instanceName=1;
  }


  
  //set isSet attributes to FALSE
  void Linux_SambaGlobalOptionsRepositoryInstance::init(){
   	isSet.instanceName=0;
   	  	
  };
  
  
  //copies another instance properties in this
  void Linux_SambaGlobalOptionsRepositoryInstance::init
   (const Linux_SambaGlobalOptionsRepositoryInstance& original){   	
   	init();
   	   	
    if(original.isInstanceNameSet()){
      setInstanceName(original.getInstanceName());
    }    
   }
  
  
  //reset the instance data
  void Linux_SambaGlobalOptionsRepositoryInstance::reset(){
   	
  	  
  };
  
  
  //*********************************************************
  //Linux_SambaGlobalOptionsRepositoryInstanceEnumerationElement	
  //*********************************************************
  
  Linux_SambaGlobalOptionsRepositoryInstanceEnumerationElement::
   Linux_SambaGlobalOptionsRepositoryInstanceEnumerationElement(){
   	
  	m_elementP=0;
  	m_nextP=0;
  	  
  };
  
  
  Linux_SambaGlobalOptionsRepositoryInstanceEnumerationElement::
   ~Linux_SambaGlobalOptionsRepositoryInstanceEnumerationElement(){
   	
  	if (m_elementP!=0)
  	  delete(m_elementP);
  	if (m_nextP!=0)
  	  delete(m_nextP);
  	  
  };

  
  //*********************************************************
  //Linux_SambaGlobalOptionsRepositoryInstanceNameEnumeration
  //*********************************************************

  Linux_SambaGlobalOptionsRepositoryInstanceEnumeration::
   Linux_SambaGlobalOptionsRepositoryInstanceEnumeration(){
   	
  	 firstElementP=0;
     currentElementP=0;
     endElementP=0;
  };
  
  Linux_SambaGlobalOptionsRepositoryInstanceEnumeration::
   Linux_SambaGlobalOptionsRepositoryInstanceEnumeration(
   const Linux_SambaGlobalOptionsRepositoryInstanceEnumeration& original){
   	
     firstElementP=0;
     currentElementP=0;
     endElementP=0;
  	 
     int size=original.getSize();
     for(int i=0;i<size;i++)
       addElement(original.getElement(i));           
  };
  
  	  
  Linux_SambaGlobalOptionsRepositoryInstanceEnumeration::
   ~Linux_SambaGlobalOptionsRepositoryInstanceEnumeration(){
   	
  	if (firstElementP!=0)
  	  delete(firstElementP);
  	  	
  };
  
  	  
  void Linux_SambaGlobalOptionsRepositoryInstanceEnumeration::reset(){
  	
  	currentElementP=firstElementP;
  };
  
  	  
  bool Linux_SambaGlobalOptionsRepositoryInstanceEnumeration::hasNext() const{
  	
  	return (currentElementP!=0);
  
  };
  
  int Linux_SambaGlobalOptionsRepositoryInstanceEnumeration::getSize() const{
  	
    int size=0;
    Linux_SambaGlobalOptionsRepositoryInstanceEnumerationElement* followingP=firstElementP;
  	
  	while(followingP!=0){
        followingP=followingP->m_nextP;
        size++;
    }
  	
    return size;
    
  };
  
  const Linux_SambaGlobalOptionsRepositoryInstance&  
   Linux_SambaGlobalOptionsRepositoryInstanceEnumeration::getElement(int pos) const{
   
    Linux_SambaGlobalOptionsRepositoryInstanceEnumerationElement* followingP=firstElementP;
   
    int i=0;
    while((followingP!=0)&&(i<pos)){
        followingP=followingP->m_nextP;
        i++;
    }
    
    return *(followingP->m_elementP);
  };
  
  	  
  const Linux_SambaGlobalOptionsRepositoryInstance&
   Linux_SambaGlobalOptionsRepositoryInstanceEnumeration::getNext() {
   	
  	 Linux_SambaGlobalOptionsRepositoryInstanceEnumerationElement* currentP=
  	  currentElementP;
  	 currentElementP=currentElementP->m_nextP;
  	 
  	 return *(currentP->m_elementP);
  };
  	  
  void Linux_SambaGlobalOptionsRepositoryInstanceEnumeration::addElement
   (const Linux_SambaGlobalOptionsRepositoryInstance& elementP){
   	
  	if(firstElementP==0){
  	  firstElementP=new Linux_SambaGlobalOptionsRepositoryInstanceEnumerationElement();
  	  firstElementP->m_elementP=new Linux_SambaGlobalOptionsRepositoryInstance(elementP);
  	  endElementP=firstElementP;
  	  currentElementP=firstElementP;
  	}else{
  	  endElementP->m_nextP=new Linux_SambaGlobalOptionsRepositoryInstanceEnumerationElement();
  	  endElementP=endElementP->m_nextP;
  	  endElementP->m_elementP=new Linux_SambaGlobalOptionsRepositoryInstance(elementP);
  	}
  };  
}
 
