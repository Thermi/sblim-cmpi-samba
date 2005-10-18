/**
 *  Linux_SambaGlobalFileNameHandlingOptionsInstance.cpp
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


#include "Linux_SambaGlobalFileNameHandlingOptionsInstance.h"
#include "CmpiData.h"
#include "CmpiString.h"
#include "CmpiArray.h"
#include <string>

namespace genProvider {

  //*********************************************************
  //Linux_SambaGlobalFileNameHandlingOptionsInstance
  //*********************************************************

  //empty constructor
  Linux_SambaGlobalFileNameHandlingOptionsInstance::
   Linux_SambaGlobalFileNameHandlingOptionsInstance(){   	
   	init();  	   	
  };
  
  
  //copy constructor	
  Linux_SambaGlobalFileNameHandlingOptionsInstance::
   Linux_SambaGlobalFileNameHandlingOptionsInstance
   (const Linux_SambaGlobalFileNameHandlingOptionsInstance& original){   	
   	init(original);  	   	
  };
  
  
  //constructor using CmpiInstance
  Linux_SambaGlobalFileNameHandlingOptionsInstance::
   Linux_SambaGlobalFileNameHandlingOptionsInstance (const CmpiInstance& inst, const char* instanceNamespace){
    CmpiData cmpiData;
    init(); 
    
    CmpiObjectPath cop=inst.getObjectPath();
    cop.setNameSpace(instanceNamespace);
    setInstanceName(Linux_SambaGlobalFileNameHandlingOptionsInstanceName(cop));
    
    cmpiData = inst.getProperty("Caption");
    if(!cmpiData.isNullValue()){
      CmpiString Caption = cmpiData;
      setCaption(Caption.charPtr());
    }
    
    cmpiData = inst.getProperty("CaseSensitive");
    if(!cmpiData.isNullValue()){
      CMPIBoolean CaseSensitive = cmpiData;
      setCaseSensitive(CaseSensitive);
    }
    
    cmpiData = inst.getProperty("Description");
    if(!cmpiData.isNullValue()){
      CmpiString Description = cmpiData;
      setDescription(Description.charPtr());
    }
    
    cmpiData = inst.getProperty("DosFiletimes");
    if(!cmpiData.isNullValue()){
      CMPIBoolean DosFiletimes = cmpiData;
      setDosFiletimes(DosFiletimes);
    }
    
    cmpiData = inst.getProperty("ElementName");
    if(!cmpiData.isNullValue()){
      CmpiString ElementName = cmpiData;
      setElementName(ElementName.charPtr());
    }
    
    cmpiData = inst.getProperty("HideDotFiles");
    if(!cmpiData.isNullValue()){
      CMPIBoolean HideDotFiles = cmpiData;
      setHideDotFiles(HideDotFiles);
    }
    
  }
  
  
  //Destructor
  Linux_SambaGlobalFileNameHandlingOptionsInstance::
   ~Linux_SambaGlobalFileNameHandlingOptionsInstance(){
   	reset();  	  
  };
  
  
  //copy operator
  Linux_SambaGlobalFileNameHandlingOptionsInstance&
   Linux_SambaGlobalFileNameHandlingOptionsInstance::operator=
   (const Linux_SambaGlobalFileNameHandlingOptionsInstance& original){   	
   	init(original);
   	return *this;
  };
  
  
  //converts to CmpiInstance
  CmpiInstance Linux_SambaGlobalFileNameHandlingOptionsInstance::
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

  	if(isSet.CaseSensitive){
  	  cmpiInstance.setProperty("CaseSensitive",CmpiBooleanData(m_CaseSensitive));
  	}

  	if(isSet.Description){
  	  cmpiInstance.setProperty("Description",CmpiData(m_Description));
  	}

  	if(isSet.DosFiletimes){
  	  cmpiInstance.setProperty("DosFiletimes",CmpiBooleanData(m_DosFiletimes));
  	}

  	if(isSet.ElementName){
  	  cmpiInstance.setProperty("ElementName",CmpiData(m_ElementName));
  	}

  	if(isSet.HideDotFiles){
  	  cmpiInstance.setProperty("HideDotFiles",CmpiBooleanData(m_HideDotFiles));
  	}
  	
  	return cmpiInstance;
  	
  }
  
  
  //InstanceName related methods
  unsigned int Linux_SambaGlobalFileNameHandlingOptionsInstance::
   isInstanceNameSet() const{
  	return isSet.instanceName;
  }
  
  const Linux_SambaGlobalFileNameHandlingOptionsInstanceName&
    Linux_SambaGlobalFileNameHandlingOptionsInstance::getInstanceName() const{

    if(!isSet.instanceName)
   	  throw CmpiErrorFormater::getErrorException(
   	   CmpiErrorFormater::NOT_SET,
   	   "InstanceName not set in Linux_SambaGlobalFileNameHandlingOptions instance");
  		
   	return m_instanceName;
  }

  void Linux_SambaGlobalFileNameHandlingOptionsInstance::setInstanceName(
   const Linux_SambaGlobalFileNameHandlingOptionsInstanceName& val){
    m_instanceName = val;
    isSet.instanceName=1;
  }
       
  //Caption related methods
  unsigned int Linux_SambaGlobalFileNameHandlingOptionsInstance::isCaptionSet() const{
    return isSet.Caption;
  }
  void  Linux_SambaGlobalFileNameHandlingOptionsInstance::
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
  const char* Linux_SambaGlobalFileNameHandlingOptionsInstance::
   getCaption() const{
    
    if(!isSet.Caption)
   	  throw CmpiErrorFormater::getErrorException(
   	   CmpiErrorFormater::NOT_SET,
   	   "Caption not set");
   	   	
    return m_Caption;
  }
       
  //CaseSensitive related methods
  unsigned int Linux_SambaGlobalFileNameHandlingOptionsInstance::isCaseSensitiveSet() const{
    return isSet.CaseSensitive;
  }
  void Linux_SambaGlobalFileNameHandlingOptionsInstance::
   setCaseSensitive(const CMPIBoolean val){
    m_CaseSensitive = val;
    isSet.CaseSensitive=1;
  }       
  const CMPIBoolean Linux_SambaGlobalFileNameHandlingOptionsInstance::
   getCaseSensitive() const{
    
    if(!isSet.CaseSensitive)
   	  throw CmpiErrorFormater::getErrorException(
   	   CmpiErrorFormater::NOT_SET,
   	   "CaseSensitive not set");
   	   	
    return m_CaseSensitive;
  }
       
  //Description related methods
  unsigned int Linux_SambaGlobalFileNameHandlingOptionsInstance::isDescriptionSet() const{
    return isSet.Description;
  }
  void  Linux_SambaGlobalFileNameHandlingOptionsInstance::
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
  const char* Linux_SambaGlobalFileNameHandlingOptionsInstance::
   getDescription() const{
    
    if(!isSet.Description)
   	  throw CmpiErrorFormater::getErrorException(
   	   CmpiErrorFormater::NOT_SET,
   	   "Description not set");
   	   	
    return m_Description;
  }
       
  //DosFiletimes related methods
  unsigned int Linux_SambaGlobalFileNameHandlingOptionsInstance::isDosFiletimesSet() const{
    return isSet.DosFiletimes;
  }
  void Linux_SambaGlobalFileNameHandlingOptionsInstance::
   setDosFiletimes(const CMPIBoolean val){
    m_DosFiletimes = val;
    isSet.DosFiletimes=1;
  }       
  const CMPIBoolean Linux_SambaGlobalFileNameHandlingOptionsInstance::
   getDosFiletimes() const{
    
    if(!isSet.DosFiletimes)
   	  throw CmpiErrorFormater::getErrorException(
   	   CmpiErrorFormater::NOT_SET,
   	   "DosFiletimes not set");
   	   	
    return m_DosFiletimes;
  }
       
  //ElementName related methods
  unsigned int Linux_SambaGlobalFileNameHandlingOptionsInstance::isElementNameSet() const{
    return isSet.ElementName;
  }
  void  Linux_SambaGlobalFileNameHandlingOptionsInstance::
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
  const char* Linux_SambaGlobalFileNameHandlingOptionsInstance::
   getElementName() const{
    
    if(!isSet.ElementName)
   	  throw CmpiErrorFormater::getErrorException(
   	   CmpiErrorFormater::NOT_SET,
   	   "ElementName not set");
   	   	
    return m_ElementName;
  }
       
  //HideDotFiles related methods
  unsigned int Linux_SambaGlobalFileNameHandlingOptionsInstance::isHideDotFilesSet() const{
    return isSet.HideDotFiles;
  }
  void Linux_SambaGlobalFileNameHandlingOptionsInstance::
   setHideDotFiles(const CMPIBoolean val){
    m_HideDotFiles = val;
    isSet.HideDotFiles=1;
  }       
  const CMPIBoolean Linux_SambaGlobalFileNameHandlingOptionsInstance::
   getHideDotFiles() const{
    
    if(!isSet.HideDotFiles)
   	  throw CmpiErrorFormater::getErrorException(
   	   CmpiErrorFormater::NOT_SET,
   	   "HideDotFiles not set");
   	   	
    return m_HideDotFiles;
  }


  
  //set isSet attributes to FALSE
  void Linux_SambaGlobalFileNameHandlingOptionsInstance::init(){
   	isSet.instanceName=0;
   	   	
    isSet.Caption=0;   	
    isSet.CaseSensitive=0;   	
    isSet.Description=0;   	
    isSet.DosFiletimes=0;   	
    isSet.ElementName=0;   	
    isSet.HideDotFiles=0;  	
  };
  
  
  //copies another instance properties in this
  void Linux_SambaGlobalFileNameHandlingOptionsInstance::init
   (const Linux_SambaGlobalFileNameHandlingOptionsInstance& original){   	
   	init();
   	   	
    if(original.isInstanceNameSet()){
      setInstanceName(original.getInstanceName());
    }   	
    if(original.isCaptionSet()){
      const char* CaptionOriginal=original.getCaption();
      setCaption(CaptionOriginal, 1);
    }   	
    if(original.isCaseSensitiveSet()){
      const CMPIBoolean CaseSensitiveOriginal=original.getCaseSensitive();
      setCaseSensitive(CaseSensitiveOriginal);
    }   	
    if(original.isDescriptionSet()){
      const char* DescriptionOriginal=original.getDescription();
      setDescription(DescriptionOriginal, 1);
    }   	
    if(original.isDosFiletimesSet()){
      const CMPIBoolean DosFiletimesOriginal=original.getDosFiletimes();
      setDosFiletimes(DosFiletimesOriginal);
    }   	
    if(original.isElementNameSet()){
      const char* ElementNameOriginal=original.getElementName();
      setElementName(ElementNameOriginal, 1);
    }   	
    if(original.isHideDotFilesSet()){
      const CMPIBoolean HideDotFilesOriginal=original.getHideDotFiles();
      setHideDotFiles(HideDotFilesOriginal);
    }    
   }
  
  
  //reset the instance data
  void Linux_SambaGlobalFileNameHandlingOptionsInstance::reset(){
   	

  	if (isSet.Caption)
  	  delete(m_Caption);

  	if (isSet.Description)
  	  delete(m_Description);

  	if (isSet.ElementName)
  	  delete(m_ElementName);
  	  
  };
  
  
  //*********************************************************
  //Linux_SambaGlobalFileNameHandlingOptionsInstanceEnumerationElement	
  //*********************************************************
  
  Linux_SambaGlobalFileNameHandlingOptionsInstanceEnumerationElement::
   Linux_SambaGlobalFileNameHandlingOptionsInstanceEnumerationElement(){
   	
  	m_elementP=0;
  	m_nextP=0;
  	  
  };
  
  
  Linux_SambaGlobalFileNameHandlingOptionsInstanceEnumerationElement::
   ~Linux_SambaGlobalFileNameHandlingOptionsInstanceEnumerationElement(){
   	
  	if (m_elementP!=0)
  	  delete(m_elementP);
  	if (m_nextP!=0)
  	  delete(m_nextP);
  	  
  };

  
  //*********************************************************
  //Linux_SambaGlobalFileNameHandlingOptionsInstanceNameEnumeration
  //*********************************************************

  Linux_SambaGlobalFileNameHandlingOptionsInstanceEnumeration::
   Linux_SambaGlobalFileNameHandlingOptionsInstanceEnumeration(){
   	
  	 firstElementP=0;
     currentElementP=0;
     endElementP=0;
  };
  
  Linux_SambaGlobalFileNameHandlingOptionsInstanceEnumeration::
   Linux_SambaGlobalFileNameHandlingOptionsInstanceEnumeration(
   const Linux_SambaGlobalFileNameHandlingOptionsInstanceEnumeration& original){
   	
     firstElementP=0;
     currentElementP=0;
     endElementP=0;
  	 
     int size=original.getSize();
     for(int i=0;i<size;i++)
       addElement(original.getElement(i));           
  };
  
  	  
  Linux_SambaGlobalFileNameHandlingOptionsInstanceEnumeration::
   ~Linux_SambaGlobalFileNameHandlingOptionsInstanceEnumeration(){
   	
  	if (firstElementP!=0)
  	  delete(firstElementP);
  	  	
  };
  
  	  
  void Linux_SambaGlobalFileNameHandlingOptionsInstanceEnumeration::reset(){
  	
  	currentElementP=firstElementP;
  };
  
  	  
  bool Linux_SambaGlobalFileNameHandlingOptionsInstanceEnumeration::hasNext() const{
  	
  	return (currentElementP!=0);
  
  };
  
  int Linux_SambaGlobalFileNameHandlingOptionsInstanceEnumeration::getSize() const{
  	
    int size=0;
    Linux_SambaGlobalFileNameHandlingOptionsInstanceEnumerationElement* followingP=firstElementP;
  	
  	while(followingP!=0){
        followingP=followingP->m_nextP;
        size++;
    }
  	
    return size;
    
  };
  
  const Linux_SambaGlobalFileNameHandlingOptionsInstance&  
   Linux_SambaGlobalFileNameHandlingOptionsInstanceEnumeration::getElement(int pos) const{
   
    Linux_SambaGlobalFileNameHandlingOptionsInstanceEnumerationElement* followingP=firstElementP;
   
    int i=0;
    while((followingP!=0)&&(i<pos)){
        followingP=followingP->m_nextP;
        i++;
    }
    
    return *(followingP->m_elementP);
  };
  
  	  
  const Linux_SambaGlobalFileNameHandlingOptionsInstance&
   Linux_SambaGlobalFileNameHandlingOptionsInstanceEnumeration::getNext() {
   	
  	 Linux_SambaGlobalFileNameHandlingOptionsInstanceEnumerationElement* currentP=
  	  currentElementP;
  	 currentElementP=currentElementP->m_nextP;
  	 
  	 return *(currentP->m_elementP);
  };
  	  
  void Linux_SambaGlobalFileNameHandlingOptionsInstanceEnumeration::addElement
   (const Linux_SambaGlobalFileNameHandlingOptionsInstance& elementP){
   	
  	if(firstElementP==0){
  	  firstElementP=new Linux_SambaGlobalFileNameHandlingOptionsInstanceEnumerationElement();
  	  firstElementP->m_elementP=new Linux_SambaGlobalFileNameHandlingOptionsInstance(elementP);
  	  endElementP=firstElementP;
  	  currentElementP=firstElementP;
  	}else{
  	  endElementP->m_nextP=new Linux_SambaGlobalFileNameHandlingOptionsInstanceEnumerationElement();
  	  endElementP=endElementP->m_nextP;
  	  endElementP->m_elementP=new Linux_SambaGlobalFileNameHandlingOptionsInstance(elementP);
  	}
  };  
}
 
