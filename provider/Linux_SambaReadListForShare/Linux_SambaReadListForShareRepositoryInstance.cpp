/**
 *  Linux_SambaReadListForShareRepositoryInstance.cpp
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


#include "Linux_SambaReadListForShareRepositoryInstance.h"
#include "CmpiData.h"
#include "CmpiString.h"
#include "CmpiArray.h"
#include <string>

namespace genProvider {

  //*********************************************************
  //Linux_SambaReadListForShareRepositoryInstance
  //*********************************************************

  //empty constructor
  Linux_SambaReadListForShareRepositoryInstance::
   Linux_SambaReadListForShareRepositoryInstance(){   	
   	init();  	   	
  };
  
  
  //copy constructor	
  Linux_SambaReadListForShareRepositoryInstance::
   Linux_SambaReadListForShareRepositoryInstance
   (const Linux_SambaReadListForShareRepositoryInstance& original){   	
   	init(original);  	   	
  };
  
  
  //constructor using CmpiInstance
  Linux_SambaReadListForShareRepositoryInstance::
   Linux_SambaReadListForShareRepositoryInstance (const CmpiInstance& inst, const char* instanceNamespace){
    CmpiData cmpiData;
    init(); 
    
    CmpiObjectPath cop=inst.getObjectPath();
    cop.setNameSpace(instanceNamespace);
    setInstanceName(Linux_SambaReadListForShareInstanceName(cop));
    
  }
  
  
  //Destructor
  Linux_SambaReadListForShareRepositoryInstance::
   ~Linux_SambaReadListForShareRepositoryInstance(){
   	reset();  	  
  };
  
  
  //copy operator
  Linux_SambaReadListForShareRepositoryInstance&
   Linux_SambaReadListForShareRepositoryInstance::operator=
   (const Linux_SambaReadListForShareRepositoryInstance& original){   	
   	init(original);
   	return *this;
  };
  
  
  //converts to CmpiInstance
  CmpiInstance Linux_SambaReadListForShareRepositoryInstance::
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
  unsigned int Linux_SambaReadListForShareRepositoryInstance::
   isInstanceNameSet() const{
  	return isSet.instanceName;
  }
  
  const Linux_SambaReadListForShareInstanceName&
    Linux_SambaReadListForShareRepositoryInstance::getInstanceName() const{

    if(!isSet.instanceName)
   	  throw CmpiErrorFormater::getErrorException(
   	   CmpiErrorFormater::NOT_SET,
   	   "InstanceName not set in Linux_SambaReadListForShare instance");
  		
   	return m_instanceName;
  }

  void Linux_SambaReadListForShareRepositoryInstance::setInstanceName(
   const Linux_SambaReadListForShareInstanceName& val){
    m_instanceName = val;
    isSet.instanceName=1;
  }


  
  //set isSet attributes to FALSE
  void Linux_SambaReadListForShareRepositoryInstance::init(){
   	isSet.instanceName=0;
   	  	
  };
  
  
  //copies another instance properties in this
  void Linux_SambaReadListForShareRepositoryInstance::init
   (const Linux_SambaReadListForShareRepositoryInstance& original){   	
   	init();
   	   	
    if(original.isInstanceNameSet()){
      setInstanceName(original.getInstanceName());
    }    
   }
  
  
  //reset the instance data
  void Linux_SambaReadListForShareRepositoryInstance::reset(){
   	
  	  
  };
  
  
  //*********************************************************
  //Linux_SambaReadListForShareRepositoryInstanceEnumerationElement	
  //*********************************************************
  
  Linux_SambaReadListForShareRepositoryInstanceEnumerationElement::
   Linux_SambaReadListForShareRepositoryInstanceEnumerationElement(){
   	
  	m_elementP=0;
  	m_nextP=0;
  	  
  };
  
  
  Linux_SambaReadListForShareRepositoryInstanceEnumerationElement::
   ~Linux_SambaReadListForShareRepositoryInstanceEnumerationElement(){
   	
  	if (m_elementP!=0)
  	  delete(m_elementP);
  	if (m_nextP!=0)
  	  delete(m_nextP);
  	  
  };

  
  //*********************************************************
  //Linux_SambaReadListForShareRepositoryInstanceNameEnumeration
  //*********************************************************

  Linux_SambaReadListForShareRepositoryInstanceEnumeration::
   Linux_SambaReadListForShareRepositoryInstanceEnumeration(){
   	
  	 firstElementP=0;
     currentElementP=0;
     endElementP=0;
  };
  
  Linux_SambaReadListForShareRepositoryInstanceEnumeration::
   Linux_SambaReadListForShareRepositoryInstanceEnumeration(
   const Linux_SambaReadListForShareRepositoryInstanceEnumeration& original){
   	
     firstElementP=0;
     currentElementP=0;
     endElementP=0;
  	 
     int size=original.getSize();
     for(int i=0;i<size;i++)
       addElement(original.getElement(i));           
  };
  
  	  
  Linux_SambaReadListForShareRepositoryInstanceEnumeration::
   ~Linux_SambaReadListForShareRepositoryInstanceEnumeration(){
   	
  	if (firstElementP!=0)
  	  delete(firstElementP);
  	  	
  };
  
  	  
  void Linux_SambaReadListForShareRepositoryInstanceEnumeration::reset(){
  	
  	currentElementP=firstElementP;
  };
  
  	  
  bool Linux_SambaReadListForShareRepositoryInstanceEnumeration::hasNext() const{
  	
  	return (currentElementP!=0);
  
  };
  
  int Linux_SambaReadListForShareRepositoryInstanceEnumeration::getSize() const{
  	
    int size=0;
    Linux_SambaReadListForShareRepositoryInstanceEnumerationElement* followingP=firstElementP;
  	
  	while(followingP!=0){
        followingP=followingP->m_nextP;
        size++;
    }
  	
    return size;
    
  };
  
  const Linux_SambaReadListForShareRepositoryInstance&  
   Linux_SambaReadListForShareRepositoryInstanceEnumeration::getElement(int pos) const{
   
    Linux_SambaReadListForShareRepositoryInstanceEnumerationElement* followingP=firstElementP;
   
    int i=0;
    while((followingP!=0)&&(i<pos)){
        followingP=followingP->m_nextP;
        i++;
    }
    
    return *(followingP->m_elementP);
  };
  
  	  
  const Linux_SambaReadListForShareRepositoryInstance&
   Linux_SambaReadListForShareRepositoryInstanceEnumeration::getNext() {
   	
  	 Linux_SambaReadListForShareRepositoryInstanceEnumerationElement* currentP=
  	  currentElementP;
  	 currentElementP=currentElementP->m_nextP;
  	 
  	 return *(currentP->m_elementP);
  };
  	  
  void Linux_SambaReadListForShareRepositoryInstanceEnumeration::addElement
   (const Linux_SambaReadListForShareRepositoryInstance& elementP){
   	
  	if(firstElementP==0){
  	  firstElementP=new Linux_SambaReadListForShareRepositoryInstanceEnumerationElement();
  	  firstElementP->m_elementP=new Linux_SambaReadListForShareRepositoryInstance(elementP);
  	  endElementP=firstElementP;
  	  currentElementP=firstElementP;
  	}else{
  	  endElementP->m_nextP=new Linux_SambaReadListForShareRepositoryInstanceEnumerationElement();
  	  endElementP=endElementP->m_nextP;
  	  endElementP->m_elementP=new Linux_SambaReadListForShareRepositoryInstance(elementP);
  	}
  };  
}
 
