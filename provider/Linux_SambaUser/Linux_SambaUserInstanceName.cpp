/**
 *  Linux_SambaUserInstanceName.cpp
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


#include "Linux_SambaUserInstanceName.h"
#include "CmpiData.h"
#include "CmpiString.h"
#include "CmpiArray.h"
#include <string>

namespace genProvider {
	
  //*********************************************************
  //Linux_SambaUserInstanceName
  //*********************************************************
  
  //empty constructor
  Linux_SambaUserInstanceName::
   Linux_SambaUserInstanceName(){
   	init();  	
  };
  
  
  //copy constructor	
  Linux_SambaUserInstanceName::
   Linux_SambaUserInstanceName
   (const Linux_SambaUserInstanceName& original){
   	init(original);  	
  };
  
  
  //contructor using CmpiObjectPath
  Linux_SambaUserInstanceName::
   Linux_SambaUserInstanceName (const CmpiObjectPath& path){
    
    init();
    
    m_CIMClassNameP=path.getClassName().charPtr();
    
    CmpiString namespaceOP;
    namespaceOP=path.getNameSpace();
    setNamespace(namespaceOP.charPtr(),1);
    
    CmpiString SambaUserName = path.getKey("SambaUserName");
    setSambaUserName(SambaUserName.charPtr());
    
  }
  
  
  //destructor
  Linux_SambaUserInstanceName::
   ~Linux_SambaUserInstanceName(){
   	reset();  	  
  };
  
  
  //copy operator
  Linux_SambaUserInstanceName&
   Linux_SambaUserInstanceName::operator=
   (const Linux_SambaUserInstanceName& original){    
    init(original);
   	return *this;    
  }
  
  
  //returns the related CmpiObjectPath
  CmpiObjectPath Linux_SambaUserInstanceName::
   getObjectPath() const{
   	
   	CmpiObjectPath objectPath(m_namespace, m_CIMClassNameP);

  	objectPath.setKey("SambaUserName",CmpiData(m_SambaUserName));
  	
  	return objectPath;
  	
  }
  
  
  //adds the related CmpiObjectPath to an existing cmpiInstance
  void Linux_SambaUserInstanceName::fillKeys(CmpiInstance& cmpiInstance) const{
  	

  	if(isSet.SambaUserName){
  	  cmpiInstance.setProperty("SambaUserName",CmpiData(m_SambaUserName));
  	}
  }
  
  
  //NameSpace related methods
  unsigned int Linux_SambaUserInstanceName::
   isNameSpaceSet() const{
  	return isSet.m_namespace;
  }
  
  const char * Linux_SambaUserInstanceName::
   getNamespace() const {
    if(!isSet.m_namespace)
   	  throw CmpiErrorFormater::getErrorException(
   	   CmpiErrorFormater::NOT_SET,
   	   "NameSpace not set in Linux_SambaUser instanceName");
  	return m_namespace;
  }

  void Linux_SambaUserInstanceName::
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
       
  //SambaUserName related methods
  unsigned int Linux_SambaUserInstanceName::isSambaUserNameSet() const{
    return isSet.SambaUserName;
  }
  void  Linux_SambaUserInstanceName::
   setSambaUserName(const char* val, int makeCopy){
    if (isSet.SambaUserName) {
      delete []m_SambaUserName;
    }
    if (makeCopy&&val) {
      char* tmpval = new char[strlen(val)+1];
      strcpy(tmpval,val);
      m_SambaUserName = tmpval;
    } else {
      m_SambaUserName = val;
    }
    isSet.SambaUserName=1;
  }       
  const char* Linux_SambaUserInstanceName::
   getSambaUserName() const{
    
    if(!isSet.SambaUserName)
   	  throw CmpiErrorFormater::getErrorException(
   	   CmpiErrorFormater::NOT_SET,
   	   "SambaUserName not set");
   	   	
    return m_SambaUserName;
  }

  
  //set isSet variables to FALSE
  void Linux_SambaUserInstanceName::init(){
  	
  	m_CIMClassNameP="Linux_SambaUser";
  	isSet.m_namespace=0;    	
    isSet.SambaUserName=0;
  }
  
  
  //copies another instance properties in this
  void Linux_SambaUserInstanceName::init
   (const Linux_SambaUserInstanceName& original){
   	init();
   	   	
    m_CIMClassNameP=original.m_CIMClassNameP;
    if(original.isNameSpaceSet()){
      setNamespace(original.getNamespace(),1);
    }   	
    if(original.isSambaUserNameSet()){
      const char* SambaUserNameOriginal=original.getSambaUserName();
      setSambaUserName(SambaUserNameOriginal, 1);
    }    
  }
  
  //reset the instanceName data
  void Linux_SambaUserInstanceName::reset(){   	
  	if (isSet.m_namespace)
  	  delete(m_namespace);

  	if (isSet.SambaUserName)
  	  delete(m_SambaUserName);  	  
  };
  
  
  
  
  //*********************************************************
  //Linux_SambaUserInstanceNameEnumerationElement	
  //*********************************************************
  
  Linux_SambaUserInstanceNameEnumerationElement::
   Linux_SambaUserInstanceNameEnumerationElement(){
   	
  	m_elementP=0;
  	m_nextP=0;
  	  
  };
  
  
  Linux_SambaUserInstanceNameEnumerationElement::
   ~Linux_SambaUserInstanceNameEnumerationElement(){
   	
  	if (m_elementP!=0)
  	  delete(m_elementP);
  	if (m_nextP!=0)
  	  delete(m_nextP);
  	  
  };

  
  //*********************************************************
  //Linux_SambaUserInstanceNameEnumeration
  //*********************************************************
  
  Linux_SambaUserInstanceNameEnumeration::
   Linux_SambaUserInstanceNameEnumeration(){
   	
  	 firstElementP=0;
     currentElementP=0;
     endElementP=0;
  };
  
  Linux_SambaUserInstanceNameEnumeration::
   Linux_SambaUserInstanceNameEnumeration(const CmpiArray& arr){
  	
  	firstElementP=0;
    currentElementP=0;
    endElementP=0;
    
    int size = arr.size();
    for (int i=0; i < size; i++) {
     addElement(Linux_SambaUserInstanceName(arr[i]));
    }
  }
  
  Linux_SambaUserInstanceNameEnumeration::
   Linux_SambaUserInstanceNameEnumeration(
   const Linux_SambaUserInstanceNameEnumeration& original){
   	
     firstElementP=0;
     currentElementP=0;
     endElementP=0;
  	 
     int size=original.getSize();
     for(int i=0;i<size;i++)
       addElement(original.getElement(i));           
  };
  
  	  
  Linux_SambaUserInstanceNameEnumeration::
   ~Linux_SambaUserInstanceNameEnumeration(){
   	
  	if (firstElementP!=0)
  	  delete(firstElementP);
  	  	
  };
  
  	  
  void Linux_SambaUserInstanceNameEnumeration::reset(){
  	
  	currentElementP=firstElementP;
  };
  
  	  
  bool Linux_SambaUserInstanceNameEnumeration::hasNext() const{
  	
  	return (currentElementP!=0);
  
  };
  
  int Linux_SambaUserInstanceNameEnumeration::getSize() const{
  	
    int size=0;
    Linux_SambaUserInstanceNameEnumerationElement* followingP=firstElementP;
  	
  	while(followingP!=0){
        followingP=followingP->m_nextP;
        size++;
    }
  	
    return size;
  };
  
  const Linux_SambaUserInstanceName&  
   Linux_SambaUserInstanceNameEnumeration::getElement(int pos) const{
   
    Linux_SambaUserInstanceNameEnumerationElement* followingP=firstElementP;
   
    int i=0;
    while((followingP!=0)&&(i<pos)){
        followingP=followingP->m_nextP;
        i++;
    }
    
    return *(followingP->m_elementP);
  };
  
  	  
  const Linux_SambaUserInstanceName&
   Linux_SambaUserInstanceNameEnumeration::getNext() {
   	
  	 Linux_SambaUserInstanceNameEnumerationElement* currentP=
  	  currentElementP;
  	 currentElementP=currentElementP->m_nextP;
  	 
  	 return *(currentP->m_elementP);
  };
  	  
  void Linux_SambaUserInstanceNameEnumeration::addElement
   (const Linux_SambaUserInstanceName& elementP){
   	
  	if(firstElementP==0){
  	  firstElementP=new Linux_SambaUserInstanceNameEnumerationElement();
  	  firstElementP->m_elementP=new Linux_SambaUserInstanceName(elementP);
  	  endElementP=firstElementP;
  	  currentElementP=firstElementP;
  	}else{
  	  endElementP->m_nextP=new Linux_SambaUserInstanceNameEnumerationElement();
  	  endElementP=endElementP->m_nextP;
  	  endElementP->m_elementP=new Linux_SambaUserInstanceName(elementP);
  	}
  };
  
  Linux_SambaUserInstanceNameEnumeration::operator CmpiArray() const{
  	int size=getSize();
   	CmpiArray arr=CmpiArray(size,CMPI_instance);
   	for(int i=0;i<size;i++){
   	  arr[i]=getElement(i).getObjectPath();
   	}
   	return arr;
  };  
}
 
