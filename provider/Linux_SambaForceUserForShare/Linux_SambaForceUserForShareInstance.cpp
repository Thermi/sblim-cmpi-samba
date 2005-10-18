/**
 *  Linux_SambaForceUserForShareInstance.cpp
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


#include "Linux_SambaForceUserForShareInstance.h"
#include "CmpiData.h"
#include "CmpiString.h"
#include "CmpiArray.h"
#include <string>

namespace genProvider {

  //*********************************************************
  //Linux_SambaForceUserForShareInstance
  //*********************************************************

  //empty constructor
  Linux_SambaForceUserForShareInstance::
   Linux_SambaForceUserForShareInstance(){   	
   	init();  	   	
  };
  
  
  //copy constructor	
  Linux_SambaForceUserForShareInstance::
   Linux_SambaForceUserForShareInstance
   (const Linux_SambaForceUserForShareInstance& original){   	
   	init(original);  	   	
  };
  
  
  //constructor using CmpiInstance
  Linux_SambaForceUserForShareInstance::
   Linux_SambaForceUserForShareInstance (const CmpiInstance& inst, const char* instanceNamespace){
    CmpiData cmpiData;
    init(); 
    
    CmpiObjectPath cop=inst.getObjectPath();
    cop.setNameSpace(instanceNamespace);
    setInstanceName(Linux_SambaForceUserForShareInstanceName(cop));
    
  }
  
  
  //Destructor
  Linux_SambaForceUserForShareInstance::
   ~Linux_SambaForceUserForShareInstance(){
   	reset();  	  
  };
  
  
  //copy operator
  Linux_SambaForceUserForShareInstance&
   Linux_SambaForceUserForShareInstance::operator=
   (const Linux_SambaForceUserForShareInstance& original){   	
   	init(original);
   	return *this;
  };
  
  
  //converts to CmpiInstance
  CmpiInstance Linux_SambaForceUserForShareInstance::
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
  unsigned int Linux_SambaForceUserForShareInstance::
   isInstanceNameSet() const{
  	return isSet.instanceName;
  }
  
  const Linux_SambaForceUserForShareInstanceName&
    Linux_SambaForceUserForShareInstance::getInstanceName() const{

    if(!isSet.instanceName)
   	  throw CmpiErrorFormater::getErrorException(
   	   CmpiErrorFormater::NOT_SET,
   	   "InstanceName not set in Linux_SambaForceUserForShare instance");
  		
   	return m_instanceName;
  }

  void Linux_SambaForceUserForShareInstance::setInstanceName(
   const Linux_SambaForceUserForShareInstanceName& val){
    m_instanceName = val;
    isSet.instanceName=1;
  }


  
  //set isSet attributes to FALSE
  void Linux_SambaForceUserForShareInstance::init(){
   	isSet.instanceName=0;
   	  	
  };
  
  
  //copies another instance properties in this
  void Linux_SambaForceUserForShareInstance::init
   (const Linux_SambaForceUserForShareInstance& original){   	
   	init();
   	   	
    if(original.isInstanceNameSet()){
      setInstanceName(original.getInstanceName());
    }    
   }
  
  
  //reset the instance data
  void Linux_SambaForceUserForShareInstance::reset(){
   	
  	  
  };
  
  
  //*********************************************************
  //Linux_SambaForceUserForShareInstanceEnumerationElement	
  //*********************************************************
  
  Linux_SambaForceUserForShareInstanceEnumerationElement::
   Linux_SambaForceUserForShareInstanceEnumerationElement(){
   	
  	m_elementP=0;
  	m_nextP=0;
  	  
  };
  
  
  Linux_SambaForceUserForShareInstanceEnumerationElement::
   ~Linux_SambaForceUserForShareInstanceEnumerationElement(){
   	
  	if (m_elementP!=0)
  	  delete(m_elementP);
  	if (m_nextP!=0)
  	  delete(m_nextP);
  	  
  };

  
  //*********************************************************
  //Linux_SambaForceUserForShareInstanceNameEnumeration
  //*********************************************************

  Linux_SambaForceUserForShareInstanceEnumeration::
   Linux_SambaForceUserForShareInstanceEnumeration(){
   	
  	 firstElementP=0;
     currentElementP=0;
     endElementP=0;
  };
  
  Linux_SambaForceUserForShareInstanceEnumeration::
   Linux_SambaForceUserForShareInstanceEnumeration(
   const Linux_SambaForceUserForShareInstanceEnumeration& original){
   	
     firstElementP=0;
     currentElementP=0;
     endElementP=0;
  	 
     int size=original.getSize();
     for(int i=0;i<size;i++)
       addElement(original.getElement(i));           
  };
  
  	  
  Linux_SambaForceUserForShareInstanceEnumeration::
   ~Linux_SambaForceUserForShareInstanceEnumeration(){
   	
  	if (firstElementP!=0)
  	  delete(firstElementP);
  	  	
  };
  
  	  
  void Linux_SambaForceUserForShareInstanceEnumeration::reset(){
  	
  	currentElementP=firstElementP;
  };
  
  	  
  bool Linux_SambaForceUserForShareInstanceEnumeration::hasNext() const{
  	
  	return (currentElementP!=0);
  
  };
  
  int Linux_SambaForceUserForShareInstanceEnumeration::getSize() const{
  	
    int size=0;
    Linux_SambaForceUserForShareInstanceEnumerationElement* followingP=firstElementP;
  	
  	while(followingP!=0){
        followingP=followingP->m_nextP;
        size++;
    }
  	
    return size;
    
  };
  
  const Linux_SambaForceUserForShareInstance&  
   Linux_SambaForceUserForShareInstanceEnumeration::getElement(int pos) const{
   
    Linux_SambaForceUserForShareInstanceEnumerationElement* followingP=firstElementP;
   
    int i=0;
    while((followingP!=0)&&(i<pos)){
        followingP=followingP->m_nextP;
        i++;
    }
    
    return *(followingP->m_elementP);
  };
  
  	  
  const Linux_SambaForceUserForShareInstance&
   Linux_SambaForceUserForShareInstanceEnumeration::getNext() {
   	
  	 Linux_SambaForceUserForShareInstanceEnumerationElement* currentP=
  	  currentElementP;
  	 currentElementP=currentElementP->m_nextP;
  	 
  	 return *(currentP->m_elementP);
  };
  	  
  void Linux_SambaForceUserForShareInstanceEnumeration::addElement
   (const Linux_SambaForceUserForShareInstance& elementP){
   	
  	if(firstElementP==0){
  	  firstElementP=new Linux_SambaForceUserForShareInstanceEnumerationElement();
  	  firstElementP->m_elementP=new Linux_SambaForceUserForShareInstance(elementP);
  	  endElementP=firstElementP;
  	  currentElementP=firstElementP;
  	}else{
  	  endElementP->m_nextP=new Linux_SambaForceUserForShareInstanceEnumerationElement();
  	  endElementP=endElementP->m_nextP;
  	  endElementP->m_elementP=new Linux_SambaForceUserForShareInstance(elementP);
  	}
  };  
}
 
