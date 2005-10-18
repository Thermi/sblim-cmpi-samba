/**
 *  Linux_SambaAdminUsersForShareManualInstance.cpp
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


#include "Linux_SambaAdminUsersForShareManualInstance.h"
#include "CmpiData.h"
#include "CmpiString.h"
#include "CmpiArray.h"
#include <string>

namespace genProvider {

  //*********************************************************
  //Linux_SambaAdminUsersForShareManualInstance
  //*********************************************************

  //empty constructor
  Linux_SambaAdminUsersForShareManualInstance::
   Linux_SambaAdminUsersForShareManualInstance(){   	
   	init();  	   	
  };
  
  
  //copy constructor	
  Linux_SambaAdminUsersForShareManualInstance::
   Linux_SambaAdminUsersForShareManualInstance
   (const Linux_SambaAdminUsersForShareManualInstance& original){   	
   	init(original);  	   	
  };
  
  
  //constructor using CmpiInstance
  Linux_SambaAdminUsersForShareManualInstance::
   Linux_SambaAdminUsersForShareManualInstance (const CmpiInstance& inst, const char* instanceNamespace){
    CmpiData cmpiData;
    init(); 
    
    CmpiObjectPath cop=inst.getObjectPath();
    cop.setNameSpace(instanceNamespace);
    setInstanceName(Linux_SambaAdminUsersForShareInstanceName(cop));
    
  }
  
  
  //Destructor
  Linux_SambaAdminUsersForShareManualInstance::
   ~Linux_SambaAdminUsersForShareManualInstance(){
   	reset();  	  
  };
  
  
  //copy operator
  Linux_SambaAdminUsersForShareManualInstance&
   Linux_SambaAdminUsersForShareManualInstance::operator=
   (const Linux_SambaAdminUsersForShareManualInstance& original){   	
   	init(original);
   	return *this;
  };
  
  
  //converts to CmpiInstance
  CmpiInstance Linux_SambaAdminUsersForShareManualInstance::
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
  unsigned int Linux_SambaAdminUsersForShareManualInstance::
   isInstanceNameSet() const{
  	return isSet.instanceName;
  }
  
  const Linux_SambaAdminUsersForShareInstanceName&
    Linux_SambaAdminUsersForShareManualInstance::getInstanceName() const{

    if(!isSet.instanceName)
   	  throw CmpiErrorFormater::getErrorException(
   	   CmpiErrorFormater::NOT_SET,
   	   "InstanceName not set in Linux_SambaAdminUsersForShare instance");
  		
   	return m_instanceName;
  }

  void Linux_SambaAdminUsersForShareManualInstance::setInstanceName(
   const Linux_SambaAdminUsersForShareInstanceName& val){
    m_instanceName = val;
    isSet.instanceName=1;
  }


  
  //set isSet attributes to FALSE
  void Linux_SambaAdminUsersForShareManualInstance::init(){
   	isSet.instanceName=0;
   	  	
  };
  
  
  //copies another instance properties in this
  void Linux_SambaAdminUsersForShareManualInstance::init
   (const Linux_SambaAdminUsersForShareManualInstance& original){   	
   	init();
   	   	
    if(original.isInstanceNameSet()){
      setInstanceName(original.getInstanceName());
    }    
   }
  
  
  //reset the instance data
  void Linux_SambaAdminUsersForShareManualInstance::reset(){
   	
  	  
  };
  
  
  //*********************************************************
  //Linux_SambaAdminUsersForShareManualInstanceEnumerationElement	
  //*********************************************************
  
  Linux_SambaAdminUsersForShareManualInstanceEnumerationElement::
   Linux_SambaAdminUsersForShareManualInstanceEnumerationElement(){
   	
  	m_elementP=0;
  	m_nextP=0;
  	  
  };
  
  
  Linux_SambaAdminUsersForShareManualInstanceEnumerationElement::
   ~Linux_SambaAdminUsersForShareManualInstanceEnumerationElement(){
   	
  	if (m_elementP!=0)
  	  delete(m_elementP);
  	if (m_nextP!=0)
  	  delete(m_nextP);
  	  
  };

  
  //*********************************************************
  //Linux_SambaAdminUsersForShareManualInstanceNameEnumeration
  //*********************************************************

  Linux_SambaAdminUsersForShareManualInstanceEnumeration::
   Linux_SambaAdminUsersForShareManualInstanceEnumeration(){
   	
  	 firstElementP=0;
     currentElementP=0;
     endElementP=0;
  };
  
  Linux_SambaAdminUsersForShareManualInstanceEnumeration::
   Linux_SambaAdminUsersForShareManualInstanceEnumeration(
   const Linux_SambaAdminUsersForShareManualInstanceEnumeration& original){
   	
     firstElementP=0;
     currentElementP=0;
     endElementP=0;
  	 
     int size=original.getSize();
     for(int i=0;i<size;i++)
       addElement(original.getElement(i));           
  };
  
  	  
  Linux_SambaAdminUsersForShareManualInstanceEnumeration::
   ~Linux_SambaAdminUsersForShareManualInstanceEnumeration(){
   	
  	if (firstElementP!=0)
  	  delete(firstElementP);
  	  	
  };
  
  	  
  void Linux_SambaAdminUsersForShareManualInstanceEnumeration::reset(){
  	
  	currentElementP=firstElementP;
  };
  
  	  
  bool Linux_SambaAdminUsersForShareManualInstanceEnumeration::hasNext() const{
  	
  	return (currentElementP!=0);
  
  };
  
  int Linux_SambaAdminUsersForShareManualInstanceEnumeration::getSize() const{
  	
    int size=0;
    Linux_SambaAdminUsersForShareManualInstanceEnumerationElement* followingP=firstElementP;
  	
  	while(followingP!=0){
        followingP=followingP->m_nextP;
        size++;
    }
  	
    return size;
    
  };
  
  const Linux_SambaAdminUsersForShareManualInstance&  
   Linux_SambaAdminUsersForShareManualInstanceEnumeration::getElement(int pos) const{
   
    Linux_SambaAdminUsersForShareManualInstanceEnumerationElement* followingP=firstElementP;
   
    int i=0;
    while((followingP!=0)&&(i<pos)){
        followingP=followingP->m_nextP;
        i++;
    }
    
    return *(followingP->m_elementP);
  };
  
  	  
  const Linux_SambaAdminUsersForShareManualInstance&
   Linux_SambaAdminUsersForShareManualInstanceEnumeration::getNext() {
   	
  	 Linux_SambaAdminUsersForShareManualInstanceEnumerationElement* currentP=
  	  currentElementP;
  	 currentElementP=currentElementP->m_nextP;
  	 
  	 return *(currentP->m_elementP);
  };
  	  
  void Linux_SambaAdminUsersForShareManualInstanceEnumeration::addElement
   (const Linux_SambaAdminUsersForShareManualInstance& elementP){
   	
  	if(firstElementP==0){
  	  firstElementP=new Linux_SambaAdminUsersForShareManualInstanceEnumerationElement();
  	  firstElementP->m_elementP=new Linux_SambaAdminUsersForShareManualInstance(elementP);
  	  endElementP=firstElementP;
  	  currentElementP=firstElementP;
  	}else{
  	  endElementP->m_nextP=new Linux_SambaAdminUsersForShareManualInstanceEnumerationElement();
  	  endElementP=endElementP->m_nextP;
  	  endElementP->m_elementP=new Linux_SambaAdminUsersForShareManualInstance(elementP);
  	}
  };  
}
 
