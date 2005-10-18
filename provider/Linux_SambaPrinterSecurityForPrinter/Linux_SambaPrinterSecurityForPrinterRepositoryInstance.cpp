/**
 *  Linux_SambaPrinterSecurityForPrinterRepositoryInstance.cpp
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


#include "Linux_SambaPrinterSecurityForPrinterRepositoryInstance.h"
#include "CmpiData.h"
#include "CmpiString.h"
#include "CmpiArray.h"
#include <string>

namespace genProvider {

  //*********************************************************
  //Linux_SambaPrinterSecurityForPrinterRepositoryInstance
  //*********************************************************

  //empty constructor
  Linux_SambaPrinterSecurityForPrinterRepositoryInstance::
   Linux_SambaPrinterSecurityForPrinterRepositoryInstance(){   	
   	init();  	   	
  };
  
  
  //copy constructor	
  Linux_SambaPrinterSecurityForPrinterRepositoryInstance::
   Linux_SambaPrinterSecurityForPrinterRepositoryInstance
   (const Linux_SambaPrinterSecurityForPrinterRepositoryInstance& original){   	
   	init(original);  	   	
  };
  
  
  //constructor using CmpiInstance
  Linux_SambaPrinterSecurityForPrinterRepositoryInstance::
   Linux_SambaPrinterSecurityForPrinterRepositoryInstance (const CmpiInstance& inst, const char* instanceNamespace){
    CmpiData cmpiData;
    init(); 
    
    CmpiObjectPath cop=inst.getObjectPath();
    cop.setNameSpace(instanceNamespace);
    setInstanceName(Linux_SambaPrinterSecurityForPrinterInstanceName(cop));
    
  }
  
  
  //Destructor
  Linux_SambaPrinterSecurityForPrinterRepositoryInstance::
   ~Linux_SambaPrinterSecurityForPrinterRepositoryInstance(){
   	reset();  	  
  };
  
  
  //copy operator
  Linux_SambaPrinterSecurityForPrinterRepositoryInstance&
   Linux_SambaPrinterSecurityForPrinterRepositoryInstance::operator=
   (const Linux_SambaPrinterSecurityForPrinterRepositoryInstance& original){   	
   	init(original);
   	return *this;
  };
  
  
  //converts to CmpiInstance
  CmpiInstance Linux_SambaPrinterSecurityForPrinterRepositoryInstance::
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
  unsigned int Linux_SambaPrinterSecurityForPrinterRepositoryInstance::
   isInstanceNameSet() const{
  	return isSet.instanceName;
  }
  
  const Linux_SambaPrinterSecurityForPrinterInstanceName&
    Linux_SambaPrinterSecurityForPrinterRepositoryInstance::getInstanceName() const{

    if(!isSet.instanceName)
   	  throw CmpiErrorFormater::getErrorException(
   	   CmpiErrorFormater::NOT_SET,
   	   "InstanceName not set in Linux_SambaPrinterSecurityForPrinter instance");
  		
   	return m_instanceName;
  }

  void Linux_SambaPrinterSecurityForPrinterRepositoryInstance::setInstanceName(
   const Linux_SambaPrinterSecurityForPrinterInstanceName& val){
    m_instanceName = val;
    isSet.instanceName=1;
  }


  
  //set isSet attributes to FALSE
  void Linux_SambaPrinterSecurityForPrinterRepositoryInstance::init(){
   	isSet.instanceName=0;
   	  	
  };
  
  
  //copies another instance properties in this
  void Linux_SambaPrinterSecurityForPrinterRepositoryInstance::init
   (const Linux_SambaPrinterSecurityForPrinterRepositoryInstance& original){   	
   	init();
   	   	
    if(original.isInstanceNameSet()){
      setInstanceName(original.getInstanceName());
    }    
   }
  
  
  //reset the instance data
  void Linux_SambaPrinterSecurityForPrinterRepositoryInstance::reset(){
   	
  	  
  };
  
  
  //*********************************************************
  //Linux_SambaPrinterSecurityForPrinterRepositoryInstanceEnumerationElement	
  //*********************************************************
  
  Linux_SambaPrinterSecurityForPrinterRepositoryInstanceEnumerationElement::
   Linux_SambaPrinterSecurityForPrinterRepositoryInstanceEnumerationElement(){
   	
  	m_elementP=0;
  	m_nextP=0;
  	  
  };
  
  
  Linux_SambaPrinterSecurityForPrinterRepositoryInstanceEnumerationElement::
   ~Linux_SambaPrinterSecurityForPrinterRepositoryInstanceEnumerationElement(){
   	
  	if (m_elementP!=0)
  	  delete(m_elementP);
  	if (m_nextP!=0)
  	  delete(m_nextP);
  	  
  };

  
  //*********************************************************
  //Linux_SambaPrinterSecurityForPrinterRepositoryInstanceNameEnumeration
  //*********************************************************

  Linux_SambaPrinterSecurityForPrinterRepositoryInstanceEnumeration::
   Linux_SambaPrinterSecurityForPrinterRepositoryInstanceEnumeration(){
   	
  	 firstElementP=0;
     currentElementP=0;
     endElementP=0;
  };
  
  Linux_SambaPrinterSecurityForPrinterRepositoryInstanceEnumeration::
   Linux_SambaPrinterSecurityForPrinterRepositoryInstanceEnumeration(
   const Linux_SambaPrinterSecurityForPrinterRepositoryInstanceEnumeration& original){
   	
     firstElementP=0;
     currentElementP=0;
     endElementP=0;
  	 
     int size=original.getSize();
     for(int i=0;i<size;i++)
       addElement(original.getElement(i));           
  };
  
  	  
  Linux_SambaPrinterSecurityForPrinterRepositoryInstanceEnumeration::
   ~Linux_SambaPrinterSecurityForPrinterRepositoryInstanceEnumeration(){
   	
  	if (firstElementP!=0)
  	  delete(firstElementP);
  	  	
  };
  
  	  
  void Linux_SambaPrinterSecurityForPrinterRepositoryInstanceEnumeration::reset(){
  	
  	currentElementP=firstElementP;
  };
  
  	  
  bool Linux_SambaPrinterSecurityForPrinterRepositoryInstanceEnumeration::hasNext() const{
  	
  	return (currentElementP!=0);
  
  };
  
  int Linux_SambaPrinterSecurityForPrinterRepositoryInstanceEnumeration::getSize() const{
  	
    int size=0;
    Linux_SambaPrinterSecurityForPrinterRepositoryInstanceEnumerationElement* followingP=firstElementP;
  	
  	while(followingP!=0){
        followingP=followingP->m_nextP;
        size++;
    }
  	
    return size;
    
  };
  
  const Linux_SambaPrinterSecurityForPrinterRepositoryInstance&  
   Linux_SambaPrinterSecurityForPrinterRepositoryInstanceEnumeration::getElement(int pos) const{
   
    Linux_SambaPrinterSecurityForPrinterRepositoryInstanceEnumerationElement* followingP=firstElementP;
   
    int i=0;
    while((followingP!=0)&&(i<pos)){
        followingP=followingP->m_nextP;
        i++;
    }
    
    return *(followingP->m_elementP);
  };
  
  	  
  const Linux_SambaPrinterSecurityForPrinterRepositoryInstance&
   Linux_SambaPrinterSecurityForPrinterRepositoryInstanceEnumeration::getNext() {
   	
  	 Linux_SambaPrinterSecurityForPrinterRepositoryInstanceEnumerationElement* currentP=
  	  currentElementP;
  	 currentElementP=currentElementP->m_nextP;
  	 
  	 return *(currentP->m_elementP);
  };
  	  
  void Linux_SambaPrinterSecurityForPrinterRepositoryInstanceEnumeration::addElement
   (const Linux_SambaPrinterSecurityForPrinterRepositoryInstance& elementP){
   	
  	if(firstElementP==0){
  	  firstElementP=new Linux_SambaPrinterSecurityForPrinterRepositoryInstanceEnumerationElement();
  	  firstElementP->m_elementP=new Linux_SambaPrinterSecurityForPrinterRepositoryInstance(elementP);
  	  endElementP=firstElementP;
  	  currentElementP=firstElementP;
  	}else{
  	  endElementP->m_nextP=new Linux_SambaPrinterSecurityForPrinterRepositoryInstanceEnumerationElement();
  	  endElementP=endElementP->m_nextP;
  	  endElementP->m_elementP=new Linux_SambaPrinterSecurityForPrinterRepositoryInstance(elementP);
  	}
  };  
}
 
