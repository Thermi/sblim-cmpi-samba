/**
 *  Linux_SambaValidUsersForPrinterInstance.cpp
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


#include "Linux_SambaValidUsersForPrinterInstance.h"
#include "CmpiData.h"
#include "CmpiString.h"
#include "CmpiArray.h"
#include <string>

namespace genProvider {

  //*********************************************************
  //Linux_SambaValidUsersForPrinterInstance
  //*********************************************************

  //empty constructor
  Linux_SambaValidUsersForPrinterInstance::
   Linux_SambaValidUsersForPrinterInstance(){   	
   	init();  	   	
  };
  
  
  //copy constructor	
  Linux_SambaValidUsersForPrinterInstance::
   Linux_SambaValidUsersForPrinterInstance
   (const Linux_SambaValidUsersForPrinterInstance& original){   	
   	init(original);  	   	
  };
  
  
  //constructor using CmpiInstance
  Linux_SambaValidUsersForPrinterInstance::
   Linux_SambaValidUsersForPrinterInstance (const CmpiInstance& inst, const char* instanceNamespace){
    CmpiData cmpiData;
    init(); 
    
    CmpiObjectPath cop=inst.getObjectPath();
    cop.setNameSpace(instanceNamespace);
    setInstanceName(Linux_SambaValidUsersForPrinterInstanceName(cop));
    
  }
  
  
  //Destructor
  Linux_SambaValidUsersForPrinterInstance::
   ~Linux_SambaValidUsersForPrinterInstance(){
   	reset();  	  
  };
  
  
  //copy operator
  Linux_SambaValidUsersForPrinterInstance&
   Linux_SambaValidUsersForPrinterInstance::operator=
   (const Linux_SambaValidUsersForPrinterInstance& original){   	
   	init(original);
   	return *this;
  };
  
  
  //converts to CmpiInstance
  CmpiInstance Linux_SambaValidUsersForPrinterInstance::
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
  unsigned int Linux_SambaValidUsersForPrinterInstance::
   isInstanceNameSet() const{
  	return isSet.instanceName;
  }
  
  const Linux_SambaValidUsersForPrinterInstanceName&
    Linux_SambaValidUsersForPrinterInstance::getInstanceName() const{

    if(!isSet.instanceName)
   	  throw CmpiErrorFormater::getErrorException(
   	   CmpiErrorFormater::NOT_SET,
   	   "InstanceName not set in Linux_SambaValidUsersForPrinter instance");
  		
   	return m_instanceName;
  }

  void Linux_SambaValidUsersForPrinterInstance::setInstanceName(
   const Linux_SambaValidUsersForPrinterInstanceName& val){
    m_instanceName = val;
    isSet.instanceName=1;
  }


  
  //set isSet attributes to FALSE
  void Linux_SambaValidUsersForPrinterInstance::init(){
   	isSet.instanceName=0;
   	  	
  };
  
  
  //copies another instance properties in this
  void Linux_SambaValidUsersForPrinterInstance::init
   (const Linux_SambaValidUsersForPrinterInstance& original){   	
   	init();
   	   	
    if(original.isInstanceNameSet()){
      setInstanceName(original.getInstanceName());
    }    
   }
  
  
  //reset the instance data
  void Linux_SambaValidUsersForPrinterInstance::reset(){
   	
  	  
  };
  
  
  //*********************************************************
  //Linux_SambaValidUsersForPrinterInstanceEnumerationElement	
  //*********************************************************
  
  Linux_SambaValidUsersForPrinterInstanceEnumerationElement::
   Linux_SambaValidUsersForPrinterInstanceEnumerationElement(){
   	
  	m_elementP=0;
  	m_nextP=0;
  	  
  };
  
  
  Linux_SambaValidUsersForPrinterInstanceEnumerationElement::
   ~Linux_SambaValidUsersForPrinterInstanceEnumerationElement(){
   	
  	if (m_elementP!=0)
  	  delete(m_elementP);
  	if (m_nextP!=0)
  	  delete(m_nextP);
  	  
  };

  
  //*********************************************************
  //Linux_SambaValidUsersForPrinterInstanceNameEnumeration
  //*********************************************************

  Linux_SambaValidUsersForPrinterInstanceEnumeration::
   Linux_SambaValidUsersForPrinterInstanceEnumeration(){
   	
  	 firstElementP=0;
     currentElementP=0;
     endElementP=0;
  };
  
  Linux_SambaValidUsersForPrinterInstanceEnumeration::
   Linux_SambaValidUsersForPrinterInstanceEnumeration(
   const Linux_SambaValidUsersForPrinterInstanceEnumeration& original){
   	
     firstElementP=0;
     currentElementP=0;
     endElementP=0;
  	 
     int size=original.getSize();
     for(int i=0;i<size;i++)
       addElement(original.getElement(i));           
  };
  
  	  
  Linux_SambaValidUsersForPrinterInstanceEnumeration::
   ~Linux_SambaValidUsersForPrinterInstanceEnumeration(){
   	
  	if (firstElementP!=0)
  	  delete(firstElementP);
  	  	
  };
  
  	  
  void Linux_SambaValidUsersForPrinterInstanceEnumeration::reset(){
  	
  	currentElementP=firstElementP;
  };
  
  	  
  bool Linux_SambaValidUsersForPrinterInstanceEnumeration::hasNext() const{
  	
  	return (currentElementP!=0);
  
  };
  
  int Linux_SambaValidUsersForPrinterInstanceEnumeration::getSize() const{
  	
    int size=0;
    Linux_SambaValidUsersForPrinterInstanceEnumerationElement* followingP=firstElementP;
  	
  	while(followingP!=0){
        followingP=followingP->m_nextP;
        size++;
    }
  	
    return size;
    
  };
  
  const Linux_SambaValidUsersForPrinterInstance&  
   Linux_SambaValidUsersForPrinterInstanceEnumeration::getElement(int pos) const{
   
    Linux_SambaValidUsersForPrinterInstanceEnumerationElement* followingP=firstElementP;
   
    int i=0;
    while((followingP!=0)&&(i<pos)){
        followingP=followingP->m_nextP;
        i++;
    }
    
    return *(followingP->m_elementP);
  };
  
  	  
  const Linux_SambaValidUsersForPrinterInstance&
   Linux_SambaValidUsersForPrinterInstanceEnumeration::getNext() {
   	
  	 Linux_SambaValidUsersForPrinterInstanceEnumerationElement* currentP=
  	  currentElementP;
  	 currentElementP=currentElementP->m_nextP;
  	 
  	 return *(currentP->m_elementP);
  };
  	  
  void Linux_SambaValidUsersForPrinterInstanceEnumeration::addElement
   (const Linux_SambaValidUsersForPrinterInstance& elementP){
   	
  	if(firstElementP==0){
  	  firstElementP=new Linux_SambaValidUsersForPrinterInstanceEnumerationElement();
  	  firstElementP->m_elementP=new Linux_SambaValidUsersForPrinterInstance(elementP);
  	  endElementP=firstElementP;
  	  currentElementP=firstElementP;
  	}else{
  	  endElementP->m_nextP=new Linux_SambaValidUsersForPrinterInstanceEnumerationElement();
  	  endElementP=endElementP->m_nextP;
  	  endElementP->m_elementP=new Linux_SambaValidUsersForPrinterInstance(elementP);
  	}
  };  
}
 
