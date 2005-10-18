/**
 *  Linux_SambaGlobalProtocolOptionsRepositoryInstance.cpp
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


#include "Linux_SambaGlobalProtocolOptionsRepositoryInstance.h"
#include "CmpiData.h"
#include "CmpiString.h"
#include "CmpiArray.h"
#include <string>

namespace genProvider {

  //*********************************************************
  //Linux_SambaGlobalProtocolOptionsRepositoryInstance
  //*********************************************************

  //empty constructor
  Linux_SambaGlobalProtocolOptionsRepositoryInstance::
   Linux_SambaGlobalProtocolOptionsRepositoryInstance(){   	
   	init();  	   	
  };
  
  
  //copy constructor	
  Linux_SambaGlobalProtocolOptionsRepositoryInstance::
   Linux_SambaGlobalProtocolOptionsRepositoryInstance
   (const Linux_SambaGlobalProtocolOptionsRepositoryInstance& original){   	
   	init(original);  	   	
  };
  
  
  //constructor using CmpiInstance
  Linux_SambaGlobalProtocolOptionsRepositoryInstance::
   Linux_SambaGlobalProtocolOptionsRepositoryInstance (const CmpiInstance& inst, const char* instanceNamespace){
    CmpiData cmpiData;
    init(); 
    
    CmpiObjectPath cop=inst.getObjectPath();
    cop.setNameSpace(instanceNamespace);
    setInstanceName(Linux_SambaGlobalProtocolOptionsInstanceName(cop));
    
  }
  
  
  //Destructor
  Linux_SambaGlobalProtocolOptionsRepositoryInstance::
   ~Linux_SambaGlobalProtocolOptionsRepositoryInstance(){
   	reset();  	  
  };
  
  
  //copy operator
  Linux_SambaGlobalProtocolOptionsRepositoryInstance&
   Linux_SambaGlobalProtocolOptionsRepositoryInstance::operator=
   (const Linux_SambaGlobalProtocolOptionsRepositoryInstance& original){   	
   	init(original);
   	return *this;
  };
  
  
  //converts to CmpiInstance
  CmpiInstance Linux_SambaGlobalProtocolOptionsRepositoryInstance::
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
  unsigned int Linux_SambaGlobalProtocolOptionsRepositoryInstance::
   isInstanceNameSet() const{
  	return isSet.instanceName;
  }
  
  const Linux_SambaGlobalProtocolOptionsInstanceName&
    Linux_SambaGlobalProtocolOptionsRepositoryInstance::getInstanceName() const{

    if(!isSet.instanceName)
   	  throw CmpiErrorFormater::getErrorException(
   	   CmpiErrorFormater::NOT_SET,
   	   "InstanceName not set in Linux_SambaGlobalProtocolOptions instance");
  		
   	return m_instanceName;
  }

  void Linux_SambaGlobalProtocolOptionsRepositoryInstance::setInstanceName(
   const Linux_SambaGlobalProtocolOptionsInstanceName& val){
    m_instanceName = val;
    isSet.instanceName=1;
  }


  
  //set isSet attributes to FALSE
  void Linux_SambaGlobalProtocolOptionsRepositoryInstance::init(){
   	isSet.instanceName=0;
   	  	
  };
  
  
  //copies another instance properties in this
  void Linux_SambaGlobalProtocolOptionsRepositoryInstance::init
   (const Linux_SambaGlobalProtocolOptionsRepositoryInstance& original){   	
   	init();
   	   	
    if(original.isInstanceNameSet()){
      setInstanceName(original.getInstanceName());
    }    
   }
  
  
  //reset the instance data
  void Linux_SambaGlobalProtocolOptionsRepositoryInstance::reset(){
   	
  	  
  };
  
  
  //*********************************************************
  //Linux_SambaGlobalProtocolOptionsRepositoryInstanceEnumerationElement	
  //*********************************************************
  
  Linux_SambaGlobalProtocolOptionsRepositoryInstanceEnumerationElement::
   Linux_SambaGlobalProtocolOptionsRepositoryInstanceEnumerationElement(){
   	
  	m_elementP=0;
  	m_nextP=0;
  	  
  };
  
  
  Linux_SambaGlobalProtocolOptionsRepositoryInstanceEnumerationElement::
   ~Linux_SambaGlobalProtocolOptionsRepositoryInstanceEnumerationElement(){
   	
  	if (m_elementP!=0)
  	  delete(m_elementP);
  	if (m_nextP!=0)
  	  delete(m_nextP);
  	  
  };

  
  //*********************************************************
  //Linux_SambaGlobalProtocolOptionsRepositoryInstanceNameEnumeration
  //*********************************************************

  Linux_SambaGlobalProtocolOptionsRepositoryInstanceEnumeration::
   Linux_SambaGlobalProtocolOptionsRepositoryInstanceEnumeration(){
   	
  	 firstElementP=0;
     currentElementP=0;
     endElementP=0;
  };
  
  Linux_SambaGlobalProtocolOptionsRepositoryInstanceEnumeration::
   Linux_SambaGlobalProtocolOptionsRepositoryInstanceEnumeration(
   const Linux_SambaGlobalProtocolOptionsRepositoryInstanceEnumeration& original){
   	
     firstElementP=0;
     currentElementP=0;
     endElementP=0;
  	 
     int size=original.getSize();
     for(int i=0;i<size;i++)
       addElement(original.getElement(i));           
  };
  
  	  
  Linux_SambaGlobalProtocolOptionsRepositoryInstanceEnumeration::
   ~Linux_SambaGlobalProtocolOptionsRepositoryInstanceEnumeration(){
   	
  	if (firstElementP!=0)
  	  delete(firstElementP);
  	  	
  };
  
  	  
  void Linux_SambaGlobalProtocolOptionsRepositoryInstanceEnumeration::reset(){
  	
  	currentElementP=firstElementP;
  };
  
  	  
  bool Linux_SambaGlobalProtocolOptionsRepositoryInstanceEnumeration::hasNext() const{
  	
  	return (currentElementP!=0);
  
  };
  
  int Linux_SambaGlobalProtocolOptionsRepositoryInstanceEnumeration::getSize() const{
  	
    int size=0;
    Linux_SambaGlobalProtocolOptionsRepositoryInstanceEnumerationElement* followingP=firstElementP;
  	
  	while(followingP!=0){
        followingP=followingP->m_nextP;
        size++;
    }
  	
    return size;
    
  };
  
  const Linux_SambaGlobalProtocolOptionsRepositoryInstance&  
   Linux_SambaGlobalProtocolOptionsRepositoryInstanceEnumeration::getElement(int pos) const{
   
    Linux_SambaGlobalProtocolOptionsRepositoryInstanceEnumerationElement* followingP=firstElementP;
   
    int i=0;
    while((followingP!=0)&&(i<pos)){
        followingP=followingP->m_nextP;
        i++;
    }
    
    return *(followingP->m_elementP);
  };
  
  	  
  const Linux_SambaGlobalProtocolOptionsRepositoryInstance&
   Linux_SambaGlobalProtocolOptionsRepositoryInstanceEnumeration::getNext() {
   	
  	 Linux_SambaGlobalProtocolOptionsRepositoryInstanceEnumerationElement* currentP=
  	  currentElementP;
  	 currentElementP=currentElementP->m_nextP;
  	 
  	 return *(currentP->m_elementP);
  };
  	  
  void Linux_SambaGlobalProtocolOptionsRepositoryInstanceEnumeration::addElement
   (const Linux_SambaGlobalProtocolOptionsRepositoryInstance& elementP){
   	
  	if(firstElementP==0){
  	  firstElementP=new Linux_SambaGlobalProtocolOptionsRepositoryInstanceEnumerationElement();
  	  firstElementP->m_elementP=new Linux_SambaGlobalProtocolOptionsRepositoryInstance(elementP);
  	  endElementP=firstElementP;
  	  currentElementP=firstElementP;
  	}else{
  	  endElementP->m_nextP=new Linux_SambaGlobalProtocolOptionsRepositoryInstanceEnumerationElement();
  	  endElementP=endElementP->m_nextP;
  	  endElementP->m_elementP=new Linux_SambaGlobalProtocolOptionsRepositoryInstance(elementP);
  	}
  };  
}
 
