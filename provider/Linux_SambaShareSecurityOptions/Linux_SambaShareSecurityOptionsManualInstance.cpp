/**
 *  Linux_SambaShareSecurityOptionsManualInstance.cpp
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


#include "Linux_SambaShareSecurityOptionsManualInstance.h"
#include "CmpiData.h"
#include "CmpiString.h"
#include "CmpiArray.h"
#include <string>

namespace genProvider {

  //*********************************************************
  //Linux_SambaShareSecurityOptionsManualInstance
  //*********************************************************

  //empty constructor
  Linux_SambaShareSecurityOptionsManualInstance::
   Linux_SambaShareSecurityOptionsManualInstance(){   	
   	init();  	   	
  };
  
  
  //copy constructor	
  Linux_SambaShareSecurityOptionsManualInstance::
   Linux_SambaShareSecurityOptionsManualInstance
   (const Linux_SambaShareSecurityOptionsManualInstance& original){   	
   	init(original);  	   	
  };
  
  
  //constructor using CmpiInstance
  Linux_SambaShareSecurityOptionsManualInstance::
   Linux_SambaShareSecurityOptionsManualInstance (const CmpiInstance& inst, const char* instanceNamespace){
    CmpiData cmpiData;
    init(); 
    
    CmpiObjectPath cop=inst.getObjectPath();
    cop.setNameSpace(instanceNamespace);
    setInstanceName(Linux_SambaShareSecurityOptionsInstanceName(cop));
    
    cmpiData = inst.getProperty("CreateMask");
    if(!cmpiData.isNullValue()){
      CMPIUint16 CreateMask = cmpiData;
      setCreateMask(CreateMask);
    }
    
    cmpiData = inst.getProperty("DirectoryMask");
    if(!cmpiData.isNullValue()){
      CMPIUint16 DirectoryMask = cmpiData;
      setDirectoryMask(DirectoryMask);
    }
    
    cmpiData = inst.getProperty("DirectorySecurityMask");
    if(!cmpiData.isNullValue()){
      CMPIUint16 DirectorySecurityMask = cmpiData;
      setDirectorySecurityMask(DirectorySecurityMask);
    }
    
  }
  
  
  //Destructor
  Linux_SambaShareSecurityOptionsManualInstance::
   ~Linux_SambaShareSecurityOptionsManualInstance(){
   	reset();  	  
  };
  
  
  //copy operator
  Linux_SambaShareSecurityOptionsManualInstance&
   Linux_SambaShareSecurityOptionsManualInstance::operator=
   (const Linux_SambaShareSecurityOptionsManualInstance& original){   	
   	init(original);
   	return *this;
  };
  
  
  //converts to CmpiInstance
  CmpiInstance Linux_SambaShareSecurityOptionsManualInstance::
   getCmpiInstance(const char** properties) const{
   	
   	CmpiObjectPath objectPath=getInstanceName().getObjectPath();      
    CmpiInstance cmpiInstance(objectPath);    
    getInstanceName().fillKeys(cmpiInstance);
    
    if (properties) {
	  cmpiInstance.setPropertyFilter(properties,0);
    }

  	if(isSet.CreateMask){
  	  cmpiInstance.setProperty("CreateMask",CmpiData(m_CreateMask));
  	}

  	if(isSet.DirectoryMask){
  	  cmpiInstance.setProperty("DirectoryMask",CmpiData(m_DirectoryMask));
  	}

  	if(isSet.DirectorySecurityMask){
  	  cmpiInstance.setProperty("DirectorySecurityMask",CmpiData(m_DirectorySecurityMask));
  	}
  	
  	return cmpiInstance;
  	
  }
  
  
  //InstanceName related methods
  unsigned int Linux_SambaShareSecurityOptionsManualInstance::
   isInstanceNameSet() const{
  	return isSet.instanceName;
  }
  
  const Linux_SambaShareSecurityOptionsInstanceName&
    Linux_SambaShareSecurityOptionsManualInstance::getInstanceName() const{

    if(!isSet.instanceName)
   	  throw CmpiErrorFormater::getErrorException(
   	   CmpiErrorFormater::NOT_SET,
   	   "InstanceName not set in Linux_SambaShareSecurityOptions instance");
  		
   	return m_instanceName;
  }

  void Linux_SambaShareSecurityOptionsManualInstance::setInstanceName(
   const Linux_SambaShareSecurityOptionsInstanceName& val){
    m_instanceName = val;
    isSet.instanceName=1;
  }
       
  //CreateMask related methods
  unsigned int Linux_SambaShareSecurityOptionsManualInstance::isCreateMaskSet() const{
    return isSet.CreateMask;
  }
  void Linux_SambaShareSecurityOptionsManualInstance::
   setCreateMask(const CMPIUint16 val){
    m_CreateMask = val;
    isSet.CreateMask=1;
  }       
  const CMPIUint16 Linux_SambaShareSecurityOptionsManualInstance::
   getCreateMask() const{
    
    if(!isSet.CreateMask)
   	  throw CmpiErrorFormater::getErrorException(
   	   CmpiErrorFormater::NOT_SET,
   	   "CreateMask not set");
   	   	
    return m_CreateMask;
  }
       
  //DirectoryMask related methods
  unsigned int Linux_SambaShareSecurityOptionsManualInstance::isDirectoryMaskSet() const{
    return isSet.DirectoryMask;
  }
  void Linux_SambaShareSecurityOptionsManualInstance::
   setDirectoryMask(const CMPIUint16 val){
    m_DirectoryMask = val;
    isSet.DirectoryMask=1;
  }       
  const CMPIUint16 Linux_SambaShareSecurityOptionsManualInstance::
   getDirectoryMask() const{
    
    if(!isSet.DirectoryMask)
   	  throw CmpiErrorFormater::getErrorException(
   	   CmpiErrorFormater::NOT_SET,
   	   "DirectoryMask not set");
   	   	
    return m_DirectoryMask;
  }
       
  //DirectorySecurityMask related methods
  unsigned int Linux_SambaShareSecurityOptionsManualInstance::isDirectorySecurityMaskSet() const{
    return isSet.DirectorySecurityMask;
  }
  void Linux_SambaShareSecurityOptionsManualInstance::
   setDirectorySecurityMask(const CMPIUint16 val){
    m_DirectorySecurityMask = val;
    isSet.DirectorySecurityMask=1;
  }       
  const CMPIUint16 Linux_SambaShareSecurityOptionsManualInstance::
   getDirectorySecurityMask() const{
    
    if(!isSet.DirectorySecurityMask)
   	  throw CmpiErrorFormater::getErrorException(
   	   CmpiErrorFormater::NOT_SET,
   	   "DirectorySecurityMask not set");
   	   	
    return m_DirectorySecurityMask;
  }


  
  //set isSet attributes to FALSE
  void Linux_SambaShareSecurityOptionsManualInstance::init(){
   	isSet.instanceName=0;
   	   	
    isSet.CreateMask=0;   	
    isSet.DirectoryMask=0;   	
    isSet.DirectorySecurityMask=0;  	
  };
  
  
  //copies another instance properties in this
  void Linux_SambaShareSecurityOptionsManualInstance::init
   (const Linux_SambaShareSecurityOptionsManualInstance& original){   	
   	init();
   	   	
    if(original.isInstanceNameSet()){
      setInstanceName(original.getInstanceName());
    }   	
    if(original.isCreateMaskSet()){
      const CMPIUint16 CreateMaskOriginal=original.getCreateMask();
      setCreateMask(CreateMaskOriginal);
    }   	
    if(original.isDirectoryMaskSet()){
      const CMPIUint16 DirectoryMaskOriginal=original.getDirectoryMask();
      setDirectoryMask(DirectoryMaskOriginal);
    }   	
    if(original.isDirectorySecurityMaskSet()){
      const CMPIUint16 DirectorySecurityMaskOriginal=original.getDirectorySecurityMask();
      setDirectorySecurityMask(DirectorySecurityMaskOriginal);
    }    
   }
  
  
  //reset the instance data
  void Linux_SambaShareSecurityOptionsManualInstance::reset(){
   	
  	  
  };
  
  
  //*********************************************************
  //Linux_SambaShareSecurityOptionsManualInstanceEnumerationElement	
  //*********************************************************
  
  Linux_SambaShareSecurityOptionsManualInstanceEnumerationElement::
   Linux_SambaShareSecurityOptionsManualInstanceEnumerationElement(){
   	
  	m_elementP=0;
  	m_nextP=0;
  	  
  };
  
  
  Linux_SambaShareSecurityOptionsManualInstanceEnumerationElement::
   ~Linux_SambaShareSecurityOptionsManualInstanceEnumerationElement(){
   	
  	if (m_elementP!=0)
  	  delete(m_elementP);
  	if (m_nextP!=0)
  	  delete(m_nextP);
  	  
  };

  
  //*********************************************************
  //Linux_SambaShareSecurityOptionsManualInstanceNameEnumeration
  //*********************************************************

  Linux_SambaShareSecurityOptionsManualInstanceEnumeration::
   Linux_SambaShareSecurityOptionsManualInstanceEnumeration(){
   	
  	 firstElementP=0;
     currentElementP=0;
     endElementP=0;
  };
  
  Linux_SambaShareSecurityOptionsManualInstanceEnumeration::
   Linux_SambaShareSecurityOptionsManualInstanceEnumeration(
   const Linux_SambaShareSecurityOptionsManualInstanceEnumeration& original){
   	
     firstElementP=0;
     currentElementP=0;
     endElementP=0;
  	 
     int size=original.getSize();
     for(int i=0;i<size;i++)
       addElement(original.getElement(i));           
  };
  
  	  
  Linux_SambaShareSecurityOptionsManualInstanceEnumeration::
   ~Linux_SambaShareSecurityOptionsManualInstanceEnumeration(){
   	
  	if (firstElementP!=0)
  	  delete(firstElementP);
  	  	
  };
  
  	  
  void Linux_SambaShareSecurityOptionsManualInstanceEnumeration::reset(){
  	
  	currentElementP=firstElementP;
  };
  
  	  
  bool Linux_SambaShareSecurityOptionsManualInstanceEnumeration::hasNext() const{
  	
  	return (currentElementP!=0);
  
  };
  
  int Linux_SambaShareSecurityOptionsManualInstanceEnumeration::getSize() const{
  	
    int size=0;
    Linux_SambaShareSecurityOptionsManualInstanceEnumerationElement* followingP=firstElementP;
  	
  	while(followingP!=0){
        followingP=followingP->m_nextP;
        size++;
    }
  	
    return size;
    
  };
  
  const Linux_SambaShareSecurityOptionsManualInstance&  
   Linux_SambaShareSecurityOptionsManualInstanceEnumeration::getElement(int pos) const{
   
    Linux_SambaShareSecurityOptionsManualInstanceEnumerationElement* followingP=firstElementP;
   
    int i=0;
    while((followingP!=0)&&(i<pos)){
        followingP=followingP->m_nextP;
        i++;
    }
    
    return *(followingP->m_elementP);
  };
  
  	  
  const Linux_SambaShareSecurityOptionsManualInstance&
   Linux_SambaShareSecurityOptionsManualInstanceEnumeration::getNext() {
   	
  	 Linux_SambaShareSecurityOptionsManualInstanceEnumerationElement* currentP=
  	  currentElementP;
  	 currentElementP=currentElementP->m_nextP;
  	 
  	 return *(currentP->m_elementP);
  };
  	  
  void Linux_SambaShareSecurityOptionsManualInstanceEnumeration::addElement
   (const Linux_SambaShareSecurityOptionsManualInstance& elementP){
   	
  	if(firstElementP==0){
  	  firstElementP=new Linux_SambaShareSecurityOptionsManualInstanceEnumerationElement();
  	  firstElementP->m_elementP=new Linux_SambaShareSecurityOptionsManualInstance(elementP);
  	  endElementP=firstElementP;
  	  currentElementP=firstElementP;
  	}else{
  	  endElementP->m_nextP=new Linux_SambaShareSecurityOptionsManualInstanceEnumerationElement();
  	  endElementP=endElementP->m_nextP;
  	  endElementP->m_elementP=new Linux_SambaShareSecurityOptionsManualInstance(elementP);
  	}
  };  
}
 
