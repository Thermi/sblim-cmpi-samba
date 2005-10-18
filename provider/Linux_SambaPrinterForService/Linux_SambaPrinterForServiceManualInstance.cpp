/**
 *  Linux_SambaPrinterForServiceManualInstance.cpp
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


#include "Linux_SambaPrinterForServiceManualInstance.h"
#include "CmpiData.h"
#include "CmpiString.h"
#include "CmpiArray.h"
#include <string>

namespace genProvider {

  //*********************************************************
  //Linux_SambaPrinterForServiceManualInstance
  //*********************************************************

  //empty constructor
  Linux_SambaPrinterForServiceManualInstance::
   Linux_SambaPrinterForServiceManualInstance(){   	
   	init();  	   	
  };
  
  
  //copy constructor	
  Linux_SambaPrinterForServiceManualInstance::
   Linux_SambaPrinterForServiceManualInstance
   (const Linux_SambaPrinterForServiceManualInstance& original){   	
   	init(original);  	   	
  };
  
  
  //constructor using CmpiInstance
  Linux_SambaPrinterForServiceManualInstance::
   Linux_SambaPrinterForServiceManualInstance (const CmpiInstance& inst, const char* instanceNamespace){
    CmpiData cmpiData;
    init(); 
    
    CmpiObjectPath cop=inst.getObjectPath();
    cop.setNameSpace(instanceNamespace);
    setInstanceName(Linux_SambaPrinterForServiceInstanceName(cop));
    
  }
  
  
  //Destructor
  Linux_SambaPrinterForServiceManualInstance::
   ~Linux_SambaPrinterForServiceManualInstance(){
   	reset();  	  
  };
  
  
  //copy operator
  Linux_SambaPrinterForServiceManualInstance&
   Linux_SambaPrinterForServiceManualInstance::operator=
   (const Linux_SambaPrinterForServiceManualInstance& original){   	
   	init(original);
   	return *this;
  };
  
  
  //converts to CmpiInstance
  CmpiInstance Linux_SambaPrinterForServiceManualInstance::
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
  unsigned int Linux_SambaPrinterForServiceManualInstance::
   isInstanceNameSet() const{
  	return isSet.instanceName;
  }
  
  const Linux_SambaPrinterForServiceInstanceName&
    Linux_SambaPrinterForServiceManualInstance::getInstanceName() const{

    if(!isSet.instanceName)
   	  throw CmpiErrorFormater::getErrorException(
   	   CmpiErrorFormater::NOT_SET,
   	   "InstanceName not set in Linux_SambaPrinterForService instance");
  		
   	return m_instanceName;
  }

  void Linux_SambaPrinterForServiceManualInstance::setInstanceName(
   const Linux_SambaPrinterForServiceInstanceName& val){
    m_instanceName = val;
    isSet.instanceName=1;
  }


  
  //set isSet attributes to FALSE
  void Linux_SambaPrinterForServiceManualInstance::init(){
   	isSet.instanceName=0;
   	  	
  };
  
  
  //copies another instance properties in this
  void Linux_SambaPrinterForServiceManualInstance::init
   (const Linux_SambaPrinterForServiceManualInstance& original){   	
   	init();
   	   	
    if(original.isInstanceNameSet()){
      setInstanceName(original.getInstanceName());
    }    
   }
  
  
  //reset the instance data
  void Linux_SambaPrinterForServiceManualInstance::reset(){
   	
  	  
  };
  
  
  //*********************************************************
  //Linux_SambaPrinterForServiceManualInstanceEnumerationElement	
  //*********************************************************
  
  Linux_SambaPrinterForServiceManualInstanceEnumerationElement::
   Linux_SambaPrinterForServiceManualInstanceEnumerationElement(){
   	
  	m_elementP=0;
  	m_nextP=0;
  	  
  };
  
  
  Linux_SambaPrinterForServiceManualInstanceEnumerationElement::
   ~Linux_SambaPrinterForServiceManualInstanceEnumerationElement(){
   	
  	if (m_elementP!=0)
  	  delete(m_elementP);
  	if (m_nextP!=0)
  	  delete(m_nextP);
  	  
  };

  
  //*********************************************************
  //Linux_SambaPrinterForServiceManualInstanceNameEnumeration
  //*********************************************************

  Linux_SambaPrinterForServiceManualInstanceEnumeration::
   Linux_SambaPrinterForServiceManualInstanceEnumeration(){
   	
  	 firstElementP=0;
     currentElementP=0;
     endElementP=0;
  };
  
  Linux_SambaPrinterForServiceManualInstanceEnumeration::
   Linux_SambaPrinterForServiceManualInstanceEnumeration(
   const Linux_SambaPrinterForServiceManualInstanceEnumeration& original){
   	
     firstElementP=0;
     currentElementP=0;
     endElementP=0;
  	 
     int size=original.getSize();
     for(int i=0;i<size;i++)
       addElement(original.getElement(i));           
  };
  
  	  
  Linux_SambaPrinterForServiceManualInstanceEnumeration::
   ~Linux_SambaPrinterForServiceManualInstanceEnumeration(){
   	
  	if (firstElementP!=0)
  	  delete(firstElementP);
  	  	
  };
  
  	  
  void Linux_SambaPrinterForServiceManualInstanceEnumeration::reset(){
  	
  	currentElementP=firstElementP;
  };
  
  	  
  bool Linux_SambaPrinterForServiceManualInstanceEnumeration::hasNext() const{
  	
  	return (currentElementP!=0);
  
  };
  
  int Linux_SambaPrinterForServiceManualInstanceEnumeration::getSize() const{
  	
    int size=0;
    Linux_SambaPrinterForServiceManualInstanceEnumerationElement* followingP=firstElementP;
  	
  	while(followingP!=0){
        followingP=followingP->m_nextP;
        size++;
    }
  	
    return size;
    
  };
  
  const Linux_SambaPrinterForServiceManualInstance&  
   Linux_SambaPrinterForServiceManualInstanceEnumeration::getElement(int pos) const{
   
    Linux_SambaPrinterForServiceManualInstanceEnumerationElement* followingP=firstElementP;
   
    int i=0;
    while((followingP!=0)&&(i<pos)){
        followingP=followingP->m_nextP;
        i++;
    }
    
    return *(followingP->m_elementP);
  };
  
  	  
  const Linux_SambaPrinterForServiceManualInstance&
   Linux_SambaPrinterForServiceManualInstanceEnumeration::getNext() {
   	
  	 Linux_SambaPrinterForServiceManualInstanceEnumerationElement* currentP=
  	  currentElementP;
  	 currentElementP=currentElementP->m_nextP;
  	 
  	 return *(currentP->m_elementP);
  };
  	  
  void Linux_SambaPrinterForServiceManualInstanceEnumeration::addElement
   (const Linux_SambaPrinterForServiceManualInstance& elementP){
   	
  	if(firstElementP==0){
  	  firstElementP=new Linux_SambaPrinterForServiceManualInstanceEnumerationElement();
  	  firstElementP->m_elementP=new Linux_SambaPrinterForServiceManualInstance(elementP);
  	  endElementP=firstElementP;
  	  currentElementP=firstElementP;
  	}else{
  	  endElementP->m_nextP=new Linux_SambaPrinterForServiceManualInstanceEnumerationElement();
  	  endElementP=endElementP->m_nextP;
  	  endElementP->m_elementP=new Linux_SambaPrinterForServiceManualInstance(elementP);
  	}
  };  
}
 
