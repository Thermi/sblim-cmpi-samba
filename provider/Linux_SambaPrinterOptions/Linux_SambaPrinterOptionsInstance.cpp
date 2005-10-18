/**
 *  Linux_SambaPrinterOptionsInstance.cpp
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


#include "Linux_SambaPrinterOptionsInstance.h"
#include "CmpiData.h"
#include "CmpiString.h"
#include "CmpiArray.h"
#include <string>

namespace genProvider {

  //*********************************************************
  //Linux_SambaPrinterOptionsInstance
  //*********************************************************

  //empty constructor
  Linux_SambaPrinterOptionsInstance::
   Linux_SambaPrinterOptionsInstance(){   	
   	init();  	   	
  };
  
  
  //copy constructor	
  Linux_SambaPrinterOptionsInstance::
   Linux_SambaPrinterOptionsInstance
   (const Linux_SambaPrinterOptionsInstance& original){   	
   	init(original);  	   	
  };
  
  
  //constructor using CmpiInstance
  Linux_SambaPrinterOptionsInstance::
   Linux_SambaPrinterOptionsInstance (const CmpiInstance& inst, const char* instanceNamespace){
    CmpiData cmpiData;
    init(); 
    
    CmpiObjectPath cop=inst.getObjectPath();
    cop.setNameSpace(instanceNamespace);
    setInstanceName(Linux_SambaPrinterOptionsInstanceName(cop));
    
    cmpiData = inst.getProperty("Available");
    if(!cmpiData.isNullValue()){
      CMPIBoolean Available = cmpiData;
      setAvailable(Available);
    }
    
    cmpiData = inst.getProperty("Caption");
    if(!cmpiData.isNullValue()){
      CmpiString Caption = cmpiData;
      setCaption(Caption.charPtr());
    }
    
    cmpiData = inst.getProperty("Comment");
    if(!cmpiData.isNullValue()){
      CmpiString Comment = cmpiData;
      setComment(Comment.charPtr());
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
    
    cmpiData = inst.getProperty("Path");
    if(!cmpiData.isNullValue()){
      CmpiString Path = cmpiData;
      setPath(Path.charPtr());
    }
    
    cmpiData = inst.getProperty("Printable");
    if(!cmpiData.isNullValue()){
      CMPIBoolean Printable = cmpiData;
      setPrintable(Printable);
    }
    
    cmpiData = inst.getProperty("SystemPrinterName");
    if(!cmpiData.isNullValue()){
      CmpiString SystemPrinterName = cmpiData;
      setSystemPrinterName(SystemPrinterName.charPtr());
    }
    
  }
  
  
  //Destructor
  Linux_SambaPrinterOptionsInstance::
   ~Linux_SambaPrinterOptionsInstance(){
   	reset();  	  
  };
  
  
  //copy operator
  Linux_SambaPrinterOptionsInstance&
   Linux_SambaPrinterOptionsInstance::operator=
   (const Linux_SambaPrinterOptionsInstance& original){   	
   	init(original);
   	return *this;
  };
  
  
  //converts to CmpiInstance
  CmpiInstance Linux_SambaPrinterOptionsInstance::
   getCmpiInstance(const char** properties) const{
   	
   	CmpiObjectPath objectPath=getInstanceName().getObjectPath();      
    CmpiInstance cmpiInstance(objectPath);    
    getInstanceName().fillKeys(cmpiInstance);
    
    if (properties) {
	  cmpiInstance.setPropertyFilter(properties,0);
    }

  	if(isSet.Available){
  	  cmpiInstance.setProperty("Available",CmpiBooleanData(m_Available));
  	}

  	if(isSet.Caption){
  	  cmpiInstance.setProperty("Caption",CmpiData(m_Caption));
  	}

  	if(isSet.Comment){
  	  cmpiInstance.setProperty("Comment",CmpiData(m_Comment));
  	}

  	if(isSet.Description){
  	  cmpiInstance.setProperty("Description",CmpiData(m_Description));
  	}

  	if(isSet.ElementName){
  	  cmpiInstance.setProperty("ElementName",CmpiData(m_ElementName));
  	}

  	if(isSet.Path){
  	  cmpiInstance.setProperty("Path",CmpiData(m_Path));
  	}

  	if(isSet.Printable){
  	  cmpiInstance.setProperty("Printable",CmpiBooleanData(m_Printable));
  	}

  	if(isSet.SystemPrinterName){
  	  cmpiInstance.setProperty("SystemPrinterName",CmpiData(m_SystemPrinterName));
  	}
  	
  	return cmpiInstance;
  	
  }
  
  
  //InstanceName related methods
  unsigned int Linux_SambaPrinterOptionsInstance::
   isInstanceNameSet() const{
  	return isSet.instanceName;
  }
  
  const Linux_SambaPrinterOptionsInstanceName&
    Linux_SambaPrinterOptionsInstance::getInstanceName() const{

    if(!isSet.instanceName)
   	  throw CmpiErrorFormater::getErrorException(
   	   CmpiErrorFormater::NOT_SET,
   	   "InstanceName not set in Linux_SambaPrinterOptions instance");
  		
   	return m_instanceName;
  }

  void Linux_SambaPrinterOptionsInstance::setInstanceName(
   const Linux_SambaPrinterOptionsInstanceName& val){
    m_instanceName = val;
    isSet.instanceName=1;
  }
       
  //Available related methods
  unsigned int Linux_SambaPrinterOptionsInstance::isAvailableSet() const{
    return isSet.Available;
  }
  void Linux_SambaPrinterOptionsInstance::
   setAvailable(const CMPIBoolean val){
    m_Available = val;
    isSet.Available=1;
  }       
  const CMPIBoolean Linux_SambaPrinterOptionsInstance::
   getAvailable() const{
    
    if(!isSet.Available)
   	  throw CmpiErrorFormater::getErrorException(
   	   CmpiErrorFormater::NOT_SET,
   	   "Available not set");
   	   	
    return m_Available;
  }
       
  //Caption related methods
  unsigned int Linux_SambaPrinterOptionsInstance::isCaptionSet() const{
    return isSet.Caption;
  }
  void  Linux_SambaPrinterOptionsInstance::
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
  const char* Linux_SambaPrinterOptionsInstance::
   getCaption() const{
    
    if(!isSet.Caption)
   	  throw CmpiErrorFormater::getErrorException(
   	   CmpiErrorFormater::NOT_SET,
   	   "Caption not set");
   	   	
    return m_Caption;
  }
       
  //Comment related methods
  unsigned int Linux_SambaPrinterOptionsInstance::isCommentSet() const{
    return isSet.Comment;
  }
  void  Linux_SambaPrinterOptionsInstance::
   setComment(const char* val, int makeCopy){
    if (isSet.Comment) {
      delete []m_Comment;
    }
    if (makeCopy&&val) {
      char* tmpval = new char[strlen(val)+1];
      strcpy(tmpval,val);
      m_Comment = tmpval;
    } else {
      m_Comment = val;
    }
    isSet.Comment=1;
  }       
  const char* Linux_SambaPrinterOptionsInstance::
   getComment() const{
    
    if(!isSet.Comment)
   	  throw CmpiErrorFormater::getErrorException(
   	   CmpiErrorFormater::NOT_SET,
   	   "Comment not set");
   	   	
    return m_Comment;
  }
       
  //Description related methods
  unsigned int Linux_SambaPrinterOptionsInstance::isDescriptionSet() const{
    return isSet.Description;
  }
  void  Linux_SambaPrinterOptionsInstance::
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
  const char* Linux_SambaPrinterOptionsInstance::
   getDescription() const{
    
    if(!isSet.Description)
   	  throw CmpiErrorFormater::getErrorException(
   	   CmpiErrorFormater::NOT_SET,
   	   "Description not set");
   	   	
    return m_Description;
  }
       
  //ElementName related methods
  unsigned int Linux_SambaPrinterOptionsInstance::isElementNameSet() const{
    return isSet.ElementName;
  }
  void  Linux_SambaPrinterOptionsInstance::
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
  const char* Linux_SambaPrinterOptionsInstance::
   getElementName() const{
    
    if(!isSet.ElementName)
   	  throw CmpiErrorFormater::getErrorException(
   	   CmpiErrorFormater::NOT_SET,
   	   "ElementName not set");
   	   	
    return m_ElementName;
  }
       
  //Path related methods
  unsigned int Linux_SambaPrinterOptionsInstance::isPathSet() const{
    return isSet.Path;
  }
  void  Linux_SambaPrinterOptionsInstance::
   setPath(const char* val, int makeCopy){
    if (isSet.Path) {
      delete []m_Path;
    }
    if (makeCopy&&val) {
      char* tmpval = new char[strlen(val)+1];
      strcpy(tmpval,val);
      m_Path = tmpval;
    } else {
      m_Path = val;
    }
    isSet.Path=1;
  }       
  const char* Linux_SambaPrinterOptionsInstance::
   getPath() const{
    
    if(!isSet.Path)
   	  throw CmpiErrorFormater::getErrorException(
   	   CmpiErrorFormater::NOT_SET,
   	   "Path not set");
   	   	
    return m_Path;
  }
       
  //Printable related methods
  unsigned int Linux_SambaPrinterOptionsInstance::isPrintableSet() const{
    return isSet.Printable;
  }
  void Linux_SambaPrinterOptionsInstance::
   setPrintable(const CMPIBoolean val){
    m_Printable = val;
    isSet.Printable=1;
  }       
  const CMPIBoolean Linux_SambaPrinterOptionsInstance::
   getPrintable() const{
    
    if(!isSet.Printable)
   	  throw CmpiErrorFormater::getErrorException(
   	   CmpiErrorFormater::NOT_SET,
   	   "Printable not set");
   	   	
    return m_Printable;
  }
       
  //SystemPrinterName related methods
  unsigned int Linux_SambaPrinterOptionsInstance::isSystemPrinterNameSet() const{
    return isSet.SystemPrinterName;
  }
  void  Linux_SambaPrinterOptionsInstance::
   setSystemPrinterName(const char* val, int makeCopy){
    if (isSet.SystemPrinterName) {
      delete []m_SystemPrinterName;
    }
    if (makeCopy&&val) {
      char* tmpval = new char[strlen(val)+1];
      strcpy(tmpval,val);
      m_SystemPrinterName = tmpval;
    } else {
      m_SystemPrinterName = val;
    }
    isSet.SystemPrinterName=1;
  }       
  const char* Linux_SambaPrinterOptionsInstance::
   getSystemPrinterName() const{
    
    if(!isSet.SystemPrinterName)
   	  throw CmpiErrorFormater::getErrorException(
   	   CmpiErrorFormater::NOT_SET,
   	   "SystemPrinterName not set");
   	   	
    return m_SystemPrinterName;
  }


  
  //set isSet attributes to FALSE
  void Linux_SambaPrinterOptionsInstance::init(){
   	isSet.instanceName=0;
   	   	
    isSet.Available=0;   	
    isSet.Caption=0;   	
    isSet.Comment=0;   	
    isSet.Description=0;   	
    isSet.ElementName=0;   	
    isSet.Path=0;   	
    isSet.Printable=0;   	
    isSet.SystemPrinterName=0;  	
  };
  
  
  //copies another instance properties in this
  void Linux_SambaPrinterOptionsInstance::init
   (const Linux_SambaPrinterOptionsInstance& original){   	
   	init();
   	   	
    if(original.isInstanceNameSet()){
      setInstanceName(original.getInstanceName());
    }   	
    if(original.isAvailableSet()){
      const CMPIBoolean AvailableOriginal=original.getAvailable();
      setAvailable(AvailableOriginal);
    }   	
    if(original.isCaptionSet()){
      const char* CaptionOriginal=original.getCaption();
      setCaption(CaptionOriginal, 1);
    }   	
    if(original.isCommentSet()){
      const char* CommentOriginal=original.getComment();
      setComment(CommentOriginal, 1);
    }   	
    if(original.isDescriptionSet()){
      const char* DescriptionOriginal=original.getDescription();
      setDescription(DescriptionOriginal, 1);
    }   	
    if(original.isElementNameSet()){
      const char* ElementNameOriginal=original.getElementName();
      setElementName(ElementNameOriginal, 1);
    }   	
    if(original.isPathSet()){
      const char* PathOriginal=original.getPath();
      setPath(PathOriginal, 1);
    }   	
    if(original.isPrintableSet()){
      const CMPIBoolean PrintableOriginal=original.getPrintable();
      setPrintable(PrintableOriginal);
    }   	
    if(original.isSystemPrinterNameSet()){
      const char* SystemPrinterNameOriginal=original.getSystemPrinterName();
      setSystemPrinterName(SystemPrinterNameOriginal, 1);
    }    
   }
  
  
  //reset the instance data
  void Linux_SambaPrinterOptionsInstance::reset(){
   	

  	if (isSet.Caption)
  	  delete(m_Caption);

  	if (isSet.Comment)
  	  delete(m_Comment);

  	if (isSet.Description)
  	  delete(m_Description);

  	if (isSet.ElementName)
  	  delete(m_ElementName);

  	if (isSet.Path)
  	  delete(m_Path);

  	if (isSet.SystemPrinterName)
  	  delete(m_SystemPrinterName);
  	  
  };
  
  
  //*********************************************************
  //Linux_SambaPrinterOptionsInstanceEnumerationElement	
  //*********************************************************
  
  Linux_SambaPrinterOptionsInstanceEnumerationElement::
   Linux_SambaPrinterOptionsInstanceEnumerationElement(){
   	
  	m_elementP=0;
  	m_nextP=0;
  	  
  };
  
  
  Linux_SambaPrinterOptionsInstanceEnumerationElement::
   ~Linux_SambaPrinterOptionsInstanceEnumerationElement(){
   	
  	if (m_elementP!=0)
  	  delete(m_elementP);
  	if (m_nextP!=0)
  	  delete(m_nextP);
  	  
  };

  
  //*********************************************************
  //Linux_SambaPrinterOptionsInstanceNameEnumeration
  //*********************************************************

  Linux_SambaPrinterOptionsInstanceEnumeration::
   Linux_SambaPrinterOptionsInstanceEnumeration(){
   	
  	 firstElementP=0;
     currentElementP=0;
     endElementP=0;
  };
  
  Linux_SambaPrinterOptionsInstanceEnumeration::
   Linux_SambaPrinterOptionsInstanceEnumeration(
   const Linux_SambaPrinterOptionsInstanceEnumeration& original){
   	
     firstElementP=0;
     currentElementP=0;
     endElementP=0;
  	 
     int size=original.getSize();
     for(int i=0;i<size;i++)
       addElement(original.getElement(i));           
  };
  
  	  
  Linux_SambaPrinterOptionsInstanceEnumeration::
   ~Linux_SambaPrinterOptionsInstanceEnumeration(){
   	
  	if (firstElementP!=0)
  	  delete(firstElementP);
  	  	
  };
  
  	  
  void Linux_SambaPrinterOptionsInstanceEnumeration::reset(){
  	
  	currentElementP=firstElementP;
  };
  
  	  
  bool Linux_SambaPrinterOptionsInstanceEnumeration::hasNext() const{
  	
  	return (currentElementP!=0);
  
  };
  
  int Linux_SambaPrinterOptionsInstanceEnumeration::getSize() const{
  	
    int size=0;
    Linux_SambaPrinterOptionsInstanceEnumerationElement* followingP=firstElementP;
  	
  	while(followingP!=0){
        followingP=followingP->m_nextP;
        size++;
    }
  	
    return size;
    
  };
  
  const Linux_SambaPrinterOptionsInstance&  
   Linux_SambaPrinterOptionsInstanceEnumeration::getElement(int pos) const{
   
    Linux_SambaPrinterOptionsInstanceEnumerationElement* followingP=firstElementP;
   
    int i=0;
    while((followingP!=0)&&(i<pos)){
        followingP=followingP->m_nextP;
        i++;
    }
    
    return *(followingP->m_elementP);
  };
  
  	  
  const Linux_SambaPrinterOptionsInstance&
   Linux_SambaPrinterOptionsInstanceEnumeration::getNext() {
   	
  	 Linux_SambaPrinterOptionsInstanceEnumerationElement* currentP=
  	  currentElementP;
  	 currentElementP=currentElementP->m_nextP;
  	 
  	 return *(currentP->m_elementP);
  };
  	  
  void Linux_SambaPrinterOptionsInstanceEnumeration::addElement
   (const Linux_SambaPrinterOptionsInstance& elementP){
   	
  	if(firstElementP==0){
  	  firstElementP=new Linux_SambaPrinterOptionsInstanceEnumerationElement();
  	  firstElementP->m_elementP=new Linux_SambaPrinterOptionsInstance(elementP);
  	  endElementP=firstElementP;
  	  currentElementP=firstElementP;
  	}else{
  	  endElementP->m_nextP=new Linux_SambaPrinterOptionsInstanceEnumerationElement();
  	  endElementP=endElementP->m_nextP;
  	  endElementP->m_elementP=new Linux_SambaPrinterOptionsInstance(elementP);
  	}
  };  
}
 
