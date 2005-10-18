/**
 *  Linux_SambaScriptingForGlobalRepositoryInstance.cpp
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


#include "Linux_SambaScriptingForGlobalRepositoryInstance.h"
#include "CmpiData.h"
#include "CmpiString.h"
#include "CmpiArray.h"
#include <string>

namespace genProvider {

  //*********************************************************
  //Linux_SambaScriptingForGlobalRepositoryInstance
  //*********************************************************

  //empty constructor
  Linux_SambaScriptingForGlobalRepositoryInstance::
   Linux_SambaScriptingForGlobalRepositoryInstance(){   	
   	init();  	   	
  };
  
  
  //copy constructor	
  Linux_SambaScriptingForGlobalRepositoryInstance::
   Linux_SambaScriptingForGlobalRepositoryInstance
   (const Linux_SambaScriptingForGlobalRepositoryInstance& original){   	
   	init(original);  	   	
  };
  
  
  //constructor using CmpiInstance
  Linux_SambaScriptingForGlobalRepositoryInstance::
   Linux_SambaScriptingForGlobalRepositoryInstance (const CmpiInstance& inst, const char* instanceNamespace){
    CmpiData cmpiData;
    init(); 
    
    CmpiObjectPath cop=inst.getObjectPath();
    cop.setNameSpace(instanceNamespace);
    setInstanceName(Linux_SambaScriptingForGlobalInstanceName(cop));
    
  }
  
  
  //Destructor
  Linux_SambaScriptingForGlobalRepositoryInstance::
   ~Linux_SambaScriptingForGlobalRepositoryInstance(){
   	reset();  	  
  };
  
  
  //copy operator
  Linux_SambaScriptingForGlobalRepositoryInstance&
   Linux_SambaScriptingForGlobalRepositoryInstance::operator=
   (const Linux_SambaScriptingForGlobalRepositoryInstance& original){   	
   	init(original);
   	return *this;
  };
  
  
  //converts to CmpiInstance
  CmpiInstance Linux_SambaScriptingForGlobalRepositoryInstance::
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
  unsigned int Linux_SambaScriptingForGlobalRepositoryInstance::
   isInstanceNameSet() const{
  	return isSet.instanceName;
  }
  
  const Linux_SambaScriptingForGlobalInstanceName&
    Linux_SambaScriptingForGlobalRepositoryInstance::getInstanceName() const{

    if(!isSet.instanceName)
   	  throw CmpiErrorFormater::getErrorException(
   	   CmpiErrorFormater::NOT_SET,
   	   "InstanceName not set in Linux_SambaScriptingForGlobal instance");
  		
   	return m_instanceName;
  }

  void Linux_SambaScriptingForGlobalRepositoryInstance::setInstanceName(
   const Linux_SambaScriptingForGlobalInstanceName& val){
    m_instanceName = val;
    isSet.instanceName=1;
  }


  
  //set isSet attributes to FALSE
  void Linux_SambaScriptingForGlobalRepositoryInstance::init(){
   	isSet.instanceName=0;
   	  	
  };
  
  
  //copies another instance properties in this
  void Linux_SambaScriptingForGlobalRepositoryInstance::init
   (const Linux_SambaScriptingForGlobalRepositoryInstance& original){   	
   	init();
   	   	
    if(original.isInstanceNameSet()){
      setInstanceName(original.getInstanceName());
    }    
   }
  
  
  //reset the instance data
  void Linux_SambaScriptingForGlobalRepositoryInstance::reset(){
   	
  	  
  };
  
  
  //*********************************************************
  //Linux_SambaScriptingForGlobalRepositoryInstanceEnumerationElement	
  //*********************************************************
  
  Linux_SambaScriptingForGlobalRepositoryInstanceEnumerationElement::
   Linux_SambaScriptingForGlobalRepositoryInstanceEnumerationElement(){
   	
  	m_elementP=0;
  	m_nextP=0;
  	  
  };
  
  
  Linux_SambaScriptingForGlobalRepositoryInstanceEnumerationElement::
   ~Linux_SambaScriptingForGlobalRepositoryInstanceEnumerationElement(){
   	
  	if (m_elementP!=0)
  	  delete(m_elementP);
  	if (m_nextP!=0)
  	  delete(m_nextP);
  	  
  };

  
  //*********************************************************
  //Linux_SambaScriptingForGlobalRepositoryInstanceNameEnumeration
  //*********************************************************

  Linux_SambaScriptingForGlobalRepositoryInstanceEnumeration::
   Linux_SambaScriptingForGlobalRepositoryInstanceEnumeration(){
   	
  	 firstElementP=0;
     currentElementP=0;
     endElementP=0;
  };
  
  Linux_SambaScriptingForGlobalRepositoryInstanceEnumeration::
   Linux_SambaScriptingForGlobalRepositoryInstanceEnumeration(
   const Linux_SambaScriptingForGlobalRepositoryInstanceEnumeration& original){
   	
     firstElementP=0;
     currentElementP=0;
     endElementP=0;
  	 
     int size=original.getSize();
     for(int i=0;i<size;i++)
       addElement(original.getElement(i));           
  };
  
  	  
  Linux_SambaScriptingForGlobalRepositoryInstanceEnumeration::
   ~Linux_SambaScriptingForGlobalRepositoryInstanceEnumeration(){
   	
  	if (firstElementP!=0)
  	  delete(firstElementP);
  	  	
  };
  
  	  
  void Linux_SambaScriptingForGlobalRepositoryInstanceEnumeration::reset(){
  	
  	currentElementP=firstElementP;
  };
  
  	  
  bool Linux_SambaScriptingForGlobalRepositoryInstanceEnumeration::hasNext() const{
  	
  	return (currentElementP!=0);
  
  };
  
  int Linux_SambaScriptingForGlobalRepositoryInstanceEnumeration::getSize() const{
  	
    int size=0;
    Linux_SambaScriptingForGlobalRepositoryInstanceEnumerationElement* followingP=firstElementP;
  	
  	while(followingP!=0){
        followingP=followingP->m_nextP;
        size++;
    }
  	
    return size;
    
  };
  
  const Linux_SambaScriptingForGlobalRepositoryInstance&  
   Linux_SambaScriptingForGlobalRepositoryInstanceEnumeration::getElement(int pos) const{
   
    Linux_SambaScriptingForGlobalRepositoryInstanceEnumerationElement* followingP=firstElementP;
   
    int i=0;
    while((followingP!=0)&&(i<pos)){
        followingP=followingP->m_nextP;
        i++;
    }
    
    return *(followingP->m_elementP);
  };
  
  	  
  const Linux_SambaScriptingForGlobalRepositoryInstance&
   Linux_SambaScriptingForGlobalRepositoryInstanceEnumeration::getNext() {
   	
  	 Linux_SambaScriptingForGlobalRepositoryInstanceEnumerationElement* currentP=
  	  currentElementP;
  	 currentElementP=currentElementP->m_nextP;
  	 
  	 return *(currentP->m_elementP);
  };
  	  
  void Linux_SambaScriptingForGlobalRepositoryInstanceEnumeration::addElement
   (const Linux_SambaScriptingForGlobalRepositoryInstance& elementP){
   	
  	if(firstElementP==0){
  	  firstElementP=new Linux_SambaScriptingForGlobalRepositoryInstanceEnumerationElement();
  	  firstElementP->m_elementP=new Linux_SambaScriptingForGlobalRepositoryInstance(elementP);
  	  endElementP=firstElementP;
  	  currentElementP=firstElementP;
  	}else{
  	  endElementP->m_nextP=new Linux_SambaScriptingForGlobalRepositoryInstanceEnumerationElement();
  	  endElementP=endElementP->m_nextP;
  	  endElementP->m_elementP=new Linux_SambaScriptingForGlobalRepositoryInstance(elementP);
  	}
  };  
}
 
