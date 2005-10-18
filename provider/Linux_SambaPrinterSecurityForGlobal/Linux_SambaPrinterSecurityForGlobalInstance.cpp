/**
 *  Linux_SambaPrinterSecurityForGlobalInstance.cpp
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


#include "Linux_SambaPrinterSecurityForGlobalInstance.h"
#include "CmpiData.h"
#include "CmpiString.h"
#include "CmpiArray.h"
#include <string>

namespace genProvider {

  //*********************************************************
  //Linux_SambaPrinterSecurityForGlobalInstance
  //*********************************************************

  //empty constructor
  Linux_SambaPrinterSecurityForGlobalInstance::
   Linux_SambaPrinterSecurityForGlobalInstance(){   	
   	init();  	   	
  };
  
  
  //copy constructor	
  Linux_SambaPrinterSecurityForGlobalInstance::
   Linux_SambaPrinterSecurityForGlobalInstance
   (const Linux_SambaPrinterSecurityForGlobalInstance& original){   	
   	init(original);  	   	
  };
  
  
  //constructor using CmpiInstance
  Linux_SambaPrinterSecurityForGlobalInstance::
   Linux_SambaPrinterSecurityForGlobalInstance (const CmpiInstance& inst, const char* instanceNamespace){
    CmpiData cmpiData;
    init(); 
    
    CmpiObjectPath cop=inst.getObjectPath();
    cop.setNameSpace(instanceNamespace);
    setInstanceName(Linux_SambaPrinterSecurityForGlobalInstanceName(cop));
    
    cmpiData = inst.getProperty("IsCurrent");
    if(!cmpiData.isNullValue()){
      CMPIUint16 IsCurrent = cmpiData;
      setIsCurrent(IsCurrent);
    }
    
    cmpiData = inst.getProperty("IsDefault");
    if(!cmpiData.isNullValue()){
      CMPIUint16 IsDefault = cmpiData;
      setIsDefault(IsDefault);
    }
    
  }
  
  
  //Destructor
  Linux_SambaPrinterSecurityForGlobalInstance::
   ~Linux_SambaPrinterSecurityForGlobalInstance(){
   	reset();  	  
  };
  
  
  //copy operator
  Linux_SambaPrinterSecurityForGlobalInstance&
   Linux_SambaPrinterSecurityForGlobalInstance::operator=
   (const Linux_SambaPrinterSecurityForGlobalInstance& original){   	
   	init(original);
   	return *this;
  };
  
  
  //converts to CmpiInstance
  CmpiInstance Linux_SambaPrinterSecurityForGlobalInstance::
   getCmpiInstance(const char** properties) const{
   	
   	CmpiObjectPath objectPath=getInstanceName().getObjectPath();      
    CmpiInstance cmpiInstance(objectPath);    
    getInstanceName().fillKeys(cmpiInstance);
    
    if (properties) {
	  cmpiInstance.setPropertyFilter(properties,0);
    }

  	if(isSet.IsCurrent){
  	  cmpiInstance.setProperty("IsCurrent",CmpiData(m_IsCurrent));
  	}

  	if(isSet.IsDefault){
  	  cmpiInstance.setProperty("IsDefault",CmpiData(m_IsDefault));
  	}
  	
  	return cmpiInstance;
  	
  }
  
  
  //InstanceName related methods
  unsigned int Linux_SambaPrinterSecurityForGlobalInstance::
   isInstanceNameSet() const{
  	return isSet.instanceName;
  }
  
  const Linux_SambaPrinterSecurityForGlobalInstanceName&
    Linux_SambaPrinterSecurityForGlobalInstance::getInstanceName() const{

    if(!isSet.instanceName)
   	  throw CmpiErrorFormater::getErrorException(
   	   CmpiErrorFormater::NOT_SET,
   	   "InstanceName not set in Linux_SambaPrinterSecurityForGlobal instance");
  		
   	return m_instanceName;
  }

  void Linux_SambaPrinterSecurityForGlobalInstance::setInstanceName(
   const Linux_SambaPrinterSecurityForGlobalInstanceName& val){
    m_instanceName = val;
    isSet.instanceName=1;
  }
       
  //IsCurrent related methods
  unsigned int Linux_SambaPrinterSecurityForGlobalInstance::isIsCurrentSet() const{
    return isSet.IsCurrent;
  }
  void Linux_SambaPrinterSecurityForGlobalInstance::
   setIsCurrent(const CMPIUint16 val){
    m_IsCurrent = val;
    isSet.IsCurrent=1;
  }       
  const CMPIUint16 Linux_SambaPrinterSecurityForGlobalInstance::
   getIsCurrent() const{
    
    if(!isSet.IsCurrent)
   	  throw CmpiErrorFormater::getErrorException(
   	   CmpiErrorFormater::NOT_SET,
   	   "IsCurrent not set");
   	   	
    return m_IsCurrent;
  }
       
  //IsDefault related methods
  unsigned int Linux_SambaPrinterSecurityForGlobalInstance::isIsDefaultSet() const{
    return isSet.IsDefault;
  }
  void Linux_SambaPrinterSecurityForGlobalInstance::
   setIsDefault(const CMPIUint16 val){
    m_IsDefault = val;
    isSet.IsDefault=1;
  }       
  const CMPIUint16 Linux_SambaPrinterSecurityForGlobalInstance::
   getIsDefault() const{
    
    if(!isSet.IsDefault)
   	  throw CmpiErrorFormater::getErrorException(
   	   CmpiErrorFormater::NOT_SET,
   	   "IsDefault not set");
   	   	
    return m_IsDefault;
  }


  
  //set isSet attributes to FALSE
  void Linux_SambaPrinterSecurityForGlobalInstance::init(){
   	isSet.instanceName=0;
   	   	
    isSet.IsCurrent=0;   	
    isSet.IsDefault=0;  	
  };
  
  
  //copies another instance properties in this
  void Linux_SambaPrinterSecurityForGlobalInstance::init
   (const Linux_SambaPrinterSecurityForGlobalInstance& original){   	
   	init();
   	   	
    if(original.isInstanceNameSet()){
      setInstanceName(original.getInstanceName());
    }   	
    if(original.isIsCurrentSet()){
      const CMPIUint16 IsCurrentOriginal=original.getIsCurrent();
      setIsCurrent(IsCurrentOriginal);
    }   	
    if(original.isIsDefaultSet()){
      const CMPIUint16 IsDefaultOriginal=original.getIsDefault();
      setIsDefault(IsDefaultOriginal);
    }    
   }
  
  
  //reset the instance data
  void Linux_SambaPrinterSecurityForGlobalInstance::reset(){
   	
  	  
  };
  
  
  //*********************************************************
  //Linux_SambaPrinterSecurityForGlobalInstanceEnumerationElement	
  //*********************************************************
  
  Linux_SambaPrinterSecurityForGlobalInstanceEnumerationElement::
   Linux_SambaPrinterSecurityForGlobalInstanceEnumerationElement(){
   	
  	m_elementP=0;
  	m_nextP=0;
  	  
  };
  
  
  Linux_SambaPrinterSecurityForGlobalInstanceEnumerationElement::
   ~Linux_SambaPrinterSecurityForGlobalInstanceEnumerationElement(){
   	
  	if (m_elementP!=0)
  	  delete(m_elementP);
  	if (m_nextP!=0)
  	  delete(m_nextP);
  	  
  };

  
  //*********************************************************
  //Linux_SambaPrinterSecurityForGlobalInstanceNameEnumeration
  //*********************************************************

  Linux_SambaPrinterSecurityForGlobalInstanceEnumeration::
   Linux_SambaPrinterSecurityForGlobalInstanceEnumeration(){
   	
  	 firstElementP=0;
     currentElementP=0;
     endElementP=0;
  };
  
  Linux_SambaPrinterSecurityForGlobalInstanceEnumeration::
   Linux_SambaPrinterSecurityForGlobalInstanceEnumeration(
   const Linux_SambaPrinterSecurityForGlobalInstanceEnumeration& original){
   	
     firstElementP=0;
     currentElementP=0;
     endElementP=0;
  	 
     int size=original.getSize();
     for(int i=0;i<size;i++)
       addElement(original.getElement(i));           
  };
  
  	  
  Linux_SambaPrinterSecurityForGlobalInstanceEnumeration::
   ~Linux_SambaPrinterSecurityForGlobalInstanceEnumeration(){
   	
  	if (firstElementP!=0)
  	  delete(firstElementP);
  	  	
  };
  
  	  
  void Linux_SambaPrinterSecurityForGlobalInstanceEnumeration::reset(){
  	
  	currentElementP=firstElementP;
  };
  
  	  
  bool Linux_SambaPrinterSecurityForGlobalInstanceEnumeration::hasNext() const{
  	
  	return (currentElementP!=0);
  
  };
  
  int Linux_SambaPrinterSecurityForGlobalInstanceEnumeration::getSize() const{
  	
    int size=0;
    Linux_SambaPrinterSecurityForGlobalInstanceEnumerationElement* followingP=firstElementP;
  	
  	while(followingP!=0){
        followingP=followingP->m_nextP;
        size++;
    }
  	
    return size;
    
  };
  
  const Linux_SambaPrinterSecurityForGlobalInstance&  
   Linux_SambaPrinterSecurityForGlobalInstanceEnumeration::getElement(int pos) const{
   
    Linux_SambaPrinterSecurityForGlobalInstanceEnumerationElement* followingP=firstElementP;
   
    int i=0;
    while((followingP!=0)&&(i<pos)){
        followingP=followingP->m_nextP;
        i++;
    }
    
    return *(followingP->m_elementP);
  };
  
  	  
  const Linux_SambaPrinterSecurityForGlobalInstance&
   Linux_SambaPrinterSecurityForGlobalInstanceEnumeration::getNext() {
   	
  	 Linux_SambaPrinterSecurityForGlobalInstanceEnumerationElement* currentP=
  	  currentElementP;
  	 currentElementP=currentElementP->m_nextP;
  	 
  	 return *(currentP->m_elementP);
  };
  	  
  void Linux_SambaPrinterSecurityForGlobalInstanceEnumeration::addElement
   (const Linux_SambaPrinterSecurityForGlobalInstance& elementP){
   	
  	if(firstElementP==0){
  	  firstElementP=new Linux_SambaPrinterSecurityForGlobalInstanceEnumerationElement();
  	  firstElementP->m_elementP=new Linux_SambaPrinterSecurityForGlobalInstance(elementP);
  	  endElementP=firstElementP;
  	  currentElementP=firstElementP;
  	}else{
  	  endElementP->m_nextP=new Linux_SambaPrinterSecurityForGlobalInstanceEnumerationElement();
  	  endElementP=endElementP->m_nextP;
  	  endElementP->m_elementP=new Linux_SambaPrinterSecurityForGlobalInstance(elementP);
  	}
  };  
}
 
