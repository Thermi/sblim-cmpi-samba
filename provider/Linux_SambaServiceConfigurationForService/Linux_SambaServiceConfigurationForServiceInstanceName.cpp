/**
 *  Linux_SambaServiceConfigurationForServiceInstanceName.cpp
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


#include "Linux_SambaServiceConfigurationForServiceInstanceName.h"
#include "CmpiData.h"
#include "CmpiString.h"
#include "CmpiArray.h"
#include <string>

namespace genProvider {
	
  //*********************************************************
  //Linux_SambaServiceConfigurationForServiceInstanceName
  //*********************************************************
  
  //empty constructor
  Linux_SambaServiceConfigurationForServiceInstanceName::
   Linux_SambaServiceConfigurationForServiceInstanceName(){
   	init();  	
  };
  
  
  //copy constructor	
  Linux_SambaServiceConfigurationForServiceInstanceName::
   Linux_SambaServiceConfigurationForServiceInstanceName
   (const Linux_SambaServiceConfigurationForServiceInstanceName& original){
   	init(original);  	
  };
  
  
  //contructor using CmpiObjectPath
  Linux_SambaServiceConfigurationForServiceInstanceName::
   Linux_SambaServiceConfigurationForServiceInstanceName (const CmpiObjectPath& path){
    
    init();
    
    m_CIMClassNameP=path.getClassName().charPtr();
    
    CmpiString namespaceOP;
    namespaceOP=path.getNameSpace();
    setNamespace(namespaceOP.charPtr(),1);
    
    CmpiObjectPath Configuration = path.getKey("Configuration");
    setConfiguration(Linux_SambaServiceConfigurationInstanceName(Configuration));
    
    CmpiObjectPath Element = path.getKey("Element");
    setElement(Linux_SambaServiceInstanceName(Element));
    
  }
  
  
  //destructor
  Linux_SambaServiceConfigurationForServiceInstanceName::
   ~Linux_SambaServiceConfigurationForServiceInstanceName(){
   	reset();  	  
  };
  
  
  //copy operator
  Linux_SambaServiceConfigurationForServiceInstanceName&
   Linux_SambaServiceConfigurationForServiceInstanceName::operator=
   (const Linux_SambaServiceConfigurationForServiceInstanceName& original){    
    init(original);
   	return *this;    
  }
  
  
  //returns the related CmpiObjectPath
  CmpiObjectPath Linux_SambaServiceConfigurationForServiceInstanceName::
   getObjectPath() const{
   	
   	CmpiObjectPath objectPath(m_namespace, m_CIMClassNameP);

  	objectPath.setKey("Configuration",CmpiData(m_Configuration.getObjectPath()));

  	objectPath.setKey("Element",CmpiData(m_Element.getObjectPath()));
  	
  	return objectPath;
  	
  }
  
  
  //adds the related CmpiObjectPath to an existing cmpiInstance
  void Linux_SambaServiceConfigurationForServiceInstanceName::fillKeys(CmpiInstance& cmpiInstance) const{
  	

  	if(isSet.Configuration){
  	  cmpiInstance.setProperty("Configuration",CmpiData(m_Configuration.getObjectPath()));
  	}

  	if(isSet.Element){
  	  cmpiInstance.setProperty("Element",CmpiData(m_Element.getObjectPath()));
  	}
  }
  
  
  //NameSpace related methods
  unsigned int Linux_SambaServiceConfigurationForServiceInstanceName::
   isNameSpaceSet() const{
  	return isSet.m_namespace;
  }
  
  const char * Linux_SambaServiceConfigurationForServiceInstanceName::
   getNamespace() const {
    if(!isSet.m_namespace)
   	  throw CmpiErrorFormater::getErrorException(
   	   CmpiErrorFormater::NOT_SET,
   	   "NameSpace not set in Linux_SambaServiceConfigurationForService instanceName");
  	return m_namespace;
  }

  void Linux_SambaServiceConfigurationForServiceInstanceName::
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
       
  //Configuration related methods
  unsigned int Linux_SambaServiceConfigurationForServiceInstanceName::isConfigurationSet() const{
    return isSet.Configuration;
  }
  void Linux_SambaServiceConfigurationForServiceInstanceName::
   setConfiguration(const Linux_SambaServiceConfigurationInstanceName& val){
    m_Configuration = val;
    isSet.Configuration=1;
  }       
  const Linux_SambaServiceConfigurationInstanceName& Linux_SambaServiceConfigurationForServiceInstanceName::
   getConfiguration() const{
    
    if(!isSet.Configuration)
   	  throw CmpiErrorFormater::getErrorException(
   	   CmpiErrorFormater::NOT_SET,
   	   "Configuration not set");
   	   	
    return m_Configuration;
  }
       
  //Element related methods
  unsigned int Linux_SambaServiceConfigurationForServiceInstanceName::isElementSet() const{
    return isSet.Element;
  }
  void Linux_SambaServiceConfigurationForServiceInstanceName::
   setElement(const Linux_SambaServiceInstanceName& val){
    m_Element = val;
    isSet.Element=1;
  }       
  const Linux_SambaServiceInstanceName& Linux_SambaServiceConfigurationForServiceInstanceName::
   getElement() const{
    
    if(!isSet.Element)
   	  throw CmpiErrorFormater::getErrorException(
   	   CmpiErrorFormater::NOT_SET,
   	   "Element not set");
   	   	
    return m_Element;
  }

  
  //set isSet variables to FALSE
  void Linux_SambaServiceConfigurationForServiceInstanceName::init(){
  	
  	m_CIMClassNameP="Linux_SambaServiceConfigurationForService";
  	isSet.m_namespace=0;    	
    isSet.Configuration=0;   	
    isSet.Element=0;
  }
  
  
  //copies another instance properties in this
  void Linux_SambaServiceConfigurationForServiceInstanceName::init
   (const Linux_SambaServiceConfigurationForServiceInstanceName& original){
   	init();
   	   	
    m_CIMClassNameP=original.m_CIMClassNameP;
    if(original.isNameSpaceSet()){
      setNamespace(original.getNamespace(),1);
    }   	
    if(original.isConfigurationSet()){
      const Linux_SambaServiceConfigurationInstanceName& ConfigurationOriginal=original.getConfiguration();
      setConfiguration(ConfigurationOriginal);
    }   	
    if(original.isElementSet()){
      const Linux_SambaServiceInstanceName& ElementOriginal=original.getElement();
      setElement(ElementOriginal);
    }    
  }
  
  //reset the instanceName data
  void Linux_SambaServiceConfigurationForServiceInstanceName::reset(){   	
  	if (isSet.m_namespace)
  	  delete(m_namespace);  	  
  };
  
  
  
  
  //*********************************************************
  //Linux_SambaServiceConfigurationForServiceInstanceNameEnumerationElement	
  //*********************************************************
  
  Linux_SambaServiceConfigurationForServiceInstanceNameEnumerationElement::
   Linux_SambaServiceConfigurationForServiceInstanceNameEnumerationElement(){
   	
  	m_elementP=0;
  	m_nextP=0;
  	  
  };
  
  
  Linux_SambaServiceConfigurationForServiceInstanceNameEnumerationElement::
   ~Linux_SambaServiceConfigurationForServiceInstanceNameEnumerationElement(){
   	
  	if (m_elementP!=0)
  	  delete(m_elementP);
  	if (m_nextP!=0)
  	  delete(m_nextP);
  	  
  };

  
  //*********************************************************
  //Linux_SambaServiceConfigurationForServiceInstanceNameEnumeration
  //*********************************************************
  
  Linux_SambaServiceConfigurationForServiceInstanceNameEnumeration::
   Linux_SambaServiceConfigurationForServiceInstanceNameEnumeration(){
   	
  	 firstElementP=0;
     currentElementP=0;
     endElementP=0;
  };
  
  Linux_SambaServiceConfigurationForServiceInstanceNameEnumeration::
   Linux_SambaServiceConfigurationForServiceInstanceNameEnumeration(const CmpiArray& arr){
  	
  	firstElementP=0;
    currentElementP=0;
    endElementP=0;
    
    int size = arr.size();
    for (int i=0; i < size; i++) {
     addElement(Linux_SambaServiceConfigurationForServiceInstanceName(arr[i]));
    }
  }
  
  Linux_SambaServiceConfigurationForServiceInstanceNameEnumeration::
   Linux_SambaServiceConfigurationForServiceInstanceNameEnumeration(
   const Linux_SambaServiceConfigurationForServiceInstanceNameEnumeration& original){
   	
     firstElementP=0;
     currentElementP=0;
     endElementP=0;
  	 
     int size=original.getSize();
     for(int i=0;i<size;i++)
       addElement(original.getElement(i));           
  };
  
  	  
  Linux_SambaServiceConfigurationForServiceInstanceNameEnumeration::
   ~Linux_SambaServiceConfigurationForServiceInstanceNameEnumeration(){
   	
  	if (firstElementP!=0)
  	  delete(firstElementP);
  	  	
  };
  
  	  
  void Linux_SambaServiceConfigurationForServiceInstanceNameEnumeration::reset(){
  	
  	currentElementP=firstElementP;
  };
  
  	  
  bool Linux_SambaServiceConfigurationForServiceInstanceNameEnumeration::hasNext() const{
  	
  	return (currentElementP!=0);
  
  };
  
  int Linux_SambaServiceConfigurationForServiceInstanceNameEnumeration::getSize() const{
  	
    int size=0;
    Linux_SambaServiceConfigurationForServiceInstanceNameEnumerationElement* followingP=firstElementP;
  	
  	while(followingP!=0){
        followingP=followingP->m_nextP;
        size++;
    }
  	
    return size;
  };
  
  const Linux_SambaServiceConfigurationForServiceInstanceName&  
   Linux_SambaServiceConfigurationForServiceInstanceNameEnumeration::getElement(int pos) const{
   
    Linux_SambaServiceConfigurationForServiceInstanceNameEnumerationElement* followingP=firstElementP;
   
    int i=0;
    while((followingP!=0)&&(i<pos)){
        followingP=followingP->m_nextP;
        i++;
    }
    
    return *(followingP->m_elementP);
  };
  
  	  
  const Linux_SambaServiceConfigurationForServiceInstanceName&
   Linux_SambaServiceConfigurationForServiceInstanceNameEnumeration::getNext() {
   	
  	 Linux_SambaServiceConfigurationForServiceInstanceNameEnumerationElement* currentP=
  	  currentElementP;
  	 currentElementP=currentElementP->m_nextP;
  	 
  	 return *(currentP->m_elementP);
  };
  	  
  void Linux_SambaServiceConfigurationForServiceInstanceNameEnumeration::addElement
   (const Linux_SambaServiceConfigurationForServiceInstanceName& elementP){
   	
  	if(firstElementP==0){
  	  firstElementP=new Linux_SambaServiceConfigurationForServiceInstanceNameEnumerationElement();
  	  firstElementP->m_elementP=new Linux_SambaServiceConfigurationForServiceInstanceName(elementP);
  	  endElementP=firstElementP;
  	  currentElementP=firstElementP;
  	}else{
  	  endElementP->m_nextP=new Linux_SambaServiceConfigurationForServiceInstanceNameEnumerationElement();
  	  endElementP=endElementP->m_nextP;
  	  endElementP->m_elementP=new Linux_SambaServiceConfigurationForServiceInstanceName(elementP);
  	}
  };
  
  Linux_SambaServiceConfigurationForServiceInstanceNameEnumeration::operator CmpiArray() const{
  	int size=getSize();
   	CmpiArray arr=CmpiArray(size,CMPI_instance);
   	for(int i=0;i<size;i++){
   	  arr[i]=getElement(i).getObjectPath();
   	}
   	return arr;
  };  
}
 
