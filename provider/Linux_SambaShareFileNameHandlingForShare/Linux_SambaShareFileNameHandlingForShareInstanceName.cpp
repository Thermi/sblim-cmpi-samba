/**
 *  Linux_SambaShareFileNameHandlingForShareInstanceName.cpp
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


#include "Linux_SambaShareFileNameHandlingForShareInstanceName.h"
#include "CmpiData.h"
#include "CmpiString.h"
#include "CmpiArray.h"
#include <string>

namespace genProvider {
	
  //*********************************************************
  //Linux_SambaShareFileNameHandlingForShareInstanceName
  //*********************************************************
  
  //empty constructor
  Linux_SambaShareFileNameHandlingForShareInstanceName::
   Linux_SambaShareFileNameHandlingForShareInstanceName(){
   	init();  	
  };
  
  
  //copy constructor	
  Linux_SambaShareFileNameHandlingForShareInstanceName::
   Linux_SambaShareFileNameHandlingForShareInstanceName
   (const Linux_SambaShareFileNameHandlingForShareInstanceName& original){
   	init(original);  	
  };
  
  
  //contructor using CmpiObjectPath
  Linux_SambaShareFileNameHandlingForShareInstanceName::
   Linux_SambaShareFileNameHandlingForShareInstanceName (const CmpiObjectPath& path){
    
    init();
    
    m_CIMClassNameP=path.getClassName().charPtr();
    
    CmpiString namespaceOP;
    namespaceOP=path.getNameSpace();
    setNamespace(namespaceOP.charPtr(),1);
    
    CmpiObjectPath SettingData = path.getKey("SettingData");
    setSettingData(Linux_SambaShareFileNameHandlingOptionsInstanceName(SettingData));
    
    CmpiObjectPath ManagedElement = path.getKey("ManagedElement");
    setManagedElement(Linux_SambaShareOptionsInstanceName(ManagedElement));
    
  }
  
  
  //destructor
  Linux_SambaShareFileNameHandlingForShareInstanceName::
   ~Linux_SambaShareFileNameHandlingForShareInstanceName(){
   	reset();  	  
  };
  
  
  //copy operator
  Linux_SambaShareFileNameHandlingForShareInstanceName&
   Linux_SambaShareFileNameHandlingForShareInstanceName::operator=
   (const Linux_SambaShareFileNameHandlingForShareInstanceName& original){    
    init(original);
   	return *this;    
  }
  
  
  //returns the related CmpiObjectPath
  CmpiObjectPath Linux_SambaShareFileNameHandlingForShareInstanceName::
   getObjectPath() const{
   	
   	CmpiObjectPath objectPath(m_namespace, m_CIMClassNameP);

  	objectPath.setKey("SettingData",CmpiData(m_SettingData.getObjectPath()));

  	objectPath.setKey("ManagedElement",CmpiData(m_ManagedElement.getObjectPath()));
  	
  	return objectPath;
  	
  }
  
  
  //adds the related CmpiObjectPath to an existing cmpiInstance
  void Linux_SambaShareFileNameHandlingForShareInstanceName::fillKeys(CmpiInstance& cmpiInstance) const{
  	

  	if(isSet.SettingData){
  	  cmpiInstance.setProperty("SettingData",CmpiData(m_SettingData.getObjectPath()));
  	}

  	if(isSet.ManagedElement){
  	  cmpiInstance.setProperty("ManagedElement",CmpiData(m_ManagedElement.getObjectPath()));
  	}
  }
  
  
  //NameSpace related methods
  unsigned int Linux_SambaShareFileNameHandlingForShareInstanceName::
   isNameSpaceSet() const{
  	return isSet.m_namespace;
  }
  
  const char * Linux_SambaShareFileNameHandlingForShareInstanceName::
   getNamespace() const {
    if(!isSet.m_namespace)
   	  throw CmpiErrorFormater::getErrorException(
   	   CmpiErrorFormater::NOT_SET,
   	   "NameSpace not set in Linux_SambaShareFileNameHandlingForShare instanceName");
  	return m_namespace;
  }

  void Linux_SambaShareFileNameHandlingForShareInstanceName::
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
  unsigned int Linux_SambaShareFileNameHandlingForShareInstanceName::isSettingDataSet() const{
    return isSet.SettingData;
  }
  void Linux_SambaShareFileNameHandlingForShareInstanceName::
   setSettingData(const Linux_SambaShareFileNameHandlingOptionsInstanceName& val){
    m_SettingData = val;
    isSet.SettingData=1;
  }       
  const Linux_SambaShareFileNameHandlingOptionsInstanceName& Linux_SambaShareFileNameHandlingForShareInstanceName::
   getSettingData() const{
    
    if(!isSet.SettingData)
   	  throw CmpiErrorFormater::getErrorException(
   	   CmpiErrorFormater::NOT_SET,
   	   "SettingData not set");
   	   	
    return m_SettingData;
  }
       
  //ManagedElement related methods
  unsigned int Linux_SambaShareFileNameHandlingForShareInstanceName::isManagedElementSet() const{
    return isSet.ManagedElement;
  }
  void Linux_SambaShareFileNameHandlingForShareInstanceName::
   setManagedElement(const Linux_SambaShareOptionsInstanceName& val){
    m_ManagedElement = val;
    isSet.ManagedElement=1;
  }       
  const Linux_SambaShareOptionsInstanceName& Linux_SambaShareFileNameHandlingForShareInstanceName::
   getManagedElement() const{
    
    if(!isSet.ManagedElement)
   	  throw CmpiErrorFormater::getErrorException(
   	   CmpiErrorFormater::NOT_SET,
   	   "ManagedElement not set");
   	   	
    return m_ManagedElement;
  }

  
  //set isSet variables to FALSE
  void Linux_SambaShareFileNameHandlingForShareInstanceName::init(){
  	
  	m_CIMClassNameP="Linux_SambaShareFileNameHandlingForShare";
  	isSet.m_namespace=0;    	
    isSet.SettingData=0;   	
    isSet.ManagedElement=0;
  }
  
  
  //copies another instance properties in this
  void Linux_SambaShareFileNameHandlingForShareInstanceName::init
   (const Linux_SambaShareFileNameHandlingForShareInstanceName& original){
   	init();
   	   	
    m_CIMClassNameP=original.m_CIMClassNameP;
    if(original.isNameSpaceSet()){
      setNamespace(original.getNamespace(),1);
    }   	
    if(original.isSettingDataSet()){
      const Linux_SambaShareFileNameHandlingOptionsInstanceName& SettingDataOriginal=original.getSettingData();
      setSettingData(SettingDataOriginal);
    }   	
    if(original.isManagedElementSet()){
      const Linux_SambaShareOptionsInstanceName& ManagedElementOriginal=original.getManagedElement();
      setManagedElement(ManagedElementOriginal);
    }    
  }
  
  //reset the instanceName data
  void Linux_SambaShareFileNameHandlingForShareInstanceName::reset(){   	
  	if (isSet.m_namespace)
  	  delete(m_namespace);  	  
  };
  
  
  
  
  //*********************************************************
  //Linux_SambaShareFileNameHandlingForShareInstanceNameEnumerationElement	
  //*********************************************************
  
  Linux_SambaShareFileNameHandlingForShareInstanceNameEnumerationElement::
   Linux_SambaShareFileNameHandlingForShareInstanceNameEnumerationElement(){
   	
  	m_elementP=0;
  	m_nextP=0;
  	  
  };
  
  
  Linux_SambaShareFileNameHandlingForShareInstanceNameEnumerationElement::
   ~Linux_SambaShareFileNameHandlingForShareInstanceNameEnumerationElement(){
   	
  	if (m_elementP!=0)
  	  delete(m_elementP);
  	if (m_nextP!=0)
  	  delete(m_nextP);
  	  
  };

  
  //*********************************************************
  //Linux_SambaShareFileNameHandlingForShareInstanceNameEnumeration
  //*********************************************************
  
  Linux_SambaShareFileNameHandlingForShareInstanceNameEnumeration::
   Linux_SambaShareFileNameHandlingForShareInstanceNameEnumeration(){
   	
  	 firstElementP=0;
     currentElementP=0;
     endElementP=0;
  };
  
  Linux_SambaShareFileNameHandlingForShareInstanceNameEnumeration::
   Linux_SambaShareFileNameHandlingForShareInstanceNameEnumeration(const CmpiArray& arr){
  	
  	firstElementP=0;
    currentElementP=0;
    endElementP=0;
    
    int size = arr.size();
    for (int i=0; i < size; i++) {
     addElement(Linux_SambaShareFileNameHandlingForShareInstanceName(arr[i]));
    }
  }
  
  Linux_SambaShareFileNameHandlingForShareInstanceNameEnumeration::
   Linux_SambaShareFileNameHandlingForShareInstanceNameEnumeration(
   const Linux_SambaShareFileNameHandlingForShareInstanceNameEnumeration& original){
   	
     firstElementP=0;
     currentElementP=0;
     endElementP=0;
  	 
     int size=original.getSize();
     for(int i=0;i<size;i++)
       addElement(original.getElement(i));           
  };
  
  	  
  Linux_SambaShareFileNameHandlingForShareInstanceNameEnumeration::
   ~Linux_SambaShareFileNameHandlingForShareInstanceNameEnumeration(){
   	
  	if (firstElementP!=0)
  	  delete(firstElementP);
  	  	
  };
  
  	  
  void Linux_SambaShareFileNameHandlingForShareInstanceNameEnumeration::reset(){
  	
  	currentElementP=firstElementP;
  };
  
  	  
  bool Linux_SambaShareFileNameHandlingForShareInstanceNameEnumeration::hasNext() const{
  	
  	return (currentElementP!=0);
  
  };
  
  int Linux_SambaShareFileNameHandlingForShareInstanceNameEnumeration::getSize() const{
  	
    int size=0;
    Linux_SambaShareFileNameHandlingForShareInstanceNameEnumerationElement* followingP=firstElementP;
  	
  	while(followingP!=0){
        followingP=followingP->m_nextP;
        size++;
    }
  	
    return size;
  };
  
  const Linux_SambaShareFileNameHandlingForShareInstanceName&  
   Linux_SambaShareFileNameHandlingForShareInstanceNameEnumeration::getElement(int pos) const{
   
    Linux_SambaShareFileNameHandlingForShareInstanceNameEnumerationElement* followingP=firstElementP;
   
    int i=0;
    while((followingP!=0)&&(i<pos)){
        followingP=followingP->m_nextP;
        i++;
    }
    
    return *(followingP->m_elementP);
  };
  
  	  
  const Linux_SambaShareFileNameHandlingForShareInstanceName&
   Linux_SambaShareFileNameHandlingForShareInstanceNameEnumeration::getNext() {
   	
  	 Linux_SambaShareFileNameHandlingForShareInstanceNameEnumerationElement* currentP=
  	  currentElementP;
  	 currentElementP=currentElementP->m_nextP;
  	 
  	 return *(currentP->m_elementP);
  };
  	  
  void Linux_SambaShareFileNameHandlingForShareInstanceNameEnumeration::addElement
   (const Linux_SambaShareFileNameHandlingForShareInstanceName& elementP){
   	
  	if(firstElementP==0){
  	  firstElementP=new Linux_SambaShareFileNameHandlingForShareInstanceNameEnumerationElement();
  	  firstElementP->m_elementP=new Linux_SambaShareFileNameHandlingForShareInstanceName(elementP);
  	  endElementP=firstElementP;
  	  currentElementP=firstElementP;
  	}else{
  	  endElementP->m_nextP=new Linux_SambaShareFileNameHandlingForShareInstanceNameEnumerationElement();
  	  endElementP=endElementP->m_nextP;
  	  endElementP->m_elementP=new Linux_SambaShareFileNameHandlingForShareInstanceName(elementP);
  	}
  };
  
  Linux_SambaShareFileNameHandlingForShareInstanceNameEnumeration::operator CmpiArray() const{
  	int size=getSize();
   	CmpiArray arr=CmpiArray(size,CMPI_instance);
   	for(int i=0;i<size;i++){
   	  arr[i]=getElement(i).getObjectPath();
   	}
   	return arr;
  };  
}
 
