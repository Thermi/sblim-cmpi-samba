/**
 *  Linux_SambaAdminUsersForShareInstance.cpp
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


#include "Linux_SambaAdminUsersForShareInstance.h"
#include "CmpiData.h"
#include "CmpiString.h"
#include "CmpiArray.h"
#include <string>

namespace genProvider {

  //*********************************************************
  //Linux_SambaAdminUsersForShareInstance
  //*********************************************************

  //empty constructor
  Linux_SambaAdminUsersForShareInstance::
   Linux_SambaAdminUsersForShareInstance(){   	
   	init();  	   	
  };
  
  
  //copy constructor	
  Linux_SambaAdminUsersForShareInstance::
   Linux_SambaAdminUsersForShareInstance
   (const Linux_SambaAdminUsersForShareInstance& original){   	
   	init(original);  	   	
  };
  
  
  //constructor using CmpiInstance
  Linux_SambaAdminUsersForShareInstance::
   Linux_SambaAdminUsersForShareInstance (const CmpiInstance& inst, const char* instanceNamespace){
    CmpiData cmpiData;
    init(); 
    
    CmpiObjectPath cop=inst.getObjectPath();
    cop.setNameSpace(instanceNamespace);
    setInstanceName(Linux_SambaAdminUsersForShareInstanceName(cop));
    
  }
  
  
  //Destructor
  Linux_SambaAdminUsersForShareInstance::
   ~Linux_SambaAdminUsersForShareInstance(){
   	reset();  	  
  };
  
  
  //copy operator
  Linux_SambaAdminUsersForShareInstance&
   Linux_SambaAdminUsersForShareInstance::operator=
   (const Linux_SambaAdminUsersForShareInstance& original){   	
   	init(original);
   	return *this;
  };
  
  
  //converts to CmpiInstance
  CmpiInstance Linux_SambaAdminUsersForShareInstance::
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
  unsigned int Linux_SambaAdminUsersForShareInstance::
   isInstanceNameSet() const{
  	return isSet.instanceName;
  }
  
  const Linux_SambaAdminUsersForShareInstanceName&
    Linux_SambaAdminUsersForShareInstance::getInstanceName() const{

    if(!isSet.instanceName)
   	  throw CmpiErrorFormater::getErrorException(
   	   CmpiErrorFormater::NOT_SET,
   	   "InstanceName not set in Linux_SambaAdminUsersForShare instance");
  		
   	return m_instanceName;
  }

  void Linux_SambaAdminUsersForShareInstance::setInstanceName(
   const Linux_SambaAdminUsersForShareInstanceName& val){
    m_instanceName = val;
    isSet.instanceName=1;
  }


  
  //set isSet attributes to FALSE
  void Linux_SambaAdminUsersForShareInstance::init(){
   	isSet.instanceName=0;
   	  	
  };
  
  
  //copies another instance properties in this
  void Linux_SambaAdminUsersForShareInstance::init
   (const Linux_SambaAdminUsersForShareInstance& original){   	
   	init();
   	   	
    if(original.isInstanceNameSet()){
      setInstanceName(original.getInstanceName());
    }    
   }
  
  
  //reset the instance data
  void Linux_SambaAdminUsersForShareInstance::reset(){
   	
  	  
  };
  
  
  //*********************************************************
  //Linux_SambaAdminUsersForShareInstanceEnumerationElement	
  //*********************************************************
  
  Linux_SambaAdminUsersForShareInstanceEnumerationElement::
   Linux_SambaAdminUsersForShareInstanceEnumerationElement(){
   	
  	m_elementP=0;
  	m_nextP=0;
  	  
  };
  
  
  Linux_SambaAdminUsersForShareInstanceEnumerationElement::
   ~Linux_SambaAdminUsersForShareInstanceEnumerationElement(){
   	
  	if (m_elementP!=0)
  	  delete(m_elementP);
  	if (m_nextP!=0)
  	  delete(m_nextP);
  	  
  };

  
  //*********************************************************
  //Linux_SambaAdminUsersForShareInstanceNameEnumeration
  //*********************************************************

  Linux_SambaAdminUsersForShareInstanceEnumeration::
   Linux_SambaAdminUsersForShareInstanceEnumeration(){
   	
  	 firstElementP=0;
     currentElementP=0;
     endElementP=0;
  };
  
  Linux_SambaAdminUsersForShareInstanceEnumeration::
   Linux_SambaAdminUsersForShareInstanceEnumeration(
   const Linux_SambaAdminUsersForShareInstanceEnumeration& original){
   	
     firstElementP=0;
     currentElementP=0;
     endElementP=0;
  	 
     int size=original.getSize();
     for(int i=0;i<size;i++)
       addElement(original.getElement(i));           
  };
  
  	  
  Linux_SambaAdminUsersForShareInstanceEnumeration::
   ~Linux_SambaAdminUsersForShareInstanceEnumeration(){
   	
  	if (firstElementP!=0)
  	  delete(firstElementP);
  	  	
  };
  
  	  
  void Linux_SambaAdminUsersForShareInstanceEnumeration::reset(){
  	
  	currentElementP=firstElementP;
  };
  
  	  
  bool Linux_SambaAdminUsersForShareInstanceEnumeration::hasNext() const{
  	
  	return (currentElementP!=0);
  
  };
  
  int Linux_SambaAdminUsersForShareInstanceEnumeration::getSize() const{
  	
    int size=0;
    Linux_SambaAdminUsersForShareInstanceEnumerationElement* followingP=firstElementP;
  	
  	while(followingP!=0){
        followingP=followingP->m_nextP;
        size++;
    }
  	
    return size;
    
  };
  
  const Linux_SambaAdminUsersForShareInstance&  
   Linux_SambaAdminUsersForShareInstanceEnumeration::getElement(int pos) const{
   
    Linux_SambaAdminUsersForShareInstanceEnumerationElement* followingP=firstElementP;
   
    int i=0;
    while((followingP!=0)&&(i<pos)){
        followingP=followingP->m_nextP;
        i++;
    }
    
    return *(followingP->m_elementP);
  };
  
  	  
  const Linux_SambaAdminUsersForShareInstance&
   Linux_SambaAdminUsersForShareInstanceEnumeration::getNext() {
   	
  	 Linux_SambaAdminUsersForShareInstanceEnumerationElement* currentP=
  	  currentElementP;
  	 currentElementP=currentElementP->m_nextP;
  	 
  	 return *(currentP->m_elementP);
  };
  	  
  void Linux_SambaAdminUsersForShareInstanceEnumeration::addElement
   (const Linux_SambaAdminUsersForShareInstance& elementP){
   	
  	if(firstElementP==0){
  	  firstElementP=new Linux_SambaAdminUsersForShareInstanceEnumerationElement();
  	  firstElementP->m_elementP=new Linux_SambaAdminUsersForShareInstance(elementP);
  	  endElementP=firstElementP;
  	  currentElementP=firstElementP;
  	}else{
  	  endElementP->m_nextP=new Linux_SambaAdminUsersForShareInstanceEnumerationElement();
  	  endElementP=endElementP->m_nextP;
  	  endElementP->m_elementP=new Linux_SambaAdminUsersForShareInstance(elementP);
  	}
  };  
}
 
