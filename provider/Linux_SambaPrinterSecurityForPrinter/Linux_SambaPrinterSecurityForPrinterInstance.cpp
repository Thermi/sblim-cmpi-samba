/**
 *  Linux_SambaPrinterSecurityForPrinterInstance.cpp
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


#include "Linux_SambaPrinterSecurityForPrinterInstance.h"
#include "CmpiData.h"
#include "CmpiString.h"
#include "CmpiArray.h"
#include <string>

namespace genProvider {

  //*********************************************************
  //Linux_SambaPrinterSecurityForPrinterInstance
  //*********************************************************

  //empty constructor
  Linux_SambaPrinterSecurityForPrinterInstance::
   Linux_SambaPrinterSecurityForPrinterInstance(){   	
   	init();  	   	
  };
  
  
  //copy constructor	
  Linux_SambaPrinterSecurityForPrinterInstance::
   Linux_SambaPrinterSecurityForPrinterInstance
   (const Linux_SambaPrinterSecurityForPrinterInstance& original){   	
   	init(original);  	   	
  };
  
  
  //constructor using CmpiInstance
  Linux_SambaPrinterSecurityForPrinterInstance::
   Linux_SambaPrinterSecurityForPrinterInstance (const CmpiInstance& inst, const char* instanceNamespace){
    CmpiData cmpiData;
    init(); 
    
    CmpiObjectPath cop=inst.getObjectPath();
    cop.setNameSpace(instanceNamespace);
    setInstanceName(Linux_SambaPrinterSecurityForPrinterInstanceName(cop));
    
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
  Linux_SambaPrinterSecurityForPrinterInstance::
   ~Linux_SambaPrinterSecurityForPrinterInstance(){
   	reset();  	  
  };
  
  
  //copy operator
  Linux_SambaPrinterSecurityForPrinterInstance&
   Linux_SambaPrinterSecurityForPrinterInstance::operator=
   (const Linux_SambaPrinterSecurityForPrinterInstance& original){   	
   	init(original);
   	return *this;
  };
  
  
  //converts to CmpiInstance
  CmpiInstance Linux_SambaPrinterSecurityForPrinterInstance::
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
  unsigned int Linux_SambaPrinterSecurityForPrinterInstance::
   isInstanceNameSet() const{
  	return isSet.instanceName;
  }
  
  const Linux_SambaPrinterSecurityForPrinterInstanceName&
    Linux_SambaPrinterSecurityForPrinterInstance::getInstanceName() const{

    if(!isSet.instanceName)
   	  throw CmpiErrorFormater::getErrorException(
   	   CmpiErrorFormater::NOT_SET,
   	   "InstanceName not set in Linux_SambaPrinterSecurityForPrinter instance");
  		
   	return m_instanceName;
  }

  void Linux_SambaPrinterSecurityForPrinterInstance::setInstanceName(
   const Linux_SambaPrinterSecurityForPrinterInstanceName& val){
    m_instanceName = val;
    isSet.instanceName=1;
  }
       
  //IsCurrent related methods
  unsigned int Linux_SambaPrinterSecurityForPrinterInstance::isIsCurrentSet() const{
    return isSet.IsCurrent;
  }
  void Linux_SambaPrinterSecurityForPrinterInstance::
   setIsCurrent(const CMPIUint16 val){
    m_IsCurrent = val;
    isSet.IsCurrent=1;
  }       
  const CMPIUint16 Linux_SambaPrinterSecurityForPrinterInstance::
   getIsCurrent() const{
    
    if(!isSet.IsCurrent)
   	  throw CmpiErrorFormater::getErrorException(
   	   CmpiErrorFormater::NOT_SET,
   	   "IsCurrent not set");
   	   	
    return m_IsCurrent;
  }
       
  //IsDefault related methods
  unsigned int Linux_SambaPrinterSecurityForPrinterInstance::isIsDefaultSet() const{
    return isSet.IsDefault;
  }
  void Linux_SambaPrinterSecurityForPrinterInstance::
   setIsDefault(const CMPIUint16 val){
    m_IsDefault = val;
    isSet.IsDefault=1;
  }       
  const CMPIUint16 Linux_SambaPrinterSecurityForPrinterInstance::
   getIsDefault() const{
    
    if(!isSet.IsDefault)
   	  throw CmpiErrorFormater::getErrorException(
   	   CmpiErrorFormater::NOT_SET,
   	   "IsDefault not set");
   	   	
    return m_IsDefault;
  }


  
  //set isSet attributes to FALSE
  void Linux_SambaPrinterSecurityForPrinterInstance::init(){
   	isSet.instanceName=0;
   	   	
    isSet.IsCurrent=0;   	
    isSet.IsDefault=0;  	
  };
  
  
  //copies another instance properties in this
  void Linux_SambaPrinterSecurityForPrinterInstance::init
   (const Linux_SambaPrinterSecurityForPrinterInstance& original){   	
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
  void Linux_SambaPrinterSecurityForPrinterInstance::reset(){
   	
  	  
  };
  
  
  //*********************************************************
  //Linux_SambaPrinterSecurityForPrinterInstanceEnumerationElement	
  //*********************************************************
  
  Linux_SambaPrinterSecurityForPrinterInstanceEnumerationElement::
   Linux_SambaPrinterSecurityForPrinterInstanceEnumerationElement(){
   	
  	m_elementP=0;
  	m_nextP=0;
  	  
  };
  
  
  Linux_SambaPrinterSecurityForPrinterInstanceEnumerationElement::
   ~Linux_SambaPrinterSecurityForPrinterInstanceEnumerationElement(){
   	
  	if (m_elementP!=0)
  	  delete(m_elementP);
  	if (m_nextP!=0)
  	  delete(m_nextP);
  	  
  };

  
  //*********************************************************
  //Linux_SambaPrinterSecurityForPrinterInstanceNameEnumeration
  //*********************************************************

  Linux_SambaPrinterSecurityForPrinterInstanceEnumeration::
   Linux_SambaPrinterSecurityForPrinterInstanceEnumeration(){
   	
  	 firstElementP=0;
     currentElementP=0;
     endElementP=0;
  };
  
  Linux_SambaPrinterSecurityForPrinterInstanceEnumeration::
   Linux_SambaPrinterSecurityForPrinterInstanceEnumeration(
   const Linux_SambaPrinterSecurityForPrinterInstanceEnumeration& original){
   	
     firstElementP=0;
     currentElementP=0;
     endElementP=0;
  	 
     int size=original.getSize();
     for(int i=0;i<size;i++)
       addElement(original.getElement(i));           
  };
  
  	  
  Linux_SambaPrinterSecurityForPrinterInstanceEnumeration::
   ~Linux_SambaPrinterSecurityForPrinterInstanceEnumeration(){
   	
  	if (firstElementP!=0)
  	  delete(firstElementP);
  	  	
  };
  
  	  
  void Linux_SambaPrinterSecurityForPrinterInstanceEnumeration::reset(){
  	
  	currentElementP=firstElementP;
  };
  
  	  
  bool Linux_SambaPrinterSecurityForPrinterInstanceEnumeration::hasNext() const{
  	
  	return (currentElementP!=0);
  
  };
  
  int Linux_SambaPrinterSecurityForPrinterInstanceEnumeration::getSize() const{
  	
    int size=0;
    Linux_SambaPrinterSecurityForPrinterInstanceEnumerationElement* followingP=firstElementP;
  	
  	while(followingP!=0){
        followingP=followingP->m_nextP;
        size++;
    }
  	
    return size;
    
  };
  
  const Linux_SambaPrinterSecurityForPrinterInstance&  
   Linux_SambaPrinterSecurityForPrinterInstanceEnumeration::getElement(int pos) const{
   
    Linux_SambaPrinterSecurityForPrinterInstanceEnumerationElement* followingP=firstElementP;
   
    int i=0;
    while((followingP!=0)&&(i<pos)){
        followingP=followingP->m_nextP;
        i++;
    }
    
    return *(followingP->m_elementP);
  };
  
  	  
  const Linux_SambaPrinterSecurityForPrinterInstance&
   Linux_SambaPrinterSecurityForPrinterInstanceEnumeration::getNext() {
   	
  	 Linux_SambaPrinterSecurityForPrinterInstanceEnumerationElement* currentP=
  	  currentElementP;
  	 currentElementP=currentElementP->m_nextP;
  	 
  	 return *(currentP->m_elementP);
  };
  	  
  void Linux_SambaPrinterSecurityForPrinterInstanceEnumeration::addElement
   (const Linux_SambaPrinterSecurityForPrinterInstance& elementP){
   	
  	if(firstElementP==0){
  	  firstElementP=new Linux_SambaPrinterSecurityForPrinterInstanceEnumerationElement();
  	  firstElementP->m_elementP=new Linux_SambaPrinterSecurityForPrinterInstance(elementP);
  	  endElementP=firstElementP;
  	  currentElementP=firstElementP;
  	}else{
  	  endElementP->m_nextP=new Linux_SambaPrinterSecurityForPrinterInstanceEnumerationElement();
  	  endElementP=endElementP->m_nextP;
  	  endElementP->m_elementP=new Linux_SambaPrinterSecurityForPrinterInstance(elementP);
  	}
  };  
}
 
