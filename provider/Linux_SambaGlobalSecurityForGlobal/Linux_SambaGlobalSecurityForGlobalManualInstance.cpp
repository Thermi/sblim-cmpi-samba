/**
 *  Linux_SambaGlobalSecurityForGlobalManualInstance.cpp
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


#include "Linux_SambaGlobalSecurityForGlobalManualInstance.h"
#include "CmpiData.h"
#include "CmpiString.h"
#include "CmpiArray.h"
#include <string>

namespace genProvider {

  //*********************************************************
  //Linux_SambaGlobalSecurityForGlobalManualInstance
  //*********************************************************

  //empty constructor
  Linux_SambaGlobalSecurityForGlobalManualInstance::
   Linux_SambaGlobalSecurityForGlobalManualInstance(){   	
   	init();  	   	
  };
  
  
  //copy constructor	
  Linux_SambaGlobalSecurityForGlobalManualInstance::
   Linux_SambaGlobalSecurityForGlobalManualInstance
   (const Linux_SambaGlobalSecurityForGlobalManualInstance& original){   	
   	init(original);  	   	
  };
  
  
  //constructor using CmpiInstance
  Linux_SambaGlobalSecurityForGlobalManualInstance::
   Linux_SambaGlobalSecurityForGlobalManualInstance (const CmpiInstance& inst, const char* instanceNamespace){
    CmpiData cmpiData;
    init(); 
    
    CmpiObjectPath cop=inst.getObjectPath();
    cop.setNameSpace(instanceNamespace);
    setInstanceName(Linux_SambaGlobalSecurityForGlobalInstanceName(cop));
    
  }
  
  
  //Destructor
  Linux_SambaGlobalSecurityForGlobalManualInstance::
   ~Linux_SambaGlobalSecurityForGlobalManualInstance(){
   	reset();  	  
  };
  
  
  //copy operator
  Linux_SambaGlobalSecurityForGlobalManualInstance&
   Linux_SambaGlobalSecurityForGlobalManualInstance::operator=
   (const Linux_SambaGlobalSecurityForGlobalManualInstance& original){   	
   	init(original);
   	return *this;
  };
  
  
  //converts to CmpiInstance
  CmpiInstance Linux_SambaGlobalSecurityForGlobalManualInstance::
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
  unsigned int Linux_SambaGlobalSecurityForGlobalManualInstance::
   isInstanceNameSet() const{
  	return isSet.instanceName;
  }
  
  const Linux_SambaGlobalSecurityForGlobalInstanceName&
    Linux_SambaGlobalSecurityForGlobalManualInstance::getInstanceName() const{

    if(!isSet.instanceName)
   	  throw CmpiErrorFormater::getErrorException(
   	   CmpiErrorFormater::NOT_SET,
   	   "InstanceName not set in Linux_SambaGlobalSecurityForGlobal instance");
  		
   	return m_instanceName;
  }

  void Linux_SambaGlobalSecurityForGlobalManualInstance::setInstanceName(
   const Linux_SambaGlobalSecurityForGlobalInstanceName& val){
    m_instanceName = val;
    isSet.instanceName=1;
  }


  
  //set isSet attributes to FALSE
  void Linux_SambaGlobalSecurityForGlobalManualInstance::init(){
   	isSet.instanceName=0;
   	  	
  };
  
  
  //copies another instance properties in this
  void Linux_SambaGlobalSecurityForGlobalManualInstance::init
   (const Linux_SambaGlobalSecurityForGlobalManualInstance& original){   	
   	init();
   	   	
    if(original.isInstanceNameSet()){
      setInstanceName(original.getInstanceName());
    }    
   }
  
  
  //reset the instance data
  void Linux_SambaGlobalSecurityForGlobalManualInstance::reset(){
   	
  	  
  };
  
  
  //*********************************************************
  //Linux_SambaGlobalSecurityForGlobalManualInstanceEnumerationElement	
  //*********************************************************
  
  Linux_SambaGlobalSecurityForGlobalManualInstanceEnumerationElement::
   Linux_SambaGlobalSecurityForGlobalManualInstanceEnumerationElement(){
   	
  	m_elementP=0;
  	m_nextP=0;
  	  
  };
  
  
  Linux_SambaGlobalSecurityForGlobalManualInstanceEnumerationElement::
   ~Linux_SambaGlobalSecurityForGlobalManualInstanceEnumerationElement(){
   	
  	if (m_elementP!=0)
  	  delete(m_elementP);
  	if (m_nextP!=0)
  	  delete(m_nextP);
  	  
  };

  
  //*********************************************************
  //Linux_SambaGlobalSecurityForGlobalManualInstanceNameEnumeration
  //*********************************************************

  Linux_SambaGlobalSecurityForGlobalManualInstanceEnumeration::
   Linux_SambaGlobalSecurityForGlobalManualInstanceEnumeration(){
   	
  	 firstElementP=0;
     currentElementP=0;
     endElementP=0;
  };
  
  Linux_SambaGlobalSecurityForGlobalManualInstanceEnumeration::
   Linux_SambaGlobalSecurityForGlobalManualInstanceEnumeration(
   const Linux_SambaGlobalSecurityForGlobalManualInstanceEnumeration& original){
   	
     firstElementP=0;
     currentElementP=0;
     endElementP=0;
  	 
     int size=original.getSize();
     for(int i=0;i<size;i++)
       addElement(original.getElement(i));           
  };
  
  	  
  Linux_SambaGlobalSecurityForGlobalManualInstanceEnumeration::
   ~Linux_SambaGlobalSecurityForGlobalManualInstanceEnumeration(){
   	
  	if (firstElementP!=0)
  	  delete(firstElementP);
  	  	
  };
  
  	  
  void Linux_SambaGlobalSecurityForGlobalManualInstanceEnumeration::reset(){
  	
  	currentElementP=firstElementP;
  };
  
  	  
  bool Linux_SambaGlobalSecurityForGlobalManualInstanceEnumeration::hasNext() const{
  	
  	return (currentElementP!=0);
  
  };
  
  int Linux_SambaGlobalSecurityForGlobalManualInstanceEnumeration::getSize() const{
  	
    int size=0;
    Linux_SambaGlobalSecurityForGlobalManualInstanceEnumerationElement* followingP=firstElementP;
  	
  	while(followingP!=0){
        followingP=followingP->m_nextP;
        size++;
    }
  	
    return size;
    
  };
  
  const Linux_SambaGlobalSecurityForGlobalManualInstance&  
   Linux_SambaGlobalSecurityForGlobalManualInstanceEnumeration::getElement(int pos) const{
   
    Linux_SambaGlobalSecurityForGlobalManualInstanceEnumerationElement* followingP=firstElementP;
   
    int i=0;
    while((followingP!=0)&&(i<pos)){
        followingP=followingP->m_nextP;
        i++;
    }
    
    return *(followingP->m_elementP);
  };
  
  	  
  const Linux_SambaGlobalSecurityForGlobalManualInstance&
   Linux_SambaGlobalSecurityForGlobalManualInstanceEnumeration::getNext() {
   	
  	 Linux_SambaGlobalSecurityForGlobalManualInstanceEnumerationElement* currentP=
  	  currentElementP;
  	 currentElementP=currentElementP->m_nextP;
  	 
  	 return *(currentP->m_elementP);
  };
  	  
  void Linux_SambaGlobalSecurityForGlobalManualInstanceEnumeration::addElement
   (const Linux_SambaGlobalSecurityForGlobalManualInstance& elementP){
   	
  	if(firstElementP==0){
  	  firstElementP=new Linux_SambaGlobalSecurityForGlobalManualInstanceEnumerationElement();
  	  firstElementP->m_elementP=new Linux_SambaGlobalSecurityForGlobalManualInstance(elementP);
  	  endElementP=firstElementP;
  	  currentElementP=firstElementP;
  	}else{
  	  endElementP->m_nextP=new Linux_SambaGlobalSecurityForGlobalManualInstanceEnumerationElement();
  	  endElementP=endElementP->m_nextP;
  	  endElementP->m_elementP=new Linux_SambaGlobalSecurityForGlobalManualInstance(elementP);
  	}
  };  
}
 
