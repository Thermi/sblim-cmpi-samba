/**
 *  Linux_SambaGlobalProtocolOptionsManualInstance.cpp
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


#include "Linux_SambaGlobalProtocolOptionsManualInstance.h"
#include "CmpiData.h"
#include "CmpiString.h"
#include "CmpiArray.h"
#include <string>

namespace genProvider {

  //*********************************************************
  //Linux_SambaGlobalProtocolOptionsManualInstance
  //*********************************************************

  //empty constructor
  Linux_SambaGlobalProtocolOptionsManualInstance::
   Linux_SambaGlobalProtocolOptionsManualInstance(){   	
   	init();  	   	
  };
  
  
  //copy constructor	
  Linux_SambaGlobalProtocolOptionsManualInstance::
   Linux_SambaGlobalProtocolOptionsManualInstance
   (const Linux_SambaGlobalProtocolOptionsManualInstance& original){   	
   	init(original);  	   	
  };
  
  
  //constructor using CmpiInstance
  Linux_SambaGlobalProtocolOptionsManualInstance::
   Linux_SambaGlobalProtocolOptionsManualInstance (const CmpiInstance& inst, const char* instanceNamespace){
    CmpiData cmpiData;
    init(); 
    
    CmpiObjectPath cop=inst.getObjectPath();
    cop.setNameSpace(instanceNamespace);
    setInstanceName(Linux_SambaGlobalProtocolOptionsInstanceName(cop));
    
    cmpiData = inst.getProperty("AclCompatibility");
    if(!cmpiData.isNullValue()){
      CMPIUint8 AclCompatibility = cmpiData;
      setAclCompatibility(AclCompatibility);
    }
    
    cmpiData = inst.getProperty("EASupport");
    if(!cmpiData.isNullValue()){
      CMPIBoolean EASupport = cmpiData;
      setEASupport(EASupport);
    }
    
    cmpiData = inst.getProperty("NTACLSupport");
    if(!cmpiData.isNullValue()){
      CMPIBoolean NTACLSupport = cmpiData;
      setNTACLSupport(NTACLSupport);
    }
    
  }
  
  
  //Destructor
  Linux_SambaGlobalProtocolOptionsManualInstance::
   ~Linux_SambaGlobalProtocolOptionsManualInstance(){
   	reset();  	  
  };
  
  
  //copy operator
  Linux_SambaGlobalProtocolOptionsManualInstance&
   Linux_SambaGlobalProtocolOptionsManualInstance::operator=
   (const Linux_SambaGlobalProtocolOptionsManualInstance& original){   	
   	init(original);
   	return *this;
  };
  
  
  //converts to CmpiInstance
  CmpiInstance Linux_SambaGlobalProtocolOptionsManualInstance::
   getCmpiInstance(const char** properties) const{
   	
   	CmpiObjectPath objectPath=getInstanceName().getObjectPath();      
    CmpiInstance cmpiInstance(objectPath);    
    getInstanceName().fillKeys(cmpiInstance);
    
    if (properties) {
	  cmpiInstance.setPropertyFilter(properties,0);
    }

  	if(isSet.AclCompatibility){
  	  cmpiInstance.setProperty("AclCompatibility",CmpiData(m_AclCompatibility));
  	}

  	if(isSet.EASupport){
  	  cmpiInstance.setProperty("EASupport",CmpiBooleanData(m_EASupport));
  	}

  	if(isSet.NTACLSupport){
  	  cmpiInstance.setProperty("NTACLSupport",CmpiBooleanData(m_NTACLSupport));
  	}
  	
  	return cmpiInstance;
  	
  }
  
  
  //InstanceName related methods
  unsigned int Linux_SambaGlobalProtocolOptionsManualInstance::
   isInstanceNameSet() const{
  	return isSet.instanceName;
  }
  
  const Linux_SambaGlobalProtocolOptionsInstanceName&
    Linux_SambaGlobalProtocolOptionsManualInstance::getInstanceName() const{

    if(!isSet.instanceName)
   	  throw CmpiErrorFormater::getErrorException(
   	   CmpiErrorFormater::NOT_SET,
   	   "InstanceName not set in Linux_SambaGlobalProtocolOptions instance");
  		
   	return m_instanceName;
  }

  void Linux_SambaGlobalProtocolOptionsManualInstance::setInstanceName(
   const Linux_SambaGlobalProtocolOptionsInstanceName& val){
    m_instanceName = val;
    isSet.instanceName=1;
  }
       
  //AclCompatibility related methods
  unsigned int Linux_SambaGlobalProtocolOptionsManualInstance::isAclCompatibilitySet() const{
    return isSet.AclCompatibility;
  }
  void Linux_SambaGlobalProtocolOptionsManualInstance::
   setAclCompatibility(const CMPIUint8 val){
    m_AclCompatibility = val;
    isSet.AclCompatibility=1;
  }       
  const CMPIUint8 Linux_SambaGlobalProtocolOptionsManualInstance::
   getAclCompatibility() const{
    
    if(!isSet.AclCompatibility)
   	  throw CmpiErrorFormater::getErrorException(
   	   CmpiErrorFormater::NOT_SET,
   	   "AclCompatibility not set");
   	   	
    return m_AclCompatibility;
  }
       
  //EASupport related methods
  unsigned int Linux_SambaGlobalProtocolOptionsManualInstance::isEASupportSet() const{
    return isSet.EASupport;
  }
  void Linux_SambaGlobalProtocolOptionsManualInstance::
   setEASupport(const CMPIBoolean val){
    m_EASupport = val;
    isSet.EASupport=1;
  }       
  const CMPIBoolean Linux_SambaGlobalProtocolOptionsManualInstance::
   getEASupport() const{
    
    if(!isSet.EASupport)
   	  throw CmpiErrorFormater::getErrorException(
   	   CmpiErrorFormater::NOT_SET,
   	   "EASupport not set");
   	   	
    return m_EASupport;
  }
       
  //NTACLSupport related methods
  unsigned int Linux_SambaGlobalProtocolOptionsManualInstance::isNTACLSupportSet() const{
    return isSet.NTACLSupport;
  }
  void Linux_SambaGlobalProtocolOptionsManualInstance::
   setNTACLSupport(const CMPIBoolean val){
    m_NTACLSupport = val;
    isSet.NTACLSupport=1;
  }       
  const CMPIBoolean Linux_SambaGlobalProtocolOptionsManualInstance::
   getNTACLSupport() const{
    
    if(!isSet.NTACLSupport)
   	  throw CmpiErrorFormater::getErrorException(
   	   CmpiErrorFormater::NOT_SET,
   	   "NTACLSupport not set");
   	   	
    return m_NTACLSupport;
  }


  
  //set isSet attributes to FALSE
  void Linux_SambaGlobalProtocolOptionsManualInstance::init(){
   	isSet.instanceName=0;
   	   	
    isSet.AclCompatibility=0;   	
    isSet.EASupport=0;   	
    isSet.NTACLSupport=0;  	
  };
  
  
  //copies another instance properties in this
  void Linux_SambaGlobalProtocolOptionsManualInstance::init
   (const Linux_SambaGlobalProtocolOptionsManualInstance& original){   	
   	init();
   	   	
    if(original.isInstanceNameSet()){
      setInstanceName(original.getInstanceName());
    }   	
    if(original.isAclCompatibilitySet()){
      const CMPIUint8 AclCompatibilityOriginal=original.getAclCompatibility();
      setAclCompatibility(AclCompatibilityOriginal);
    }   	
    if(original.isEASupportSet()){
      const CMPIBoolean EASupportOriginal=original.getEASupport();
      setEASupport(EASupportOriginal);
    }   	
    if(original.isNTACLSupportSet()){
      const CMPIBoolean NTACLSupportOriginal=original.getNTACLSupport();
      setNTACLSupport(NTACLSupportOriginal);
    }    
   }
  
  
  //reset the instance data
  void Linux_SambaGlobalProtocolOptionsManualInstance::reset(){
   	
  	  
  };
  
  
  //*********************************************************
  //Linux_SambaGlobalProtocolOptionsManualInstanceEnumerationElement	
  //*********************************************************
  
  Linux_SambaGlobalProtocolOptionsManualInstanceEnumerationElement::
   Linux_SambaGlobalProtocolOptionsManualInstanceEnumerationElement(){
   	
  	m_elementP=0;
  	m_nextP=0;
  	  
  };
  
  
  Linux_SambaGlobalProtocolOptionsManualInstanceEnumerationElement::
   ~Linux_SambaGlobalProtocolOptionsManualInstanceEnumerationElement(){
   	
  	if (m_elementP!=0)
  	  delete(m_elementP);
  	if (m_nextP!=0)
  	  delete(m_nextP);
  	  
  };

  
  //*********************************************************
  //Linux_SambaGlobalProtocolOptionsManualInstanceNameEnumeration
  //*********************************************************

  Linux_SambaGlobalProtocolOptionsManualInstanceEnumeration::
   Linux_SambaGlobalProtocolOptionsManualInstanceEnumeration(){
   	
  	 firstElementP=0;
     currentElementP=0;
     endElementP=0;
  };
  
  Linux_SambaGlobalProtocolOptionsManualInstanceEnumeration::
   Linux_SambaGlobalProtocolOptionsManualInstanceEnumeration(
   const Linux_SambaGlobalProtocolOptionsManualInstanceEnumeration& original){
   	
     firstElementP=0;
     currentElementP=0;
     endElementP=0;
  	 
     int size=original.getSize();
     for(int i=0;i<size;i++)
       addElement(original.getElement(i));           
  };
  
  	  
  Linux_SambaGlobalProtocolOptionsManualInstanceEnumeration::
   ~Linux_SambaGlobalProtocolOptionsManualInstanceEnumeration(){
   	
  	if (firstElementP!=0)
  	  delete(firstElementP);
  	  	
  };
  
  	  
  void Linux_SambaGlobalProtocolOptionsManualInstanceEnumeration::reset(){
  	
  	currentElementP=firstElementP;
  };
  
  	  
  bool Linux_SambaGlobalProtocolOptionsManualInstanceEnumeration::hasNext() const{
  	
  	return (currentElementP!=0);
  
  };
  
  int Linux_SambaGlobalProtocolOptionsManualInstanceEnumeration::getSize() const{
  	
    int size=0;
    Linux_SambaGlobalProtocolOptionsManualInstanceEnumerationElement* followingP=firstElementP;
  	
  	while(followingP!=0){
        followingP=followingP->m_nextP;
        size++;
    }
  	
    return size;
    
  };
  
  const Linux_SambaGlobalProtocolOptionsManualInstance&  
   Linux_SambaGlobalProtocolOptionsManualInstanceEnumeration::getElement(int pos) const{
   
    Linux_SambaGlobalProtocolOptionsManualInstanceEnumerationElement* followingP=firstElementP;
   
    int i=0;
    while((followingP!=0)&&(i<pos)){
        followingP=followingP->m_nextP;
        i++;
    }
    
    return *(followingP->m_elementP);
  };
  
  	  
  const Linux_SambaGlobalProtocolOptionsManualInstance&
   Linux_SambaGlobalProtocolOptionsManualInstanceEnumeration::getNext() {
   	
  	 Linux_SambaGlobalProtocolOptionsManualInstanceEnumerationElement* currentP=
  	  currentElementP;
  	 currentElementP=currentElementP->m_nextP;
  	 
  	 return *(currentP->m_elementP);
  };
  	  
  void Linux_SambaGlobalProtocolOptionsManualInstanceEnumeration::addElement
   (const Linux_SambaGlobalProtocolOptionsManualInstance& elementP){
   	
  	if(firstElementP==0){
  	  firstElementP=new Linux_SambaGlobalProtocolOptionsManualInstanceEnumerationElement();
  	  firstElementP->m_elementP=new Linux_SambaGlobalProtocolOptionsManualInstance(elementP);
  	  endElementP=firstElementP;
  	  currentElementP=firstElementP;
  	}else{
  	  endElementP->m_nextP=new Linux_SambaGlobalProtocolOptionsManualInstanceEnumerationElement();
  	  endElementP=endElementP->m_nextP;
  	  endElementP->m_elementP=new Linux_SambaGlobalProtocolOptionsManualInstance(elementP);
  	}
  };  
}
 
