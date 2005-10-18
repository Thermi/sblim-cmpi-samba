/**
 *  Linux_SambaGlobalBrowseForGlobalManualInstance.cpp
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


#include "Linux_SambaGlobalBrowseForGlobalManualInstance.h"
#include "CmpiData.h"
#include "CmpiString.h"
#include "CmpiArray.h"
#include <string>

namespace genProvider {

  //*********************************************************
  //Linux_SambaGlobalBrowseForGlobalManualInstance
  //*********************************************************

  //empty constructor
  Linux_SambaGlobalBrowseForGlobalManualInstance::
   Linux_SambaGlobalBrowseForGlobalManualInstance(){   	
   	init();  	   	
  };
  
  
  //copy constructor	
  Linux_SambaGlobalBrowseForGlobalManualInstance::
   Linux_SambaGlobalBrowseForGlobalManualInstance
   (const Linux_SambaGlobalBrowseForGlobalManualInstance& original){   	
   	init(original);  	   	
  };
  
  
  //constructor using CmpiInstance
  Linux_SambaGlobalBrowseForGlobalManualInstance::
   Linux_SambaGlobalBrowseForGlobalManualInstance (const CmpiInstance& inst, const char* instanceNamespace){
    CmpiData cmpiData;
    init(); 
    
    CmpiObjectPath cop=inst.getObjectPath();
    cop.setNameSpace(instanceNamespace);
    setInstanceName(Linux_SambaGlobalBrowseForGlobalInstanceName(cop));
    
  }
  
  
  //Destructor
  Linux_SambaGlobalBrowseForGlobalManualInstance::
   ~Linux_SambaGlobalBrowseForGlobalManualInstance(){
   	reset();  	  
  };
  
  
  //copy operator
  Linux_SambaGlobalBrowseForGlobalManualInstance&
   Linux_SambaGlobalBrowseForGlobalManualInstance::operator=
   (const Linux_SambaGlobalBrowseForGlobalManualInstance& original){   	
   	init(original);
   	return *this;
  };
  
  
  //converts to CmpiInstance
  CmpiInstance Linux_SambaGlobalBrowseForGlobalManualInstance::
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
  unsigned int Linux_SambaGlobalBrowseForGlobalManualInstance::
   isInstanceNameSet() const{
  	return isSet.instanceName;
  }
  
  const Linux_SambaGlobalBrowseForGlobalInstanceName&
    Linux_SambaGlobalBrowseForGlobalManualInstance::getInstanceName() const{

    if(!isSet.instanceName)
   	  throw CmpiErrorFormater::getErrorException(
   	   CmpiErrorFormater::NOT_SET,
   	   "InstanceName not set in Linux_SambaGlobalBrowseForGlobal instance");
  		
   	return m_instanceName;
  }

  void Linux_SambaGlobalBrowseForGlobalManualInstance::setInstanceName(
   const Linux_SambaGlobalBrowseForGlobalInstanceName& val){
    m_instanceName = val;
    isSet.instanceName=1;
  }


  
  //set isSet attributes to FALSE
  void Linux_SambaGlobalBrowseForGlobalManualInstance::init(){
   	isSet.instanceName=0;
   	  	
  };
  
  
  //copies another instance properties in this
  void Linux_SambaGlobalBrowseForGlobalManualInstance::init
   (const Linux_SambaGlobalBrowseForGlobalManualInstance& original){   	
   	init();
   	   	
    if(original.isInstanceNameSet()){
      setInstanceName(original.getInstanceName());
    }    
   }
  
  
  //reset the instance data
  void Linux_SambaGlobalBrowseForGlobalManualInstance::reset(){
   	
  	  
  };
  
  
  //*********************************************************
  //Linux_SambaGlobalBrowseForGlobalManualInstanceEnumerationElement	
  //*********************************************************
  
  Linux_SambaGlobalBrowseForGlobalManualInstanceEnumerationElement::
   Linux_SambaGlobalBrowseForGlobalManualInstanceEnumerationElement(){
   	
  	m_elementP=0;
  	m_nextP=0;
  	  
  };
  
  
  Linux_SambaGlobalBrowseForGlobalManualInstanceEnumerationElement::
   ~Linux_SambaGlobalBrowseForGlobalManualInstanceEnumerationElement(){
   	
  	if (m_elementP!=0)
  	  delete(m_elementP);
  	if (m_nextP!=0)
  	  delete(m_nextP);
  	  
  };

  
  //*********************************************************
  //Linux_SambaGlobalBrowseForGlobalManualInstanceNameEnumeration
  //*********************************************************

  Linux_SambaGlobalBrowseForGlobalManualInstanceEnumeration::
   Linux_SambaGlobalBrowseForGlobalManualInstanceEnumeration(){
   	
  	 firstElementP=0;
     currentElementP=0;
     endElementP=0;
  };
  
  Linux_SambaGlobalBrowseForGlobalManualInstanceEnumeration::
   Linux_SambaGlobalBrowseForGlobalManualInstanceEnumeration(
   const Linux_SambaGlobalBrowseForGlobalManualInstanceEnumeration& original){
   	
     firstElementP=0;
     currentElementP=0;
     endElementP=0;
  	 
     int size=original.getSize();
     for(int i=0;i<size;i++)
       addElement(original.getElement(i));           
  };
  
  	  
  Linux_SambaGlobalBrowseForGlobalManualInstanceEnumeration::
   ~Linux_SambaGlobalBrowseForGlobalManualInstanceEnumeration(){
   	
  	if (firstElementP!=0)
  	  delete(firstElementP);
  	  	
  };
  
  	  
  void Linux_SambaGlobalBrowseForGlobalManualInstanceEnumeration::reset(){
  	
  	currentElementP=firstElementP;
  };
  
  	  
  bool Linux_SambaGlobalBrowseForGlobalManualInstanceEnumeration::hasNext() const{
  	
  	return (currentElementP!=0);
  
  };
  
  int Linux_SambaGlobalBrowseForGlobalManualInstanceEnumeration::getSize() const{
  	
    int size=0;
    Linux_SambaGlobalBrowseForGlobalManualInstanceEnumerationElement* followingP=firstElementP;
  	
  	while(followingP!=0){
        followingP=followingP->m_nextP;
        size++;
    }
  	
    return size;
    
  };
  
  const Linux_SambaGlobalBrowseForGlobalManualInstance&  
   Linux_SambaGlobalBrowseForGlobalManualInstanceEnumeration::getElement(int pos) const{
   
    Linux_SambaGlobalBrowseForGlobalManualInstanceEnumerationElement* followingP=firstElementP;
   
    int i=0;
    while((followingP!=0)&&(i<pos)){
        followingP=followingP->m_nextP;
        i++;
    }
    
    return *(followingP->m_elementP);
  };
  
  	  
  const Linux_SambaGlobalBrowseForGlobalManualInstance&
   Linux_SambaGlobalBrowseForGlobalManualInstanceEnumeration::getNext() {
   	
  	 Linux_SambaGlobalBrowseForGlobalManualInstanceEnumerationElement* currentP=
  	  currentElementP;
  	 currentElementP=currentElementP->m_nextP;
  	 
  	 return *(currentP->m_elementP);
  };
  	  
  void Linux_SambaGlobalBrowseForGlobalManualInstanceEnumeration::addElement
   (const Linux_SambaGlobalBrowseForGlobalManualInstance& elementP){
   	
  	if(firstElementP==0){
  	  firstElementP=new Linux_SambaGlobalBrowseForGlobalManualInstanceEnumerationElement();
  	  firstElementP->m_elementP=new Linux_SambaGlobalBrowseForGlobalManualInstance(elementP);
  	  endElementP=firstElementP;
  	  currentElementP=firstElementP;
  	}else{
  	  endElementP->m_nextP=new Linux_SambaGlobalBrowseForGlobalManualInstanceEnumerationElement();
  	  endElementP=endElementP->m_nextP;
  	  endElementP->m_elementP=new Linux_SambaGlobalBrowseForGlobalManualInstance(elementP);
  	}
  };  
}
 
