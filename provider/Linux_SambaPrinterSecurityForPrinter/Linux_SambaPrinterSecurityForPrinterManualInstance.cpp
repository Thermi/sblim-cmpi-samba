/**
 *  Linux_SambaPrinterSecurityForPrinterManualInstance.cpp
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


#include "Linux_SambaPrinterSecurityForPrinterManualInstance.h"
#include "CmpiData.h"
#include "CmpiString.h"
#include "CmpiArray.h"
#include <string>

namespace genProvider {

  //*********************************************************
  //Linux_SambaPrinterSecurityForPrinterManualInstance
  //*********************************************************

  //empty constructor
  Linux_SambaPrinterSecurityForPrinterManualInstance::
   Linux_SambaPrinterSecurityForPrinterManualInstance(){   	
   	init();  	   	
  };
  
  
  //copy constructor	
  Linux_SambaPrinterSecurityForPrinterManualInstance::
   Linux_SambaPrinterSecurityForPrinterManualInstance
   (const Linux_SambaPrinterSecurityForPrinterManualInstance& original){   	
   	init(original);  	   	
  };
  
  
  //constructor using CmpiInstance
  Linux_SambaPrinterSecurityForPrinterManualInstance::
   Linux_SambaPrinterSecurityForPrinterManualInstance (const CmpiInstance& inst, const char* instanceNamespace){
    CmpiData cmpiData;
    init(); 
    
    CmpiObjectPath cop=inst.getObjectPath();
    cop.setNameSpace(instanceNamespace);
    setInstanceName(Linux_SambaPrinterSecurityForPrinterInstanceName(cop));
    
  }
  
  
  //Destructor
  Linux_SambaPrinterSecurityForPrinterManualInstance::
   ~Linux_SambaPrinterSecurityForPrinterManualInstance(){
   	reset();  	  
  };
  
  
  //copy operator
  Linux_SambaPrinterSecurityForPrinterManualInstance&
   Linux_SambaPrinterSecurityForPrinterManualInstance::operator=
   (const Linux_SambaPrinterSecurityForPrinterManualInstance& original){   	
   	init(original);
   	return *this;
  };
  
  
  //converts to CmpiInstance
  CmpiInstance Linux_SambaPrinterSecurityForPrinterManualInstance::
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
  unsigned int Linux_SambaPrinterSecurityForPrinterManualInstance::
   isInstanceNameSet() const{
  	return isSet.instanceName;
  }
  
  const Linux_SambaPrinterSecurityForPrinterInstanceName&
    Linux_SambaPrinterSecurityForPrinterManualInstance::getInstanceName() const{

    if(!isSet.instanceName)
   	  throw CmpiErrorFormater::getErrorException(
   	   CmpiErrorFormater::NOT_SET,
   	   "InstanceName not set in Linux_SambaPrinterSecurityForPrinter instance");
  		
   	return m_instanceName;
  }

  void Linux_SambaPrinterSecurityForPrinterManualInstance::setInstanceName(
   const Linux_SambaPrinterSecurityForPrinterInstanceName& val){
    m_instanceName = val;
    isSet.instanceName=1;
  }


  
  //set isSet attributes to FALSE
  void Linux_SambaPrinterSecurityForPrinterManualInstance::init(){
   	isSet.instanceName=0;
   	  	
  };
  
  
  //copies another instance properties in this
  void Linux_SambaPrinterSecurityForPrinterManualInstance::init
   (const Linux_SambaPrinterSecurityForPrinterManualInstance& original){   	
   	init();
   	   	
    if(original.isInstanceNameSet()){
      setInstanceName(original.getInstanceName());
    }    
   }
  
  
  //reset the instance data
  void Linux_SambaPrinterSecurityForPrinterManualInstance::reset(){
   	
  	  
  };
  
  
  //*********************************************************
  //Linux_SambaPrinterSecurityForPrinterManualInstanceEnumerationElement	
  //*********************************************************
  
  Linux_SambaPrinterSecurityForPrinterManualInstanceEnumerationElement::
   Linux_SambaPrinterSecurityForPrinterManualInstanceEnumerationElement(){
   	
  	m_elementP=0;
  	m_nextP=0;
  	  
  };
  
  
  Linux_SambaPrinterSecurityForPrinterManualInstanceEnumerationElement::
   ~Linux_SambaPrinterSecurityForPrinterManualInstanceEnumerationElement(){
   	
  	if (m_elementP!=0)
  	  delete(m_elementP);
  	if (m_nextP!=0)
  	  delete(m_nextP);
  	  
  };

  
  //*********************************************************
  //Linux_SambaPrinterSecurityForPrinterManualInstanceNameEnumeration
  //*********************************************************

  Linux_SambaPrinterSecurityForPrinterManualInstanceEnumeration::
   Linux_SambaPrinterSecurityForPrinterManualInstanceEnumeration(){
   	
  	 firstElementP=0;
     currentElementP=0;
     endElementP=0;
  };
  
  Linux_SambaPrinterSecurityForPrinterManualInstanceEnumeration::
   Linux_SambaPrinterSecurityForPrinterManualInstanceEnumeration(
   const Linux_SambaPrinterSecurityForPrinterManualInstanceEnumeration& original){
   	
     firstElementP=0;
     currentElementP=0;
     endElementP=0;
  	 
     int size=original.getSize();
     for(int i=0;i<size;i++)
       addElement(original.getElement(i));           
  };
  
  	  
  Linux_SambaPrinterSecurityForPrinterManualInstanceEnumeration::
   ~Linux_SambaPrinterSecurityForPrinterManualInstanceEnumeration(){
   	
  	if (firstElementP!=0)
  	  delete(firstElementP);
  	  	
  };
  
  	  
  void Linux_SambaPrinterSecurityForPrinterManualInstanceEnumeration::reset(){
  	
  	currentElementP=firstElementP;
  };
  
  	  
  bool Linux_SambaPrinterSecurityForPrinterManualInstanceEnumeration::hasNext() const{
  	
  	return (currentElementP!=0);
  
  };
  
  int Linux_SambaPrinterSecurityForPrinterManualInstanceEnumeration::getSize() const{
  	
    int size=0;
    Linux_SambaPrinterSecurityForPrinterManualInstanceEnumerationElement* followingP=firstElementP;
  	
  	while(followingP!=0){
        followingP=followingP->m_nextP;
        size++;
    }
  	
    return size;
    
  };
  
  const Linux_SambaPrinterSecurityForPrinterManualInstance&  
   Linux_SambaPrinterSecurityForPrinterManualInstanceEnumeration::getElement(int pos) const{
   
    Linux_SambaPrinterSecurityForPrinterManualInstanceEnumerationElement* followingP=firstElementP;
   
    int i=0;
    while((followingP!=0)&&(i<pos)){
        followingP=followingP->m_nextP;
        i++;
    }
    
    return *(followingP->m_elementP);
  };
  
  	  
  const Linux_SambaPrinterSecurityForPrinterManualInstance&
   Linux_SambaPrinterSecurityForPrinterManualInstanceEnumeration::getNext() {
   	
  	 Linux_SambaPrinterSecurityForPrinterManualInstanceEnumerationElement* currentP=
  	  currentElementP;
  	 currentElementP=currentElementP->m_nextP;
  	 
  	 return *(currentP->m_elementP);
  };
  	  
  void Linux_SambaPrinterSecurityForPrinterManualInstanceEnumeration::addElement
   (const Linux_SambaPrinterSecurityForPrinterManualInstance& elementP){
   	
  	if(firstElementP==0){
  	  firstElementP=new Linux_SambaPrinterSecurityForPrinterManualInstanceEnumerationElement();
  	  firstElementP->m_elementP=new Linux_SambaPrinterSecurityForPrinterManualInstance(elementP);
  	  endElementP=firstElementP;
  	  currentElementP=firstElementP;
  	}else{
  	  endElementP->m_nextP=new Linux_SambaPrinterSecurityForPrinterManualInstanceEnumerationElement();
  	  endElementP=endElementP->m_nextP;
  	  endElementP->m_elementP=new Linux_SambaPrinterSecurityForPrinterManualInstance(elementP);
  	}
  };  
}
 
