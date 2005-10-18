/**
 *  Linux_SambaShareForServiceRepositoryInstance.cpp
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


#include "Linux_SambaShareForServiceRepositoryInstance.h"
#include "CmpiData.h"
#include "CmpiString.h"
#include "CmpiArray.h"
#include <string>

namespace genProvider {

  //*********************************************************
  //Linux_SambaShareForServiceRepositoryInstance
  //*********************************************************

  //empty constructor
  Linux_SambaShareForServiceRepositoryInstance::
   Linux_SambaShareForServiceRepositoryInstance(){   	
   	init();  	   	
  };
  
  
  //copy constructor	
  Linux_SambaShareForServiceRepositoryInstance::
   Linux_SambaShareForServiceRepositoryInstance
   (const Linux_SambaShareForServiceRepositoryInstance& original){   	
   	init(original);  	   	
  };
  
  
  //constructor using CmpiInstance
  Linux_SambaShareForServiceRepositoryInstance::
   Linux_SambaShareForServiceRepositoryInstance (const CmpiInstance& inst, const char* instanceNamespace){
    CmpiData cmpiData;
    init(); 
    
    CmpiObjectPath cop=inst.getObjectPath();
    cop.setNameSpace(instanceNamespace);
    setInstanceName(Linux_SambaShareForServiceInstanceName(cop));
    
  }
  
  
  //Destructor
  Linux_SambaShareForServiceRepositoryInstance::
   ~Linux_SambaShareForServiceRepositoryInstance(){
   	reset();  	  
  };
  
  
  //copy operator
  Linux_SambaShareForServiceRepositoryInstance&
   Linux_SambaShareForServiceRepositoryInstance::operator=
   (const Linux_SambaShareForServiceRepositoryInstance& original){   	
   	init(original);
   	return *this;
  };
  
  
  //converts to CmpiInstance
  CmpiInstance Linux_SambaShareForServiceRepositoryInstance::
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
  unsigned int Linux_SambaShareForServiceRepositoryInstance::
   isInstanceNameSet() const{
  	return isSet.instanceName;
  }
  
  const Linux_SambaShareForServiceInstanceName&
    Linux_SambaShareForServiceRepositoryInstance::getInstanceName() const{

    if(!isSet.instanceName)
   	  throw CmpiErrorFormater::getErrorException(
   	   CmpiErrorFormater::NOT_SET,
   	   "InstanceName not set in Linux_SambaShareForService instance");
  		
   	return m_instanceName;
  }

  void Linux_SambaShareForServiceRepositoryInstance::setInstanceName(
   const Linux_SambaShareForServiceInstanceName& val){
    m_instanceName = val;
    isSet.instanceName=1;
  }


  
  //set isSet attributes to FALSE
  void Linux_SambaShareForServiceRepositoryInstance::init(){
   	isSet.instanceName=0;
   	  	
  };
  
  
  //copies another instance properties in this
  void Linux_SambaShareForServiceRepositoryInstance::init
   (const Linux_SambaShareForServiceRepositoryInstance& original){   	
   	init();
   	   	
    if(original.isInstanceNameSet()){
      setInstanceName(original.getInstanceName());
    }    
   }
  
  
  //reset the instance data
  void Linux_SambaShareForServiceRepositoryInstance::reset(){
   	
  	  
  };
  
  
  //*********************************************************
  //Linux_SambaShareForServiceRepositoryInstanceEnumerationElement	
  //*********************************************************
  
  Linux_SambaShareForServiceRepositoryInstanceEnumerationElement::
   Linux_SambaShareForServiceRepositoryInstanceEnumerationElement(){
   	
  	m_elementP=0;
  	m_nextP=0;
  	  
  };
  
  
  Linux_SambaShareForServiceRepositoryInstanceEnumerationElement::
   ~Linux_SambaShareForServiceRepositoryInstanceEnumerationElement(){
   	
  	if (m_elementP!=0)
  	  delete(m_elementP);
  	if (m_nextP!=0)
  	  delete(m_nextP);
  	  
  };

  
  //*********************************************************
  //Linux_SambaShareForServiceRepositoryInstanceNameEnumeration
  //*********************************************************

  Linux_SambaShareForServiceRepositoryInstanceEnumeration::
   Linux_SambaShareForServiceRepositoryInstanceEnumeration(){
   	
  	 firstElementP=0;
     currentElementP=0;
     endElementP=0;
  };
  
  Linux_SambaShareForServiceRepositoryInstanceEnumeration::
   Linux_SambaShareForServiceRepositoryInstanceEnumeration(
   const Linux_SambaShareForServiceRepositoryInstanceEnumeration& original){
   	
     firstElementP=0;
     currentElementP=0;
     endElementP=0;
  	 
     int size=original.getSize();
     for(int i=0;i<size;i++)
       addElement(original.getElement(i));           
  };
  
  	  
  Linux_SambaShareForServiceRepositoryInstanceEnumeration::
   ~Linux_SambaShareForServiceRepositoryInstanceEnumeration(){
   	
  	if (firstElementP!=0)
  	  delete(firstElementP);
  	  	
  };
  
  	  
  void Linux_SambaShareForServiceRepositoryInstanceEnumeration::reset(){
  	
  	currentElementP=firstElementP;
  };
  
  	  
  bool Linux_SambaShareForServiceRepositoryInstanceEnumeration::hasNext() const{
  	
  	return (currentElementP!=0);
  
  };
  
  int Linux_SambaShareForServiceRepositoryInstanceEnumeration::getSize() const{
  	
    int size=0;
    Linux_SambaShareForServiceRepositoryInstanceEnumerationElement* followingP=firstElementP;
  	
  	while(followingP!=0){
        followingP=followingP->m_nextP;
        size++;
    }
  	
    return size;
    
  };
  
  const Linux_SambaShareForServiceRepositoryInstance&  
   Linux_SambaShareForServiceRepositoryInstanceEnumeration::getElement(int pos) const{
   
    Linux_SambaShareForServiceRepositoryInstanceEnumerationElement* followingP=firstElementP;
   
    int i=0;
    while((followingP!=0)&&(i<pos)){
        followingP=followingP->m_nextP;
        i++;
    }
    
    return *(followingP->m_elementP);
  };
  
  	  
  const Linux_SambaShareForServiceRepositoryInstance&
   Linux_SambaShareForServiceRepositoryInstanceEnumeration::getNext() {
   	
  	 Linux_SambaShareForServiceRepositoryInstanceEnumerationElement* currentP=
  	  currentElementP;
  	 currentElementP=currentElementP->m_nextP;
  	 
  	 return *(currentP->m_elementP);
  };
  	  
  void Linux_SambaShareForServiceRepositoryInstanceEnumeration::addElement
   (const Linux_SambaShareForServiceRepositoryInstance& elementP){
   	
  	if(firstElementP==0){
  	  firstElementP=new Linux_SambaShareForServiceRepositoryInstanceEnumerationElement();
  	  firstElementP->m_elementP=new Linux_SambaShareForServiceRepositoryInstance(elementP);
  	  endElementP=firstElementP;
  	  currentElementP=firstElementP;
  	}else{
  	  endElementP->m_nextP=new Linux_SambaShareForServiceRepositoryInstanceEnumerationElement();
  	  endElementP=endElementP->m_nextP;
  	  endElementP->m_elementP=new Linux_SambaShareForServiceRepositoryInstance(elementP);
  	}
  };  
}
 
