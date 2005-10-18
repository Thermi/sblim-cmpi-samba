/**
 *  Linux_SambaPrinterAdminForPrinterManualInstance.cpp
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


#include "Linux_SambaPrinterAdminForPrinterManualInstance.h"
#include "CmpiData.h"
#include "CmpiString.h"
#include "CmpiArray.h"
#include <string>

namespace genProvider {

  //*********************************************************
  //Linux_SambaPrinterAdminForPrinterManualInstance
  //*********************************************************

  //empty constructor
  Linux_SambaPrinterAdminForPrinterManualInstance::
   Linux_SambaPrinterAdminForPrinterManualInstance(){   	
   	init();  	   	
  };
  
  
  //copy constructor	
  Linux_SambaPrinterAdminForPrinterManualInstance::
   Linux_SambaPrinterAdminForPrinterManualInstance
   (const Linux_SambaPrinterAdminForPrinterManualInstance& original){   	
   	init(original);  	   	
  };
  
  
  //constructor using CmpiInstance
  Linux_SambaPrinterAdminForPrinterManualInstance::
   Linux_SambaPrinterAdminForPrinterManualInstance (const CmpiInstance& inst, const char* instanceNamespace){
    CmpiData cmpiData;
    init(); 
    
    CmpiObjectPath cop=inst.getObjectPath();
    cop.setNameSpace(instanceNamespace);
    setInstanceName(Linux_SambaPrinterAdminForPrinterInstanceName(cop));
    
  }
  
  
  //Destructor
  Linux_SambaPrinterAdminForPrinterManualInstance::
   ~Linux_SambaPrinterAdminForPrinterManualInstance(){
   	reset();  	  
  };
  
  
  //copy operator
  Linux_SambaPrinterAdminForPrinterManualInstance&
   Linux_SambaPrinterAdminForPrinterManualInstance::operator=
   (const Linux_SambaPrinterAdminForPrinterManualInstance& original){   	
   	init(original);
   	return *this;
  };
  
  
  //converts to CmpiInstance
  CmpiInstance Linux_SambaPrinterAdminForPrinterManualInstance::
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
  unsigned int Linux_SambaPrinterAdminForPrinterManualInstance::
   isInstanceNameSet() const{
  	return isSet.instanceName;
  }
  
  const Linux_SambaPrinterAdminForPrinterInstanceName&
    Linux_SambaPrinterAdminForPrinterManualInstance::getInstanceName() const{

    if(!isSet.instanceName)
   	  throw CmpiErrorFormater::getErrorException(
   	   CmpiErrorFormater::NOT_SET,
   	   "InstanceName not set in Linux_SambaPrinterAdminForPrinter instance");
  		
   	return m_instanceName;
  }

  void Linux_SambaPrinterAdminForPrinterManualInstance::setInstanceName(
   const Linux_SambaPrinterAdminForPrinterInstanceName& val){
    m_instanceName = val;
    isSet.instanceName=1;
  }


  
  //set isSet attributes to FALSE
  void Linux_SambaPrinterAdminForPrinterManualInstance::init(){
   	isSet.instanceName=0;
   	  	
  };
  
  
  //copies another instance properties in this
  void Linux_SambaPrinterAdminForPrinterManualInstance::init
   (const Linux_SambaPrinterAdminForPrinterManualInstance& original){   	
   	init();
   	   	
    if(original.isInstanceNameSet()){
      setInstanceName(original.getInstanceName());
    }    
   }
  
  
  //reset the instance data
  void Linux_SambaPrinterAdminForPrinterManualInstance::reset(){
   	
  	  
  };
  
  
  //*********************************************************
  //Linux_SambaPrinterAdminForPrinterManualInstanceEnumerationElement	
  //*********************************************************
  
  Linux_SambaPrinterAdminForPrinterManualInstanceEnumerationElement::
   Linux_SambaPrinterAdminForPrinterManualInstanceEnumerationElement(){
   	
  	m_elementP=0;
  	m_nextP=0;
  	  
  };
  
  
  Linux_SambaPrinterAdminForPrinterManualInstanceEnumerationElement::
   ~Linux_SambaPrinterAdminForPrinterManualInstanceEnumerationElement(){
   	
  	if (m_elementP!=0)
  	  delete(m_elementP);
  	if (m_nextP!=0)
  	  delete(m_nextP);
  	  
  };

  
  //*********************************************************
  //Linux_SambaPrinterAdminForPrinterManualInstanceNameEnumeration
  //*********************************************************

  Linux_SambaPrinterAdminForPrinterManualInstanceEnumeration::
   Linux_SambaPrinterAdminForPrinterManualInstanceEnumeration(){
   	
  	 firstElementP=0;
     currentElementP=0;
     endElementP=0;
  };
  
  Linux_SambaPrinterAdminForPrinterManualInstanceEnumeration::
   Linux_SambaPrinterAdminForPrinterManualInstanceEnumeration(
   const Linux_SambaPrinterAdminForPrinterManualInstanceEnumeration& original){
   	
     firstElementP=0;
     currentElementP=0;
     endElementP=0;
  	 
     int size=original.getSize();
     for(int i=0;i<size;i++)
       addElement(original.getElement(i));           
  };
  
  	  
  Linux_SambaPrinterAdminForPrinterManualInstanceEnumeration::
   ~Linux_SambaPrinterAdminForPrinterManualInstanceEnumeration(){
   	
  	if (firstElementP!=0)
  	  delete(firstElementP);
  	  	
  };
  
  	  
  void Linux_SambaPrinterAdminForPrinterManualInstanceEnumeration::reset(){
  	
  	currentElementP=firstElementP;
  };
  
  	  
  bool Linux_SambaPrinterAdminForPrinterManualInstanceEnumeration::hasNext() const{
  	
  	return (currentElementP!=0);
  
  };
  
  int Linux_SambaPrinterAdminForPrinterManualInstanceEnumeration::getSize() const{
  	
    int size=0;
    Linux_SambaPrinterAdminForPrinterManualInstanceEnumerationElement* followingP=firstElementP;
  	
  	while(followingP!=0){
        followingP=followingP->m_nextP;
        size++;
    }
  	
    return size;
    
  };
  
  const Linux_SambaPrinterAdminForPrinterManualInstance&  
   Linux_SambaPrinterAdminForPrinterManualInstanceEnumeration::getElement(int pos) const{
   
    Linux_SambaPrinterAdminForPrinterManualInstanceEnumerationElement* followingP=firstElementP;
   
    int i=0;
    while((followingP!=0)&&(i<pos)){
        followingP=followingP->m_nextP;
        i++;
    }
    
    return *(followingP->m_elementP);
  };
  
  	  
  const Linux_SambaPrinterAdminForPrinterManualInstance&
   Linux_SambaPrinterAdminForPrinterManualInstanceEnumeration::getNext() {
   	
  	 Linux_SambaPrinterAdminForPrinterManualInstanceEnumerationElement* currentP=
  	  currentElementP;
  	 currentElementP=currentElementP->m_nextP;
  	 
  	 return *(currentP->m_elementP);
  };
  	  
  void Linux_SambaPrinterAdminForPrinterManualInstanceEnumeration::addElement
   (const Linux_SambaPrinterAdminForPrinterManualInstance& elementP){
   	
  	if(firstElementP==0){
  	  firstElementP=new Linux_SambaPrinterAdminForPrinterManualInstanceEnumerationElement();
  	  firstElementP->m_elementP=new Linux_SambaPrinterAdminForPrinterManualInstance(elementP);
  	  endElementP=firstElementP;
  	  currentElementP=firstElementP;
  	}else{
  	  endElementP->m_nextP=new Linux_SambaPrinterAdminForPrinterManualInstanceEnumerationElement();
  	  endElementP=endElementP->m_nextP;
  	  endElementP->m_elementP=new Linux_SambaPrinterAdminForPrinterManualInstance(elementP);
  	}
  };  
}
 
