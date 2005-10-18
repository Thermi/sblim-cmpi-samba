/**
 *  Linux_SambaShareProtocolOptionsInstance.cpp
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


#include "Linux_SambaShareProtocolOptionsInstance.h"
#include "CmpiData.h"
#include "CmpiString.h"
#include "CmpiArray.h"
#include <string>

namespace genProvider {

  //*********************************************************
  //Linux_SambaShareProtocolOptionsInstance
  //*********************************************************

  //empty constructor
  Linux_SambaShareProtocolOptionsInstance::
   Linux_SambaShareProtocolOptionsInstance(){   	
   	init();  	   	
  };
  
  
  //copy constructor	
  Linux_SambaShareProtocolOptionsInstance::
   Linux_SambaShareProtocolOptionsInstance
   (const Linux_SambaShareProtocolOptionsInstance& original){   	
   	init(original);  	   	
  };
  
  
  //constructor using CmpiInstance
  Linux_SambaShareProtocolOptionsInstance::
   Linux_SambaShareProtocolOptionsInstance (const CmpiInstance& inst, const char* instanceNamespace){
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
  Linux_SambaShareProtocolOptionsInstance::
   ~Linux_SambaShareProtocolOptionsInstance(){
   	reset();  	  
  };
  
  
  //copy operator
  Linux_SambaShareProtocolOptionsInstance&
   Linux_SambaShareProtocolOptionsInstance::operator=
   (const Linux_SambaShareProtocolOptionsInstance& original){   	
   	init(original);
   	return *this;
  };
  
  
  //converts to CmpiInstance
  CmpiInstance Linux_SambaShareProtocolOptionsInstance::
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
  unsigned int Linux_SambaShareProtocolOptionsInstance::
   isInstanceNameSet() const{
  	return isSet.instanceName;
  }
  
  const Linux_SambaShareProtocolOptionsInstanceName&
    Linux_SambaShareProtocolOptionsInstance::getInstanceName() const{

    if(!isSet.instanceName)
   	  throw CmpiErrorFormater::getErrorException(
   	   CmpiErrorFormater::NOT_SET,
   	   "InstanceName not set in Linux_SambaShareProtocolOptions instance");
  		
   	return m_instanceName;
  }

  void Linux_SambaShareProtocolOptionsInstance::setInstanceName(
   const Linux_SambaShareProtocolOptionsInstanceName& val){
    m_instanceName = val;
    isSet.instanceName=1;
  }
       
  //AclCompatibility related methods
  unsigned int Linux_SambaShareProtocolOptionsInstance::isAclCompatibilitySet() const{
    return isSet.AclCompatibility;
  }
  void Linux_SambaShareProtocolOptionsInstance::
   setAclCompatibility(const CMPIUint8 val){
    m_AclCompatibility = val;
    isSet.AclCompatibility=1;
  }       
  const CMPIUint8 Linux_SambaShareProtocolOptionsInstance::
   getAclCompatibility() const{
    
    if(!isSet.AclCompatibility)
   	  throw CmpiErrorFormater::getErrorException(
   	   CmpiErrorFormater::NOT_SET,
   	   "AclCompatibility not set");
   	   	
    return m_AclCompatibility;
  }
       
  //Caption related methods
  unsigned int Linux_SambaShareProtocolOptionsInstance::isCaptionSet() const{
    return isSet.Caption;
  }
  void  Linux_SambaShareProtocolOptionsInstance::
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
  const char* Linux_SambaShareProtocolOptionsInstance::
   getCaption() const{
    
    if(!isSet.Caption)
   	  throw CmpiErrorFormater::getErrorException(
   	   CmpiErrorFormater::NOT_SET,
   	   "Caption not set");
   	   	
    return m_Caption;
  }
       
  //Description related methods
  unsigned int Linux_SambaShareProtocolOptionsInstance::isDescriptionSet() const{
    return isSet.Description;
  }
  void  Linux_SambaShareProtocolOptionsInstance::
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
  const char* Linux_SambaShareProtocolOptionsInstance::
   getDescription() const{
    
    if(!isSet.Description)
   	  throw CmpiErrorFormater::getErrorException(
   	   CmpiErrorFormater::NOT_SET,
   	   "Description not set");
   	   	
    return m_Description;
  }
       
  //EASupport related methods
  unsigned int Linux_SambaShareProtocolOptionsInstance::isEASupportSet() const{
    return isSet.EASupport;
  }
  void Linux_SambaShareProtocolOptionsInstance::
   setEASupport(const CMPIBoolean val){
    m_EASupport = val;
    isSet.EASupport=1;
  }       
  const CMPIBoolean Linux_SambaShareProtocolOptionsInstance::
   getEASupport() const{
    
    if(!isSet.EASupport)
   	  throw CmpiErrorFormater::getErrorException(
   	   CmpiErrorFormater::NOT_SET,
   	   "EASupport not set");
   	   	
    return m_EASupport;
  }
       
  //ElementName related methods
  unsigned int Linux_SambaShareProtocolOptionsInstance::isElementNameSet() const{
    return isSet.ElementName;
  }
  void  Linux_SambaShareProtocolOptionsInstance::
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
  const char* Linux_SambaShareProtocolOptionsInstance::
   getElementName() const{
    
    if(!isSet.ElementName)
   	  throw CmpiErrorFormater::getErrorException(
   	   CmpiErrorFormater::NOT_SET,
   	   "ElementName not set");
   	   	
    return m_ElementName;
  }
       
  //NTACLSupport related methods
  unsigned int Linux_SambaShareProtocolOptionsInstance::isNTACLSupportSet() const{
    return isSet.NTACLSupport;
  }
  void Linux_SambaShareProtocolOptionsInstance::
   setNTACLSupport(const CMPIBoolean val){
    m_NTACLSupport = val;
    isSet.NTACLSupport=1;
  }       
  const CMPIBoolean Linux_SambaShareProtocolOptionsInstance::
   getNTACLSupport() const{
    
    if(!isSet.NTACLSupport)
   	  throw CmpiErrorFormater::getErrorException(
   	   CmpiErrorFormater::NOT_SET,
   	   "NTACLSupport not set");
   	   	
    return m_NTACLSupport;
  }


  
  //set isSet attributes to FALSE
  void Linux_SambaShareProtocolOptionsInstance::init(){
   	isSet.instanceName=0;
   	   	
    isSet.AclCompatibility=0;   	
    isSet.Caption=0;   	
    isSet.Description=0;   	
    isSet.EASupport=0;   	
    isSet.ElementName=0;   	
    isSet.NTACLSupport=0;  	
  };
  
  
  //copies another instance properties in this
  void Linux_SambaShareProtocolOptionsInstance::init
   (const Linux_SambaShareProtocolOptionsInstance& original){   	
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
  void Linux_SambaShareProtocolOptionsInstance::reset(){
   	

  	if (isSet.Caption)
  	  delete(m_Caption);

  	if (isSet.Description)
  	  delete(m_Description);

  	if (isSet.ElementName)
  	  delete(m_ElementName);
  	  
  };
  
  
  //*********************************************************
  //Linux_SambaShareProtocolOptionsInstanceEnumerationElement	
  //*********************************************************
  
  Linux_SambaShareProtocolOptionsInstanceEnumerationElement::
   Linux_SambaShareProtocolOptionsInstanceEnumerationElement(){
   	
  	m_elementP=0;
  	m_nextP=0;
  	  
  };
  
  
  Linux_SambaShareProtocolOptionsInstanceEnumerationElement::
   ~Linux_SambaShareProtocolOptionsInstanceEnumerationElement(){
   	
  	if (m_elementP!=0)
  	  delete(m_elementP);
  	if (m_nextP!=0)
  	  delete(m_nextP);
  	  
  };

  
  //*********************************************************
  //Linux_SambaShareProtocolOptionsInstanceNameEnumeration
  //*********************************************************

  Linux_SambaShareProtocolOptionsInstanceEnumeration::
   Linux_SambaShareProtocolOptionsInstanceEnumeration(){
   	
  	 firstElementP=0;
     currentElementP=0;
     endElementP=0;
  };
  
  Linux_SambaShareProtocolOptionsInstanceEnumeration::
   Linux_SambaShareProtocolOptionsInstanceEnumeration(
   const Linux_SambaShareProtocolOptionsInstanceEnumeration& original){
   	
     firstElementP=0;
     currentElementP=0;
     endElementP=0;
  	 
     int size=original.getSize();
     for(int i=0;i<size;i++)
       addElement(original.getElement(i));           
  };
  
  	  
  Linux_SambaShareProtocolOptionsInstanceEnumeration::
   ~Linux_SambaShareProtocolOptionsInstanceEnumeration(){
   	
  	if (firstElementP!=0)
  	  delete(firstElementP);
  	  	
  };
  
  	  
  void Linux_SambaShareProtocolOptionsInstanceEnumeration::reset(){
  	
  	currentElementP=firstElementP;
  };
  
  	  
  bool Linux_SambaShareProtocolOptionsInstanceEnumeration::hasNext() const{
  	
  	return (currentElementP!=0);
  
  };
  
  int Linux_SambaShareProtocolOptionsInstanceEnumeration::getSize() const{
  	
    int size=0;
    Linux_SambaShareProtocolOptionsInstanceEnumerationElement* followingP=firstElementP;
  	
  	while(followingP!=0){
        followingP=followingP->m_nextP;
        size++;
    }
  	
    return size;
    
  };
  
  const Linux_SambaShareProtocolOptionsInstance&  
   Linux_SambaShareProtocolOptionsInstanceEnumeration::getElement(int pos) const{
   
    Linux_SambaShareProtocolOptionsInstanceEnumerationElement* followingP=firstElementP;
   
    int i=0;
    while((followingP!=0)&&(i<pos)){
        followingP=followingP->m_nextP;
        i++;
    }
    
    return *(followingP->m_elementP);
  };
  
  	  
  const Linux_SambaShareProtocolOptionsInstance&
   Linux_SambaShareProtocolOptionsInstanceEnumeration::getNext() {
   	
  	 Linux_SambaShareProtocolOptionsInstanceEnumerationElement* currentP=
  	  currentElementP;
  	 currentElementP=currentElementP->m_nextP;
  	 
  	 return *(currentP->m_elementP);
  };
  	  
  void Linux_SambaShareProtocolOptionsInstanceEnumeration::addElement
   (const Linux_SambaShareProtocolOptionsInstance& elementP){
   	
  	if(firstElementP==0){
  	  firstElementP=new Linux_SambaShareProtocolOptionsInstanceEnumerationElement();
  	  firstElementP->m_elementP=new Linux_SambaShareProtocolOptionsInstance(elementP);
  	  endElementP=firstElementP;
  	  currentElementP=firstElementP;
  	}else{
  	  endElementP->m_nextP=new Linux_SambaShareProtocolOptionsInstanceEnumerationElement();
  	  endElementP=endElementP->m_nextP;
  	  endElementP->m_elementP=new Linux_SambaShareProtocolOptionsInstance(elementP);
  	}
  };  
}
 
