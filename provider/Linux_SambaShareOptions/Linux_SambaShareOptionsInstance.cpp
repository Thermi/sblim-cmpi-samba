/**
 *  Linux_SambaShareOptionsInstance.cpp
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


#include "Linux_SambaShareOptionsInstance.h"
#include "CmpiData.h"
#include "CmpiString.h"
#include "CmpiArray.h"
#include <string>

namespace genProvider {

  //*********************************************************
  //Linux_SambaShareOptionsInstance
  //*********************************************************

  //empty constructor
  Linux_SambaShareOptionsInstance::
   Linux_SambaShareOptionsInstance(){   	
   	init();  	   	
  };
  
  
  //copy constructor	
  Linux_SambaShareOptionsInstance::
   Linux_SambaShareOptionsInstance
   (const Linux_SambaShareOptionsInstance& original){   	
   	init(original);  	   	
  };
  
  
  //constructor using CmpiInstance
  Linux_SambaShareOptionsInstance::
   Linux_SambaShareOptionsInstance (const CmpiInstance& inst, const char* instanceNamespace){
    CmpiData cmpiData;
    init(); 
    
    CmpiObjectPath cop=inst.getObjectPath();
    cop.setNameSpace(instanceNamespace);
    setInstanceName(Linux_SambaShareOptionsInstanceName(cop));
    
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
    
  }
  
  
  //Destructor
  Linux_SambaShareOptionsInstance::
   ~Linux_SambaShareOptionsInstance(){
   	reset();  	  
  };
  
  
  //copy operator
  Linux_SambaShareOptionsInstance&
   Linux_SambaShareOptionsInstance::operator=
   (const Linux_SambaShareOptionsInstance& original){   	
   	init(original);
   	return *this;
  };
  
  
  //converts to CmpiInstance
  CmpiInstance Linux_SambaShareOptionsInstance::
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
  	
  	return cmpiInstance;
  	
  }
  
  
  //InstanceName related methods
  unsigned int Linux_SambaShareOptionsInstance::
   isInstanceNameSet() const{
  	return isSet.instanceName;
  }
  
  const Linux_SambaShareOptionsInstanceName&
    Linux_SambaShareOptionsInstance::getInstanceName() const{

    if(!isSet.instanceName)
   	  throw CmpiErrorFormater::getErrorException(
   	   CmpiErrorFormater::NOT_SET,
   	   "InstanceName not set in Linux_SambaShareOptions instance");
  		
   	return m_instanceName;
  }

  void Linux_SambaShareOptionsInstance::setInstanceName(
   const Linux_SambaShareOptionsInstanceName& val){
    m_instanceName = val;
    isSet.instanceName=1;
  }
       
  //Available related methods
  unsigned int Linux_SambaShareOptionsInstance::isAvailableSet() const{
    return isSet.Available;
  }
  void Linux_SambaShareOptionsInstance::
   setAvailable(const CMPIBoolean val){
    m_Available = val;
    isSet.Available=1;
  }       
  const CMPIBoolean Linux_SambaShareOptionsInstance::
   getAvailable() const{
    
    if(!isSet.Available)
   	  throw CmpiErrorFormater::getErrorException(
   	   CmpiErrorFormater::NOT_SET,
   	   "Available not set");
   	   	
    return m_Available;
  }
       
  //Caption related methods
  unsigned int Linux_SambaShareOptionsInstance::isCaptionSet() const{
    return isSet.Caption;
  }
  void  Linux_SambaShareOptionsInstance::
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
  const char* Linux_SambaShareOptionsInstance::
   getCaption() const{
    
    if(!isSet.Caption)
   	  throw CmpiErrorFormater::getErrorException(
   	   CmpiErrorFormater::NOT_SET,
   	   "Caption not set");
   	   	
    return m_Caption;
  }
       
  //Comment related methods
  unsigned int Linux_SambaShareOptionsInstance::isCommentSet() const{
    return isSet.Comment;
  }
  void  Linux_SambaShareOptionsInstance::
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
  const char* Linux_SambaShareOptionsInstance::
   getComment() const{
    
    if(!isSet.Comment)
   	  throw CmpiErrorFormater::getErrorException(
   	   CmpiErrorFormater::NOT_SET,
   	   "Comment not set");
   	   	
    return m_Comment;
  }
       
  //Description related methods
  unsigned int Linux_SambaShareOptionsInstance::isDescriptionSet() const{
    return isSet.Description;
  }
  void  Linux_SambaShareOptionsInstance::
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
  const char* Linux_SambaShareOptionsInstance::
   getDescription() const{
    
    if(!isSet.Description)
   	  throw CmpiErrorFormater::getErrorException(
   	   CmpiErrorFormater::NOT_SET,
   	   "Description not set");
   	   	
    return m_Description;
  }
       
  //ElementName related methods
  unsigned int Linux_SambaShareOptionsInstance::isElementNameSet() const{
    return isSet.ElementName;
  }
  void  Linux_SambaShareOptionsInstance::
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
  const char* Linux_SambaShareOptionsInstance::
   getElementName() const{
    
    if(!isSet.ElementName)
   	  throw CmpiErrorFormater::getErrorException(
   	   CmpiErrorFormater::NOT_SET,
   	   "ElementName not set");
   	   	
    return m_ElementName;
  }
       
  //Path related methods
  unsigned int Linux_SambaShareOptionsInstance::isPathSet() const{
    return isSet.Path;
  }
  void  Linux_SambaShareOptionsInstance::
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
  const char* Linux_SambaShareOptionsInstance::
   getPath() const{
    
    if(!isSet.Path)
   	  throw CmpiErrorFormater::getErrorException(
   	   CmpiErrorFormater::NOT_SET,
   	   "Path not set");
   	   	
    return m_Path;
  }
       
  //Printable related methods
  unsigned int Linux_SambaShareOptionsInstance::isPrintableSet() const{
    return isSet.Printable;
  }
  void Linux_SambaShareOptionsInstance::
   setPrintable(const CMPIBoolean val){
    m_Printable = val;
    isSet.Printable=1;
  }       
  const CMPIBoolean Linux_SambaShareOptionsInstance::
   getPrintable() const{
    
    if(!isSet.Printable)
   	  throw CmpiErrorFormater::getErrorException(
   	   CmpiErrorFormater::NOT_SET,
   	   "Printable not set");
   	   	
    return m_Printable;
  }


  
  //set isSet attributes to FALSE
  void Linux_SambaShareOptionsInstance::init(){
   	isSet.instanceName=0;
   	   	
    isSet.Available=0;   	
    isSet.Caption=0;   	
    isSet.Comment=0;   	
    isSet.Description=0;   	
    isSet.ElementName=0;   	
    isSet.Path=0;   	
    isSet.Printable=0;  	
  };
  
  
  //copies another instance properties in this
  void Linux_SambaShareOptionsInstance::init
   (const Linux_SambaShareOptionsInstance& original){   	
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
   }
  
  
  //reset the instance data
  void Linux_SambaShareOptionsInstance::reset(){
   	

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
  	  
  };
  
  
  //*********************************************************
  //Linux_SambaShareOptionsInstanceEnumerationElement	
  //*********************************************************
  
  Linux_SambaShareOptionsInstanceEnumerationElement::
   Linux_SambaShareOptionsInstanceEnumerationElement(){
   	
  	m_elementP=0;
  	m_nextP=0;
  	  
  };
  
  
  Linux_SambaShareOptionsInstanceEnumerationElement::
   ~Linux_SambaShareOptionsInstanceEnumerationElement(){
   	
  	if (m_elementP!=0)
  	  delete(m_elementP);
  	if (m_nextP!=0)
  	  delete(m_nextP);
  	  
  };

  
  //*********************************************************
  //Linux_SambaShareOptionsInstanceNameEnumeration
  //*********************************************************

  Linux_SambaShareOptionsInstanceEnumeration::
   Linux_SambaShareOptionsInstanceEnumeration(){
   	
  	 firstElementP=0;
     currentElementP=0;
     endElementP=0;
  };
  
  Linux_SambaShareOptionsInstanceEnumeration::
   Linux_SambaShareOptionsInstanceEnumeration(
   const Linux_SambaShareOptionsInstanceEnumeration& original){
   	
     firstElementP=0;
     currentElementP=0;
     endElementP=0;
  	 
     int size=original.getSize();
     for(int i=0;i<size;i++)
       addElement(original.getElement(i));           
  };
  
  	  
  Linux_SambaShareOptionsInstanceEnumeration::
   ~Linux_SambaShareOptionsInstanceEnumeration(){
   	
  	if (firstElementP!=0)
  	  delete(firstElementP);
  	  	
  };
  
  	  
  void Linux_SambaShareOptionsInstanceEnumeration::reset(){
  	
  	currentElementP=firstElementP;
  };
  
  	  
  bool Linux_SambaShareOptionsInstanceEnumeration::hasNext() const{
  	
  	return (currentElementP!=0);
  
  };
  
  int Linux_SambaShareOptionsInstanceEnumeration::getSize() const{
  	
    int size=0;
    Linux_SambaShareOptionsInstanceEnumerationElement* followingP=firstElementP;
  	
  	while(followingP!=0){
        followingP=followingP->m_nextP;
        size++;
    }
  	
    return size;
    
  };
  
  const Linux_SambaShareOptionsInstance&  
   Linux_SambaShareOptionsInstanceEnumeration::getElement(int pos) const{
   
    Linux_SambaShareOptionsInstanceEnumerationElement* followingP=firstElementP;
   
    int i=0;
    while((followingP!=0)&&(i<pos)){
        followingP=followingP->m_nextP;
        i++;
    }
    
    return *(followingP->m_elementP);
  };
  
  	  
  const Linux_SambaShareOptionsInstance&
   Linux_SambaShareOptionsInstanceEnumeration::getNext() {
   	
  	 Linux_SambaShareOptionsInstanceEnumerationElement* currentP=
  	  currentElementP;
  	 currentElementP=currentElementP->m_nextP;
  	 
  	 return *(currentP->m_elementP);
  };
  	  
  void Linux_SambaShareOptionsInstanceEnumeration::addElement
   (const Linux_SambaShareOptionsInstance& elementP){
   	
  	if(firstElementP==0){
  	  firstElementP=new Linux_SambaShareOptionsInstanceEnumerationElement();
  	  firstElementP->m_elementP=new Linux_SambaShareOptionsInstance(elementP);
  	  endElementP=firstElementP;
  	  currentElementP=firstElementP;
  	}else{
  	  endElementP->m_nextP=new Linux_SambaShareOptionsInstanceEnumerationElement();
  	  endElementP=endElementP->m_nextP;
  	  endElementP->m_elementP=new Linux_SambaShareOptionsInstance(elementP);
  	}
  };  
}
 
