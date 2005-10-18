/**
 *  Linux_SambaReadListForShareManualInstance.cpp
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


#include "Linux_SambaReadListForShareManualInstance.h"
#include "CmpiData.h"
#include "CmpiString.h"
#include "CmpiArray.h"
#include <string>

namespace genProvider {

  //*********************************************************
  //Linux_SambaReadListForShareManualInstance
  //*********************************************************

  //empty constructor
  Linux_SambaReadListForShareManualInstance::
   Linux_SambaReadListForShareManualInstance(){   	
   	init();  	   	
  };
  
  
  //copy constructor	
  Linux_SambaReadListForShareManualInstance::
   Linux_SambaReadListForShareManualInstance
   (const Linux_SambaReadListForShareManualInstance& original){   	
   	init(original);  	   	
  };
  
  
  //constructor using CmpiInstance
  Linux_SambaReadListForShareManualInstance::
   Linux_SambaReadListForShareManualInstance (const CmpiInstance& inst, const char* instanceNamespace){
    CmpiData cmpiData;
    init(); 
    
    CmpiObjectPath cop=inst.getObjectPath();
    cop.setNameSpace(instanceNamespace);
    setInstanceName(Linux_SambaReadListForShareInstanceName(cop));
    
  }
  
  
  //Destructor
  Linux_SambaReadListForShareManualInstance::
   ~Linux_SambaReadListForShareManualInstance(){
   	reset();  	  
  };
  
  
  //copy operator
  Linux_SambaReadListForShareManualInstance&
   Linux_SambaReadListForShareManualInstance::operator=
   (const Linux_SambaReadListForShareManualInstance& original){   	
   	init(original);
   	return *this;
  };
  
  
  //converts to CmpiInstance
  CmpiInstance Linux_SambaReadListForShareManualInstance::
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
  unsigned int Linux_SambaReadListForShareManualInstance::
   isInstanceNameSet() const{
  	return isSet.instanceName;
  }
  
  const Linux_SambaReadListForShareInstanceName&
    Linux_SambaReadListForShareManualInstance::getInstanceName() const{

    if(!isSet.instanceName)
   	  throw CmpiErrorFormater::getErrorException(
   	   CmpiErrorFormater::NOT_SET,
   	   "InstanceName not set in Linux_SambaReadListForShare instance");
  		
   	return m_instanceName;
  }

  void Linux_SambaReadListForShareManualInstance::setInstanceName(
   const Linux_SambaReadListForShareInstanceName& val){
    m_instanceName = val;
    isSet.instanceName=1;
  }


  
  //set isSet attributes to FALSE
  void Linux_SambaReadListForShareManualInstance::init(){
   	isSet.instanceName=0;
   	  	
  };
  
  
  //copies another instance properties in this
  void Linux_SambaReadListForShareManualInstance::init
   (const Linux_SambaReadListForShareManualInstance& original){   	
   	init();
   	   	
    if(original.isInstanceNameSet()){
      setInstanceName(original.getInstanceName());
    }    
   }
  
  
  //reset the instance data
  void Linux_SambaReadListForShareManualInstance::reset(){
   	
  	  
  };
  
  
  //*********************************************************
  //Linux_SambaReadListForShareManualInstanceEnumerationElement	
  //*********************************************************
  
  Linux_SambaReadListForShareManualInstanceEnumerationElement::
   Linux_SambaReadListForShareManualInstanceEnumerationElement(){
   	
  	m_elementP=0;
  	m_nextP=0;
  	  
  };
  
  
  Linux_SambaReadListForShareManualInstanceEnumerationElement::
   ~Linux_SambaReadListForShareManualInstanceEnumerationElement(){
   	
  	if (m_elementP!=0)
  	  delete(m_elementP);
  	if (m_nextP!=0)
  	  delete(m_nextP);
  	  
  };

  
  //*********************************************************
  //Linux_SambaReadListForShareManualInstanceNameEnumeration
  //*********************************************************

  Linux_SambaReadListForShareManualInstanceEnumeration::
   Linux_SambaReadListForShareManualInstanceEnumeration(){
   	
  	 firstElementP=0;
     currentElementP=0;
     endElementP=0;
  };
  
  Linux_SambaReadListForShareManualInstanceEnumeration::
   Linux_SambaReadListForShareManualInstanceEnumeration(
   const Linux_SambaReadListForShareManualInstanceEnumeration& original){
   	
     firstElementP=0;
     currentElementP=0;
     endElementP=0;
  	 
     int size=original.getSize();
     for(int i=0;i<size;i++)
       addElement(original.getElement(i));           
  };
  
  	  
  Linux_SambaReadListForShareManualInstanceEnumeration::
   ~Linux_SambaReadListForShareManualInstanceEnumeration(){
   	
  	if (firstElementP!=0)
  	  delete(firstElementP);
  	  	
  };
  
  	  
  void Linux_SambaReadListForShareManualInstanceEnumeration::reset(){
  	
  	currentElementP=firstElementP;
  };
  
  	  
  bool Linux_SambaReadListForShareManualInstanceEnumeration::hasNext() const{
  	
  	return (currentElementP!=0);
  
  };
  
  int Linux_SambaReadListForShareManualInstanceEnumeration::getSize() const{
  	
    int size=0;
    Linux_SambaReadListForShareManualInstanceEnumerationElement* followingP=firstElementP;
  	
  	while(followingP!=0){
        followingP=followingP->m_nextP;
        size++;
    }
  	
    return size;
    
  };
  
  const Linux_SambaReadListForShareManualInstance&  
   Linux_SambaReadListForShareManualInstanceEnumeration::getElement(int pos) const{
   
    Linux_SambaReadListForShareManualInstanceEnumerationElement* followingP=firstElementP;
   
    int i=0;
    while((followingP!=0)&&(i<pos)){
        followingP=followingP->m_nextP;
        i++;
    }
    
    return *(followingP->m_elementP);
  };
  
  	  
  const Linux_SambaReadListForShareManualInstance&
   Linux_SambaReadListForShareManualInstanceEnumeration::getNext() {
   	
  	 Linux_SambaReadListForShareManualInstanceEnumerationElement* currentP=
  	  currentElementP;
  	 currentElementP=currentElementP->m_nextP;
  	 
  	 return *(currentP->m_elementP);
  };
  	  
  void Linux_SambaReadListForShareManualInstanceEnumeration::addElement
   (const Linux_SambaReadListForShareManualInstance& elementP){
   	
  	if(firstElementP==0){
  	  firstElementP=new Linux_SambaReadListForShareManualInstanceEnumerationElement();
  	  firstElementP->m_elementP=new Linux_SambaReadListForShareManualInstance(elementP);
  	  endElementP=firstElementP;
  	  currentElementP=firstElementP;
  	}else{
  	  endElementP->m_nextP=new Linux_SambaReadListForShareManualInstanceEnumerationElement();
  	  endElementP=endElementP->m_nextP;
  	  endElementP->m_elementP=new Linux_SambaReadListForShareManualInstance(elementP);
  	}
  };  
}
 
