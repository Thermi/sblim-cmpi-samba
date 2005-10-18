/**
 *  Linux_SambaCommonSecurityForShareInstanceName.cpp
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


#include "Linux_SambaCommonSecurityForShareInstanceName.h"
#include "CmpiData.h"
#include "CmpiString.h"
#include "CmpiArray.h"
#include <string>

namespace genProvider {
	
  //*********************************************************
  //Linux_SambaCommonSecurityForShareInstanceName
  //*********************************************************
  
  //empty constructor
  Linux_SambaCommonSecurityForShareInstanceName::
   Linux_SambaCommonSecurityForShareInstanceName(){
   	init();  	
  };
  
  
  //copy constructor	
  Linux_SambaCommonSecurityForShareInstanceName::
   Linux_SambaCommonSecurityForShareInstanceName
   (const Linux_SambaCommonSecurityForShareInstanceName& original){
   	init(original);  	
  };
  
  
  //contructor using CmpiObjectPath
  Linux_SambaCommonSecurityForShareInstanceName::
   Linux_SambaCommonSecurityForShareInstanceName (const CmpiObjectPath& path){
    
    init();
    
    m_CIMClassNameP=path.getClassName().charPtr();
    
    CmpiString namespaceOP;
    namespaceOP=path.getNameSpace();
    setNamespace(namespaceOP.charPtr(),1);
    
    CmpiObjectPath SettingData = path.getKey("SettingData");
    setSettingData(Linux_SambaCommonSecurityOptionsInstanceName(SettingData));
    
    CmpiObjectPath ManagedElement = path.getKey("ManagedElement");
    setManagedElement(Linux_SambaShareOptionsInstanceName(ManagedElement));
    
  }
  
  
  //destructor
  Linux_SambaCommonSecurityForShareInstanceName::
   ~Linux_SambaCommonSecurityForShareInstanceName(){
   	reset();  	  
  };
  
  
  //copy operator
  Linux_SambaCommonSecurityForShareInstanceName&
   Linux_SambaCommonSecurityForShareInstanceName::operator=
   (const Linux_SambaCommonSecurityForShareInstanceName& original){    
    init(original);
   	return *this;    
  }
  
  
  //returns the related CmpiObjectPath
  CmpiObjectPath Linux_SambaCommonSecurityForShareInstanceName::
   getObjectPath() const{
   	
   	CmpiObjectPath objectPath(m_namespace, m_CIMClassNameP);

  	objectPath.setKey("SettingData",CmpiData(m_SettingData.getObjectPath()));

  	objectPath.setKey("ManagedElement",CmpiData(m_ManagedElement.getObjectPath()));
  	
  	return objectPath;
  	
  }
  
  
  //adds the related CmpiObjectPath to an existing cmpiInstance
  void Linux_SambaCommonSecurityForShareInstanceName::fillKeys(CmpiInstance& cmpiInstance) const{
  	

  	if(isSet.SettingData){
  	  cmpiInstance.setProperty("SettingData",CmpiData(m_SettingData.getObjectPath()));
  	}

  	if(isSet.ManagedElement){
  	  cmpiInstance.setProperty("ManagedElement",CmpiData(m_ManagedElement.getObjectPath()));
  	}
  }
  
  
  //NameSpace related methods
  unsigned int Linux_SambaCommonSecurityForShareInstanceName::
   isNameSpaceSet() const{
  	return isSet.m_namespace;
  }
  
  const char * Linux_SambaCommonSecurityForShareInstanceName::
   getNamespace() const {
    if(!isSet.m_namespace)
   	  throw CmpiErrorFormater::getErrorException(
   	   CmpiErrorFormater::NOT_SET,
   	   "NameSpace not set in Linux_SambaCommonSecurityForShare instanceName");
  	return m_namespace;
  }

  void Linux_SambaCommonSecurityForShareInstanceName::
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
  unsigned int Linux_SambaCommonSecurityForShareInstanceName::isSettingDataSet() const{
    return isSet.SettingData;
  }
  void Linux_SambaCommonSecurityForShareInstanceName::
   setSettingData(const Linux_SambaCommonSecurityOptionsInstanceName& val){
    m_SettingData = val;
    isSet.SettingData=1;
  }       
  const Linux_SambaCommonSecurityOptionsInstanceName& Linux_SambaCommonSecurityForShareInstanceName::
   getSettingData() const{
    
    if(!isSet.SettingData)
   	  throw CmpiErrorFormater::getErrorException(
   	   CmpiErrorFormater::NOT_SET,
   	   "SettingData not set");
   	   	
    return m_SettingData;
  }
       
  //ManagedElement related methods
  unsigned int Linux_SambaCommonSecurityForShareInstanceName::isManagedElementSet() const{
    return isSet.ManagedElement;
  }
  void Linux_SambaCommonSecurityForShareInstanceName::
   setManagedElement(const Linux_SambaShareOptionsInstanceName& val){
    m_ManagedElement = val;
    isSet.ManagedElement=1;
  }       
  const Linux_SambaShareOptionsInstanceName& Linux_SambaCommonSecurityForShareInstanceName::
   getManagedElement() const{
    
    if(!isSet.ManagedElement)
   	  throw CmpiErrorFormater::getErrorException(
   	   CmpiErrorFormater::NOT_SET,
   	   "ManagedElement not set");
   	   	
    return m_ManagedElement;
  }

  
  //set isSet variables to FALSE
  void Linux_SambaCommonSecurityForShareInstanceName::init(){
  	
  	m_CIMClassNameP="Linux_SambaCommonSecurityForShare";
  	isSet.m_namespace=0;    	
    isSet.SettingData=0;   	
    isSet.ManagedElement=0;
  }
  
  
  //copies another instance properties in this
  void Linux_SambaCommonSecurityForShareInstanceName::init
   (const Linux_SambaCommonSecurityForShareInstanceName& original){
   	init();
   	   	
    m_CIMClassNameP=original.m_CIMClassNameP;
    if(original.isNameSpaceSet()){
      setNamespace(original.getNamespace(),1);
    }   	
    if(original.isSettingDataSet()){
      const Linux_SambaCommonSecurityOptionsInstanceName& SettingDataOriginal=original.getSettingData();
      setSettingData(SettingDataOriginal);
    }   	
    if(original.isManagedElementSet()){
      const Linux_SambaShareOptionsInstanceName& ManagedElementOriginal=original.getManagedElement();
      setManagedElement(ManagedElementOriginal);
    }    
  }
  
  //reset the instanceName data
  void Linux_SambaCommonSecurityForShareInstanceName::reset(){   	
  	if (isSet.m_namespace)
  	  delete(m_namespace);  	  
  };
  
  
  
  
  //*********************************************************
  //Linux_SambaCommonSecurityForShareInstanceNameEnumerationElement	
  //*********************************************************
  
  Linux_SambaCommonSecurityForShareInstanceNameEnumerationElement::
   Linux_SambaCommonSecurityForShareInstanceNameEnumerationElement(){
   	
  	m_elementP=0;
  	m_nextP=0;
  	  
  };
  
  
  Linux_SambaCommonSecurityForShareInstanceNameEnumerationElement::
   ~Linux_SambaCommonSecurityForShareInstanceNameEnumerationElement(){
   	
  	if (m_elementP!=0)
  	  delete(m_elementP);
  	if (m_nextP!=0)
  	  delete(m_nextP);
  	  
  };

  
  //*********************************************************
  //Linux_SambaCommonSecurityForShareInstanceNameEnumeration
  //*********************************************************
  
  Linux_SambaCommonSecurityForShareInstanceNameEnumeration::
   Linux_SambaCommonSecurityForShareInstanceNameEnumeration(){
   	
  	 firstElementP=0;
     currentElementP=0;
     endElementP=0;
  };
  
  Linux_SambaCommonSecurityForShareInstanceNameEnumeration::
   Linux_SambaCommonSecurityForShareInstanceNameEnumeration(const CmpiArray& arr){
  	
  	firstElementP=0;
    currentElementP=0;
    endElementP=0;
    
    int size = arr.size();
    for (int i=0; i < size; i++) {
     addElement(Linux_SambaCommonSecurityForShareInstanceName(arr[i]));
    }
  }
  
  Linux_SambaCommonSecurityForShareInstanceNameEnumeration::
   Linux_SambaCommonSecurityForShareInstanceNameEnumeration(
   const Linux_SambaCommonSecurityForShareInstanceNameEnumeration& original){
   	
     firstElementP=0;
     currentElementP=0;
     endElementP=0;
  	 
     int size=original.getSize();
     for(int i=0;i<size;i++)
       addElement(original.getElement(i));           
  };
  
  	  
  Linux_SambaCommonSecurityForShareInstanceNameEnumeration::
   ~Linux_SambaCommonSecurityForShareInstanceNameEnumeration(){
   	
  	if (firstElementP!=0)
  	  delete(firstElementP);
  	  	
  };
  
  	  
  void Linux_SambaCommonSecurityForShareInstanceNameEnumeration::reset(){
  	
  	currentElementP=firstElementP;
  };
  
  	  
  bool Linux_SambaCommonSecurityForShareInstanceNameEnumeration::hasNext() const{
  	
  	return (currentElementP!=0);
  
  };
  
  int Linux_SambaCommonSecurityForShareInstanceNameEnumeration::getSize() const{
  	
    int size=0;
    Linux_SambaCommonSecurityForShareInstanceNameEnumerationElement* followingP=firstElementP;
  	
  	while(followingP!=0){
        followingP=followingP->m_nextP;
        size++;
    }
  	
    return size;
  };
  
  const Linux_SambaCommonSecurityForShareInstanceName&  
   Linux_SambaCommonSecurityForShareInstanceNameEnumeration::getElement(int pos) const{
   
    Linux_SambaCommonSecurityForShareInstanceNameEnumerationElement* followingP=firstElementP;
   
    int i=0;
    while((followingP!=0)&&(i<pos)){
        followingP=followingP->m_nextP;
        i++;
    }
    
    return *(followingP->m_elementP);
  };
  
  	  
  const Linux_SambaCommonSecurityForShareInstanceName&
   Linux_SambaCommonSecurityForShareInstanceNameEnumeration::getNext() {
   	
  	 Linux_SambaCommonSecurityForShareInstanceNameEnumerationElement* currentP=
  	  currentElementP;
  	 currentElementP=currentElementP->m_nextP;
  	 
  	 return *(currentP->m_elementP);
  };
  	  
  void Linux_SambaCommonSecurityForShareInstanceNameEnumeration::addElement
   (const Linux_SambaCommonSecurityForShareInstanceName& elementP){
   	
  	if(firstElementP==0){
  	  firstElementP=new Linux_SambaCommonSecurityForShareInstanceNameEnumerationElement();
  	  firstElementP->m_elementP=new Linux_SambaCommonSecurityForShareInstanceName(elementP);
  	  endElementP=firstElementP;
  	  currentElementP=firstElementP;
  	}else{
  	  endElementP->m_nextP=new Linux_SambaCommonSecurityForShareInstanceNameEnumerationElement();
  	  endElementP=endElementP->m_nextP;
  	  endElementP->m_elementP=new Linux_SambaCommonSecurityForShareInstanceName(elementP);
  	}
  };
  
  Linux_SambaCommonSecurityForShareInstanceNameEnumeration::operator CmpiArray() const{
  	int size=getSize();
   	CmpiArray arr=CmpiArray(size,CMPI_instance);
   	for(int i=0;i<size;i++){
   	  arr[i]=getElement(i).getObjectPath();
   	}
   	return arr;
  };  
}
 
