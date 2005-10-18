/**
 *  Linux_SambaCommonSecurityForGlobalManualInstance.cpp
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


#include "Linux_SambaCommonSecurityForGlobalManualInstance.h"
#include "CmpiData.h"
#include "CmpiString.h"
#include "CmpiArray.h"
#include <string>

namespace genProvider {

  //*********************************************************
  //Linux_SambaCommonSecurityForGlobalManualInstance
  //*********************************************************

  //empty constructor
  Linux_SambaCommonSecurityForGlobalManualInstance::
   Linux_SambaCommonSecurityForGlobalManualInstance(){   	
   	init();  	   	
  };
  
  
  //copy constructor	
  Linux_SambaCommonSecurityForGlobalManualInstance::
   Linux_SambaCommonSecurityForGlobalManualInstance
   (const Linux_SambaCommonSecurityForGlobalManualInstance& original){   	
   	init(original);  	   	
  };
  
  
  //constructor using CmpiInstance
  Linux_SambaCommonSecurityForGlobalManualInstance::
   Linux_SambaCommonSecurityForGlobalManualInstance (const CmpiInstance& inst, const char* instanceNamespace){
    CmpiData cmpiData;
    init(); 
    
    CmpiObjectPath cop=inst.getObjectPath();
    cop.setNameSpace(instanceNamespace);
    setInstanceName(Linux_SambaCommonSecurityForGlobalInstanceName(cop));
    
  }
  
  
  //Destructor
  Linux_SambaCommonSecurityForGlobalManualInstance::
   ~Linux_SambaCommonSecurityForGlobalManualInstance(){
   	reset();  	  
  };
  
  
  //copy operator
  Linux_SambaCommonSecurityForGlobalManualInstance&
   Linux_SambaCommonSecurityForGlobalManualInstance::operator=
   (const Linux_SambaCommonSecurityForGlobalManualInstance& original){   	
   	init(original);
   	return *this;
  };
  
  
  //converts to CmpiInstance
  CmpiInstance Linux_SambaCommonSecurityForGlobalManualInstance::
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
  unsigned int Linux_SambaCommonSecurityForGlobalManualInstance::
   isInstanceNameSet() const{
  	return isSet.instanceName;
  }
  
  const Linux_SambaCommonSecurityForGlobalInstanceName&
    Linux_SambaCommonSecurityForGlobalManualInstance::getInstanceName() const{

    if(!isSet.instanceName)
   	  throw CmpiErrorFormater::getErrorException(
   	   CmpiErrorFormater::NOT_SET,
   	   "InstanceName not set in Linux_SambaCommonSecurityForGlobal instance");
  		
   	return m_instanceName;
  }

  void Linux_SambaCommonSecurityForGlobalManualInstance::setInstanceName(
   const Linux_SambaCommonSecurityForGlobalInstanceName& val){
    m_instanceName = val;
    isSet.instanceName=1;
  }


  
  //set isSet attributes to FALSE
  void Linux_SambaCommonSecurityForGlobalManualInstance::init(){
   	isSet.instanceName=0;
   	  	
  };
  
  
  //copies another instance properties in this
  void Linux_SambaCommonSecurityForGlobalManualInstance::init
   (const Linux_SambaCommonSecurityForGlobalManualInstance& original){   	
   	init();
   	   	
    if(original.isInstanceNameSet()){
      setInstanceName(original.getInstanceName());
    }    
   }
  
  
  //reset the instance data
  void Linux_SambaCommonSecurityForGlobalManualInstance::reset(){
   	
  	  
  };
  
  
  //*********************************************************
  //Linux_SambaCommonSecurityForGlobalManualInstanceEnumerationElement	
  //*********************************************************
  
  Linux_SambaCommonSecurityForGlobalManualInstanceEnumerationElement::
   Linux_SambaCommonSecurityForGlobalManualInstanceEnumerationElement(){
   	
  	m_elementP=0;
  	m_nextP=0;
  	  
  };
  
  
  Linux_SambaCommonSecurityForGlobalManualInstanceEnumerationElement::
   ~Linux_SambaCommonSecurityForGlobalManualInstanceEnumerationElement(){
   	
  	if (m_elementP!=0)
  	  delete(m_elementP);
  	if (m_nextP!=0)
  	  delete(m_nextP);
  	  
  };

  
  //*********************************************************
  //Linux_SambaCommonSecurityForGlobalManualInstanceNameEnumeration
  //*********************************************************

  Linux_SambaCommonSecurityForGlobalManualInstanceEnumeration::
   Linux_SambaCommonSecurityForGlobalManualInstanceEnumeration(){
   	
  	 firstElementP=0;
     currentElementP=0;
     endElementP=0;
  };
  
  Linux_SambaCommonSecurityForGlobalManualInstanceEnumeration::
   Linux_SambaCommonSecurityForGlobalManualInstanceEnumeration(
   const Linux_SambaCommonSecurityForGlobalManualInstanceEnumeration& original){
   	
     firstElementP=0;
     currentElementP=0;
     endElementP=0;
  	 
     int size=original.getSize();
     for(int i=0;i<size;i++)
       addElement(original.getElement(i));           
  };
  
  	  
  Linux_SambaCommonSecurityForGlobalManualInstanceEnumeration::
   ~Linux_SambaCommonSecurityForGlobalManualInstanceEnumeration(){
   	
  	if (firstElementP!=0)
  	  delete(firstElementP);
  	  	
  };
  
  	  
  void Linux_SambaCommonSecurityForGlobalManualInstanceEnumeration::reset(){
  	
  	currentElementP=firstElementP;
  };
  
  	  
  bool Linux_SambaCommonSecurityForGlobalManualInstanceEnumeration::hasNext() const{
  	
  	return (currentElementP!=0);
  
  };
  
  int Linux_SambaCommonSecurityForGlobalManualInstanceEnumeration::getSize() const{
  	
    int size=0;
    Linux_SambaCommonSecurityForGlobalManualInstanceEnumerationElement* followingP=firstElementP;
  	
  	while(followingP!=0){
        followingP=followingP->m_nextP;
        size++;
    }
  	
    return size;
    
  };
  
  const Linux_SambaCommonSecurityForGlobalManualInstance&  
   Linux_SambaCommonSecurityForGlobalManualInstanceEnumeration::getElement(int pos) const{
   
    Linux_SambaCommonSecurityForGlobalManualInstanceEnumerationElement* followingP=firstElementP;
   
    int i=0;
    while((followingP!=0)&&(i<pos)){
        followingP=followingP->m_nextP;
        i++;
    }
    
    return *(followingP->m_elementP);
  };
  
  	  
  const Linux_SambaCommonSecurityForGlobalManualInstance&
   Linux_SambaCommonSecurityForGlobalManualInstanceEnumeration::getNext() {
   	
  	 Linux_SambaCommonSecurityForGlobalManualInstanceEnumerationElement* currentP=
  	  currentElementP;
  	 currentElementP=currentElementP->m_nextP;
  	 
  	 return *(currentP->m_elementP);
  };
  	  
  void Linux_SambaCommonSecurityForGlobalManualInstanceEnumeration::addElement
   (const Linux_SambaCommonSecurityForGlobalManualInstance& elementP){
   	
  	if(firstElementP==0){
  	  firstElementP=new Linux_SambaCommonSecurityForGlobalManualInstanceEnumerationElement();
  	  firstElementP->m_elementP=new Linux_SambaCommonSecurityForGlobalManualInstance(elementP);
  	  endElementP=firstElementP;
  	  currentElementP=firstElementP;
  	}else{
  	  endElementP->m_nextP=new Linux_SambaCommonSecurityForGlobalManualInstanceEnumerationElement();
  	  endElementP=endElementP->m_nextP;
  	  endElementP->m_elementP=new Linux_SambaCommonSecurityForGlobalManualInstance(elementP);
  	}
  };  
}
 
