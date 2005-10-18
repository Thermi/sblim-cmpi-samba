/**
 *  Linux_SambaShareSecurityForShareManualInstance.cpp
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


#include "Linux_SambaShareSecurityForShareManualInstance.h"
#include "CmpiData.h"
#include "CmpiString.h"
#include "CmpiArray.h"
#include <string>

namespace genProvider {

  //*********************************************************
  //Linux_SambaShareSecurityForShareManualInstance
  //*********************************************************

  //empty constructor
  Linux_SambaShareSecurityForShareManualInstance::
   Linux_SambaShareSecurityForShareManualInstance(){   	
   	init();  	   	
  };
  
  
  //copy constructor	
  Linux_SambaShareSecurityForShareManualInstance::
   Linux_SambaShareSecurityForShareManualInstance
   (const Linux_SambaShareSecurityForShareManualInstance& original){   	
   	init(original);  	   	
  };
  
  
  //constructor using CmpiInstance
  Linux_SambaShareSecurityForShareManualInstance::
   Linux_SambaShareSecurityForShareManualInstance (const CmpiInstance& inst, const char* instanceNamespace){
    CmpiData cmpiData;
    init(); 
    
    CmpiObjectPath cop=inst.getObjectPath();
    cop.setNameSpace(instanceNamespace);
    setInstanceName(Linux_SambaShareSecurityForShareInstanceName(cop));
    
  }
  
  
  //Destructor
  Linux_SambaShareSecurityForShareManualInstance::
   ~Linux_SambaShareSecurityForShareManualInstance(){
   	reset();  	  
  };
  
  
  //copy operator
  Linux_SambaShareSecurityForShareManualInstance&
   Linux_SambaShareSecurityForShareManualInstance::operator=
   (const Linux_SambaShareSecurityForShareManualInstance& original){   	
   	init(original);
   	return *this;
  };
  
  
  //converts to CmpiInstance
  CmpiInstance Linux_SambaShareSecurityForShareManualInstance::
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
  unsigned int Linux_SambaShareSecurityForShareManualInstance::
   isInstanceNameSet() const{
  	return isSet.instanceName;
  }
  
  const Linux_SambaShareSecurityForShareInstanceName&
    Linux_SambaShareSecurityForShareManualInstance::getInstanceName() const{

    if(!isSet.instanceName)
   	  throw CmpiErrorFormater::getErrorException(
   	   CmpiErrorFormater::NOT_SET,
   	   "InstanceName not set in Linux_SambaShareSecurityForShare instance");
  		
   	return m_instanceName;
  }

  void Linux_SambaShareSecurityForShareManualInstance::setInstanceName(
   const Linux_SambaShareSecurityForShareInstanceName& val){
    m_instanceName = val;
    isSet.instanceName=1;
  }


  
  //set isSet attributes to FALSE
  void Linux_SambaShareSecurityForShareManualInstance::init(){
   	isSet.instanceName=0;
   	  	
  };
  
  
  //copies another instance properties in this
  void Linux_SambaShareSecurityForShareManualInstance::init
   (const Linux_SambaShareSecurityForShareManualInstance& original){   	
   	init();
   	   	
    if(original.isInstanceNameSet()){
      setInstanceName(original.getInstanceName());
    }    
   }
  
  
  //reset the instance data
  void Linux_SambaShareSecurityForShareManualInstance::reset(){
   	
  	  
  };
  
  
  //*********************************************************
  //Linux_SambaShareSecurityForShareManualInstanceEnumerationElement	
  //*********************************************************
  
  Linux_SambaShareSecurityForShareManualInstanceEnumerationElement::
   Linux_SambaShareSecurityForShareManualInstanceEnumerationElement(){
   	
  	m_elementP=0;
  	m_nextP=0;
  	  
  };
  
  
  Linux_SambaShareSecurityForShareManualInstanceEnumerationElement::
   ~Linux_SambaShareSecurityForShareManualInstanceEnumerationElement(){
   	
  	if (m_elementP!=0)
  	  delete(m_elementP);
  	if (m_nextP!=0)
  	  delete(m_nextP);
  	  
  };

  
  //*********************************************************
  //Linux_SambaShareSecurityForShareManualInstanceNameEnumeration
  //*********************************************************

  Linux_SambaShareSecurityForShareManualInstanceEnumeration::
   Linux_SambaShareSecurityForShareManualInstanceEnumeration(){
   	
  	 firstElementP=0;
     currentElementP=0;
     endElementP=0;
  };
  
  Linux_SambaShareSecurityForShareManualInstanceEnumeration::
   Linux_SambaShareSecurityForShareManualInstanceEnumeration(
   const Linux_SambaShareSecurityForShareManualInstanceEnumeration& original){
   	
     firstElementP=0;
     currentElementP=0;
     endElementP=0;
  	 
     int size=original.getSize();
     for(int i=0;i<size;i++)
       addElement(original.getElement(i));           
  };
  
  	  
  Linux_SambaShareSecurityForShareManualInstanceEnumeration::
   ~Linux_SambaShareSecurityForShareManualInstanceEnumeration(){
   	
  	if (firstElementP!=0)
  	  delete(firstElementP);
  	  	
  };
  
  	  
  void Linux_SambaShareSecurityForShareManualInstanceEnumeration::reset(){
  	
  	currentElementP=firstElementP;
  };
  
  	  
  bool Linux_SambaShareSecurityForShareManualInstanceEnumeration::hasNext() const{
  	
  	return (currentElementP!=0);
  
  };
  
  int Linux_SambaShareSecurityForShareManualInstanceEnumeration::getSize() const{
  	
    int size=0;
    Linux_SambaShareSecurityForShareManualInstanceEnumerationElement* followingP=firstElementP;
  	
  	while(followingP!=0){
        followingP=followingP->m_nextP;
        size++;
    }
  	
    return size;
    
  };
  
  const Linux_SambaShareSecurityForShareManualInstance&  
   Linux_SambaShareSecurityForShareManualInstanceEnumeration::getElement(int pos) const{
   
    Linux_SambaShareSecurityForShareManualInstanceEnumerationElement* followingP=firstElementP;
   
    int i=0;
    while((followingP!=0)&&(i<pos)){
        followingP=followingP->m_nextP;
        i++;
    }
    
    return *(followingP->m_elementP);
  };
  
  	  
  const Linux_SambaShareSecurityForShareManualInstance&
   Linux_SambaShareSecurityForShareManualInstanceEnumeration::getNext() {
   	
  	 Linux_SambaShareSecurityForShareManualInstanceEnumerationElement* currentP=
  	  currentElementP;
  	 currentElementP=currentElementP->m_nextP;
  	 
  	 return *(currentP->m_elementP);
  };
  	  
  void Linux_SambaShareSecurityForShareManualInstanceEnumeration::addElement
   (const Linux_SambaShareSecurityForShareManualInstance& elementP){
   	
  	if(firstElementP==0){
  	  firstElementP=new Linux_SambaShareSecurityForShareManualInstanceEnumerationElement();
  	  firstElementP->m_elementP=new Linux_SambaShareSecurityForShareManualInstance(elementP);
  	  endElementP=firstElementP;
  	  currentElementP=firstElementP;
  	}else{
  	  endElementP->m_nextP=new Linux_SambaShareSecurityForShareManualInstanceEnumerationElement();
  	  endElementP=endElementP->m_nextP;
  	  endElementP->m_elementP=new Linux_SambaShareSecurityForShareManualInstance(elementP);
  	}
  };  
}
 
