/**
 *  Linux_SambaInvalidUsersForPrinterRepositoryInstance.cpp
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


#include "Linux_SambaInvalidUsersForPrinterRepositoryInstance.h"
#include "CmpiData.h"
#include "CmpiString.h"
#include "CmpiArray.h"
#include <string>

namespace genProvider {

  //*********************************************************
  //Linux_SambaInvalidUsersForPrinterRepositoryInstance
  //*********************************************************

  //empty constructor
  Linux_SambaInvalidUsersForPrinterRepositoryInstance::
   Linux_SambaInvalidUsersForPrinterRepositoryInstance(){   	
   	init();  	   	
  };
  
  
  //copy constructor	
  Linux_SambaInvalidUsersForPrinterRepositoryInstance::
   Linux_SambaInvalidUsersForPrinterRepositoryInstance
   (const Linux_SambaInvalidUsersForPrinterRepositoryInstance& original){   	
   	init(original);  	   	
  };
  
  
  //constructor using CmpiInstance
  Linux_SambaInvalidUsersForPrinterRepositoryInstance::
   Linux_SambaInvalidUsersForPrinterRepositoryInstance (const CmpiInstance& inst, const char* instanceNamespace){
    CmpiData cmpiData;
    init(); 
    
    CmpiObjectPath cop=inst.getObjectPath();
    cop.setNameSpace(instanceNamespace);
    setInstanceName(Linux_SambaInvalidUsersForPrinterInstanceName(cop));
    
  }
  
  
  //Destructor
  Linux_SambaInvalidUsersForPrinterRepositoryInstance::
   ~Linux_SambaInvalidUsersForPrinterRepositoryInstance(){
   	reset();  	  
  };
  
  
  //copy operator
  Linux_SambaInvalidUsersForPrinterRepositoryInstance&
   Linux_SambaInvalidUsersForPrinterRepositoryInstance::operator=
   (const Linux_SambaInvalidUsersForPrinterRepositoryInstance& original){   	
   	init(original);
   	return *this;
  };
  
  
  //converts to CmpiInstance
  CmpiInstance Linux_SambaInvalidUsersForPrinterRepositoryInstance::
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
  unsigned int Linux_SambaInvalidUsersForPrinterRepositoryInstance::
   isInstanceNameSet() const{
  	return isSet.instanceName;
  }
  
  const Linux_SambaInvalidUsersForPrinterInstanceName&
    Linux_SambaInvalidUsersForPrinterRepositoryInstance::getInstanceName() const{

    if(!isSet.instanceName)
   	  throw CmpiErrorFormater::getErrorException(
   	   CmpiErrorFormater::NOT_SET,
   	   "InstanceName not set in Linux_SambaInvalidUsersForPrinter instance");
  		
   	return m_instanceName;
  }

  void Linux_SambaInvalidUsersForPrinterRepositoryInstance::setInstanceName(
   const Linux_SambaInvalidUsersForPrinterInstanceName& val){
    m_instanceName = val;
    isSet.instanceName=1;
  }


  
  //set isSet attributes to FALSE
  void Linux_SambaInvalidUsersForPrinterRepositoryInstance::init(){
   	isSet.instanceName=0;
   	  	
  };
  
  
  //copies another instance properties in this
  void Linux_SambaInvalidUsersForPrinterRepositoryInstance::init
   (const Linux_SambaInvalidUsersForPrinterRepositoryInstance& original){   	
   	init();
   	   	
    if(original.isInstanceNameSet()){
      setInstanceName(original.getInstanceName());
    }    
   }
  
  
  //reset the instance data
  void Linux_SambaInvalidUsersForPrinterRepositoryInstance::reset(){
   	
  	  
  };
  
  
  //*********************************************************
  //Linux_SambaInvalidUsersForPrinterRepositoryInstanceEnumerationElement	
  //*********************************************************
  
  Linux_SambaInvalidUsersForPrinterRepositoryInstanceEnumerationElement::
   Linux_SambaInvalidUsersForPrinterRepositoryInstanceEnumerationElement(){
   	
  	m_elementP=0;
  	m_nextP=0;
  	  
  };
  
  
  Linux_SambaInvalidUsersForPrinterRepositoryInstanceEnumerationElement::
   ~Linux_SambaInvalidUsersForPrinterRepositoryInstanceEnumerationElement(){
   	
  	if (m_elementP!=0)
  	  delete(m_elementP);
  	if (m_nextP!=0)
  	  delete(m_nextP);
  	  
  };

  
  //*********************************************************
  //Linux_SambaInvalidUsersForPrinterRepositoryInstanceNameEnumeration
  //*********************************************************

  Linux_SambaInvalidUsersForPrinterRepositoryInstanceEnumeration::
   Linux_SambaInvalidUsersForPrinterRepositoryInstanceEnumeration(){
   	
  	 firstElementP=0;
     currentElementP=0;
     endElementP=0;
  };
  
  Linux_SambaInvalidUsersForPrinterRepositoryInstanceEnumeration::
   Linux_SambaInvalidUsersForPrinterRepositoryInstanceEnumeration(
   const Linux_SambaInvalidUsersForPrinterRepositoryInstanceEnumeration& original){
   	
     firstElementP=0;
     currentElementP=0;
     endElementP=0;
  	 
     int size=original.getSize();
     for(int i=0;i<size;i++)
       addElement(original.getElement(i));           
  };
  
  	  
  Linux_SambaInvalidUsersForPrinterRepositoryInstanceEnumeration::
   ~Linux_SambaInvalidUsersForPrinterRepositoryInstanceEnumeration(){
   	
  	if (firstElementP!=0)
  	  delete(firstElementP);
  	  	
  };
  
  	  
  void Linux_SambaInvalidUsersForPrinterRepositoryInstanceEnumeration::reset(){
  	
  	currentElementP=firstElementP;
  };
  
  	  
  bool Linux_SambaInvalidUsersForPrinterRepositoryInstanceEnumeration::hasNext() const{
  	
  	return (currentElementP!=0);
  
  };
  
  int Linux_SambaInvalidUsersForPrinterRepositoryInstanceEnumeration::getSize() const{
  	
    int size=0;
    Linux_SambaInvalidUsersForPrinterRepositoryInstanceEnumerationElement* followingP=firstElementP;
  	
  	while(followingP!=0){
        followingP=followingP->m_nextP;
        size++;
    }
  	
    return size;
    
  };
  
  const Linux_SambaInvalidUsersForPrinterRepositoryInstance&  
   Linux_SambaInvalidUsersForPrinterRepositoryInstanceEnumeration::getElement(int pos) const{
   
    Linux_SambaInvalidUsersForPrinterRepositoryInstanceEnumerationElement* followingP=firstElementP;
   
    int i=0;
    while((followingP!=0)&&(i<pos)){
        followingP=followingP->m_nextP;
        i++;
    }
    
    return *(followingP->m_elementP);
  };
  
  	  
  const Linux_SambaInvalidUsersForPrinterRepositoryInstance&
   Linux_SambaInvalidUsersForPrinterRepositoryInstanceEnumeration::getNext() {
   	
  	 Linux_SambaInvalidUsersForPrinterRepositoryInstanceEnumerationElement* currentP=
  	  currentElementP;
  	 currentElementP=currentElementP->m_nextP;
  	 
  	 return *(currentP->m_elementP);
  };
  	  
  void Linux_SambaInvalidUsersForPrinterRepositoryInstanceEnumeration::addElement
   (const Linux_SambaInvalidUsersForPrinterRepositoryInstance& elementP){
   	
  	if(firstElementP==0){
  	  firstElementP=new Linux_SambaInvalidUsersForPrinterRepositoryInstanceEnumerationElement();
  	  firstElementP->m_elementP=new Linux_SambaInvalidUsersForPrinterRepositoryInstance(elementP);
  	  endElementP=firstElementP;
  	  currentElementP=firstElementP;
  	}else{
  	  endElementP->m_nextP=new Linux_SambaInvalidUsersForPrinterRepositoryInstanceEnumerationElement();
  	  endElementP=endElementP->m_nextP;
  	  endElementP->m_elementP=new Linux_SambaInvalidUsersForPrinterRepositoryInstance(elementP);
  	}
  };  
}
 
