/**
 *  Linux_SambaShareProtocolForShareRepositoryInstance.cpp
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


#include "Linux_SambaShareProtocolForShareRepositoryInstance.h"
#include "CmpiData.h"
#include "CmpiString.h"
#include "CmpiArray.h"
#include <string>

namespace genProvider {

  //*********************************************************
  //Linux_SambaShareProtocolForShareRepositoryInstance
  //*********************************************************

  //empty constructor
  Linux_SambaShareProtocolForShareRepositoryInstance::
   Linux_SambaShareProtocolForShareRepositoryInstance(){   	
   	init();  	   	
  };
  
  
  //copy constructor	
  Linux_SambaShareProtocolForShareRepositoryInstance::
   Linux_SambaShareProtocolForShareRepositoryInstance
   (const Linux_SambaShareProtocolForShareRepositoryInstance& original){   	
   	init(original);  	   	
  };
  
  
  //constructor using CmpiInstance
  Linux_SambaShareProtocolForShareRepositoryInstance::
   Linux_SambaShareProtocolForShareRepositoryInstance (const CmpiInstance& inst, const char* instanceNamespace){
    CmpiData cmpiData;
    init(); 
    
    CmpiObjectPath cop=inst.getObjectPath();
    cop.setNameSpace(instanceNamespace);
    setInstanceName(Linux_SambaShareProtocolForShareInstanceName(cop));
    
  }
  
  
  //Destructor
  Linux_SambaShareProtocolForShareRepositoryInstance::
   ~Linux_SambaShareProtocolForShareRepositoryInstance(){
   	reset();  	  
  };
  
  
  //copy operator
  Linux_SambaShareProtocolForShareRepositoryInstance&
   Linux_SambaShareProtocolForShareRepositoryInstance::operator=
   (const Linux_SambaShareProtocolForShareRepositoryInstance& original){   	
   	init(original);
   	return *this;
  };
  
  
  //converts to CmpiInstance
  CmpiInstance Linux_SambaShareProtocolForShareRepositoryInstance::
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
  unsigned int Linux_SambaShareProtocolForShareRepositoryInstance::
   isInstanceNameSet() const{
  	return isSet.instanceName;
  }
  
  const Linux_SambaShareProtocolForShareInstanceName&
    Linux_SambaShareProtocolForShareRepositoryInstance::getInstanceName() const{

    if(!isSet.instanceName)
   	  throw CmpiErrorFormater::getErrorException(
   	   CmpiErrorFormater::NOT_SET,
   	   "InstanceName not set in Linux_SambaShareProtocolForShare instance");
  		
   	return m_instanceName;
  }

  void Linux_SambaShareProtocolForShareRepositoryInstance::setInstanceName(
   const Linux_SambaShareProtocolForShareInstanceName& val){
    m_instanceName = val;
    isSet.instanceName=1;
  }


  
  //set isSet attributes to FALSE
  void Linux_SambaShareProtocolForShareRepositoryInstance::init(){
   	isSet.instanceName=0;
   	  	
  };
  
  
  //copies another instance properties in this
  void Linux_SambaShareProtocolForShareRepositoryInstance::init
   (const Linux_SambaShareProtocolForShareRepositoryInstance& original){   	
   	init();
   	   	
    if(original.isInstanceNameSet()){
      setInstanceName(original.getInstanceName());
    }    
   }
  
  
  //reset the instance data
  void Linux_SambaShareProtocolForShareRepositoryInstance::reset(){
   	
  	  
  };
  
  
  //*********************************************************
  //Linux_SambaShareProtocolForShareRepositoryInstanceEnumerationElement	
  //*********************************************************
  
  Linux_SambaShareProtocolForShareRepositoryInstanceEnumerationElement::
   Linux_SambaShareProtocolForShareRepositoryInstanceEnumerationElement(){
   	
  	m_elementP=0;
  	m_nextP=0;
  	  
  };
  
  
  Linux_SambaShareProtocolForShareRepositoryInstanceEnumerationElement::
   ~Linux_SambaShareProtocolForShareRepositoryInstanceEnumerationElement(){
   	
  	if (m_elementP!=0)
  	  delete(m_elementP);
  	if (m_nextP!=0)
  	  delete(m_nextP);
  	  
  };

  
  //*********************************************************
  //Linux_SambaShareProtocolForShareRepositoryInstanceNameEnumeration
  //*********************************************************

  Linux_SambaShareProtocolForShareRepositoryInstanceEnumeration::
   Linux_SambaShareProtocolForShareRepositoryInstanceEnumeration(){
   	
  	 firstElementP=0;
     currentElementP=0;
     endElementP=0;
  };
  
  Linux_SambaShareProtocolForShareRepositoryInstanceEnumeration::
   Linux_SambaShareProtocolForShareRepositoryInstanceEnumeration(
   const Linux_SambaShareProtocolForShareRepositoryInstanceEnumeration& original){
   	
     firstElementP=0;
     currentElementP=0;
     endElementP=0;
  	 
     int size=original.getSize();
     for(int i=0;i<size;i++)
       addElement(original.getElement(i));           
  };
  
  	  
  Linux_SambaShareProtocolForShareRepositoryInstanceEnumeration::
   ~Linux_SambaShareProtocolForShareRepositoryInstanceEnumeration(){
   	
  	if (firstElementP!=0)
  	  delete(firstElementP);
  	  	
  };
  
  	  
  void Linux_SambaShareProtocolForShareRepositoryInstanceEnumeration::reset(){
  	
  	currentElementP=firstElementP;
  };
  
  	  
  bool Linux_SambaShareProtocolForShareRepositoryInstanceEnumeration::hasNext() const{
  	
  	return (currentElementP!=0);
  
  };
  
  int Linux_SambaShareProtocolForShareRepositoryInstanceEnumeration::getSize() const{
  	
    int size=0;
    Linux_SambaShareProtocolForShareRepositoryInstanceEnumerationElement* followingP=firstElementP;
  	
  	while(followingP!=0){
        followingP=followingP->m_nextP;
        size++;
    }
  	
    return size;
    
  };
  
  const Linux_SambaShareProtocolForShareRepositoryInstance&  
   Linux_SambaShareProtocolForShareRepositoryInstanceEnumeration::getElement(int pos) const{
   
    Linux_SambaShareProtocolForShareRepositoryInstanceEnumerationElement* followingP=firstElementP;
   
    int i=0;
    while((followingP!=0)&&(i<pos)){
        followingP=followingP->m_nextP;
        i++;
    }
    
    return *(followingP->m_elementP);
  };
  
  	  
  const Linux_SambaShareProtocolForShareRepositoryInstance&
   Linux_SambaShareProtocolForShareRepositoryInstanceEnumeration::getNext() {
   	
  	 Linux_SambaShareProtocolForShareRepositoryInstanceEnumerationElement* currentP=
  	  currentElementP;
  	 currentElementP=currentElementP->m_nextP;
  	 
  	 return *(currentP->m_elementP);
  };
  	  
  void Linux_SambaShareProtocolForShareRepositoryInstanceEnumeration::addElement
   (const Linux_SambaShareProtocolForShareRepositoryInstance& elementP){
   	
  	if(firstElementP==0){
  	  firstElementP=new Linux_SambaShareProtocolForShareRepositoryInstanceEnumerationElement();
  	  firstElementP->m_elementP=new Linux_SambaShareProtocolForShareRepositoryInstance(elementP);
  	  endElementP=firstElementP;
  	  currentElementP=firstElementP;
  	}else{
  	  endElementP->m_nextP=new Linux_SambaShareProtocolForShareRepositoryInstanceEnumerationElement();
  	  endElementP=endElementP->m_nextP;
  	  endElementP->m_elementP=new Linux_SambaShareProtocolForShareRepositoryInstance(elementP);
  	}
  };  
}
 
