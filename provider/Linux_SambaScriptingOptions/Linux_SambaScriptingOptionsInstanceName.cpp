/**
 *  Linux_SambaScriptingOptionsInstanceName.cpp
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


#include "Linux_SambaScriptingOptionsInstanceName.h"
#include "CmpiData.h"
#include "CmpiString.h"
#include "CmpiArray.h"
#include <string>

namespace genProvider {
	
  //*********************************************************
  //Linux_SambaScriptingOptionsInstanceName
  //*********************************************************
  
  //empty constructor
  Linux_SambaScriptingOptionsInstanceName::
   Linux_SambaScriptingOptionsInstanceName(){
   	init();  	
  };
  
  
  //copy constructor	
  Linux_SambaScriptingOptionsInstanceName::
   Linux_SambaScriptingOptionsInstanceName
   (const Linux_SambaScriptingOptionsInstanceName& original){
   	init(original);  	
  };
  
  
  //contructor using CmpiObjectPath
  Linux_SambaScriptingOptionsInstanceName::
   Linux_SambaScriptingOptionsInstanceName (const CmpiObjectPath& path){
    
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
  Linux_SambaScriptingOptionsInstanceName::
   ~Linux_SambaScriptingOptionsInstanceName(){
   	reset();  	  
  };
  
  
  //copy operator
  Linux_SambaScriptingOptionsInstanceName&
   Linux_SambaScriptingOptionsInstanceName::operator=
   (const Linux_SambaScriptingOptionsInstanceName& original){    
    init(original);
   	return *this;    
  }
  
  
  //returns the related CmpiObjectPath
  CmpiObjectPath Linux_SambaScriptingOptionsInstanceName::
   getObjectPath() const{
   	
   	CmpiObjectPath objectPath(m_namespace, m_CIMClassNameP);

  	objectPath.setKey("InstanceID",CmpiData(m_InstanceID));

  	objectPath.setKey("Name",CmpiData(m_Name));
  	
  	return objectPath;
  	
  }
  
  
  //adds the related CmpiObjectPath to an existing cmpiInstance
  void Linux_SambaScriptingOptionsInstanceName::fillKeys(CmpiInstance& cmpiInstance) const{
  	

  	if(isSet.InstanceID){
  	  cmpiInstance.setProperty("InstanceID",CmpiData(m_InstanceID));
  	}

  	if(isSet.Name){
  	  cmpiInstance.setProperty("Name",CmpiData(m_Name));
  	}
  }
  
  
  //NameSpace related methods
  unsigned int Linux_SambaScriptingOptionsInstanceName::
   isNameSpaceSet() const{
  	return isSet.m_namespace;
  }
  
  const char * Linux_SambaScriptingOptionsInstanceName::
   getNamespace() const {
    if(!isSet.m_namespace)
   	  throw CmpiErrorFormater::getErrorException(
   	   CmpiErrorFormater::NOT_SET,
   	   "NameSpace not set in Linux_SambaScriptingOptions instanceName");
  	return m_namespace;
  }

  void Linux_SambaScriptingOptionsInstanceName::
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
  unsigned int Linux_SambaScriptingOptionsInstanceName::isInstanceIDSet() const{
    return isSet.InstanceID;
  }
  void  Linux_SambaScriptingOptionsInstanceName::
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
  const char* Linux_SambaScriptingOptionsInstanceName::
   getInstanceID() const{
    
    if(!isSet.InstanceID)
   	  throw CmpiErrorFormater::getErrorException(
   	   CmpiErrorFormater::NOT_SET,
   	   "InstanceID not set");
   	   	
    return m_InstanceID;
  }
       
  //Name related methods
  unsigned int Linux_SambaScriptingOptionsInstanceName::isNameSet() const{
    return isSet.Name;
  }
  void  Linux_SambaScriptingOptionsInstanceName::
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
  const char* Linux_SambaScriptingOptionsInstanceName::
   getName() const{
    
    if(!isSet.Name)
   	  throw CmpiErrorFormater::getErrorException(
   	   CmpiErrorFormater::NOT_SET,
   	   "Name not set");
   	   	
    return m_Name;
  }

  
  //set isSet variables to FALSE
  void Linux_SambaScriptingOptionsInstanceName::init(){
  	
  	m_CIMClassNameP="Linux_SambaScriptingOptions";
  	isSet.m_namespace=0;    	
    isSet.InstanceID=0;   	
    isSet.Name=0;
  }
  
  
  //copies another instance properties in this
  void Linux_SambaScriptingOptionsInstanceName::init
   (const Linux_SambaScriptingOptionsInstanceName& original){
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
  void Linux_SambaScriptingOptionsInstanceName::reset(){   	
  	if (isSet.m_namespace)
  	  delete(m_namespace);

  	if (isSet.InstanceID)
  	  delete(m_InstanceID);

  	if (isSet.Name)
  	  delete(m_Name);  	  
  };
  
  
  
  
  //*********************************************************
  //Linux_SambaScriptingOptionsInstanceNameEnumerationElement	
  //*********************************************************
  
  Linux_SambaScriptingOptionsInstanceNameEnumerationElement::
   Linux_SambaScriptingOptionsInstanceNameEnumerationElement(){
   	
  	m_elementP=0;
  	m_nextP=0;
  	  
  };
  
  
  Linux_SambaScriptingOptionsInstanceNameEnumerationElement::
   ~Linux_SambaScriptingOptionsInstanceNameEnumerationElement(){
   	
  	if (m_elementP!=0)
  	  delete(m_elementP);
  	if (m_nextP!=0)
  	  delete(m_nextP);
  	  
  };

  
  //*********************************************************
  //Linux_SambaScriptingOptionsInstanceNameEnumeration
  //*********************************************************
  
  Linux_SambaScriptingOptionsInstanceNameEnumeration::
   Linux_SambaScriptingOptionsInstanceNameEnumeration(){
   	
  	 firstElementP=0;
     currentElementP=0;
     endElementP=0;
  };
  
  Linux_SambaScriptingOptionsInstanceNameEnumeration::
   Linux_SambaScriptingOptionsInstanceNameEnumeration(const CmpiArray& arr){
  	
  	firstElementP=0;
    currentElementP=0;
    endElementP=0;
    
    int size = arr.size();
    for (int i=0; i < size; i++) {
     addElement(Linux_SambaScriptingOptionsInstanceName(arr[i]));
    }
  }
  
  Linux_SambaScriptingOptionsInstanceNameEnumeration::
   Linux_SambaScriptingOptionsInstanceNameEnumeration(
   const Linux_SambaScriptingOptionsInstanceNameEnumeration& original){
   	
     firstElementP=0;
     currentElementP=0;
     endElementP=0;
  	 
     int size=original.getSize();
     for(int i=0;i<size;i++)
       addElement(original.getElement(i));           
  };
  
  	  
  Linux_SambaScriptingOptionsInstanceNameEnumeration::
   ~Linux_SambaScriptingOptionsInstanceNameEnumeration(){
   	
  	if (firstElementP!=0)
  	  delete(firstElementP);
  	  	
  };
  
  	  
  void Linux_SambaScriptingOptionsInstanceNameEnumeration::reset(){
  	
  	currentElementP=firstElementP;
  };
  
  	  
  bool Linux_SambaScriptingOptionsInstanceNameEnumeration::hasNext() const{
  	
  	return (currentElementP!=0);
  
  };
  
  int Linux_SambaScriptingOptionsInstanceNameEnumeration::getSize() const{
  	
    int size=0;
    Linux_SambaScriptingOptionsInstanceNameEnumerationElement* followingP=firstElementP;
  	
  	while(followingP!=0){
        followingP=followingP->m_nextP;
        size++;
    }
  	
    return size;
  };
  
  const Linux_SambaScriptingOptionsInstanceName&  
   Linux_SambaScriptingOptionsInstanceNameEnumeration::getElement(int pos) const{
   
    Linux_SambaScriptingOptionsInstanceNameEnumerationElement* followingP=firstElementP;
   
    int i=0;
    while((followingP!=0)&&(i<pos)){
        followingP=followingP->m_nextP;
        i++;
    }
    
    return *(followingP->m_elementP);
  };
  
  	  
  const Linux_SambaScriptingOptionsInstanceName&
   Linux_SambaScriptingOptionsInstanceNameEnumeration::getNext() {
   	
  	 Linux_SambaScriptingOptionsInstanceNameEnumerationElement* currentP=
  	  currentElementP;
  	 currentElementP=currentElementP->m_nextP;
  	 
  	 return *(currentP->m_elementP);
  };
  	  
  void Linux_SambaScriptingOptionsInstanceNameEnumeration::addElement
   (const Linux_SambaScriptingOptionsInstanceName& elementP){
   	
  	if(firstElementP==0){
  	  firstElementP=new Linux_SambaScriptingOptionsInstanceNameEnumerationElement();
  	  firstElementP->m_elementP=new Linux_SambaScriptingOptionsInstanceName(elementP);
  	  endElementP=firstElementP;
  	  currentElementP=firstElementP;
  	}else{
  	  endElementP->m_nextP=new Linux_SambaScriptingOptionsInstanceNameEnumerationElement();
  	  endElementP=endElementP->m_nextP;
  	  endElementP->m_elementP=new Linux_SambaScriptingOptionsInstanceName(elementP);
  	}
  };
  
  Linux_SambaScriptingOptionsInstanceNameEnumeration::operator CmpiArray() const{
  	int size=getSize();
   	CmpiArray arr=CmpiArray(size,CMPI_instance);
   	for(int i=0;i<size;i++){
   	  arr[i]=getElement(i).getObjectPath();
   	}
   	return arr;
  };  
}
 
