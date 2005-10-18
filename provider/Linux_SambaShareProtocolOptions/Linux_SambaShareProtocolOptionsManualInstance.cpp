/**
 *  Linux_SambaShareProtocolOptionsManualInstance.cpp
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


#include "Linux_SambaShareProtocolOptionsManualInstance.h"
#include "CmpiData.h"
#include "CmpiString.h"
#include "CmpiArray.h"
#include <string>

namespace genProvider {

  //*********************************************************
  //Linux_SambaShareProtocolOptionsManualInstance
  //*********************************************************

  //empty constructor
  Linux_SambaShareProtocolOptionsManualInstance::
   Linux_SambaShareProtocolOptionsManualInstance(){   	
   	init();  	   	
  };
  
  
  //copy constructor	
  Linux_SambaShareProtocolOptionsManualInstance::
   Linux_SambaShareProtocolOptionsManualInstance
   (const Linux_SambaShareProtocolOptionsManualInstance& original){   	
   	init(original);  	   	
  };
  
  
  //constructor using CmpiInstance
  Linux_SambaShareProtocolOptionsManualInstance::
   Linux_SambaShareProtocolOptionsManualInstance (const CmpiInstance& inst, const char* instanceNamespace){
    CmpiData cmpiData;
    init(); 
    
    CmpiObjectPath cop=inst.getObjectPath();
    cop.setNameSpace(instanceNamespace);
    setInstanceName(Linux_SambaShareProtocolOptionsInstanceName(cop));
    
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
  Linux_SambaShareProtocolOptionsManualInstance::
   ~Linux_SambaShareProtocolOptionsManualInstance(){
   	reset();  	  
  };
  
  
  //copy operator
  Linux_SambaShareProtocolOptionsManualInstance&
   Linux_SambaShareProtocolOptionsManualInstance::operator=
   (const Linux_SambaShareProtocolOptionsManualInstance& original){   	
   	init(original);
   	return *this;
  };
  
  
  //converts to CmpiInstance
  CmpiInstance Linux_SambaShareProtocolOptionsManualInstance::
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
  unsigned int Linux_SambaShareProtocolOptionsManualInstance::
   isInstanceNameSet() const{
  	return isSet.instanceName;
  }
  
  const Linux_SambaShareProtocolOptionsInstanceName&
    Linux_SambaShareProtocolOptionsManualInstance::getInstanceName() const{

    if(!isSet.instanceName)
   	  throw CmpiErrorFormater::getErrorException(
   	   CmpiErrorFormater::NOT_SET,
   	   "InstanceName not set in Linux_SambaShareProtocolOptions instance");
  		
   	return m_instanceName;
  }

  void Linux_SambaShareProtocolOptionsManualInstance::setInstanceName(
   const Linux_SambaShareProtocolOptionsInstanceName& val){
    m_instanceName = val;
    isSet.instanceName=1;
  }
       
  //AclCompatibility related methods
  unsigned int Linux_SambaShareProtocolOptionsManualInstance::isAclCompatibilitySet() const{
    return isSet.AclCompatibility;
  }
  void Linux_SambaShareProtocolOptionsManualInstance::
   setAclCompatibility(const CMPIUint8 val){
    m_AclCompatibility = val;
    isSet.AclCompatibility=1;
  }       
  const CMPIUint8 Linux_SambaShareProtocolOptionsManualInstance::
   getAclCompatibility() const{
    
    if(!isSet.AclCompatibility)
   	  throw CmpiErrorFormater::getErrorException(
   	   CmpiErrorFormater::NOT_SET,
   	   "AclCompatibility not set");
   	   	
    return m_AclCompatibility;
  }
       
  //EASupport related methods
  unsigned int Linux_SambaShareProtocolOptionsManualInstance::isEASupportSet() const{
    return isSet.EASupport;
  }
  void Linux_SambaShareProtocolOptionsManualInstance::
   setEASupport(const CMPIBoolean val){
    m_EASupport = val;
    isSet.EASupport=1;
  }       
  const CMPIBoolean Linux_SambaShareProtocolOptionsManualInstance::
   getEASupport() const{
    
    if(!isSet.EASupport)
   	  throw CmpiErrorFormater::getErrorException(
   	   CmpiErrorFormater::NOT_SET,
   	   "EASupport not set");
   	   	
    return m_EASupport;
  }
       
  //NTACLSupport related methods
  unsigned int Linux_SambaShareProtocolOptionsManualInstance::isNTACLSupportSet() const{
    return isSet.NTACLSupport;
  }
  void Linux_SambaShareProtocolOptionsManualInstance::
   setNTACLSupport(const CMPIBoolean val){
    m_NTACLSupport = val;
    isSet.NTACLSupport=1;
  }       
  const CMPIBoolean Linux_SambaShareProtocolOptionsManualInstance::
   getNTACLSupport() const{
    
    if(!isSet.NTACLSupport)
   	  throw CmpiErrorFormater::getErrorException(
   	   CmpiErrorFormater::NOT_SET,
   	   "NTACLSupport not set");
   	   	
    return m_NTACLSupport;
  }


  
  //set isSet attributes to FALSE
  void Linux_SambaShareProtocolOptionsManualInstance::init(){
   	isSet.instanceName=0;
   	   	
    isSet.AclCompatibility=0;   	
    isSet.EASupport=0;   	
    isSet.NTACLSupport=0;  	
  };
  
  
  //copies another instance properties in this
  void Linux_SambaShareProtocolOptionsManualInstance::init
   (const Linux_SambaShareProtocolOptionsManualInstance& original){   	
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
  void Linux_SambaShareProtocolOptionsManualInstance::reset(){
   	
  	  
  };
  
  
  //*********************************************************
  //Linux_SambaShareProtocolOptionsManualInstanceEnumerationElement	
  //*********************************************************
  
  Linux_SambaShareProtocolOptionsManualInstanceEnumerationElement::
   Linux_SambaShareProtocolOptionsManualInstanceEnumerationElement(){
   	
  	m_elementP=0;
  	m_nextP=0;
  	  
  };
  
  
  Linux_SambaShareProtocolOptionsManualInstanceEnumerationElement::
   ~Linux_SambaShareProtocolOptionsManualInstanceEnumerationElement(){
   	
  	if (m_elementP!=0)
  	  delete(m_elementP);
  	if (m_nextP!=0)
  	  delete(m_nextP);
  	  
  };

  
  //*********************************************************
  //Linux_SambaShareProtocolOptionsManualInstanceNameEnumeration
  //*********************************************************

  Linux_SambaShareProtocolOptionsManualInstanceEnumeration::
   Linux_SambaShareProtocolOptionsManualInstanceEnumeration(){
   	
  	 firstElementP=0;
     currentElementP=0;
     endElementP=0;
  };
  
  Linux_SambaShareProtocolOptionsManualInstanceEnumeration::
   Linux_SambaShareProtocolOptionsManualInstanceEnumeration(
   const Linux_SambaShareProtocolOptionsManualInstanceEnumeration& original){
   	
     firstElementP=0;
     currentElementP=0;
     endElementP=0;
  	 
     int size=original.getSize();
     for(int i=0;i<size;i++)
       addElement(original.getElement(i));           
  };
  
  	  
  Linux_SambaShareProtocolOptionsManualInstanceEnumeration::
   ~Linux_SambaShareProtocolOptionsManualInstanceEnumeration(){
   	
  	if (firstElementP!=0)
  	  delete(firstElementP);
  	  	
  };
  
  	  
  void Linux_SambaShareProtocolOptionsManualInstanceEnumeration::reset(){
  	
  	currentElementP=firstElementP;
  };
  
  	  
  bool Linux_SambaShareProtocolOptionsManualInstanceEnumeration::hasNext() const{
  	
  	return (currentElementP!=0);
  
  };
  
  int Linux_SambaShareProtocolOptionsManualInstanceEnumeration::getSize() const{
  	
    int size=0;
    Linux_SambaShareProtocolOptionsManualInstanceEnumerationElement* followingP=firstElementP;
  	
  	while(followingP!=0){
        followingP=followingP->m_nextP;
        size++;
    }
  	
    return size;
    
  };
  
  const Linux_SambaShareProtocolOptionsManualInstance&  
   Linux_SambaShareProtocolOptionsManualInstanceEnumeration::getElement(int pos) const{
   
    Linux_SambaShareProtocolOptionsManualInstanceEnumerationElement* followingP=firstElementP;
   
    int i=0;
    while((followingP!=0)&&(i<pos)){
        followingP=followingP->m_nextP;
        i++;
    }
    
    return *(followingP->m_elementP);
  };
  
  	  
  const Linux_SambaShareProtocolOptionsManualInstance&
   Linux_SambaShareProtocolOptionsManualInstanceEnumeration::getNext() {
   	
  	 Linux_SambaShareProtocolOptionsManualInstanceEnumerationElement* currentP=
  	  currentElementP;
  	 currentElementP=currentElementP->m_nextP;
  	 
  	 return *(currentP->m_elementP);
  };
  	  
  void Linux_SambaShareProtocolOptionsManualInstanceEnumeration::addElement
   (const Linux_SambaShareProtocolOptionsManualInstance& elementP){
   	
  	if(firstElementP==0){
  	  firstElementP=new Linux_SambaShareProtocolOptionsManualInstanceEnumerationElement();
  	  firstElementP->m_elementP=new Linux_SambaShareProtocolOptionsManualInstance(elementP);
  	  endElementP=firstElementP;
  	  currentElementP=firstElementP;
  	}else{
  	  endElementP->m_nextP=new Linux_SambaShareProtocolOptionsManualInstanceEnumerationElement();
  	  endElementP=endElementP->m_nextP;
  	  endElementP->m_elementP=new Linux_SambaShareProtocolOptionsManualInstance(elementP);
  	}
  };  
}
 
