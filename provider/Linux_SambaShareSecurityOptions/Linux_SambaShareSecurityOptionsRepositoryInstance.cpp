/**
 *  Linux_SambaShareSecurityOptionsRepositoryInstance.cpp
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


#include "Linux_SambaShareSecurityOptionsRepositoryInstance.h"
#include "CmpiData.h"
#include "CmpiString.h"
#include "CmpiArray.h"
#include <string>

namespace genProvider {

  //*********************************************************
  //Linux_SambaShareSecurityOptionsRepositoryInstance
  //*********************************************************

  //empty constructor
  Linux_SambaShareSecurityOptionsRepositoryInstance::
   Linux_SambaShareSecurityOptionsRepositoryInstance(){   	
   	init();  	   	
  };
  
  
  //copy constructor	
  Linux_SambaShareSecurityOptionsRepositoryInstance::
   Linux_SambaShareSecurityOptionsRepositoryInstance
   (const Linux_SambaShareSecurityOptionsRepositoryInstance& original){   	
   	init(original);  	   	
  };
  
  
  //constructor using CmpiInstance
  Linux_SambaShareSecurityOptionsRepositoryInstance::
   Linux_SambaShareSecurityOptionsRepositoryInstance (const CmpiInstance& inst, const char* instanceNamespace){
    CmpiData cmpiData;
    init(); 
    
    CmpiObjectPath cop=inst.getObjectPath();
    cop.setNameSpace(instanceNamespace);
    setInstanceName(Linux_SambaShareSecurityOptionsInstanceName(cop));
    
  }
  
  
  //Destructor
  Linux_SambaShareSecurityOptionsRepositoryInstance::
   ~Linux_SambaShareSecurityOptionsRepositoryInstance(){
   	reset();  	  
  };
  
  
  //copy operator
  Linux_SambaShareSecurityOptionsRepositoryInstance&
   Linux_SambaShareSecurityOptionsRepositoryInstance::operator=
   (const Linux_SambaShareSecurityOptionsRepositoryInstance& original){   	
   	init(original);
   	return *this;
  };
  
  
  //converts to CmpiInstance
  CmpiInstance Linux_SambaShareSecurityOptionsRepositoryInstance::
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
  unsigned int Linux_SambaShareSecurityOptionsRepositoryInstance::
   isInstanceNameSet() const{
  	return isSet.instanceName;
  }
  
  const Linux_SambaShareSecurityOptionsInstanceName&
    Linux_SambaShareSecurityOptionsRepositoryInstance::getInstanceName() const{

    if(!isSet.instanceName)
   	  throw CmpiErrorFormater::getErrorException(
   	   CmpiErrorFormater::NOT_SET,
   	   "InstanceName not set in Linux_SambaShareSecurityOptions instance");
  		
   	return m_instanceName;
  }

  void Linux_SambaShareSecurityOptionsRepositoryInstance::setInstanceName(
   const Linux_SambaShareSecurityOptionsInstanceName& val){
    m_instanceName = val;
    isSet.instanceName=1;
  }


  
  //set isSet attributes to FALSE
  void Linux_SambaShareSecurityOptionsRepositoryInstance::init(){
   	isSet.instanceName=0;
   	  	
  };
  
  
  //copies another instance properties in this
  void Linux_SambaShareSecurityOptionsRepositoryInstance::init
   (const Linux_SambaShareSecurityOptionsRepositoryInstance& original){   	
   	init();
   	   	
    if(original.isInstanceNameSet()){
      setInstanceName(original.getInstanceName());
    }    
   }
  
  
  //reset the instance data
  void Linux_SambaShareSecurityOptionsRepositoryInstance::reset(){
   	
  	  
  };
  
  
  //*********************************************************
  //Linux_SambaShareSecurityOptionsRepositoryInstanceEnumerationElement	
  //*********************************************************
  
  Linux_SambaShareSecurityOptionsRepositoryInstanceEnumerationElement::
   Linux_SambaShareSecurityOptionsRepositoryInstanceEnumerationElement(){
   	
  	m_elementP=0;
  	m_nextP=0;
  	  
  };
  
  
  Linux_SambaShareSecurityOptionsRepositoryInstanceEnumerationElement::
   ~Linux_SambaShareSecurityOptionsRepositoryInstanceEnumerationElement(){
   	
  	if (m_elementP!=0)
  	  delete(m_elementP);
  	if (m_nextP!=0)
  	  delete(m_nextP);
  	  
  };

  
  //*********************************************************
  //Linux_SambaShareSecurityOptionsRepositoryInstanceNameEnumeration
  //*********************************************************

  Linux_SambaShareSecurityOptionsRepositoryInstanceEnumeration::
   Linux_SambaShareSecurityOptionsRepositoryInstanceEnumeration(){
   	
  	 firstElementP=0;
     currentElementP=0;
     endElementP=0;
  };
  
  Linux_SambaShareSecurityOptionsRepositoryInstanceEnumeration::
   Linux_SambaShareSecurityOptionsRepositoryInstanceEnumeration(
   const Linux_SambaShareSecurityOptionsRepositoryInstanceEnumeration& original){
   	
     firstElementP=0;
     currentElementP=0;
     endElementP=0;
  	 
     int size=original.getSize();
     for(int i=0;i<size;i++)
       addElement(original.getElement(i));           
  };
  
  	  
  Linux_SambaShareSecurityOptionsRepositoryInstanceEnumeration::
   ~Linux_SambaShareSecurityOptionsRepositoryInstanceEnumeration(){
   	
  	if (firstElementP!=0)
  	  delete(firstElementP);
  	  	
  };
  
  	  
  void Linux_SambaShareSecurityOptionsRepositoryInstanceEnumeration::reset(){
  	
  	currentElementP=firstElementP;
  };
  
  	  
  bool Linux_SambaShareSecurityOptionsRepositoryInstanceEnumeration::hasNext() const{
  	
  	return (currentElementP!=0);
  
  };
  
  int Linux_SambaShareSecurityOptionsRepositoryInstanceEnumeration::getSize() const{
  	
    int size=0;
    Linux_SambaShareSecurityOptionsRepositoryInstanceEnumerationElement* followingP=firstElementP;
  	
  	while(followingP!=0){
        followingP=followingP->m_nextP;
        size++;
    }
  	
    return size;
    
  };
  
  const Linux_SambaShareSecurityOptionsRepositoryInstance&  
   Linux_SambaShareSecurityOptionsRepositoryInstanceEnumeration::getElement(int pos) const{
   
    Linux_SambaShareSecurityOptionsRepositoryInstanceEnumerationElement* followingP=firstElementP;
   
    int i=0;
    while((followingP!=0)&&(i<pos)){
        followingP=followingP->m_nextP;
        i++;
    }
    
    return *(followingP->m_elementP);
  };
  
  	  
  const Linux_SambaShareSecurityOptionsRepositoryInstance&
   Linux_SambaShareSecurityOptionsRepositoryInstanceEnumeration::getNext() {
   	
  	 Linux_SambaShareSecurityOptionsRepositoryInstanceEnumerationElement* currentP=
  	  currentElementP;
  	 currentElementP=currentElementP->m_nextP;
  	 
  	 return *(currentP->m_elementP);
  };
  	  
  void Linux_SambaShareSecurityOptionsRepositoryInstanceEnumeration::addElement
   (const Linux_SambaShareSecurityOptionsRepositoryInstance& elementP){
   	
  	if(firstElementP==0){
  	  firstElementP=new Linux_SambaShareSecurityOptionsRepositoryInstanceEnumerationElement();
  	  firstElementP->m_elementP=new Linux_SambaShareSecurityOptionsRepositoryInstance(elementP);
  	  endElementP=firstElementP;
  	  currentElementP=firstElementP;
  	}else{
  	  endElementP->m_nextP=new Linux_SambaShareSecurityOptionsRepositoryInstanceEnumerationElement();
  	  endElementP=endElementP->m_nextP;
  	  endElementP->m_elementP=new Linux_SambaShareSecurityOptionsRepositoryInstance(elementP);
  	}
  };  
}
 
