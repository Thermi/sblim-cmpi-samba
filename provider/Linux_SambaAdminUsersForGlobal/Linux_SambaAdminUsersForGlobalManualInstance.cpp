/**
 *  Linux_SambaAdminUsersForGlobalManualInstance.cpp
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


#include "Linux_SambaAdminUsersForGlobalManualInstance.h"
#include "CmpiData.h"
#include "CmpiString.h"
#include "CmpiArray.h"
#include <string>

namespace genProvider {

  //*********************************************************
  //Linux_SambaAdminUsersForGlobalManualInstance
  //*********************************************************

  //empty constructor
  Linux_SambaAdminUsersForGlobalManualInstance::
   Linux_SambaAdminUsersForGlobalManualInstance(){   	
   	init();  	   	
  };
  
  
  //copy constructor	
  Linux_SambaAdminUsersForGlobalManualInstance::
   Linux_SambaAdminUsersForGlobalManualInstance
   (const Linux_SambaAdminUsersForGlobalManualInstance& original){   	
   	init(original);  	   	
  };
  
  
  //constructor using CmpiInstance
  Linux_SambaAdminUsersForGlobalManualInstance::
   Linux_SambaAdminUsersForGlobalManualInstance (const CmpiInstance& inst, const char* instanceNamespace){
    CmpiData cmpiData;
    init(); 
    
    CmpiObjectPath cop=inst.getObjectPath();
    cop.setNameSpace(instanceNamespace);
    setInstanceName(Linux_SambaAdminUsersForGlobalInstanceName(cop));
    
  }
  
  
  //Destructor
  Linux_SambaAdminUsersForGlobalManualInstance::
   ~Linux_SambaAdminUsersForGlobalManualInstance(){
   	reset();  	  
  };
  
  
  //copy operator
  Linux_SambaAdminUsersForGlobalManualInstance&
   Linux_SambaAdminUsersForGlobalManualInstance::operator=
   (const Linux_SambaAdminUsersForGlobalManualInstance& original){   	
   	init(original);
   	return *this;
  };
  
  
  //converts to CmpiInstance
  CmpiInstance Linux_SambaAdminUsersForGlobalManualInstance::
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
  unsigned int Linux_SambaAdminUsersForGlobalManualInstance::
   isInstanceNameSet() const{
  	return isSet.instanceName;
  }
  
  const Linux_SambaAdminUsersForGlobalInstanceName&
    Linux_SambaAdminUsersForGlobalManualInstance::getInstanceName() const{

    if(!isSet.instanceName)
   	  throw CmpiErrorFormater::getErrorException(
   	   CmpiErrorFormater::NOT_SET,
   	   "InstanceName not set in Linux_SambaAdminUsersForGlobal instance");
  		
   	return m_instanceName;
  }

  void Linux_SambaAdminUsersForGlobalManualInstance::setInstanceName(
   const Linux_SambaAdminUsersForGlobalInstanceName& val){
    m_instanceName = val;
    isSet.instanceName=1;
  }


  
  //set isSet attributes to FALSE
  void Linux_SambaAdminUsersForGlobalManualInstance::init(){
   	isSet.instanceName=0;
   	  	
  };
  
  
  //copies another instance properties in this
  void Linux_SambaAdminUsersForGlobalManualInstance::init
   (const Linux_SambaAdminUsersForGlobalManualInstance& original){   	
   	init();
   	   	
    if(original.isInstanceNameSet()){
      setInstanceName(original.getInstanceName());
    }    
   }
  
  
  //reset the instance data
  void Linux_SambaAdminUsersForGlobalManualInstance::reset(){
   	
  	  
  };
  
  
  //*********************************************************
  //Linux_SambaAdminUsersForGlobalManualInstanceEnumerationElement	
  //*********************************************************
  
  Linux_SambaAdminUsersForGlobalManualInstanceEnumerationElement::
   Linux_SambaAdminUsersForGlobalManualInstanceEnumerationElement(){
   	
  	m_elementP=0;
  	m_nextP=0;
  	  
  };
  
  
  Linux_SambaAdminUsersForGlobalManualInstanceEnumerationElement::
   ~Linux_SambaAdminUsersForGlobalManualInstanceEnumerationElement(){
   	
  	if (m_elementP!=0)
  	  delete(m_elementP);
  	if (m_nextP!=0)
  	  delete(m_nextP);
  	  
  };

  
  //*********************************************************
  //Linux_SambaAdminUsersForGlobalManualInstanceNameEnumeration
  //*********************************************************

  Linux_SambaAdminUsersForGlobalManualInstanceEnumeration::
   Linux_SambaAdminUsersForGlobalManualInstanceEnumeration(){
   	
  	 firstElementP=0;
     currentElementP=0;
     endElementP=0;
  };
  
  Linux_SambaAdminUsersForGlobalManualInstanceEnumeration::
   Linux_SambaAdminUsersForGlobalManualInstanceEnumeration(
   const Linux_SambaAdminUsersForGlobalManualInstanceEnumeration& original){
   	
     firstElementP=0;
     currentElementP=0;
     endElementP=0;
  	 
     int size=original.getSize();
     for(int i=0;i<size;i++)
       addElement(original.getElement(i));           
  };
  
  	  
  Linux_SambaAdminUsersForGlobalManualInstanceEnumeration::
   ~Linux_SambaAdminUsersForGlobalManualInstanceEnumeration(){
   	
  	if (firstElementP!=0)
  	  delete(firstElementP);
  	  	
  };
  
  	  
  void Linux_SambaAdminUsersForGlobalManualInstanceEnumeration::reset(){
  	
  	currentElementP=firstElementP;
  };
  
  	  
  bool Linux_SambaAdminUsersForGlobalManualInstanceEnumeration::hasNext() const{
  	
  	return (currentElementP!=0);
  
  };
  
  int Linux_SambaAdminUsersForGlobalManualInstanceEnumeration::getSize() const{
  	
    int size=0;
    Linux_SambaAdminUsersForGlobalManualInstanceEnumerationElement* followingP=firstElementP;
  	
  	while(followingP!=0){
        followingP=followingP->m_nextP;
        size++;
    }
  	
    return size;
    
  };
  
  const Linux_SambaAdminUsersForGlobalManualInstance&  
   Linux_SambaAdminUsersForGlobalManualInstanceEnumeration::getElement(int pos) const{
   
    Linux_SambaAdminUsersForGlobalManualInstanceEnumerationElement* followingP=firstElementP;
   
    int i=0;
    while((followingP!=0)&&(i<pos)){
        followingP=followingP->m_nextP;
        i++;
    }
    
    return *(followingP->m_elementP);
  };
  
  	  
  const Linux_SambaAdminUsersForGlobalManualInstance&
   Linux_SambaAdminUsersForGlobalManualInstanceEnumeration::getNext() {
   	
  	 Linux_SambaAdminUsersForGlobalManualInstanceEnumerationElement* currentP=
  	  currentElementP;
  	 currentElementP=currentElementP->m_nextP;
  	 
  	 return *(currentP->m_elementP);
  };
  	  
  void Linux_SambaAdminUsersForGlobalManualInstanceEnumeration::addElement
   (const Linux_SambaAdminUsersForGlobalManualInstance& elementP){
   	
  	if(firstElementP==0){
  	  firstElementP=new Linux_SambaAdminUsersForGlobalManualInstanceEnumerationElement();
  	  firstElementP->m_elementP=new Linux_SambaAdminUsersForGlobalManualInstance(elementP);
  	  endElementP=firstElementP;
  	  currentElementP=firstElementP;
  	}else{
  	  endElementP->m_nextP=new Linux_SambaAdminUsersForGlobalManualInstanceEnumerationElement();
  	  endElementP=endElementP->m_nextP;
  	  endElementP->m_elementP=new Linux_SambaAdminUsersForGlobalManualInstance(elementP);
  	}
  };  
}
 
