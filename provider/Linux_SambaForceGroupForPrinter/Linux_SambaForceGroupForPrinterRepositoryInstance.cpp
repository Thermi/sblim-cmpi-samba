/**
 *  Linux_SambaForceGroupForPrinterRepositoryInstance.cpp
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


#include "Linux_SambaForceGroupForPrinterRepositoryInstance.h"
#include "CmpiData.h"
#include "CmpiString.h"
#include "CmpiArray.h"
#include <string>

namespace genProvider {

  //*********************************************************
  //Linux_SambaForceGroupForPrinterRepositoryInstance
  //*********************************************************

  //empty constructor
  Linux_SambaForceGroupForPrinterRepositoryInstance::
   Linux_SambaForceGroupForPrinterRepositoryInstance(){   	
   	init();  	   	
  };
  
  
  //copy constructor	
  Linux_SambaForceGroupForPrinterRepositoryInstance::
   Linux_SambaForceGroupForPrinterRepositoryInstance
   (const Linux_SambaForceGroupForPrinterRepositoryInstance& original){   	
   	init(original);  	   	
  };
  
  
  //constructor using CmpiInstance
  Linux_SambaForceGroupForPrinterRepositoryInstance::
   Linux_SambaForceGroupForPrinterRepositoryInstance (const CmpiInstance& inst, const char* instanceNamespace){
    CmpiData cmpiData;
    init(); 
    
    CmpiObjectPath cop=inst.getObjectPath();
    cop.setNameSpace(instanceNamespace);
    setInstanceName(Linux_SambaForceGroupForPrinterInstanceName(cop));
    
  }
  
  
  //Destructor
  Linux_SambaForceGroupForPrinterRepositoryInstance::
   ~Linux_SambaForceGroupForPrinterRepositoryInstance(){
   	reset();  	  
  };
  
  
  //copy operator
  Linux_SambaForceGroupForPrinterRepositoryInstance&
   Linux_SambaForceGroupForPrinterRepositoryInstance::operator=
   (const Linux_SambaForceGroupForPrinterRepositoryInstance& original){   	
   	init(original);
   	return *this;
  };
  
  
  //converts to CmpiInstance
  CmpiInstance Linux_SambaForceGroupForPrinterRepositoryInstance::
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
  unsigned int Linux_SambaForceGroupForPrinterRepositoryInstance::
   isInstanceNameSet() const{
  	return isSet.instanceName;
  }
  
  const Linux_SambaForceGroupForPrinterInstanceName&
    Linux_SambaForceGroupForPrinterRepositoryInstance::getInstanceName() const{

    if(!isSet.instanceName)
   	  throw CmpiErrorFormater::getErrorException(
   	   CmpiErrorFormater::NOT_SET,
   	   "InstanceName not set in Linux_SambaForceGroupForPrinter instance");
  		
   	return m_instanceName;
  }

  void Linux_SambaForceGroupForPrinterRepositoryInstance::setInstanceName(
   const Linux_SambaForceGroupForPrinterInstanceName& val){
    m_instanceName = val;
    isSet.instanceName=1;
  }


  
  //set isSet attributes to FALSE
  void Linux_SambaForceGroupForPrinterRepositoryInstance::init(){
   	isSet.instanceName=0;
   	  	
  };
  
  
  //copies another instance properties in this
  void Linux_SambaForceGroupForPrinterRepositoryInstance::init
   (const Linux_SambaForceGroupForPrinterRepositoryInstance& original){   	
   	init();
   	   	
    if(original.isInstanceNameSet()){
      setInstanceName(original.getInstanceName());
    }    
   }
  
  
  //reset the instance data
  void Linux_SambaForceGroupForPrinterRepositoryInstance::reset(){
   	
  	  
  };
  
  
  //*********************************************************
  //Linux_SambaForceGroupForPrinterRepositoryInstanceEnumerationElement	
  //*********************************************************
  
  Linux_SambaForceGroupForPrinterRepositoryInstanceEnumerationElement::
   Linux_SambaForceGroupForPrinterRepositoryInstanceEnumerationElement(){
   	
  	m_elementP=0;
  	m_nextP=0;
  	  
  };
  
  
  Linux_SambaForceGroupForPrinterRepositoryInstanceEnumerationElement::
   ~Linux_SambaForceGroupForPrinterRepositoryInstanceEnumerationElement(){
   	
  	if (m_elementP!=0)
  	  delete(m_elementP);
  	if (m_nextP!=0)
  	  delete(m_nextP);
  	  
  };

  
  //*********************************************************
  //Linux_SambaForceGroupForPrinterRepositoryInstanceNameEnumeration
  //*********************************************************

  Linux_SambaForceGroupForPrinterRepositoryInstanceEnumeration::
   Linux_SambaForceGroupForPrinterRepositoryInstanceEnumeration(){
   	
  	 firstElementP=0;
     currentElementP=0;
     endElementP=0;
  };
  
  Linux_SambaForceGroupForPrinterRepositoryInstanceEnumeration::
   Linux_SambaForceGroupForPrinterRepositoryInstanceEnumeration(
   const Linux_SambaForceGroupForPrinterRepositoryInstanceEnumeration& original){
   	
     firstElementP=0;
     currentElementP=0;
     endElementP=0;
  	 
     int size=original.getSize();
     for(int i=0;i<size;i++)
       addElement(original.getElement(i));           
  };
  
  	  
  Linux_SambaForceGroupForPrinterRepositoryInstanceEnumeration::
   ~Linux_SambaForceGroupForPrinterRepositoryInstanceEnumeration(){
   	
  	if (firstElementP!=0)
  	  delete(firstElementP);
  	  	
  };
  
  	  
  void Linux_SambaForceGroupForPrinterRepositoryInstanceEnumeration::reset(){
  	
  	currentElementP=firstElementP;
  };
  
  	  
  bool Linux_SambaForceGroupForPrinterRepositoryInstanceEnumeration::hasNext() const{
  	
  	return (currentElementP!=0);
  
  };
  
  int Linux_SambaForceGroupForPrinterRepositoryInstanceEnumeration::getSize() const{
  	
    int size=0;
    Linux_SambaForceGroupForPrinterRepositoryInstanceEnumerationElement* followingP=firstElementP;
  	
  	while(followingP!=0){
        followingP=followingP->m_nextP;
        size++;
    }
  	
    return size;
    
  };
  
  const Linux_SambaForceGroupForPrinterRepositoryInstance&  
   Linux_SambaForceGroupForPrinterRepositoryInstanceEnumeration::getElement(int pos) const{
   
    Linux_SambaForceGroupForPrinterRepositoryInstanceEnumerationElement* followingP=firstElementP;
   
    int i=0;
    while((followingP!=0)&&(i<pos)){
        followingP=followingP->m_nextP;
        i++;
    }
    
    return *(followingP->m_elementP);
  };
  
  	  
  const Linux_SambaForceGroupForPrinterRepositoryInstance&
   Linux_SambaForceGroupForPrinterRepositoryInstanceEnumeration::getNext() {
   	
  	 Linux_SambaForceGroupForPrinterRepositoryInstanceEnumerationElement* currentP=
  	  currentElementP;
  	 currentElementP=currentElementP->m_nextP;
  	 
  	 return *(currentP->m_elementP);
  };
  	  
  void Linux_SambaForceGroupForPrinterRepositoryInstanceEnumeration::addElement
   (const Linux_SambaForceGroupForPrinterRepositoryInstance& elementP){
   	
  	if(firstElementP==0){
  	  firstElementP=new Linux_SambaForceGroupForPrinterRepositoryInstanceEnumerationElement();
  	  firstElementP->m_elementP=new Linux_SambaForceGroupForPrinterRepositoryInstance(elementP);
  	  endElementP=firstElementP;
  	  currentElementP=firstElementP;
  	}else{
  	  endElementP->m_nextP=new Linux_SambaForceGroupForPrinterRepositoryInstanceEnumerationElement();
  	  endElementP=endElementP->m_nextP;
  	  endElementP->m_elementP=new Linux_SambaForceGroupForPrinterRepositoryInstance(elementP);
  	}
  };  
}
 