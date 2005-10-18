/**
 *  Linux_SambaGroupForUserManualInstance.cpp
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


#include "Linux_SambaGroupForUserManualInstance.h"
#include "CmpiData.h"
#include "CmpiString.h"
#include "CmpiArray.h"
#include <string>

namespace genProvider {

  //*********************************************************
  //Linux_SambaGroupForUserManualInstance
  //*********************************************************

  //empty constructor
  Linux_SambaGroupForUserManualInstance::
   Linux_SambaGroupForUserManualInstance(){   	
   	init();  	   	
  };
  
  
  //copy constructor	
  Linux_SambaGroupForUserManualInstance::
   Linux_SambaGroupForUserManualInstance
   (const Linux_SambaGroupForUserManualInstance& original){   	
   	init(original);  	   	
  };
  
  
  //constructor using CmpiInstance
  Linux_SambaGroupForUserManualInstance::
   Linux_SambaGroupForUserManualInstance (const CmpiInstance& inst, const char* instanceNamespace){
    CmpiData cmpiData;
    init(); 
    
    CmpiObjectPath cop=inst.getObjectPath();
    cop.setNameSpace(instanceNamespace);
    setInstanceName(Linux_SambaGroupForUserInstanceName(cop));
    
  }
  
  
  //Destructor
  Linux_SambaGroupForUserManualInstance::
   ~Linux_SambaGroupForUserManualInstance(){
   	reset();  	  
  };
  
  
  //copy operator
  Linux_SambaGroupForUserManualInstance&
   Linux_SambaGroupForUserManualInstance::operator=
   (const Linux_SambaGroupForUserManualInstance& original){   	
   	init(original);
   	return *this;
  };
  
  
  //converts to CmpiInstance
  CmpiInstance Linux_SambaGroupForUserManualInstance::
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
  unsigned int Linux_SambaGroupForUserManualInstance::
   isInstanceNameSet() const{
  	return isSet.instanceName;
  }
  
  const Linux_SambaGroupForUserInstanceName&
    Linux_SambaGroupForUserManualInstance::getInstanceName() const{

    if(!isSet.instanceName)
   	  throw CmpiErrorFormater::getErrorException(
   	   CmpiErrorFormater::NOT_SET,
   	   "InstanceName not set in Linux_SambaGroupForUser instance");
  		
   	return m_instanceName;
  }

  void Linux_SambaGroupForUserManualInstance::setInstanceName(
   const Linux_SambaGroupForUserInstanceName& val){
    m_instanceName = val;
    isSet.instanceName=1;
  }


  
  //set isSet attributes to FALSE
  void Linux_SambaGroupForUserManualInstance::init(){
   	isSet.instanceName=0;
   	  	
  };
  
  
  //copies another instance properties in this
  void Linux_SambaGroupForUserManualInstance::init
   (const Linux_SambaGroupForUserManualInstance& original){   	
   	init();
   	   	
    if(original.isInstanceNameSet()){
      setInstanceName(original.getInstanceName());
    }    
   }
  
  
  //reset the instance data
  void Linux_SambaGroupForUserManualInstance::reset(){
   	
  	  
  };
  
  
  //*********************************************************
  //Linux_SambaGroupForUserManualInstanceEnumerationElement	
  //*********************************************************
  
  Linux_SambaGroupForUserManualInstanceEnumerationElement::
   Linux_SambaGroupForUserManualInstanceEnumerationElement(){
   	
  	m_elementP=0;
  	m_nextP=0;
  	  
  };
  
  
  Linux_SambaGroupForUserManualInstanceEnumerationElement::
   ~Linux_SambaGroupForUserManualInstanceEnumerationElement(){
   	
  	if (m_elementP!=0)
  	  delete(m_elementP);
  	if (m_nextP!=0)
  	  delete(m_nextP);
  	  
  };

  
  //*********************************************************
  //Linux_SambaGroupForUserManualInstanceNameEnumeration
  //*********************************************************

  Linux_SambaGroupForUserManualInstanceEnumeration::
   Linux_SambaGroupForUserManualInstanceEnumeration(){
   	
  	 firstElementP=0;
     currentElementP=0;
     endElementP=0;
  };
  
  Linux_SambaGroupForUserManualInstanceEnumeration::
   Linux_SambaGroupForUserManualInstanceEnumeration(
   const Linux_SambaGroupForUserManualInstanceEnumeration& original){
   	
     firstElementP=0;
     currentElementP=0;
     endElementP=0;
  	 
     int size=original.getSize();
     for(int i=0;i<size;i++)
       addElement(original.getElement(i));           
  };
  
  	  
  Linux_SambaGroupForUserManualInstanceEnumeration::
   ~Linux_SambaGroupForUserManualInstanceEnumeration(){
   	
  	if (firstElementP!=0)
  	  delete(firstElementP);
  	  	
  };
  
  	  
  void Linux_SambaGroupForUserManualInstanceEnumeration::reset(){
  	
  	currentElementP=firstElementP;
  };
  
  	  
  bool Linux_SambaGroupForUserManualInstanceEnumeration::hasNext() const{
  	
  	return (currentElementP!=0);
  
  };
  
  int Linux_SambaGroupForUserManualInstanceEnumeration::getSize() const{
  	
    int size=0;
    Linux_SambaGroupForUserManualInstanceEnumerationElement* followingP=firstElementP;
  	
  	while(followingP!=0){
        followingP=followingP->m_nextP;
        size++;
    }
  	
    return size;
    
  };
  
  const Linux_SambaGroupForUserManualInstance&  
   Linux_SambaGroupForUserManualInstanceEnumeration::getElement(int pos) const{
   
    Linux_SambaGroupForUserManualInstanceEnumerationElement* followingP=firstElementP;
   
    int i=0;
    while((followingP!=0)&&(i<pos)){
        followingP=followingP->m_nextP;
        i++;
    }
    
    return *(followingP->m_elementP);
  };
  
  	  
  const Linux_SambaGroupForUserManualInstance&
   Linux_SambaGroupForUserManualInstanceEnumeration::getNext() {
   	
  	 Linux_SambaGroupForUserManualInstanceEnumerationElement* currentP=
  	  currentElementP;
  	 currentElementP=currentElementP->m_nextP;
  	 
  	 return *(currentP->m_elementP);
  };
  	  
  void Linux_SambaGroupForUserManualInstanceEnumeration::addElement
   (const Linux_SambaGroupForUserManualInstance& elementP){
   	
  	if(firstElementP==0){
  	  firstElementP=new Linux_SambaGroupForUserManualInstanceEnumerationElement();
  	  firstElementP->m_elementP=new Linux_SambaGroupForUserManualInstance(elementP);
  	  endElementP=firstElementP;
  	  currentElementP=firstElementP;
  	}else{
  	  endElementP->m_nextP=new Linux_SambaGroupForUserManualInstanceEnumerationElement();
  	  endElementP=endElementP->m_nextP;
  	  endElementP->m_elementP=new Linux_SambaGroupForUserManualInstance(elementP);
  	}
  };  
}
 
