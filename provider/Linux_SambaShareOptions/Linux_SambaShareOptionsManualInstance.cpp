/**
 *  Linux_SambaShareOptionsManualInstance.cpp
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


#include "Linux_SambaShareOptionsManualInstance.h"
#include "CmpiData.h"
#include "CmpiString.h"
#include "CmpiArray.h"
#include <string>

namespace genProvider {

  //*********************************************************
  //Linux_SambaShareOptionsManualInstance
  //*********************************************************

  //empty constructor
  Linux_SambaShareOptionsManualInstance::
   Linux_SambaShareOptionsManualInstance(){   	
   	init();  	   	
  };
  
  
  //copy constructor	
  Linux_SambaShareOptionsManualInstance::
   Linux_SambaShareOptionsManualInstance
   (const Linux_SambaShareOptionsManualInstance& original){   	
   	init(original);  	   	
  };
  
  
  //constructor using CmpiInstance
  Linux_SambaShareOptionsManualInstance::
   Linux_SambaShareOptionsManualInstance (const CmpiInstance& inst, const char* instanceNamespace){
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
    
  }
  
  
  //Destructor
  Linux_SambaShareOptionsManualInstance::
   ~Linux_SambaShareOptionsManualInstance(){
   	reset();  	  
  };
  
  
  //copy operator
  Linux_SambaShareOptionsManualInstance&
   Linux_SambaShareOptionsManualInstance::operator=
   (const Linux_SambaShareOptionsManualInstance& original){   	
   	init(original);
   	return *this;
  };
  
  
  //converts to CmpiInstance
  CmpiInstance Linux_SambaShareOptionsManualInstance::
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
  	
  	return cmpiInstance;
  	
  }
  
  
  //InstanceName related methods
  unsigned int Linux_SambaShareOptionsManualInstance::
   isInstanceNameSet() const{
  	return isSet.instanceName;
  }
  
  const Linux_SambaShareOptionsInstanceName&
    Linux_SambaShareOptionsManualInstance::getInstanceName() const{

    if(!isSet.instanceName)
   	  throw CmpiErrorFormater::getErrorException(
   	   CmpiErrorFormater::NOT_SET,
   	   "InstanceName not set in Linux_SambaShareOptions instance");
  		
   	return m_instanceName;
  }

  void Linux_SambaShareOptionsManualInstance::setInstanceName(
   const Linux_SambaShareOptionsInstanceName& val){
    m_instanceName = val;
    isSet.instanceName=1;
  }
       
  //Available related methods
  unsigned int Linux_SambaShareOptionsManualInstance::isAvailableSet() const{
    return isSet.Available;
  }
  void Linux_SambaShareOptionsManualInstance::
   setAvailable(const CMPIBoolean val){
    m_Available = val;
    isSet.Available=1;
  }       
  const CMPIBoolean Linux_SambaShareOptionsManualInstance::
   getAvailable() const{
    
    if(!isSet.Available)
   	  throw CmpiErrorFormater::getErrorException(
   	   CmpiErrorFormater::NOT_SET,
   	   "Available not set");
   	   	
    return m_Available;
  }
       
  //Comment related methods
  unsigned int Linux_SambaShareOptionsManualInstance::isCommentSet() const{
    return isSet.Comment;
  }
  void  Linux_SambaShareOptionsManualInstance::
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
  const char* Linux_SambaShareOptionsManualInstance::
   getComment() const{
    
    if(!isSet.Comment)
   	  throw CmpiErrorFormater::getErrorException(
   	   CmpiErrorFormater::NOT_SET,
   	   "Comment not set");
   	   	
    return m_Comment;
  }
       
  //Path related methods
  unsigned int Linux_SambaShareOptionsManualInstance::isPathSet() const{
    return isSet.Path;
  }
  void  Linux_SambaShareOptionsManualInstance::
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
  const char* Linux_SambaShareOptionsManualInstance::
   getPath() const{
    
    if(!isSet.Path)
   	  throw CmpiErrorFormater::getErrorException(
   	   CmpiErrorFormater::NOT_SET,
   	   "Path not set");
   	   	
    return m_Path;
  }
       
  //Printable related methods
  unsigned int Linux_SambaShareOptionsManualInstance::isPrintableSet() const{
    return isSet.Printable;
  }
  void Linux_SambaShareOptionsManualInstance::
   setPrintable(const CMPIBoolean val){
    m_Printable = val;
    isSet.Printable=1;
  }       
  const CMPIBoolean Linux_SambaShareOptionsManualInstance::
   getPrintable() const{
    
    if(!isSet.Printable)
   	  throw CmpiErrorFormater::getErrorException(
   	   CmpiErrorFormater::NOT_SET,
   	   "Printable not set");
   	   	
    return m_Printable;
  }


  
  //set isSet attributes to FALSE
  void Linux_SambaShareOptionsManualInstance::init(){
   	isSet.instanceName=0;
   	   	
    isSet.Available=0;   	
    isSet.Comment=0;   	
    isSet.Path=0;   	
    isSet.Printable=0;  	
  };
  
  
  //copies another instance properties in this
  void Linux_SambaShareOptionsManualInstance::init
   (const Linux_SambaShareOptionsManualInstance& original){   	
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
   }
  
  
  //reset the instance data
  void Linux_SambaShareOptionsManualInstance::reset(){
   	

  	if (isSet.Comment)
  	  delete(m_Comment);

  	if (isSet.Path)
  	  delete(m_Path);
  	  
  };
  
  
  //*********************************************************
  //Linux_SambaShareOptionsManualInstanceEnumerationElement	
  //*********************************************************
  
  Linux_SambaShareOptionsManualInstanceEnumerationElement::
   Linux_SambaShareOptionsManualInstanceEnumerationElement(){
   	
  	m_elementP=0;
  	m_nextP=0;
  	  
  };
  
  
  Linux_SambaShareOptionsManualInstanceEnumerationElement::
   ~Linux_SambaShareOptionsManualInstanceEnumerationElement(){
   	
  	if (m_elementP!=0)
  	  delete(m_elementP);
  	if (m_nextP!=0)
  	  delete(m_nextP);
  	  
  };

  
  //*********************************************************
  //Linux_SambaShareOptionsManualInstanceNameEnumeration
  //*********************************************************

  Linux_SambaShareOptionsManualInstanceEnumeration::
   Linux_SambaShareOptionsManualInstanceEnumeration(){
   	
  	 firstElementP=0;
     currentElementP=0;
     endElementP=0;
  };
  
  Linux_SambaShareOptionsManualInstanceEnumeration::
   Linux_SambaShareOptionsManualInstanceEnumeration(
   const Linux_SambaShareOptionsManualInstanceEnumeration& original){
   	
     firstElementP=0;
     currentElementP=0;
     endElementP=0;
  	 
     int size=original.getSize();
     for(int i=0;i<size;i++)
       addElement(original.getElement(i));           
  };
  
  	  
  Linux_SambaShareOptionsManualInstanceEnumeration::
   ~Linux_SambaShareOptionsManualInstanceEnumeration(){
   	
  	if (firstElementP!=0)
  	  delete(firstElementP);
  	  	
  };
  
  	  
  void Linux_SambaShareOptionsManualInstanceEnumeration::reset(){
  	
  	currentElementP=firstElementP;
  };
  
  	  
  bool Linux_SambaShareOptionsManualInstanceEnumeration::hasNext() const{
  	
  	return (currentElementP!=0);
  
  };
  
  int Linux_SambaShareOptionsManualInstanceEnumeration::getSize() const{
  	
    int size=0;
    Linux_SambaShareOptionsManualInstanceEnumerationElement* followingP=firstElementP;
  	
  	while(followingP!=0){
        followingP=followingP->m_nextP;
        size++;
    }
  	
    return size;
    
  };
  
  const Linux_SambaShareOptionsManualInstance&  
   Linux_SambaShareOptionsManualInstanceEnumeration::getElement(int pos) const{
   
    Linux_SambaShareOptionsManualInstanceEnumerationElement* followingP=firstElementP;
   
    int i=0;
    while((followingP!=0)&&(i<pos)){
        followingP=followingP->m_nextP;
        i++;
    }
    
    return *(followingP->m_elementP);
  };
  
  	  
  const Linux_SambaShareOptionsManualInstance&
   Linux_SambaShareOptionsManualInstanceEnumeration::getNext() {
   	
  	 Linux_SambaShareOptionsManualInstanceEnumerationElement* currentP=
  	  currentElementP;
  	 currentElementP=currentElementP->m_nextP;
  	 
  	 return *(currentP->m_elementP);
  };
  	  
  void Linux_SambaShareOptionsManualInstanceEnumeration::addElement
   (const Linux_SambaShareOptionsManualInstance& elementP){
   	
  	if(firstElementP==0){
  	  firstElementP=new Linux_SambaShareOptionsManualInstanceEnumerationElement();
  	  firstElementP->m_elementP=new Linux_SambaShareOptionsManualInstance(elementP);
  	  endElementP=firstElementP;
  	  currentElementP=firstElementP;
  	}else{
  	  endElementP->m_nextP=new Linux_SambaShareOptionsManualInstanceEnumerationElement();
  	  endElementP=endElementP->m_nextP;
  	  endElementP->m_elementP=new Linux_SambaShareOptionsManualInstance(elementP);
  	}
  };  
}
 
