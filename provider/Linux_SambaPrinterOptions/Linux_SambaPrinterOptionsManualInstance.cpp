/**
 *  Linux_SambaPrinterOptionsManualInstance.cpp
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


#include "Linux_SambaPrinterOptionsManualInstance.h"
#include "CmpiData.h"
#include "CmpiString.h"
#include "CmpiArray.h"
#include <string>

namespace genProvider {

  //*********************************************************
  //Linux_SambaPrinterOptionsManualInstance
  //*********************************************************

  //empty constructor
  Linux_SambaPrinterOptionsManualInstance::
   Linux_SambaPrinterOptionsManualInstance(){   	
   	init();  	   	
  };
  
  
  //copy constructor	
  Linux_SambaPrinterOptionsManualInstance::
   Linux_SambaPrinterOptionsManualInstance
   (const Linux_SambaPrinterOptionsManualInstance& original){   	
   	init(original);  	   	
  };
  
  
  //constructor using CmpiInstance
  Linux_SambaPrinterOptionsManualInstance::
   Linux_SambaPrinterOptionsManualInstance (const CmpiInstance& inst, const char* instanceNamespace){
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
    
    cmpiData = inst.getProperty("Comment");
    if(!cmpiData.isNullValue()){
      CmpiString Comment = cmpiData;
      setComment(Comment.charPtr());
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
  Linux_SambaPrinterOptionsManualInstance::
   ~Linux_SambaPrinterOptionsManualInstance(){
   	reset();  	  
  };
  
  
  //copy operator
  Linux_SambaPrinterOptionsManualInstance&
   Linux_SambaPrinterOptionsManualInstance::operator=
   (const Linux_SambaPrinterOptionsManualInstance& original){   	
   	init(original);
   	return *this;
  };
  
  
  //converts to CmpiInstance
  CmpiInstance Linux_SambaPrinterOptionsManualInstance::
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

  	if(isSet.Comment){
  	  cmpiInstance.setProperty("Comment",CmpiData(m_Comment));
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
  unsigned int Linux_SambaPrinterOptionsManualInstance::
   isInstanceNameSet() const{
  	return isSet.instanceName;
  }
  
  const Linux_SambaPrinterOptionsInstanceName&
    Linux_SambaPrinterOptionsManualInstance::getInstanceName() const{

    if(!isSet.instanceName)
   	  throw CmpiErrorFormater::getErrorException(
   	   CmpiErrorFormater::NOT_SET,
   	   "InstanceName not set in Linux_SambaPrinterOptions instance");
  		
   	return m_instanceName;
  }

  void Linux_SambaPrinterOptionsManualInstance::setInstanceName(
   const Linux_SambaPrinterOptionsInstanceName& val){
    m_instanceName = val;
    isSet.instanceName=1;
  }
       
  //Available related methods
  unsigned int Linux_SambaPrinterOptionsManualInstance::isAvailableSet() const{
    return isSet.Available;
  }
  void Linux_SambaPrinterOptionsManualInstance::
   setAvailable(const CMPIBoolean val){
    m_Available = val;
    isSet.Available=1;
  }       
  const CMPIBoolean Linux_SambaPrinterOptionsManualInstance::
   getAvailable() const{
    
    if(!isSet.Available)
   	  throw CmpiErrorFormater::getErrorException(
   	   CmpiErrorFormater::NOT_SET,
   	   "Available not set");
   	   	
    return m_Available;
  }
       
  //Comment related methods
  unsigned int Linux_SambaPrinterOptionsManualInstance::isCommentSet() const{
    return isSet.Comment;
  }
  void  Linux_SambaPrinterOptionsManualInstance::
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
  const char* Linux_SambaPrinterOptionsManualInstance::
   getComment() const{
    
    if(!isSet.Comment)
   	  throw CmpiErrorFormater::getErrorException(
   	   CmpiErrorFormater::NOT_SET,
   	   "Comment not set");
   	   	
    return m_Comment;
  }
       
  //Path related methods
  unsigned int Linux_SambaPrinterOptionsManualInstance::isPathSet() const{
    return isSet.Path;
  }
  void  Linux_SambaPrinterOptionsManualInstance::
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
  const char* Linux_SambaPrinterOptionsManualInstance::
   getPath() const{
    
    if(!isSet.Path)
   	  throw CmpiErrorFormater::getErrorException(
   	   CmpiErrorFormater::NOT_SET,
   	   "Path not set");
   	   	
    return m_Path;
  }
       
  //Printable related methods
  unsigned int Linux_SambaPrinterOptionsManualInstance::isPrintableSet() const{
    return isSet.Printable;
  }
  void Linux_SambaPrinterOptionsManualInstance::
   setPrintable(const CMPIBoolean val){
    m_Printable = val;
    isSet.Printable=1;
  }       
  const CMPIBoolean Linux_SambaPrinterOptionsManualInstance::
   getPrintable() const{
    
    if(!isSet.Printable)
   	  throw CmpiErrorFormater::getErrorException(
   	   CmpiErrorFormater::NOT_SET,
   	   "Printable not set");
   	   	
    return m_Printable;
  }
       
  //SystemPrinterName related methods
  unsigned int Linux_SambaPrinterOptionsManualInstance::isSystemPrinterNameSet() const{
    return isSet.SystemPrinterName;
  }
  void  Linux_SambaPrinterOptionsManualInstance::
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
  const char* Linux_SambaPrinterOptionsManualInstance::
   getSystemPrinterName() const{
    
    if(!isSet.SystemPrinterName)
   	  throw CmpiErrorFormater::getErrorException(
   	   CmpiErrorFormater::NOT_SET,
   	   "SystemPrinterName not set");
   	   	
    return m_SystemPrinterName;
  }


  
  //set isSet attributes to FALSE
  void Linux_SambaPrinterOptionsManualInstance::init(){
   	isSet.instanceName=0;
   	   	
    isSet.Available=0;   	
    isSet.Comment=0;   	
    isSet.Path=0;   	
    isSet.Printable=0;   	
    isSet.SystemPrinterName=0;  	
  };
  
  
  //copies another instance properties in this
  void Linux_SambaPrinterOptionsManualInstance::init
   (const Linux_SambaPrinterOptionsManualInstance& original){   	
   	init();
   	   	
    if(original.isInstanceNameSet()){
      setInstanceName(original.getInstanceName());
    }   	
    if(original.isAvailableSet()){
      const CMPIBoolean AvailableOriginal=original.getAvailable();
      setAvailable(AvailableOriginal);
    }   	
    if(original.isCommentSet()){
      const char* CommentOriginal=original.getComment();
      setComment(CommentOriginal, 1);
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
  void Linux_SambaPrinterOptionsManualInstance::reset(){
   	

  	if (isSet.Comment)
  	  delete(m_Comment);

  	if (isSet.Path)
  	  delete(m_Path);

  	if (isSet.SystemPrinterName)
  	  delete(m_SystemPrinterName);
  	  
  };
  
  
  //*********************************************************
  //Linux_SambaPrinterOptionsManualInstanceEnumerationElement	
  //*********************************************************
  
  Linux_SambaPrinterOptionsManualInstanceEnumerationElement::
   Linux_SambaPrinterOptionsManualInstanceEnumerationElement(){
   	
  	m_elementP=0;
  	m_nextP=0;
  	  
  };
  
  
  Linux_SambaPrinterOptionsManualInstanceEnumerationElement::
   ~Linux_SambaPrinterOptionsManualInstanceEnumerationElement(){
   	
  	if (m_elementP!=0)
  	  delete(m_elementP);
  	if (m_nextP!=0)
  	  delete(m_nextP);
  	  
  };

  
  //*********************************************************
  //Linux_SambaPrinterOptionsManualInstanceNameEnumeration
  //*********************************************************

  Linux_SambaPrinterOptionsManualInstanceEnumeration::
   Linux_SambaPrinterOptionsManualInstanceEnumeration(){
   	
  	 firstElementP=0;
     currentElementP=0;
     endElementP=0;
  };
  
  Linux_SambaPrinterOptionsManualInstanceEnumeration::
   Linux_SambaPrinterOptionsManualInstanceEnumeration(
   const Linux_SambaPrinterOptionsManualInstanceEnumeration& original){
   	
     firstElementP=0;
     currentElementP=0;
     endElementP=0;
  	 
     int size=original.getSize();
     for(int i=0;i<size;i++)
       addElement(original.getElement(i));           
  };
  
  	  
  Linux_SambaPrinterOptionsManualInstanceEnumeration::
   ~Linux_SambaPrinterOptionsManualInstanceEnumeration(){
   	
  	if (firstElementP!=0)
  	  delete(firstElementP);
  	  	
  };
  
  	  
  void Linux_SambaPrinterOptionsManualInstanceEnumeration::reset(){
  	
  	currentElementP=firstElementP;
  };
  
  	  
  bool Linux_SambaPrinterOptionsManualInstanceEnumeration::hasNext() const{
  	
  	return (currentElementP!=0);
  
  };
  
  int Linux_SambaPrinterOptionsManualInstanceEnumeration::getSize() const{
  	
    int size=0;
    Linux_SambaPrinterOptionsManualInstanceEnumerationElement* followingP=firstElementP;
  	
  	while(followingP!=0){
        followingP=followingP->m_nextP;
        size++;
    }
  	
    return size;
    
  };
  
  const Linux_SambaPrinterOptionsManualInstance&  
   Linux_SambaPrinterOptionsManualInstanceEnumeration::getElement(int pos) const{
   
    Linux_SambaPrinterOptionsManualInstanceEnumerationElement* followingP=firstElementP;
   
    int i=0;
    while((followingP!=0)&&(i<pos)){
        followingP=followingP->m_nextP;
        i++;
    }
    
    return *(followingP->m_elementP);
  };
  
  	  
  const Linux_SambaPrinterOptionsManualInstance&
   Linux_SambaPrinterOptionsManualInstanceEnumeration::getNext() {
   	
  	 Linux_SambaPrinterOptionsManualInstanceEnumerationElement* currentP=
  	  currentElementP;
  	 currentElementP=currentElementP->m_nextP;
  	 
  	 return *(currentP->m_elementP);
  };
  	  
  void Linux_SambaPrinterOptionsManualInstanceEnumeration::addElement
   (const Linux_SambaPrinterOptionsManualInstance& elementP){
   	
  	if(firstElementP==0){
  	  firstElementP=new Linux_SambaPrinterOptionsManualInstanceEnumerationElement();
  	  firstElementP->m_elementP=new Linux_SambaPrinterOptionsManualInstance(elementP);
  	  endElementP=firstElementP;
  	  currentElementP=firstElementP;
  	}else{
  	  endElementP->m_nextP=new Linux_SambaPrinterOptionsManualInstanceEnumerationElement();
  	  endElementP=endElementP->m_nextP;
  	  endElementP->m_elementP=new Linux_SambaPrinterOptionsManualInstance(elementP);
  	}
  };  
}
 
