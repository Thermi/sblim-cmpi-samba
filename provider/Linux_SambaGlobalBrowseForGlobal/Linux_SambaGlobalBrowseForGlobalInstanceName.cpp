/**
 *  Linux_SambaGlobalBrowseForGlobalInstanceName.cpp
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


#include "Linux_SambaGlobalBrowseForGlobalInstanceName.h"
#include "CmpiData.h"
#include "CmpiString.h"
#include "CmpiArray.h"
#include <string>

namespace genProvider {
	
  //*********************************************************
  //Linux_SambaGlobalBrowseForGlobalInstanceName
  //*********************************************************
  
  //empty constructor
  Linux_SambaGlobalBrowseForGlobalInstanceName::
   Linux_SambaGlobalBrowseForGlobalInstanceName(){
   	init();  	
  };
  
  
  //copy constructor	
  Linux_SambaGlobalBrowseForGlobalInstanceName::
   Linux_SambaGlobalBrowseForGlobalInstanceName
   (const Linux_SambaGlobalBrowseForGlobalInstanceName& original){
   	init(original);  	
  };
  
  
  //contructor using CmpiObjectPath
  Linux_SambaGlobalBrowseForGlobalInstanceName::
   Linux_SambaGlobalBrowseForGlobalInstanceName (const CmpiObjectPath& path){
    
    init();
    
    m_CIMClassNameP=path.getClassName().charPtr();
    
    CmpiString namespaceOP;
    namespaceOP=path.getNameSpace();
    setNamespace(namespaceOP.charPtr(),1);
    
    CmpiObjectPath SettingData = path.getKey("SettingData");
    setSettingData(Linux_SambaGlobalBrowseOptionsInstanceName(SettingData));
    
    CmpiObjectPath ManagedElement = path.getKey("ManagedElement");
    setManagedElement(Linux_SambaGlobalOptionsInstanceName(ManagedElement));
    
  }
  
  
  //destructor
  Linux_SambaGlobalBrowseForGlobalInstanceName::
   ~Linux_SambaGlobalBrowseForGlobalInstanceName(){
   	reset();  	  
  };
  
  
  //copy operator
  Linux_SambaGlobalBrowseForGlobalInstanceName&
   Linux_SambaGlobalBrowseForGlobalInstanceName::operator=
   (const Linux_SambaGlobalBrowseForGlobalInstanceName& original){    
    init(original);
   	return *this;    
  }
  
  
  //returns the related CmpiObjectPath
  CmpiObjectPath Linux_SambaGlobalBrowseForGlobalInstanceName::
   getObjectPath() const{
   	
   	CmpiObjectPath objectPath(m_namespace, m_CIMClassNameP);

  	objectPath.setKey("SettingData",CmpiData(m_SettingData.getObjectPath()));

  	objectPath.setKey("ManagedElement",CmpiData(m_ManagedElement.getObjectPath()));
  	
  	return objectPath;
  	
  }
  
  
  //adds the related CmpiObjectPath to an existing cmpiInstance
  void Linux_SambaGlobalBrowseForGlobalInstanceName::fillKeys(CmpiInstance& cmpiInstance) const{
  	

  	if(isSet.SettingData){
  	  cmpiInstance.setProperty("SettingData",CmpiData(m_SettingData.getObjectPath()));
  	}

  	if(isSet.ManagedElement){
  	  cmpiInstance.setProperty("ManagedElement",CmpiData(m_ManagedElement.getObjectPath()));
  	}
  }
  
  
  //NameSpace related methods
  unsigned int Linux_SambaGlobalBrowseForGlobalInstanceName::
   isNameSpaceSet() const{
  	return isSet.m_namespace;
  }
  
  const char * Linux_SambaGlobalBrowseForGlobalInstanceName::
   getNamespace() const {
    if(!isSet.m_namespace)
   	  throw CmpiErrorFormater::getErrorException(
   	   CmpiErrorFormater::NOT_SET,
   	   "NameSpace not set in Linux_SambaGlobalBrowseForGlobal instanceName");
  	return m_namespace;
  }

  void Linux_SambaGlobalBrowseForGlobalInstanceName::
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
  unsigned int Linux_SambaGlobalBrowseForGlobalInstanceName::isSettingDataSet() const{
    return isSet.SettingData;
  }
  void Linux_SambaGlobalBrowseForGlobalInstanceName::
   setSettingData(const Linux_SambaGlobalBrowseOptionsInstanceName& val){
    m_SettingData = val;
    isSet.SettingData=1;
  }       
  const Linux_SambaGlobalBrowseOptionsInstanceName& Linux_SambaGlobalBrowseForGlobalInstanceName::
   getSettingData() const{
    
    if(!isSet.SettingData)
   	  throw CmpiErrorFormater::getErrorException(
   	   CmpiErrorFormater::NOT_SET,
   	   "SettingData not set");
   	   	
    return m_SettingData;
  }
       
  //ManagedElement related methods
  unsigned int Linux_SambaGlobalBrowseForGlobalInstanceName::isManagedElementSet() const{
    return isSet.ManagedElement;
  }
  void Linux_SambaGlobalBrowseForGlobalInstanceName::
   setManagedElement(const Linux_SambaGlobalOptionsInstanceName& val){
    m_ManagedElement = val;
    isSet.ManagedElement=1;
  }       
  const Linux_SambaGlobalOptionsInstanceName& Linux_SambaGlobalBrowseForGlobalInstanceName::
   getManagedElement() const{
    
    if(!isSet.ManagedElement)
   	  throw CmpiErrorFormater::getErrorException(
   	   CmpiErrorFormater::NOT_SET,
   	   "ManagedElement not set");
   	   	
    return m_ManagedElement;
  }

  
  //set isSet variables to FALSE
  void Linux_SambaGlobalBrowseForGlobalInstanceName::init(){
  	
  	m_CIMClassNameP="Linux_SambaGlobalBrowseForGlobal";
  	isSet.m_namespace=0;    	
    isSet.SettingData=0;   	
    isSet.ManagedElement=0;
  }
  
  
  //copies another instance properties in this
  void Linux_SambaGlobalBrowseForGlobalInstanceName::init
   (const Linux_SambaGlobalBrowseForGlobalInstanceName& original){
   	init();
   	   	
    m_CIMClassNameP=original.m_CIMClassNameP;
    if(original.isNameSpaceSet()){
      setNamespace(original.getNamespace(),1);
    }   	
    if(original.isSettingDataSet()){
      const Linux_SambaGlobalBrowseOptionsInstanceName& SettingDataOriginal=original.getSettingData();
      setSettingData(SettingDataOriginal);
    }   	
    if(original.isManagedElementSet()){
      const Linux_SambaGlobalOptionsInstanceName& ManagedElementOriginal=original.getManagedElement();
      setManagedElement(ManagedElementOriginal);
    }    
  }
  
  //reset the instanceName data
  void Linux_SambaGlobalBrowseForGlobalInstanceName::reset(){   	
  	if (isSet.m_namespace)
  	  delete(m_namespace);  	  
  };
  
  
  
  
  //*********************************************************
  //Linux_SambaGlobalBrowseForGlobalInstanceNameEnumerationElement	
  //*********************************************************
  
  Linux_SambaGlobalBrowseForGlobalInstanceNameEnumerationElement::
   Linux_SambaGlobalBrowseForGlobalInstanceNameEnumerationElement(){
   	
  	m_elementP=0;
  	m_nextP=0;
  	  
  };
  
  
  Linux_SambaGlobalBrowseForGlobalInstanceNameEnumerationElement::
   ~Linux_SambaGlobalBrowseForGlobalInstanceNameEnumerationElement(){
   	
  	if (m_elementP!=0)
  	  delete(m_elementP);
  	if (m_nextP!=0)
  	  delete(m_nextP);
  	  
  };

  
  //*********************************************************
  //Linux_SambaGlobalBrowseForGlobalInstanceNameEnumeration
  //*********************************************************
  
  Linux_SambaGlobalBrowseForGlobalInstanceNameEnumeration::
   Linux_SambaGlobalBrowseForGlobalInstanceNameEnumeration(){
   	
  	 firstElementP=0;
     currentElementP=0;
     endElementP=0;
  };
  
  Linux_SambaGlobalBrowseForGlobalInstanceNameEnumeration::
   Linux_SambaGlobalBrowseForGlobalInstanceNameEnumeration(const CmpiArray& arr){
  	
  	firstElementP=0;
    currentElementP=0;
    endElementP=0;
    
    int size = arr.size();
    for (int i=0; i < size; i++) {
     addElement(Linux_SambaGlobalBrowseForGlobalInstanceName(arr[i]));
    }
  }
  
  Linux_SambaGlobalBrowseForGlobalInstanceNameEnumeration::
   Linux_SambaGlobalBrowseForGlobalInstanceNameEnumeration(
   const Linux_SambaGlobalBrowseForGlobalInstanceNameEnumeration& original){
   	
     firstElementP=0;
     currentElementP=0;
     endElementP=0;
  	 
     int size=original.getSize();
     for(int i=0;i<size;i++)
       addElement(original.getElement(i));           
  };
  
  	  
  Linux_SambaGlobalBrowseForGlobalInstanceNameEnumeration::
   ~Linux_SambaGlobalBrowseForGlobalInstanceNameEnumeration(){
   	
  	if (firstElementP!=0)
  	  delete(firstElementP);
  	  	
  };
  
  	  
  void Linux_SambaGlobalBrowseForGlobalInstanceNameEnumeration::reset(){
  	
  	currentElementP=firstElementP;
  };
  
  	  
  bool Linux_SambaGlobalBrowseForGlobalInstanceNameEnumeration::hasNext() const{
  	
  	return (currentElementP!=0);
  
  };
  
  int Linux_SambaGlobalBrowseForGlobalInstanceNameEnumeration::getSize() const{
  	
    int size=0;
    Linux_SambaGlobalBrowseForGlobalInstanceNameEnumerationElement* followingP=firstElementP;
  	
  	while(followingP!=0){
        followingP=followingP->m_nextP;
        size++;
    }
  	
    return size;
  };
  
  const Linux_SambaGlobalBrowseForGlobalInstanceName&  
   Linux_SambaGlobalBrowseForGlobalInstanceNameEnumeration::getElement(int pos) const{
   
    Linux_SambaGlobalBrowseForGlobalInstanceNameEnumerationElement* followingP=firstElementP;
   
    int i=0;
    while((followingP!=0)&&(i<pos)){
        followingP=followingP->m_nextP;
        i++;
    }
    
    return *(followingP->m_elementP);
  };
  
  	  
  const Linux_SambaGlobalBrowseForGlobalInstanceName&
   Linux_SambaGlobalBrowseForGlobalInstanceNameEnumeration::getNext() {
   	
  	 Linux_SambaGlobalBrowseForGlobalInstanceNameEnumerationElement* currentP=
  	  currentElementP;
  	 currentElementP=currentElementP->m_nextP;
  	 
  	 return *(currentP->m_elementP);
  };
  	  
  void Linux_SambaGlobalBrowseForGlobalInstanceNameEnumeration::addElement
   (const Linux_SambaGlobalBrowseForGlobalInstanceName& elementP){
   	
  	if(firstElementP==0){
  	  firstElementP=new Linux_SambaGlobalBrowseForGlobalInstanceNameEnumerationElement();
  	  firstElementP->m_elementP=new Linux_SambaGlobalBrowseForGlobalInstanceName(elementP);
  	  endElementP=firstElementP;
  	  currentElementP=firstElementP;
  	}else{
  	  endElementP->m_nextP=new Linux_SambaGlobalBrowseForGlobalInstanceNameEnumerationElement();
  	  endElementP=endElementP->m_nextP;
  	  endElementP->m_elementP=new Linux_SambaGlobalBrowseForGlobalInstanceName(elementP);
  	}
  };
  
  Linux_SambaGlobalBrowseForGlobalInstanceNameEnumeration::operator CmpiArray() const{
  	int size=getSize();
   	CmpiArray arr=CmpiArray(size,CMPI_instance);
   	for(int i=0;i<size;i++){
   	  arr[i]=getElement(i).getObjectPath();
   	}
   	return arr;
  };  
}
 
