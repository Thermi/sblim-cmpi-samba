/**
 *  Linux_SambaServiceConfigurationInstanceName.cpp
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


#include "Linux_SambaServiceConfigurationInstanceName.h"
#include "CmpiData.h"
#include "CmpiString.h"
#include "CmpiArray.h"
#include <string>

namespace genProvider {
	
  //*********************************************************
  //Linux_SambaServiceConfigurationInstanceName
  //*********************************************************
  
  //empty constructor
  Linux_SambaServiceConfigurationInstanceName::
   Linux_SambaServiceConfigurationInstanceName(){
   	init();  	
  };
  
  
  //copy constructor	
  Linux_SambaServiceConfigurationInstanceName::
   Linux_SambaServiceConfigurationInstanceName
   (const Linux_SambaServiceConfigurationInstanceName& original){
   	init(original);  	
  };
  
  
  //contructor using CmpiObjectPath
  Linux_SambaServiceConfigurationInstanceName::
   Linux_SambaServiceConfigurationInstanceName (const CmpiObjectPath& path){
    
    init();
    
    m_CIMClassNameP=path.getClassName().charPtr();
    
    CmpiString namespaceOP;
    namespaceOP=path.getNameSpace();
    setNamespace(namespaceOP.charPtr(),1);
    
    CmpiString Name = path.getKey("Name");
    setName(Name.charPtr());
    
  }
  
  
  //destructor
  Linux_SambaServiceConfigurationInstanceName::
   ~Linux_SambaServiceConfigurationInstanceName(){
   	reset();  	  
  };
  
  
  //copy operator
  Linux_SambaServiceConfigurationInstanceName&
   Linux_SambaServiceConfigurationInstanceName::operator=
   (const Linux_SambaServiceConfigurationInstanceName& original){    
    init(original);
   	return *this;    
  }
  
  
  //returns the related CmpiObjectPath
  CmpiObjectPath Linux_SambaServiceConfigurationInstanceName::
   getObjectPath() const{
   	
   	CmpiObjectPath objectPath(m_namespace, m_CIMClassNameP);

  	objectPath.setKey("Name",CmpiData(m_Name));
  	
  	return objectPath;
  	
  }
  
  
  //adds the related CmpiObjectPath to an existing cmpiInstance
  void Linux_SambaServiceConfigurationInstanceName::fillKeys(CmpiInstance& cmpiInstance) const{
  	

  	if(isSet.Name){
  	  cmpiInstance.setProperty("Name",CmpiData(m_Name));
  	}
  }
  
  
  //NameSpace related methods
  unsigned int Linux_SambaServiceConfigurationInstanceName::
   isNameSpaceSet() const{
  	return isSet.m_namespace;
  }
  
  const char * Linux_SambaServiceConfigurationInstanceName::
   getNamespace() const {
    if(!isSet.m_namespace)
   	  throw CmpiErrorFormater::getErrorException(
   	   CmpiErrorFormater::NOT_SET,
   	   "NameSpace not set in Linux_SambaServiceConfiguration instanceName");
  	return m_namespace;
  }

  void Linux_SambaServiceConfigurationInstanceName::
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
       
  //Name related methods
  unsigned int Linux_SambaServiceConfigurationInstanceName::isNameSet() const{
    return isSet.Name;
  }
  void  Linux_SambaServiceConfigurationInstanceName::
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
  const char* Linux_SambaServiceConfigurationInstanceName::
   getName() const{
    
    if(!isSet.Name)
   	  throw CmpiErrorFormater::getErrorException(
   	   CmpiErrorFormater::NOT_SET,
   	   "Name not set");
   	   	
    return m_Name;
  }

  
  //set isSet variables to FALSE
  void Linux_SambaServiceConfigurationInstanceName::init(){
  	
  	m_CIMClassNameP="Linux_SambaServiceConfiguration";
  	isSet.m_namespace=0;    	
    isSet.Name=0;
  }
  
  
  //copies another instance properties in this
  void Linux_SambaServiceConfigurationInstanceName::init
   (const Linux_SambaServiceConfigurationInstanceName& original){
   	init();
   	   	
    m_CIMClassNameP=original.m_CIMClassNameP;
    if(original.isNameSpaceSet()){
      setNamespace(original.getNamespace(),1);
    }   	
    if(original.isNameSet()){
      const char* NameOriginal=original.getName();
      setName(NameOriginal, 1);
    }    
  }
  
  //reset the instanceName data
  void Linux_SambaServiceConfigurationInstanceName::reset(){   	
  	if (isSet.m_namespace)
  	  delete(m_namespace);

  	if (isSet.Name)
  	  delete(m_Name);  	  
  };
  
  
  
  
  //*********************************************************
  //Linux_SambaServiceConfigurationInstanceNameEnumerationElement	
  //*********************************************************
  
  Linux_SambaServiceConfigurationInstanceNameEnumerationElement::
   Linux_SambaServiceConfigurationInstanceNameEnumerationElement(){
   	
  	m_elementP=0;
  	m_nextP=0;
  	  
  };
  
  
  Linux_SambaServiceConfigurationInstanceNameEnumerationElement::
   ~Linux_SambaServiceConfigurationInstanceNameEnumerationElement(){
   	
  	if (m_elementP!=0)
  	  delete(m_elementP);
  	if (m_nextP!=0)
  	  delete(m_nextP);
  	  
  };

  
  //*********************************************************
  //Linux_SambaServiceConfigurationInstanceNameEnumeration
  //*********************************************************
  
  Linux_SambaServiceConfigurationInstanceNameEnumeration::
   Linux_SambaServiceConfigurationInstanceNameEnumeration(){
   	
  	 firstElementP=0;
     currentElementP=0;
     endElementP=0;
  };
  
  Linux_SambaServiceConfigurationInstanceNameEnumeration::
   Linux_SambaServiceConfigurationInstanceNameEnumeration(const CmpiArray& arr){
  	
  	firstElementP=0;
    currentElementP=0;
    endElementP=0;
    
    int size = arr.size();
    for (int i=0; i < size; i++) {
     addElement(Linux_SambaServiceConfigurationInstanceName(arr[i]));
    }
  }
  
  Linux_SambaServiceConfigurationInstanceNameEnumeration::
   Linux_SambaServiceConfigurationInstanceNameEnumeration(
   const Linux_SambaServiceConfigurationInstanceNameEnumeration& original){
   	
     firstElementP=0;
     currentElementP=0;
     endElementP=0;
  	 
     int size=original.getSize();
     for(int i=0;i<size;i++)
       addElement(original.getElement(i));           
  };
  
  	  
  Linux_SambaServiceConfigurationInstanceNameEnumeration::
   ~Linux_SambaServiceConfigurationInstanceNameEnumeration(){
   	
  	if (firstElementP!=0)
  	  delete(firstElementP);
  	  	
  };
  
  	  
  void Linux_SambaServiceConfigurationInstanceNameEnumeration::reset(){
  	
  	currentElementP=firstElementP;
  };
  
  	  
  bool Linux_SambaServiceConfigurationInstanceNameEnumeration::hasNext() const{
  	
  	return (currentElementP!=0);
  
  };
  
  int Linux_SambaServiceConfigurationInstanceNameEnumeration::getSize() const{
  	
    int size=0;
    Linux_SambaServiceConfigurationInstanceNameEnumerationElement* followingP=firstElementP;
  	
  	while(followingP!=0){
        followingP=followingP->m_nextP;
        size++;
    }
  	
    return size;
  };
  
  const Linux_SambaServiceConfigurationInstanceName&  
   Linux_SambaServiceConfigurationInstanceNameEnumeration::getElement(int pos) const{
   
    Linux_SambaServiceConfigurationInstanceNameEnumerationElement* followingP=firstElementP;
   
    int i=0;
    while((followingP!=0)&&(i<pos)){
        followingP=followingP->m_nextP;
        i++;
    }
    
    return *(followingP->m_elementP);
  };
  
  	  
  const Linux_SambaServiceConfigurationInstanceName&
   Linux_SambaServiceConfigurationInstanceNameEnumeration::getNext() {
   	
  	 Linux_SambaServiceConfigurationInstanceNameEnumerationElement* currentP=
  	  currentElementP;
  	 currentElementP=currentElementP->m_nextP;
  	 
  	 return *(currentP->m_elementP);
  };
  	  
  void Linux_SambaServiceConfigurationInstanceNameEnumeration::addElement
   (const Linux_SambaServiceConfigurationInstanceName& elementP){
   	
  	if(firstElementP==0){
  	  firstElementP=new Linux_SambaServiceConfigurationInstanceNameEnumerationElement();
  	  firstElementP->m_elementP=new Linux_SambaServiceConfigurationInstanceName(elementP);
  	  endElementP=firstElementP;
  	  currentElementP=firstElementP;
  	}else{
  	  endElementP->m_nextP=new Linux_SambaServiceConfigurationInstanceNameEnumerationElement();
  	  endElementP=endElementP->m_nextP;
  	  endElementP->m_elementP=new Linux_SambaServiceConfigurationInstanceName(elementP);
  	}
  };
  
  Linux_SambaServiceConfigurationInstanceNameEnumeration::operator CmpiArray() const{
  	int size=getSize();
   	CmpiArray arr=CmpiArray(size,CMPI_instance);
   	for(int i=0;i<size;i++){
   	  arr[i]=getElement(i).getObjectPath();
   	}
   	return arr;
  };  
}
 
