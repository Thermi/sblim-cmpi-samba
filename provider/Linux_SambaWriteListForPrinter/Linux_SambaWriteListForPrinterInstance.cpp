/**
 *  Linux_SambaWriteListForPrinterInstance.cpp
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


#include "Linux_SambaWriteListForPrinterInstance.h"
#include "CmpiData.h"
#include "CmpiString.h"
#include "CmpiArray.h"
#include <string>

namespace genProvider {

  //*********************************************************
  //Linux_SambaWriteListForPrinterInstance
  //*********************************************************

  //empty constructor
  Linux_SambaWriteListForPrinterInstance::
   Linux_SambaWriteListForPrinterInstance(){   	
   	init();  	   	
  };
  
  
  //copy constructor	
  Linux_SambaWriteListForPrinterInstance::
   Linux_SambaWriteListForPrinterInstance
   (const Linux_SambaWriteListForPrinterInstance& original){   	
   	init(original);  	   	
  };
  
  
  //constructor using CmpiInstance
  Linux_SambaWriteListForPrinterInstance::
   Linux_SambaWriteListForPrinterInstance (const CmpiInstance& inst, const char* instanceNamespace){
    CmpiData cmpiData;
    init(); 
    
    CmpiObjectPath cop=inst.getObjectPath();
    cop.setNameSpace(instanceNamespace);
    setInstanceName(Linux_SambaWriteListForPrinterInstanceName(cop));
    
  }
  
  
  //Destructor
  Linux_SambaWriteListForPrinterInstance::
   ~Linux_SambaWriteListForPrinterInstance(){
   	reset();  	  
  };
  
  
  //copy operator
  Linux_SambaWriteListForPrinterInstance&
   Linux_SambaWriteListForPrinterInstance::operator=
   (const Linux_SambaWriteListForPrinterInstance& original){   	
   	init(original);
   	return *this;
  };
  
  
  //converts to CmpiInstance
  CmpiInstance Linux_SambaWriteListForPrinterInstance::
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
  unsigned int Linux_SambaWriteListForPrinterInstance::
   isInstanceNameSet() const{
  	return isSet.instanceName;
  }
  
  const Linux_SambaWriteListForPrinterInstanceName&
    Linux_SambaWriteListForPrinterInstance::getInstanceName() const{

    if(!isSet.instanceName)
   	  throw CmpiErrorFormater::getErrorException(
   	   CmpiErrorFormater::NOT_SET,
   	   "InstanceName not set in Linux_SambaWriteListForPrinter instance");
  		
   	return m_instanceName;
  }

  void Linux_SambaWriteListForPrinterInstance::setInstanceName(
   const Linux_SambaWriteListForPrinterInstanceName& val){
    m_instanceName = val;
    isSet.instanceName=1;
  }


  
  //set isSet attributes to FALSE
  void Linux_SambaWriteListForPrinterInstance::init(){
   	isSet.instanceName=0;
   	  	
  };
  
  
  //copies another instance properties in this
  void Linux_SambaWriteListForPrinterInstance::init
   (const Linux_SambaWriteListForPrinterInstance& original){   	
   	init();
   	   	
    if(original.isInstanceNameSet()){
      setInstanceName(original.getInstanceName());
    }    
   }
  
  
  //reset the instance data
  void Linux_SambaWriteListForPrinterInstance::reset(){
   	
  	  
  };
  
  
  //*********************************************************
  //Linux_SambaWriteListForPrinterInstanceEnumerationElement	
  //*********************************************************
  
  Linux_SambaWriteListForPrinterInstanceEnumerationElement::
   Linux_SambaWriteListForPrinterInstanceEnumerationElement(){
   	
  	m_elementP=0;
  	m_nextP=0;
  	  
  };
  
  
  Linux_SambaWriteListForPrinterInstanceEnumerationElement::
   ~Linux_SambaWriteListForPrinterInstanceEnumerationElement(){
   	
  	if (m_elementP!=0)
  	  delete(m_elementP);
  	if (m_nextP!=0)
  	  delete(m_nextP);
  	  
  };

  
  //*********************************************************
  //Linux_SambaWriteListForPrinterInstanceNameEnumeration
  //*********************************************************

  Linux_SambaWriteListForPrinterInstanceEnumeration::
   Linux_SambaWriteListForPrinterInstanceEnumeration(){
   	
  	 firstElementP=0;
     currentElementP=0;
     endElementP=0;
  };
  
  Linux_SambaWriteListForPrinterInstanceEnumeration::
   Linux_SambaWriteListForPrinterInstanceEnumeration(
   const Linux_SambaWriteListForPrinterInstanceEnumeration& original){
   	
     firstElementP=0;
     currentElementP=0;
     endElementP=0;
  	 
     int size=original.getSize();
     for(int i=0;i<size;i++)
       addElement(original.getElement(i));           
  };
  
  	  
  Linux_SambaWriteListForPrinterInstanceEnumeration::
   ~Linux_SambaWriteListForPrinterInstanceEnumeration(){
   	
  	if (firstElementP!=0)
  	  delete(firstElementP);
  	  	
  };
  
  	  
  void Linux_SambaWriteListForPrinterInstanceEnumeration::reset(){
  	
  	currentElementP=firstElementP;
  };
  
  	  
  bool Linux_SambaWriteListForPrinterInstanceEnumeration::hasNext() const{
  	
  	return (currentElementP!=0);
  
  };
  
  int Linux_SambaWriteListForPrinterInstanceEnumeration::getSize() const{
  	
    int size=0;
    Linux_SambaWriteListForPrinterInstanceEnumerationElement* followingP=firstElementP;
  	
  	while(followingP!=0){
        followingP=followingP->m_nextP;
        size++;
    }
  	
    return size;
    
  };
  
  const Linux_SambaWriteListForPrinterInstance&  
   Linux_SambaWriteListForPrinterInstanceEnumeration::getElement(int pos) const{
   
    Linux_SambaWriteListForPrinterInstanceEnumerationElement* followingP=firstElementP;
   
    int i=0;
    while((followingP!=0)&&(i<pos)){
        followingP=followingP->m_nextP;
        i++;
    }
    
    return *(followingP->m_elementP);
  };
  
  	  
  const Linux_SambaWriteListForPrinterInstance&
   Linux_SambaWriteListForPrinterInstanceEnumeration::getNext() {
   	
  	 Linux_SambaWriteListForPrinterInstanceEnumerationElement* currentP=
  	  currentElementP;
  	 currentElementP=currentElementP->m_nextP;
  	 
  	 return *(currentP->m_elementP);
  };
  	  
  void Linux_SambaWriteListForPrinterInstanceEnumeration::addElement
   (const Linux_SambaWriteListForPrinterInstance& elementP){
   	
  	if(firstElementP==0){
  	  firstElementP=new Linux_SambaWriteListForPrinterInstanceEnumerationElement();
  	  firstElementP->m_elementP=new Linux_SambaWriteListForPrinterInstance(elementP);
  	  endElementP=firstElementP;
  	  currentElementP=firstElementP;
  	}else{
  	  endElementP->m_nextP=new Linux_SambaWriteListForPrinterInstanceEnumerationElement();
  	  endElementP=endElementP->m_nextP;
  	  endElementP->m_elementP=new Linux_SambaWriteListForPrinterInstance(elementP);
  	}
  };  
}
 
