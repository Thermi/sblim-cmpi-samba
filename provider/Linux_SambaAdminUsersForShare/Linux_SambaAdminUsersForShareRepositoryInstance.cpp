/**
 *  Linux_SambaAdminUsersForShareRepositoryInstance.cpp
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


#include "Linux_SambaAdminUsersForShareRepositoryInstance.h"
#include "CmpiData.h"
#include "CmpiString.h"
#include "CmpiArray.h"
#include <string>

namespace genProvider {

  //*********************************************************
  //Linux_SambaAdminUsersForShareRepositoryInstance
  //*********************************************************

  //empty constructor
  Linux_SambaAdminUsersForShareRepositoryInstance::
   Linux_SambaAdminUsersForShareRepositoryInstance(){   	
   	init();  	   	
  };
  
  
  //copy constructor	
  Linux_SambaAdminUsersForShareRepositoryInstance::
   Linux_SambaAdminUsersForShareRepositoryInstance
   (const Linux_SambaAdminUsersForShareRepositoryInstance& original){   	
   	init(original);  	   	
  };
  
  
  //constructor using CmpiInstance
  Linux_SambaAdminUsersForShareRepositoryInstance::
   Linux_SambaAdminUsersForShareRepositoryInstance (const CmpiInstance& inst, const char* instanceNamespace){
    CmpiData cmpiData;
    init(); 
    
    CmpiObjectPath cop=inst.getObjectPath();
    cop.setNameSpace(instanceNamespace);
    setInstanceName(Linux_SambaAdminUsersForShareInstanceName(cop));
    
  }
  
  
  //Destructor
  Linux_SambaAdminUsersForShareRepositoryInstance::
   ~Linux_SambaAdminUsersForShareRepositoryInstance(){
   	reset();  	  
  };
  
  
  //copy operator
  Linux_SambaAdminUsersForShareRepositoryInstance&
   Linux_SambaAdminUsersForShareRepositoryInstance::operator=
   (const Linux_SambaAdminUsersForShareRepositoryInstance& original){   	
   	init(original);
   	return *this;
  };
  
  
  //converts to CmpiInstance
  CmpiInstance Linux_SambaAdminUsersForShareRepositoryInstance::
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
  unsigned int Linux_SambaAdminUsersForShareRepositoryInstance::
   isInstanceNameSet() const{
  	return isSet.instanceName;
  }
  
  const Linux_SambaAdminUsersForShareInstanceName&
    Linux_SambaAdminUsersForShareRepositoryInstance::getInstanceName() const{

    if(!isSet.instanceName)
   	  throw CmpiErrorFormater::getErrorException(
   	   CmpiErrorFormater::NOT_SET,
   	   "InstanceName not set in Linux_SambaAdminUsersForShare instance");
  		
   	return m_instanceName;
  }

  void Linux_SambaAdminUsersForShareRepositoryInstance::setInstanceName(
   const Linux_SambaAdminUsersForShareInstanceName& val){
    m_instanceName = val;
    isSet.instanceName=1;
  }


  
  //set isSet attributes to FALSE
  void Linux_SambaAdminUsersForShareRepositoryInstance::init(){
   	isSet.instanceName=0;
   	  	
  };
  
  
  //copies another instance properties in this
  void Linux_SambaAdminUsersForShareRepositoryInstance::init
   (const Linux_SambaAdminUsersForShareRepositoryInstance& original){   	
   	init();
   	   	
    if(original.isInstanceNameSet()){
      setInstanceName(original.getInstanceName());
    }    
   }
  
  
  //reset the instance data
  void Linux_SambaAdminUsersForShareRepositoryInstance::reset(){
   	
  	  
  };
  
  
  //*********************************************************
  //Linux_SambaAdminUsersForShareRepositoryInstanceEnumerationElement	
  //*********************************************************
  
  Linux_SambaAdminUsersForShareRepositoryInstanceEnumerationElement::
   Linux_SambaAdminUsersForShareRepositoryInstanceEnumerationElement(){
   	
  	m_elementP=0;
  	m_nextP=0;
  	  
  };
  
  
  Linux_SambaAdminUsersForShareRepositoryInstanceEnumerationElement::
   ~Linux_SambaAdminUsersForShareRepositoryInstanceEnumerationElement(){
   	
  	if (m_elementP!=0)
  	  delete(m_elementP);
  	if (m_nextP!=0)
  	  delete(m_nextP);
  	  
  };

  
  //*********************************************************
  //Linux_SambaAdminUsersForShareRepositoryInstanceNameEnumeration
  //*********************************************************

  Linux_SambaAdminUsersForShareRepositoryInstanceEnumeration::
   Linux_SambaAdminUsersForShareRepositoryInstanceEnumeration(){
   	
  	 firstElementP=0;
     currentElementP=0;
     endElementP=0;
  };
  
  Linux_SambaAdminUsersForShareRepositoryInstanceEnumeration::
   Linux_SambaAdminUsersForShareRepositoryInstanceEnumeration(
   const Linux_SambaAdminUsersForShareRepositoryInstanceEnumeration& original){
   	
     firstElementP=0;
     currentElementP=0;
     endElementP=0;
  	 
     int size=original.getSize();
     for(int i=0;i<size;i++)
       addElement(original.getElement(i));           
  };
  
  	  
  Linux_SambaAdminUsersForShareRepositoryInstanceEnumeration::
   ~Linux_SambaAdminUsersForShareRepositoryInstanceEnumeration(){
   	
  	if (firstElementP!=0)
  	  delete(firstElementP);
  	  	
  };
  
  	  
  void Linux_SambaAdminUsersForShareRepositoryInstanceEnumeration::reset(){
  	
  	currentElementP=firstElementP;
  };
  
  	  
  bool Linux_SambaAdminUsersForShareRepositoryInstanceEnumeration::hasNext() const{
  	
  	return (currentElementP!=0);
  
  };
  
  int Linux_SambaAdminUsersForShareRepositoryInstanceEnumeration::getSize() const{
  	
    int size=0;
    Linux_SambaAdminUsersForShareRepositoryInstanceEnumerationElement* followingP=firstElementP;
  	
  	while(followingP!=0){
        followingP=followingP->m_nextP;
        size++;
    }
  	
    return size;
    
  };
  
  const Linux_SambaAdminUsersForShareRepositoryInstance&  
   Linux_SambaAdminUsersForShareRepositoryInstanceEnumeration::getElement(int pos) const{
   
    Linux_SambaAdminUsersForShareRepositoryInstanceEnumerationElement* followingP=firstElementP;
   
    int i=0;
    while((followingP!=0)&&(i<pos)){
        followingP=followingP->m_nextP;
        i++;
    }
    
    return *(followingP->m_elementP);
  };
  
  	  
  const Linux_SambaAdminUsersForShareRepositoryInstance&
   Linux_SambaAdminUsersForShareRepositoryInstanceEnumeration::getNext() {
   	
  	 Linux_SambaAdminUsersForShareRepositoryInstanceEnumerationElement* currentP=
  	  currentElementP;
  	 currentElementP=currentElementP->m_nextP;
  	 
  	 return *(currentP->m_elementP);
  };
  	  
  void Linux_SambaAdminUsersForShareRepositoryInstanceEnumeration::addElement
   (const Linux_SambaAdminUsersForShareRepositoryInstance& elementP){
   	
  	if(firstElementP==0){
  	  firstElementP=new Linux_SambaAdminUsersForShareRepositoryInstanceEnumerationElement();
  	  firstElementP->m_elementP=new Linux_SambaAdminUsersForShareRepositoryInstance(elementP);
  	  endElementP=firstElementP;
  	  currentElementP=firstElementP;
  	}else{
  	  endElementP->m_nextP=new Linux_SambaAdminUsersForShareRepositoryInstanceEnumerationElement();
  	  endElementP=endElementP->m_nextP;
  	  endElementP->m_elementP=new Linux_SambaAdminUsersForShareRepositoryInstance(elementP);
  	}
  };  
}
 
