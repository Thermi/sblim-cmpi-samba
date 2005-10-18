/**
 *  Linux_SambaInvalidUsersForGlobalRepositoryInstance.cpp
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


#include "Linux_SambaInvalidUsersForGlobalRepositoryInstance.h"
#include "CmpiData.h"
#include "CmpiString.h"
#include "CmpiArray.h"
#include <string>

namespace genProvider {

  //*********************************************************
  //Linux_SambaInvalidUsersForGlobalRepositoryInstance
  //*********************************************************

  //empty constructor
  Linux_SambaInvalidUsersForGlobalRepositoryInstance::
   Linux_SambaInvalidUsersForGlobalRepositoryInstance(){   	
   	init();  	   	
  };
  
  
  //copy constructor	
  Linux_SambaInvalidUsersForGlobalRepositoryInstance::
   Linux_SambaInvalidUsersForGlobalRepositoryInstance
   (const Linux_SambaInvalidUsersForGlobalRepositoryInstance& original){   	
   	init(original);  	   	
  };
  
  
  //constructor using CmpiInstance
  Linux_SambaInvalidUsersForGlobalRepositoryInstance::
   Linux_SambaInvalidUsersForGlobalRepositoryInstance (const CmpiInstance& inst, const char* instanceNamespace){
    CmpiData cmpiData;
    init(); 
    
    CmpiObjectPath cop=inst.getObjectPath();
    cop.setNameSpace(instanceNamespace);
    setInstanceName(Linux_SambaInvalidUsersForGlobalInstanceName(cop));
    
  }
  
  
  //Destructor
  Linux_SambaInvalidUsersForGlobalRepositoryInstance::
   ~Linux_SambaInvalidUsersForGlobalRepositoryInstance(){
   	reset();  	  
  };
  
  
  //copy operator
  Linux_SambaInvalidUsersForGlobalRepositoryInstance&
   Linux_SambaInvalidUsersForGlobalRepositoryInstance::operator=
   (const Linux_SambaInvalidUsersForGlobalRepositoryInstance& original){   	
   	init(original);
   	return *this;
  };
  
  
  //converts to CmpiInstance
  CmpiInstance Linux_SambaInvalidUsersForGlobalRepositoryInstance::
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
  unsigned int Linux_SambaInvalidUsersForGlobalRepositoryInstance::
   isInstanceNameSet() const{
  	return isSet.instanceName;
  }
  
  const Linux_SambaInvalidUsersForGlobalInstanceName&
    Linux_SambaInvalidUsersForGlobalRepositoryInstance::getInstanceName() const{

    if(!isSet.instanceName)
   	  throw CmpiErrorFormater::getErrorException(
   	   CmpiErrorFormater::NOT_SET,
   	   "InstanceName not set in Linux_SambaInvalidUsersForGlobal instance");
  		
   	return m_instanceName;
  }

  void Linux_SambaInvalidUsersForGlobalRepositoryInstance::setInstanceName(
   const Linux_SambaInvalidUsersForGlobalInstanceName& val){
    m_instanceName = val;
    isSet.instanceName=1;
  }


  
  //set isSet attributes to FALSE
  void Linux_SambaInvalidUsersForGlobalRepositoryInstance::init(){
   	isSet.instanceName=0;
   	  	
  };
  
  
  //copies another instance properties in this
  void Linux_SambaInvalidUsersForGlobalRepositoryInstance::init
   (const Linux_SambaInvalidUsersForGlobalRepositoryInstance& original){   	
   	init();
   	   	
    if(original.isInstanceNameSet()){
      setInstanceName(original.getInstanceName());
    }    
   }
  
  
  //reset the instance data
  void Linux_SambaInvalidUsersForGlobalRepositoryInstance::reset(){
   	
  	  
  };
  
  
  //*********************************************************
  //Linux_SambaInvalidUsersForGlobalRepositoryInstanceEnumerationElement	
  //*********************************************************
  
  Linux_SambaInvalidUsersForGlobalRepositoryInstanceEnumerationElement::
   Linux_SambaInvalidUsersForGlobalRepositoryInstanceEnumerationElement(){
   	
  	m_elementP=0;
  	m_nextP=0;
  	  
  };
  
  
  Linux_SambaInvalidUsersForGlobalRepositoryInstanceEnumerationElement::
   ~Linux_SambaInvalidUsersForGlobalRepositoryInstanceEnumerationElement(){
   	
  	if (m_elementP!=0)
  	  delete(m_elementP);
  	if (m_nextP!=0)
  	  delete(m_nextP);
  	  
  };

  
  //*********************************************************
  //Linux_SambaInvalidUsersForGlobalRepositoryInstanceNameEnumeration
  //*********************************************************

  Linux_SambaInvalidUsersForGlobalRepositoryInstanceEnumeration::
   Linux_SambaInvalidUsersForGlobalRepositoryInstanceEnumeration(){
   	
  	 firstElementP=0;
     currentElementP=0;
     endElementP=0;
  };
  
  Linux_SambaInvalidUsersForGlobalRepositoryInstanceEnumeration::
   Linux_SambaInvalidUsersForGlobalRepositoryInstanceEnumeration(
   const Linux_SambaInvalidUsersForGlobalRepositoryInstanceEnumeration& original){
   	
     firstElementP=0;
     currentElementP=0;
     endElementP=0;
  	 
     int size=original.getSize();
     for(int i=0;i<size;i++)
       addElement(original.getElement(i));           
  };
  
  	  
  Linux_SambaInvalidUsersForGlobalRepositoryInstanceEnumeration::
   ~Linux_SambaInvalidUsersForGlobalRepositoryInstanceEnumeration(){
   	
  	if (firstElementP!=0)
  	  delete(firstElementP);
  	  	
  };
  
  	  
  void Linux_SambaInvalidUsersForGlobalRepositoryInstanceEnumeration::reset(){
  	
  	currentElementP=firstElementP;
  };
  
  	  
  bool Linux_SambaInvalidUsersForGlobalRepositoryInstanceEnumeration::hasNext() const{
  	
  	return (currentElementP!=0);
  
  };
  
  int Linux_SambaInvalidUsersForGlobalRepositoryInstanceEnumeration::getSize() const{
  	
    int size=0;
    Linux_SambaInvalidUsersForGlobalRepositoryInstanceEnumerationElement* followingP=firstElementP;
  	
  	while(followingP!=0){
        followingP=followingP->m_nextP;
        size++;
    }
  	
    return size;
    
  };
  
  const Linux_SambaInvalidUsersForGlobalRepositoryInstance&  
   Linux_SambaInvalidUsersForGlobalRepositoryInstanceEnumeration::getElement(int pos) const{
   
    Linux_SambaInvalidUsersForGlobalRepositoryInstanceEnumerationElement* followingP=firstElementP;
   
    int i=0;
    while((followingP!=0)&&(i<pos)){
        followingP=followingP->m_nextP;
        i++;
    }
    
    return *(followingP->m_elementP);
  };
  
  	  
  const Linux_SambaInvalidUsersForGlobalRepositoryInstance&
   Linux_SambaInvalidUsersForGlobalRepositoryInstanceEnumeration::getNext() {
   	
  	 Linux_SambaInvalidUsersForGlobalRepositoryInstanceEnumerationElement* currentP=
  	  currentElementP;
  	 currentElementP=currentElementP->m_nextP;
  	 
  	 return *(currentP->m_elementP);
  };
  	  
  void Linux_SambaInvalidUsersForGlobalRepositoryInstanceEnumeration::addElement
   (const Linux_SambaInvalidUsersForGlobalRepositoryInstance& elementP){
   	
  	if(firstElementP==0){
  	  firstElementP=new Linux_SambaInvalidUsersForGlobalRepositoryInstanceEnumerationElement();
  	  firstElementP->m_elementP=new Linux_SambaInvalidUsersForGlobalRepositoryInstance(elementP);
  	  endElementP=firstElementP;
  	  currentElementP=firstElementP;
  	}else{
  	  endElementP->m_nextP=new Linux_SambaInvalidUsersForGlobalRepositoryInstanceEnumerationElement();
  	  endElementP=endElementP->m_nextP;
  	  endElementP->m_elementP=new Linux_SambaInvalidUsersForGlobalRepositoryInstance(elementP);
  	}
  };  
}
 
