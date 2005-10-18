/**
 *  Linux_SambaGroupInstance.cpp
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


#include "Linux_SambaGroupInstance.h"
#include "CmpiData.h"
#include "CmpiString.h"
#include "CmpiArray.h"
#include <string>

namespace genProvider {

  //*********************************************************
  //Linux_SambaGroupInstance
  //*********************************************************

  //empty constructor
  Linux_SambaGroupInstance::
   Linux_SambaGroupInstance(){   	
   	init();  	   	
  };
  
  
  //copy constructor	
  Linux_SambaGroupInstance::
   Linux_SambaGroupInstance
   (const Linux_SambaGroupInstance& original){   	
   	init(original);  	   	
  };
  
  
  //constructor using CmpiInstance
  Linux_SambaGroupInstance::
   Linux_SambaGroupInstance (const CmpiInstance& inst, const char* instanceNamespace){
    CmpiData cmpiData;
    init(); 
    
    CmpiObjectPath cop=inst.getObjectPath();
    cop.setNameSpace(instanceNamespace);
    setInstanceName(Linux_SambaGroupInstanceName(cop));
    
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
    
    cmpiData = inst.getProperty("ElementName");
    if(!cmpiData.isNullValue()){
      CmpiString ElementName = cmpiData;
      setElementName(ElementName.charPtr());
    }
    
    cmpiData = inst.getProperty("SystemGroupName");
    if(!cmpiData.isNullValue()){
      CmpiString SystemGroupName = cmpiData;
      setSystemGroupName(SystemGroupName.charPtr());
    }
    
  }
  
  
  //Destructor
  Linux_SambaGroupInstance::
   ~Linux_SambaGroupInstance(){
   	reset();  	  
  };
  
  
  //copy operator
  Linux_SambaGroupInstance&
   Linux_SambaGroupInstance::operator=
   (const Linux_SambaGroupInstance& original){   	
   	init(original);
   	return *this;
  };
  
  
  //converts to CmpiInstance
  CmpiInstance Linux_SambaGroupInstance::
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

  	if(isSet.Description){
  	  cmpiInstance.setProperty("Description",CmpiData(m_Description));
  	}

  	if(isSet.ElementName){
  	  cmpiInstance.setProperty("ElementName",CmpiData(m_ElementName));
  	}

  	if(isSet.SystemGroupName){
  	  cmpiInstance.setProperty("SystemGroupName",CmpiData(m_SystemGroupName));
  	}
  	
  	return cmpiInstance;
  	
  }
  
  
  //InstanceName related methods
  unsigned int Linux_SambaGroupInstance::
   isInstanceNameSet() const{
  	return isSet.instanceName;
  }
  
  const Linux_SambaGroupInstanceName&
    Linux_SambaGroupInstance::getInstanceName() const{

    if(!isSet.instanceName)
   	  throw CmpiErrorFormater::getErrorException(
   	   CmpiErrorFormater::NOT_SET,
   	   "InstanceName not set in Linux_SambaGroup instance");
  		
   	return m_instanceName;
  }

  void Linux_SambaGroupInstance::setInstanceName(
   const Linux_SambaGroupInstanceName& val){
    m_instanceName = val;
    isSet.instanceName=1;
  }
       
  //Caption related methods
  unsigned int Linux_SambaGroupInstance::isCaptionSet() const{
    return isSet.Caption;
  }
  void  Linux_SambaGroupInstance::
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
  const char* Linux_SambaGroupInstance::
   getCaption() const{
    
    if(!isSet.Caption)
   	  throw CmpiErrorFormater::getErrorException(
   	   CmpiErrorFormater::NOT_SET,
   	   "Caption not set");
   	   	
    return m_Caption;
  }
       
  //Description related methods
  unsigned int Linux_SambaGroupInstance::isDescriptionSet() const{
    return isSet.Description;
  }
  void  Linux_SambaGroupInstance::
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
  const char* Linux_SambaGroupInstance::
   getDescription() const{
    
    if(!isSet.Description)
   	  throw CmpiErrorFormater::getErrorException(
   	   CmpiErrorFormater::NOT_SET,
   	   "Description not set");
   	   	
    return m_Description;
  }
       
  //ElementName related methods
  unsigned int Linux_SambaGroupInstance::isElementNameSet() const{
    return isSet.ElementName;
  }
  void  Linux_SambaGroupInstance::
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
  const char* Linux_SambaGroupInstance::
   getElementName() const{
    
    if(!isSet.ElementName)
   	  throw CmpiErrorFormater::getErrorException(
   	   CmpiErrorFormater::NOT_SET,
   	   "ElementName not set");
   	   	
    return m_ElementName;
  }
       
  //SystemGroupName related methods
  unsigned int Linux_SambaGroupInstance::isSystemGroupNameSet() const{
    return isSet.SystemGroupName;
  }
  void  Linux_SambaGroupInstance::
   setSystemGroupName(const char* val, int makeCopy){
    if (isSet.SystemGroupName) {
      delete []m_SystemGroupName;
    }
    if (makeCopy&&val) {
      char* tmpval = new char[strlen(val)+1];
      strcpy(tmpval,val);
      m_SystemGroupName = tmpval;
    } else {
      m_SystemGroupName = val;
    }
    isSet.SystemGroupName=1;
  }       
  const char* Linux_SambaGroupInstance::
   getSystemGroupName() const{
    
    if(!isSet.SystemGroupName)
   	  throw CmpiErrorFormater::getErrorException(
   	   CmpiErrorFormater::NOT_SET,
   	   "SystemGroupName not set");
   	   	
    return m_SystemGroupName;
  }


  
  //set isSet attributes to FALSE
  void Linux_SambaGroupInstance::init(){
   	isSet.instanceName=0;
   	   	
    isSet.Caption=0;   	
    isSet.Description=0;   	
    isSet.ElementName=0;   	
    isSet.SystemGroupName=0;  	
  };
  
  
  //copies another instance properties in this
  void Linux_SambaGroupInstance::init
   (const Linux_SambaGroupInstance& original){   	
   	init();
   	   	
    if(original.isInstanceNameSet()){
      setInstanceName(original.getInstanceName());
    }   	
    if(original.isCaptionSet()){
      const char* CaptionOriginal=original.getCaption();
      setCaption(CaptionOriginal, 1);
    }   	
    if(original.isDescriptionSet()){
      const char* DescriptionOriginal=original.getDescription();
      setDescription(DescriptionOriginal, 1);
    }   	
    if(original.isElementNameSet()){
      const char* ElementNameOriginal=original.getElementName();
      setElementName(ElementNameOriginal, 1);
    }   	
    if(original.isSystemGroupNameSet()){
      const char* SystemGroupNameOriginal=original.getSystemGroupName();
      setSystemGroupName(SystemGroupNameOriginal, 1);
    }    
   }
  
  
  //reset the instance data
  void Linux_SambaGroupInstance::reset(){
   	

  	if (isSet.Caption)
  	  delete(m_Caption);

  	if (isSet.Description)
  	  delete(m_Description);

  	if (isSet.ElementName)
  	  delete(m_ElementName);

  	if (isSet.SystemGroupName)
  	  delete(m_SystemGroupName);
  	  
  };
  
  
  //*********************************************************
  //Linux_SambaGroupInstanceEnumerationElement	
  //*********************************************************
  
  Linux_SambaGroupInstanceEnumerationElement::
   Linux_SambaGroupInstanceEnumerationElement(){
   	
  	m_elementP=0;
  	m_nextP=0;
  	  
  };
  
  
  Linux_SambaGroupInstanceEnumerationElement::
   ~Linux_SambaGroupInstanceEnumerationElement(){
   	
  	if (m_elementP!=0)
  	  delete(m_elementP);
  	if (m_nextP!=0)
  	  delete(m_nextP);
  	  
  };

  
  //*********************************************************
  //Linux_SambaGroupInstanceNameEnumeration
  //*********************************************************

  Linux_SambaGroupInstanceEnumeration::
   Linux_SambaGroupInstanceEnumeration(){
   	
  	 firstElementP=0;
     currentElementP=0;
     endElementP=0;
  };
  
  Linux_SambaGroupInstanceEnumeration::
   Linux_SambaGroupInstanceEnumeration(
   const Linux_SambaGroupInstanceEnumeration& original){
   	
     firstElementP=0;
     currentElementP=0;
     endElementP=0;
  	 
     int size=original.getSize();
     for(int i=0;i<size;i++)
       addElement(original.getElement(i));           
  };
  
  	  
  Linux_SambaGroupInstanceEnumeration::
   ~Linux_SambaGroupInstanceEnumeration(){
   	
  	if (firstElementP!=0)
  	  delete(firstElementP);
  	  	
  };
  
  	  
  void Linux_SambaGroupInstanceEnumeration::reset(){
  	
  	currentElementP=firstElementP;
  };
  
  	  
  bool Linux_SambaGroupInstanceEnumeration::hasNext() const{
  	
  	return (currentElementP!=0);
  
  };
  
  int Linux_SambaGroupInstanceEnumeration::getSize() const{
  	
    int size=0;
    Linux_SambaGroupInstanceEnumerationElement* followingP=firstElementP;
  	
  	while(followingP!=0){
        followingP=followingP->m_nextP;
        size++;
    }
  	
    return size;
    
  };
  
  const Linux_SambaGroupInstance&  
   Linux_SambaGroupInstanceEnumeration::getElement(int pos) const{
   
    Linux_SambaGroupInstanceEnumerationElement* followingP=firstElementP;
   
    int i=0;
    while((followingP!=0)&&(i<pos)){
        followingP=followingP->m_nextP;
        i++;
    }
    
    return *(followingP->m_elementP);
  };
  
  	  
  const Linux_SambaGroupInstance&
   Linux_SambaGroupInstanceEnumeration::getNext() {
   	
  	 Linux_SambaGroupInstanceEnumerationElement* currentP=
  	  currentElementP;
  	 currentElementP=currentElementP->m_nextP;
  	 
  	 return *(currentP->m_elementP);
  };
  	  
  void Linux_SambaGroupInstanceEnumeration::addElement
   (const Linux_SambaGroupInstance& elementP){
   	
  	if(firstElementP==0){
  	  firstElementP=new Linux_SambaGroupInstanceEnumerationElement();
  	  firstElementP->m_elementP=new Linux_SambaGroupInstance(elementP);
  	  endElementP=firstElementP;
  	  currentElementP=firstElementP;
  	}else{
  	  endElementP->m_nextP=new Linux_SambaGroupInstanceEnumerationElement();
  	  endElementP=endElementP->m_nextP;
  	  endElementP->m_elementP=new Linux_SambaGroupInstance(elementP);
  	}
  };  
}
 
