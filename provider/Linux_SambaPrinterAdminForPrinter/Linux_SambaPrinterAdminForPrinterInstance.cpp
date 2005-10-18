/**
 *  Linux_SambaPrinterAdminForPrinterInstance.cpp
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


#include "Linux_SambaPrinterAdminForPrinterInstance.h"
#include "CmpiData.h"
#include "CmpiString.h"
#include "CmpiArray.h"
#include <string>

namespace genProvider {

  //*********************************************************
  //Linux_SambaPrinterAdminForPrinterInstance
  //*********************************************************

  //empty constructor
  Linux_SambaPrinterAdminForPrinterInstance::
   Linux_SambaPrinterAdminForPrinterInstance(){   	
   	init();  	   	
  };
  
  
  //copy constructor	
  Linux_SambaPrinterAdminForPrinterInstance::
   Linux_SambaPrinterAdminForPrinterInstance
   (const Linux_SambaPrinterAdminForPrinterInstance& original){   	
   	init(original);  	   	
  };
  
  
  //constructor using CmpiInstance
  Linux_SambaPrinterAdminForPrinterInstance::
   Linux_SambaPrinterAdminForPrinterInstance (const CmpiInstance& inst, const char* instanceNamespace){
    CmpiData cmpiData;
    init(); 
    
    CmpiObjectPath cop=inst.getObjectPath();
    cop.setNameSpace(instanceNamespace);
    setInstanceName(Linux_SambaPrinterAdminForPrinterInstanceName(cop));
    
  }
  
  
  //Destructor
  Linux_SambaPrinterAdminForPrinterInstance::
   ~Linux_SambaPrinterAdminForPrinterInstance(){
   	reset();  	  
  };
  
  
  //copy operator
  Linux_SambaPrinterAdminForPrinterInstance&
   Linux_SambaPrinterAdminForPrinterInstance::operator=
   (const Linux_SambaPrinterAdminForPrinterInstance& original){   	
   	init(original);
   	return *this;
  };
  
  
  //converts to CmpiInstance
  CmpiInstance Linux_SambaPrinterAdminForPrinterInstance::
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
  unsigned int Linux_SambaPrinterAdminForPrinterInstance::
   isInstanceNameSet() const{
  	return isSet.instanceName;
  }
  
  const Linux_SambaPrinterAdminForPrinterInstanceName&
    Linux_SambaPrinterAdminForPrinterInstance::getInstanceName() const{

    if(!isSet.instanceName)
   	  throw CmpiErrorFormater::getErrorException(
   	   CmpiErrorFormater::NOT_SET,
   	   "InstanceName not set in Linux_SambaPrinterAdminForPrinter instance");
  		
   	return m_instanceName;
  }

  void Linux_SambaPrinterAdminForPrinterInstance::setInstanceName(
   const Linux_SambaPrinterAdminForPrinterInstanceName& val){
    m_instanceName = val;
    isSet.instanceName=1;
  }


  
  //set isSet attributes to FALSE
  void Linux_SambaPrinterAdminForPrinterInstance::init(){
   	isSet.instanceName=0;
   	  	
  };
  
  
  //copies another instance properties in this
  void Linux_SambaPrinterAdminForPrinterInstance::init
   (const Linux_SambaPrinterAdminForPrinterInstance& original){   	
   	init();
   	   	
    if(original.isInstanceNameSet()){
      setInstanceName(original.getInstanceName());
    }    
   }
  
  
  //reset the instance data
  void Linux_SambaPrinterAdminForPrinterInstance::reset(){
   	
  	  
  };
  
  
  //*********************************************************
  //Linux_SambaPrinterAdminForPrinterInstanceEnumerationElement	
  //*********************************************************
  
  Linux_SambaPrinterAdminForPrinterInstanceEnumerationElement::
   Linux_SambaPrinterAdminForPrinterInstanceEnumerationElement(){
   	
  	m_elementP=0;
  	m_nextP=0;
  	  
  };
  
  
  Linux_SambaPrinterAdminForPrinterInstanceEnumerationElement::
   ~Linux_SambaPrinterAdminForPrinterInstanceEnumerationElement(){
   	
  	if (m_elementP!=0)
  	  delete(m_elementP);
  	if (m_nextP!=0)
  	  delete(m_nextP);
  	  
  };

  
  //*********************************************************
  //Linux_SambaPrinterAdminForPrinterInstanceNameEnumeration
  //*********************************************************

  Linux_SambaPrinterAdminForPrinterInstanceEnumeration::
   Linux_SambaPrinterAdminForPrinterInstanceEnumeration(){
   	
  	 firstElementP=0;
     currentElementP=0;
     endElementP=0;
  };
  
  Linux_SambaPrinterAdminForPrinterInstanceEnumeration::
   Linux_SambaPrinterAdminForPrinterInstanceEnumeration(
   const Linux_SambaPrinterAdminForPrinterInstanceEnumeration& original){
   	
     firstElementP=0;
     currentElementP=0;
     endElementP=0;
  	 
     int size=original.getSize();
     for(int i=0;i<size;i++)
       addElement(original.getElement(i));           
  };
  
  	  
  Linux_SambaPrinterAdminForPrinterInstanceEnumeration::
   ~Linux_SambaPrinterAdminForPrinterInstanceEnumeration(){
   	
  	if (firstElementP!=0)
  	  delete(firstElementP);
  	  	
  };
  
  	  
  void Linux_SambaPrinterAdminForPrinterInstanceEnumeration::reset(){
  	
  	currentElementP=firstElementP;
  };
  
  	  
  bool Linux_SambaPrinterAdminForPrinterInstanceEnumeration::hasNext() const{
  	
  	return (currentElementP!=0);
  
  };
  
  int Linux_SambaPrinterAdminForPrinterInstanceEnumeration::getSize() const{
  	
    int size=0;
    Linux_SambaPrinterAdminForPrinterInstanceEnumerationElement* followingP=firstElementP;
  	
  	while(followingP!=0){
        followingP=followingP->m_nextP;
        size++;
    }
  	
    return size;
    
  };
  
  const Linux_SambaPrinterAdminForPrinterInstance&  
   Linux_SambaPrinterAdminForPrinterInstanceEnumeration::getElement(int pos) const{
   
    Linux_SambaPrinterAdminForPrinterInstanceEnumerationElement* followingP=firstElementP;
   
    int i=0;
    while((followingP!=0)&&(i<pos)){
        followingP=followingP->m_nextP;
        i++;
    }
    
    return *(followingP->m_elementP);
  };
  
  	  
  const Linux_SambaPrinterAdminForPrinterInstance&
   Linux_SambaPrinterAdminForPrinterInstanceEnumeration::getNext() {
   	
  	 Linux_SambaPrinterAdminForPrinterInstanceEnumerationElement* currentP=
  	  currentElementP;
  	 currentElementP=currentElementP->m_nextP;
  	 
  	 return *(currentP->m_elementP);
  };
  	  
  void Linux_SambaPrinterAdminForPrinterInstanceEnumeration::addElement
   (const Linux_SambaPrinterAdminForPrinterInstance& elementP){
   	
  	if(firstElementP==0){
  	  firstElementP=new Linux_SambaPrinterAdminForPrinterInstanceEnumerationElement();
  	  firstElementP->m_elementP=new Linux_SambaPrinterAdminForPrinterInstance(elementP);
  	  endElementP=firstElementP;
  	  currentElementP=firstElementP;
  	}else{
  	  endElementP->m_nextP=new Linux_SambaPrinterAdminForPrinterInstanceEnumerationElement();
  	  endElementP=endElementP->m_nextP;
  	  endElementP->m_elementP=new Linux_SambaPrinterAdminForPrinterInstance(elementP);
  	}
  };  
}
 
