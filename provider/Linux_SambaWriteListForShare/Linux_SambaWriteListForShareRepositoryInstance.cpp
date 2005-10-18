/**
 *  Linux_SambaWriteListForShareRepositoryInstance.cpp
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


#include "Linux_SambaWriteListForShareRepositoryInstance.h"
#include "CmpiData.h"
#include "CmpiString.h"
#include "CmpiArray.h"
#include <string>

namespace genProvider {

  //*********************************************************
  //Linux_SambaWriteListForShareRepositoryInstance
  //*********************************************************

  //empty constructor
  Linux_SambaWriteListForShareRepositoryInstance::
   Linux_SambaWriteListForShareRepositoryInstance(){   	
   	init();  	   	
  };
  
  
  //copy constructor	
  Linux_SambaWriteListForShareRepositoryInstance::
   Linux_SambaWriteListForShareRepositoryInstance
   (const Linux_SambaWriteListForShareRepositoryInstance& original){   	
   	init(original);  	   	
  };
  
  
  //constructor using CmpiInstance
  Linux_SambaWriteListForShareRepositoryInstance::
   Linux_SambaWriteListForShareRepositoryInstance (const CmpiInstance& inst, const char* instanceNamespace){
    CmpiData cmpiData;
    init(); 
    
    CmpiObjectPath cop=inst.getObjectPath();
    cop.setNameSpace(instanceNamespace);
    setInstanceName(Linux_SambaWriteListForShareInstanceName(cop));
    
  }
  
  
  //Destructor
  Linux_SambaWriteListForShareRepositoryInstance::
   ~Linux_SambaWriteListForShareRepositoryInstance(){
   	reset();  	  
  };
  
  
  //copy operator
  Linux_SambaWriteListForShareRepositoryInstance&
   Linux_SambaWriteListForShareRepositoryInstance::operator=
   (const Linux_SambaWriteListForShareRepositoryInstance& original){   	
   	init(original);
   	return *this;
  };
  
  
  //converts to CmpiInstance
  CmpiInstance Linux_SambaWriteListForShareRepositoryInstance::
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
  unsigned int Linux_SambaWriteListForShareRepositoryInstance::
   isInstanceNameSet() const{
  	return isSet.instanceName;
  }
  
  const Linux_SambaWriteListForShareInstanceName&
    Linux_SambaWriteListForShareRepositoryInstance::getInstanceName() const{

    if(!isSet.instanceName)
   	  throw CmpiErrorFormater::getErrorException(
   	   CmpiErrorFormater::NOT_SET,
   	   "InstanceName not set in Linux_SambaWriteListForShare instance");
  		
   	return m_instanceName;
  }

  void Linux_SambaWriteListForShareRepositoryInstance::setInstanceName(
   const Linux_SambaWriteListForShareInstanceName& val){
    m_instanceName = val;
    isSet.instanceName=1;
  }


  
  //set isSet attributes to FALSE
  void Linux_SambaWriteListForShareRepositoryInstance::init(){
   	isSet.instanceName=0;
   	  	
  };
  
  
  //copies another instance properties in this
  void Linux_SambaWriteListForShareRepositoryInstance::init
   (const Linux_SambaWriteListForShareRepositoryInstance& original){   	
   	init();
   	   	
    if(original.isInstanceNameSet()){
      setInstanceName(original.getInstanceName());
    }    
   }
  
  
  //reset the instance data
  void Linux_SambaWriteListForShareRepositoryInstance::reset(){
   	
  	  
  };
  
  
  //*********************************************************
  //Linux_SambaWriteListForShareRepositoryInstanceEnumerationElement	
  //*********************************************************
  
  Linux_SambaWriteListForShareRepositoryInstanceEnumerationElement::
   Linux_SambaWriteListForShareRepositoryInstanceEnumerationElement(){
   	
  	m_elementP=0;
  	m_nextP=0;
  	  
  };
  
  
  Linux_SambaWriteListForShareRepositoryInstanceEnumerationElement::
   ~Linux_SambaWriteListForShareRepositoryInstanceEnumerationElement(){
   	
  	if (m_elementP!=0)
  	  delete(m_elementP);
  	if (m_nextP!=0)
  	  delete(m_nextP);
  	  
  };

  
  //*********************************************************
  //Linux_SambaWriteListForShareRepositoryInstanceNameEnumeration
  //*********************************************************

  Linux_SambaWriteListForShareRepositoryInstanceEnumeration::
   Linux_SambaWriteListForShareRepositoryInstanceEnumeration(){
   	
  	 firstElementP=0;
     currentElementP=0;
     endElementP=0;
  };
  
  Linux_SambaWriteListForShareRepositoryInstanceEnumeration::
   Linux_SambaWriteListForShareRepositoryInstanceEnumeration(
   const Linux_SambaWriteListForShareRepositoryInstanceEnumeration& original){
   	
     firstElementP=0;
     currentElementP=0;
     endElementP=0;
  	 
     int size=original.getSize();
     for(int i=0;i<size;i++)
       addElement(original.getElement(i));           
  };
  
  	  
  Linux_SambaWriteListForShareRepositoryInstanceEnumeration::
   ~Linux_SambaWriteListForShareRepositoryInstanceEnumeration(){
   	
  	if (firstElementP!=0)
  	  delete(firstElementP);
  	  	
  };
  
  	  
  void Linux_SambaWriteListForShareRepositoryInstanceEnumeration::reset(){
  	
  	currentElementP=firstElementP;
  };
  
  	  
  bool Linux_SambaWriteListForShareRepositoryInstanceEnumeration::hasNext() const{
  	
  	return (currentElementP!=0);
  
  };
  
  int Linux_SambaWriteListForShareRepositoryInstanceEnumeration::getSize() const{
  	
    int size=0;
    Linux_SambaWriteListForShareRepositoryInstanceEnumerationElement* followingP=firstElementP;
  	
  	while(followingP!=0){
        followingP=followingP->m_nextP;
        size++;
    }
  	
    return size;
    
  };
  
  const Linux_SambaWriteListForShareRepositoryInstance&  
   Linux_SambaWriteListForShareRepositoryInstanceEnumeration::getElement(int pos) const{
   
    Linux_SambaWriteListForShareRepositoryInstanceEnumerationElement* followingP=firstElementP;
   
    int i=0;
    while((followingP!=0)&&(i<pos)){
        followingP=followingP->m_nextP;
        i++;
    }
    
    return *(followingP->m_elementP);
  };
  
  	  
  const Linux_SambaWriteListForShareRepositoryInstance&
   Linux_SambaWriteListForShareRepositoryInstanceEnumeration::getNext() {
   	
  	 Linux_SambaWriteListForShareRepositoryInstanceEnumerationElement* currentP=
  	  currentElementP;
  	 currentElementP=currentElementP->m_nextP;
  	 
  	 return *(currentP->m_elementP);
  };
  	  
  void Linux_SambaWriteListForShareRepositoryInstanceEnumeration::addElement
   (const Linux_SambaWriteListForShareRepositoryInstance& elementP){
   	
  	if(firstElementP==0){
  	  firstElementP=new Linux_SambaWriteListForShareRepositoryInstanceEnumerationElement();
  	  firstElementP->m_elementP=new Linux_SambaWriteListForShareRepositoryInstance(elementP);
  	  endElementP=firstElementP;
  	  currentElementP=firstElementP;
  	}else{
  	  endElementP->m_nextP=new Linux_SambaWriteListForShareRepositoryInstanceEnumerationElement();
  	  endElementP=endElementP->m_nextP;
  	  endElementP->m_elementP=new Linux_SambaWriteListForShareRepositoryInstance(elementP);
  	}
  };  
}
 
