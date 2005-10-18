/**
 *  Linux_SambaInvalidUsersForPrinterInstance.cpp
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


#include "Linux_SambaInvalidUsersForPrinterInstance.h"
#include "CmpiData.h"
#include "CmpiString.h"
#include "CmpiArray.h"
#include <string>

namespace genProvider {

  //*********************************************************
  //Linux_SambaInvalidUsersForPrinterInstance
  //*********************************************************

  //empty constructor
  Linux_SambaInvalidUsersForPrinterInstance::
   Linux_SambaInvalidUsersForPrinterInstance(){   	
   	init();  	   	
  };
  
  
  //copy constructor	
  Linux_SambaInvalidUsersForPrinterInstance::
   Linux_SambaInvalidUsersForPrinterInstance
   (const Linux_SambaInvalidUsersForPrinterInstance& original){   	
   	init(original);  	   	
  };
  
  
  //constructor using CmpiInstance
  Linux_SambaInvalidUsersForPrinterInstance::
   Linux_SambaInvalidUsersForPrinterInstance (const CmpiInstance& inst, const char* instanceNamespace){
    CmpiData cmpiData;
    init(); 
    
    CmpiObjectPath cop=inst.getObjectPath();
    cop.setNameSpace(instanceNamespace);
    setInstanceName(Linux_SambaInvalidUsersForPrinterInstanceName(cop));
    
  }
  
  
  //Destructor
  Linux_SambaInvalidUsersForPrinterInstance::
   ~Linux_SambaInvalidUsersForPrinterInstance(){
   	reset();  	  
  };
  
  
  //copy operator
  Linux_SambaInvalidUsersForPrinterInstance&
   Linux_SambaInvalidUsersForPrinterInstance::operator=
   (const Linux_SambaInvalidUsersForPrinterInstance& original){   	
   	init(original);
   	return *this;
  };
  
  
  //converts to CmpiInstance
  CmpiInstance Linux_SambaInvalidUsersForPrinterInstance::
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
  unsigned int Linux_SambaInvalidUsersForPrinterInstance::
   isInstanceNameSet() const{
  	return isSet.instanceName;
  }
  
  const Linux_SambaInvalidUsersForPrinterInstanceName&
    Linux_SambaInvalidUsersForPrinterInstance::getInstanceName() const{

    if(!isSet.instanceName)
   	  throw CmpiErrorFormater::getErrorException(
   	   CmpiErrorFormater::NOT_SET,
   	   "InstanceName not set in Linux_SambaInvalidUsersForPrinter instance");
  		
   	return m_instanceName;
  }

  void Linux_SambaInvalidUsersForPrinterInstance::setInstanceName(
   const Linux_SambaInvalidUsersForPrinterInstanceName& val){
    m_instanceName = val;
    isSet.instanceName=1;
  }


  
  //set isSet attributes to FALSE
  void Linux_SambaInvalidUsersForPrinterInstance::init(){
   	isSet.instanceName=0;
   	  	
  };
  
  
  //copies another instance properties in this
  void Linux_SambaInvalidUsersForPrinterInstance::init
   (const Linux_SambaInvalidUsersForPrinterInstance& original){   	
   	init();
   	   	
    if(original.isInstanceNameSet()){
      setInstanceName(original.getInstanceName());
    }    
   }
  
  
  //reset the instance data
  void Linux_SambaInvalidUsersForPrinterInstance::reset(){
   	
  	  
  };
  
  
  //*********************************************************
  //Linux_SambaInvalidUsersForPrinterInstanceEnumerationElement	
  //*********************************************************
  
  Linux_SambaInvalidUsersForPrinterInstanceEnumerationElement::
   Linux_SambaInvalidUsersForPrinterInstanceEnumerationElement(){
   	
  	m_elementP=0;
  	m_nextP=0;
  	  
  };
  
  
  Linux_SambaInvalidUsersForPrinterInstanceEnumerationElement::
   ~Linux_SambaInvalidUsersForPrinterInstanceEnumerationElement(){
   	
  	if (m_elementP!=0)
  	  delete(m_elementP);
  	if (m_nextP!=0)
  	  delete(m_nextP);
  	  
  };

  
  //*********************************************************
  //Linux_SambaInvalidUsersForPrinterInstanceNameEnumeration
  //*********************************************************

  Linux_SambaInvalidUsersForPrinterInstanceEnumeration::
   Linux_SambaInvalidUsersForPrinterInstanceEnumeration(){
   	
  	 firstElementP=0;
     currentElementP=0;
     endElementP=0;
  };
  
  Linux_SambaInvalidUsersForPrinterInstanceEnumeration::
   Linux_SambaInvalidUsersForPrinterInstanceEnumeration(
   const Linux_SambaInvalidUsersForPrinterInstanceEnumeration& original){
   	
     firstElementP=0;
     currentElementP=0;
     endElementP=0;
  	 
     int size=original.getSize();
     for(int i=0;i<size;i++)
       addElement(original.getElement(i));           
  };
  
  	  
  Linux_SambaInvalidUsersForPrinterInstanceEnumeration::
   ~Linux_SambaInvalidUsersForPrinterInstanceEnumeration(){
   	
  	if (firstElementP!=0)
  	  delete(firstElementP);
  	  	
  };
  
  	  
  void Linux_SambaInvalidUsersForPrinterInstanceEnumeration::reset(){
  	
  	currentElementP=firstElementP;
  };
  
  	  
  bool Linux_SambaInvalidUsersForPrinterInstanceEnumeration::hasNext() const{
  	
  	return (currentElementP!=0);
  
  };
  
  int Linux_SambaInvalidUsersForPrinterInstanceEnumeration::getSize() const{
  	
    int size=0;
    Linux_SambaInvalidUsersForPrinterInstanceEnumerationElement* followingP=firstElementP;
  	
  	while(followingP!=0){
        followingP=followingP->m_nextP;
        size++;
    }
  	
    return size;
    
  };
  
  const Linux_SambaInvalidUsersForPrinterInstance&  
   Linux_SambaInvalidUsersForPrinterInstanceEnumeration::getElement(int pos) const{
   
    Linux_SambaInvalidUsersForPrinterInstanceEnumerationElement* followingP=firstElementP;
   
    int i=0;
    while((followingP!=0)&&(i<pos)){
        followingP=followingP->m_nextP;
        i++;
    }
    
    return *(followingP->m_elementP);
  };
  
  	  
  const Linux_SambaInvalidUsersForPrinterInstance&
   Linux_SambaInvalidUsersForPrinterInstanceEnumeration::getNext() {
   	
  	 Linux_SambaInvalidUsersForPrinterInstanceEnumerationElement* currentP=
  	  currentElementP;
  	 currentElementP=currentElementP->m_nextP;
  	 
  	 return *(currentP->m_elementP);
  };
  	  
  void Linux_SambaInvalidUsersForPrinterInstanceEnumeration::addElement
   (const Linux_SambaInvalidUsersForPrinterInstance& elementP){
   	
  	if(firstElementP==0){
  	  firstElementP=new Linux_SambaInvalidUsersForPrinterInstanceEnumerationElement();
  	  firstElementP->m_elementP=new Linux_SambaInvalidUsersForPrinterInstance(elementP);
  	  endElementP=firstElementP;
  	  currentElementP=firstElementP;
  	}else{
  	  endElementP->m_nextP=new Linux_SambaInvalidUsersForPrinterInstanceEnumerationElement();
  	  endElementP=endElementP->m_nextP;
  	  endElementP->m_elementP=new Linux_SambaInvalidUsersForPrinterInstance(elementP);
  	}
  };  
}
 
