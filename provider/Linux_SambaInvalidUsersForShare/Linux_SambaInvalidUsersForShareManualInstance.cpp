/**
 *  Linux_SambaInvalidUsersForShareManualInstance.cpp
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


#include "Linux_SambaInvalidUsersForShareManualInstance.h"
#include "CmpiData.h"
#include "CmpiString.h"
#include "CmpiArray.h"
#include <string>

namespace genProvider {

  //*********************************************************
  //Linux_SambaInvalidUsersForShareManualInstance
  //*********************************************************

  //empty constructor
  Linux_SambaInvalidUsersForShareManualInstance::
   Linux_SambaInvalidUsersForShareManualInstance(){   	
   	init();  	   	
  };
  
  
  //copy constructor	
  Linux_SambaInvalidUsersForShareManualInstance::
   Linux_SambaInvalidUsersForShareManualInstance
   (const Linux_SambaInvalidUsersForShareManualInstance& original){   	
   	init(original);  	   	
  };
  
  
  //constructor using CmpiInstance
  Linux_SambaInvalidUsersForShareManualInstance::
   Linux_SambaInvalidUsersForShareManualInstance (const CmpiInstance& inst, const char* instanceNamespace){
    CmpiData cmpiData;
    init(); 
    
    CmpiObjectPath cop=inst.getObjectPath();
    cop.setNameSpace(instanceNamespace);
    setInstanceName(Linux_SambaInvalidUsersForShareInstanceName(cop));
    
  }
  
  
  //Destructor
  Linux_SambaInvalidUsersForShareManualInstance::
   ~Linux_SambaInvalidUsersForShareManualInstance(){
   	reset();  	  
  };
  
  
  //copy operator
  Linux_SambaInvalidUsersForShareManualInstance&
   Linux_SambaInvalidUsersForShareManualInstance::operator=
   (const Linux_SambaInvalidUsersForShareManualInstance& original){   	
   	init(original);
   	return *this;
  };
  
  
  //converts to CmpiInstance
  CmpiInstance Linux_SambaInvalidUsersForShareManualInstance::
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
  unsigned int Linux_SambaInvalidUsersForShareManualInstance::
   isInstanceNameSet() const{
  	return isSet.instanceName;
  }
  
  const Linux_SambaInvalidUsersForShareInstanceName&
    Linux_SambaInvalidUsersForShareManualInstance::getInstanceName() const{

    if(!isSet.instanceName)
   	  throw CmpiErrorFormater::getErrorException(
   	   CmpiErrorFormater::NOT_SET,
   	   "InstanceName not set in Linux_SambaInvalidUsersForShare instance");
  		
   	return m_instanceName;
  }

  void Linux_SambaInvalidUsersForShareManualInstance::setInstanceName(
   const Linux_SambaInvalidUsersForShareInstanceName& val){
    m_instanceName = val;
    isSet.instanceName=1;
  }


  
  //set isSet attributes to FALSE
  void Linux_SambaInvalidUsersForShareManualInstance::init(){
   	isSet.instanceName=0;
   	  	
  };
  
  
  //copies another instance properties in this
  void Linux_SambaInvalidUsersForShareManualInstance::init
   (const Linux_SambaInvalidUsersForShareManualInstance& original){   	
   	init();
   	   	
    if(original.isInstanceNameSet()){
      setInstanceName(original.getInstanceName());
    }    
   }
  
  
  //reset the instance data
  void Linux_SambaInvalidUsersForShareManualInstance::reset(){
   	
  	  
  };
  
  
  //*********************************************************
  //Linux_SambaInvalidUsersForShareManualInstanceEnumerationElement	
  //*********************************************************
  
  Linux_SambaInvalidUsersForShareManualInstanceEnumerationElement::
   Linux_SambaInvalidUsersForShareManualInstanceEnumerationElement(){
   	
  	m_elementP=0;
  	m_nextP=0;
  	  
  };
  
  
  Linux_SambaInvalidUsersForShareManualInstanceEnumerationElement::
   ~Linux_SambaInvalidUsersForShareManualInstanceEnumerationElement(){
   	
  	if (m_elementP!=0)
  	  delete(m_elementP);
  	if (m_nextP!=0)
  	  delete(m_nextP);
  	  
  };

  
  //*********************************************************
  //Linux_SambaInvalidUsersForShareManualInstanceNameEnumeration
  //*********************************************************

  Linux_SambaInvalidUsersForShareManualInstanceEnumeration::
   Linux_SambaInvalidUsersForShareManualInstanceEnumeration(){
   	
  	 firstElementP=0;
     currentElementP=0;
     endElementP=0;
  };
  
  Linux_SambaInvalidUsersForShareManualInstanceEnumeration::
   Linux_SambaInvalidUsersForShareManualInstanceEnumeration(
   const Linux_SambaInvalidUsersForShareManualInstanceEnumeration& original){
   	
     firstElementP=0;
     currentElementP=0;
     endElementP=0;
  	 
     int size=original.getSize();
     for(int i=0;i<size;i++)
       addElement(original.getElement(i));           
  };
  
  	  
  Linux_SambaInvalidUsersForShareManualInstanceEnumeration::
   ~Linux_SambaInvalidUsersForShareManualInstanceEnumeration(){
   	
  	if (firstElementP!=0)
  	  delete(firstElementP);
  	  	
  };
  
  	  
  void Linux_SambaInvalidUsersForShareManualInstanceEnumeration::reset(){
  	
  	currentElementP=firstElementP;
  };
  
  	  
  bool Linux_SambaInvalidUsersForShareManualInstanceEnumeration::hasNext() const{
  	
  	return (currentElementP!=0);
  
  };
  
  int Linux_SambaInvalidUsersForShareManualInstanceEnumeration::getSize() const{
  	
    int size=0;
    Linux_SambaInvalidUsersForShareManualInstanceEnumerationElement* followingP=firstElementP;
  	
  	while(followingP!=0){
        followingP=followingP->m_nextP;
        size++;
    }
  	
    return size;
    
  };
  
  const Linux_SambaInvalidUsersForShareManualInstance&  
   Linux_SambaInvalidUsersForShareManualInstanceEnumeration::getElement(int pos) const{
   
    Linux_SambaInvalidUsersForShareManualInstanceEnumerationElement* followingP=firstElementP;
   
    int i=0;
    while((followingP!=0)&&(i<pos)){
        followingP=followingP->m_nextP;
        i++;
    }
    
    return *(followingP->m_elementP);
  };
  
  	  
  const Linux_SambaInvalidUsersForShareManualInstance&
   Linux_SambaInvalidUsersForShareManualInstanceEnumeration::getNext() {
   	
  	 Linux_SambaInvalidUsersForShareManualInstanceEnumerationElement* currentP=
  	  currentElementP;
  	 currentElementP=currentElementP->m_nextP;
  	 
  	 return *(currentP->m_elementP);
  };
  	  
  void Linux_SambaInvalidUsersForShareManualInstanceEnumeration::addElement
   (const Linux_SambaInvalidUsersForShareManualInstance& elementP){
   	
  	if(firstElementP==0){
  	  firstElementP=new Linux_SambaInvalidUsersForShareManualInstanceEnumerationElement();
  	  firstElementP->m_elementP=new Linux_SambaInvalidUsersForShareManualInstance(elementP);
  	  endElementP=firstElementP;
  	  currentElementP=firstElementP;
  	}else{
  	  endElementP->m_nextP=new Linux_SambaInvalidUsersForShareManualInstanceEnumerationElement();
  	  endElementP=endElementP->m_nextP;
  	  endElementP->m_elementP=new Linux_SambaInvalidUsersForShareManualInstance(elementP);
  	}
  };  
}
 
