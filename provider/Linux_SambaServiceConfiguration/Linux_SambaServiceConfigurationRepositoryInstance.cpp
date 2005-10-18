/**
 *  Linux_SambaServiceConfigurationRepositoryInstance.cpp
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


#include "Linux_SambaServiceConfigurationRepositoryInstance.h"
#include "CmpiData.h"
#include "CmpiString.h"
#include "CmpiArray.h"
#include <string>

namespace genProvider {

  //*********************************************************
  //Linux_SambaServiceConfigurationRepositoryInstance
  //*********************************************************

  //empty constructor
  Linux_SambaServiceConfigurationRepositoryInstance::
   Linux_SambaServiceConfigurationRepositoryInstance(){   	
   	init();  	   	
  };
  
  
  //copy constructor	
  Linux_SambaServiceConfigurationRepositoryInstance::
   Linux_SambaServiceConfigurationRepositoryInstance
   (const Linux_SambaServiceConfigurationRepositoryInstance& original){   	
   	init(original);  	   	
  };
  
  
  //constructor using CmpiInstance
  Linux_SambaServiceConfigurationRepositoryInstance::
   Linux_SambaServiceConfigurationRepositoryInstance (const CmpiInstance& inst, const char* instanceNamespace){
    CmpiData cmpiData;
    init(); 
    
    CmpiObjectPath cop=inst.getObjectPath();
    cop.setNameSpace(instanceNamespace);
    setInstanceName(Linux_SambaServiceConfigurationInstanceName(cop));
    
  }
  
  
  //Destructor
  Linux_SambaServiceConfigurationRepositoryInstance::
   ~Linux_SambaServiceConfigurationRepositoryInstance(){
   	reset();  	  
  };
  
  
  //copy operator
  Linux_SambaServiceConfigurationRepositoryInstance&
   Linux_SambaServiceConfigurationRepositoryInstance::operator=
   (const Linux_SambaServiceConfigurationRepositoryInstance& original){   	
   	init(original);
   	return *this;
  };
  
  
  //converts to CmpiInstance
  CmpiInstance Linux_SambaServiceConfigurationRepositoryInstance::
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
  unsigned int Linux_SambaServiceConfigurationRepositoryInstance::
   isInstanceNameSet() const{
  	return isSet.instanceName;
  }
  
  const Linux_SambaServiceConfigurationInstanceName&
    Linux_SambaServiceConfigurationRepositoryInstance::getInstanceName() const{

    if(!isSet.instanceName)
   	  throw CmpiErrorFormater::getErrorException(
   	   CmpiErrorFormater::NOT_SET,
   	   "InstanceName not set in Linux_SambaServiceConfiguration instance");
  		
   	return m_instanceName;
  }

  void Linux_SambaServiceConfigurationRepositoryInstance::setInstanceName(
   const Linux_SambaServiceConfigurationInstanceName& val){
    m_instanceName = val;
    isSet.instanceName=1;
  }


  
  //set isSet attributes to FALSE
  void Linux_SambaServiceConfigurationRepositoryInstance::init(){
   	isSet.instanceName=0;
   	  	
  };
  
  
  //copies another instance properties in this
  void Linux_SambaServiceConfigurationRepositoryInstance::init
   (const Linux_SambaServiceConfigurationRepositoryInstance& original){   	
   	init();
   	   	
    if(original.isInstanceNameSet()){
      setInstanceName(original.getInstanceName());
    }    
   }
  
  
  //reset the instance data
  void Linux_SambaServiceConfigurationRepositoryInstance::reset(){
   	
  	  
  };
  
  
  //*********************************************************
  //Linux_SambaServiceConfigurationRepositoryInstanceEnumerationElement	
  //*********************************************************
  
  Linux_SambaServiceConfigurationRepositoryInstanceEnumerationElement::
   Linux_SambaServiceConfigurationRepositoryInstanceEnumerationElement(){
   	
  	m_elementP=0;
  	m_nextP=0;
  	  
  };
  
  
  Linux_SambaServiceConfigurationRepositoryInstanceEnumerationElement::
   ~Linux_SambaServiceConfigurationRepositoryInstanceEnumerationElement(){
   	
  	if (m_elementP!=0)
  	  delete(m_elementP);
  	if (m_nextP!=0)
  	  delete(m_nextP);
  	  
  };

  
  //*********************************************************
  //Linux_SambaServiceConfigurationRepositoryInstanceNameEnumeration
  //*********************************************************

  Linux_SambaServiceConfigurationRepositoryInstanceEnumeration::
   Linux_SambaServiceConfigurationRepositoryInstanceEnumeration(){
   	
  	 firstElementP=0;
     currentElementP=0;
     endElementP=0;
  };
  
  Linux_SambaServiceConfigurationRepositoryInstanceEnumeration::
   Linux_SambaServiceConfigurationRepositoryInstanceEnumeration(
   const Linux_SambaServiceConfigurationRepositoryInstanceEnumeration& original){
   	
     firstElementP=0;
     currentElementP=0;
     endElementP=0;
  	 
     int size=original.getSize();
     for(int i=0;i<size;i++)
       addElement(original.getElement(i));           
  };
  
  	  
  Linux_SambaServiceConfigurationRepositoryInstanceEnumeration::
   ~Linux_SambaServiceConfigurationRepositoryInstanceEnumeration(){
   	
  	if (firstElementP!=0)
  	  delete(firstElementP);
  	  	
  };
  
  	  
  void Linux_SambaServiceConfigurationRepositoryInstanceEnumeration::reset(){
  	
  	currentElementP=firstElementP;
  };
  
  	  
  bool Linux_SambaServiceConfigurationRepositoryInstanceEnumeration::hasNext() const{
  	
  	return (currentElementP!=0);
  
  };
  
  int Linux_SambaServiceConfigurationRepositoryInstanceEnumeration::getSize() const{
  	
    int size=0;
    Linux_SambaServiceConfigurationRepositoryInstanceEnumerationElement* followingP=firstElementP;
  	
  	while(followingP!=0){
        followingP=followingP->m_nextP;
        size++;
    }
  	
    return size;
    
  };
  
  const Linux_SambaServiceConfigurationRepositoryInstance&  
   Linux_SambaServiceConfigurationRepositoryInstanceEnumeration::getElement(int pos) const{
   
    Linux_SambaServiceConfigurationRepositoryInstanceEnumerationElement* followingP=firstElementP;
   
    int i=0;
    while((followingP!=0)&&(i<pos)){
        followingP=followingP->m_nextP;
        i++;
    }
    
    return *(followingP->m_elementP);
  };
  
  	  
  const Linux_SambaServiceConfigurationRepositoryInstance&
   Linux_SambaServiceConfigurationRepositoryInstanceEnumeration::getNext() {
   	
  	 Linux_SambaServiceConfigurationRepositoryInstanceEnumerationElement* currentP=
  	  currentElementP;
  	 currentElementP=currentElementP->m_nextP;
  	 
  	 return *(currentP->m_elementP);
  };
  	  
  void Linux_SambaServiceConfigurationRepositoryInstanceEnumeration::addElement
   (const Linux_SambaServiceConfigurationRepositoryInstance& elementP){
   	
  	if(firstElementP==0){
  	  firstElementP=new Linux_SambaServiceConfigurationRepositoryInstanceEnumerationElement();
  	  firstElementP->m_elementP=new Linux_SambaServiceConfigurationRepositoryInstance(elementP);
  	  endElementP=firstElementP;
  	  currentElementP=firstElementP;
  	}else{
  	  endElementP->m_nextP=new Linux_SambaServiceConfigurationRepositoryInstanceEnumerationElement();
  	  endElementP=endElementP->m_nextP;
  	  endElementP->m_elementP=new Linux_SambaServiceConfigurationRepositoryInstance(elementP);
  	}
  };  
}
 
