/**
 *  Linux_SambaShareSecurityForGlobalInstanceName.cpp
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


#include "Linux_SambaShareSecurityForGlobalInstanceName.h"
#include "CmpiData.h"
#include "CmpiString.h"
#include "CmpiArray.h"
#include <string>

namespace genProvider {
	
  //*********************************************************
  //Linux_SambaShareSecurityForGlobalInstanceName
  //*********************************************************
  
  //empty constructor
  Linux_SambaShareSecurityForGlobalInstanceName::
   Linux_SambaShareSecurityForGlobalInstanceName(){
   	init();  	
  };
  
  
  //copy constructor	
  Linux_SambaShareSecurityForGlobalInstanceName::
   Linux_SambaShareSecurityForGlobalInstanceName
   (const Linux_SambaShareSecurityForGlobalInstanceName& original){
   	init(original);  	
  };
  
  
  //contructor using CmpiObjectPath
  Linux_SambaShareSecurityForGlobalInstanceName::
   Linux_SambaShareSecurityForGlobalInstanceName (const CmpiObjectPath& path){
    
    init();
    
    m_CIMClassNameP=path.getClassName().charPtr();
    
    CmpiString namespaceOP;
    namespaceOP=path.getNameSpace();
    setNamespace(namespaceOP.charPtr(),1);
    
    CmpiObjectPath SettingData = path.getKey("SettingData");
    setSettingData(Linux_SambaShareSecurityOptionsInstanceName(SettingData));
    
    CmpiObjectPath ManagedElement = path.getKey("ManagedElement");
    setManagedElement(Linux_SambaGlobalOptionsInstanceName(ManagedElement));
    
  }
  
  
  //destructor
  Linux_SambaShareSecurityForGlobalInstanceName::
   ~Linux_SambaShareSecurityForGlobalInstanceName(){
   	reset();  	  
  };
  
  
  //copy operator
  Linux_SambaShareSecurityForGlobalInstanceName&
   Linux_SambaShareSecurityForGlobalInstanceName::operator=
   (const Linux_SambaShareSecurityForGlobalInstanceName& original){    
    init(original);
   	return *this;    
  }
  
  
  //returns the related CmpiObjectPath
  CmpiObjectPath Linux_SambaShareSecurityForGlobalInstanceName::
   getObjectPath() const{
   	
   	CmpiObjectPath objectPath(m_namespace, m_CIMClassNameP);

  	objectPath.setKey("SettingData",CmpiData(m_SettingData.getObjectPath()));

  	objectPath.setKey("ManagedElement",CmpiData(m_ManagedElement.getObjectPath()));
  	
  	return objectPath;
  	
  }
  
  
  //adds the related CmpiObjectPath to an existing cmpiInstance
  void Linux_SambaShareSecurityForGlobalInstanceName::fillKeys(CmpiInstance& cmpiInstance) const{
  	

  	if(isSet.SettingData){
  	  cmpiInstance.setProperty("SettingData",CmpiData(m_SettingData.getObjectPath()));
  	}

  	if(isSet.ManagedElement){
  	  cmpiInstance.setProperty("ManagedElement",CmpiData(m_ManagedElement.getObjectPath()));
  	}
  }
  
  
  //NameSpace related methods
  unsigned int Linux_SambaShareSecurityForGlobalInstanceName::
   isNameSpaceSet() const{
  	return isSet.m_namespace;
  }
  
  const char * Linux_SambaShareSecurityForGlobalInstanceName::
   getNamespace() const {
    if(!isSet.m_namespace)
   	  throw CmpiErrorFormater::getErrorException(
   	   CmpiErrorFormater::NOT_SET,
   	   "NameSpace not set in Linux_SambaShareSecurityForGlobal instanceName");
  	return m_namespace;
  }

  void Linux_SambaShareSecurityForGlobalInstanceName::
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
  unsigned int Linux_SambaShareSecurityForGlobalInstanceName::isSettingDataSet() const{
    return isSet.SettingData;
  }
  void Linux_SambaShareSecurityForGlobalInstanceName::
   setSettingData(const Linux_SambaShareSecurityOptionsInstanceName& val){
    m_SettingData = val;
    isSet.SettingData=1;
  }       
  const Linux_SambaShareSecurityOptionsInstanceName& Linux_SambaShareSecurityForGlobalInstanceName::
   getSettingData() const{
    
    if(!isSet.SettingData)
   	  throw CmpiErrorFormater::getErrorException(
   	   CmpiErrorFormater::NOT_SET,
   	   "SettingData not set");
   	   	
    return m_SettingData;
  }
       
  //ManagedElement related methods
  unsigned int Linux_SambaShareSecurityForGlobalInstanceName::isManagedElementSet() const{
    return isSet.ManagedElement;
  }
  void Linux_SambaShareSecurityForGlobalInstanceName::
   setManagedElement(const Linux_SambaGlobalOptionsInstanceName& val){
    m_ManagedElement = val;
    isSet.ManagedElement=1;
  }       
  const Linux_SambaGlobalOptionsInstanceName& Linux_SambaShareSecurityForGlobalInstanceName::
   getManagedElement() const{
    
    if(!isSet.ManagedElement)
   	  throw CmpiErrorFormater::getErrorException(
   	   CmpiErrorFormater::NOT_SET,
   	   "ManagedElement not set");
   	   	
    return m_ManagedElement;
  }

  
  //set isSet variables to FALSE
  void Linux_SambaShareSecurityForGlobalInstanceName::init(){
  	
  	m_CIMClassNameP="Linux_SambaShareSecurityForGlobal";
  	isSet.m_namespace=0;    	
    isSet.SettingData=0;   	
    isSet.ManagedElement=0;
  }
  
  
  //copies another instance properties in this
  void Linux_SambaShareSecurityForGlobalInstanceName::init
   (const Linux_SambaShareSecurityForGlobalInstanceName& original){
   	init();
   	   	
    m_CIMClassNameP=original.m_CIMClassNameP;
    if(original.isNameSpaceSet()){
      setNamespace(original.getNamespace(),1);
    }   	
    if(original.isSettingDataSet()){
      const Linux_SambaShareSecurityOptionsInstanceName& SettingDataOriginal=original.getSettingData();
      setSettingData(SettingDataOriginal);
    }   	
    if(original.isManagedElementSet()){
      const Linux_SambaGlobalOptionsInstanceName& ManagedElementOriginal=original.getManagedElement();
      setManagedElement(ManagedElementOriginal);
    }    
  }
  
  //reset the instanceName data
  void Linux_SambaShareSecurityForGlobalInstanceName::reset(){   	
  	if (isSet.m_namespace)
  	  delete(m_namespace);  	  
  };
  
  
  
  
  //*********************************************************
  //Linux_SambaShareSecurityForGlobalInstanceNameEnumerationElement	
  //*********************************************************
  
  Linux_SambaShareSecurityForGlobalInstanceNameEnumerationElement::
   Linux_SambaShareSecurityForGlobalInstanceNameEnumerationElement(){
   	
  	m_elementP=0;
  	m_nextP=0;
  	  
  };
  
  
  Linux_SambaShareSecurityForGlobalInstanceNameEnumerationElement::
   ~Linux_SambaShareSecurityForGlobalInstanceNameEnumerationElement(){
   	
  	if (m_elementP!=0)
  	  delete(m_elementP);
  	if (m_nextP!=0)
  	  delete(m_nextP);
  	  
  };

  
  //*********************************************************
  //Linux_SambaShareSecurityForGlobalInstanceNameEnumeration
  //*********************************************************
  
  Linux_SambaShareSecurityForGlobalInstanceNameEnumeration::
   Linux_SambaShareSecurityForGlobalInstanceNameEnumeration(){
   	
  	 firstElementP=0;
     currentElementP=0;
     endElementP=0;
  };
  
  Linux_SambaShareSecurityForGlobalInstanceNameEnumeration::
   Linux_SambaShareSecurityForGlobalInstanceNameEnumeration(const CmpiArray& arr){
  	
  	firstElementP=0;
    currentElementP=0;
    endElementP=0;
    
    int size = arr.size();
    for (int i=0; i < size; i++) {
     addElement(Linux_SambaShareSecurityForGlobalInstanceName(arr[i]));
    }
  }
  
  Linux_SambaShareSecurityForGlobalInstanceNameEnumeration::
   Linux_SambaShareSecurityForGlobalInstanceNameEnumeration(
   const Linux_SambaShareSecurityForGlobalInstanceNameEnumeration& original){
   	
     firstElementP=0;
     currentElementP=0;
     endElementP=0;
  	 
     int size=original.getSize();
     for(int i=0;i<size;i++)
       addElement(original.getElement(i));           
  };
  
  	  
  Linux_SambaShareSecurityForGlobalInstanceNameEnumeration::
   ~Linux_SambaShareSecurityForGlobalInstanceNameEnumeration(){
   	
  	if (firstElementP!=0)
  	  delete(firstElementP);
  	  	
  };
  
  	  
  void Linux_SambaShareSecurityForGlobalInstanceNameEnumeration::reset(){
  	
  	currentElementP=firstElementP;
  };
  
  	  
  bool Linux_SambaShareSecurityForGlobalInstanceNameEnumeration::hasNext() const{
  	
  	return (currentElementP!=0);
  
  };
  
  int Linux_SambaShareSecurityForGlobalInstanceNameEnumeration::getSize() const{
  	
    int size=0;
    Linux_SambaShareSecurityForGlobalInstanceNameEnumerationElement* followingP=firstElementP;
  	
  	while(followingP!=0){
        followingP=followingP->m_nextP;
        size++;
    }
  	
    return size;
  };
  
  const Linux_SambaShareSecurityForGlobalInstanceName&  
   Linux_SambaShareSecurityForGlobalInstanceNameEnumeration::getElement(int pos) const{
   
    Linux_SambaShareSecurityForGlobalInstanceNameEnumerationElement* followingP=firstElementP;
   
    int i=0;
    while((followingP!=0)&&(i<pos)){
        followingP=followingP->m_nextP;
        i++;
    }
    
    return *(followingP->m_elementP);
  };
  
  	  
  const Linux_SambaShareSecurityForGlobalInstanceName&
   Linux_SambaShareSecurityForGlobalInstanceNameEnumeration::getNext() {
   	
  	 Linux_SambaShareSecurityForGlobalInstanceNameEnumerationElement* currentP=
  	  currentElementP;
  	 currentElementP=currentElementP->m_nextP;
  	 
  	 return *(currentP->m_elementP);
  };
  	  
  void Linux_SambaShareSecurityForGlobalInstanceNameEnumeration::addElement
   (const Linux_SambaShareSecurityForGlobalInstanceName& elementP){
   	
  	if(firstElementP==0){
  	  firstElementP=new Linux_SambaShareSecurityForGlobalInstanceNameEnumerationElement();
  	  firstElementP->m_elementP=new Linux_SambaShareSecurityForGlobalInstanceName(elementP);
  	  endElementP=firstElementP;
  	  currentElementP=firstElementP;
  	}else{
  	  endElementP->m_nextP=new Linux_SambaShareSecurityForGlobalInstanceNameEnumerationElement();
  	  endElementP=endElementP->m_nextP;
  	  endElementP->m_elementP=new Linux_SambaShareSecurityForGlobalInstanceName(elementP);
  	}
  };
  
  Linux_SambaShareSecurityForGlobalInstanceNameEnumeration::operator CmpiArray() const{
  	int size=getSize();
   	CmpiArray arr=CmpiArray(size,CMPI_instance);
   	for(int i=0;i<size;i++){
   	  arr[i]=getElement(i).getObjectPath();
   	}
   	return arr;
  };  
}
 
