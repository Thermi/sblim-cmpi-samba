/**
 *  Linux_SambaForceGroupForGlobalRepositoryInstance.cpp
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


#include "Linux_SambaForceGroupForGlobalRepositoryInstance.h"
#include "CmpiData.h"
#include "CmpiString.h"
#include "CmpiArray.h"
#include <string>

namespace genProvider {

  //*********************************************************
  //Linux_SambaForceGroupForGlobalRepositoryInstance
  //*********************************************************

  //empty constructor
  Linux_SambaForceGroupForGlobalRepositoryInstance::
   Linux_SambaForceGroupForGlobalRepositoryInstance(){   	
   	init();  	   	
  };
  
  
  //copy constructor	
  Linux_SambaForceGroupForGlobalRepositoryInstance::
   Linux_SambaForceGroupForGlobalRepositoryInstance
   (const Linux_SambaForceGroupForGlobalRepositoryInstance& original){   	
   	init(original);  	   	
  };
  
  
  //constructor using CmpiInstance
  Linux_SambaForceGroupForGlobalRepositoryInstance::
   Linux_SambaForceGroupForGlobalRepositoryInstance (const CmpiInstance& inst, const char* instanceNamespace){
    CmpiData cmpiData;
    init(); 
    
    CmpiObjectPath cop=inst.getObjectPath();
    cop.setNameSpace(instanceNamespace);
    setInstanceName(Linux_SambaForceGroupForGlobalInstanceName(cop));
    
  }
  
  
  //Destructor
  Linux_SambaForceGroupForGlobalRepositoryInstance::
   ~Linux_SambaForceGroupForGlobalRepositoryInstance(){
   	reset();  	  
  };
  
  
  //copy operator
  Linux_SambaForceGroupForGlobalRepositoryInstance&
   Linux_SambaForceGroupForGlobalRepositoryInstance::operator=
   (const Linux_SambaForceGroupForGlobalRepositoryInstance& original){   	
   	init(original);
   	return *this;
  };
  
  
  //converts to CmpiInstance
  CmpiInstance Linux_SambaForceGroupForGlobalRepositoryInstance::
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
  unsigned int Linux_SambaForceGroupForGlobalRepositoryInstance::
   isInstanceNameSet() const{
  	return isSet.instanceName;
  }
  
  const Linux_SambaForceGroupForGlobalInstanceName&
    Linux_SambaForceGroupForGlobalRepositoryInstance::getInstanceName() const{

    if(!isSet.instanceName)
   	  throw CmpiErrorFormater::getErrorException(
   	   CmpiErrorFormater::NOT_SET,
   	   "InstanceName not set in Linux_SambaForceGroupForGlobal instance");
  		
   	return m_instanceName;
  }

  void Linux_SambaForceGroupForGlobalRepositoryInstance::setInstanceName(
   const Linux_SambaForceGroupForGlobalInstanceName& val){
    m_instanceName = val;
    isSet.instanceName=1;
  }


  
  //set isSet attributes to FALSE
  void Linux_SambaForceGroupForGlobalRepositoryInstance::init(){
   	isSet.instanceName=0;
   	  	
  };
  
  
  //copies another instance properties in this
  void Linux_SambaForceGroupForGlobalRepositoryInstance::init
   (const Linux_SambaForceGroupForGlobalRepositoryInstance& original){   	
   	init();
   	   	
    if(original.isInstanceNameSet()){
      setInstanceName(original.getInstanceName());
    }    
   }
  
  
  //reset the instance data
  void Linux_SambaForceGroupForGlobalRepositoryInstance::reset(){
   	
  	  
  };
  
  
  //*********************************************************
  //Linux_SambaForceGroupForGlobalRepositoryInstanceEnumerationElement	
  //*********************************************************
  
  Linux_SambaForceGroupForGlobalRepositoryInstanceEnumerationElement::
   Linux_SambaForceGroupForGlobalRepositoryInstanceEnumerationElement(){
   	
  	m_elementP=0;
  	m_nextP=0;
  	  
  };
  
  
  Linux_SambaForceGroupForGlobalRepositoryInstanceEnumerationElement::
   ~Linux_SambaForceGroupForGlobalRepositoryInstanceEnumerationElement(){
   	
  	if (m_elementP!=0)
  	  delete(m_elementP);
  	if (m_nextP!=0)
  	  delete(m_nextP);
  	  
  };

  
  //*********************************************************
  //Linux_SambaForceGroupForGlobalRepositoryInstanceNameEnumeration
  //*********************************************************

  Linux_SambaForceGroupForGlobalRepositoryInstanceEnumeration::
   Linux_SambaForceGroupForGlobalRepositoryInstanceEnumeration(){
   	
  	 firstElementP=0;
     currentElementP=0;
     endElementP=0;
  };
  
  Linux_SambaForceGroupForGlobalRepositoryInstanceEnumeration::
   Linux_SambaForceGroupForGlobalRepositoryInstanceEnumeration(
   const Linux_SambaForceGroupForGlobalRepositoryInstanceEnumeration& original){
   	
     firstElementP=0;
     currentElementP=0;
     endElementP=0;
  	 
     int size=original.getSize();
     for(int i=0;i<size;i++)
       addElement(original.getElement(i));           
  };
  
  	  
  Linux_SambaForceGroupForGlobalRepositoryInstanceEnumeration::
   ~Linux_SambaForceGroupForGlobalRepositoryInstanceEnumeration(){
   	
  	if (firstElementP!=0)
  	  delete(firstElementP);
  	  	
  };
  
  	  
  void Linux_SambaForceGroupForGlobalRepositoryInstanceEnumeration::reset(){
  	
  	currentElementP=firstElementP;
  };
  
  	  
  bool Linux_SambaForceGroupForGlobalRepositoryInstanceEnumeration::hasNext() const{
  	
  	return (currentElementP!=0);
  
  };
  
  int Linux_SambaForceGroupForGlobalRepositoryInstanceEnumeration::getSize() const{
  	
    int size=0;
    Linux_SambaForceGroupForGlobalRepositoryInstanceEnumerationElement* followingP=firstElementP;
  	
  	while(followingP!=0){
        followingP=followingP->m_nextP;
        size++;
    }
  	
    return size;
    
  };
  
  const Linux_SambaForceGroupForGlobalRepositoryInstance&  
   Linux_SambaForceGroupForGlobalRepositoryInstanceEnumeration::getElement(int pos) const{
   
    Linux_SambaForceGroupForGlobalRepositoryInstanceEnumerationElement* followingP=firstElementP;
   
    int i=0;
    while((followingP!=0)&&(i<pos)){
        followingP=followingP->m_nextP;
        i++;
    }
    
    return *(followingP->m_elementP);
  };
  
  	  
  const Linux_SambaForceGroupForGlobalRepositoryInstance&
   Linux_SambaForceGroupForGlobalRepositoryInstanceEnumeration::getNext() {
   	
  	 Linux_SambaForceGroupForGlobalRepositoryInstanceEnumerationElement* currentP=
  	  currentElementP;
  	 currentElementP=currentElementP->m_nextP;
  	 
  	 return *(currentP->m_elementP);
  };
  	  
  void Linux_SambaForceGroupForGlobalRepositoryInstanceEnumeration::addElement
   (const Linux_SambaForceGroupForGlobalRepositoryInstance& elementP){
   	
  	if(firstElementP==0){
  	  firstElementP=new Linux_SambaForceGroupForGlobalRepositoryInstanceEnumerationElement();
  	  firstElementP->m_elementP=new Linux_SambaForceGroupForGlobalRepositoryInstance(elementP);
  	  endElementP=firstElementP;
  	  currentElementP=firstElementP;
  	}else{
  	  endElementP->m_nextP=new Linux_SambaForceGroupForGlobalRepositoryInstanceEnumerationElement();
  	  endElementP=endElementP->m_nextP;
  	  endElementP->m_elementP=new Linux_SambaForceGroupForGlobalRepositoryInstance(elementP);
  	}
  };  
}
 
