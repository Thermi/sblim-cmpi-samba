/**
 *  Linux_SambaGlobalPrintingOptionsRepositoryInstance.cpp
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


#include "Linux_SambaGlobalPrintingOptionsRepositoryInstance.h"
#include "CmpiData.h"
#include "CmpiString.h"
#include "CmpiArray.h"
#include <string>

namespace genProvider {

  //*********************************************************
  //Linux_SambaGlobalPrintingOptionsRepositoryInstance
  //*********************************************************

  //empty constructor
  Linux_SambaGlobalPrintingOptionsRepositoryInstance::
   Linux_SambaGlobalPrintingOptionsRepositoryInstance(){   	
   	init();  	   	
  };
  
  
  //copy constructor	
  Linux_SambaGlobalPrintingOptionsRepositoryInstance::
   Linux_SambaGlobalPrintingOptionsRepositoryInstance
   (const Linux_SambaGlobalPrintingOptionsRepositoryInstance& original){   	
   	init(original);  	   	
  };
  
  
  //constructor using CmpiInstance
  Linux_SambaGlobalPrintingOptionsRepositoryInstance::
   Linux_SambaGlobalPrintingOptionsRepositoryInstance (const CmpiInstance& inst, const char* instanceNamespace){
    CmpiData cmpiData;
    init(); 
    
    CmpiObjectPath cop=inst.getObjectPath();
    cop.setNameSpace(instanceNamespace);
    setInstanceName(Linux_SambaGlobalPrintingOptionsInstanceName(cop));
    
  }
  
  
  //Destructor
  Linux_SambaGlobalPrintingOptionsRepositoryInstance::
   ~Linux_SambaGlobalPrintingOptionsRepositoryInstance(){
   	reset();  	  
  };
  
  
  //copy operator
  Linux_SambaGlobalPrintingOptionsRepositoryInstance&
   Linux_SambaGlobalPrintingOptionsRepositoryInstance::operator=
   (const Linux_SambaGlobalPrintingOptionsRepositoryInstance& original){   	
   	init(original);
   	return *this;
  };
  
  
  //converts to CmpiInstance
  CmpiInstance Linux_SambaGlobalPrintingOptionsRepositoryInstance::
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
  unsigned int Linux_SambaGlobalPrintingOptionsRepositoryInstance::
   isInstanceNameSet() const{
  	return isSet.instanceName;
  }
  
  const Linux_SambaGlobalPrintingOptionsInstanceName&
    Linux_SambaGlobalPrintingOptionsRepositoryInstance::getInstanceName() const{

    if(!isSet.instanceName)
   	  throw CmpiErrorFormater::getErrorException(
   	   CmpiErrorFormater::NOT_SET,
   	   "InstanceName not set in Linux_SambaGlobalPrintingOptions instance");
  		
   	return m_instanceName;
  }

  void Linux_SambaGlobalPrintingOptionsRepositoryInstance::setInstanceName(
   const Linux_SambaGlobalPrintingOptionsInstanceName& val){
    m_instanceName = val;
    isSet.instanceName=1;
  }


  
  //set isSet attributes to FALSE
  void Linux_SambaGlobalPrintingOptionsRepositoryInstance::init(){
   	isSet.instanceName=0;
   	  	
  };
  
  
  //copies another instance properties in this
  void Linux_SambaGlobalPrintingOptionsRepositoryInstance::init
   (const Linux_SambaGlobalPrintingOptionsRepositoryInstance& original){   	
   	init();
   	   	
    if(original.isInstanceNameSet()){
      setInstanceName(original.getInstanceName());
    }    
   }
  
  
  //reset the instance data
  void Linux_SambaGlobalPrintingOptionsRepositoryInstance::reset(){
   	
  	  
  };
  
  
  //*********************************************************
  //Linux_SambaGlobalPrintingOptionsRepositoryInstanceEnumerationElement	
  //*********************************************************
  
  Linux_SambaGlobalPrintingOptionsRepositoryInstanceEnumerationElement::
   Linux_SambaGlobalPrintingOptionsRepositoryInstanceEnumerationElement(){
   	
  	m_elementP=0;
  	m_nextP=0;
  	  
  };
  
  
  Linux_SambaGlobalPrintingOptionsRepositoryInstanceEnumerationElement::
   ~Linux_SambaGlobalPrintingOptionsRepositoryInstanceEnumerationElement(){
   	
  	if (m_elementP!=0)
  	  delete(m_elementP);
  	if (m_nextP!=0)
  	  delete(m_nextP);
  	  
  };

  
  //*********************************************************
  //Linux_SambaGlobalPrintingOptionsRepositoryInstanceNameEnumeration
  //*********************************************************

  Linux_SambaGlobalPrintingOptionsRepositoryInstanceEnumeration::
   Linux_SambaGlobalPrintingOptionsRepositoryInstanceEnumeration(){
   	
  	 firstElementP=0;
     currentElementP=0;
     endElementP=0;
  };
  
  Linux_SambaGlobalPrintingOptionsRepositoryInstanceEnumeration::
   Linux_SambaGlobalPrintingOptionsRepositoryInstanceEnumeration(
   const Linux_SambaGlobalPrintingOptionsRepositoryInstanceEnumeration& original){
   	
     firstElementP=0;
     currentElementP=0;
     endElementP=0;
  	 
     int size=original.getSize();
     for(int i=0;i<size;i++)
       addElement(original.getElement(i));           
  };
  
  	  
  Linux_SambaGlobalPrintingOptionsRepositoryInstanceEnumeration::
   ~Linux_SambaGlobalPrintingOptionsRepositoryInstanceEnumeration(){
   	
  	if (firstElementP!=0)
  	  delete(firstElementP);
  	  	
  };
  
  	  
  void Linux_SambaGlobalPrintingOptionsRepositoryInstanceEnumeration::reset(){
  	
  	currentElementP=firstElementP;
  };
  
  	  
  bool Linux_SambaGlobalPrintingOptionsRepositoryInstanceEnumeration::hasNext() const{
  	
  	return (currentElementP!=0);
  
  };
  
  int Linux_SambaGlobalPrintingOptionsRepositoryInstanceEnumeration::getSize() const{
  	
    int size=0;
    Linux_SambaGlobalPrintingOptionsRepositoryInstanceEnumerationElement* followingP=firstElementP;
  	
  	while(followingP!=0){
        followingP=followingP->m_nextP;
        size++;
    }
  	
    return size;
    
  };
  
  const Linux_SambaGlobalPrintingOptionsRepositoryInstance&  
   Linux_SambaGlobalPrintingOptionsRepositoryInstanceEnumeration::getElement(int pos) const{
   
    Linux_SambaGlobalPrintingOptionsRepositoryInstanceEnumerationElement* followingP=firstElementP;
   
    int i=0;
    while((followingP!=0)&&(i<pos)){
        followingP=followingP->m_nextP;
        i++;
    }
    
    return *(followingP->m_elementP);
  };
  
  	  
  const Linux_SambaGlobalPrintingOptionsRepositoryInstance&
   Linux_SambaGlobalPrintingOptionsRepositoryInstanceEnumeration::getNext() {
   	
  	 Linux_SambaGlobalPrintingOptionsRepositoryInstanceEnumerationElement* currentP=
  	  currentElementP;
  	 currentElementP=currentElementP->m_nextP;
  	 
  	 return *(currentP->m_elementP);
  };
  	  
  void Linux_SambaGlobalPrintingOptionsRepositoryInstanceEnumeration::addElement
   (const Linux_SambaGlobalPrintingOptionsRepositoryInstance& elementP){
   	
  	if(firstElementP==0){
  	  firstElementP=new Linux_SambaGlobalPrintingOptionsRepositoryInstanceEnumerationElement();
  	  firstElementP->m_elementP=new Linux_SambaGlobalPrintingOptionsRepositoryInstance(elementP);
  	  endElementP=firstElementP;
  	  currentElementP=firstElementP;
  	}else{
  	  endElementP->m_nextP=new Linux_SambaGlobalPrintingOptionsRepositoryInstanceEnumerationElement();
  	  endElementP=endElementP->m_nextP;
  	  endElementP->m_elementP=new Linux_SambaGlobalPrintingOptionsRepositoryInstance(elementP);
  	}
  };  
}
 
