/**
 *  Linux_SambaPrinterForServiceRepositoryInstance.cpp
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


#include "Linux_SambaPrinterForServiceRepositoryInstance.h"
#include "CmpiData.h"
#include "CmpiString.h"
#include "CmpiArray.h"
#include <string>

namespace genProvider {

  //*********************************************************
  //Linux_SambaPrinterForServiceRepositoryInstance
  //*********************************************************

  //empty constructor
  Linux_SambaPrinterForServiceRepositoryInstance::
   Linux_SambaPrinterForServiceRepositoryInstance(){   	
   	init();  	   	
  };
  
  
  //copy constructor	
  Linux_SambaPrinterForServiceRepositoryInstance::
   Linux_SambaPrinterForServiceRepositoryInstance
   (const Linux_SambaPrinterForServiceRepositoryInstance& original){   	
   	init(original);  	   	
  };
  
  
  //constructor using CmpiInstance
  Linux_SambaPrinterForServiceRepositoryInstance::
   Linux_SambaPrinterForServiceRepositoryInstance (const CmpiInstance& inst, const char* instanceNamespace){
    CmpiData cmpiData;
    init(); 
    
    CmpiObjectPath cop=inst.getObjectPath();
    cop.setNameSpace(instanceNamespace);
    setInstanceName(Linux_SambaPrinterForServiceInstanceName(cop));
    
  }
  
  
  //Destructor
  Linux_SambaPrinterForServiceRepositoryInstance::
   ~Linux_SambaPrinterForServiceRepositoryInstance(){
   	reset();  	  
  };
  
  
  //copy operator
  Linux_SambaPrinterForServiceRepositoryInstance&
   Linux_SambaPrinterForServiceRepositoryInstance::operator=
   (const Linux_SambaPrinterForServiceRepositoryInstance& original){   	
   	init(original);
   	return *this;
  };
  
  
  //converts to CmpiInstance
  CmpiInstance Linux_SambaPrinterForServiceRepositoryInstance::
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
  unsigned int Linux_SambaPrinterForServiceRepositoryInstance::
   isInstanceNameSet() const{
  	return isSet.instanceName;
  }
  
  const Linux_SambaPrinterForServiceInstanceName&
    Linux_SambaPrinterForServiceRepositoryInstance::getInstanceName() const{

    if(!isSet.instanceName)
   	  throw CmpiErrorFormater::getErrorException(
   	   CmpiErrorFormater::NOT_SET,
   	   "InstanceName not set in Linux_SambaPrinterForService instance");
  		
   	return m_instanceName;
  }

  void Linux_SambaPrinterForServiceRepositoryInstance::setInstanceName(
   const Linux_SambaPrinterForServiceInstanceName& val){
    m_instanceName = val;
    isSet.instanceName=1;
  }


  
  //set isSet attributes to FALSE
  void Linux_SambaPrinterForServiceRepositoryInstance::init(){
   	isSet.instanceName=0;
   	  	
  };
  
  
  //copies another instance properties in this
  void Linux_SambaPrinterForServiceRepositoryInstance::init
   (const Linux_SambaPrinterForServiceRepositoryInstance& original){   	
   	init();
   	   	
    if(original.isInstanceNameSet()){
      setInstanceName(original.getInstanceName());
    }    
   }
  
  
  //reset the instance data
  void Linux_SambaPrinterForServiceRepositoryInstance::reset(){
   	
  	  
  };
  
  
  //*********************************************************
  //Linux_SambaPrinterForServiceRepositoryInstanceEnumerationElement	
  //*********************************************************
  
  Linux_SambaPrinterForServiceRepositoryInstanceEnumerationElement::
   Linux_SambaPrinterForServiceRepositoryInstanceEnumerationElement(){
   	
  	m_elementP=0;
  	m_nextP=0;
  	  
  };
  
  
  Linux_SambaPrinterForServiceRepositoryInstanceEnumerationElement::
   ~Linux_SambaPrinterForServiceRepositoryInstanceEnumerationElement(){
   	
  	if (m_elementP!=0)
  	  delete(m_elementP);
  	if (m_nextP!=0)
  	  delete(m_nextP);
  	  
  };

  
  //*********************************************************
  //Linux_SambaPrinterForServiceRepositoryInstanceNameEnumeration
  //*********************************************************

  Linux_SambaPrinterForServiceRepositoryInstanceEnumeration::
   Linux_SambaPrinterForServiceRepositoryInstanceEnumeration(){
   	
  	 firstElementP=0;
     currentElementP=0;
     endElementP=0;
  };
  
  Linux_SambaPrinterForServiceRepositoryInstanceEnumeration::
   Linux_SambaPrinterForServiceRepositoryInstanceEnumeration(
   const Linux_SambaPrinterForServiceRepositoryInstanceEnumeration& original){
   	
     firstElementP=0;
     currentElementP=0;
     endElementP=0;
  	 
     int size=original.getSize();
     for(int i=0;i<size;i++)
       addElement(original.getElement(i));           
  };
  
  	  
  Linux_SambaPrinterForServiceRepositoryInstanceEnumeration::
   ~Linux_SambaPrinterForServiceRepositoryInstanceEnumeration(){
   	
  	if (firstElementP!=0)
  	  delete(firstElementP);
  	  	
  };
  
  	  
  void Linux_SambaPrinterForServiceRepositoryInstanceEnumeration::reset(){
  	
  	currentElementP=firstElementP;
  };
  
  	  
  bool Linux_SambaPrinterForServiceRepositoryInstanceEnumeration::hasNext() const{
  	
  	return (currentElementP!=0);
  
  };
  
  int Linux_SambaPrinterForServiceRepositoryInstanceEnumeration::getSize() const{
  	
    int size=0;
    Linux_SambaPrinterForServiceRepositoryInstanceEnumerationElement* followingP=firstElementP;
  	
  	while(followingP!=0){
        followingP=followingP->m_nextP;
        size++;
    }
  	
    return size;
    
  };
  
  const Linux_SambaPrinterForServiceRepositoryInstance&  
   Linux_SambaPrinterForServiceRepositoryInstanceEnumeration::getElement(int pos) const{
   
    Linux_SambaPrinterForServiceRepositoryInstanceEnumerationElement* followingP=firstElementP;
   
    int i=0;
    while((followingP!=0)&&(i<pos)){
        followingP=followingP->m_nextP;
        i++;
    }
    
    return *(followingP->m_elementP);
  };
  
  	  
  const Linux_SambaPrinterForServiceRepositoryInstance&
   Linux_SambaPrinterForServiceRepositoryInstanceEnumeration::getNext() {
   	
  	 Linux_SambaPrinterForServiceRepositoryInstanceEnumerationElement* currentP=
  	  currentElementP;
  	 currentElementP=currentElementP->m_nextP;
  	 
  	 return *(currentP->m_elementP);
  };
  	  
  void Linux_SambaPrinterForServiceRepositoryInstanceEnumeration::addElement
   (const Linux_SambaPrinterForServiceRepositoryInstance& elementP){
   	
  	if(firstElementP==0){
  	  firstElementP=new Linux_SambaPrinterForServiceRepositoryInstanceEnumerationElement();
  	  firstElementP->m_elementP=new Linux_SambaPrinterForServiceRepositoryInstance(elementP);
  	  endElementP=firstElementP;
  	  currentElementP=firstElementP;
  	}else{
  	  endElementP->m_nextP=new Linux_SambaPrinterForServiceRepositoryInstanceEnumerationElement();
  	  endElementP=endElementP->m_nextP;
  	  endElementP->m_elementP=new Linux_SambaPrinterForServiceRepositoryInstance(elementP);
  	}
  };  
}
 
