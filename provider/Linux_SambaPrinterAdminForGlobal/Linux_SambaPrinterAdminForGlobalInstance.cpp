/**
 *  Linux_SambaPrinterAdminForGlobalInstance.cpp
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


#include "Linux_SambaPrinterAdminForGlobalInstance.h"
#include "CmpiData.h"
#include "CmpiString.h"
#include "CmpiArray.h"
#include <string>

namespace genProvider {

  //*********************************************************
  //Linux_SambaPrinterAdminForGlobalInstance
  //*********************************************************

  //empty constructor
  Linux_SambaPrinterAdminForGlobalInstance::
   Linux_SambaPrinterAdminForGlobalInstance(){   	
   	init();  	   	
  };
  
  
  //copy constructor	
  Linux_SambaPrinterAdminForGlobalInstance::
   Linux_SambaPrinterAdminForGlobalInstance
   (const Linux_SambaPrinterAdminForGlobalInstance& original){   	
   	init(original);  	   	
  };
  
  
  //constructor using CmpiInstance
  Linux_SambaPrinterAdminForGlobalInstance::
   Linux_SambaPrinterAdminForGlobalInstance (const CmpiInstance& inst, const char* instanceNamespace){
    CmpiData cmpiData;
    init(); 
    
    CmpiObjectPath cop=inst.getObjectPath();
    cop.setNameSpace(instanceNamespace);
    setInstanceName(Linux_SambaPrinterAdminForGlobalInstanceName(cop));
    
  }
  
  
  //Destructor
  Linux_SambaPrinterAdminForGlobalInstance::
   ~Linux_SambaPrinterAdminForGlobalInstance(){
   	reset();  	  
  };
  
  
  //copy operator
  Linux_SambaPrinterAdminForGlobalInstance&
   Linux_SambaPrinterAdminForGlobalInstance::operator=
   (const Linux_SambaPrinterAdminForGlobalInstance& original){   	
   	init(original);
   	return *this;
  };
  
  
  //converts to CmpiInstance
  CmpiInstance Linux_SambaPrinterAdminForGlobalInstance::
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
  unsigned int Linux_SambaPrinterAdminForGlobalInstance::
   isInstanceNameSet() const{
  	return isSet.instanceName;
  }
  
  const Linux_SambaPrinterAdminForGlobalInstanceName&
    Linux_SambaPrinterAdminForGlobalInstance::getInstanceName() const{

    if(!isSet.instanceName)
   	  throw CmpiErrorFormater::getErrorException(
   	   CmpiErrorFormater::NOT_SET,
   	   "InstanceName not set in Linux_SambaPrinterAdminForGlobal instance");
  		
   	return m_instanceName;
  }

  void Linux_SambaPrinterAdminForGlobalInstance::setInstanceName(
   const Linux_SambaPrinterAdminForGlobalInstanceName& val){
    m_instanceName = val;
    isSet.instanceName=1;
  }


  
  //set isSet attributes to FALSE
  void Linux_SambaPrinterAdminForGlobalInstance::init(){
   	isSet.instanceName=0;
   	  	
  };
  
  
  //copies another instance properties in this
  void Linux_SambaPrinterAdminForGlobalInstance::init
   (const Linux_SambaPrinterAdminForGlobalInstance& original){   	
   	init();
   	   	
    if(original.isInstanceNameSet()){
      setInstanceName(original.getInstanceName());
    }    
   }
  
  
  //reset the instance data
  void Linux_SambaPrinterAdminForGlobalInstance::reset(){
   	
  	  
  };
  
  
  //*********************************************************
  //Linux_SambaPrinterAdminForGlobalInstanceEnumerationElement	
  //*********************************************************
  
  Linux_SambaPrinterAdminForGlobalInstanceEnumerationElement::
   Linux_SambaPrinterAdminForGlobalInstanceEnumerationElement(){
   	
  	m_elementP=0;
  	m_nextP=0;
  	  
  };
  
  
  Linux_SambaPrinterAdminForGlobalInstanceEnumerationElement::
   ~Linux_SambaPrinterAdminForGlobalInstanceEnumerationElement(){
   	
  	if (m_elementP!=0)
  	  delete(m_elementP);
  	if (m_nextP!=0)
  	  delete(m_nextP);
  	  
  };

  
  //*********************************************************
  //Linux_SambaPrinterAdminForGlobalInstanceNameEnumeration
  //*********************************************************

  Linux_SambaPrinterAdminForGlobalInstanceEnumeration::
   Linux_SambaPrinterAdminForGlobalInstanceEnumeration(){
   	
  	 firstElementP=0;
     currentElementP=0;
     endElementP=0;
  };
  
  Linux_SambaPrinterAdminForGlobalInstanceEnumeration::
   Linux_SambaPrinterAdminForGlobalInstanceEnumeration(
   const Linux_SambaPrinterAdminForGlobalInstanceEnumeration& original){
   	
     firstElementP=0;
     currentElementP=0;
     endElementP=0;
  	 
     int size=original.getSize();
     for(int i=0;i<size;i++)
       addElement(original.getElement(i));           
  };
  
  	  
  Linux_SambaPrinterAdminForGlobalInstanceEnumeration::
   ~Linux_SambaPrinterAdminForGlobalInstanceEnumeration(){
   	
  	if (firstElementP!=0)
  	  delete(firstElementP);
  	  	
  };
  
  	  
  void Linux_SambaPrinterAdminForGlobalInstanceEnumeration::reset(){
  	
  	currentElementP=firstElementP;
  };
  
  	  
  bool Linux_SambaPrinterAdminForGlobalInstanceEnumeration::hasNext() const{
  	
  	return (currentElementP!=0);
  
  };
  
  int Linux_SambaPrinterAdminForGlobalInstanceEnumeration::getSize() const{
  	
    int size=0;
    Linux_SambaPrinterAdminForGlobalInstanceEnumerationElement* followingP=firstElementP;
  	
  	while(followingP!=0){
        followingP=followingP->m_nextP;
        size++;
    }
  	
    return size;
    
  };
  
  const Linux_SambaPrinterAdminForGlobalInstance&  
   Linux_SambaPrinterAdminForGlobalInstanceEnumeration::getElement(int pos) const{
   
    Linux_SambaPrinterAdminForGlobalInstanceEnumerationElement* followingP=firstElementP;
   
    int i=0;
    while((followingP!=0)&&(i<pos)){
        followingP=followingP->m_nextP;
        i++;
    }
    
    return *(followingP->m_elementP);
  };
  
  	  
  const Linux_SambaPrinterAdminForGlobalInstance&
   Linux_SambaPrinterAdminForGlobalInstanceEnumeration::getNext() {
   	
  	 Linux_SambaPrinterAdminForGlobalInstanceEnumerationElement* currentP=
  	  currentElementP;
  	 currentElementP=currentElementP->m_nextP;
  	 
  	 return *(currentP->m_elementP);
  };
  	  
  void Linux_SambaPrinterAdminForGlobalInstanceEnumeration::addElement
   (const Linux_SambaPrinterAdminForGlobalInstance& elementP){
   	
  	if(firstElementP==0){
  	  firstElementP=new Linux_SambaPrinterAdminForGlobalInstanceEnumerationElement();
  	  firstElementP->m_elementP=new Linux_SambaPrinterAdminForGlobalInstance(elementP);
  	  endElementP=firstElementP;
  	  currentElementP=firstElementP;
  	}else{
  	  endElementP->m_nextP=new Linux_SambaPrinterAdminForGlobalInstanceEnumerationElement();
  	  endElementP=endElementP->m_nextP;
  	  endElementP->m_elementP=new Linux_SambaPrinterAdminForGlobalInstance(elementP);
  	}
  };  
}
 
