/**
 *  Linux_SambaShareSecurityOptionsInstance.cpp
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


#include "Linux_SambaShareSecurityOptionsInstance.h"
#include "CmpiData.h"
#include "CmpiString.h"
#include "CmpiArray.h"
#include <string>

namespace genProvider {

  //*********************************************************
  //Linux_SambaShareSecurityOptionsInstance
  //*********************************************************

  //empty constructor
  Linux_SambaShareSecurityOptionsInstance::
   Linux_SambaShareSecurityOptionsInstance(){   	
   	init();  	   	
  };
  
  
  //copy constructor	
  Linux_SambaShareSecurityOptionsInstance::
   Linux_SambaShareSecurityOptionsInstance
   (const Linux_SambaShareSecurityOptionsInstance& original){   	
   	init(original);  	   	
  };
  
  
  //constructor using CmpiInstance
  Linux_SambaShareSecurityOptionsInstance::
   Linux_SambaShareSecurityOptionsInstance (const CmpiInstance& inst, const char* instanceNamespace){
    CmpiData cmpiData;
    init(); 
    
    CmpiObjectPath cop=inst.getObjectPath();
    cop.setNameSpace(instanceNamespace);
    setInstanceName(Linux_SambaShareSecurityOptionsInstanceName(cop));
    
    cmpiData = inst.getProperty("Caption");
    if(!cmpiData.isNullValue()){
      CmpiString Caption = cmpiData;
      setCaption(Caption.charPtr());
    }
    
    cmpiData = inst.getProperty("CreateMask");
    if(!cmpiData.isNullValue()){
      CMPIUint16 CreateMask = cmpiData;
      setCreateMask(CreateMask);
    }
    
    cmpiData = inst.getProperty("Description");
    if(!cmpiData.isNullValue()){
      CmpiString Description = cmpiData;
      setDescription(Description.charPtr());
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
    
    cmpiData = inst.getProperty("ElementName");
    if(!cmpiData.isNullValue()){
      CmpiString ElementName = cmpiData;
      setElementName(ElementName.charPtr());
    }
    
  }
  
  
  //Destructor
  Linux_SambaShareSecurityOptionsInstance::
   ~Linux_SambaShareSecurityOptionsInstance(){
   	reset();  	  
  };
  
  
  //copy operator
  Linux_SambaShareSecurityOptionsInstance&
   Linux_SambaShareSecurityOptionsInstance::operator=
   (const Linux_SambaShareSecurityOptionsInstance& original){   	
   	init(original);
   	return *this;
  };
  
  
  //converts to CmpiInstance
  CmpiInstance Linux_SambaShareSecurityOptionsInstance::
   getCmpiInstance(const char** properties) const{
   	
   	CmpiObjectPath objectPath=getInstanceName().getObjectPath();      
    CmpiInstance cmpiInstance(objectPath);    
    getInstanceName().fillKeys(cmpiInstance);
    
    if (properties) {
	  cmpiInstance.setPropertyFilter(properties,0);
    }

  	if(isSet.Caption){
  	  cmpiInstance.setProperty("Caption",CmpiData(m_Caption));
  	}

  	if(isSet.CreateMask){
  	  cmpiInstance.setProperty("CreateMask",CmpiData(m_CreateMask));
  	}

  	if(isSet.Description){
  	  cmpiInstance.setProperty("Description",CmpiData(m_Description));
  	}

  	if(isSet.DirectoryMask){
  	  cmpiInstance.setProperty("DirectoryMask",CmpiData(m_DirectoryMask));
  	}

  	if(isSet.DirectorySecurityMask){
  	  cmpiInstance.setProperty("DirectorySecurityMask",CmpiData(m_DirectorySecurityMask));
  	}

  	if(isSet.ElementName){
  	  cmpiInstance.setProperty("ElementName",CmpiData(m_ElementName));
  	}
  	
  	return cmpiInstance;
  	
  }
  
  
  //InstanceName related methods
  unsigned int Linux_SambaShareSecurityOptionsInstance::
   isInstanceNameSet() const{
  	return isSet.instanceName;
  }
  
  const Linux_SambaShareSecurityOptionsInstanceName&
    Linux_SambaShareSecurityOptionsInstance::getInstanceName() const{

    if(!isSet.instanceName)
   	  throw CmpiErrorFormater::getErrorException(
   	   CmpiErrorFormater::NOT_SET,
   	   "InstanceName not set in Linux_SambaShareSecurityOptions instance");
  		
   	return m_instanceName;
  }

  void Linux_SambaShareSecurityOptionsInstance::setInstanceName(
   const Linux_SambaShareSecurityOptionsInstanceName& val){
    m_instanceName = val;
    isSet.instanceName=1;
  }
       
  //Caption related methods
  unsigned int Linux_SambaShareSecurityOptionsInstance::isCaptionSet() const{
    return isSet.Caption;
  }
  void  Linux_SambaShareSecurityOptionsInstance::
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
  const char* Linux_SambaShareSecurityOptionsInstance::
   getCaption() const{
    
    if(!isSet.Caption)
   	  throw CmpiErrorFormater::getErrorException(
   	   CmpiErrorFormater::NOT_SET,
   	   "Caption not set");
   	   	
    return m_Caption;
  }
       
  //CreateMask related methods
  unsigned int Linux_SambaShareSecurityOptionsInstance::isCreateMaskSet() const{
    return isSet.CreateMask;
  }
  void Linux_SambaShareSecurityOptionsInstance::
   setCreateMask(const CMPIUint16 val){
    m_CreateMask = val;
    isSet.CreateMask=1;
  }       
  const CMPIUint16 Linux_SambaShareSecurityOptionsInstance::
   getCreateMask() const{
    
    if(!isSet.CreateMask)
   	  throw CmpiErrorFormater::getErrorException(
   	   CmpiErrorFormater::NOT_SET,
   	   "CreateMask not set");
   	   	
    return m_CreateMask;
  }
       
  //Description related methods
  unsigned int Linux_SambaShareSecurityOptionsInstance::isDescriptionSet() const{
    return isSet.Description;
  }
  void  Linux_SambaShareSecurityOptionsInstance::
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
  const char* Linux_SambaShareSecurityOptionsInstance::
   getDescription() const{
    
    if(!isSet.Description)
   	  throw CmpiErrorFormater::getErrorException(
   	   CmpiErrorFormater::NOT_SET,
   	   "Description not set");
   	   	
    return m_Description;
  }
       
  //DirectoryMask related methods
  unsigned int Linux_SambaShareSecurityOptionsInstance::isDirectoryMaskSet() const{
    return isSet.DirectoryMask;
  }
  void Linux_SambaShareSecurityOptionsInstance::
   setDirectoryMask(const CMPIUint16 val){
    m_DirectoryMask = val;
    isSet.DirectoryMask=1;
  }       
  const CMPIUint16 Linux_SambaShareSecurityOptionsInstance::
   getDirectoryMask() const{
    
    if(!isSet.DirectoryMask)
   	  throw CmpiErrorFormater::getErrorException(
   	   CmpiErrorFormater::NOT_SET,
   	   "DirectoryMask not set");
   	   	
    return m_DirectoryMask;
  }
       
  //DirectorySecurityMask related methods
  unsigned int Linux_SambaShareSecurityOptionsInstance::isDirectorySecurityMaskSet() const{
    return isSet.DirectorySecurityMask;
  }
  void Linux_SambaShareSecurityOptionsInstance::
   setDirectorySecurityMask(const CMPIUint16 val){
    m_DirectorySecurityMask = val;
    isSet.DirectorySecurityMask=1;
  }       
  const CMPIUint16 Linux_SambaShareSecurityOptionsInstance::
   getDirectorySecurityMask() const{
    
    if(!isSet.DirectorySecurityMask)
   	  throw CmpiErrorFormater::getErrorException(
   	   CmpiErrorFormater::NOT_SET,
   	   "DirectorySecurityMask not set");
   	   	
    return m_DirectorySecurityMask;
  }
       
  //ElementName related methods
  unsigned int Linux_SambaShareSecurityOptionsInstance::isElementNameSet() const{
    return isSet.ElementName;
  }
  void  Linux_SambaShareSecurityOptionsInstance::
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
  const char* Linux_SambaShareSecurityOptionsInstance::
   getElementName() const{
    
    if(!isSet.ElementName)
   	  throw CmpiErrorFormater::getErrorException(
   	   CmpiErrorFormater::NOT_SET,
   	   "ElementName not set");
   	   	
    return m_ElementName;
  }


  
  //set isSet attributes to FALSE
  void Linux_SambaShareSecurityOptionsInstance::init(){
   	isSet.instanceName=0;
   	   	
    isSet.Caption=0;   	
    isSet.CreateMask=0;   	
    isSet.Description=0;   	
    isSet.DirectoryMask=0;   	
    isSet.DirectorySecurityMask=0;   	
    isSet.ElementName=0;  	
  };
  
  
  //copies another instance properties in this
  void Linux_SambaShareSecurityOptionsInstance::init
   (const Linux_SambaShareSecurityOptionsInstance& original){   	
   	init();
   	   	
    if(original.isInstanceNameSet()){
      setInstanceName(original.getInstanceName());
    }   	
    if(original.isCaptionSet()){
      const char* CaptionOriginal=original.getCaption();
      setCaption(CaptionOriginal, 1);
    }   	
    if(original.isCreateMaskSet()){
      const CMPIUint16 CreateMaskOriginal=original.getCreateMask();
      setCreateMask(CreateMaskOriginal);
    }   	
    if(original.isDescriptionSet()){
      const char* DescriptionOriginal=original.getDescription();
      setDescription(DescriptionOriginal, 1);
    }   	
    if(original.isDirectoryMaskSet()){
      const CMPIUint16 DirectoryMaskOriginal=original.getDirectoryMask();
      setDirectoryMask(DirectoryMaskOriginal);
    }   	
    if(original.isDirectorySecurityMaskSet()){
      const CMPIUint16 DirectorySecurityMaskOriginal=original.getDirectorySecurityMask();
      setDirectorySecurityMask(DirectorySecurityMaskOriginal);
    }   	
    if(original.isElementNameSet()){
      const char* ElementNameOriginal=original.getElementName();
      setElementName(ElementNameOriginal, 1);
    }    
   }
  
  
  //reset the instance data
  void Linux_SambaShareSecurityOptionsInstance::reset(){
   	

  	if (isSet.Caption)
  	  delete(m_Caption);

  	if (isSet.Description)
  	  delete(m_Description);

  	if (isSet.ElementName)
  	  delete(m_ElementName);
  	  
  };
  
  
  //*********************************************************
  //Linux_SambaShareSecurityOptionsInstanceEnumerationElement	
  //*********************************************************
  
  Linux_SambaShareSecurityOptionsInstanceEnumerationElement::
   Linux_SambaShareSecurityOptionsInstanceEnumerationElement(){
   	
  	m_elementP=0;
  	m_nextP=0;
  	  
  };
  
  
  Linux_SambaShareSecurityOptionsInstanceEnumerationElement::
   ~Linux_SambaShareSecurityOptionsInstanceEnumerationElement(){
   	
  	if (m_elementP!=0)
  	  delete(m_elementP);
  	if (m_nextP!=0)
  	  delete(m_nextP);
  	  
  };

  
  //*********************************************************
  //Linux_SambaShareSecurityOptionsInstanceNameEnumeration
  //*********************************************************

  Linux_SambaShareSecurityOptionsInstanceEnumeration::
   Linux_SambaShareSecurityOptionsInstanceEnumeration(){
   	
  	 firstElementP=0;
     currentElementP=0;
     endElementP=0;
  };
  
  Linux_SambaShareSecurityOptionsInstanceEnumeration::
   Linux_SambaShareSecurityOptionsInstanceEnumeration(
   const Linux_SambaShareSecurityOptionsInstanceEnumeration& original){
   	
     firstElementP=0;
     currentElementP=0;
     endElementP=0;
  	 
     int size=original.getSize();
     for(int i=0;i<size;i++)
       addElement(original.getElement(i));           
  };
  
  	  
  Linux_SambaShareSecurityOptionsInstanceEnumeration::
   ~Linux_SambaShareSecurityOptionsInstanceEnumeration(){
   	
  	if (firstElementP!=0)
  	  delete(firstElementP);
  	  	
  };
  
  	  
  void Linux_SambaShareSecurityOptionsInstanceEnumeration::reset(){
  	
  	currentElementP=firstElementP;
  };
  
  	  
  bool Linux_SambaShareSecurityOptionsInstanceEnumeration::hasNext() const{
  	
  	return (currentElementP!=0);
  
  };
  
  int Linux_SambaShareSecurityOptionsInstanceEnumeration::getSize() const{
  	
    int size=0;
    Linux_SambaShareSecurityOptionsInstanceEnumerationElement* followingP=firstElementP;
  	
  	while(followingP!=0){
        followingP=followingP->m_nextP;
        size++;
    }
  	
    return size;
    
  };
  
  const Linux_SambaShareSecurityOptionsInstance&  
   Linux_SambaShareSecurityOptionsInstanceEnumeration::getElement(int pos) const{
   
    Linux_SambaShareSecurityOptionsInstanceEnumerationElement* followingP=firstElementP;
   
    int i=0;
    while((followingP!=0)&&(i<pos)){
        followingP=followingP->m_nextP;
        i++;
    }
    
    return *(followingP->m_elementP);
  };
  
  	  
  const Linux_SambaShareSecurityOptionsInstance&
   Linux_SambaShareSecurityOptionsInstanceEnumeration::getNext() {
   	
  	 Linux_SambaShareSecurityOptionsInstanceEnumerationElement* currentP=
  	  currentElementP;
  	 currentElementP=currentElementP->m_nextP;
  	 
  	 return *(currentP->m_elementP);
  };
  	  
  void Linux_SambaShareSecurityOptionsInstanceEnumeration::addElement
   (const Linux_SambaShareSecurityOptionsInstance& elementP){
   	
  	if(firstElementP==0){
  	  firstElementP=new Linux_SambaShareSecurityOptionsInstanceEnumerationElement();
  	  firstElementP->m_elementP=new Linux_SambaShareSecurityOptionsInstance(elementP);
  	  endElementP=firstElementP;
  	  currentElementP=firstElementP;
  	}else{
  	  endElementP->m_nextP=new Linux_SambaShareSecurityOptionsInstanceEnumerationElement();
  	  endElementP=endElementP->m_nextP;
  	  endElementP->m_elementP=new Linux_SambaShareSecurityOptionsInstance(elementP);
  	}
  };  
}
 
