/**
 *  Linux_SambaPrinterAdminForGlobalManualInstance.cpp
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


#include "Linux_SambaPrinterAdminForGlobalManualInstance.h"
#include "CmpiData.h"
#include "CmpiString.h"
#include "CmpiArray.h"
#include <string>

namespace genProvider {

  //*********************************************************
  //Linux_SambaPrinterAdminForGlobalManualInstance
  //*********************************************************

  //empty constructor
  Linux_SambaPrinterAdminForGlobalManualInstance::
   Linux_SambaPrinterAdminForGlobalManualInstance(){   	
   	init();  	   	
  };
  
  
  //copy constructor	
  Linux_SambaPrinterAdminForGlobalManualInstance::
   Linux_SambaPrinterAdminForGlobalManualInstance
   (const Linux_SambaPrinterAdminForGlobalManualInstance& original){   	
   	init(original);  	   	
  };
  
  
  //constructor using CmpiInstance
  Linux_SambaPrinterAdminForGlobalManualInstance::
   Linux_SambaPrinterAdminForGlobalManualInstance (const CmpiInstance& inst, const char* instanceNamespace){
    CmpiData cmpiData;
    init(); 
    
    CmpiObjectPath cop=inst.getObjectPath();
    cop.setNameSpace(instanceNamespace);
    setInstanceName(Linux_SambaPrinterAdminForGlobalInstanceName(cop));
    
  }
  
  
  //Destructor
  Linux_SambaPrinterAdminForGlobalManualInstance::
   ~Linux_SambaPrinterAdminForGlobalManualInstance(){
   	reset();  	  
  };
  
  
  //copy operator
  Linux_SambaPrinterAdminForGlobalManualInstance&
   Linux_SambaPrinterAdminForGlobalManualInstance::operator=
   (const Linux_SambaPrinterAdminForGlobalManualInstance& original){   	
   	init(original);
   	return *this;
  };
  
  
  //converts to CmpiInstance
  CmpiInstance Linux_SambaPrinterAdminForGlobalManualInstance::
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
  unsigned int Linux_SambaPrinterAdminForGlobalManualInstance::
   isInstanceNameSet() const{
  	return isSet.instanceName;
  }
  
  const Linux_SambaPrinterAdminForGlobalInstanceName&
    Linux_SambaPrinterAdminForGlobalManualInstance::getInstanceName() const{

    if(!isSet.instanceName)
   	  throw CmpiErrorFormater::getErrorException(
   	   CmpiErrorFormater::NOT_SET,
   	   "InstanceName not set in Linux_SambaPrinterAdminForGlobal instance");
  		
   	return m_instanceName;
  }

  void Linux_SambaPrinterAdminForGlobalManualInstance::setInstanceName(
   const Linux_SambaPrinterAdminForGlobalInstanceName& val){
    m_instanceName = val;
    isSet.instanceName=1;
  }


  
  //set isSet attributes to FALSE
  void Linux_SambaPrinterAdminForGlobalManualInstance::init(){
   	isSet.instanceName=0;
   	  	
  };
  
  
  //copies another instance properties in this
  void Linux_SambaPrinterAdminForGlobalManualInstance::init
   (const Linux_SambaPrinterAdminForGlobalManualInstance& original){   	
   	init();
   	   	
    if(original.isInstanceNameSet()){
      setInstanceName(original.getInstanceName());
    }    
   }
  
  
  //reset the instance data
  void Linux_SambaPrinterAdminForGlobalManualInstance::reset(){
   	
  	  
  };
  
  
  //*********************************************************
  //Linux_SambaPrinterAdminForGlobalManualInstanceEnumerationElement	
  //*********************************************************
  
  Linux_SambaPrinterAdminForGlobalManualInstanceEnumerationElement::
   Linux_SambaPrinterAdminForGlobalManualInstanceEnumerationElement(){
   	
  	m_elementP=0;
  	m_nextP=0;
  	  
  };
  
  
  Linux_SambaPrinterAdminForGlobalManualInstanceEnumerationElement::
   ~Linux_SambaPrinterAdminForGlobalManualInstanceEnumerationElement(){
   	
  	if (m_elementP!=0)
  	  delete(m_elementP);
  	if (m_nextP!=0)
  	  delete(m_nextP);
  	  
  };

  
  //*********************************************************
  //Linux_SambaPrinterAdminForGlobalManualInstanceNameEnumeration
  //*********************************************************

  Linux_SambaPrinterAdminForGlobalManualInstanceEnumeration::
   Linux_SambaPrinterAdminForGlobalManualInstanceEnumeration(){
   	
  	 firstElementP=0;
     currentElementP=0;
     endElementP=0;
  };
  
  Linux_SambaPrinterAdminForGlobalManualInstanceEnumeration::
   Linux_SambaPrinterAdminForGlobalManualInstanceEnumeration(
   const Linux_SambaPrinterAdminForGlobalManualInstanceEnumeration& original){
   	
     firstElementP=0;
     currentElementP=0;
     endElementP=0;
  	 
     int size=original.getSize();
     for(int i=0;i<size;i++)
       addElement(original.getElement(i));           
  };
  
  	  
  Linux_SambaPrinterAdminForGlobalManualInstanceEnumeration::
   ~Linux_SambaPrinterAdminForGlobalManualInstanceEnumeration(){
   	
  	if (firstElementP!=0)
  	  delete(firstElementP);
  	  	
  };
  
  	  
  void Linux_SambaPrinterAdminForGlobalManualInstanceEnumeration::reset(){
  	
  	currentElementP=firstElementP;
  };
  
  	  
  bool Linux_SambaPrinterAdminForGlobalManualInstanceEnumeration::hasNext() const{
  	
  	return (currentElementP!=0);
  
  };
  
  int Linux_SambaPrinterAdminForGlobalManualInstanceEnumeration::getSize() const{
  	
    int size=0;
    Linux_SambaPrinterAdminForGlobalManualInstanceEnumerationElement* followingP=firstElementP;
  	
  	while(followingP!=0){
        followingP=followingP->m_nextP;
        size++;
    }
  	
    return size;
    
  };
  
  const Linux_SambaPrinterAdminForGlobalManualInstance&  
   Linux_SambaPrinterAdminForGlobalManualInstanceEnumeration::getElement(int pos) const{
   
    Linux_SambaPrinterAdminForGlobalManualInstanceEnumerationElement* followingP=firstElementP;
   
    int i=0;
    while((followingP!=0)&&(i<pos)){
        followingP=followingP->m_nextP;
        i++;
    }
    
    return *(followingP->m_elementP);
  };
  
  	  
  const Linux_SambaPrinterAdminForGlobalManualInstance&
   Linux_SambaPrinterAdminForGlobalManualInstanceEnumeration::getNext() {
   	
  	 Linux_SambaPrinterAdminForGlobalManualInstanceEnumerationElement* currentP=
  	  currentElementP;
  	 currentElementP=currentElementP->m_nextP;
  	 
  	 return *(currentP->m_elementP);
  };
  	  
  void Linux_SambaPrinterAdminForGlobalManualInstanceEnumeration::addElement
   (const Linux_SambaPrinterAdminForGlobalManualInstance& elementP){
   	
  	if(firstElementP==0){
  	  firstElementP=new Linux_SambaPrinterAdminForGlobalManualInstanceEnumerationElement();
  	  firstElementP->m_elementP=new Linux_SambaPrinterAdminForGlobalManualInstance(elementP);
  	  endElementP=firstElementP;
  	  currentElementP=firstElementP;
  	}else{
  	  endElementP->m_nextP=new Linux_SambaPrinterAdminForGlobalManualInstanceEnumerationElement();
  	  endElementP=endElementP->m_nextP;
  	  endElementP->m_elementP=new Linux_SambaPrinterAdminForGlobalManualInstance(elementP);
  	}
  };  
}
 
