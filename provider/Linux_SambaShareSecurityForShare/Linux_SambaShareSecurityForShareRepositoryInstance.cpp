/**
 *  Linux_SambaShareSecurityForShareRepositoryInstance.cpp
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


#include "Linux_SambaShareSecurityForShareRepositoryInstance.h"
#include "CmpiData.h"
#include "CmpiString.h"
#include "CmpiArray.h"
#include <string>

namespace genProvider {

  //*********************************************************
  //Linux_SambaShareSecurityForShareRepositoryInstance
  //*********************************************************

  //empty constructor
  Linux_SambaShareSecurityForShareRepositoryInstance::
   Linux_SambaShareSecurityForShareRepositoryInstance(){   	
   	init();  	   	
  };
  
  
  //copy constructor	
  Linux_SambaShareSecurityForShareRepositoryInstance::
   Linux_SambaShareSecurityForShareRepositoryInstance
   (const Linux_SambaShareSecurityForShareRepositoryInstance& original){   	
   	init(original);  	   	
  };
  
  
  //constructor using CmpiInstance
  Linux_SambaShareSecurityForShareRepositoryInstance::
   Linux_SambaShareSecurityForShareRepositoryInstance (const CmpiInstance& inst, const char* instanceNamespace){
    CmpiData cmpiData;
    init(); 
    
    CmpiObjectPath cop=inst.getObjectPath();
    cop.setNameSpace(instanceNamespace);
    setInstanceName(Linux_SambaShareSecurityForShareInstanceName(cop));
    
  }
  
  
  //Destructor
  Linux_SambaShareSecurityForShareRepositoryInstance::
   ~Linux_SambaShareSecurityForShareRepositoryInstance(){
   	reset();  	  
  };
  
  
  //copy operator
  Linux_SambaShareSecurityForShareRepositoryInstance&
   Linux_SambaShareSecurityForShareRepositoryInstance::operator=
   (const Linux_SambaShareSecurityForShareRepositoryInstance& original){   	
   	init(original);
   	return *this;
  };
  
  
  //converts to CmpiInstance
  CmpiInstance Linux_SambaShareSecurityForShareRepositoryInstance::
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
  unsigned int Linux_SambaShareSecurityForShareRepositoryInstance::
   isInstanceNameSet() const{
  	return isSet.instanceName;
  }
  
  const Linux_SambaShareSecurityForShareInstanceName&
    Linux_SambaShareSecurityForShareRepositoryInstance::getInstanceName() const{

    if(!isSet.instanceName)
   	  throw CmpiErrorFormater::getErrorException(
   	   CmpiErrorFormater::NOT_SET,
   	   "InstanceName not set in Linux_SambaShareSecurityForShare instance");
  		
   	return m_instanceName;
  }

  void Linux_SambaShareSecurityForShareRepositoryInstance::setInstanceName(
   const Linux_SambaShareSecurityForShareInstanceName& val){
    m_instanceName = val;
    isSet.instanceName=1;
  }


  
  //set isSet attributes to FALSE
  void Linux_SambaShareSecurityForShareRepositoryInstance::init(){
   	isSet.instanceName=0;
   	  	
  };
  
  
  //copies another instance properties in this
  void Linux_SambaShareSecurityForShareRepositoryInstance::init
   (const Linux_SambaShareSecurityForShareRepositoryInstance& original){   	
   	init();
   	   	
    if(original.isInstanceNameSet()){
      setInstanceName(original.getInstanceName());
    }    
   }
  
  
  //reset the instance data
  void Linux_SambaShareSecurityForShareRepositoryInstance::reset(){
   	
  	  
  };
  
  
  //*********************************************************
  //Linux_SambaShareSecurityForShareRepositoryInstanceEnumerationElement	
  //*********************************************************
  
  Linux_SambaShareSecurityForShareRepositoryInstanceEnumerationElement::
   Linux_SambaShareSecurityForShareRepositoryInstanceEnumerationElement(){
   	
  	m_elementP=0;
  	m_nextP=0;
  	  
  };
  
  
  Linux_SambaShareSecurityForShareRepositoryInstanceEnumerationElement::
   ~Linux_SambaShareSecurityForShareRepositoryInstanceEnumerationElement(){
   	
  	if (m_elementP!=0)
  	  delete(m_elementP);
  	if (m_nextP!=0)
  	  delete(m_nextP);
  	  
  };

  
  //*********************************************************
  //Linux_SambaShareSecurityForShareRepositoryInstanceNameEnumeration
  //*********************************************************

  Linux_SambaShareSecurityForShareRepositoryInstanceEnumeration::
   Linux_SambaShareSecurityForShareRepositoryInstanceEnumeration(){
   	
  	 firstElementP=0;
     currentElementP=0;
     endElementP=0;
  };
  
  Linux_SambaShareSecurityForShareRepositoryInstanceEnumeration::
   Linux_SambaShareSecurityForShareRepositoryInstanceEnumeration(
   const Linux_SambaShareSecurityForShareRepositoryInstanceEnumeration& original){
   	
     firstElementP=0;
     currentElementP=0;
     endElementP=0;
  	 
     int size=original.getSize();
     for(int i=0;i<size;i++)
       addElement(original.getElement(i));           
  };
  
  	  
  Linux_SambaShareSecurityForShareRepositoryInstanceEnumeration::
   ~Linux_SambaShareSecurityForShareRepositoryInstanceEnumeration(){
   	
  	if (firstElementP!=0)
  	  delete(firstElementP);
  	  	
  };
  
  	  
  void Linux_SambaShareSecurityForShareRepositoryInstanceEnumeration::reset(){
  	
  	currentElementP=firstElementP;
  };
  
  	  
  bool Linux_SambaShareSecurityForShareRepositoryInstanceEnumeration::hasNext() const{
  	
  	return (currentElementP!=0);
  
  };
  
  int Linux_SambaShareSecurityForShareRepositoryInstanceEnumeration::getSize() const{
  	
    int size=0;
    Linux_SambaShareSecurityForShareRepositoryInstanceEnumerationElement* followingP=firstElementP;
  	
  	while(followingP!=0){
        followingP=followingP->m_nextP;
        size++;
    }
  	
    return size;
    
  };
  
  const Linux_SambaShareSecurityForShareRepositoryInstance&  
   Linux_SambaShareSecurityForShareRepositoryInstanceEnumeration::getElement(int pos) const{
   
    Linux_SambaShareSecurityForShareRepositoryInstanceEnumerationElement* followingP=firstElementP;
   
    int i=0;
    while((followingP!=0)&&(i<pos)){
        followingP=followingP->m_nextP;
        i++;
    }
    
    return *(followingP->m_elementP);
  };
  
  	  
  const Linux_SambaShareSecurityForShareRepositoryInstance&
   Linux_SambaShareSecurityForShareRepositoryInstanceEnumeration::getNext() {
   	
  	 Linux_SambaShareSecurityForShareRepositoryInstanceEnumerationElement* currentP=
  	  currentElementP;
  	 currentElementP=currentElementP->m_nextP;
  	 
  	 return *(currentP->m_elementP);
  };
  	  
  void Linux_SambaShareSecurityForShareRepositoryInstanceEnumeration::addElement
   (const Linux_SambaShareSecurityForShareRepositoryInstance& elementP){
   	
  	if(firstElementP==0){
  	  firstElementP=new Linux_SambaShareSecurityForShareRepositoryInstanceEnumerationElement();
  	  firstElementP->m_elementP=new Linux_SambaShareSecurityForShareRepositoryInstance(elementP);
  	  endElementP=firstElementP;
  	  currentElementP=firstElementP;
  	}else{
  	  endElementP->m_nextP=new Linux_SambaShareSecurityForShareRepositoryInstanceEnumerationElement();
  	  endElementP=endElementP->m_nextP;
  	  endElementP->m_elementP=new Linux_SambaShareSecurityForShareRepositoryInstance(elementP);
  	}
  };  
}
 
