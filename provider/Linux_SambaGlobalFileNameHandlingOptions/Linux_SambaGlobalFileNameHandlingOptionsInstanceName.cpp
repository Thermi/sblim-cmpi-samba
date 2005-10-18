/**
 *  Linux_SambaGlobalFileNameHandlingOptionsInstanceName.cpp
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


#include "Linux_SambaGlobalFileNameHandlingOptionsInstanceName.h"
#include "CmpiData.h"
#include "CmpiString.h"
#include "CmpiArray.h"
#include <string>

namespace genProvider {
	
  //*********************************************************
  //Linux_SambaGlobalFileNameHandlingOptionsInstanceName
  //*********************************************************
  
  //empty constructor
  Linux_SambaGlobalFileNameHandlingOptionsInstanceName::
   Linux_SambaGlobalFileNameHandlingOptionsInstanceName(){
   	init();  	
  };
  
  
  //copy constructor	
  Linux_SambaGlobalFileNameHandlingOptionsInstanceName::
   Linux_SambaGlobalFileNameHandlingOptionsInstanceName
   (const Linux_SambaGlobalFileNameHandlingOptionsInstanceName& original){
   	init(original);  	
  };
  
  
  //contructor using CmpiObjectPath
  Linux_SambaGlobalFileNameHandlingOptionsInstanceName::
   Linux_SambaGlobalFileNameHandlingOptionsInstanceName (const CmpiObjectPath& path){
    
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
  Linux_SambaGlobalFileNameHandlingOptionsInstanceName::
   ~Linux_SambaGlobalFileNameHandlingOptionsInstanceName(){
   	reset();  	  
  };
  
  
  //copy operator
  Linux_SambaGlobalFileNameHandlingOptionsInstanceName&
   Linux_SambaGlobalFileNameHandlingOptionsInstanceName::operator=
   (const Linux_SambaGlobalFileNameHandlingOptionsInstanceName& original){    
    init(original);
   	return *this;    
  }
  
  
  //returns the related CmpiObjectPath
  CmpiObjectPath Linux_SambaGlobalFileNameHandlingOptionsInstanceName::
   getObjectPath() const{
   	
   	CmpiObjectPath objectPath(m_namespace, m_CIMClassNameP);

  	objectPath.setKey("InstanceID",CmpiData(m_InstanceID));

  	objectPath.setKey("Name",CmpiData(m_Name));
  	
  	return objectPath;
  	
  }
  
  
  //adds the related CmpiObjectPath to an existing cmpiInstance
  void Linux_SambaGlobalFileNameHandlingOptionsInstanceName::fillKeys(CmpiInstance& cmpiInstance) const{
  	

  	if(isSet.InstanceID){
  	  cmpiInstance.setProperty("InstanceID",CmpiData(m_InstanceID));
  	}

  	if(isSet.Name){
  	  cmpiInstance.setProperty("Name",CmpiData(m_Name));
  	}
  }
  
  
  //NameSpace related methods
  unsigned int Linux_SambaGlobalFileNameHandlingOptionsInstanceName::
   isNameSpaceSet() const{
  	return isSet.m_namespace;
  }
  
  const char * Linux_SambaGlobalFileNameHandlingOptionsInstanceName::
   getNamespace() const {
    if(!isSet.m_namespace)
   	  throw CmpiErrorFormater::getErrorException(
   	   CmpiErrorFormater::NOT_SET,
   	   "NameSpace not set in Linux_SambaGlobalFileNameHandlingOptions instanceName");
  	return m_namespace;
  }

  void Linux_SambaGlobalFileNameHandlingOptionsInstanceName::
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
  unsigned int Linux_SambaGlobalFileNameHandlingOptionsInstanceName::isInstanceIDSet() const{
    return isSet.InstanceID;
  }
  void  Linux_SambaGlobalFileNameHandlingOptionsInstanceName::
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
  const char* Linux_SambaGlobalFileNameHandlingOptionsInstanceName::
   getInstanceID() const{
    
    if(!isSet.InstanceID)
   	  throw CmpiErrorFormater::getErrorException(
   	   CmpiErrorFormater::NOT_SET,
   	   "InstanceID not set");
   	   	
    return m_InstanceID;
  }
       
  //Name related methods
  unsigned int Linux_SambaGlobalFileNameHandlingOptionsInstanceName::isNameSet() const{
    return isSet.Name;
  }
  void  Linux_SambaGlobalFileNameHandlingOptionsInstanceName::
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
  const char* Linux_SambaGlobalFileNameHandlingOptionsInstanceName::
   getName() const{
    
    if(!isSet.Name)
   	  throw CmpiErrorFormater::getErrorException(
   	   CmpiErrorFormater::NOT_SET,
   	   "Name not set");
   	   	
    return m_Name;
  }

  
  //set isSet variables to FALSE
  void Linux_SambaGlobalFileNameHandlingOptionsInstanceName::init(){
  	
  	m_CIMClassNameP="Linux_SambaGlobalFileNameHandlingOptions";
  	isSet.m_namespace=0;    	
    isSet.InstanceID=0;   	
    isSet.Name=0;
  }
  
  
  //copies another instance properties in this
  void Linux_SambaGlobalFileNameHandlingOptionsInstanceName::init
   (const Linux_SambaGlobalFileNameHandlingOptionsInstanceName& original){
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
  void Linux_SambaGlobalFileNameHandlingOptionsInstanceName::reset(){   	
  	if (isSet.m_namespace)
  	  delete(m_namespace);

  	if (isSet.InstanceID)
  	  delete(m_InstanceID);

  	if (isSet.Name)
  	  delete(m_Name);  	  
  };
  
  
  
  
  //*********************************************************
  //Linux_SambaGlobalFileNameHandlingOptionsInstanceNameEnumerationElement	
  //*********************************************************
  
  Linux_SambaGlobalFileNameHandlingOptionsInstanceNameEnumerationElement::
   Linux_SambaGlobalFileNameHandlingOptionsInstanceNameEnumerationElement(){
   	
  	m_elementP=0;
  	m_nextP=0;
  	  
  };
  
  
  Linux_SambaGlobalFileNameHandlingOptionsInstanceNameEnumerationElement::
   ~Linux_SambaGlobalFileNameHandlingOptionsInstanceNameEnumerationElement(){
   	
  	if (m_elementP!=0)
  	  delete(m_elementP);
  	if (m_nextP!=0)
  	  delete(m_nextP);
  	  
  };

  
  //*********************************************************
  //Linux_SambaGlobalFileNameHandlingOptionsInstanceNameEnumeration
  //*********************************************************
  
  Linux_SambaGlobalFileNameHandlingOptionsInstanceNameEnumeration::
   Linux_SambaGlobalFileNameHandlingOptionsInstanceNameEnumeration(){
   	
  	 firstElementP=0;
     currentElementP=0;
     endElementP=0;
  };
  
  Linux_SambaGlobalFileNameHandlingOptionsInstanceNameEnumeration::
   Linux_SambaGlobalFileNameHandlingOptionsInstanceNameEnumeration(const CmpiArray& arr){
  	
  	firstElementP=0;
    currentElementP=0;
    endElementP=0;
    
    int size = arr.size();
    for (int i=0; i < size; i++) {
     addElement(Linux_SambaGlobalFileNameHandlingOptionsInstanceName(arr[i]));
    }
  }
  
  Linux_SambaGlobalFileNameHandlingOptionsInstanceNameEnumeration::
   Linux_SambaGlobalFileNameHandlingOptionsInstanceNameEnumeration(
   const Linux_SambaGlobalFileNameHandlingOptionsInstanceNameEnumeration& original){
   	
     firstElementP=0;
     currentElementP=0;
     endElementP=0;
  	 
     int size=original.getSize();
     for(int i=0;i<size;i++)
       addElement(original.getElement(i));           
  };
  
  	  
  Linux_SambaGlobalFileNameHandlingOptionsInstanceNameEnumeration::
   ~Linux_SambaGlobalFileNameHandlingOptionsInstanceNameEnumeration(){
   	
  	if (firstElementP!=0)
  	  delete(firstElementP);
  	  	
  };
  
  	  
  void Linux_SambaGlobalFileNameHandlingOptionsInstanceNameEnumeration::reset(){
  	
  	currentElementP=firstElementP;
  };
  
  	  
  bool Linux_SambaGlobalFileNameHandlingOptionsInstanceNameEnumeration::hasNext() const{
  	
  	return (currentElementP!=0);
  
  };
  
  int Linux_SambaGlobalFileNameHandlingOptionsInstanceNameEnumeration::getSize() const{
  	
    int size=0;
    Linux_SambaGlobalFileNameHandlingOptionsInstanceNameEnumerationElement* followingP=firstElementP;
  	
  	while(followingP!=0){
        followingP=followingP->m_nextP;
        size++;
    }
  	
    return size;
  };
  
  const Linux_SambaGlobalFileNameHandlingOptionsInstanceName&  
   Linux_SambaGlobalFileNameHandlingOptionsInstanceNameEnumeration::getElement(int pos) const{
   
    Linux_SambaGlobalFileNameHandlingOptionsInstanceNameEnumerationElement* followingP=firstElementP;
   
    int i=0;
    while((followingP!=0)&&(i<pos)){
        followingP=followingP->m_nextP;
        i++;
    }
    
    return *(followingP->m_elementP);
  };
  
  	  
  const Linux_SambaGlobalFileNameHandlingOptionsInstanceName&
   Linux_SambaGlobalFileNameHandlingOptionsInstanceNameEnumeration::getNext() {
   	
  	 Linux_SambaGlobalFileNameHandlingOptionsInstanceNameEnumerationElement* currentP=
  	  currentElementP;
  	 currentElementP=currentElementP->m_nextP;
  	 
  	 return *(currentP->m_elementP);
  };
  	  
  void Linux_SambaGlobalFileNameHandlingOptionsInstanceNameEnumeration::addElement
   (const Linux_SambaGlobalFileNameHandlingOptionsInstanceName& elementP){
   	
  	if(firstElementP==0){
  	  firstElementP=new Linux_SambaGlobalFileNameHandlingOptionsInstanceNameEnumerationElement();
  	  firstElementP->m_elementP=new Linux_SambaGlobalFileNameHandlingOptionsInstanceName(elementP);
  	  endElementP=firstElementP;
  	  currentElementP=firstElementP;
  	}else{
  	  endElementP->m_nextP=new Linux_SambaGlobalFileNameHandlingOptionsInstanceNameEnumerationElement();
  	  endElementP=endElementP->m_nextP;
  	  endElementP->m_elementP=new Linux_SambaGlobalFileNameHandlingOptionsInstanceName(elementP);
  	}
  };
  
  Linux_SambaGlobalFileNameHandlingOptionsInstanceNameEnumeration::operator CmpiArray() const{
  	int size=getSize();
   	CmpiArray arr=CmpiArray(size,CMPI_instance);
   	for(int i=0;i<size;i++){
   	  arr[i]=getElement(i).getObjectPath();
   	}
   	return arr;
  };  
}
 
