/**
 *  Linux_SambaReadListForPrinterInstance.cpp
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


#include "Linux_SambaReadListForPrinterInstance.h"
#include "CmpiData.h"
#include "CmpiString.h"
#include "CmpiArray.h"
#include <string>

namespace genProvider {

  //*********************************************************
  //Linux_SambaReadListForPrinterInstance
  //*********************************************************

  //empty constructor
  Linux_SambaReadListForPrinterInstance::
   Linux_SambaReadListForPrinterInstance(){   	
   	init();  	   	
  };
  
  
  //copy constructor	
  Linux_SambaReadListForPrinterInstance::
   Linux_SambaReadListForPrinterInstance
   (const Linux_SambaReadListForPrinterInstance& original){   	
   	init(original);  	   	
  };
  
  
  //constructor using CmpiInstance
  Linux_SambaReadListForPrinterInstance::
   Linux_SambaReadListForPrinterInstance (const CmpiInstance& inst, const char* instanceNamespace){
    CmpiData cmpiData;
    init(); 
    
    CmpiObjectPath cop=inst.getObjectPath();
    cop.setNameSpace(instanceNamespace);
    setInstanceName(Linux_SambaReadListForPrinterInstanceName(cop));
    
  }
  
  
  //Destructor
  Linux_SambaReadListForPrinterInstance::
   ~Linux_SambaReadListForPrinterInstance(){
   	reset();  	  
  };
  
  
  //copy operator
  Linux_SambaReadListForPrinterInstance&
   Linux_SambaReadListForPrinterInstance::operator=
   (const Linux_SambaReadListForPrinterInstance& original){   	
   	init(original);
   	return *this;
  };
  
  
  //converts to CmpiInstance
  CmpiInstance Linux_SambaReadListForPrinterInstance::
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
  unsigned int Linux_SambaReadListForPrinterInstance::
   isInstanceNameSet() const{
  	return isSet.instanceName;
  }
  
  const Linux_SambaReadListForPrinterInstanceName&
    Linux_SambaReadListForPrinterInstance::getInstanceName() const{

    if(!isSet.instanceName)
   	  throw CmpiErrorFormater::getErrorException(
   	   CmpiErrorFormater::NOT_SET,
   	   "InstanceName not set in Linux_SambaReadListForPrinter instance");
  		
   	return m_instanceName;
  }

  void Linux_SambaReadListForPrinterInstance::setInstanceName(
   const Linux_SambaReadListForPrinterInstanceName& val){
    m_instanceName = val;
    isSet.instanceName=1;
  }


  
  //set isSet attributes to FALSE
  void Linux_SambaReadListForPrinterInstance::init(){
   	isSet.instanceName=0;
   	  	
  };
  
  
  //copies another instance properties in this
  void Linux_SambaReadListForPrinterInstance::init
   (const Linux_SambaReadListForPrinterInstance& original){   	
   	init();
   	   	
    if(original.isInstanceNameSet()){
      setInstanceName(original.getInstanceName());
    }    
   }
  
  
  //reset the instance data
  void Linux_SambaReadListForPrinterInstance::reset(){
   	
  	  
  };
  
  
  //*********************************************************
  //Linux_SambaReadListForPrinterInstanceEnumerationElement	
  //*********************************************************
  
  Linux_SambaReadListForPrinterInstanceEnumerationElement::
   Linux_SambaReadListForPrinterInstanceEnumerationElement(){
   	
  	m_elementP=0;
  	m_nextP=0;
  	  
  };
  
  
  Linux_SambaReadListForPrinterInstanceEnumerationElement::
   ~Linux_SambaReadListForPrinterInstanceEnumerationElement(){
   	
  	if (m_elementP!=0)
  	  delete(m_elementP);
  	if (m_nextP!=0)
  	  delete(m_nextP);
  	  
  };

  
  //*********************************************************
  //Linux_SambaReadListForPrinterInstanceNameEnumeration
  //*********************************************************

  Linux_SambaReadListForPrinterInstanceEnumeration::
   Linux_SambaReadListForPrinterInstanceEnumeration(){
   	
  	 firstElementP=0;
     currentElementP=0;
     endElementP=0;
  };
  
  Linux_SambaReadListForPrinterInstanceEnumeration::
   Linux_SambaReadListForPrinterInstanceEnumeration(
   const Linux_SambaReadListForPrinterInstanceEnumeration& original){
   	
     firstElementP=0;
     currentElementP=0;
     endElementP=0;
  	 
     int size=original.getSize();
     for(int i=0;i<size;i++)
       addElement(original.getElement(i));           
  };
  
  	  
  Linux_SambaReadListForPrinterInstanceEnumeration::
   ~Linux_SambaReadListForPrinterInstanceEnumeration(){
   	
  	if (firstElementP!=0)
  	  delete(firstElementP);
  	  	
  };
  
  	  
  void Linux_SambaReadListForPrinterInstanceEnumeration::reset(){
  	
  	currentElementP=firstElementP;
  };
  
  	  
  bool Linux_SambaReadListForPrinterInstanceEnumeration::hasNext() const{
  	
  	return (currentElementP!=0);
  
  };
  
  int Linux_SambaReadListForPrinterInstanceEnumeration::getSize() const{
  	
    int size=0;
    Linux_SambaReadListForPrinterInstanceEnumerationElement* followingP=firstElementP;
  	
  	while(followingP!=0){
        followingP=followingP->m_nextP;
        size++;
    }
  	
    return size;
    
  };
  
  const Linux_SambaReadListForPrinterInstance&  
   Linux_SambaReadListForPrinterInstanceEnumeration::getElement(int pos) const{
   
    Linux_SambaReadListForPrinterInstanceEnumerationElement* followingP=firstElementP;
   
    int i=0;
    while((followingP!=0)&&(i<pos)){
        followingP=followingP->m_nextP;
        i++;
    }
    
    return *(followingP->m_elementP);
  };
  
  	  
  const Linux_SambaReadListForPrinterInstance&
   Linux_SambaReadListForPrinterInstanceEnumeration::getNext() {
   	
  	 Linux_SambaReadListForPrinterInstanceEnumerationElement* currentP=
  	  currentElementP;
  	 currentElementP=currentElementP->m_nextP;
  	 
  	 return *(currentP->m_elementP);
  };
  	  
  void Linux_SambaReadListForPrinterInstanceEnumeration::addElement
   (const Linux_SambaReadListForPrinterInstance& elementP){
   	
  	if(firstElementP==0){
  	  firstElementP=new Linux_SambaReadListForPrinterInstanceEnumerationElement();
  	  firstElementP->m_elementP=new Linux_SambaReadListForPrinterInstance(elementP);
  	  endElementP=firstElementP;
  	  currentElementP=firstElementP;
  	}else{
  	  endElementP->m_nextP=new Linux_SambaReadListForPrinterInstanceEnumerationElement();
  	  endElementP=endElementP->m_nextP;
  	  endElementP->m_elementP=new Linux_SambaReadListForPrinterInstance(elementP);
  	}
  };  
}
 
