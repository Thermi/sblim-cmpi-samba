/**
 *  Linux_SambaPrinterPrintingForPrinterRepositoryInstance.cpp
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


#include "Linux_SambaPrinterPrintingForPrinterRepositoryInstance.h"
#include "CmpiData.h"
#include "CmpiString.h"
#include "CmpiArray.h"
#include <string>

namespace genProvider {

  //*********************************************************
  //Linux_SambaPrinterPrintingForPrinterRepositoryInstance
  //*********************************************************

  //empty constructor
  Linux_SambaPrinterPrintingForPrinterRepositoryInstance::
   Linux_SambaPrinterPrintingForPrinterRepositoryInstance(){   	
   	init();  	   	
  };
  
  
  //copy constructor	
  Linux_SambaPrinterPrintingForPrinterRepositoryInstance::
   Linux_SambaPrinterPrintingForPrinterRepositoryInstance
   (const Linux_SambaPrinterPrintingForPrinterRepositoryInstance& original){   	
   	init(original);  	   	
  };
  
  
  //constructor using CmpiInstance
  Linux_SambaPrinterPrintingForPrinterRepositoryInstance::
   Linux_SambaPrinterPrintingForPrinterRepositoryInstance (const CmpiInstance& inst, const char* instanceNamespace){
    CmpiData cmpiData;
    init(); 
    
    CmpiObjectPath cop=inst.getObjectPath();
    cop.setNameSpace(instanceNamespace);
    setInstanceName(Linux_SambaPrinterPrintingForPrinterInstanceName(cop));
    
  }
  
  
  //Destructor
  Linux_SambaPrinterPrintingForPrinterRepositoryInstance::
   ~Linux_SambaPrinterPrintingForPrinterRepositoryInstance(){
   	reset();  	  
  };
  
  
  //copy operator
  Linux_SambaPrinterPrintingForPrinterRepositoryInstance&
   Linux_SambaPrinterPrintingForPrinterRepositoryInstance::operator=
   (const Linux_SambaPrinterPrintingForPrinterRepositoryInstance& original){   	
   	init(original);
   	return *this;
  };
  
  
  //converts to CmpiInstance
  CmpiInstance Linux_SambaPrinterPrintingForPrinterRepositoryInstance::
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
  unsigned int Linux_SambaPrinterPrintingForPrinterRepositoryInstance::
   isInstanceNameSet() const{
  	return isSet.instanceName;
  }
  
  const Linux_SambaPrinterPrintingForPrinterInstanceName&
    Linux_SambaPrinterPrintingForPrinterRepositoryInstance::getInstanceName() const{

    if(!isSet.instanceName)
   	  throw CmpiErrorFormater::getErrorException(
   	   CmpiErrorFormater::NOT_SET,
   	   "InstanceName not set in Linux_SambaPrinterPrintingForPrinter instance");
  		
   	return m_instanceName;
  }

  void Linux_SambaPrinterPrintingForPrinterRepositoryInstance::setInstanceName(
   const Linux_SambaPrinterPrintingForPrinterInstanceName& val){
    m_instanceName = val;
    isSet.instanceName=1;
  }


  
  //set isSet attributes to FALSE
  void Linux_SambaPrinterPrintingForPrinterRepositoryInstance::init(){
   	isSet.instanceName=0;
   	  	
  };
  
  
  //copies another instance properties in this
  void Linux_SambaPrinterPrintingForPrinterRepositoryInstance::init
   (const Linux_SambaPrinterPrintingForPrinterRepositoryInstance& original){   	
   	init();
   	   	
    if(original.isInstanceNameSet()){
      setInstanceName(original.getInstanceName());
    }    
   }
  
  
  //reset the instance data
  void Linux_SambaPrinterPrintingForPrinterRepositoryInstance::reset(){
   	
  	  
  };
  
  
  //*********************************************************
  //Linux_SambaPrinterPrintingForPrinterRepositoryInstanceEnumerationElement	
  //*********************************************************
  
  Linux_SambaPrinterPrintingForPrinterRepositoryInstanceEnumerationElement::
   Linux_SambaPrinterPrintingForPrinterRepositoryInstanceEnumerationElement(){
   	
  	m_elementP=0;
  	m_nextP=0;
  	  
  };
  
  
  Linux_SambaPrinterPrintingForPrinterRepositoryInstanceEnumerationElement::
   ~Linux_SambaPrinterPrintingForPrinterRepositoryInstanceEnumerationElement(){
   	
  	if (m_elementP!=0)
  	  delete(m_elementP);
  	if (m_nextP!=0)
  	  delete(m_nextP);
  	  
  };

  
  //*********************************************************
  //Linux_SambaPrinterPrintingForPrinterRepositoryInstanceNameEnumeration
  //*********************************************************

  Linux_SambaPrinterPrintingForPrinterRepositoryInstanceEnumeration::
   Linux_SambaPrinterPrintingForPrinterRepositoryInstanceEnumeration(){
   	
  	 firstElementP=0;
     currentElementP=0;
     endElementP=0;
  };
  
  Linux_SambaPrinterPrintingForPrinterRepositoryInstanceEnumeration::
   Linux_SambaPrinterPrintingForPrinterRepositoryInstanceEnumeration(
   const Linux_SambaPrinterPrintingForPrinterRepositoryInstanceEnumeration& original){
   	
     firstElementP=0;
     currentElementP=0;
     endElementP=0;
  	 
     int size=original.getSize();
     for(int i=0;i<size;i++)
       addElement(original.getElement(i));           
  };
  
  	  
  Linux_SambaPrinterPrintingForPrinterRepositoryInstanceEnumeration::
   ~Linux_SambaPrinterPrintingForPrinterRepositoryInstanceEnumeration(){
   	
  	if (firstElementP!=0)
  	  delete(firstElementP);
  	  	
  };
  
  	  
  void Linux_SambaPrinterPrintingForPrinterRepositoryInstanceEnumeration::reset(){
  	
  	currentElementP=firstElementP;
  };
  
  	  
  bool Linux_SambaPrinterPrintingForPrinterRepositoryInstanceEnumeration::hasNext() const{
  	
  	return (currentElementP!=0);
  
  };
  
  int Linux_SambaPrinterPrintingForPrinterRepositoryInstanceEnumeration::getSize() const{
  	
    int size=0;
    Linux_SambaPrinterPrintingForPrinterRepositoryInstanceEnumerationElement* followingP=firstElementP;
  	
  	while(followingP!=0){
        followingP=followingP->m_nextP;
        size++;
    }
  	
    return size;
    
  };
  
  const Linux_SambaPrinterPrintingForPrinterRepositoryInstance&  
   Linux_SambaPrinterPrintingForPrinterRepositoryInstanceEnumeration::getElement(int pos) const{
   
    Linux_SambaPrinterPrintingForPrinterRepositoryInstanceEnumerationElement* followingP=firstElementP;
   
    int i=0;
    while((followingP!=0)&&(i<pos)){
        followingP=followingP->m_nextP;
        i++;
    }
    
    return *(followingP->m_elementP);
  };
  
  	  
  const Linux_SambaPrinterPrintingForPrinterRepositoryInstance&
   Linux_SambaPrinterPrintingForPrinterRepositoryInstanceEnumeration::getNext() {
   	
  	 Linux_SambaPrinterPrintingForPrinterRepositoryInstanceEnumerationElement* currentP=
  	  currentElementP;
  	 currentElementP=currentElementP->m_nextP;
  	 
  	 return *(currentP->m_elementP);
  };
  	  
  void Linux_SambaPrinterPrintingForPrinterRepositoryInstanceEnumeration::addElement
   (const Linux_SambaPrinterPrintingForPrinterRepositoryInstance& elementP){
   	
  	if(firstElementP==0){
  	  firstElementP=new Linux_SambaPrinterPrintingForPrinterRepositoryInstanceEnumerationElement();
  	  firstElementP->m_elementP=new Linux_SambaPrinterPrintingForPrinterRepositoryInstance(elementP);
  	  endElementP=firstElementP;
  	  currentElementP=firstElementP;
  	}else{
  	  endElementP->m_nextP=new Linux_SambaPrinterPrintingForPrinterRepositoryInstanceEnumerationElement();
  	  endElementP=endElementP->m_nextP;
  	  endElementP->m_elementP=new Linux_SambaPrinterPrintingForPrinterRepositoryInstance(elementP);
  	}
  };  
}
 
