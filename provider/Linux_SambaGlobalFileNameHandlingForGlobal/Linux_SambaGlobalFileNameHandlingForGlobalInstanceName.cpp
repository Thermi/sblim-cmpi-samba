/**
 *  Linux_SambaGlobalFileNameHandlingForGlobalInstanceName.cpp
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


#include "Linux_SambaGlobalFileNameHandlingForGlobalInstanceName.h"
#include "CmpiData.h"
#include "CmpiString.h"
#include "CmpiArray.h"
#include <string>

namespace genProvider {
	
  //*********************************************************
  //Linux_SambaGlobalFileNameHandlingForGlobalInstanceName
  //*********************************************************
  
  //empty constructor
  Linux_SambaGlobalFileNameHandlingForGlobalInstanceName::
   Linux_SambaGlobalFileNameHandlingForGlobalInstanceName(){
   	init();  	
  };
  
  
  //copy constructor	
  Linux_SambaGlobalFileNameHandlingForGlobalInstanceName::
   Linux_SambaGlobalFileNameHandlingForGlobalInstanceName
   (const Linux_SambaGlobalFileNameHandlingForGlobalInstanceName& original){
   	init(original);  	
  };
  
  
  //contructor using CmpiObjectPath
  Linux_SambaGlobalFileNameHandlingForGlobalInstanceName::
   Linux_SambaGlobalFileNameHandlingForGlobalInstanceName (const CmpiObjectPath& path){
    
    init();
    
    m_CIMClassNameP=path.getClassName().charPtr();
    
    CmpiString namespaceOP;
    namespaceOP=path.getNameSpace();
    setNamespace(namespaceOP.charPtr(),1);
    
    CmpiObjectPath ManagedElement = path.getKey("ManagedElement");
    setManagedElement(Linux_SambaGlobalOptionsInstanceName(ManagedElement));
    
    CmpiObjectPath SettingData = path.getKey("SettingData");
    setSettingData(Linux_SambaGlobalFileNameHandlingOptionsInstanceName(SettingData));
    
  }
  
  
  //destructor
  Linux_SambaGlobalFileNameHandlingForGlobalInstanceName::
   ~Linux_SambaGlobalFileNameHandlingForGlobalInstanceName(){
   	reset();  	  
  };
  
  
  //copy operator
  Linux_SambaGlobalFileNameHandlingForGlobalInstanceName&
   Linux_SambaGlobalFileNameHandlingForGlobalInstanceName::operator=
   (const Linux_SambaGlobalFileNameHandlingForGlobalInstanceName& original){    
    init(original);
   	return *this;    
  }
  
  
  //returns the related CmpiObjectPath
  CmpiObjectPath Linux_SambaGlobalFileNameHandlingForGlobalInstanceName::
   getObjectPath() const{
   	
   	CmpiObjectPath objectPath(m_namespace, m_CIMClassNameP);

  	objectPath.setKey("ManagedElement",CmpiData(m_ManagedElement.getObjectPath()));

  	objectPath.setKey("SettingData",CmpiData(m_SettingData.getObjectPath()));
  	
  	return objectPath;
  	
  }
  
  
  //adds the related CmpiObjectPath to an existing cmpiInstance
  void Linux_SambaGlobalFileNameHandlingForGlobalInstanceName::fillKeys(CmpiInstance& cmpiInstance) const{
  	

  	if(isSet.ManagedElement){
  	  cmpiInstance.setProperty("ManagedElement",CmpiData(m_ManagedElement.getObjectPath()));
  	}

  	if(isSet.SettingData){
  	  cmpiInstance.setProperty("SettingData",CmpiData(m_SettingData.getObjectPath()));
  	}
  }
  
  
  //NameSpace related methods
  unsigned int Linux_SambaGlobalFileNameHandlingForGlobalInstanceName::
   isNameSpaceSet() const{
  	return isSet.m_namespace;
  }
  
  const char * Linux_SambaGlobalFileNameHandlingForGlobalInstanceName::
   getNamespace() const {
    if(!isSet.m_namespace)
   	  throw CmpiErrorFormater::getErrorException(
   	   CmpiErrorFormater::NOT_SET,
   	   "NameSpace not set in Linux_SambaGlobalFileNameHandlingForGlobal instanceName");
  	return m_namespace;
  }

  void Linux_SambaGlobalFileNameHandlingForGlobalInstanceName::
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
       
  //ManagedElement related methods
  unsigned int Linux_SambaGlobalFileNameHandlingForGlobalInstanceName::isManagedElementSet() const{
    return isSet.ManagedElement;
  }
  void Linux_SambaGlobalFileNameHandlingForGlobalInstanceName::
   setManagedElement(const Linux_SambaGlobalOptionsInstanceName& val){
    m_ManagedElement = val;
    isSet.ManagedElement=1;
  }       
  const Linux_SambaGlobalOptionsInstanceName& Linux_SambaGlobalFileNameHandlingForGlobalInstanceName::
   getManagedElement() const{
    
    if(!isSet.ManagedElement)
   	  throw CmpiErrorFormater::getErrorException(
   	   CmpiErrorFormater::NOT_SET,
   	   "ManagedElement not set");
   	   	
    return m_ManagedElement;
  }
       
  //SettingData related methods
  unsigned int Linux_SambaGlobalFileNameHandlingForGlobalInstanceName::isSettingDataSet() const{
    return isSet.SettingData;
  }
  void Linux_SambaGlobalFileNameHandlingForGlobalInstanceName::
   setSettingData(const Linux_SambaGlobalFileNameHandlingOptionsInstanceName& val){
    m_SettingData = val;
    isSet.SettingData=1;
  }       
  const Linux_SambaGlobalFileNameHandlingOptionsInstanceName& Linux_SambaGlobalFileNameHandlingForGlobalInstanceName::
   getSettingData() const{
    
    if(!isSet.SettingData)
   	  throw CmpiErrorFormater::getErrorException(
   	   CmpiErrorFormater::NOT_SET,
   	   "SettingData not set");
   	   	
    return m_SettingData;
  }

  
  //set isSet variables to FALSE
  void Linux_SambaGlobalFileNameHandlingForGlobalInstanceName::init(){
  	
  	m_CIMClassNameP="Linux_SambaGlobalFileNameHandlingForGlobal";
  	isSet.m_namespace=0;    	
    isSet.ManagedElement=0;   	
    isSet.SettingData=0;
  }
  
  
  //copies another instance properties in this
  void Linux_SambaGlobalFileNameHandlingForGlobalInstanceName::init
   (const Linux_SambaGlobalFileNameHandlingForGlobalInstanceName& original){
   	init();
   	   	
    m_CIMClassNameP=original.m_CIMClassNameP;
    if(original.isNameSpaceSet()){
      setNamespace(original.getNamespace(),1);
    }   	
    if(original.isManagedElementSet()){
      const Linux_SambaGlobalOptionsInstanceName& ManagedElementOriginal=original.getManagedElement();
      setManagedElement(ManagedElementOriginal);
    }   	
    if(original.isSettingDataSet()){
      const Linux_SambaGlobalFileNameHandlingOptionsInstanceName& SettingDataOriginal=original.getSettingData();
      setSettingData(SettingDataOriginal);
    }    
  }
  
  //reset the instanceName data
  void Linux_SambaGlobalFileNameHandlingForGlobalInstanceName::reset(){   	
  	if (isSet.m_namespace)
  	  delete(m_namespace);  	  
  };
  
  
  
  
  //*********************************************************
  //Linux_SambaGlobalFileNameHandlingForGlobalInstanceNameEnumerationElement	
  //*********************************************************
  
  Linux_SambaGlobalFileNameHandlingForGlobalInstanceNameEnumerationElement::
   Linux_SambaGlobalFileNameHandlingForGlobalInstanceNameEnumerationElement(){
   	
  	m_elementP=0;
  	m_nextP=0;
  	  
  };
  
  
  Linux_SambaGlobalFileNameHandlingForGlobalInstanceNameEnumerationElement::
   ~Linux_SambaGlobalFileNameHandlingForGlobalInstanceNameEnumerationElement(){
   	
  	if (m_elementP!=0)
  	  delete(m_elementP);
  	if (m_nextP!=0)
  	  delete(m_nextP);
  	  
  };

  
  //*********************************************************
  //Linux_SambaGlobalFileNameHandlingForGlobalInstanceNameEnumeration
  //*********************************************************
  
  Linux_SambaGlobalFileNameHandlingForGlobalInstanceNameEnumeration::
   Linux_SambaGlobalFileNameHandlingForGlobalInstanceNameEnumeration(){
   	
  	 firstElementP=0;
     currentElementP=0;
     endElementP=0;
  };
  
  Linux_SambaGlobalFileNameHandlingForGlobalInstanceNameEnumeration::
   Linux_SambaGlobalFileNameHandlingForGlobalInstanceNameEnumeration(const CmpiArray& arr){
  	
  	firstElementP=0;
    currentElementP=0;
    endElementP=0;
    
    int size = arr.size();
    for (int i=0; i < size; i++) {
     addElement(Linux_SambaGlobalFileNameHandlingForGlobalInstanceName(arr[i]));
    }
  }
  
  Linux_SambaGlobalFileNameHandlingForGlobalInstanceNameEnumeration::
   Linux_SambaGlobalFileNameHandlingForGlobalInstanceNameEnumeration(
   const Linux_SambaGlobalFileNameHandlingForGlobalInstanceNameEnumeration& original){
   	
     firstElementP=0;
     currentElementP=0;
     endElementP=0;
  	 
     int size=original.getSize();
     for(int i=0;i<size;i++)
       addElement(original.getElement(i));           
  };
  
  	  
  Linux_SambaGlobalFileNameHandlingForGlobalInstanceNameEnumeration::
   ~Linux_SambaGlobalFileNameHandlingForGlobalInstanceNameEnumeration(){
   	
  	if (firstElementP!=0)
  	  delete(firstElementP);
  	  	
  };
  
  	  
  void Linux_SambaGlobalFileNameHandlingForGlobalInstanceNameEnumeration::reset(){
  	
  	currentElementP=firstElementP;
  };
  
  	  
  bool Linux_SambaGlobalFileNameHandlingForGlobalInstanceNameEnumeration::hasNext() const{
  	
  	return (currentElementP!=0);
  
  };
  
  int Linux_SambaGlobalFileNameHandlingForGlobalInstanceNameEnumeration::getSize() const{
  	
    int size=0;
    Linux_SambaGlobalFileNameHandlingForGlobalInstanceNameEnumerationElement* followingP=firstElementP;
  	
  	while(followingP!=0){
        followingP=followingP->m_nextP;
        size++;
    }
  	
    return size;
  };
  
  const Linux_SambaGlobalFileNameHandlingForGlobalInstanceName&  
   Linux_SambaGlobalFileNameHandlingForGlobalInstanceNameEnumeration::getElement(int pos) const{
   
    Linux_SambaGlobalFileNameHandlingForGlobalInstanceNameEnumerationElement* followingP=firstElementP;
   
    int i=0;
    while((followingP!=0)&&(i<pos)){
        followingP=followingP->m_nextP;
        i++;
    }
    
    return *(followingP->m_elementP);
  };
  
  	  
  const Linux_SambaGlobalFileNameHandlingForGlobalInstanceName&
   Linux_SambaGlobalFileNameHandlingForGlobalInstanceNameEnumeration::getNext() {
   	
  	 Linux_SambaGlobalFileNameHandlingForGlobalInstanceNameEnumerationElement* currentP=
  	  currentElementP;
  	 currentElementP=currentElementP->m_nextP;
  	 
  	 return *(currentP->m_elementP);
  };
  	  
  void Linux_SambaGlobalFileNameHandlingForGlobalInstanceNameEnumeration::addElement
   (const Linux_SambaGlobalFileNameHandlingForGlobalInstanceName& elementP){
   	
  	if(firstElementP==0){
  	  firstElementP=new Linux_SambaGlobalFileNameHandlingForGlobalInstanceNameEnumerationElement();
  	  firstElementP->m_elementP=new Linux_SambaGlobalFileNameHandlingForGlobalInstanceName(elementP);
  	  endElementP=firstElementP;
  	  currentElementP=firstElementP;
  	}else{
  	  endElementP->m_nextP=new Linux_SambaGlobalFileNameHandlingForGlobalInstanceNameEnumerationElement();
  	  endElementP=endElementP->m_nextP;
  	  endElementP->m_elementP=new Linux_SambaGlobalFileNameHandlingForGlobalInstanceName(elementP);
  	}
  };
  
  Linux_SambaGlobalFileNameHandlingForGlobalInstanceNameEnumeration::operator CmpiArray() const{
  	int size=getSize();
   	CmpiArray arr=CmpiArray(size,CMPI_instance);
   	for(int i=0;i<size;i++){
   	  arr[i]=getElement(i).getObjectPath();
   	}
   	return arr;
  };  
}
 
