/**
 *  Linux_SambaGlobalSecurityForGlobalRepositoryInstance.cpp
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


#include "Linux_SambaGlobalSecurityForGlobalRepositoryInstance.h"
#include "CmpiData.h"
#include "CmpiString.h"
#include "CmpiArray.h"
#include <string>

namespace genProvider {

  //*********************************************************
  //Linux_SambaGlobalSecurityForGlobalRepositoryInstance
  //*********************************************************

  //empty constructor
  Linux_SambaGlobalSecurityForGlobalRepositoryInstance::
   Linux_SambaGlobalSecurityForGlobalRepositoryInstance(){   	
   	init();  	   	
  };
  
  
  //copy constructor	
  Linux_SambaGlobalSecurityForGlobalRepositoryInstance::
   Linux_SambaGlobalSecurityForGlobalRepositoryInstance
   (const Linux_SambaGlobalSecurityForGlobalRepositoryInstance& original){   	
   	init(original);  	   	
  };
  
  
  //constructor using CmpiInstance
  Linux_SambaGlobalSecurityForGlobalRepositoryInstance::
   Linux_SambaGlobalSecurityForGlobalRepositoryInstance (const CmpiInstance& inst, const char* instanceNamespace){
    CmpiData cmpiData;
    init(); 
    
    CmpiObjectPath cop=inst.getObjectPath();
    cop.setNameSpace(instanceNamespace);
    setInstanceName(Linux_SambaGlobalSecurityForGlobalInstanceName(cop));
    
  }
  
  
  //Destructor
  Linux_SambaGlobalSecurityForGlobalRepositoryInstance::
   ~Linux_SambaGlobalSecurityForGlobalRepositoryInstance(){
   	reset();  	  
  };
  
  
  //copy operator
  Linux_SambaGlobalSecurityForGlobalRepositoryInstance&
   Linux_SambaGlobalSecurityForGlobalRepositoryInstance::operator=
   (const Linux_SambaGlobalSecurityForGlobalRepositoryInstance& original){   	
   	init(original);
   	return *this;
  };
  
  
  //converts to CmpiInstance
  CmpiInstance Linux_SambaGlobalSecurityForGlobalRepositoryInstance::
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
  unsigned int Linux_SambaGlobalSecurityForGlobalRepositoryInstance::
   isInstanceNameSet() const{
  	return isSet.instanceName;
  }
  
  const Linux_SambaGlobalSecurityForGlobalInstanceName&
    Linux_SambaGlobalSecurityForGlobalRepositoryInstance::getInstanceName() const{

    if(!isSet.instanceName)
   	  throw CmpiErrorFormater::getErrorException(
   	   CmpiErrorFormater::NOT_SET,
   	   "InstanceName not set in Linux_SambaGlobalSecurityForGlobal instance");
  		
   	return m_instanceName;
  }

  void Linux_SambaGlobalSecurityForGlobalRepositoryInstance::setInstanceName(
   const Linux_SambaGlobalSecurityForGlobalInstanceName& val){
    m_instanceName = val;
    isSet.instanceName=1;
  }


  
  //set isSet attributes to FALSE
  void Linux_SambaGlobalSecurityForGlobalRepositoryInstance::init(){
   	isSet.instanceName=0;
   	  	
  };
  
  
  //copies another instance properties in this
  void Linux_SambaGlobalSecurityForGlobalRepositoryInstance::init
   (const Linux_SambaGlobalSecurityForGlobalRepositoryInstance& original){   	
   	init();
   	   	
    if(original.isInstanceNameSet()){
      setInstanceName(original.getInstanceName());
    }    
   }
  
  
  //reset the instance data
  void Linux_SambaGlobalSecurityForGlobalRepositoryInstance::reset(){
   	
  	  
  };
  
  
  //*********************************************************
  //Linux_SambaGlobalSecurityForGlobalRepositoryInstanceEnumerationElement	
  //*********************************************************
  
  Linux_SambaGlobalSecurityForGlobalRepositoryInstanceEnumerationElement::
   Linux_SambaGlobalSecurityForGlobalRepositoryInstanceEnumerationElement(){
   	
  	m_elementP=0;
  	m_nextP=0;
  	  
  };
  
  
  Linux_SambaGlobalSecurityForGlobalRepositoryInstanceEnumerationElement::
   ~Linux_SambaGlobalSecurityForGlobalRepositoryInstanceEnumerationElement(){
   	
  	if (m_elementP!=0)
  	  delete(m_elementP);
  	if (m_nextP!=0)
  	  delete(m_nextP);
  	  
  };

  
  //*********************************************************
  //Linux_SambaGlobalSecurityForGlobalRepositoryInstanceNameEnumeration
  //*********************************************************

  Linux_SambaGlobalSecurityForGlobalRepositoryInstanceEnumeration::
   Linux_SambaGlobalSecurityForGlobalRepositoryInstanceEnumeration(){
   	
  	 firstElementP=0;
     currentElementP=0;
     endElementP=0;
  };
  
  Linux_SambaGlobalSecurityForGlobalRepositoryInstanceEnumeration::
   Linux_SambaGlobalSecurityForGlobalRepositoryInstanceEnumeration(
   const Linux_SambaGlobalSecurityForGlobalRepositoryInstanceEnumeration& original){
   	
     firstElementP=0;
     currentElementP=0;
     endElementP=0;
  	 
     int size=original.getSize();
     for(int i=0;i<size;i++)
       addElement(original.getElement(i));           
  };
  
  	  
  Linux_SambaGlobalSecurityForGlobalRepositoryInstanceEnumeration::
   ~Linux_SambaGlobalSecurityForGlobalRepositoryInstanceEnumeration(){
   	
  	if (firstElementP!=0)
  	  delete(firstElementP);
  	  	
  };
  
  	  
  void Linux_SambaGlobalSecurityForGlobalRepositoryInstanceEnumeration::reset(){
  	
  	currentElementP=firstElementP;
  };
  
  	  
  bool Linux_SambaGlobalSecurityForGlobalRepositoryInstanceEnumeration::hasNext() const{
  	
  	return (currentElementP!=0);
  
  };
  
  int Linux_SambaGlobalSecurityForGlobalRepositoryInstanceEnumeration::getSize() const{
  	
    int size=0;
    Linux_SambaGlobalSecurityForGlobalRepositoryInstanceEnumerationElement* followingP=firstElementP;
  	
  	while(followingP!=0){
        followingP=followingP->m_nextP;
        size++;
    }
  	
    return size;
    
  };
  
  const Linux_SambaGlobalSecurityForGlobalRepositoryInstance&  
   Linux_SambaGlobalSecurityForGlobalRepositoryInstanceEnumeration::getElement(int pos) const{
   
    Linux_SambaGlobalSecurityForGlobalRepositoryInstanceEnumerationElement* followingP=firstElementP;
   
    int i=0;
    while((followingP!=0)&&(i<pos)){
        followingP=followingP->m_nextP;
        i++;
    }
    
    return *(followingP->m_elementP);
  };
  
  	  
  const Linux_SambaGlobalSecurityForGlobalRepositoryInstance&
   Linux_SambaGlobalSecurityForGlobalRepositoryInstanceEnumeration::getNext() {
   	
  	 Linux_SambaGlobalSecurityForGlobalRepositoryInstanceEnumerationElement* currentP=
  	  currentElementP;
  	 currentElementP=currentElementP->m_nextP;
  	 
  	 return *(currentP->m_elementP);
  };
  	  
  void Linux_SambaGlobalSecurityForGlobalRepositoryInstanceEnumeration::addElement
   (const Linux_SambaGlobalSecurityForGlobalRepositoryInstance& elementP){
   	
  	if(firstElementP==0){
  	  firstElementP=new Linux_SambaGlobalSecurityForGlobalRepositoryInstanceEnumerationElement();
  	  firstElementP->m_elementP=new Linux_SambaGlobalSecurityForGlobalRepositoryInstance(elementP);
  	  endElementP=firstElementP;
  	  currentElementP=firstElementP;
  	}else{
  	  endElementP->m_nextP=new Linux_SambaGlobalSecurityForGlobalRepositoryInstanceEnumerationElement();
  	  endElementP=endElementP->m_nextP;
  	  endElementP->m_elementP=new Linux_SambaGlobalSecurityForGlobalRepositoryInstance(elementP);
  	}
  };  
}
 
