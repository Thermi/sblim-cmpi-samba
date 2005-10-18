/**
 *  Linux_SambaCommonSecurityOptionsRepositoryInstance.cpp
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


#include "Linux_SambaCommonSecurityOptionsRepositoryInstance.h"
#include "CmpiData.h"
#include "CmpiString.h"
#include "CmpiArray.h"
#include <string>

namespace genProvider {

  //*********************************************************
  //Linux_SambaCommonSecurityOptionsRepositoryInstance
  //*********************************************************

  //empty constructor
  Linux_SambaCommonSecurityOptionsRepositoryInstance::
   Linux_SambaCommonSecurityOptionsRepositoryInstance(){   	
   	init();  	   	
  };
  
  
  //copy constructor	
  Linux_SambaCommonSecurityOptionsRepositoryInstance::
   Linux_SambaCommonSecurityOptionsRepositoryInstance
   (const Linux_SambaCommonSecurityOptionsRepositoryInstance& original){   	
   	init(original);  	   	
  };
  
  
  //constructor using CmpiInstance
  Linux_SambaCommonSecurityOptionsRepositoryInstance::
   Linux_SambaCommonSecurityOptionsRepositoryInstance (const CmpiInstance& inst, const char* instanceNamespace){
    CmpiData cmpiData;
    init(); 
    
    CmpiObjectPath cop=inst.getObjectPath();
    cop.setNameSpace(instanceNamespace);
    setInstanceName(Linux_SambaCommonSecurityOptionsInstanceName(cop));
    
  }
  
  
  //Destructor
  Linux_SambaCommonSecurityOptionsRepositoryInstance::
   ~Linux_SambaCommonSecurityOptionsRepositoryInstance(){
   	reset();  	  
  };
  
  
  //copy operator
  Linux_SambaCommonSecurityOptionsRepositoryInstance&
   Linux_SambaCommonSecurityOptionsRepositoryInstance::operator=
   (const Linux_SambaCommonSecurityOptionsRepositoryInstance& original){   	
   	init(original);
   	return *this;
  };
  
  
  //converts to CmpiInstance
  CmpiInstance Linux_SambaCommonSecurityOptionsRepositoryInstance::
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
  unsigned int Linux_SambaCommonSecurityOptionsRepositoryInstance::
   isInstanceNameSet() const{
  	return isSet.instanceName;
  }
  
  const Linux_SambaCommonSecurityOptionsInstanceName&
    Linux_SambaCommonSecurityOptionsRepositoryInstance::getInstanceName() const{

    if(!isSet.instanceName)
   	  throw CmpiErrorFormater::getErrorException(
   	   CmpiErrorFormater::NOT_SET,
   	   "InstanceName not set in Linux_SambaCommonSecurityOptions instance");
  		
   	return m_instanceName;
  }

  void Linux_SambaCommonSecurityOptionsRepositoryInstance::setInstanceName(
   const Linux_SambaCommonSecurityOptionsInstanceName& val){
    m_instanceName = val;
    isSet.instanceName=1;
  }


  
  //set isSet attributes to FALSE
  void Linux_SambaCommonSecurityOptionsRepositoryInstance::init(){
   	isSet.instanceName=0;
   	  	
  };
  
  
  //copies another instance properties in this
  void Linux_SambaCommonSecurityOptionsRepositoryInstance::init
   (const Linux_SambaCommonSecurityOptionsRepositoryInstance& original){   	
   	init();
   	   	
    if(original.isInstanceNameSet()){
      setInstanceName(original.getInstanceName());
    }    
   }
  
  
  //reset the instance data
  void Linux_SambaCommonSecurityOptionsRepositoryInstance::reset(){
   	
  	  
  };
  
  
  //*********************************************************
  //Linux_SambaCommonSecurityOptionsRepositoryInstanceEnumerationElement	
  //*********************************************************
  
  Linux_SambaCommonSecurityOptionsRepositoryInstanceEnumerationElement::
   Linux_SambaCommonSecurityOptionsRepositoryInstanceEnumerationElement(){
   	
  	m_elementP=0;
  	m_nextP=0;
  	  
  };
  
  
  Linux_SambaCommonSecurityOptionsRepositoryInstanceEnumerationElement::
   ~Linux_SambaCommonSecurityOptionsRepositoryInstanceEnumerationElement(){
   	
  	if (m_elementP!=0)
  	  delete(m_elementP);
  	if (m_nextP!=0)
  	  delete(m_nextP);
  	  
  };

  
  //*********************************************************
  //Linux_SambaCommonSecurityOptionsRepositoryInstanceNameEnumeration
  //*********************************************************

  Linux_SambaCommonSecurityOptionsRepositoryInstanceEnumeration::
   Linux_SambaCommonSecurityOptionsRepositoryInstanceEnumeration(){
   	
  	 firstElementP=0;
     currentElementP=0;
     endElementP=0;
  };
  
  Linux_SambaCommonSecurityOptionsRepositoryInstanceEnumeration::
   Linux_SambaCommonSecurityOptionsRepositoryInstanceEnumeration(
   const Linux_SambaCommonSecurityOptionsRepositoryInstanceEnumeration& original){
   	
     firstElementP=0;
     currentElementP=0;
     endElementP=0;
  	 
     int size=original.getSize();
     for(int i=0;i<size;i++)
       addElement(original.getElement(i));           
  };
  
  	  
  Linux_SambaCommonSecurityOptionsRepositoryInstanceEnumeration::
   ~Linux_SambaCommonSecurityOptionsRepositoryInstanceEnumeration(){
   	
  	if (firstElementP!=0)
  	  delete(firstElementP);
  	  	
  };
  
  	  
  void Linux_SambaCommonSecurityOptionsRepositoryInstanceEnumeration::reset(){
  	
  	currentElementP=firstElementP;
  };
  
  	  
  bool Linux_SambaCommonSecurityOptionsRepositoryInstanceEnumeration::hasNext() const{
  	
  	return (currentElementP!=0);
  
  };
  
  int Linux_SambaCommonSecurityOptionsRepositoryInstanceEnumeration::getSize() const{
  	
    int size=0;
    Linux_SambaCommonSecurityOptionsRepositoryInstanceEnumerationElement* followingP=firstElementP;
  	
  	while(followingP!=0){
        followingP=followingP->m_nextP;
        size++;
    }
  	
    return size;
    
  };
  
  const Linux_SambaCommonSecurityOptionsRepositoryInstance&  
   Linux_SambaCommonSecurityOptionsRepositoryInstanceEnumeration::getElement(int pos) const{
   
    Linux_SambaCommonSecurityOptionsRepositoryInstanceEnumerationElement* followingP=firstElementP;
   
    int i=0;
    while((followingP!=0)&&(i<pos)){
        followingP=followingP->m_nextP;
        i++;
    }
    
    return *(followingP->m_elementP);
  };
  
  	  
  const Linux_SambaCommonSecurityOptionsRepositoryInstance&
   Linux_SambaCommonSecurityOptionsRepositoryInstanceEnumeration::getNext() {
   	
  	 Linux_SambaCommonSecurityOptionsRepositoryInstanceEnumerationElement* currentP=
  	  currentElementP;
  	 currentElementP=currentElementP->m_nextP;
  	 
  	 return *(currentP->m_elementP);
  };
  	  
  void Linux_SambaCommonSecurityOptionsRepositoryInstanceEnumeration::addElement
   (const Linux_SambaCommonSecurityOptionsRepositoryInstance& elementP){
   	
  	if(firstElementP==0){
  	  firstElementP=new Linux_SambaCommonSecurityOptionsRepositoryInstanceEnumerationElement();
  	  firstElementP->m_elementP=new Linux_SambaCommonSecurityOptionsRepositoryInstance(elementP);
  	  endElementP=firstElementP;
  	  currentElementP=firstElementP;
  	}else{
  	  endElementP->m_nextP=new Linux_SambaCommonSecurityOptionsRepositoryInstanceEnumerationElement();
  	  endElementP=endElementP->m_nextP;
  	  endElementP->m_elementP=new Linux_SambaCommonSecurityOptionsRepositoryInstance(elementP);
  	}
  };  
}
 
