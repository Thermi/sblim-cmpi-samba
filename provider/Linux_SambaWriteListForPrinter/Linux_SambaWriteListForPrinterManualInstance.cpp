/**
 *  Linux_SambaWriteListForPrinterManualInstance.cpp
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


#include "Linux_SambaWriteListForPrinterManualInstance.h"
#include "CmpiData.h"
#include "CmpiString.h"
#include "CmpiArray.h"
#include <string>

namespace genProvider {

  //*********************************************************
  //Linux_SambaWriteListForPrinterManualInstance
  //*********************************************************

  //empty constructor
  Linux_SambaWriteListForPrinterManualInstance::
   Linux_SambaWriteListForPrinterManualInstance(){   	
   	init();  	   	
  };
  
  
  //copy constructor	
  Linux_SambaWriteListForPrinterManualInstance::
   Linux_SambaWriteListForPrinterManualInstance
   (const Linux_SambaWriteListForPrinterManualInstance& original){   	
   	init(original);  	   	
  };
  
  
  //constructor using CmpiInstance
  Linux_SambaWriteListForPrinterManualInstance::
   Linux_SambaWriteListForPrinterManualInstance (const CmpiInstance& inst, const char* instanceNamespace){
    CmpiData cmpiData;
    init(); 
    
    CmpiObjectPath cop=inst.getObjectPath();
    cop.setNameSpace(instanceNamespace);
    setInstanceName(Linux_SambaWriteListForPrinterInstanceName(cop));
    
  }
  
  
  //Destructor
  Linux_SambaWriteListForPrinterManualInstance::
   ~Linux_SambaWriteListForPrinterManualInstance(){
   	reset();  	  
  };
  
  
  //copy operator
  Linux_SambaWriteListForPrinterManualInstance&
   Linux_SambaWriteListForPrinterManualInstance::operator=
   (const Linux_SambaWriteListForPrinterManualInstance& original){   	
   	init(original);
   	return *this;
  };
  
  
  //converts to CmpiInstance
  CmpiInstance Linux_SambaWriteListForPrinterManualInstance::
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
  unsigned int Linux_SambaWriteListForPrinterManualInstance::
   isInstanceNameSet() const{
  	return isSet.instanceName;
  }
  
  const Linux_SambaWriteListForPrinterInstanceName&
    Linux_SambaWriteListForPrinterManualInstance::getInstanceName() const{

    if(!isSet.instanceName)
   	  throw CmpiErrorFormater::getErrorException(
   	   CmpiErrorFormater::NOT_SET,
   	   "InstanceName not set in Linux_SambaWriteListForPrinter instance");
  		
   	return m_instanceName;
  }

  void Linux_SambaWriteListForPrinterManualInstance::setInstanceName(
   const Linux_SambaWriteListForPrinterInstanceName& val){
    m_instanceName = val;
    isSet.instanceName=1;
  }


  
  //set isSet attributes to FALSE
  void Linux_SambaWriteListForPrinterManualInstance::init(){
   	isSet.instanceName=0;
   	  	
  };
  
  
  //copies another instance properties in this
  void Linux_SambaWriteListForPrinterManualInstance::init
   (const Linux_SambaWriteListForPrinterManualInstance& original){   	
   	init();
   	   	
    if(original.isInstanceNameSet()){
      setInstanceName(original.getInstanceName());
    }    
   }
  
  
  //reset the instance data
  void Linux_SambaWriteListForPrinterManualInstance::reset(){
   	
  	  
  };
  
  
  //*********************************************************
  //Linux_SambaWriteListForPrinterManualInstanceEnumerationElement	
  //*********************************************************
  
  Linux_SambaWriteListForPrinterManualInstanceEnumerationElement::
   Linux_SambaWriteListForPrinterManualInstanceEnumerationElement(){
   	
  	m_elementP=0;
  	m_nextP=0;
  	  
  };
  
  
  Linux_SambaWriteListForPrinterManualInstanceEnumerationElement::
   ~Linux_SambaWriteListForPrinterManualInstanceEnumerationElement(){
   	
  	if (m_elementP!=0)
  	  delete(m_elementP);
  	if (m_nextP!=0)
  	  delete(m_nextP);
  	  
  };

  
  //*********************************************************
  //Linux_SambaWriteListForPrinterManualInstanceNameEnumeration
  //*********************************************************

  Linux_SambaWriteListForPrinterManualInstanceEnumeration::
   Linux_SambaWriteListForPrinterManualInstanceEnumeration(){
   	
  	 firstElementP=0;
     currentElementP=0;
     endElementP=0;
  };
  
  Linux_SambaWriteListForPrinterManualInstanceEnumeration::
   Linux_SambaWriteListForPrinterManualInstanceEnumeration(
   const Linux_SambaWriteListForPrinterManualInstanceEnumeration& original){
   	
     firstElementP=0;
     currentElementP=0;
     endElementP=0;
  	 
     int size=original.getSize();
     for(int i=0;i<size;i++)
       addElement(original.getElement(i));           
  };
  
  	  
  Linux_SambaWriteListForPrinterManualInstanceEnumeration::
   ~Linux_SambaWriteListForPrinterManualInstanceEnumeration(){
   	
  	if (firstElementP!=0)
  	  delete(firstElementP);
  	  	
  };
  
  	  
  void Linux_SambaWriteListForPrinterManualInstanceEnumeration::reset(){
  	
  	currentElementP=firstElementP;
  };
  
  	  
  bool Linux_SambaWriteListForPrinterManualInstanceEnumeration::hasNext() const{
  	
  	return (currentElementP!=0);
  
  };
  
  int Linux_SambaWriteListForPrinterManualInstanceEnumeration::getSize() const{
  	
    int size=0;
    Linux_SambaWriteListForPrinterManualInstanceEnumerationElement* followingP=firstElementP;
  	
  	while(followingP!=0){
        followingP=followingP->m_nextP;
        size++;
    }
  	
    return size;
    
  };
  
  const Linux_SambaWriteListForPrinterManualInstance&  
   Linux_SambaWriteListForPrinterManualInstanceEnumeration::getElement(int pos) const{
   
    Linux_SambaWriteListForPrinterManualInstanceEnumerationElement* followingP=firstElementP;
   
    int i=0;
    while((followingP!=0)&&(i<pos)){
        followingP=followingP->m_nextP;
        i++;
    }
    
    return *(followingP->m_elementP);
  };
  
  	  
  const Linux_SambaWriteListForPrinterManualInstance&
   Linux_SambaWriteListForPrinterManualInstanceEnumeration::getNext() {
   	
  	 Linux_SambaWriteListForPrinterManualInstanceEnumerationElement* currentP=
  	  currentElementP;
  	 currentElementP=currentElementP->m_nextP;
  	 
  	 return *(currentP->m_elementP);
  };
  	  
  void Linux_SambaWriteListForPrinterManualInstanceEnumeration::addElement
   (const Linux_SambaWriteListForPrinterManualInstance& elementP){
   	
  	if(firstElementP==0){
  	  firstElementP=new Linux_SambaWriteListForPrinterManualInstanceEnumerationElement();
  	  firstElementP->m_elementP=new Linux_SambaWriteListForPrinterManualInstance(elementP);
  	  endElementP=firstElementP;
  	  currentElementP=firstElementP;
  	}else{
  	  endElementP->m_nextP=new Linux_SambaWriteListForPrinterManualInstanceEnumerationElement();
  	  endElementP=endElementP->m_nextP;
  	  endElementP->m_elementP=new Linux_SambaWriteListForPrinterManualInstance(elementP);
  	}
  };  
}
 
