/**
 *  Linux_SambaForceUserForShareManualInstance.cpp
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


#include "Linux_SambaForceUserForShareManualInstance.h"
#include "CmpiData.h"
#include "CmpiString.h"
#include "CmpiArray.h"
#include <string>

namespace genProvider {

  //*********************************************************
  //Linux_SambaForceUserForShareManualInstance
  //*********************************************************

  //empty constructor
  Linux_SambaForceUserForShareManualInstance::
   Linux_SambaForceUserForShareManualInstance(){   	
   	init();  	   	
  };
  
  
  //copy constructor	
  Linux_SambaForceUserForShareManualInstance::
   Linux_SambaForceUserForShareManualInstance
   (const Linux_SambaForceUserForShareManualInstance& original){   	
   	init(original);  	   	
  };
  
  
  //constructor using CmpiInstance
  Linux_SambaForceUserForShareManualInstance::
   Linux_SambaForceUserForShareManualInstance (const CmpiInstance& inst, const char* instanceNamespace){
    CmpiData cmpiData;
    init(); 
    
    CmpiObjectPath cop=inst.getObjectPath();
    cop.setNameSpace(instanceNamespace);
    setInstanceName(Linux_SambaForceUserForShareInstanceName(cop));
    
  }
  
  
  //Destructor
  Linux_SambaForceUserForShareManualInstance::
   ~Linux_SambaForceUserForShareManualInstance(){
   	reset();  	  
  };
  
  
  //copy operator
  Linux_SambaForceUserForShareManualInstance&
   Linux_SambaForceUserForShareManualInstance::operator=
   (const Linux_SambaForceUserForShareManualInstance& original){   	
   	init(original);
   	return *this;
  };
  
  
  //converts to CmpiInstance
  CmpiInstance Linux_SambaForceUserForShareManualInstance::
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
  unsigned int Linux_SambaForceUserForShareManualInstance::
   isInstanceNameSet() const{
  	return isSet.instanceName;
  }
  
  const Linux_SambaForceUserForShareInstanceName&
    Linux_SambaForceUserForShareManualInstance::getInstanceName() const{

    if(!isSet.instanceName)
   	  throw CmpiErrorFormater::getErrorException(
   	   CmpiErrorFormater::NOT_SET,
   	   "InstanceName not set in Linux_SambaForceUserForShare instance");
  		
   	return m_instanceName;
  }

  void Linux_SambaForceUserForShareManualInstance::setInstanceName(
   const Linux_SambaForceUserForShareInstanceName& val){
    m_instanceName = val;
    isSet.instanceName=1;
  }


  
  //set isSet attributes to FALSE
  void Linux_SambaForceUserForShareManualInstance::init(){
   	isSet.instanceName=0;
   	  	
  };
  
  
  //copies another instance properties in this
  void Linux_SambaForceUserForShareManualInstance::init
   (const Linux_SambaForceUserForShareManualInstance& original){   	
   	init();
   	   	
    if(original.isInstanceNameSet()){
      setInstanceName(original.getInstanceName());
    }    
   }
  
  
  //reset the instance data
  void Linux_SambaForceUserForShareManualInstance::reset(){
   	
  	  
  };
  
  
  //*********************************************************
  //Linux_SambaForceUserForShareManualInstanceEnumerationElement	
  //*********************************************************
  
  Linux_SambaForceUserForShareManualInstanceEnumerationElement::
   Linux_SambaForceUserForShareManualInstanceEnumerationElement(){
   	
  	m_elementP=0;
  	m_nextP=0;
  	  
  };
  
  
  Linux_SambaForceUserForShareManualInstanceEnumerationElement::
   ~Linux_SambaForceUserForShareManualInstanceEnumerationElement(){
   	
  	if (m_elementP!=0)
  	  delete(m_elementP);
  	if (m_nextP!=0)
  	  delete(m_nextP);
  	  
  };

  
  //*********************************************************
  //Linux_SambaForceUserForShareManualInstanceNameEnumeration
  //*********************************************************

  Linux_SambaForceUserForShareManualInstanceEnumeration::
   Linux_SambaForceUserForShareManualInstanceEnumeration(){
   	
  	 firstElementP=0;
     currentElementP=0;
     endElementP=0;
  };
  
  Linux_SambaForceUserForShareManualInstanceEnumeration::
   Linux_SambaForceUserForShareManualInstanceEnumeration(
   const Linux_SambaForceUserForShareManualInstanceEnumeration& original){
   	
     firstElementP=0;
     currentElementP=0;
     endElementP=0;
  	 
     int size=original.getSize();
     for(int i=0;i<size;i++)
       addElement(original.getElement(i));           
  };
  
  	  
  Linux_SambaForceUserForShareManualInstanceEnumeration::
   ~Linux_SambaForceUserForShareManualInstanceEnumeration(){
   	
  	if (firstElementP!=0)
  	  delete(firstElementP);
  	  	
  };
  
  	  
  void Linux_SambaForceUserForShareManualInstanceEnumeration::reset(){
  	
  	currentElementP=firstElementP;
  };
  
  	  
  bool Linux_SambaForceUserForShareManualInstanceEnumeration::hasNext() const{
  	
  	return (currentElementP!=0);
  
  };
  
  int Linux_SambaForceUserForShareManualInstanceEnumeration::getSize() const{
  	
    int size=0;
    Linux_SambaForceUserForShareManualInstanceEnumerationElement* followingP=firstElementP;
  	
  	while(followingP!=0){
        followingP=followingP->m_nextP;
        size++;
    }
  	
    return size;
    
  };
  
  const Linux_SambaForceUserForShareManualInstance&  
   Linux_SambaForceUserForShareManualInstanceEnumeration::getElement(int pos) const{
   
    Linux_SambaForceUserForShareManualInstanceEnumerationElement* followingP=firstElementP;
   
    int i=0;
    while((followingP!=0)&&(i<pos)){
        followingP=followingP->m_nextP;
        i++;
    }
    
    return *(followingP->m_elementP);
  };
  
  	  
  const Linux_SambaForceUserForShareManualInstance&
   Linux_SambaForceUserForShareManualInstanceEnumeration::getNext() {
   	
  	 Linux_SambaForceUserForShareManualInstanceEnumerationElement* currentP=
  	  currentElementP;
  	 currentElementP=currentElementP->m_nextP;
  	 
  	 return *(currentP->m_elementP);
  };
  	  
  void Linux_SambaForceUserForShareManualInstanceEnumeration::addElement
   (const Linux_SambaForceUserForShareManualInstance& elementP){
   	
  	if(firstElementP==0){
  	  firstElementP=new Linux_SambaForceUserForShareManualInstanceEnumerationElement();
  	  firstElementP->m_elementP=new Linux_SambaForceUserForShareManualInstance(elementP);
  	  endElementP=firstElementP;
  	  currentElementP=firstElementP;
  	}else{
  	  endElementP->m_nextP=new Linux_SambaForceUserForShareManualInstanceEnumerationElement();
  	  endElementP=endElementP->m_nextP;
  	  endElementP->m_elementP=new Linux_SambaForceUserForShareManualInstance(elementP);
  	}
  };  
}
 
