/**
 *  Linux_SambaPrinterPrintingForPrinterManualInstance.cpp
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


#include "Linux_SambaPrinterPrintingForPrinterManualInstance.h"
#include "CmpiData.h"
#include "CmpiString.h"
#include "CmpiArray.h"
#include <string>

namespace genProvider {

  //*********************************************************
  //Linux_SambaPrinterPrintingForPrinterManualInstance
  //*********************************************************

  //empty constructor
  Linux_SambaPrinterPrintingForPrinterManualInstance::
   Linux_SambaPrinterPrintingForPrinterManualInstance(){   	
   	init();  	   	
  };
  
  
  //copy constructor	
  Linux_SambaPrinterPrintingForPrinterManualInstance::
   Linux_SambaPrinterPrintingForPrinterManualInstance
   (const Linux_SambaPrinterPrintingForPrinterManualInstance& original){   	
   	init(original);  	   	
  };
  
  
  //constructor using CmpiInstance
  Linux_SambaPrinterPrintingForPrinterManualInstance::
   Linux_SambaPrinterPrintingForPrinterManualInstance (const CmpiInstance& inst, const char* instanceNamespace){
    CmpiData cmpiData;
    init(); 
    
    CmpiObjectPath cop=inst.getObjectPath();
    cop.setNameSpace(instanceNamespace);
    setInstanceName(Linux_SambaPrinterPrintingForPrinterInstanceName(cop));
    
  }
  
  
  //Destructor
  Linux_SambaPrinterPrintingForPrinterManualInstance::
   ~Linux_SambaPrinterPrintingForPrinterManualInstance(){
   	reset();  	  
  };
  
  
  //copy operator
  Linux_SambaPrinterPrintingForPrinterManualInstance&
   Linux_SambaPrinterPrintingForPrinterManualInstance::operator=
   (const Linux_SambaPrinterPrintingForPrinterManualInstance& original){   	
   	init(original);
   	return *this;
  };
  
  
  //converts to CmpiInstance
  CmpiInstance Linux_SambaPrinterPrintingForPrinterManualInstance::
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
  unsigned int Linux_SambaPrinterPrintingForPrinterManualInstance::
   isInstanceNameSet() const{
  	return isSet.instanceName;
  }
  
  const Linux_SambaPrinterPrintingForPrinterInstanceName&
    Linux_SambaPrinterPrintingForPrinterManualInstance::getInstanceName() const{

    if(!isSet.instanceName)
   	  throw CmpiErrorFormater::getErrorException(
   	   CmpiErrorFormater::NOT_SET,
   	   "InstanceName not set in Linux_SambaPrinterPrintingForPrinter instance");
  		
   	return m_instanceName;
  }

  void Linux_SambaPrinterPrintingForPrinterManualInstance::setInstanceName(
   const Linux_SambaPrinterPrintingForPrinterInstanceName& val){
    m_instanceName = val;
    isSet.instanceName=1;
  }


  
  //set isSet attributes to FALSE
  void Linux_SambaPrinterPrintingForPrinterManualInstance::init(){
   	isSet.instanceName=0;
   	  	
  };
  
  
  //copies another instance properties in this
  void Linux_SambaPrinterPrintingForPrinterManualInstance::init
   (const Linux_SambaPrinterPrintingForPrinterManualInstance& original){   	
   	init();
   	   	
    if(original.isInstanceNameSet()){
      setInstanceName(original.getInstanceName());
    }    
   }
  
  
  //reset the instance data
  void Linux_SambaPrinterPrintingForPrinterManualInstance::reset(){
   	
  	  
  };
  
  
  //*********************************************************
  //Linux_SambaPrinterPrintingForPrinterManualInstanceEnumerationElement	
  //*********************************************************
  
  Linux_SambaPrinterPrintingForPrinterManualInstanceEnumerationElement::
   Linux_SambaPrinterPrintingForPrinterManualInstanceEnumerationElement(){
   	
  	m_elementP=0;
  	m_nextP=0;
  	  
  };
  
  
  Linux_SambaPrinterPrintingForPrinterManualInstanceEnumerationElement::
   ~Linux_SambaPrinterPrintingForPrinterManualInstanceEnumerationElement(){
   	
  	if (m_elementP!=0)
  	  delete(m_elementP);
  	if (m_nextP!=0)
  	  delete(m_nextP);
  	  
  };

  
  //*********************************************************
  //Linux_SambaPrinterPrintingForPrinterManualInstanceNameEnumeration
  //*********************************************************

  Linux_SambaPrinterPrintingForPrinterManualInstanceEnumeration::
   Linux_SambaPrinterPrintingForPrinterManualInstanceEnumeration(){
   	
  	 firstElementP=0;
     currentElementP=0;
     endElementP=0;
  };
  
  Linux_SambaPrinterPrintingForPrinterManualInstanceEnumeration::
   Linux_SambaPrinterPrintingForPrinterManualInstanceEnumeration(
   const Linux_SambaPrinterPrintingForPrinterManualInstanceEnumeration& original){
   	
     firstElementP=0;
     currentElementP=0;
     endElementP=0;
  	 
     int size=original.getSize();
     for(int i=0;i<size;i++)
       addElement(original.getElement(i));           
  };
  
  	  
  Linux_SambaPrinterPrintingForPrinterManualInstanceEnumeration::
   ~Linux_SambaPrinterPrintingForPrinterManualInstanceEnumeration(){
   	
  	if (firstElementP!=0)
  	  delete(firstElementP);
  	  	
  };
  
  	  
  void Linux_SambaPrinterPrintingForPrinterManualInstanceEnumeration::reset(){
  	
  	currentElementP=firstElementP;
  };
  
  	  
  bool Linux_SambaPrinterPrintingForPrinterManualInstanceEnumeration::hasNext() const{
  	
  	return (currentElementP!=0);
  
  };
  
  int Linux_SambaPrinterPrintingForPrinterManualInstanceEnumeration::getSize() const{
  	
    int size=0;
    Linux_SambaPrinterPrintingForPrinterManualInstanceEnumerationElement* followingP=firstElementP;
  	
  	while(followingP!=0){
        followingP=followingP->m_nextP;
        size++;
    }
  	
    return size;
    
  };
  
  const Linux_SambaPrinterPrintingForPrinterManualInstance&  
   Linux_SambaPrinterPrintingForPrinterManualInstanceEnumeration::getElement(int pos) const{
   
    Linux_SambaPrinterPrintingForPrinterManualInstanceEnumerationElement* followingP=firstElementP;
   
    int i=0;
    while((followingP!=0)&&(i<pos)){
        followingP=followingP->m_nextP;
        i++;
    }
    
    return *(followingP->m_elementP);
  };
  
  	  
  const Linux_SambaPrinterPrintingForPrinterManualInstance&
   Linux_SambaPrinterPrintingForPrinterManualInstanceEnumeration::getNext() {
   	
  	 Linux_SambaPrinterPrintingForPrinterManualInstanceEnumerationElement* currentP=
  	  currentElementP;
  	 currentElementP=currentElementP->m_nextP;
  	 
  	 return *(currentP->m_elementP);
  };
  	  
  void Linux_SambaPrinterPrintingForPrinterManualInstanceEnumeration::addElement
   (const Linux_SambaPrinterPrintingForPrinterManualInstance& elementP){
   	
  	if(firstElementP==0){
  	  firstElementP=new Linux_SambaPrinterPrintingForPrinterManualInstanceEnumerationElement();
  	  firstElementP->m_elementP=new Linux_SambaPrinterPrintingForPrinterManualInstance(elementP);
  	  endElementP=firstElementP;
  	  currentElementP=firstElementP;
  	}else{
  	  endElementP->m_nextP=new Linux_SambaPrinterPrintingForPrinterManualInstanceEnumerationElement();
  	  endElementP=endElementP->m_nextP;
  	  endElementP->m_elementP=new Linux_SambaPrinterPrintingForPrinterManualInstance(elementP);
  	}
  };  
}
 
