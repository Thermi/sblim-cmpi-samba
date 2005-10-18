/**
 *  Linux_SambaForceUserForShareRepositoryInstance.cpp
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


#include "Linux_SambaForceUserForShareRepositoryInstance.h"
#include "CmpiData.h"
#include "CmpiString.h"
#include "CmpiArray.h"
#include <string>

namespace genProvider {

  //*********************************************************
  //Linux_SambaForceUserForShareRepositoryInstance
  //*********************************************************

  //empty constructor
  Linux_SambaForceUserForShareRepositoryInstance::
   Linux_SambaForceUserForShareRepositoryInstance(){   	
   	init();  	   	
  };
  
  
  //copy constructor	
  Linux_SambaForceUserForShareRepositoryInstance::
   Linux_SambaForceUserForShareRepositoryInstance
   (const Linux_SambaForceUserForShareRepositoryInstance& original){   	
   	init(original);  	   	
  };
  
  
  //constructor using CmpiInstance
  Linux_SambaForceUserForShareRepositoryInstance::
   Linux_SambaForceUserForShareRepositoryInstance (const CmpiInstance& inst, const char* instanceNamespace){
    CmpiData cmpiData;
    init(); 
    
    CmpiObjectPath cop=inst.getObjectPath();
    cop.setNameSpace(instanceNamespace);
    setInstanceName(Linux_SambaForceUserForShareInstanceName(cop));
    
  }
  
  
  //Destructor
  Linux_SambaForceUserForShareRepositoryInstance::
   ~Linux_SambaForceUserForShareRepositoryInstance(){
   	reset();  	  
  };
  
  
  //copy operator
  Linux_SambaForceUserForShareRepositoryInstance&
   Linux_SambaForceUserForShareRepositoryInstance::operator=
   (const Linux_SambaForceUserForShareRepositoryInstance& original){   	
   	init(original);
   	return *this;
  };
  
  
  //converts to CmpiInstance
  CmpiInstance Linux_SambaForceUserForShareRepositoryInstance::
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
  unsigned int Linux_SambaForceUserForShareRepositoryInstance::
   isInstanceNameSet() const{
  	return isSet.instanceName;
  }
  
  const Linux_SambaForceUserForShareInstanceName&
    Linux_SambaForceUserForShareRepositoryInstance::getInstanceName() const{

    if(!isSet.instanceName)
   	  throw CmpiErrorFormater::getErrorException(
   	   CmpiErrorFormater::NOT_SET,
   	   "InstanceName not set in Linux_SambaForceUserForShare instance");
  		
   	return m_instanceName;
  }

  void Linux_SambaForceUserForShareRepositoryInstance::setInstanceName(
   const Linux_SambaForceUserForShareInstanceName& val){
    m_instanceName = val;
    isSet.instanceName=1;
  }


  
  //set isSet attributes to FALSE
  void Linux_SambaForceUserForShareRepositoryInstance::init(){
   	isSet.instanceName=0;
   	  	
  };
  
  
  //copies another instance properties in this
  void Linux_SambaForceUserForShareRepositoryInstance::init
   (const Linux_SambaForceUserForShareRepositoryInstance& original){   	
   	init();
   	   	
    if(original.isInstanceNameSet()){
      setInstanceName(original.getInstanceName());
    }    
   }
  
  
  //reset the instance data
  void Linux_SambaForceUserForShareRepositoryInstance::reset(){
   	
  	  
  };
  
  
  //*********************************************************
  //Linux_SambaForceUserForShareRepositoryInstanceEnumerationElement	
  //*********************************************************
  
  Linux_SambaForceUserForShareRepositoryInstanceEnumerationElement::
   Linux_SambaForceUserForShareRepositoryInstanceEnumerationElement(){
   	
  	m_elementP=0;
  	m_nextP=0;
  	  
  };
  
  
  Linux_SambaForceUserForShareRepositoryInstanceEnumerationElement::
   ~Linux_SambaForceUserForShareRepositoryInstanceEnumerationElement(){
   	
  	if (m_elementP!=0)
  	  delete(m_elementP);
  	if (m_nextP!=0)
  	  delete(m_nextP);
  	  
  };

  
  //*********************************************************
  //Linux_SambaForceUserForShareRepositoryInstanceNameEnumeration
  //*********************************************************

  Linux_SambaForceUserForShareRepositoryInstanceEnumeration::
   Linux_SambaForceUserForShareRepositoryInstanceEnumeration(){
   	
  	 firstElementP=0;
     currentElementP=0;
     endElementP=0;
  };
  
  Linux_SambaForceUserForShareRepositoryInstanceEnumeration::
   Linux_SambaForceUserForShareRepositoryInstanceEnumeration(
   const Linux_SambaForceUserForShareRepositoryInstanceEnumeration& original){
   	
     firstElementP=0;
     currentElementP=0;
     endElementP=0;
  	 
     int size=original.getSize();
     for(int i=0;i<size;i++)
       addElement(original.getElement(i));           
  };
  
  	  
  Linux_SambaForceUserForShareRepositoryInstanceEnumeration::
   ~Linux_SambaForceUserForShareRepositoryInstanceEnumeration(){
   	
  	if (firstElementP!=0)
  	  delete(firstElementP);
  	  	
  };
  
  	  
  void Linux_SambaForceUserForShareRepositoryInstanceEnumeration::reset(){
  	
  	currentElementP=firstElementP;
  };
  
  	  
  bool Linux_SambaForceUserForShareRepositoryInstanceEnumeration::hasNext() const{
  	
  	return (currentElementP!=0);
  
  };
  
  int Linux_SambaForceUserForShareRepositoryInstanceEnumeration::getSize() const{
  	
    int size=0;
    Linux_SambaForceUserForShareRepositoryInstanceEnumerationElement* followingP=firstElementP;
  	
  	while(followingP!=0){
        followingP=followingP->m_nextP;
        size++;
    }
  	
    return size;
    
  };
  
  const Linux_SambaForceUserForShareRepositoryInstance&  
   Linux_SambaForceUserForShareRepositoryInstanceEnumeration::getElement(int pos) const{
   
    Linux_SambaForceUserForShareRepositoryInstanceEnumerationElement* followingP=firstElementP;
   
    int i=0;
    while((followingP!=0)&&(i<pos)){
        followingP=followingP->m_nextP;
        i++;
    }
    
    return *(followingP->m_elementP);
  };
  
  	  
  const Linux_SambaForceUserForShareRepositoryInstance&
   Linux_SambaForceUserForShareRepositoryInstanceEnumeration::getNext() {
   	
  	 Linux_SambaForceUserForShareRepositoryInstanceEnumerationElement* currentP=
  	  currentElementP;
  	 currentElementP=currentElementP->m_nextP;
  	 
  	 return *(currentP->m_elementP);
  };
  	  
  void Linux_SambaForceUserForShareRepositoryInstanceEnumeration::addElement
   (const Linux_SambaForceUserForShareRepositoryInstance& elementP){
   	
  	if(firstElementP==0){
  	  firstElementP=new Linux_SambaForceUserForShareRepositoryInstanceEnumerationElement();
  	  firstElementP->m_elementP=new Linux_SambaForceUserForShareRepositoryInstance(elementP);
  	  endElementP=firstElementP;
  	  currentElementP=firstElementP;
  	}else{
  	  endElementP->m_nextP=new Linux_SambaForceUserForShareRepositoryInstanceEnumerationElement();
  	  endElementP=endElementP->m_nextP;
  	  endElementP->m_elementP=new Linux_SambaForceUserForShareRepositoryInstance(elementP);
  	}
  };  
}
 
