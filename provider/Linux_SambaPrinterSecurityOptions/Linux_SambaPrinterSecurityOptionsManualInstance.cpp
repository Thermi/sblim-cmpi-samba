/**
 *  Linux_SambaPrinterSecurityOptionsManualInstance.cpp
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


#include "Linux_SambaPrinterSecurityOptionsManualInstance.h"
#include "CmpiData.h"
#include "CmpiString.h"
#include "CmpiArray.h"
#include <string>

namespace genProvider {

  //*********************************************************
  //Linux_SambaPrinterSecurityOptionsManualInstance
  //*********************************************************

  //empty constructor
  Linux_SambaPrinterSecurityOptionsManualInstance::
   Linux_SambaPrinterSecurityOptionsManualInstance(){   	
   	init();  	   	
  };
  
  
  //copy constructor	
  Linux_SambaPrinterSecurityOptionsManualInstance::
   Linux_SambaPrinterSecurityOptionsManualInstance
   (const Linux_SambaPrinterSecurityOptionsManualInstance& original){   	
   	init(original);  	   	
  };
  
  
  //constructor using CmpiInstance
  Linux_SambaPrinterSecurityOptionsManualInstance::
   Linux_SambaPrinterSecurityOptionsManualInstance (const CmpiInstance& inst, const char* instanceNamespace){
    CmpiData cmpiData;
    init(); 
    
    CmpiObjectPath cop=inst.getObjectPath();
    cop.setNameSpace(instanceNamespace);
    setInstanceName(Linux_SambaPrinterSecurityOptionsInstanceName(cop));
    
  }
  
  
  //Destructor
  Linux_SambaPrinterSecurityOptionsManualInstance::
   ~Linux_SambaPrinterSecurityOptionsManualInstance(){
   	reset();  	  
  };
  
  
  //copy operator
  Linux_SambaPrinterSecurityOptionsManualInstance&
   Linux_SambaPrinterSecurityOptionsManualInstance::operator=
   (const Linux_SambaPrinterSecurityOptionsManualInstance& original){   	
   	init(original);
   	return *this;
  };
  
  
  //converts to CmpiInstance
  CmpiInstance Linux_SambaPrinterSecurityOptionsManualInstance::
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
  unsigned int Linux_SambaPrinterSecurityOptionsManualInstance::
   isInstanceNameSet() const{
  	return isSet.instanceName;
  }
  
  const Linux_SambaPrinterSecurityOptionsInstanceName&
    Linux_SambaPrinterSecurityOptionsManualInstance::getInstanceName() const{

    if(!isSet.instanceName)
   	  throw CmpiErrorFormater::getErrorException(
   	   CmpiErrorFormater::NOT_SET,
   	   "InstanceName not set in Linux_SambaPrinterSecurityOptions instance");
  		
   	return m_instanceName;
  }

  void Linux_SambaPrinterSecurityOptionsManualInstance::setInstanceName(
   const Linux_SambaPrinterSecurityOptionsInstanceName& val){
    m_instanceName = val;
    isSet.instanceName=1;
  }


  
  //set isSet attributes to FALSE
  void Linux_SambaPrinterSecurityOptionsManualInstance::init(){
   	isSet.instanceName=0;
   	  	
  };
  
  
  //copies another instance properties in this
  void Linux_SambaPrinterSecurityOptionsManualInstance::init
   (const Linux_SambaPrinterSecurityOptionsManualInstance& original){   	
   	init();
   	   	
    if(original.isInstanceNameSet()){
      setInstanceName(original.getInstanceName());
    }    
   }
  
  
  //reset the instance data
  void Linux_SambaPrinterSecurityOptionsManualInstance::reset(){
   	
  	  
  };
  
  
  //*********************************************************
  //Linux_SambaPrinterSecurityOptionsManualInstanceEnumerationElement	
  //*********************************************************
  
  Linux_SambaPrinterSecurityOptionsManualInstanceEnumerationElement::
   Linux_SambaPrinterSecurityOptionsManualInstanceEnumerationElement(){
   	
  	m_elementP=0;
  	m_nextP=0;
  	  
  };
  
  
  Linux_SambaPrinterSecurityOptionsManualInstanceEnumerationElement::
   ~Linux_SambaPrinterSecurityOptionsManualInstanceEnumerationElement(){
   	
  	if (m_elementP!=0)
  	  delete(m_elementP);
  	if (m_nextP!=0)
  	  delete(m_nextP);
  	  
  };

  
  //*********************************************************
  //Linux_SambaPrinterSecurityOptionsManualInstanceNameEnumeration
  //*********************************************************

  Linux_SambaPrinterSecurityOptionsManualInstanceEnumeration::
   Linux_SambaPrinterSecurityOptionsManualInstanceEnumeration(){
   	
  	 firstElementP=0;
     currentElementP=0;
     endElementP=0;
  };
  
  Linux_SambaPrinterSecurityOptionsManualInstanceEnumeration::
   Linux_SambaPrinterSecurityOptionsManualInstanceEnumeration(
   const Linux_SambaPrinterSecurityOptionsManualInstanceEnumeration& original){
   	
     firstElementP=0;
     currentElementP=0;
     endElementP=0;
  	 
     int size=original.getSize();
     for(int i=0;i<size;i++)
       addElement(original.getElement(i));           
  };
  
  	  
  Linux_SambaPrinterSecurityOptionsManualInstanceEnumeration::
   ~Linux_SambaPrinterSecurityOptionsManualInstanceEnumeration(){
   	
  	if (firstElementP!=0)
  	  delete(firstElementP);
  	  	
  };
  
  	  
  void Linux_SambaPrinterSecurityOptionsManualInstanceEnumeration::reset(){
  	
  	currentElementP=firstElementP;
  };
  
  	  
  bool Linux_SambaPrinterSecurityOptionsManualInstanceEnumeration::hasNext() const{
  	
  	return (currentElementP!=0);
  
  };
  
  int Linux_SambaPrinterSecurityOptionsManualInstanceEnumeration::getSize() const{
  	
    int size=0;
    Linux_SambaPrinterSecurityOptionsManualInstanceEnumerationElement* followingP=firstElementP;
  	
  	while(followingP!=0){
        followingP=followingP->m_nextP;
        size++;
    }
  	
    return size;
    
  };
  
  const Linux_SambaPrinterSecurityOptionsManualInstance&  
   Linux_SambaPrinterSecurityOptionsManualInstanceEnumeration::getElement(int pos) const{
   
    Linux_SambaPrinterSecurityOptionsManualInstanceEnumerationElement* followingP=firstElementP;
   
    int i=0;
    while((followingP!=0)&&(i<pos)){
        followingP=followingP->m_nextP;
        i++;
    }
    
    return *(followingP->m_elementP);
  };
  
  	  
  const Linux_SambaPrinterSecurityOptionsManualInstance&
   Linux_SambaPrinterSecurityOptionsManualInstanceEnumeration::getNext() {
   	
  	 Linux_SambaPrinterSecurityOptionsManualInstanceEnumerationElement* currentP=
  	  currentElementP;
  	 currentElementP=currentElementP->m_nextP;
  	 
  	 return *(currentP->m_elementP);
  };
  	  
  void Linux_SambaPrinterSecurityOptionsManualInstanceEnumeration::addElement
   (const Linux_SambaPrinterSecurityOptionsManualInstance& elementP){
   	
  	if(firstElementP==0){
  	  firstElementP=new Linux_SambaPrinterSecurityOptionsManualInstanceEnumerationElement();
  	  firstElementP->m_elementP=new Linux_SambaPrinterSecurityOptionsManualInstance(elementP);
  	  endElementP=firstElementP;
  	  currentElementP=firstElementP;
  	}else{
  	  endElementP->m_nextP=new Linux_SambaPrinterSecurityOptionsManualInstanceEnumerationElement();
  	  endElementP=endElementP->m_nextP;
  	  endElementP->m_elementP=new Linux_SambaPrinterSecurityOptionsManualInstance(elementP);
  	}
  };  
}
 
