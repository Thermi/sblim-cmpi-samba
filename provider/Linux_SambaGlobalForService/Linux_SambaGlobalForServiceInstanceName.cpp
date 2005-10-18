/**
 *  Linux_SambaGlobalForServiceInstanceName.cpp
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


#include "Linux_SambaGlobalForServiceInstanceName.h"
#include "CmpiData.h"
#include "CmpiString.h"
#include "CmpiArray.h"
#include <string>

namespace genProvider {
	
  //*********************************************************
  //Linux_SambaGlobalForServiceInstanceName
  //*********************************************************
  
  //empty constructor
  Linux_SambaGlobalForServiceInstanceName::
   Linux_SambaGlobalForServiceInstanceName(){
   	init();  	
  };
  
  
  //copy constructor	
  Linux_SambaGlobalForServiceInstanceName::
   Linux_SambaGlobalForServiceInstanceName
   (const Linux_SambaGlobalForServiceInstanceName& original){
   	init(original);  	
  };
  
  
  //contructor using CmpiObjectPath
  Linux_SambaGlobalForServiceInstanceName::
   Linux_SambaGlobalForServiceInstanceName (const CmpiObjectPath& path){
    
    init();
    
    m_CIMClassNameP=path.getClassName().charPtr();
    
    CmpiString namespaceOP;
    namespaceOP=path.getNameSpace();
    setNamespace(namespaceOP.charPtr(),1);
    
    CmpiObjectPath SettingData = path.getKey("SettingData");
    setSettingData(Linux_SambaGlobalOptionsInstanceName(SettingData));
    
    CmpiObjectPath ManagedElement = path.getKey("ManagedElement");
    setManagedElement(Linux_SambaServiceInstanceName(ManagedElement));
    
  }
  
  
  //destructor
  Linux_SambaGlobalForServiceInstanceName::
   ~Linux_SambaGlobalForServiceInstanceName(){
   	reset();  	  
  };
  
  
  //copy operator
  Linux_SambaGlobalForServiceInstanceName&
   Linux_SambaGlobalForServiceInstanceName::operator=
   (const Linux_SambaGlobalForServiceInstanceName& original){    
    init(original);
   	return *this;    
  }
  
  
  //returns the related CmpiObjectPath
  CmpiObjectPath Linux_SambaGlobalForServiceInstanceName::
   getObjectPath() const{
   	
   	CmpiObjectPath objectPath(m_namespace, m_CIMClassNameP);

  	objectPath.setKey("SettingData",CmpiData(m_SettingData.getObjectPath()));

  	objectPath.setKey("ManagedElement",CmpiData(m_ManagedElement.getObjectPath()));
  	
  	return objectPath;
  	
  }
  
  
  //adds the related CmpiObjectPath to an existing cmpiInstance
  void Linux_SambaGlobalForServiceInstanceName::fillKeys(CmpiInstance& cmpiInstance) const{
  	

  	if(isSet.SettingData){
  	  cmpiInstance.setProperty("SettingData",CmpiData(m_SettingData.getObjectPath()));
  	}

  	if(isSet.ManagedElement){
  	  cmpiInstance.setProperty("ManagedElement",CmpiData(m_ManagedElement.getObjectPath()));
  	}
  }
  
  
  //NameSpace related methods
  unsigned int Linux_SambaGlobalForServiceInstanceName::
   isNameSpaceSet() const{
  	return isSet.m_namespace;
  }
  
  const char * Linux_SambaGlobalForServiceInstanceName::
   getNamespace() const {
    if(!isSet.m_namespace)
   	  throw CmpiErrorFormater::getErrorException(
   	   CmpiErrorFormater::NOT_SET,
   	   "NameSpace not set in Linux_SambaGlobalForService instanceName");
  	return m_namespace;
  }

  void Linux_SambaGlobalForServiceInstanceName::
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
       
  //SettingData related methods
  unsigned int Linux_SambaGlobalForServiceInstanceName::isSettingDataSet() const{
    return isSet.SettingData;
  }
  void Linux_SambaGlobalForServiceInstanceName::
   setSettingData(const Linux_SambaGlobalOptionsInstanceName& val){
    m_SettingData = val;
    isSet.SettingData=1;
  }       
  const Linux_SambaGlobalOptionsInstanceName& Linux_SambaGlobalForServiceInstanceName::
   getSettingData() const{
    
    if(!isSet.SettingData)
   	  throw CmpiErrorFormater::getErrorException(
   	   CmpiErrorFormater::NOT_SET,
   	   "SettingData not set");
   	   	
    return m_SettingData;
  }
       
  //ManagedElement related methods
  unsigned int Linux_SambaGlobalForServiceInstanceName::isManagedElementSet() const{
    return isSet.ManagedElement;
  }
  void Linux_SambaGlobalForServiceInstanceName::
   setManagedElement(const Linux_SambaServiceInstanceName& val){
    m_ManagedElement = val;
    isSet.ManagedElement=1;
  }       
  const Linux_SambaServiceInstanceName& Linux_SambaGlobalForServiceInstanceName::
   getManagedElement() const{
    
    if(!isSet.ManagedElement)
   	  throw CmpiErrorFormater::getErrorException(
   	   CmpiErrorFormater::NOT_SET,
   	   "ManagedElement not set");
   	   	
    return m_ManagedElement;
  }

  
  //set isSet variables to FALSE
  void Linux_SambaGlobalForServiceInstanceName::init(){
  	
  	m_CIMClassNameP="Linux_SambaGlobalForService";
  	isSet.m_namespace=0;    	
    isSet.SettingData=0;   	
    isSet.ManagedElement=0;
  }
  
  
  //copies another instance properties in this
  void Linux_SambaGlobalForServiceInstanceName::init
   (const Linux_SambaGlobalForServiceInstanceName& original){
   	init();
   	   	
    m_CIMClassNameP=original.m_CIMClassNameP;
    if(original.isNameSpaceSet()){
      setNamespace(original.getNamespace(),1);
    }   	
    if(original.isSettingDataSet()){
      const Linux_SambaGlobalOptionsInstanceName& SettingDataOriginal=original.getSettingData();
      setSettingData(SettingDataOriginal);
    }   	
    if(original.isManagedElementSet()){
      const Linux_SambaServiceInstanceName& ManagedElementOriginal=original.getManagedElement();
      setManagedElement(ManagedElementOriginal);
    }    
  }
  
  //reset the instanceName data
  void Linux_SambaGlobalForServiceInstanceName::reset(){   	
  	if (isSet.m_namespace)
  	  delete(m_namespace);  	  
  };
  
  
  
  
  //*********************************************************
  //Linux_SambaGlobalForServiceInstanceNameEnumerationElement	
  //*********************************************************
  
  Linux_SambaGlobalForServiceInstanceNameEnumerationElement::
   Linux_SambaGlobalForServiceInstanceNameEnumerationElement(){
   	
  	m_elementP=0;
  	m_nextP=0;
  	  
  };
  
  
  Linux_SambaGlobalForServiceInstanceNameEnumerationElement::
   ~Linux_SambaGlobalForServiceInstanceNameEnumerationElement(){
   	
  	if (m_elementP!=0)
  	  delete(m_elementP);
  	if (m_nextP!=0)
  	  delete(m_nextP);
  	  
  };

  
  //*********************************************************
  //Linux_SambaGlobalForServiceInstanceNameEnumeration
  //*********************************************************
  
  Linux_SambaGlobalForServiceInstanceNameEnumeration::
   Linux_SambaGlobalForServiceInstanceNameEnumeration(){
   	
  	 firstElementP=0;
     currentElementP=0;
     endElementP=0;
  };
  
  Linux_SambaGlobalForServiceInstanceNameEnumeration::
   Linux_SambaGlobalForServiceInstanceNameEnumeration(const CmpiArray& arr){
  	
  	firstElementP=0;
    currentElementP=0;
    endElementP=0;
    
    int size = arr.size();
    for (int i=0; i < size; i++) {
     addElement(Linux_SambaGlobalForServiceInstanceName(arr[i]));
    }
  }
  
  Linux_SambaGlobalForServiceInstanceNameEnumeration::
   Linux_SambaGlobalForServiceInstanceNameEnumeration(
   const Linux_SambaGlobalForServiceInstanceNameEnumeration& original){
   	
     firstElementP=0;
     currentElementP=0;
     endElementP=0;
  	 
     int size=original.getSize();
     for(int i=0;i<size;i++)
       addElement(original.getElement(i));           
  };
  
  	  
  Linux_SambaGlobalForServiceInstanceNameEnumeration::
   ~Linux_SambaGlobalForServiceInstanceNameEnumeration(){
   	
  	if (firstElementP!=0)
  	  delete(firstElementP);
  	  	
  };
  
  	  
  void Linux_SambaGlobalForServiceInstanceNameEnumeration::reset(){
  	
  	currentElementP=firstElementP;
  };
  
  	  
  bool Linux_SambaGlobalForServiceInstanceNameEnumeration::hasNext() const{
  	
  	return (currentElementP!=0);
  
  };
  
  int Linux_SambaGlobalForServiceInstanceNameEnumeration::getSize() const{
  	
    int size=0;
    Linux_SambaGlobalForServiceInstanceNameEnumerationElement* followingP=firstElementP;
  	
  	while(followingP!=0){
        followingP=followingP->m_nextP;
        size++;
    }
  	
    return size;
  };
  
  const Linux_SambaGlobalForServiceInstanceName&  
   Linux_SambaGlobalForServiceInstanceNameEnumeration::getElement(int pos) const{
   
    Linux_SambaGlobalForServiceInstanceNameEnumerationElement* followingP=firstElementP;
   
    int i=0;
    while((followingP!=0)&&(i<pos)){
        followingP=followingP->m_nextP;
        i++;
    }
    
    return *(followingP->m_elementP);
  };
  
  	  
  const Linux_SambaGlobalForServiceInstanceName&
   Linux_SambaGlobalForServiceInstanceNameEnumeration::getNext() {
   	
  	 Linux_SambaGlobalForServiceInstanceNameEnumerationElement* currentP=
  	  currentElementP;
  	 currentElementP=currentElementP->m_nextP;
  	 
  	 return *(currentP->m_elementP);
  };
  	  
  void Linux_SambaGlobalForServiceInstanceNameEnumeration::addElement
   (const Linux_SambaGlobalForServiceInstanceName& elementP){
   	
  	if(firstElementP==0){
  	  firstElementP=new Linux_SambaGlobalForServiceInstanceNameEnumerationElement();
  	  firstElementP->m_elementP=new Linux_SambaGlobalForServiceInstanceName(elementP);
  	  endElementP=firstElementP;
  	  currentElementP=firstElementP;
  	}else{
  	  endElementP->m_nextP=new Linux_SambaGlobalForServiceInstanceNameEnumerationElement();
  	  endElementP=endElementP->m_nextP;
  	  endElementP->m_elementP=new Linux_SambaGlobalForServiceInstanceName(elementP);
  	}
  };
  
  Linux_SambaGlobalForServiceInstanceNameEnumeration::operator CmpiArray() const{
  	int size=getSize();
   	CmpiArray arr=CmpiArray(size,CMPI_instance);
   	for(int i=0;i<size;i++){
   	  arr[i]=getElement(i).getObjectPath();
   	}
   	return arr;
  };  
}
 
