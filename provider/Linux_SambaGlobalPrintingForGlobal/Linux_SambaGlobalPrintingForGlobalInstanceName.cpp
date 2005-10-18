/**
 *  Linux_SambaGlobalPrintingForGlobalInstanceName.cpp
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


#include "Linux_SambaGlobalPrintingForGlobalInstanceName.h"
#include "CmpiData.h"
#include "CmpiString.h"
#include "CmpiArray.h"
#include <string>

namespace genProvider {
	
  //*********************************************************
  //Linux_SambaGlobalPrintingForGlobalInstanceName
  //*********************************************************
  
  //empty constructor
  Linux_SambaGlobalPrintingForGlobalInstanceName::
   Linux_SambaGlobalPrintingForGlobalInstanceName(){
   	init();  	
  };
  
  
  //copy constructor	
  Linux_SambaGlobalPrintingForGlobalInstanceName::
   Linux_SambaGlobalPrintingForGlobalInstanceName
   (const Linux_SambaGlobalPrintingForGlobalInstanceName& original){
   	init(original);  	
  };
  
  
  //contructor using CmpiObjectPath
  Linux_SambaGlobalPrintingForGlobalInstanceName::
   Linux_SambaGlobalPrintingForGlobalInstanceName (const CmpiObjectPath& path){
    
    init();
    
    m_CIMClassNameP=path.getClassName().charPtr();
    
    CmpiString namespaceOP;
    namespaceOP=path.getNameSpace();
    setNamespace(namespaceOP.charPtr(),1);
    
    CmpiObjectPath SettingData = path.getKey("SettingData");
    setSettingData(Linux_SambaGlobalPrintingOptionsInstanceName(SettingData));
    
    CmpiObjectPath ManagedElement = path.getKey("ManagedElement");
    setManagedElement(Linux_SambaGlobalOptionsInstanceName(ManagedElement));
    
  }
  
  
  //destructor
  Linux_SambaGlobalPrintingForGlobalInstanceName::
   ~Linux_SambaGlobalPrintingForGlobalInstanceName(){
   	reset();  	  
  };
  
  
  //copy operator
  Linux_SambaGlobalPrintingForGlobalInstanceName&
   Linux_SambaGlobalPrintingForGlobalInstanceName::operator=
   (const Linux_SambaGlobalPrintingForGlobalInstanceName& original){    
    init(original);
   	return *this;    
  }
  
  
  //returns the related CmpiObjectPath
  CmpiObjectPath Linux_SambaGlobalPrintingForGlobalInstanceName::
   getObjectPath() const{
   	
   	CmpiObjectPath objectPath(m_namespace, m_CIMClassNameP);

  	objectPath.setKey("SettingData",CmpiData(m_SettingData.getObjectPath()));

  	objectPath.setKey("ManagedElement",CmpiData(m_ManagedElement.getObjectPath()));
  	
  	return objectPath;
  	
  }
  
  
  //adds the related CmpiObjectPath to an existing cmpiInstance
  void Linux_SambaGlobalPrintingForGlobalInstanceName::fillKeys(CmpiInstance& cmpiInstance) const{
  	

  	if(isSet.SettingData){
  	  cmpiInstance.setProperty("SettingData",CmpiData(m_SettingData.getObjectPath()));
  	}

  	if(isSet.ManagedElement){
  	  cmpiInstance.setProperty("ManagedElement",CmpiData(m_ManagedElement.getObjectPath()));
  	}
  }
  
  
  //NameSpace related methods
  unsigned int Linux_SambaGlobalPrintingForGlobalInstanceName::
   isNameSpaceSet() const{
  	return isSet.m_namespace;
  }
  
  const char * Linux_SambaGlobalPrintingForGlobalInstanceName::
   getNamespace() const {
    if(!isSet.m_namespace)
   	  throw CmpiErrorFormater::getErrorException(
   	   CmpiErrorFormater::NOT_SET,
   	   "NameSpace not set in Linux_SambaGlobalPrintingForGlobal instanceName");
  	return m_namespace;
  }

  void Linux_SambaGlobalPrintingForGlobalInstanceName::
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
  unsigned int Linux_SambaGlobalPrintingForGlobalInstanceName::isSettingDataSet() const{
    return isSet.SettingData;
  }
  void Linux_SambaGlobalPrintingForGlobalInstanceName::
   setSettingData(const Linux_SambaGlobalPrintingOptionsInstanceName& val){
    m_SettingData = val;
    isSet.SettingData=1;
  }       
  const Linux_SambaGlobalPrintingOptionsInstanceName& Linux_SambaGlobalPrintingForGlobalInstanceName::
   getSettingData() const{
    
    if(!isSet.SettingData)
   	  throw CmpiErrorFormater::getErrorException(
   	   CmpiErrorFormater::NOT_SET,
   	   "SettingData not set");
   	   	
    return m_SettingData;
  }
       
  //ManagedElement related methods
  unsigned int Linux_SambaGlobalPrintingForGlobalInstanceName::isManagedElementSet() const{
    return isSet.ManagedElement;
  }
  void Linux_SambaGlobalPrintingForGlobalInstanceName::
   setManagedElement(const Linux_SambaGlobalOptionsInstanceName& val){
    m_ManagedElement = val;
    isSet.ManagedElement=1;
  }       
  const Linux_SambaGlobalOptionsInstanceName& Linux_SambaGlobalPrintingForGlobalInstanceName::
   getManagedElement() const{
    
    if(!isSet.ManagedElement)
   	  throw CmpiErrorFormater::getErrorException(
   	   CmpiErrorFormater::NOT_SET,
   	   "ManagedElement not set");
   	   	
    return m_ManagedElement;
  }

  
  //set isSet variables to FALSE
  void Linux_SambaGlobalPrintingForGlobalInstanceName::init(){
  	
  	m_CIMClassNameP="Linux_SambaGlobalPrintingForGlobal";
  	isSet.m_namespace=0;    	
    isSet.SettingData=0;   	
    isSet.ManagedElement=0;
  }
  
  
  //copies another instance properties in this
  void Linux_SambaGlobalPrintingForGlobalInstanceName::init
   (const Linux_SambaGlobalPrintingForGlobalInstanceName& original){
   	init();
   	   	
    m_CIMClassNameP=original.m_CIMClassNameP;
    if(original.isNameSpaceSet()){
      setNamespace(original.getNamespace(),1);
    }   	
    if(original.isSettingDataSet()){
      const Linux_SambaGlobalPrintingOptionsInstanceName& SettingDataOriginal=original.getSettingData();
      setSettingData(SettingDataOriginal);
    }   	
    if(original.isManagedElementSet()){
      const Linux_SambaGlobalOptionsInstanceName& ManagedElementOriginal=original.getManagedElement();
      setManagedElement(ManagedElementOriginal);
    }    
  }
  
  //reset the instanceName data
  void Linux_SambaGlobalPrintingForGlobalInstanceName::reset(){   	
  	if (isSet.m_namespace)
  	  delete(m_namespace);  	  
  };
  
  
  
  
  //*********************************************************
  //Linux_SambaGlobalPrintingForGlobalInstanceNameEnumerationElement	
  //*********************************************************
  
  Linux_SambaGlobalPrintingForGlobalInstanceNameEnumerationElement::
   Linux_SambaGlobalPrintingForGlobalInstanceNameEnumerationElement(){
   	
  	m_elementP=0;
  	m_nextP=0;
  	  
  };
  
  
  Linux_SambaGlobalPrintingForGlobalInstanceNameEnumerationElement::
   ~Linux_SambaGlobalPrintingForGlobalInstanceNameEnumerationElement(){
   	
  	if (m_elementP!=0)
  	  delete(m_elementP);
  	if (m_nextP!=0)
  	  delete(m_nextP);
  	  
  };

  
  //*********************************************************
  //Linux_SambaGlobalPrintingForGlobalInstanceNameEnumeration
  //*********************************************************
  
  Linux_SambaGlobalPrintingForGlobalInstanceNameEnumeration::
   Linux_SambaGlobalPrintingForGlobalInstanceNameEnumeration(){
   	
  	 firstElementP=0;
     currentElementP=0;
     endElementP=0;
  };
  
  Linux_SambaGlobalPrintingForGlobalInstanceNameEnumeration::
   Linux_SambaGlobalPrintingForGlobalInstanceNameEnumeration(const CmpiArray& arr){
  	
  	firstElementP=0;
    currentElementP=0;
    endElementP=0;
    
    int size = arr.size();
    for (int i=0; i < size; i++) {
     addElement(Linux_SambaGlobalPrintingForGlobalInstanceName(arr[i]));
    }
  }
  
  Linux_SambaGlobalPrintingForGlobalInstanceNameEnumeration::
   Linux_SambaGlobalPrintingForGlobalInstanceNameEnumeration(
   const Linux_SambaGlobalPrintingForGlobalInstanceNameEnumeration& original){
   	
     firstElementP=0;
     currentElementP=0;
     endElementP=0;
  	 
     int size=original.getSize();
     for(int i=0;i<size;i++)
       addElement(original.getElement(i));           
  };
  
  	  
  Linux_SambaGlobalPrintingForGlobalInstanceNameEnumeration::
   ~Linux_SambaGlobalPrintingForGlobalInstanceNameEnumeration(){
   	
  	if (firstElementP!=0)
  	  delete(firstElementP);
  	  	
  };
  
  	  
  void Linux_SambaGlobalPrintingForGlobalInstanceNameEnumeration::reset(){
  	
  	currentElementP=firstElementP;
  };
  
  	  
  bool Linux_SambaGlobalPrintingForGlobalInstanceNameEnumeration::hasNext() const{
  	
  	return (currentElementP!=0);
  
  };
  
  int Linux_SambaGlobalPrintingForGlobalInstanceNameEnumeration::getSize() const{
  	
    int size=0;
    Linux_SambaGlobalPrintingForGlobalInstanceNameEnumerationElement* followingP=firstElementP;
  	
  	while(followingP!=0){
        followingP=followingP->m_nextP;
        size++;
    }
  	
    return size;
  };
  
  const Linux_SambaGlobalPrintingForGlobalInstanceName&  
   Linux_SambaGlobalPrintingForGlobalInstanceNameEnumeration::getElement(int pos) const{
   
    Linux_SambaGlobalPrintingForGlobalInstanceNameEnumerationElement* followingP=firstElementP;
   
    int i=0;
    while((followingP!=0)&&(i<pos)){
        followingP=followingP->m_nextP;
        i++;
    }
    
    return *(followingP->m_elementP);
  };
  
  	  
  const Linux_SambaGlobalPrintingForGlobalInstanceName&
   Linux_SambaGlobalPrintingForGlobalInstanceNameEnumeration::getNext() {
   	
  	 Linux_SambaGlobalPrintingForGlobalInstanceNameEnumerationElement* currentP=
  	  currentElementP;
  	 currentElementP=currentElementP->m_nextP;
  	 
  	 return *(currentP->m_elementP);
  };
  	  
  void Linux_SambaGlobalPrintingForGlobalInstanceNameEnumeration::addElement
   (const Linux_SambaGlobalPrintingForGlobalInstanceName& elementP){
   	
  	if(firstElementP==0){
  	  firstElementP=new Linux_SambaGlobalPrintingForGlobalInstanceNameEnumerationElement();
  	  firstElementP->m_elementP=new Linux_SambaGlobalPrintingForGlobalInstanceName(elementP);
  	  endElementP=firstElementP;
  	  currentElementP=firstElementP;
  	}else{
  	  endElementP->m_nextP=new Linux_SambaGlobalPrintingForGlobalInstanceNameEnumerationElement();
  	  endElementP=endElementP->m_nextP;
  	  endElementP->m_elementP=new Linux_SambaGlobalPrintingForGlobalInstanceName(elementP);
  	}
  };
  
  Linux_SambaGlobalPrintingForGlobalInstanceNameEnumeration::operator CmpiArray() const{
  	int size=getSize();
   	CmpiArray arr=CmpiArray(size,CMPI_instance);
   	for(int i=0;i<size;i++){
   	  arr[i]=getElement(i).getObjectPath();
   	}
   	return arr;
  };  
}
 
