/**
 *  Linux_SambaGroupInstanceName.cpp
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


#include "Linux_SambaGroupInstanceName.h"
#include "CmpiData.h"
#include "CmpiString.h"
#include "CmpiArray.h"
#include <string>

namespace genProvider {
	
  //*********************************************************
  //Linux_SambaGroupInstanceName
  //*********************************************************
  
  //empty constructor
  Linux_SambaGroupInstanceName::
   Linux_SambaGroupInstanceName(){
   	init();  	
  };
  
  
  //copy constructor	
  Linux_SambaGroupInstanceName::
   Linux_SambaGroupInstanceName
   (const Linux_SambaGroupInstanceName& original){
   	init(original);  	
  };
  
  
  //contructor using CmpiObjectPath
  Linux_SambaGroupInstanceName::
   Linux_SambaGroupInstanceName (const CmpiObjectPath& path){
    
    init();
    
    m_CIMClassNameP=path.getClassName().charPtr();
    
    CmpiString namespaceOP;
    namespaceOP=path.getNameSpace();
    setNamespace(namespaceOP.charPtr(),1);
    
    CmpiString SambaGroupName = path.getKey("SambaGroupName");
    setSambaGroupName(SambaGroupName.charPtr());
    
  }
  
  
  //destructor
  Linux_SambaGroupInstanceName::
   ~Linux_SambaGroupInstanceName(){
   	reset();  	  
  };
  
  
  //copy operator
  Linux_SambaGroupInstanceName&
   Linux_SambaGroupInstanceName::operator=
   (const Linux_SambaGroupInstanceName& original){    
    init(original);
   	return *this;    
  }
  
  
  //returns the related CmpiObjectPath
  CmpiObjectPath Linux_SambaGroupInstanceName::
   getObjectPath() const{
   	
   	CmpiObjectPath objectPath(m_namespace, m_CIMClassNameP);

  	objectPath.setKey("SambaGroupName",CmpiData(m_SambaGroupName));
  	
  	return objectPath;
  	
  }
  
  
  //adds the related CmpiObjectPath to an existing cmpiInstance
  void Linux_SambaGroupInstanceName::fillKeys(CmpiInstance& cmpiInstance) const{
  	

  	if(isSet.SambaGroupName){
  	  cmpiInstance.setProperty("SambaGroupName",CmpiData(m_SambaGroupName));
  	}
  }
  
  
  //NameSpace related methods
  unsigned int Linux_SambaGroupInstanceName::
   isNameSpaceSet() const{
  	return isSet.m_namespace;
  }
  
  const char * Linux_SambaGroupInstanceName::
   getNamespace() const {
    if(!isSet.m_namespace)
   	  throw CmpiErrorFormater::getErrorException(
   	   CmpiErrorFormater::NOT_SET,
   	   "NameSpace not set in Linux_SambaGroup instanceName");
  	return m_namespace;
  }

  void Linux_SambaGroupInstanceName::
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
       
  //SambaGroupName related methods
  unsigned int Linux_SambaGroupInstanceName::isSambaGroupNameSet() const{
    return isSet.SambaGroupName;
  }
  void  Linux_SambaGroupInstanceName::
   setSambaGroupName(const char* val, int makeCopy){
    if (isSet.SambaGroupName) {
      delete []m_SambaGroupName;
    }
    if (makeCopy&&val) {
      char* tmpval = new char[strlen(val)+1];
      strcpy(tmpval,val);
      m_SambaGroupName = tmpval;
    } else {
      m_SambaGroupName = val;
    }
    isSet.SambaGroupName=1;
  }       
  const char* Linux_SambaGroupInstanceName::
   getSambaGroupName() const{
    
    if(!isSet.SambaGroupName)
   	  throw CmpiErrorFormater::getErrorException(
   	   CmpiErrorFormater::NOT_SET,
   	   "SambaGroupName not set");
   	   	
    return m_SambaGroupName;
  }

  
  //set isSet variables to FALSE
  void Linux_SambaGroupInstanceName::init(){
  	
  	m_CIMClassNameP="Linux_SambaGroup";
  	isSet.m_namespace=0;    	
    isSet.SambaGroupName=0;
  }
  
  
  //copies another instance properties in this
  void Linux_SambaGroupInstanceName::init
   (const Linux_SambaGroupInstanceName& original){
   	init();
   	   	
    m_CIMClassNameP=original.m_CIMClassNameP;
    if(original.isNameSpaceSet()){
      setNamespace(original.getNamespace(),1);
    }   	
    if(original.isSambaGroupNameSet()){
      const char* SambaGroupNameOriginal=original.getSambaGroupName();
      setSambaGroupName(SambaGroupNameOriginal, 1);
    }    
  }
  
  //reset the instanceName data
  void Linux_SambaGroupInstanceName::reset(){   	
  	if (isSet.m_namespace)
  	  delete(m_namespace);

  	if (isSet.SambaGroupName)
  	  delete(m_SambaGroupName);  	  
  };
  
  
  
  
  //*********************************************************
  //Linux_SambaGroupInstanceNameEnumerationElement	
  //*********************************************************
  
  Linux_SambaGroupInstanceNameEnumerationElement::
   Linux_SambaGroupInstanceNameEnumerationElement(){
   	
  	m_elementP=0;
  	m_nextP=0;
  	  
  };
  
  
  Linux_SambaGroupInstanceNameEnumerationElement::
   ~Linux_SambaGroupInstanceNameEnumerationElement(){
   	
  	if (m_elementP!=0)
  	  delete(m_elementP);
  	if (m_nextP!=0)
  	  delete(m_nextP);
  	  
  };

  
  //*********************************************************
  //Linux_SambaGroupInstanceNameEnumeration
  //*********************************************************
  
  Linux_SambaGroupInstanceNameEnumeration::
   Linux_SambaGroupInstanceNameEnumeration(){
   	
  	 firstElementP=0;
     currentElementP=0;
     endElementP=0;
  };
  
  Linux_SambaGroupInstanceNameEnumeration::
   Linux_SambaGroupInstanceNameEnumeration(const CmpiArray& arr){
  	
  	firstElementP=0;
    currentElementP=0;
    endElementP=0;
    
    int size = arr.size();
    for (int i=0; i < size; i++) {
     addElement(Linux_SambaGroupInstanceName(arr[i]));
    }
  }
  
  Linux_SambaGroupInstanceNameEnumeration::
   Linux_SambaGroupInstanceNameEnumeration(
   const Linux_SambaGroupInstanceNameEnumeration& original){
   	
     firstElementP=0;
     currentElementP=0;
     endElementP=0;
  	 
     int size=original.getSize();
     for(int i=0;i<size;i++)
       addElement(original.getElement(i));           
  };
  
  	  
  Linux_SambaGroupInstanceNameEnumeration::
   ~Linux_SambaGroupInstanceNameEnumeration(){
   	
  	if (firstElementP!=0)
  	  delete(firstElementP);
  	  	
  };
  
  	  
  void Linux_SambaGroupInstanceNameEnumeration::reset(){
  	
  	currentElementP=firstElementP;
  };
  
  	  
  bool Linux_SambaGroupInstanceNameEnumeration::hasNext() const{
  	
  	return (currentElementP!=0);
  
  };
  
  int Linux_SambaGroupInstanceNameEnumeration::getSize() const{
  	
    int size=0;
    Linux_SambaGroupInstanceNameEnumerationElement* followingP=firstElementP;
  	
  	while(followingP!=0){
        followingP=followingP->m_nextP;
        size++;
    }
  	
    return size;
  };
  
  const Linux_SambaGroupInstanceName&  
   Linux_SambaGroupInstanceNameEnumeration::getElement(int pos) const{
   
    Linux_SambaGroupInstanceNameEnumerationElement* followingP=firstElementP;
   
    int i=0;
    while((followingP!=0)&&(i<pos)){
        followingP=followingP->m_nextP;
        i++;
    }
    
    return *(followingP->m_elementP);
  };
  
  	  
  const Linux_SambaGroupInstanceName&
   Linux_SambaGroupInstanceNameEnumeration::getNext() {
   	
  	 Linux_SambaGroupInstanceNameEnumerationElement* currentP=
  	  currentElementP;
  	 currentElementP=currentElementP->m_nextP;
  	 
  	 return *(currentP->m_elementP);
  };
  	  
  void Linux_SambaGroupInstanceNameEnumeration::addElement
   (const Linux_SambaGroupInstanceName& elementP){
   	
  	if(firstElementP==0){
  	  firstElementP=new Linux_SambaGroupInstanceNameEnumerationElement();
  	  firstElementP->m_elementP=new Linux_SambaGroupInstanceName(elementP);
  	  endElementP=firstElementP;
  	  currentElementP=firstElementP;
  	}else{
  	  endElementP->m_nextP=new Linux_SambaGroupInstanceNameEnumerationElement();
  	  endElementP=endElementP->m_nextP;
  	  endElementP->m_elementP=new Linux_SambaGroupInstanceName(elementP);
  	}
  };
  
  Linux_SambaGroupInstanceNameEnumeration::operator CmpiArray() const{
  	int size=getSize();
   	CmpiArray arr=CmpiArray(size,CMPI_instance);
   	for(int i=0;i<size;i++){
   	  arr[i]=getElement(i).getObjectPath();
   	}
   	return arr;
  };  
}
 
