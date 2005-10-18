/**
 *  Linux_SambaShareSecurityForGlobalManualInstance.cpp
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


#include "Linux_SambaShareSecurityForGlobalManualInstance.h"
#include "CmpiData.h"
#include "CmpiString.h"
#include "CmpiArray.h"
#include <string>

namespace genProvider {

  //*********************************************************
  //Linux_SambaShareSecurityForGlobalManualInstance
  //*********************************************************

  //empty constructor
  Linux_SambaShareSecurityForGlobalManualInstance::
   Linux_SambaShareSecurityForGlobalManualInstance(){   	
   	init();  	   	
  };
  
  
  //copy constructor	
  Linux_SambaShareSecurityForGlobalManualInstance::
   Linux_SambaShareSecurityForGlobalManualInstance
   (const Linux_SambaShareSecurityForGlobalManualInstance& original){   	
   	init(original);  	   	
  };
  
  
  //constructor using CmpiInstance
  Linux_SambaShareSecurityForGlobalManualInstance::
   Linux_SambaShareSecurityForGlobalManualInstance (const CmpiInstance& inst, const char* instanceNamespace){
    CmpiData cmpiData;
    init(); 
    
    CmpiObjectPath cop=inst.getObjectPath();
    cop.setNameSpace(instanceNamespace);
    setInstanceName(Linux_SambaShareSecurityForGlobalInstanceName(cop));
    
  }
  
  
  //Destructor
  Linux_SambaShareSecurityForGlobalManualInstance::
   ~Linux_SambaShareSecurityForGlobalManualInstance(){
   	reset();  	  
  };
  
  
  //copy operator
  Linux_SambaShareSecurityForGlobalManualInstance&
   Linux_SambaShareSecurityForGlobalManualInstance::operator=
   (const Linux_SambaShareSecurityForGlobalManualInstance& original){   	
   	init(original);
   	return *this;
  };
  
  
  //converts to CmpiInstance
  CmpiInstance Linux_SambaShareSecurityForGlobalManualInstance::
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
  unsigned int Linux_SambaShareSecurityForGlobalManualInstance::
   isInstanceNameSet() const{
  	return isSet.instanceName;
  }
  
  const Linux_SambaShareSecurityForGlobalInstanceName&
    Linux_SambaShareSecurityForGlobalManualInstance::getInstanceName() const{

    if(!isSet.instanceName)
   	  throw CmpiErrorFormater::getErrorException(
   	   CmpiErrorFormater::NOT_SET,
   	   "InstanceName not set in Linux_SambaShareSecurityForGlobal instance");
  		
   	return m_instanceName;
  }

  void Linux_SambaShareSecurityForGlobalManualInstance::setInstanceName(
   const Linux_SambaShareSecurityForGlobalInstanceName& val){
    m_instanceName = val;
    isSet.instanceName=1;
  }


  
  //set isSet attributes to FALSE
  void Linux_SambaShareSecurityForGlobalManualInstance::init(){
   	isSet.instanceName=0;
   	  	
  };
  
  
  //copies another instance properties in this
  void Linux_SambaShareSecurityForGlobalManualInstance::init
   (const Linux_SambaShareSecurityForGlobalManualInstance& original){   	
   	init();
   	   	
    if(original.isInstanceNameSet()){
      setInstanceName(original.getInstanceName());
    }    
   }
  
  
  //reset the instance data
  void Linux_SambaShareSecurityForGlobalManualInstance::reset(){
   	
  	  
  };
  
  
  //*********************************************************
  //Linux_SambaShareSecurityForGlobalManualInstanceEnumerationElement	
  //*********************************************************
  
  Linux_SambaShareSecurityForGlobalManualInstanceEnumerationElement::
   Linux_SambaShareSecurityForGlobalManualInstanceEnumerationElement(){
   	
  	m_elementP=0;
  	m_nextP=0;
  	  
  };
  
  
  Linux_SambaShareSecurityForGlobalManualInstanceEnumerationElement::
   ~Linux_SambaShareSecurityForGlobalManualInstanceEnumerationElement(){
   	
  	if (m_elementP!=0)
  	  delete(m_elementP);
  	if (m_nextP!=0)
  	  delete(m_nextP);
  	  
  };

  
  //*********************************************************
  //Linux_SambaShareSecurityForGlobalManualInstanceNameEnumeration
  //*********************************************************

  Linux_SambaShareSecurityForGlobalManualInstanceEnumeration::
   Linux_SambaShareSecurityForGlobalManualInstanceEnumeration(){
   	
  	 firstElementP=0;
     currentElementP=0;
     endElementP=0;
  };
  
  Linux_SambaShareSecurityForGlobalManualInstanceEnumeration::
   Linux_SambaShareSecurityForGlobalManualInstanceEnumeration(
   const Linux_SambaShareSecurityForGlobalManualInstanceEnumeration& original){
   	
     firstElementP=0;
     currentElementP=0;
     endElementP=0;
  	 
     int size=original.getSize();
     for(int i=0;i<size;i++)
       addElement(original.getElement(i));           
  };
  
  	  
  Linux_SambaShareSecurityForGlobalManualInstanceEnumeration::
   ~Linux_SambaShareSecurityForGlobalManualInstanceEnumeration(){
   	
  	if (firstElementP!=0)
  	  delete(firstElementP);
  	  	
  };
  
  	  
  void Linux_SambaShareSecurityForGlobalManualInstanceEnumeration::reset(){
  	
  	currentElementP=firstElementP;
  };
  
  	  
  bool Linux_SambaShareSecurityForGlobalManualInstanceEnumeration::hasNext() const{
  	
  	return (currentElementP!=0);
  
  };
  
  int Linux_SambaShareSecurityForGlobalManualInstanceEnumeration::getSize() const{
  	
    int size=0;
    Linux_SambaShareSecurityForGlobalManualInstanceEnumerationElement* followingP=firstElementP;
  	
  	while(followingP!=0){
        followingP=followingP->m_nextP;
        size++;
    }
  	
    return size;
    
  };
  
  const Linux_SambaShareSecurityForGlobalManualInstance&  
   Linux_SambaShareSecurityForGlobalManualInstanceEnumeration::getElement(int pos) const{
   
    Linux_SambaShareSecurityForGlobalManualInstanceEnumerationElement* followingP=firstElementP;
   
    int i=0;
    while((followingP!=0)&&(i<pos)){
        followingP=followingP->m_nextP;
        i++;
    }
    
    return *(followingP->m_elementP);
  };
  
  	  
  const Linux_SambaShareSecurityForGlobalManualInstance&
   Linux_SambaShareSecurityForGlobalManualInstanceEnumeration::getNext() {
   	
  	 Linux_SambaShareSecurityForGlobalManualInstanceEnumerationElement* currentP=
  	  currentElementP;
  	 currentElementP=currentElementP->m_nextP;
  	 
  	 return *(currentP->m_elementP);
  };
  	  
  void Linux_SambaShareSecurityForGlobalManualInstanceEnumeration::addElement
   (const Linux_SambaShareSecurityForGlobalManualInstance& elementP){
   	
  	if(firstElementP==0){
  	  firstElementP=new Linux_SambaShareSecurityForGlobalManualInstanceEnumerationElement();
  	  firstElementP->m_elementP=new Linux_SambaShareSecurityForGlobalManualInstance(elementP);
  	  endElementP=firstElementP;
  	  currentElementP=firstElementP;
  	}else{
  	  endElementP->m_nextP=new Linux_SambaShareSecurityForGlobalManualInstanceEnumerationElement();
  	  endElementP=endElementP->m_nextP;
  	  endElementP->m_elementP=new Linux_SambaShareSecurityForGlobalManualInstance(elementP);
  	}
  };  
}
 
