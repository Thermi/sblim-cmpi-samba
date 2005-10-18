/**
 *  Linux_SambaAdminUsersForGlobalRepositoryInstance.cpp
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


#include "Linux_SambaAdminUsersForGlobalRepositoryInstance.h"
#include "CmpiData.h"
#include "CmpiString.h"
#include "CmpiArray.h"
#include <string>

namespace genProvider {

  //*********************************************************
  //Linux_SambaAdminUsersForGlobalRepositoryInstance
  //*********************************************************

  //empty constructor
  Linux_SambaAdminUsersForGlobalRepositoryInstance::
   Linux_SambaAdminUsersForGlobalRepositoryInstance(){   	
   	init();  	   	
  };
  
  
  //copy constructor	
  Linux_SambaAdminUsersForGlobalRepositoryInstance::
   Linux_SambaAdminUsersForGlobalRepositoryInstance
   (const Linux_SambaAdminUsersForGlobalRepositoryInstance& original){   	
   	init(original);  	   	
  };
  
  
  //constructor using CmpiInstance
  Linux_SambaAdminUsersForGlobalRepositoryInstance::
   Linux_SambaAdminUsersForGlobalRepositoryInstance (const CmpiInstance& inst, const char* instanceNamespace){
    CmpiData cmpiData;
    init(); 
    
    CmpiObjectPath cop=inst.getObjectPath();
    cop.setNameSpace(instanceNamespace);
    setInstanceName(Linux_SambaAdminUsersForGlobalInstanceName(cop));
    
  }
  
  
  //Destructor
  Linux_SambaAdminUsersForGlobalRepositoryInstance::
   ~Linux_SambaAdminUsersForGlobalRepositoryInstance(){
   	reset();  	  
  };
  
  
  //copy operator
  Linux_SambaAdminUsersForGlobalRepositoryInstance&
   Linux_SambaAdminUsersForGlobalRepositoryInstance::operator=
   (const Linux_SambaAdminUsersForGlobalRepositoryInstance& original){   	
   	init(original);
   	return *this;
  };
  
  
  //converts to CmpiInstance
  CmpiInstance Linux_SambaAdminUsersForGlobalRepositoryInstance::
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
  unsigned int Linux_SambaAdminUsersForGlobalRepositoryInstance::
   isInstanceNameSet() const{
  	return isSet.instanceName;
  }
  
  const Linux_SambaAdminUsersForGlobalInstanceName&
    Linux_SambaAdminUsersForGlobalRepositoryInstance::getInstanceName() const{

    if(!isSet.instanceName)
   	  throw CmpiErrorFormater::getErrorException(
   	   CmpiErrorFormater::NOT_SET,
   	   "InstanceName not set in Linux_SambaAdminUsersForGlobal instance");
  		
   	return m_instanceName;
  }

  void Linux_SambaAdminUsersForGlobalRepositoryInstance::setInstanceName(
   const Linux_SambaAdminUsersForGlobalInstanceName& val){
    m_instanceName = val;
    isSet.instanceName=1;
  }


  
  //set isSet attributes to FALSE
  void Linux_SambaAdminUsersForGlobalRepositoryInstance::init(){
   	isSet.instanceName=0;
   	  	
  };
  
  
  //copies another instance properties in this
  void Linux_SambaAdminUsersForGlobalRepositoryInstance::init
   (const Linux_SambaAdminUsersForGlobalRepositoryInstance& original){   	
   	init();
   	   	
    if(original.isInstanceNameSet()){
      setInstanceName(original.getInstanceName());
    }    
   }
  
  
  //reset the instance data
  void Linux_SambaAdminUsersForGlobalRepositoryInstance::reset(){
   	
  	  
  };
  
  
  //*********************************************************
  //Linux_SambaAdminUsersForGlobalRepositoryInstanceEnumerationElement	
  //*********************************************************
  
  Linux_SambaAdminUsersForGlobalRepositoryInstanceEnumerationElement::
   Linux_SambaAdminUsersForGlobalRepositoryInstanceEnumerationElement(){
   	
  	m_elementP=0;
  	m_nextP=0;
  	  
  };
  
  
  Linux_SambaAdminUsersForGlobalRepositoryInstanceEnumerationElement::
   ~Linux_SambaAdminUsersForGlobalRepositoryInstanceEnumerationElement(){
   	
  	if (m_elementP!=0)
  	  delete(m_elementP);
  	if (m_nextP!=0)
  	  delete(m_nextP);
  	  
  };

  
  //*********************************************************
  //Linux_SambaAdminUsersForGlobalRepositoryInstanceNameEnumeration
  //*********************************************************

  Linux_SambaAdminUsersForGlobalRepositoryInstanceEnumeration::
   Linux_SambaAdminUsersForGlobalRepositoryInstanceEnumeration(){
   	
  	 firstElementP=0;
     currentElementP=0;
     endElementP=0;
  };
  
  Linux_SambaAdminUsersForGlobalRepositoryInstanceEnumeration::
   Linux_SambaAdminUsersForGlobalRepositoryInstanceEnumeration(
   const Linux_SambaAdminUsersForGlobalRepositoryInstanceEnumeration& original){
   	
     firstElementP=0;
     currentElementP=0;
     endElementP=0;
  	 
     int size=original.getSize();
     for(int i=0;i<size;i++)
       addElement(original.getElement(i));           
  };
  
  	  
  Linux_SambaAdminUsersForGlobalRepositoryInstanceEnumeration::
   ~Linux_SambaAdminUsersForGlobalRepositoryInstanceEnumeration(){
   	
  	if (firstElementP!=0)
  	  delete(firstElementP);
  	  	
  };
  
  	  
  void Linux_SambaAdminUsersForGlobalRepositoryInstanceEnumeration::reset(){
  	
  	currentElementP=firstElementP;
  };
  
  	  
  bool Linux_SambaAdminUsersForGlobalRepositoryInstanceEnumeration::hasNext() const{
  	
  	return (currentElementP!=0);
  
  };
  
  int Linux_SambaAdminUsersForGlobalRepositoryInstanceEnumeration::getSize() const{
  	
    int size=0;
    Linux_SambaAdminUsersForGlobalRepositoryInstanceEnumerationElement* followingP=firstElementP;
  	
  	while(followingP!=0){
        followingP=followingP->m_nextP;
        size++;
    }
  	
    return size;
    
  };
  
  const Linux_SambaAdminUsersForGlobalRepositoryInstance&  
   Linux_SambaAdminUsersForGlobalRepositoryInstanceEnumeration::getElement(int pos) const{
   
    Linux_SambaAdminUsersForGlobalRepositoryInstanceEnumerationElement* followingP=firstElementP;
   
    int i=0;
    while((followingP!=0)&&(i<pos)){
        followingP=followingP->m_nextP;
        i++;
    }
    
    return *(followingP->m_elementP);
  };
  
  	  
  const Linux_SambaAdminUsersForGlobalRepositoryInstance&
   Linux_SambaAdminUsersForGlobalRepositoryInstanceEnumeration::getNext() {
   	
  	 Linux_SambaAdminUsersForGlobalRepositoryInstanceEnumerationElement* currentP=
  	  currentElementP;
  	 currentElementP=currentElementP->m_nextP;
  	 
  	 return *(currentP->m_elementP);
  };
  	  
  void Linux_SambaAdminUsersForGlobalRepositoryInstanceEnumeration::addElement
   (const Linux_SambaAdminUsersForGlobalRepositoryInstance& elementP){
   	
  	if(firstElementP==0){
  	  firstElementP=new Linux_SambaAdminUsersForGlobalRepositoryInstanceEnumerationElement();
  	  firstElementP->m_elementP=new Linux_SambaAdminUsersForGlobalRepositoryInstance(elementP);
  	  endElementP=firstElementP;
  	  currentElementP=firstElementP;
  	}else{
  	  endElementP->m_nextP=new Linux_SambaAdminUsersForGlobalRepositoryInstanceEnumerationElement();
  	  endElementP=endElementP->m_nextP;
  	  endElementP->m_elementP=new Linux_SambaAdminUsersForGlobalRepositoryInstance(elementP);
  	}
  };  
}
 
