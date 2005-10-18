/**
 *  Linux_SambaServiceConfigurationForServiceRepositoryInstance.cpp
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


#include "Linux_SambaServiceConfigurationForServiceRepositoryInstance.h"
#include "CmpiData.h"
#include "CmpiString.h"
#include "CmpiArray.h"
#include <string>

namespace genProvider {

  //*********************************************************
  //Linux_SambaServiceConfigurationForServiceRepositoryInstance
  //*********************************************************

  //empty constructor
  Linux_SambaServiceConfigurationForServiceRepositoryInstance::
   Linux_SambaServiceConfigurationForServiceRepositoryInstance(){   	
   	init();  	   	
  };
  
  
  //copy constructor	
  Linux_SambaServiceConfigurationForServiceRepositoryInstance::
   Linux_SambaServiceConfigurationForServiceRepositoryInstance
   (const Linux_SambaServiceConfigurationForServiceRepositoryInstance& original){   	
   	init(original);  	   	
  };
  
  
  //constructor using CmpiInstance
  Linux_SambaServiceConfigurationForServiceRepositoryInstance::
   Linux_SambaServiceConfigurationForServiceRepositoryInstance (const CmpiInstance& inst, const char* instanceNamespace){
    CmpiData cmpiData;
    init(); 
    
    CmpiObjectPath cop=inst.getObjectPath();
    cop.setNameSpace(instanceNamespace);
    setInstanceName(Linux_SambaServiceConfigurationForServiceInstanceName(cop));
    
  }
  
  
  //Destructor
  Linux_SambaServiceConfigurationForServiceRepositoryInstance::
   ~Linux_SambaServiceConfigurationForServiceRepositoryInstance(){
   	reset();  	  
  };
  
  
  //copy operator
  Linux_SambaServiceConfigurationForServiceRepositoryInstance&
   Linux_SambaServiceConfigurationForServiceRepositoryInstance::operator=
   (const Linux_SambaServiceConfigurationForServiceRepositoryInstance& original){   	
   	init(original);
   	return *this;
  };
  
  
  //converts to CmpiInstance
  CmpiInstance Linux_SambaServiceConfigurationForServiceRepositoryInstance::
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
  unsigned int Linux_SambaServiceConfigurationForServiceRepositoryInstance::
   isInstanceNameSet() const{
  	return isSet.instanceName;
  }
  
  const Linux_SambaServiceConfigurationForServiceInstanceName&
    Linux_SambaServiceConfigurationForServiceRepositoryInstance::getInstanceName() const{

    if(!isSet.instanceName)
   	  throw CmpiErrorFormater::getErrorException(
   	   CmpiErrorFormater::NOT_SET,
   	   "InstanceName not set in Linux_SambaServiceConfigurationForService instance");
  		
   	return m_instanceName;
  }

  void Linux_SambaServiceConfigurationForServiceRepositoryInstance::setInstanceName(
   const Linux_SambaServiceConfigurationForServiceInstanceName& val){
    m_instanceName = val;
    isSet.instanceName=1;
  }


  
  //set isSet attributes to FALSE
  void Linux_SambaServiceConfigurationForServiceRepositoryInstance::init(){
   	isSet.instanceName=0;
   	  	
  };
  
  
  //copies another instance properties in this
  void Linux_SambaServiceConfigurationForServiceRepositoryInstance::init
   (const Linux_SambaServiceConfigurationForServiceRepositoryInstance& original){   	
   	init();
   	   	
    if(original.isInstanceNameSet()){
      setInstanceName(original.getInstanceName());
    }    
   }
  
  
  //reset the instance data
  void Linux_SambaServiceConfigurationForServiceRepositoryInstance::reset(){
   	
  	  
  };
  
  
  //*********************************************************
  //Linux_SambaServiceConfigurationForServiceRepositoryInstanceEnumerationElement	
  //*********************************************************
  
  Linux_SambaServiceConfigurationForServiceRepositoryInstanceEnumerationElement::
   Linux_SambaServiceConfigurationForServiceRepositoryInstanceEnumerationElement(){
   	
  	m_elementP=0;
  	m_nextP=0;
  	  
  };
  
  
  Linux_SambaServiceConfigurationForServiceRepositoryInstanceEnumerationElement::
   ~Linux_SambaServiceConfigurationForServiceRepositoryInstanceEnumerationElement(){
   	
  	if (m_elementP!=0)
  	  delete(m_elementP);
  	if (m_nextP!=0)
  	  delete(m_nextP);
  	  
  };

  
  //*********************************************************
  //Linux_SambaServiceConfigurationForServiceRepositoryInstanceNameEnumeration
  //*********************************************************

  Linux_SambaServiceConfigurationForServiceRepositoryInstanceEnumeration::
   Linux_SambaServiceConfigurationForServiceRepositoryInstanceEnumeration(){
   	
  	 firstElementP=0;
     currentElementP=0;
     endElementP=0;
  };
  
  Linux_SambaServiceConfigurationForServiceRepositoryInstanceEnumeration::
   Linux_SambaServiceConfigurationForServiceRepositoryInstanceEnumeration(
   const Linux_SambaServiceConfigurationForServiceRepositoryInstanceEnumeration& original){
   	
     firstElementP=0;
     currentElementP=0;
     endElementP=0;
  	 
     int size=original.getSize();
     for(int i=0;i<size;i++)
       addElement(original.getElement(i));           
  };
  
  	  
  Linux_SambaServiceConfigurationForServiceRepositoryInstanceEnumeration::
   ~Linux_SambaServiceConfigurationForServiceRepositoryInstanceEnumeration(){
   	
  	if (firstElementP!=0)
  	  delete(firstElementP);
  	  	
  };
  
  	  
  void Linux_SambaServiceConfigurationForServiceRepositoryInstanceEnumeration::reset(){
  	
  	currentElementP=firstElementP;
  };
  
  	  
  bool Linux_SambaServiceConfigurationForServiceRepositoryInstanceEnumeration::hasNext() const{
  	
  	return (currentElementP!=0);
  
  };
  
  int Linux_SambaServiceConfigurationForServiceRepositoryInstanceEnumeration::getSize() const{
  	
    int size=0;
    Linux_SambaServiceConfigurationForServiceRepositoryInstanceEnumerationElement* followingP=firstElementP;
  	
  	while(followingP!=0){
        followingP=followingP->m_nextP;
        size++;
    }
  	
    return size;
    
  };
  
  const Linux_SambaServiceConfigurationForServiceRepositoryInstance&  
   Linux_SambaServiceConfigurationForServiceRepositoryInstanceEnumeration::getElement(int pos) const{
   
    Linux_SambaServiceConfigurationForServiceRepositoryInstanceEnumerationElement* followingP=firstElementP;
   
    int i=0;
    while((followingP!=0)&&(i<pos)){
        followingP=followingP->m_nextP;
        i++;
    }
    
    return *(followingP->m_elementP);
  };
  
  	  
  const Linux_SambaServiceConfigurationForServiceRepositoryInstance&
   Linux_SambaServiceConfigurationForServiceRepositoryInstanceEnumeration::getNext() {
   	
  	 Linux_SambaServiceConfigurationForServiceRepositoryInstanceEnumerationElement* currentP=
  	  currentElementP;
  	 currentElementP=currentElementP->m_nextP;
  	 
  	 return *(currentP->m_elementP);
  };
  	  
  void Linux_SambaServiceConfigurationForServiceRepositoryInstanceEnumeration::addElement
   (const Linux_SambaServiceConfigurationForServiceRepositoryInstance& elementP){
   	
  	if(firstElementP==0){
  	  firstElementP=new Linux_SambaServiceConfigurationForServiceRepositoryInstanceEnumerationElement();
  	  firstElementP->m_elementP=new Linux_SambaServiceConfigurationForServiceRepositoryInstance(elementP);
  	  endElementP=firstElementP;
  	  currentElementP=firstElementP;
  	}else{
  	  endElementP->m_nextP=new Linux_SambaServiceConfigurationForServiceRepositoryInstanceEnumerationElement();
  	  endElementP=endElementP->m_nextP;
  	  endElementP->m_elementP=new Linux_SambaServiceConfigurationForServiceRepositoryInstance(elementP);
  	}
  };  
}
 
