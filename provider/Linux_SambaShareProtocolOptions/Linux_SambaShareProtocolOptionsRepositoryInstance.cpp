/**
 *  Linux_SambaShareProtocolOptionsRepositoryInstance.cpp
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


#include "Linux_SambaShareProtocolOptionsRepositoryInstance.h"
#include "CmpiData.h"
#include "CmpiString.h"
#include "CmpiArray.h"
#include <string>

namespace genProvider {

  //*********************************************************
  //Linux_SambaShareProtocolOptionsRepositoryInstance
  //*********************************************************

  //empty constructor
  Linux_SambaShareProtocolOptionsRepositoryInstance::
   Linux_SambaShareProtocolOptionsRepositoryInstance(){   	
   	init();  	   	
  };
  
  
  //copy constructor	
  Linux_SambaShareProtocolOptionsRepositoryInstance::
   Linux_SambaShareProtocolOptionsRepositoryInstance
   (const Linux_SambaShareProtocolOptionsRepositoryInstance& original){   	
   	init(original);  	   	
  };
  
  
  //constructor using CmpiInstance
  Linux_SambaShareProtocolOptionsRepositoryInstance::
   Linux_SambaShareProtocolOptionsRepositoryInstance (const CmpiInstance& inst, const char* instanceNamespace){
    CmpiData cmpiData;
    init(); 
    
    CmpiObjectPath cop=inst.getObjectPath();
    cop.setNameSpace(instanceNamespace);
    setInstanceName(Linux_SambaShareProtocolOptionsInstanceName(cop));
    
  }
  
  
  //Destructor
  Linux_SambaShareProtocolOptionsRepositoryInstance::
   ~Linux_SambaShareProtocolOptionsRepositoryInstance(){
   	reset();  	  
  };
  
  
  //copy operator
  Linux_SambaShareProtocolOptionsRepositoryInstance&
   Linux_SambaShareProtocolOptionsRepositoryInstance::operator=
   (const Linux_SambaShareProtocolOptionsRepositoryInstance& original){   	
   	init(original);
   	return *this;
  };
  
  
  //converts to CmpiInstance
  CmpiInstance Linux_SambaShareProtocolOptionsRepositoryInstance::
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
  unsigned int Linux_SambaShareProtocolOptionsRepositoryInstance::
   isInstanceNameSet() const{
  	return isSet.instanceName;
  }
  
  const Linux_SambaShareProtocolOptionsInstanceName&
    Linux_SambaShareProtocolOptionsRepositoryInstance::getInstanceName() const{

    if(!isSet.instanceName)
   	  throw CmpiErrorFormater::getErrorException(
   	   CmpiErrorFormater::NOT_SET,
   	   "InstanceName not set in Linux_SambaShareProtocolOptions instance");
  		
   	return m_instanceName;
  }

  void Linux_SambaShareProtocolOptionsRepositoryInstance::setInstanceName(
   const Linux_SambaShareProtocolOptionsInstanceName& val){
    m_instanceName = val;
    isSet.instanceName=1;
  }


  
  //set isSet attributes to FALSE
  void Linux_SambaShareProtocolOptionsRepositoryInstance::init(){
   	isSet.instanceName=0;
   	  	
  };
  
  
  //copies another instance properties in this
  void Linux_SambaShareProtocolOptionsRepositoryInstance::init
   (const Linux_SambaShareProtocolOptionsRepositoryInstance& original){   	
   	init();
   	   	
    if(original.isInstanceNameSet()){
      setInstanceName(original.getInstanceName());
    }    
   }
  
  
  //reset the instance data
  void Linux_SambaShareProtocolOptionsRepositoryInstance::reset(){
   	
  	  
  };
  
  
  //*********************************************************
  //Linux_SambaShareProtocolOptionsRepositoryInstanceEnumerationElement	
  //*********************************************************
  
  Linux_SambaShareProtocolOptionsRepositoryInstanceEnumerationElement::
   Linux_SambaShareProtocolOptionsRepositoryInstanceEnumerationElement(){
   	
  	m_elementP=0;
  	m_nextP=0;
  	  
  };
  
  
  Linux_SambaShareProtocolOptionsRepositoryInstanceEnumerationElement::
   ~Linux_SambaShareProtocolOptionsRepositoryInstanceEnumerationElement(){
   	
  	if (m_elementP!=0)
  	  delete(m_elementP);
  	if (m_nextP!=0)
  	  delete(m_nextP);
  	  
  };

  
  //*********************************************************
  //Linux_SambaShareProtocolOptionsRepositoryInstanceNameEnumeration
  //*********************************************************

  Linux_SambaShareProtocolOptionsRepositoryInstanceEnumeration::
   Linux_SambaShareProtocolOptionsRepositoryInstanceEnumeration(){
   	
  	 firstElementP=0;
     currentElementP=0;
     endElementP=0;
  };
  
  Linux_SambaShareProtocolOptionsRepositoryInstanceEnumeration::
   Linux_SambaShareProtocolOptionsRepositoryInstanceEnumeration(
   const Linux_SambaShareProtocolOptionsRepositoryInstanceEnumeration& original){
   	
     firstElementP=0;
     currentElementP=0;
     endElementP=0;
  	 
     int size=original.getSize();
     for(int i=0;i<size;i++)
       addElement(original.getElement(i));           
  };
  
  	  
  Linux_SambaShareProtocolOptionsRepositoryInstanceEnumeration::
   ~Linux_SambaShareProtocolOptionsRepositoryInstanceEnumeration(){
   	
  	if (firstElementP!=0)
  	  delete(firstElementP);
  	  	
  };
  
  	  
  void Linux_SambaShareProtocolOptionsRepositoryInstanceEnumeration::reset(){
  	
  	currentElementP=firstElementP;
  };
  
  	  
  bool Linux_SambaShareProtocolOptionsRepositoryInstanceEnumeration::hasNext() const{
  	
  	return (currentElementP!=0);
  
  };
  
  int Linux_SambaShareProtocolOptionsRepositoryInstanceEnumeration::getSize() const{
  	
    int size=0;
    Linux_SambaShareProtocolOptionsRepositoryInstanceEnumerationElement* followingP=firstElementP;
  	
  	while(followingP!=0){
        followingP=followingP->m_nextP;
        size++;
    }
  	
    return size;
    
  };
  
  const Linux_SambaShareProtocolOptionsRepositoryInstance&  
   Linux_SambaShareProtocolOptionsRepositoryInstanceEnumeration::getElement(int pos) const{
   
    Linux_SambaShareProtocolOptionsRepositoryInstanceEnumerationElement* followingP=firstElementP;
   
    int i=0;
    while((followingP!=0)&&(i<pos)){
        followingP=followingP->m_nextP;
        i++;
    }
    
    return *(followingP->m_elementP);
  };
  
  	  
  const Linux_SambaShareProtocolOptionsRepositoryInstance&
   Linux_SambaShareProtocolOptionsRepositoryInstanceEnumeration::getNext() {
   	
  	 Linux_SambaShareProtocolOptionsRepositoryInstanceEnumerationElement* currentP=
  	  currentElementP;
  	 currentElementP=currentElementP->m_nextP;
  	 
  	 return *(currentP->m_elementP);
  };
  	  
  void Linux_SambaShareProtocolOptionsRepositoryInstanceEnumeration::addElement
   (const Linux_SambaShareProtocolOptionsRepositoryInstance& elementP){
   	
  	if(firstElementP==0){
  	  firstElementP=new Linux_SambaShareProtocolOptionsRepositoryInstanceEnumerationElement();
  	  firstElementP->m_elementP=new Linux_SambaShareProtocolOptionsRepositoryInstance(elementP);
  	  endElementP=firstElementP;
  	  currentElementP=firstElementP;
  	}else{
  	  endElementP->m_nextP=new Linux_SambaShareProtocolOptionsRepositoryInstanceEnumerationElement();
  	  endElementP=endElementP->m_nextP;
  	  endElementP->m_elementP=new Linux_SambaShareProtocolOptionsRepositoryInstance(elementP);
  	}
  };  
}
 
