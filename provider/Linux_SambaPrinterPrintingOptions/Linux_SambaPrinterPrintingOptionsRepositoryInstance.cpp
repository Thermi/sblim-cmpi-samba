/**
 *  Linux_SambaPrinterPrintingOptionsRepositoryInstance.cpp
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


#include "Linux_SambaPrinterPrintingOptionsRepositoryInstance.h"
#include "CmpiData.h"
#include "CmpiString.h"
#include "CmpiArray.h"
#include <string>

namespace genProvider {

  //*********************************************************
  //Linux_SambaPrinterPrintingOptionsRepositoryInstance
  //*********************************************************

  //empty constructor
  Linux_SambaPrinterPrintingOptionsRepositoryInstance::
   Linux_SambaPrinterPrintingOptionsRepositoryInstance(){   	
   	init();  	   	
  };
  
  
  //copy constructor	
  Linux_SambaPrinterPrintingOptionsRepositoryInstance::
   Linux_SambaPrinterPrintingOptionsRepositoryInstance
   (const Linux_SambaPrinterPrintingOptionsRepositoryInstance& original){   	
   	init(original);  	   	
  };
  
  
  //constructor using CmpiInstance
  Linux_SambaPrinterPrintingOptionsRepositoryInstance::
   Linux_SambaPrinterPrintingOptionsRepositoryInstance (const CmpiInstance& inst, const char* instanceNamespace){
    CmpiData cmpiData;
    init(); 
    
    CmpiObjectPath cop=inst.getObjectPath();
    cop.setNameSpace(instanceNamespace);
    setInstanceName(Linux_SambaPrinterPrintingOptionsInstanceName(cop));
    
  }
  
  
  //Destructor
  Linux_SambaPrinterPrintingOptionsRepositoryInstance::
   ~Linux_SambaPrinterPrintingOptionsRepositoryInstance(){
   	reset();  	  
  };
  
  
  //copy operator
  Linux_SambaPrinterPrintingOptionsRepositoryInstance&
   Linux_SambaPrinterPrintingOptionsRepositoryInstance::operator=
   (const Linux_SambaPrinterPrintingOptionsRepositoryInstance& original){   	
   	init(original);
   	return *this;
  };
  
  
  //converts to CmpiInstance
  CmpiInstance Linux_SambaPrinterPrintingOptionsRepositoryInstance::
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
  unsigned int Linux_SambaPrinterPrintingOptionsRepositoryInstance::
   isInstanceNameSet() const{
  	return isSet.instanceName;
  }
  
  const Linux_SambaPrinterPrintingOptionsInstanceName&
    Linux_SambaPrinterPrintingOptionsRepositoryInstance::getInstanceName() const{

    if(!isSet.instanceName)
   	  throw CmpiErrorFormater::getErrorException(
   	   CmpiErrorFormater::NOT_SET,
   	   "InstanceName not set in Linux_SambaPrinterPrintingOptions instance");
  		
   	return m_instanceName;
  }

  void Linux_SambaPrinterPrintingOptionsRepositoryInstance::setInstanceName(
   const Linux_SambaPrinterPrintingOptionsInstanceName& val){
    m_instanceName = val;
    isSet.instanceName=1;
  }


  
  //set isSet attributes to FALSE
  void Linux_SambaPrinterPrintingOptionsRepositoryInstance::init(){
   	isSet.instanceName=0;
   	  	
  };
  
  
  //copies another instance properties in this
  void Linux_SambaPrinterPrintingOptionsRepositoryInstance::init
   (const Linux_SambaPrinterPrintingOptionsRepositoryInstance& original){   	
   	init();
   	   	
    if(original.isInstanceNameSet()){
      setInstanceName(original.getInstanceName());
    }    
   }
  
  
  //reset the instance data
  void Linux_SambaPrinterPrintingOptionsRepositoryInstance::reset(){
   	
  	  
  };
  
  
  //*********************************************************
  //Linux_SambaPrinterPrintingOptionsRepositoryInstanceEnumerationElement	
  //*********************************************************
  
  Linux_SambaPrinterPrintingOptionsRepositoryInstanceEnumerationElement::
   Linux_SambaPrinterPrintingOptionsRepositoryInstanceEnumerationElement(){
   	
  	m_elementP=0;
  	m_nextP=0;
  	  
  };
  
  
  Linux_SambaPrinterPrintingOptionsRepositoryInstanceEnumerationElement::
   ~Linux_SambaPrinterPrintingOptionsRepositoryInstanceEnumerationElement(){
   	
  	if (m_elementP!=0)
  	  delete(m_elementP);
  	if (m_nextP!=0)
  	  delete(m_nextP);
  	  
  };

  
  //*********************************************************
  //Linux_SambaPrinterPrintingOptionsRepositoryInstanceNameEnumeration
  //*********************************************************

  Linux_SambaPrinterPrintingOptionsRepositoryInstanceEnumeration::
   Linux_SambaPrinterPrintingOptionsRepositoryInstanceEnumeration(){
   	
  	 firstElementP=0;
     currentElementP=0;
     endElementP=0;
  };
  
  Linux_SambaPrinterPrintingOptionsRepositoryInstanceEnumeration::
   Linux_SambaPrinterPrintingOptionsRepositoryInstanceEnumeration(
   const Linux_SambaPrinterPrintingOptionsRepositoryInstanceEnumeration& original){
   	
     firstElementP=0;
     currentElementP=0;
     endElementP=0;
  	 
     int size=original.getSize();
     for(int i=0;i<size;i++)
       addElement(original.getElement(i));           
  };
  
  	  
  Linux_SambaPrinterPrintingOptionsRepositoryInstanceEnumeration::
   ~Linux_SambaPrinterPrintingOptionsRepositoryInstanceEnumeration(){
   	
  	if (firstElementP!=0)
  	  delete(firstElementP);
  	  	
  };
  
  	  
  void Linux_SambaPrinterPrintingOptionsRepositoryInstanceEnumeration::reset(){
  	
  	currentElementP=firstElementP;
  };
  
  	  
  bool Linux_SambaPrinterPrintingOptionsRepositoryInstanceEnumeration::hasNext() const{
  	
  	return (currentElementP!=0);
  
  };
  
  int Linux_SambaPrinterPrintingOptionsRepositoryInstanceEnumeration::getSize() const{
  	
    int size=0;
    Linux_SambaPrinterPrintingOptionsRepositoryInstanceEnumerationElement* followingP=firstElementP;
  	
  	while(followingP!=0){
        followingP=followingP->m_nextP;
        size++;
    }
  	
    return size;
    
  };
  
  const Linux_SambaPrinterPrintingOptionsRepositoryInstance&  
   Linux_SambaPrinterPrintingOptionsRepositoryInstanceEnumeration::getElement(int pos) const{
   
    Linux_SambaPrinterPrintingOptionsRepositoryInstanceEnumerationElement* followingP=firstElementP;
   
    int i=0;
    while((followingP!=0)&&(i<pos)){
        followingP=followingP->m_nextP;
        i++;
    }
    
    return *(followingP->m_elementP);
  };
  
  	  
  const Linux_SambaPrinterPrintingOptionsRepositoryInstance&
   Linux_SambaPrinterPrintingOptionsRepositoryInstanceEnumeration::getNext() {
   	
  	 Linux_SambaPrinterPrintingOptionsRepositoryInstanceEnumerationElement* currentP=
  	  currentElementP;
  	 currentElementP=currentElementP->m_nextP;
  	 
  	 return *(currentP->m_elementP);
  };
  	  
  void Linux_SambaPrinterPrintingOptionsRepositoryInstanceEnumeration::addElement
   (const Linux_SambaPrinterPrintingOptionsRepositoryInstance& elementP){
   	
  	if(firstElementP==0){
  	  firstElementP=new Linux_SambaPrinterPrintingOptionsRepositoryInstanceEnumerationElement();
  	  firstElementP->m_elementP=new Linux_SambaPrinterPrintingOptionsRepositoryInstance(elementP);
  	  endElementP=firstElementP;
  	  currentElementP=firstElementP;
  	}else{
  	  endElementP->m_nextP=new Linux_SambaPrinterPrintingOptionsRepositoryInstanceEnumerationElement();
  	  endElementP=endElementP->m_nextP;
  	  endElementP->m_elementP=new Linux_SambaPrinterPrintingOptionsRepositoryInstance(elementP);
  	}
  };  
}
 
