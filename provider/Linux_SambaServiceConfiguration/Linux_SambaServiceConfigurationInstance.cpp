/**
 *  Linux_SambaServiceConfigurationInstance.cpp
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


#include "Linux_SambaServiceConfigurationInstance.h"
#include "CmpiData.h"
#include "CmpiString.h"
#include "CmpiArray.h"
#include <string>

namespace genProvider {

  //*********************************************************
  //Linux_SambaServiceConfigurationInstance
  //*********************************************************

  //empty constructor
  Linux_SambaServiceConfigurationInstance::
   Linux_SambaServiceConfigurationInstance(){   	
   	init();  	   	
  };
  
  
  //copy constructor	
  Linux_SambaServiceConfigurationInstance::
   Linux_SambaServiceConfigurationInstance
   (const Linux_SambaServiceConfigurationInstance& original){   	
   	init(original);  	   	
  };
  
  
  //constructor using CmpiInstance
  Linux_SambaServiceConfigurationInstance::
   Linux_SambaServiceConfigurationInstance (const CmpiInstance& inst, const char* instanceNamespace){
    CmpiData cmpiData;
    init(); 
    
    CmpiObjectPath cop=inst.getObjectPath();
    cop.setNameSpace(instanceNamespace);
    setInstanceName(Linux_SambaServiceConfigurationInstanceName(cop));
    
    cmpiData = inst.getProperty("Caption");
    if(!cmpiData.isNullValue()){
      CmpiString Caption = cmpiData;
      setCaption(Caption.charPtr());
    }
    
    cmpiData = inst.getProperty("ConfigurationFile");
    if(!cmpiData.isNullValue()){
      CmpiString ConfigurationFile = cmpiData;
      setConfigurationFile(ConfigurationFile.charPtr());
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
    
  }
  
  
  //Destructor
  Linux_SambaServiceConfigurationInstance::
   ~Linux_SambaServiceConfigurationInstance(){
   	reset();  	  
  };
  
  
  //copy operator
  Linux_SambaServiceConfigurationInstance&
   Linux_SambaServiceConfigurationInstance::operator=
   (const Linux_SambaServiceConfigurationInstance& original){   	
   	init(original);
   	return *this;
  };
  
  
  //converts to CmpiInstance
  CmpiInstance Linux_SambaServiceConfigurationInstance::
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

  	if(isSet.ConfigurationFile){
  	  cmpiInstance.setProperty("ConfigurationFile",CmpiData(m_ConfigurationFile));
  	}

  	if(isSet.Description){
  	  cmpiInstance.setProperty("Description",CmpiData(m_Description));
  	}

  	if(isSet.ElementName){
  	  cmpiInstance.setProperty("ElementName",CmpiData(m_ElementName));
  	}
  	
  	return cmpiInstance;
  	
  }
  
  
  //InstanceName related methods
  unsigned int Linux_SambaServiceConfigurationInstance::
   isInstanceNameSet() const{
  	return isSet.instanceName;
  }
  
  const Linux_SambaServiceConfigurationInstanceName&
    Linux_SambaServiceConfigurationInstance::getInstanceName() const{

    if(!isSet.instanceName)
   	  throw CmpiErrorFormater::getErrorException(
   	   CmpiErrorFormater::NOT_SET,
   	   "InstanceName not set in Linux_SambaServiceConfiguration instance");
  		
   	return m_instanceName;
  }

  void Linux_SambaServiceConfigurationInstance::setInstanceName(
   const Linux_SambaServiceConfigurationInstanceName& val){
    m_instanceName = val;
    isSet.instanceName=1;
  }
       
  //Caption related methods
  unsigned int Linux_SambaServiceConfigurationInstance::isCaptionSet() const{
    return isSet.Caption;
  }
  void  Linux_SambaServiceConfigurationInstance::
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
  const char* Linux_SambaServiceConfigurationInstance::
   getCaption() const{
    
    if(!isSet.Caption)
   	  throw CmpiErrorFormater::getErrorException(
   	   CmpiErrorFormater::NOT_SET,
   	   "Caption not set");
   	   	
    return m_Caption;
  }
       
  //ConfigurationFile related methods
  unsigned int Linux_SambaServiceConfigurationInstance::isConfigurationFileSet() const{
    return isSet.ConfigurationFile;
  }
  void  Linux_SambaServiceConfigurationInstance::
   setConfigurationFile(const char* val, int makeCopy){
    if (isSet.ConfigurationFile) {
      delete []m_ConfigurationFile;
    }
    if (makeCopy&&val) {
      char* tmpval = new char[strlen(val)+1];
      strcpy(tmpval,val);
      m_ConfigurationFile = tmpval;
    } else {
      m_ConfigurationFile = val;
    }
    isSet.ConfigurationFile=1;
  }       
  const char* Linux_SambaServiceConfigurationInstance::
   getConfigurationFile() const{
    
    if(!isSet.ConfigurationFile)
   	  throw CmpiErrorFormater::getErrorException(
   	   CmpiErrorFormater::NOT_SET,
   	   "ConfigurationFile not set");
   	   	
    return m_ConfigurationFile;
  }
       
  //Description related methods
  unsigned int Linux_SambaServiceConfigurationInstance::isDescriptionSet() const{
    return isSet.Description;
  }
  void  Linux_SambaServiceConfigurationInstance::
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
  const char* Linux_SambaServiceConfigurationInstance::
   getDescription() const{
    
    if(!isSet.Description)
   	  throw CmpiErrorFormater::getErrorException(
   	   CmpiErrorFormater::NOT_SET,
   	   "Description not set");
   	   	
    return m_Description;
  }
       
  //ElementName related methods
  unsigned int Linux_SambaServiceConfigurationInstance::isElementNameSet() const{
    return isSet.ElementName;
  }
  void  Linux_SambaServiceConfigurationInstance::
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
  const char* Linux_SambaServiceConfigurationInstance::
   getElementName() const{
    
    if(!isSet.ElementName)
   	  throw CmpiErrorFormater::getErrorException(
   	   CmpiErrorFormater::NOT_SET,
   	   "ElementName not set");
   	   	
    return m_ElementName;
  }


  
  //set isSet attributes to FALSE
  void Linux_SambaServiceConfigurationInstance::init(){
   	isSet.instanceName=0;
   	   	
    isSet.Caption=0;   	
    isSet.ConfigurationFile=0;   	
    isSet.Description=0;   	
    isSet.ElementName=0;  	
  };
  
  
  //copies another instance properties in this
  void Linux_SambaServiceConfigurationInstance::init
   (const Linux_SambaServiceConfigurationInstance& original){   	
   	init();
   	   	
    if(original.isInstanceNameSet()){
      setInstanceName(original.getInstanceName());
    }   	
    if(original.isCaptionSet()){
      const char* CaptionOriginal=original.getCaption();
      setCaption(CaptionOriginal, 1);
    }   	
    if(original.isConfigurationFileSet()){
      const char* ConfigurationFileOriginal=original.getConfigurationFile();
      setConfigurationFile(ConfigurationFileOriginal, 1);
    }   	
    if(original.isDescriptionSet()){
      const char* DescriptionOriginal=original.getDescription();
      setDescription(DescriptionOriginal, 1);
    }   	
    if(original.isElementNameSet()){
      const char* ElementNameOriginal=original.getElementName();
      setElementName(ElementNameOriginal, 1);
    }    
   }
  
  
  //reset the instance data
  void Linux_SambaServiceConfigurationInstance::reset(){
   	

  	if (isSet.Caption)
  	  delete(m_Caption);

  	if (isSet.ConfigurationFile)
  	  delete(m_ConfigurationFile);

  	if (isSet.Description)
  	  delete(m_Description);

  	if (isSet.ElementName)
  	  delete(m_ElementName);
  	  
  };
  
  
  //*********************************************************
  //Linux_SambaServiceConfigurationInstanceEnumerationElement	
  //*********************************************************
  
  Linux_SambaServiceConfigurationInstanceEnumerationElement::
   Linux_SambaServiceConfigurationInstanceEnumerationElement(){
   	
  	m_elementP=0;
  	m_nextP=0;
  	  
  };
  
  
  Linux_SambaServiceConfigurationInstanceEnumerationElement::
   ~Linux_SambaServiceConfigurationInstanceEnumerationElement(){
   	
  	if (m_elementP!=0)
  	  delete(m_elementP);
  	if (m_nextP!=0)
  	  delete(m_nextP);
  	  
  };

  
  //*********************************************************
  //Linux_SambaServiceConfigurationInstanceNameEnumeration
  //*********************************************************

  Linux_SambaServiceConfigurationInstanceEnumeration::
   Linux_SambaServiceConfigurationInstanceEnumeration(){
   	
  	 firstElementP=0;
     currentElementP=0;
     endElementP=0;
  };
  
  Linux_SambaServiceConfigurationInstanceEnumeration::
   Linux_SambaServiceConfigurationInstanceEnumeration(
   const Linux_SambaServiceConfigurationInstanceEnumeration& original){
   	
     firstElementP=0;
     currentElementP=0;
     endElementP=0;
  	 
     int size=original.getSize();
     for(int i=0;i<size;i++)
       addElement(original.getElement(i));           
  };
  
  	  
  Linux_SambaServiceConfigurationInstanceEnumeration::
   ~Linux_SambaServiceConfigurationInstanceEnumeration(){
   	
  	if (firstElementP!=0)
  	  delete(firstElementP);
  	  	
  };
  
  	  
  void Linux_SambaServiceConfigurationInstanceEnumeration::reset(){
  	
  	currentElementP=firstElementP;
  };
  
  	  
  bool Linux_SambaServiceConfigurationInstanceEnumeration::hasNext() const{
  	
  	return (currentElementP!=0);
  
  };
  
  int Linux_SambaServiceConfigurationInstanceEnumeration::getSize() const{
  	
    int size=0;
    Linux_SambaServiceConfigurationInstanceEnumerationElement* followingP=firstElementP;
  	
  	while(followingP!=0){
        followingP=followingP->m_nextP;
        size++;
    }
  	
    return size;
    
  };
  
  const Linux_SambaServiceConfigurationInstance&  
   Linux_SambaServiceConfigurationInstanceEnumeration::getElement(int pos) const{
   
    Linux_SambaServiceConfigurationInstanceEnumerationElement* followingP=firstElementP;
   
    int i=0;
    while((followingP!=0)&&(i<pos)){
        followingP=followingP->m_nextP;
        i++;
    }
    
    return *(followingP->m_elementP);
  };
  
  	  
  const Linux_SambaServiceConfigurationInstance&
   Linux_SambaServiceConfigurationInstanceEnumeration::getNext() {
   	
  	 Linux_SambaServiceConfigurationInstanceEnumerationElement* currentP=
  	  currentElementP;
  	 currentElementP=currentElementP->m_nextP;
  	 
  	 return *(currentP->m_elementP);
  };
  	  
  void Linux_SambaServiceConfigurationInstanceEnumeration::addElement
   (const Linux_SambaServiceConfigurationInstance& elementP){
   	
  	if(firstElementP==0){
  	  firstElementP=new Linux_SambaServiceConfigurationInstanceEnumerationElement();
  	  firstElementP->m_elementP=new Linux_SambaServiceConfigurationInstance(elementP);
  	  endElementP=firstElementP;
  	  currentElementP=firstElementP;
  	}else{
  	  endElementP->m_nextP=new Linux_SambaServiceConfigurationInstanceEnumerationElement();
  	  endElementP=endElementP->m_nextP;
  	  endElementP->m_elementP=new Linux_SambaServiceConfigurationInstance(elementP);
  	}
  };  
}
 
