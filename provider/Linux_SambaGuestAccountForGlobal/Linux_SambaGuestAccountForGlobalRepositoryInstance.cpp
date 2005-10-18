/**
 *  Linux_SambaGuestAccountForGlobalRepositoryInstance.cpp
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


#include "Linux_SambaGuestAccountForGlobalRepositoryInstance.h"
#include "CmpiData.h"
#include "CmpiString.h"
#include "CmpiArray.h"
#include <string>

namespace genProvider {

  //*********************************************************
  //Linux_SambaGuestAccountForGlobalRepositoryInstance
  //*********************************************************

  //empty constructor
  Linux_SambaGuestAccountForGlobalRepositoryInstance::
   Linux_SambaGuestAccountForGlobalRepositoryInstance(){   	
   	init();  	   	
  };
  
  
  //copy constructor	
  Linux_SambaGuestAccountForGlobalRepositoryInstance::
   Linux_SambaGuestAccountForGlobalRepositoryInstance
   (const Linux_SambaGuestAccountForGlobalRepositoryInstance& original){   	
   	init(original);  	   	
  };
  
  
  //constructor using CmpiInstance
  Linux_SambaGuestAccountForGlobalRepositoryInstance::
   Linux_SambaGuestAccountForGlobalRepositoryInstance (const CmpiInstance& inst, const char* instanceNamespace){
    CmpiData cmpiData;
    init(); 
    
    CmpiObjectPath cop=inst.getObjectPath();
    cop.setNameSpace(instanceNamespace);
    setInstanceName(Linux_SambaGuestAccountForGlobalInstanceName(cop));
    
  }
  
  
  //Destructor
  Linux_SambaGuestAccountForGlobalRepositoryInstance::
   ~Linux_SambaGuestAccountForGlobalRepositoryInstance(){
   	reset();  	  
  };
  
  
  //copy operator
  Linux_SambaGuestAccountForGlobalRepositoryInstance&
   Linux_SambaGuestAccountForGlobalRepositoryInstance::operator=
   (const Linux_SambaGuestAccountForGlobalRepositoryInstance& original){   	
   	init(original);
   	return *this;
  };
  
  
  //converts to CmpiInstance
  CmpiInstance Linux_SambaGuestAccountForGlobalRepositoryInstance::
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
  unsigned int Linux_SambaGuestAccountForGlobalRepositoryInstance::
   isInstanceNameSet() const{
  	return isSet.instanceName;
  }
  
  const Linux_SambaGuestAccountForGlobalInstanceName&
    Linux_SambaGuestAccountForGlobalRepositoryInstance::getInstanceName() const{

    if(!isSet.instanceName)
   	  throw CmpiErrorFormater::getErrorException(
   	   CmpiErrorFormater::NOT_SET,
   	   "InstanceName not set in Linux_SambaGuestAccountForGlobal instance");
  		
   	return m_instanceName;
  }

  void Linux_SambaGuestAccountForGlobalRepositoryInstance::setInstanceName(
   const Linux_SambaGuestAccountForGlobalInstanceName& val){
    m_instanceName = val;
    isSet.instanceName=1;
  }


  
  //set isSet attributes to FALSE
  void Linux_SambaGuestAccountForGlobalRepositoryInstance::init(){
   	isSet.instanceName=0;
   	  	
  };
  
  
  //copies another instance properties in this
  void Linux_SambaGuestAccountForGlobalRepositoryInstance::init
   (const Linux_SambaGuestAccountForGlobalRepositoryInstance& original){   	
   	init();
   	   	
    if(original.isInstanceNameSet()){
      setInstanceName(original.getInstanceName());
    }    
   }
  
  
  //reset the instance data
  void Linux_SambaGuestAccountForGlobalRepositoryInstance::reset(){
   	
  	  
  };
  
  
  //*********************************************************
  //Linux_SambaGuestAccountForGlobalRepositoryInstanceEnumerationElement	
  //*********************************************************
  
  Linux_SambaGuestAccountForGlobalRepositoryInstanceEnumerationElement::
   Linux_SambaGuestAccountForGlobalRepositoryInstanceEnumerationElement(){
   	
  	m_elementP=0;
  	m_nextP=0;
  	  
  };
  
  
  Linux_SambaGuestAccountForGlobalRepositoryInstanceEnumerationElement::
   ~Linux_SambaGuestAccountForGlobalRepositoryInstanceEnumerationElement(){
   	
  	if (m_elementP!=0)
  	  delete(m_elementP);
  	if (m_nextP!=0)
  	  delete(m_nextP);
  	  
  };

  
  //*********************************************************
  //Linux_SambaGuestAccountForGlobalRepositoryInstanceNameEnumeration
  //*********************************************************

  Linux_SambaGuestAccountForGlobalRepositoryInstanceEnumeration::
   Linux_SambaGuestAccountForGlobalRepositoryInstanceEnumeration(){
   	
  	 firstElementP=0;
     currentElementP=0;
     endElementP=0;
  };
  
  Linux_SambaGuestAccountForGlobalRepositoryInstanceEnumeration::
   Linux_SambaGuestAccountForGlobalRepositoryInstanceEnumeration(
   const Linux_SambaGuestAccountForGlobalRepositoryInstanceEnumeration& original){
   	
     firstElementP=0;
     currentElementP=0;
     endElementP=0;
  	 
     int size=original.getSize();
     for(int i=0;i<size;i++)
       addElement(original.getElement(i));           
  };
  
  	  
  Linux_SambaGuestAccountForGlobalRepositoryInstanceEnumeration::
   ~Linux_SambaGuestAccountForGlobalRepositoryInstanceEnumeration(){
   	
  	if (firstElementP!=0)
  	  delete(firstElementP);
  	  	
  };
  
  	  
  void Linux_SambaGuestAccountForGlobalRepositoryInstanceEnumeration::reset(){
  	
  	currentElementP=firstElementP;
  };
  
  	  
  bool Linux_SambaGuestAccountForGlobalRepositoryInstanceEnumeration::hasNext() const{
  	
  	return (currentElementP!=0);
  
  };
  
  int Linux_SambaGuestAccountForGlobalRepositoryInstanceEnumeration::getSize() const{
  	
    int size=0;
    Linux_SambaGuestAccountForGlobalRepositoryInstanceEnumerationElement* followingP=firstElementP;
  	
  	while(followingP!=0){
        followingP=followingP->m_nextP;
        size++;
    }
  	
    return size;
    
  };
  
  const Linux_SambaGuestAccountForGlobalRepositoryInstance&  
   Linux_SambaGuestAccountForGlobalRepositoryInstanceEnumeration::getElement(int pos) const{
   
    Linux_SambaGuestAccountForGlobalRepositoryInstanceEnumerationElement* followingP=firstElementP;
   
    int i=0;
    while((followingP!=0)&&(i<pos)){
        followingP=followingP->m_nextP;
        i++;
    }
    
    return *(followingP->m_elementP);
  };
  
  	  
  const Linux_SambaGuestAccountForGlobalRepositoryInstance&
   Linux_SambaGuestAccountForGlobalRepositoryInstanceEnumeration::getNext() {
   	
  	 Linux_SambaGuestAccountForGlobalRepositoryInstanceEnumerationElement* currentP=
  	  currentElementP;
  	 currentElementP=currentElementP->m_nextP;
  	 
  	 return *(currentP->m_elementP);
  };
  	  
  void Linux_SambaGuestAccountForGlobalRepositoryInstanceEnumeration::addElement
   (const Linux_SambaGuestAccountForGlobalRepositoryInstance& elementP){
   	
  	if(firstElementP==0){
  	  firstElementP=new Linux_SambaGuestAccountForGlobalRepositoryInstanceEnumerationElement();
  	  firstElementP->m_elementP=new Linux_SambaGuestAccountForGlobalRepositoryInstance(elementP);
  	  endElementP=firstElementP;
  	  currentElementP=firstElementP;
  	}else{
  	  endElementP->m_nextP=new Linux_SambaGuestAccountForGlobalRepositoryInstanceEnumerationElement();
  	  endElementP=endElementP->m_nextP;
  	  endElementP->m_elementP=new Linux_SambaGuestAccountForGlobalRepositoryInstance(elementP);
  	}
  };  
}
 
