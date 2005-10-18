/**
 *  Linux_SambaScriptingForGlobalInstanceName.cpp
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


#include "Linux_SambaScriptingForGlobalInstanceName.h"
#include "CmpiData.h"
#include "CmpiString.h"
#include "CmpiArray.h"
#include <string>

namespace genProvider {
	
  //*********************************************************
  //Linux_SambaScriptingForGlobalInstanceName
  //*********************************************************
  
  //empty constructor
  Linux_SambaScriptingForGlobalInstanceName::
   Linux_SambaScriptingForGlobalInstanceName(){
   	init();  	
  };
  
  
  //copy constructor	
  Linux_SambaScriptingForGlobalInstanceName::
   Linux_SambaScriptingForGlobalInstanceName
   (const Linux_SambaScriptingForGlobalInstanceName& original){
   	init(original);  	
  };
  
  
  //contructor using CmpiObjectPath
  Linux_SambaScriptingForGlobalInstanceName::
   Linux_SambaScriptingForGlobalInstanceName (const CmpiObjectPath& path){
    
    init();
    
    m_CIMClassNameP=path.getClassName().charPtr();
    
    CmpiString namespaceOP;
    namespaceOP=path.getNameSpace();
    setNamespace(namespaceOP.charPtr(),1);
    
    CmpiObjectPath ManagedElement = path.getKey("ManagedElement");
    setManagedElement(Linux_SambaGlobalOptionsInstanceName(ManagedElement));
    
    CmpiObjectPath SettingData = path.getKey("SettingData");
    setSettingData(Linux_SambaScriptingOptionsInstanceName(SettingData));
    
  }
  
  
  //destructor
  Linux_SambaScriptingForGlobalInstanceName::
   ~Linux_SambaScriptingForGlobalInstanceName(){
   	reset();  	  
  };
  
  
  //copy operator
  Linux_SambaScriptingForGlobalInstanceName&
   Linux_SambaScriptingForGlobalInstanceName::operator=
   (const Linux_SambaScriptingForGlobalInstanceName& original){    
    init(original);
   	return *this;    
  }
  
  
  //returns the related CmpiObjectPath
  CmpiObjectPath Linux_SambaScriptingForGlobalInstanceName::
   getObjectPath() const{
   	
   	CmpiObjectPath objectPath(m_namespace, m_CIMClassNameP);

  	objectPath.setKey("ManagedElement",CmpiData(m_ManagedElement.getObjectPath()));

  	objectPath.setKey("SettingData",CmpiData(m_SettingData.getObjectPath()));
  	
  	return objectPath;
  	
  }
  
  
  //adds the related CmpiObjectPath to an existing cmpiInstance
  void Linux_SambaScriptingForGlobalInstanceName::fillKeys(CmpiInstance& cmpiInstance) const{
  	

  	if(isSet.ManagedElement){
  	  cmpiInstance.setProperty("ManagedElement",CmpiData(m_ManagedElement.getObjectPath()));
  	}

  	if(isSet.SettingData){
  	  cmpiInstance.setProperty("SettingData",CmpiData(m_SettingData.getObjectPath()));
  	}
  }
  
  
  //NameSpace related methods
  unsigned int Linux_SambaScriptingForGlobalInstanceName::
   isNameSpaceSet() const{
  	return isSet.m_namespace;
  }
  
  const char * Linux_SambaScriptingForGlobalInstanceName::
   getNamespace() const {
    if(!isSet.m_namespace)
   	  throw CmpiErrorFormater::getErrorException(
   	   CmpiErrorFormater::NOT_SET,
   	   "NameSpace not set in Linux_SambaScriptingForGlobal instanceName");
  	return m_namespace;
  }

  void Linux_SambaScriptingForGlobalInstanceName::
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
  unsigned int Linux_SambaScriptingForGlobalInstanceName::isManagedElementSet() const{
    return isSet.ManagedElement;
  }
  void Linux_SambaScriptingForGlobalInstanceName::
   setManagedElement(const Linux_SambaGlobalOptionsInstanceName& val){
    m_ManagedElement = val;
    isSet.ManagedElement=1;
  }       
  const Linux_SambaGlobalOptionsInstanceName& Linux_SambaScriptingForGlobalInstanceName::
   getManagedElement() const{
    
    if(!isSet.ManagedElement)
   	  throw CmpiErrorFormater::getErrorException(
   	   CmpiErrorFormater::NOT_SET,
   	   "ManagedElement not set");
   	   	
    return m_ManagedElement;
  }
       
  //SettingData related methods
  unsigned int Linux_SambaScriptingForGlobalInstanceName::isSettingDataSet() const{
    return isSet.SettingData;
  }
  void Linux_SambaScriptingForGlobalInstanceName::
   setSettingData(const Linux_SambaScriptingOptionsInstanceName& val){
    m_SettingData = val;
    isSet.SettingData=1;
  }       
  const Linux_SambaScriptingOptionsInstanceName& Linux_SambaScriptingForGlobalInstanceName::
   getSettingData() const{
    
    if(!isSet.SettingData)
   	  throw CmpiErrorFormater::getErrorException(
   	   CmpiErrorFormater::NOT_SET,
   	   "SettingData not set");
   	   	
    return m_SettingData;
  }

  
  //set isSet variables to FALSE
  void Linux_SambaScriptingForGlobalInstanceName::init(){
  	
  	m_CIMClassNameP="Linux_SambaScriptingForGlobal";
  	isSet.m_namespace=0;    	
    isSet.ManagedElement=0;   	
    isSet.SettingData=0;
  }
  
  
  //copies another instance properties in this
  void Linux_SambaScriptingForGlobalInstanceName::init
   (const Linux_SambaScriptingForGlobalInstanceName& original){
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
      const Linux_SambaScriptingOptionsInstanceName& SettingDataOriginal=original.getSettingData();
      setSettingData(SettingDataOriginal);
    }    
  }
  
  //reset the instanceName data
  void Linux_SambaScriptingForGlobalInstanceName::reset(){   	
  	if (isSet.m_namespace)
  	  delete(m_namespace);  	  
  };
  
  
  
  
  //*********************************************************
  //Linux_SambaScriptingForGlobalInstanceNameEnumerationElement	
  //*********************************************************
  
  Linux_SambaScriptingForGlobalInstanceNameEnumerationElement::
   Linux_SambaScriptingForGlobalInstanceNameEnumerationElement(){
   	
  	m_elementP=0;
  	m_nextP=0;
  	  
  };
  
  
  Linux_SambaScriptingForGlobalInstanceNameEnumerationElement::
   ~Linux_SambaScriptingForGlobalInstanceNameEnumerationElement(){
   	
  	if (m_elementP!=0)
  	  delete(m_elementP);
  	if (m_nextP!=0)
  	  delete(m_nextP);
  	  
  };

  
  //*********************************************************
  //Linux_SambaScriptingForGlobalInstanceNameEnumeration
  //*********************************************************
  
  Linux_SambaScriptingForGlobalInstanceNameEnumeration::
   Linux_SambaScriptingForGlobalInstanceNameEnumeration(){
   	
  	 firstElementP=0;
     currentElementP=0;
     endElementP=0;
  };
  
  Linux_SambaScriptingForGlobalInstanceNameEnumeration::
   Linux_SambaScriptingForGlobalInstanceNameEnumeration(const CmpiArray& arr){
  	
  	firstElementP=0;
    currentElementP=0;
    endElementP=0;
    
    int size = arr.size();
    for (int i=0; i < size; i++) {
     addElement(Linux_SambaScriptingForGlobalInstanceName(arr[i]));
    }
  }
  
  Linux_SambaScriptingForGlobalInstanceNameEnumeration::
   Linux_SambaScriptingForGlobalInstanceNameEnumeration(
   const Linux_SambaScriptingForGlobalInstanceNameEnumeration& original){
   	
     firstElementP=0;
     currentElementP=0;
     endElementP=0;
  	 
     int size=original.getSize();
     for(int i=0;i<size;i++)
       addElement(original.getElement(i));           
  };
  
  	  
  Linux_SambaScriptingForGlobalInstanceNameEnumeration::
   ~Linux_SambaScriptingForGlobalInstanceNameEnumeration(){
   	
  	if (firstElementP!=0)
  	  delete(firstElementP);
  	  	
  };
  
  	  
  void Linux_SambaScriptingForGlobalInstanceNameEnumeration::reset(){
  	
  	currentElementP=firstElementP;
  };
  
  	  
  bool Linux_SambaScriptingForGlobalInstanceNameEnumeration::hasNext() const{
  	
  	return (currentElementP!=0);
  
  };
  
  int Linux_SambaScriptingForGlobalInstanceNameEnumeration::getSize() const{
  	
    int size=0;
    Linux_SambaScriptingForGlobalInstanceNameEnumerationElement* followingP=firstElementP;
  	
  	while(followingP!=0){
        followingP=followingP->m_nextP;
        size++;
    }
  	
    return size;
  };
  
  const Linux_SambaScriptingForGlobalInstanceName&  
   Linux_SambaScriptingForGlobalInstanceNameEnumeration::getElement(int pos) const{
   
    Linux_SambaScriptingForGlobalInstanceNameEnumerationElement* followingP=firstElementP;
   
    int i=0;
    while((followingP!=0)&&(i<pos)){
        followingP=followingP->m_nextP;
        i++;
    }
    
    return *(followingP->m_elementP);
  };
  
  	  
  const Linux_SambaScriptingForGlobalInstanceName&
   Linux_SambaScriptingForGlobalInstanceNameEnumeration::getNext() {
   	
  	 Linux_SambaScriptingForGlobalInstanceNameEnumerationElement* currentP=
  	  currentElementP;
  	 currentElementP=currentElementP->m_nextP;
  	 
  	 return *(currentP->m_elementP);
  };
  	  
  void Linux_SambaScriptingForGlobalInstanceNameEnumeration::addElement
   (const Linux_SambaScriptingForGlobalInstanceName& elementP){
   	
  	if(firstElementP==0){
  	  firstElementP=new Linux_SambaScriptingForGlobalInstanceNameEnumerationElement();
  	  firstElementP->m_elementP=new Linux_SambaScriptingForGlobalInstanceName(elementP);
  	  endElementP=firstElementP;
  	  currentElementP=firstElementP;
  	}else{
  	  endElementP->m_nextP=new Linux_SambaScriptingForGlobalInstanceNameEnumerationElement();
  	  endElementP=endElementP->m_nextP;
  	  endElementP->m_elementP=new Linux_SambaScriptingForGlobalInstanceName(elementP);
  	}
  };
  
  Linux_SambaScriptingForGlobalInstanceNameEnumeration::operator CmpiArray() const{
  	int size=getSize();
   	CmpiArray arr=CmpiArray(size,CMPI_instance);
   	for(int i=0;i<size;i++){
   	  arr[i]=getElement(i).getObjectPath();
   	}
   	return arr;
  };  
}
 
