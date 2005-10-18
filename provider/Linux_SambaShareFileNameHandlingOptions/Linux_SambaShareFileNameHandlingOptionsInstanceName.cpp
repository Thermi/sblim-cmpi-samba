/**
 *  Linux_SambaShareFileNameHandlingOptionsInstanceName.cpp
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


#include "Linux_SambaShareFileNameHandlingOptionsInstanceName.h"
#include "CmpiData.h"
#include "CmpiString.h"
#include "CmpiArray.h"
#include <string>

namespace genProvider {
	
  //*********************************************************
  //Linux_SambaShareFileNameHandlingOptionsInstanceName
  //*********************************************************
  
  //empty constructor
  Linux_SambaShareFileNameHandlingOptionsInstanceName::
   Linux_SambaShareFileNameHandlingOptionsInstanceName(){
   	init();  	
  };
  
  
  //copy constructor	
  Linux_SambaShareFileNameHandlingOptionsInstanceName::
   Linux_SambaShareFileNameHandlingOptionsInstanceName
   (const Linux_SambaShareFileNameHandlingOptionsInstanceName& original){
   	init(original);  	
  };
  
  
  //contructor using CmpiObjectPath
  Linux_SambaShareFileNameHandlingOptionsInstanceName::
   Linux_SambaShareFileNameHandlingOptionsInstanceName (const CmpiObjectPath& path){
    
    init();
    
    m_CIMClassNameP=path.getClassName().charPtr();
    
    CmpiString namespaceOP;
    namespaceOP=path.getNameSpace();
    setNamespace(namespaceOP.charPtr(),1);
    
    CmpiString InstanceID = path.getKey("InstanceID");
    setInstanceID(InstanceID.charPtr());
    
    CmpiString Name = path.getKey("Name");
    setName(Name.charPtr());
    
  }
  
  
  //destructor
  Linux_SambaShareFileNameHandlingOptionsInstanceName::
   ~Linux_SambaShareFileNameHandlingOptionsInstanceName(){
   	reset();  	  
  };
  
  
  //copy operator
  Linux_SambaShareFileNameHandlingOptionsInstanceName&
   Linux_SambaShareFileNameHandlingOptionsInstanceName::operator=
   (const Linux_SambaShareFileNameHandlingOptionsInstanceName& original){    
    init(original);
   	return *this;    
  }
  
  
  //returns the related CmpiObjectPath
  CmpiObjectPath Linux_SambaShareFileNameHandlingOptionsInstanceName::
   getObjectPath() const{
   	
   	CmpiObjectPath objectPath(m_namespace, m_CIMClassNameP);

  	objectPath.setKey("InstanceID",CmpiData(m_InstanceID));

  	objectPath.setKey("Name",CmpiData(m_Name));
  	
  	return objectPath;
  	
  }
  
  
  //adds the related CmpiObjectPath to an existing cmpiInstance
  void Linux_SambaShareFileNameHandlingOptionsInstanceName::fillKeys(CmpiInstance& cmpiInstance) const{
  	

  	if(isSet.InstanceID){
  	  cmpiInstance.setProperty("InstanceID",CmpiData(m_InstanceID));
  	}

  	if(isSet.Name){
  	  cmpiInstance.setProperty("Name",CmpiData(m_Name));
  	}
  }
  
  
  //NameSpace related methods
  unsigned int Linux_SambaShareFileNameHandlingOptionsInstanceName::
   isNameSpaceSet() const{
  	return isSet.m_namespace;
  }
  
  const char * Linux_SambaShareFileNameHandlingOptionsInstanceName::
   getNamespace() const {
    if(!isSet.m_namespace)
   	  throw CmpiErrorFormater::getErrorException(
   	   CmpiErrorFormater::NOT_SET,
   	   "NameSpace not set in Linux_SambaShareFileNameHandlingOptions instanceName");
  	return m_namespace;
  }

  void Linux_SambaShareFileNameHandlingOptionsInstanceName::
   setNamespace(const char* val, int makeCopy){
    if (isSet.m_namespace) {
      delete m_namespace;
    }
    if (makeCopy&&val) {
      char* tmpval = new char[strlen(val)+1];
      strcpy(tmpval,val);
      m_namespace = tmpval;
    } else {
      m_namespace = val;
    }
    isSet.m_namespace=1;
  }
       
  //InstanceID related methods
  unsigned int Linux_SambaShareFileNameHandlingOptionsInstanceName::isInstanceIDSet() const{
    return isSet.InstanceID;
  }
  void  Linux_SambaShareFileNameHandlingOptionsInstanceName::
   setInstanceID(const char* val, int makeCopy){
    if (isSet.InstanceID) {
      delete []m_InstanceID;
    }
    if (makeCopy&&val) {
      char* tmpval = new char[strlen(val)+1];
      strcpy(tmpval,val);
      m_InstanceID = tmpval;
    } else {
      m_InstanceID = val;
    }
    isSet.InstanceID=1;
  }       
  const char* Linux_SambaShareFileNameHandlingOptionsInstanceName::
   getInstanceID() const{
    
    if(!isSet.InstanceID)
   	  throw CmpiErrorFormater::getErrorException(
   	   CmpiErrorFormater::NOT_SET,
   	   "InstanceID not set");
   	   	
    return m_InstanceID;
  }
       
  //Name related methods
  unsigned int Linux_SambaShareFileNameHandlingOptionsInstanceName::isNameSet() const{
    return isSet.Name;
  }
  void  Linux_SambaShareFileNameHandlingOptionsInstanceName::
   setName(const char* val, int makeCopy){
    if (isSet.Name) {
      delete []m_Name;
    }
    if (makeCopy&&val) {
      char* tmpval = new char[strlen(val)+1];
      strcpy(tmpval,val);
      m_Name = tmpval;
    } else {
      m_Name = val;
    }
    isSet.Name=1;
  }       
  const char* Linux_SambaShareFileNameHandlingOptionsInstanceName::
   getName() const{
    
    if(!isSet.Name)
   	  throw CmpiErrorFormater::getErrorException(
   	   CmpiErrorFormater::NOT_SET,
   	   "Name not set");
   	   	
    return m_Name;
  }

  
  //set isSet variables to FALSE
  void Linux_SambaShareFileNameHandlingOptionsInstanceName::init(){
  	
  	m_CIMClassNameP="Linux_SambaShareFileNameHandlingOptions";
  	isSet.m_namespace=0;    	
    isSet.InstanceID=0;   	
    isSet.Name=0;
  }
  
  
  //copies another instance properties in this
  void Linux_SambaShareFileNameHandlingOptionsInstanceName::init
   (const Linux_SambaShareFileNameHandlingOptionsInstanceName& original){
   	init();
   	   	
    m_CIMClassNameP=original.m_CIMClassNameP;
    if(original.isNameSpaceSet()){
      setNamespace(original.getNamespace(),1);
    }   	
    if(original.isInstanceIDSet()){
      const char* InstanceIDOriginal=original.getInstanceID();
      setInstanceID(InstanceIDOriginal, 1);
    }   	
    if(original.isNameSet()){
      const char* NameOriginal=original.getName();
      setName(NameOriginal, 1);
    }    
  }
  
  //reset the instanceName data
  void Linux_SambaShareFileNameHandlingOptionsInstanceName::reset(){   	
  	if (isSet.m_namespace)
  	  delete(m_namespace);

  	if (isSet.InstanceID)
  	  delete(m_InstanceID);

  	if (isSet.Name)
  	  delete(m_Name);  	  
  };
  
  
  
  
  //*********************************************************
  //Linux_SambaShareFileNameHandlingOptionsInstanceNameEnumerationElement	
  //*********************************************************
  
  Linux_SambaShareFileNameHandlingOptionsInstanceNameEnumerationElement::
   Linux_SambaShareFileNameHandlingOptionsInstanceNameEnumerationElement(){
   	
  	m_elementP=0;
  	m_nextP=0;
  	  
  };
  
  
  Linux_SambaShareFileNameHandlingOptionsInstanceNameEnumerationElement::
   ~Linux_SambaShareFileNameHandlingOptionsInstanceNameEnumerationElement(){
   	
  	if (m_elementP!=0)
  	  delete(m_elementP);
  	if (m_nextP!=0)
  	  delete(m_nextP);
  	  
  };

  
  //*********************************************************
  //Linux_SambaShareFileNameHandlingOptionsInstanceNameEnumeration
  //*********************************************************
  
  Linux_SambaShareFileNameHandlingOptionsInstanceNameEnumeration::
   Linux_SambaShareFileNameHandlingOptionsInstanceNameEnumeration(){
   	
  	 firstElementP=0;
     currentElementP=0;
     endElementP=0;
  };
  
  Linux_SambaShareFileNameHandlingOptionsInstanceNameEnumeration::
   Linux_SambaShareFileNameHandlingOptionsInstanceNameEnumeration(const CmpiArray& arr){
  	
  	firstElementP=0;
    currentElementP=0;
    endElementP=0;
    
    int size = arr.size();
    for (int i=0; i < size; i++) {
     addElement(Linux_SambaShareFileNameHandlingOptionsInstanceName(arr[i]));
    }
  }
  
  Linux_SambaShareFileNameHandlingOptionsInstanceNameEnumeration::
   Linux_SambaShareFileNameHandlingOptionsInstanceNameEnumeration(
   const Linux_SambaShareFileNameHandlingOptionsInstanceNameEnumeration& original){
   	
     firstElementP=0;
     currentElementP=0;
     endElementP=0;
  	 
     int size=original.getSize();
     for(int i=0;i<size;i++)
       addElement(original.getElement(i));           
  };
  
  	  
  Linux_SambaShareFileNameHandlingOptionsInstanceNameEnumeration::
   ~Linux_SambaShareFileNameHandlingOptionsInstanceNameEnumeration(){
   	
  	if (firstElementP!=0)
  	  delete(firstElementP);
  	  	
  };
  
  	  
  void Linux_SambaShareFileNameHandlingOptionsInstanceNameEnumeration::reset(){
  	
  	currentElementP=firstElementP;
  };
  
  	  
  bool Linux_SambaShareFileNameHandlingOptionsInstanceNameEnumeration::hasNext() const{
  	
  	return (currentElementP!=0);
  
  };
  
  int Linux_SambaShareFileNameHandlingOptionsInstanceNameEnumeration::getSize() const{
  	
    int size=0;
    Linux_SambaShareFileNameHandlingOptionsInstanceNameEnumerationElement* followingP=firstElementP;
  	
  	while(followingP!=0){
        followingP=followingP->m_nextP;
        size++;
    }
  	
    return size;
  };
  
  const Linux_SambaShareFileNameHandlingOptionsInstanceName&  
   Linux_SambaShareFileNameHandlingOptionsInstanceNameEnumeration::getElement(int pos) const{
   
    Linux_SambaShareFileNameHandlingOptionsInstanceNameEnumerationElement* followingP=firstElementP;
   
    int i=0;
    while((followingP!=0)&&(i<pos)){
        followingP=followingP->m_nextP;
        i++;
    }
    
    return *(followingP->m_elementP);
  };
  
  	  
  const Linux_SambaShareFileNameHandlingOptionsInstanceName&
   Linux_SambaShareFileNameHandlingOptionsInstanceNameEnumeration::getNext() {
   	
  	 Linux_SambaShareFileNameHandlingOptionsInstanceNameEnumerationElement* currentP=
  	  currentElementP;
  	 currentElementP=currentElementP->m_nextP;
  	 
  	 return *(currentP->m_elementP);
  };
  	  
  void Linux_SambaShareFileNameHandlingOptionsInstanceNameEnumeration::addElement
   (const Linux_SambaShareFileNameHandlingOptionsInstanceName& elementP){
   	
  	if(firstElementP==0){
  	  firstElementP=new Linux_SambaShareFileNameHandlingOptionsInstanceNameEnumerationElement();
  	  firstElementP->m_elementP=new Linux_SambaShareFileNameHandlingOptionsInstanceName(elementP);
  	  endElementP=firstElementP;
  	  currentElementP=firstElementP;
  	}else{
  	  endElementP->m_nextP=new Linux_SambaShareFileNameHandlingOptionsInstanceNameEnumerationElement();
  	  endElementP=endElementP->m_nextP;
  	  endElementP->m_elementP=new Linux_SambaShareFileNameHandlingOptionsInstanceName(elementP);
  	}
  };
  
  Linux_SambaShareFileNameHandlingOptionsInstanceNameEnumeration::operator CmpiArray() const{
  	int size=getSize();
   	CmpiArray arr=CmpiArray(size,CMPI_instance);
   	for(int i=0;i<size;i++){
   	  arr[i]=getElement(i).getObjectPath();
   	}
   	return arr;
  };  
}
 
