/**
 *  Linux_SambaGlobalPrintingForGlobalManualInstance.cpp
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


#include "Linux_SambaGlobalPrintingForGlobalManualInstance.h"
#include "CmpiData.h"
#include "CmpiString.h"
#include "CmpiArray.h"
#include <string>

namespace genProvider {

  //*********************************************************
  //Linux_SambaGlobalPrintingForGlobalManualInstance
  //*********************************************************

  //empty constructor
  Linux_SambaGlobalPrintingForGlobalManualInstance::
   Linux_SambaGlobalPrintingForGlobalManualInstance(){   	
   	init();  	   	
  };
  
  
  //copy constructor	
  Linux_SambaGlobalPrintingForGlobalManualInstance::
   Linux_SambaGlobalPrintingForGlobalManualInstance
   (const Linux_SambaGlobalPrintingForGlobalManualInstance& original){   	
   	init(original);  	   	
  };
  
  
  //constructor using CmpiInstance
  Linux_SambaGlobalPrintingForGlobalManualInstance::
   Linux_SambaGlobalPrintingForGlobalManualInstance (const CmpiInstance& inst, const char* instanceNamespace){
    CmpiData cmpiData;
    init(); 
    
    CmpiObjectPath cop=inst.getObjectPath();
    cop.setNameSpace(instanceNamespace);
    setInstanceName(Linux_SambaGlobalPrintingForGlobalInstanceName(cop));
    
  }
  
  
  //Destructor
  Linux_SambaGlobalPrintingForGlobalManualInstance::
   ~Linux_SambaGlobalPrintingForGlobalManualInstance(){
   	reset();  	  
  };
  
  
  //copy operator
  Linux_SambaGlobalPrintingForGlobalManualInstance&
   Linux_SambaGlobalPrintingForGlobalManualInstance::operator=
   (const Linux_SambaGlobalPrintingForGlobalManualInstance& original){   	
   	init(original);
   	return *this;
  };
  
  
  //converts to CmpiInstance
  CmpiInstance Linux_SambaGlobalPrintingForGlobalManualInstance::
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
  unsigned int Linux_SambaGlobalPrintingForGlobalManualInstance::
   isInstanceNameSet() const{
  	return isSet.instanceName;
  }
  
  const Linux_SambaGlobalPrintingForGlobalInstanceName&
    Linux_SambaGlobalPrintingForGlobalManualInstance::getInstanceName() const{

    if(!isSet.instanceName)
   	  throw CmpiErrorFormater::getErrorException(
   	   CmpiErrorFormater::NOT_SET,
   	   "InstanceName not set in Linux_SambaGlobalPrintingForGlobal instance");
  		
   	return m_instanceName;
  }

  void Linux_SambaGlobalPrintingForGlobalManualInstance::setInstanceName(
   const Linux_SambaGlobalPrintingForGlobalInstanceName& val){
    m_instanceName = val;
    isSet.instanceName=1;
  }


  
  //set isSet attributes to FALSE
  void Linux_SambaGlobalPrintingForGlobalManualInstance::init(){
   	isSet.instanceName=0;
   	  	
  };
  
  
  //copies another instance properties in this
  void Linux_SambaGlobalPrintingForGlobalManualInstance::init
   (const Linux_SambaGlobalPrintingForGlobalManualInstance& original){   	
   	init();
   	   	
    if(original.isInstanceNameSet()){
      setInstanceName(original.getInstanceName());
    }    
   }
  
  
  //reset the instance data
  void Linux_SambaGlobalPrintingForGlobalManualInstance::reset(){
   	
  	  
  };
  
  
  //*********************************************************
  //Linux_SambaGlobalPrintingForGlobalManualInstanceEnumerationElement	
  //*********************************************************
  
  Linux_SambaGlobalPrintingForGlobalManualInstanceEnumerationElement::
   Linux_SambaGlobalPrintingForGlobalManualInstanceEnumerationElement(){
   	
  	m_elementP=0;
  	m_nextP=0;
  	  
  };
  
  
  Linux_SambaGlobalPrintingForGlobalManualInstanceEnumerationElement::
   ~Linux_SambaGlobalPrintingForGlobalManualInstanceEnumerationElement(){
   	
  	if (m_elementP!=0)
  	  delete(m_elementP);
  	if (m_nextP!=0)
  	  delete(m_nextP);
  	  
  };

  
  //*********************************************************
  //Linux_SambaGlobalPrintingForGlobalManualInstanceNameEnumeration
  //*********************************************************

  Linux_SambaGlobalPrintingForGlobalManualInstanceEnumeration::
   Linux_SambaGlobalPrintingForGlobalManualInstanceEnumeration(){
   	
  	 firstElementP=0;
     currentElementP=0;
     endElementP=0;
  };
  
  Linux_SambaGlobalPrintingForGlobalManualInstanceEnumeration::
   Linux_SambaGlobalPrintingForGlobalManualInstanceEnumeration(
   const Linux_SambaGlobalPrintingForGlobalManualInstanceEnumeration& original){
   	
     firstElementP=0;
     currentElementP=0;
     endElementP=0;
  	 
     int size=original.getSize();
     for(int i=0;i<size;i++)
       addElement(original.getElement(i));           
  };
  
  	  
  Linux_SambaGlobalPrintingForGlobalManualInstanceEnumeration::
   ~Linux_SambaGlobalPrintingForGlobalManualInstanceEnumeration(){
   	
  	if (firstElementP!=0)
  	  delete(firstElementP);
  	  	
  };
  
  	  
  void Linux_SambaGlobalPrintingForGlobalManualInstanceEnumeration::reset(){
  	
  	currentElementP=firstElementP;
  };
  
  	  
  bool Linux_SambaGlobalPrintingForGlobalManualInstanceEnumeration::hasNext() const{
  	
  	return (currentElementP!=0);
  
  };
  
  int Linux_SambaGlobalPrintingForGlobalManualInstanceEnumeration::getSize() const{
  	
    int size=0;
    Linux_SambaGlobalPrintingForGlobalManualInstanceEnumerationElement* followingP=firstElementP;
  	
  	while(followingP!=0){
        followingP=followingP->m_nextP;
        size++;
    }
  	
    return size;
    
  };
  
  const Linux_SambaGlobalPrintingForGlobalManualInstance&  
   Linux_SambaGlobalPrintingForGlobalManualInstanceEnumeration::getElement(int pos) const{
   
    Linux_SambaGlobalPrintingForGlobalManualInstanceEnumerationElement* followingP=firstElementP;
   
    int i=0;
    while((followingP!=0)&&(i<pos)){
        followingP=followingP->m_nextP;
        i++;
    }
    
    return *(followingP->m_elementP);
  };
  
  	  
  const Linux_SambaGlobalPrintingForGlobalManualInstance&
   Linux_SambaGlobalPrintingForGlobalManualInstanceEnumeration::getNext() {
   	
  	 Linux_SambaGlobalPrintingForGlobalManualInstanceEnumerationElement* currentP=
  	  currentElementP;
  	 currentElementP=currentElementP->m_nextP;
  	 
  	 return *(currentP->m_elementP);
  };
  	  
  void Linux_SambaGlobalPrintingForGlobalManualInstanceEnumeration::addElement
   (const Linux_SambaGlobalPrintingForGlobalManualInstance& elementP){
   	
  	if(firstElementP==0){
  	  firstElementP=new Linux_SambaGlobalPrintingForGlobalManualInstanceEnumerationElement();
  	  firstElementP->m_elementP=new Linux_SambaGlobalPrintingForGlobalManualInstance(elementP);
  	  endElementP=firstElementP;
  	  currentElementP=firstElementP;
  	}else{
  	  endElementP->m_nextP=new Linux_SambaGlobalPrintingForGlobalManualInstanceEnumerationElement();
  	  endElementP=endElementP->m_nextP;
  	  endElementP->m_elementP=new Linux_SambaGlobalPrintingForGlobalManualInstance(elementP);
  	}
  };  
}
 
