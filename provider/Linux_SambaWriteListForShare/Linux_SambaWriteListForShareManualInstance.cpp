/**
 *  Linux_SambaWriteListForShareManualInstance.cpp
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


#include "Linux_SambaWriteListForShareManualInstance.h"
#include "CmpiData.h"
#include "CmpiString.h"
#include "CmpiArray.h"
#include <string>

namespace genProvider {

  //*********************************************************
  //Linux_SambaWriteListForShareManualInstance
  //*********************************************************

  //empty constructor
  Linux_SambaWriteListForShareManualInstance::
   Linux_SambaWriteListForShareManualInstance(){   	
   	init();  	   	
  };
  
  
  //copy constructor	
  Linux_SambaWriteListForShareManualInstance::
   Linux_SambaWriteListForShareManualInstance
   (const Linux_SambaWriteListForShareManualInstance& original){   	
   	init(original);  	   	
  };
  
  
  //constructor using CmpiInstance
  Linux_SambaWriteListForShareManualInstance::
   Linux_SambaWriteListForShareManualInstance (const CmpiInstance& inst, const char* instanceNamespace){
    CmpiData cmpiData;
    init(); 
    
    CmpiObjectPath cop=inst.getObjectPath();
    cop.setNameSpace(instanceNamespace);
    setInstanceName(Linux_SambaWriteListForShareInstanceName(cop));
    
  }
  
  
  //Destructor
  Linux_SambaWriteListForShareManualInstance::
   ~Linux_SambaWriteListForShareManualInstance(){
   	reset();  	  
  };
  
  
  //copy operator
  Linux_SambaWriteListForShareManualInstance&
   Linux_SambaWriteListForShareManualInstance::operator=
   (const Linux_SambaWriteListForShareManualInstance& original){   	
   	init(original);
   	return *this;
  };
  
  
  //converts to CmpiInstance
  CmpiInstance Linux_SambaWriteListForShareManualInstance::
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
  unsigned int Linux_SambaWriteListForShareManualInstance::
   isInstanceNameSet() const{
  	return isSet.instanceName;
  }
  
  const Linux_SambaWriteListForShareInstanceName&
    Linux_SambaWriteListForShareManualInstance::getInstanceName() const{

    if(!isSet.instanceName)
   	  throw CmpiErrorFormater::getErrorException(
   	   CmpiErrorFormater::NOT_SET,
   	   "InstanceName not set in Linux_SambaWriteListForShare instance");
  		
   	return m_instanceName;
  }

  void Linux_SambaWriteListForShareManualInstance::setInstanceName(
   const Linux_SambaWriteListForShareInstanceName& val){
    m_instanceName = val;
    isSet.instanceName=1;
  }


  
  //set isSet attributes to FALSE
  void Linux_SambaWriteListForShareManualInstance::init(){
   	isSet.instanceName=0;
   	  	
  };
  
  
  //copies another instance properties in this
  void Linux_SambaWriteListForShareManualInstance::init
   (const Linux_SambaWriteListForShareManualInstance& original){   	
   	init();
   	   	
    if(original.isInstanceNameSet()){
      setInstanceName(original.getInstanceName());
    }    
   }
  
  
  //reset the instance data
  void Linux_SambaWriteListForShareManualInstance::reset(){
   	
  	  
  };
  
  
  //*********************************************************
  //Linux_SambaWriteListForShareManualInstanceEnumerationElement	
  //*********************************************************
  
  Linux_SambaWriteListForShareManualInstanceEnumerationElement::
   Linux_SambaWriteListForShareManualInstanceEnumerationElement(){
   	
  	m_elementP=0;
  	m_nextP=0;
  	  
  };
  
  
  Linux_SambaWriteListForShareManualInstanceEnumerationElement::
   ~Linux_SambaWriteListForShareManualInstanceEnumerationElement(){
   	
  	if (m_elementP!=0)
  	  delete(m_elementP);
  	if (m_nextP!=0)
  	  delete(m_nextP);
  	  
  };

  
  //*********************************************************
  //Linux_SambaWriteListForShareManualInstanceNameEnumeration
  //*********************************************************

  Linux_SambaWriteListForShareManualInstanceEnumeration::
   Linux_SambaWriteListForShareManualInstanceEnumeration(){
   	
  	 firstElementP=0;
     currentElementP=0;
     endElementP=0;
  };
  
  Linux_SambaWriteListForShareManualInstanceEnumeration::
   Linux_SambaWriteListForShareManualInstanceEnumeration(
   const Linux_SambaWriteListForShareManualInstanceEnumeration& original){
   	
     firstElementP=0;
     currentElementP=0;
     endElementP=0;
  	 
     int size=original.getSize();
     for(int i=0;i<size;i++)
       addElement(original.getElement(i));           
  };
  
  	  
  Linux_SambaWriteListForShareManualInstanceEnumeration::
   ~Linux_SambaWriteListForShareManualInstanceEnumeration(){
   	
  	if (firstElementP!=0)
  	  delete(firstElementP);
  	  	
  };
  
  	  
  void Linux_SambaWriteListForShareManualInstanceEnumeration::reset(){
  	
  	currentElementP=firstElementP;
  };
  
  	  
  bool Linux_SambaWriteListForShareManualInstanceEnumeration::hasNext() const{
  	
  	return (currentElementP!=0);
  
  };
  
  int Linux_SambaWriteListForShareManualInstanceEnumeration::getSize() const{
  	
    int size=0;
    Linux_SambaWriteListForShareManualInstanceEnumerationElement* followingP=firstElementP;
  	
  	while(followingP!=0){
        followingP=followingP->m_nextP;
        size++;
    }
  	
    return size;
    
  };
  
  const Linux_SambaWriteListForShareManualInstance&  
   Linux_SambaWriteListForShareManualInstanceEnumeration::getElement(int pos) const{
   
    Linux_SambaWriteListForShareManualInstanceEnumerationElement* followingP=firstElementP;
   
    int i=0;
    while((followingP!=0)&&(i<pos)){
        followingP=followingP->m_nextP;
        i++;
    }
    
    return *(followingP->m_elementP);
  };
  
  	  
  const Linux_SambaWriteListForShareManualInstance&
   Linux_SambaWriteListForShareManualInstanceEnumeration::getNext() {
   	
  	 Linux_SambaWriteListForShareManualInstanceEnumerationElement* currentP=
  	  currentElementP;
  	 currentElementP=currentElementP->m_nextP;
  	 
  	 return *(currentP->m_elementP);
  };
  	  
  void Linux_SambaWriteListForShareManualInstanceEnumeration::addElement
   (const Linux_SambaWriteListForShareManualInstance& elementP){
   	
  	if(firstElementP==0){
  	  firstElementP=new Linux_SambaWriteListForShareManualInstanceEnumerationElement();
  	  firstElementP->m_elementP=new Linux_SambaWriteListForShareManualInstance(elementP);
  	  endElementP=firstElementP;
  	  currentElementP=firstElementP;
  	}else{
  	  endElementP->m_nextP=new Linux_SambaWriteListForShareManualInstanceEnumerationElement();
  	  endElementP=endElementP->m_nextP;
  	  endElementP->m_elementP=new Linux_SambaWriteListForShareManualInstance(elementP);
  	}
  };  
}
 
