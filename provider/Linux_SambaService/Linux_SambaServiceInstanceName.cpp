/**
 *  Linux_SambaServiceInstanceName.cpp
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


#include "Linux_SambaServiceInstanceName.h"
#include "CmpiData.h"
#include "CmpiString.h"
#include "CmpiArray.h"
#include <string>

namespace genProvider {
	
  //*********************************************************
  //Linux_SambaServiceInstanceName
  //*********************************************************
  
  //empty constructor
  Linux_SambaServiceInstanceName::
   Linux_SambaServiceInstanceName(){
   	init();  	
  };
  
  
  //copy constructor	
  Linux_SambaServiceInstanceName::
   Linux_SambaServiceInstanceName
   (const Linux_SambaServiceInstanceName& original){
   	init(original);  	
  };
  
  
  //contructor using CmpiObjectPath
  Linux_SambaServiceInstanceName::
   Linux_SambaServiceInstanceName (const CmpiObjectPath& path){
    
    init();
    
    m_CIMClassNameP=path.getClassName().charPtr();
    
    CmpiString namespaceOP;
    namespaceOP=path.getNameSpace();
    setNamespace(namespaceOP.charPtr(),1);
    
    CmpiString CreationClassName = path.getKey("CreationClassName");
    setCreationClassName(CreationClassName.charPtr());
    
    CmpiString Name = path.getKey("Name");
    setName(Name.charPtr());
    
    CmpiString SystemCreationClassName = path.getKey("SystemCreationClassName");
    setSystemCreationClassName(SystemCreationClassName.charPtr());
    
    CmpiString SystemName = path.getKey("SystemName");
    setSystemName(SystemName.charPtr());
    
  }
  
  
  //destructor
  Linux_SambaServiceInstanceName::
   ~Linux_SambaServiceInstanceName(){
   	reset();  	  
  };
  
  
  //copy operator
  Linux_SambaServiceInstanceName&
   Linux_SambaServiceInstanceName::operator=
   (const Linux_SambaServiceInstanceName& original){    
    init(original);
   	return *this;    
  }
  
  
  //returns the related CmpiObjectPath
  CmpiObjectPath Linux_SambaServiceInstanceName::
   getObjectPath() const{
   	
   	CmpiObjectPath objectPath(m_namespace, m_CIMClassNameP);

  	objectPath.setKey("CreationClassName",CmpiData(m_CreationClassName));

  	objectPath.setKey("Name",CmpiData(m_Name));

  	objectPath.setKey("SystemCreationClassName",CmpiData(m_SystemCreationClassName));

  	objectPath.setKey("SystemName",CmpiData(m_SystemName));
  	
  	return objectPath;
  	
  }
  
  
  //adds the related CmpiObjectPath to an existing cmpiInstance
  void Linux_SambaServiceInstanceName::fillKeys(CmpiInstance& cmpiInstance) const{
  	

  	if(isSet.CreationClassName){
  	  cmpiInstance.setProperty("CreationClassName",CmpiData(m_CreationClassName));
  	}

  	if(isSet.Name){
  	  cmpiInstance.setProperty("Name",CmpiData(m_Name));
  	}

  	if(isSet.SystemCreationClassName){
  	  cmpiInstance.setProperty("SystemCreationClassName",CmpiData(m_SystemCreationClassName));
  	}

  	if(isSet.SystemName){
  	  cmpiInstance.setProperty("SystemName",CmpiData(m_SystemName));
  	}
  }
  
  
  //NameSpace related methods
  unsigned int Linux_SambaServiceInstanceName::
   isNameSpaceSet() const{
  	return isSet.m_namespace;
  }
  
  const char * Linux_SambaServiceInstanceName::
   getNamespace() const {
    if(!isSet.m_namespace)
   	  throw CmpiErrorFormater::getErrorException(
   	   CmpiErrorFormater::NOT_SET,
   	   "NameSpace not set in Linux_SambaService instanceName");
  	return m_namespace;
  }

  void Linux_SambaServiceInstanceName::
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
       
  //CreationClassName related methods
  unsigned int Linux_SambaServiceInstanceName::isCreationClassNameSet() const{
    return isSet.CreationClassName;
  }
  void  Linux_SambaServiceInstanceName::
   setCreationClassName(const char* val, int makeCopy){
    if (isSet.CreationClassName) {
      delete []m_CreationClassName;
    }
    if (makeCopy&&val) {
      char* tmpval = new char[strlen(val)+1];
      strcpy(tmpval,val);
      m_CreationClassName = tmpval;
    } else {
      m_CreationClassName = val;
    }
    isSet.CreationClassName=1;
  }       
  const char* Linux_SambaServiceInstanceName::
   getCreationClassName() const{
    
    if(!isSet.CreationClassName)
   	  throw CmpiErrorFormater::getErrorException(
   	   CmpiErrorFormater::NOT_SET,
   	   "CreationClassName not set");
   	   	
    return m_CreationClassName;
  }
       
  //Name related methods
  unsigned int Linux_SambaServiceInstanceName::isNameSet() const{
    return isSet.Name;
  }
  void  Linux_SambaServiceInstanceName::
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
  const char* Linux_SambaServiceInstanceName::
   getName() const{
    
    if(!isSet.Name)
   	  throw CmpiErrorFormater::getErrorException(
   	   CmpiErrorFormater::NOT_SET,
   	   "Name not set");
   	   	
    return m_Name;
  }
       
  //SystemCreationClassName related methods
  unsigned int Linux_SambaServiceInstanceName::isSystemCreationClassNameSet() const{
    return isSet.SystemCreationClassName;
  }
  void  Linux_SambaServiceInstanceName::
   setSystemCreationClassName(const char* val, int makeCopy){
    if (isSet.SystemCreationClassName) {
      delete []m_SystemCreationClassName;
    }
    if (makeCopy&&val) {
      char* tmpval = new char[strlen(val)+1];
      strcpy(tmpval,val);
      m_SystemCreationClassName = tmpval;
    } else {
      m_SystemCreationClassName = val;
    }
    isSet.SystemCreationClassName=1;
  }       
  const char* Linux_SambaServiceInstanceName::
   getSystemCreationClassName() const{
    
    if(!isSet.SystemCreationClassName)
   	  throw CmpiErrorFormater::getErrorException(
   	   CmpiErrorFormater::NOT_SET,
   	   "SystemCreationClassName not set");
   	   	
    return m_SystemCreationClassName;
  }
       
  //SystemName related methods
  unsigned int Linux_SambaServiceInstanceName::isSystemNameSet() const{
    return isSet.SystemName;
  }
  void  Linux_SambaServiceInstanceName::
   setSystemName(const char* val, int makeCopy){
    if (isSet.SystemName) {
      delete []m_SystemName;
    }
    if (makeCopy&&val) {
      char* tmpval = new char[strlen(val)+1];
      strcpy(tmpval,val);
      m_SystemName = tmpval;
    } else {
      m_SystemName = val;
    }
    isSet.SystemName=1;
  }       
  const char* Linux_SambaServiceInstanceName::
   getSystemName() const{
    
    if(!isSet.SystemName)
   	  throw CmpiErrorFormater::getErrorException(
   	   CmpiErrorFormater::NOT_SET,
   	   "SystemName not set");
   	   	
    return m_SystemName;
  }

  
  //set isSet variables to FALSE
  void Linux_SambaServiceInstanceName::init(){
  	
  	m_CIMClassNameP="Linux_SambaService";
  	isSet.m_namespace=0;    	
    isSet.CreationClassName=0;   	
    isSet.Name=0;   	
    isSet.SystemCreationClassName=0;   	
    isSet.SystemName=0;
  }
  
  
  //copies another instance properties in this
  void Linux_SambaServiceInstanceName::init
   (const Linux_SambaServiceInstanceName& original){
   	init();
   	   	
    m_CIMClassNameP=original.m_CIMClassNameP;
    if(original.isNameSpaceSet()){
      setNamespace(original.getNamespace(),1);
    }   	
    if(original.isCreationClassNameSet()){
      const char* CreationClassNameOriginal=original.getCreationClassName();
      setCreationClassName(CreationClassNameOriginal, 1);
    }   	
    if(original.isNameSet()){
      const char* NameOriginal=original.getName();
      setName(NameOriginal, 1);
    }   	
    if(original.isSystemCreationClassNameSet()){
      const char* SystemCreationClassNameOriginal=original.getSystemCreationClassName();
      setSystemCreationClassName(SystemCreationClassNameOriginal, 1);
    }   	
    if(original.isSystemNameSet()){
      const char* SystemNameOriginal=original.getSystemName();
      setSystemName(SystemNameOriginal, 1);
    }    
  }
  
  //reset the instanceName data
  void Linux_SambaServiceInstanceName::reset(){   	
  	if (isSet.m_namespace)
  	  delete(m_namespace);

  	if (isSet.CreationClassName)
  	  delete(m_CreationClassName);

  	if (isSet.Name)
  	  delete(m_Name);

  	if (isSet.SystemCreationClassName)
  	  delete(m_SystemCreationClassName);

  	if (isSet.SystemName)
  	  delete(m_SystemName);  	  
  };
  
  
  
  
  //*********************************************************
  //Linux_SambaServiceInstanceNameEnumerationElement	
  //*********************************************************
  
  Linux_SambaServiceInstanceNameEnumerationElement::
   Linux_SambaServiceInstanceNameEnumerationElement(){
   	
  	m_elementP=0;
  	m_nextP=0;
  	  
  };
  
  
  Linux_SambaServiceInstanceNameEnumerationElement::
   ~Linux_SambaServiceInstanceNameEnumerationElement(){
   	
  	if (m_elementP!=0)
  	  delete(m_elementP);
  	if (m_nextP!=0)
  	  delete(m_nextP);
  	  
  };

  
  //*********************************************************
  //Linux_SambaServiceInstanceNameEnumeration
  //*********************************************************
  
  Linux_SambaServiceInstanceNameEnumeration::
   Linux_SambaServiceInstanceNameEnumeration(){
   	
  	 firstElementP=0;
     currentElementP=0;
     endElementP=0;
  };
  
  Linux_SambaServiceInstanceNameEnumeration::
   Linux_SambaServiceInstanceNameEnumeration(const CmpiArray& arr){
  	
  	firstElementP=0;
    currentElementP=0;
    endElementP=0;
    
    int size = arr.size();
    for (int i=0; i < size; i++) {
     addElement(Linux_SambaServiceInstanceName(arr[i]));
    }
  }
  
  Linux_SambaServiceInstanceNameEnumeration::
   Linux_SambaServiceInstanceNameEnumeration(
   const Linux_SambaServiceInstanceNameEnumeration& original){
   	
     firstElementP=0;
     currentElementP=0;
     endElementP=0;
  	 
     int size=original.getSize();
     for(int i=0;i<size;i++)
       addElement(original.getElement(i));           
  };
  
  	  
  Linux_SambaServiceInstanceNameEnumeration::
   ~Linux_SambaServiceInstanceNameEnumeration(){
   	
  	if (firstElementP!=0)
  	  delete(firstElementP);
  	  	
  };
  
  	  
  void Linux_SambaServiceInstanceNameEnumeration::reset(){
  	
  	currentElementP=firstElementP;
  };
  
  	  
  bool Linux_SambaServiceInstanceNameEnumeration::hasNext() const{
  	
  	return (currentElementP!=0);
  
  };
  
  int Linux_SambaServiceInstanceNameEnumeration::getSize() const{
  	
    int size=0;
    Linux_SambaServiceInstanceNameEnumerationElement* followingP=firstElementP;
  	
  	while(followingP!=0){
        followingP=followingP->m_nextP;
        size++;
    }
  	
    return size;
  };
  
  const Linux_SambaServiceInstanceName&  
   Linux_SambaServiceInstanceNameEnumeration::getElement(int pos) const{
   
    Linux_SambaServiceInstanceNameEnumerationElement* followingP=firstElementP;
   
    int i=0;
    while((followingP!=0)&&(i<pos)){
        followingP=followingP->m_nextP;
        i++;
    }
    
    return *(followingP->m_elementP);
  };
  
  	  
  const Linux_SambaServiceInstanceName&
   Linux_SambaServiceInstanceNameEnumeration::getNext() {
   	
  	 Linux_SambaServiceInstanceNameEnumerationElement* currentP=
  	  currentElementP;
  	 currentElementP=currentElementP->m_nextP;
  	 
  	 return *(currentP->m_elementP);
  };
  	  
  void Linux_SambaServiceInstanceNameEnumeration::addElement
   (const Linux_SambaServiceInstanceName& elementP){
   	
  	if(firstElementP==0){
  	  firstElementP=new Linux_SambaServiceInstanceNameEnumerationElement();
  	  firstElementP->m_elementP=new Linux_SambaServiceInstanceName(elementP);
  	  endElementP=firstElementP;
  	  currentElementP=firstElementP;
  	}else{
  	  endElementP->m_nextP=new Linux_SambaServiceInstanceNameEnumerationElement();
  	  endElementP=endElementP->m_nextP;
  	  endElementP->m_elementP=new Linux_SambaServiceInstanceName(elementP);
  	}
  };
  
  Linux_SambaServiceInstanceNameEnumeration::operator CmpiArray() const{
  	int size=getSize();
   	CmpiArray arr=CmpiArray(size,CMPI_instance);
   	for(int i=0;i<size;i++){
   	  arr[i]=getElement(i).getObjectPath();
   	}
   	return arr;
  };  
}
 
