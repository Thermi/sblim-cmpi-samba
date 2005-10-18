/**
 *  Linux_SambaGlobalProtocolOptionsInstance.cpp
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


#include "Linux_SambaGlobalProtocolOptionsInstance.h"
#include "CmpiData.h"
#include "CmpiString.h"
#include "CmpiArray.h"
#include <string>

namespace genProvider {

  //*********************************************************
  //Linux_SambaGlobalProtocolOptionsInstance
  //*********************************************************

  //empty constructor
  Linux_SambaGlobalProtocolOptionsInstance::
   Linux_SambaGlobalProtocolOptionsInstance(){   	
   	init();  	   	
  };
  
  
  //copy constructor	
  Linux_SambaGlobalProtocolOptionsInstance::
   Linux_SambaGlobalProtocolOptionsInstance
   (const Linux_SambaGlobalProtocolOptionsInstance& original){   	
   	init(original);  	   	
  };
  
  
  //constructor using CmpiInstance
  Linux_SambaGlobalProtocolOptionsInstance::
   Linux_SambaGlobalProtocolOptionsInstance (const CmpiInstance& inst, const char* instanceNamespace){
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
    
    cmpiData = inst.getProperty("Caption");
    if(!cmpiData.isNullValue()){
      CmpiString Caption = cmpiData;
      setCaption(Caption.charPtr());
    }
    
    cmpiData = inst.getProperty("Description");
    if(!cmpiData.isNullValue()){
      CmpiString Description = cmpiData;
      setDescription(Description.charPtr());
    }
    
    cmpiData = inst.getProperty("EASupport");
    if(!cmpiData.isNullValue()){
      CMPIBoolean EASupport = cmpiData;
      setEASupport(EASupport);
    }
    
    cmpiData = inst.getProperty("ElementName");
    if(!cmpiData.isNullValue()){
      CmpiString ElementName = cmpiData;
      setElementName(ElementName.charPtr());
    }
    
    cmpiData = inst.getProperty("NTACLSupport");
    if(!cmpiData.isNullValue()){
      CMPIBoolean NTACLSupport = cmpiData;
      setNTACLSupport(NTACLSupport);
    }
    
  }
  
  
  //Destructor
  Linux_SambaGlobalProtocolOptionsInstance::
   ~Linux_SambaGlobalProtocolOptionsInstance(){
   	reset();  	  
  };
  
  
  //copy operator
  Linux_SambaGlobalProtocolOptionsInstance&
   Linux_SambaGlobalProtocolOptionsInstance::operator=
   (const Linux_SambaGlobalProtocolOptionsInstance& original){   	
   	init(original);
   	return *this;
  };
  
  
  //converts to CmpiInstance
  CmpiInstance Linux_SambaGlobalProtocolOptionsInstance::
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

  	if(isSet.Caption){
  	  cmpiInstance.setProperty("Caption",CmpiData(m_Caption));
  	}

  	if(isSet.Description){
  	  cmpiInstance.setProperty("Description",CmpiData(m_Description));
  	}

  	if(isSet.EASupport){
  	  cmpiInstance.setProperty("EASupport",CmpiBooleanData(m_EASupport));
  	}

  	if(isSet.ElementName){
  	  cmpiInstance.setProperty("ElementName",CmpiData(m_ElementName));
  	}

  	if(isSet.NTACLSupport){
  	  cmpiInstance.setProperty("NTACLSupport",CmpiBooleanData(m_NTACLSupport));
  	}
  	
  	return cmpiInstance;
  	
  }
  
  
  //InstanceName related methods
  unsigned int Linux_SambaGlobalProtocolOptionsInstance::
   isInstanceNameSet() const{
  	return isSet.instanceName;
  }
  
  const Linux_SambaGlobalProtocolOptionsInstanceName&
    Linux_SambaGlobalProtocolOptionsInstance::getInstanceName() const{

    if(!isSet.instanceName)
   	  throw CmpiErrorFormater::getErrorException(
   	   CmpiErrorFormater::NOT_SET,
   	   "InstanceName not set in Linux_SambaGlobalProtocolOptions instance");
  		
   	return m_instanceName;
  }

  void Linux_SambaGlobalProtocolOptionsInstance::setInstanceName(
   const Linux_SambaGlobalProtocolOptionsInstanceName& val){
    m_instanceName = val;
    isSet.instanceName=1;
  }
       
  //AclCompatibility related methods
  unsigned int Linux_SambaGlobalProtocolOptionsInstance::isAclCompatibilitySet() const{
    return isSet.AclCompatibility;
  }
  void Linux_SambaGlobalProtocolOptionsInstance::
   setAclCompatibility(const CMPIUint8 val){
    m_AclCompatibility = val;
    isSet.AclCompatibility=1;
  }       
  const CMPIUint8 Linux_SambaGlobalProtocolOptionsInstance::
   getAclCompatibility() const{
    
    if(!isSet.AclCompatibility)
   	  throw CmpiErrorFormater::getErrorException(
   	   CmpiErrorFormater::NOT_SET,
   	   "AclCompatibility not set");
   	   	
    return m_AclCompatibility;
  }
       
  //Caption related methods
  unsigned int Linux_SambaGlobalProtocolOptionsInstance::isCaptionSet() const{
    return isSet.Caption;
  }
  void  Linux_SambaGlobalProtocolOptionsInstance::
   setCaption(const char* val, int makeCopy){
    if (isSet.Caption) {
      delete []m_Caption;
    }
    if (makeCopy&&val) {
      char* tmpval = new char[strlen(val)+1];
      strcpy(tmpval,val);
      m_Caption = tmpval;
    } else {
      m_Caption = val;
    }
    isSet.Caption=1;
  }       
  const char* Linux_SambaGlobalProtocolOptionsInstance::
   getCaption() const{
    
    if(!isSet.Caption)
   	  throw CmpiErrorFormater::getErrorException(
   	   CmpiErrorFormater::NOT_SET,
   	   "Caption not set");
   	   	
    return m_Caption;
  }
       
  //Description related methods
  unsigned int Linux_SambaGlobalProtocolOptionsInstance::isDescriptionSet() const{
    return isSet.Description;
  }
  void  Linux_SambaGlobalProtocolOptionsInstance::
   setDescription(const char* val, int makeCopy){
    if (isSet.Description) {
      delete []m_Description;
    }
    if (makeCopy&&val) {
      char* tmpval = new char[strlen(val)+1];
      strcpy(tmpval,val);
      m_Description = tmpval;
    } else {
      m_Description = val;
    }
    isSet.Description=1;
  }       
  const char* Linux_SambaGlobalProtocolOptionsInstance::
   getDescription() const{
    
    if(!isSet.Description)
   	  throw CmpiErrorFormater::getErrorException(
   	   CmpiErrorFormater::NOT_SET,
   	   "Description not set");
   	   	
    return m_Description;
  }
       
  //EASupport related methods
  unsigned int Linux_SambaGlobalProtocolOptionsInstance::isEASupportSet() const{
    return isSet.EASupport;
  }
  void Linux_SambaGlobalProtocolOptionsInstance::
   setEASupport(const CMPIBoolean val){
    m_EASupport = val;
    isSet.EASupport=1;
  }       
  const CMPIBoolean Linux_SambaGlobalProtocolOptionsInstance::
   getEASupport() const{
    
    if(!isSet.EASupport)
   	  throw CmpiErrorFormater::getErrorException(
   	   CmpiErrorFormater::NOT_SET,
   	   "EASupport not set");
   	   	
    return m_EASupport;
  }
       
  //ElementName related methods
  unsigned int Linux_SambaGlobalProtocolOptionsInstance::isElementNameSet() const{
    return isSet.ElementName;
  }
  void  Linux_SambaGlobalProtocolOptionsInstance::
   setElementName(const char* val, int makeCopy){
    if (isSet.ElementName) {
      delete []m_ElementName;
    }
    if (makeCopy&&val) {
      char* tmpval = new char[strlen(val)+1];
      strcpy(tmpval,val);
      m_ElementName = tmpval;
    } else {
      m_ElementName = val;
    }
    isSet.ElementName=1;
  }       
  const char* Linux_SambaGlobalProtocolOptionsInstance::
   getElementName() const{
    
    if(!isSet.ElementName)
   	  throw CmpiErrorFormater::getErrorException(
   	   CmpiErrorFormater::NOT_SET,
   	   "ElementName not set");
   	   	
    return m_ElementName;
  }
       
  //NTACLSupport related methods
  unsigned int Linux_SambaGlobalProtocolOptionsInstance::isNTACLSupportSet() const{
    return isSet.NTACLSupport;
  }
  void Linux_SambaGlobalProtocolOptionsInstance::
   setNTACLSupport(const CMPIBoolean val){
    m_NTACLSupport = val;
    isSet.NTACLSupport=1;
  }       
  const CMPIBoolean Linux_SambaGlobalProtocolOptionsInstance::
   getNTACLSupport() const{
    
    if(!isSet.NTACLSupport)
   	  throw CmpiErrorFormater::getErrorException(
   	   CmpiErrorFormater::NOT_SET,
   	   "NTACLSupport not set");
   	   	
    return m_NTACLSupport;
  }


  
  //set isSet attributes to FALSE
  void Linux_SambaGlobalProtocolOptionsInstance::init(){
   	isSet.instanceName=0;
   	   	
    isSet.AclCompatibility=0;   	
    isSet.Caption=0;   	
    isSet.Description=0;   	
    isSet.EASupport=0;   	
    isSet.ElementName=0;   	
    isSet.NTACLSupport=0;  	
  };
  
  
  //copies another instance properties in this
  void Linux_SambaGlobalProtocolOptionsInstance::init
   (const Linux_SambaGlobalProtocolOptionsInstance& original){   	
   	init();
   	   	
    if(original.isInstanceNameSet()){
      setInstanceName(original.getInstanceName());
    }   	
    if(original.isAclCompatibilitySet()){
      const CMPIUint8 AclCompatibilityOriginal=original.getAclCompatibility();
      setAclCompatibility(AclCompatibilityOriginal);
    }   	
    if(original.isCaptionSet()){
      const char* CaptionOriginal=original.getCaption();
      setCaption(CaptionOriginal, 1);
    }   	
    if(original.isDescriptionSet()){
      const char* DescriptionOriginal=original.getDescription();
      setDescription(DescriptionOriginal, 1);
    }   	
    if(original.isEASupportSet()){
      const CMPIBoolean EASupportOriginal=original.getEASupport();
      setEASupport(EASupportOriginal);
    }   	
    if(original.isElementNameSet()){
      const char* ElementNameOriginal=original.getElementName();
      setElementName(ElementNameOriginal, 1);
    }   	
    if(original.isNTACLSupportSet()){
      const CMPIBoolean NTACLSupportOriginal=original.getNTACLSupport();
      setNTACLSupport(NTACLSupportOriginal);
    }    
   }
  
  
  //reset the instance data
  void Linux_SambaGlobalProtocolOptionsInstance::reset(){
   	

  	if (isSet.Caption)
  	  delete(m_Caption);

  	if (isSet.Description)
  	  delete(m_Description);

  	if (isSet.ElementName)
  	  delete(m_ElementName);
  	  
  };
  
  
  //*********************************************************
  //Linux_SambaGlobalProtocolOptionsInstanceEnumerationElement	
  //*********************************************************
  
  Linux_SambaGlobalProtocolOptionsInstanceEnumerationElement::
   Linux_SambaGlobalProtocolOptionsInstanceEnumerationElement(){
   	
  	m_elementP=0;
  	m_nextP=0;
  	  
  };
  
  
  Linux_SambaGlobalProtocolOptionsInstanceEnumerationElement::
   ~Linux_SambaGlobalProtocolOptionsInstanceEnumerationElement(){
   	
  	if (m_elementP!=0)
  	  delete(m_elementP);
  	if (m_nextP!=0)
  	  delete(m_nextP);
  	  
  };

  
  //*********************************************************
  //Linux_SambaGlobalProtocolOptionsInstanceNameEnumeration
  //*********************************************************

  Linux_SambaGlobalProtocolOptionsInstanceEnumeration::
   Linux_SambaGlobalProtocolOptionsInstanceEnumeration(){
   	
  	 firstElementP=0;
     currentElementP=0;
     endElementP=0;
  };
  
  Linux_SambaGlobalProtocolOptionsInstanceEnumeration::
   Linux_SambaGlobalProtocolOptionsInstanceEnumeration(
   const Linux_SambaGlobalProtocolOptionsInstanceEnumeration& original){
   	
     firstElementP=0;
     currentElementP=0;
     endElementP=0;
  	 
     int size=original.getSize();
     for(int i=0;i<size;i++)
       addElement(original.getElement(i));           
  };
  
  	  
  Linux_SambaGlobalProtocolOptionsInstanceEnumeration::
   ~Linux_SambaGlobalProtocolOptionsInstanceEnumeration(){
   	
  	if (firstElementP!=0)
  	  delete(firstElementP);
  	  	
  };
  
  	  
  void Linux_SambaGlobalProtocolOptionsInstanceEnumeration::reset(){
  	
  	currentElementP=firstElementP;
  };
  
  	  
  bool Linux_SambaGlobalProtocolOptionsInstanceEnumeration::hasNext() const{
  	
  	return (currentElementP!=0);
  
  };
  
  int Linux_SambaGlobalProtocolOptionsInstanceEnumeration::getSize() const{
  	
    int size=0;
    Linux_SambaGlobalProtocolOptionsInstanceEnumerationElement* followingP=firstElementP;
  	
  	while(followingP!=0){
        followingP=followingP->m_nextP;
        size++;
    }
  	
    return size;
    
  };
  
  const Linux_SambaGlobalProtocolOptionsInstance&  
   Linux_SambaGlobalProtocolOptionsInstanceEnumeration::getElement(int pos) const{
   
    Linux_SambaGlobalProtocolOptionsInstanceEnumerationElement* followingP=firstElementP;
   
    int i=0;
    while((followingP!=0)&&(i<pos)){
        followingP=followingP->m_nextP;
        i++;
    }
    
    return *(followingP->m_elementP);
  };
  
  	  
  const Linux_SambaGlobalProtocolOptionsInstance&
   Linux_SambaGlobalProtocolOptionsInstanceEnumeration::getNext() {
   	
  	 Linux_SambaGlobalProtocolOptionsInstanceEnumerationElement* currentP=
  	  currentElementP;
  	 currentElementP=currentElementP->m_nextP;
  	 
  	 return *(currentP->m_elementP);
  };
  	  
  void Linux_SambaGlobalProtocolOptionsInstanceEnumeration::addElement
   (const Linux_SambaGlobalProtocolOptionsInstance& elementP){
   	
  	if(firstElementP==0){
  	  firstElementP=new Linux_SambaGlobalProtocolOptionsInstanceEnumerationElement();
  	  firstElementP->m_elementP=new Linux_SambaGlobalProtocolOptionsInstance(elementP);
  	  endElementP=firstElementP;
  	  currentElementP=firstElementP;
  	}else{
  	  endElementP->m_nextP=new Linux_SambaGlobalProtocolOptionsInstanceEnumerationElement();
  	  endElementP=endElementP->m_nextP;
  	  endElementP->m_elementP=new Linux_SambaGlobalProtocolOptionsInstance(elementP);
  	}
  };  
}
 
