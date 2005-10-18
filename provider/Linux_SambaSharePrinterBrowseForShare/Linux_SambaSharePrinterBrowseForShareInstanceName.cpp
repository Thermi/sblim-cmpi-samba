/**
 *  Linux_SambaSharePrinterBrowseForShareInstanceName.cpp
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


#include "Linux_SambaSharePrinterBrowseForShareInstanceName.h"
#include "CmpiData.h"
#include "CmpiString.h"
#include "CmpiArray.h"
#include <string>

namespace genProvider {
	
  //*********************************************************
  //Linux_SambaSharePrinterBrowseForShareInstanceName
  //*********************************************************
  
  //empty constructor
  Linux_SambaSharePrinterBrowseForShareInstanceName::
   Linux_SambaSharePrinterBrowseForShareInstanceName(){
   	init();  	
  };
  
  
  //copy constructor	
  Linux_SambaSharePrinterBrowseForShareInstanceName::
   Linux_SambaSharePrinterBrowseForShareInstanceName
   (const Linux_SambaSharePrinterBrowseForShareInstanceName& original){
   	init(original);  	
  };
  
  
  //contructor using CmpiObjectPath
  Linux_SambaSharePrinterBrowseForShareInstanceName::
   Linux_SambaSharePrinterBrowseForShareInstanceName (const CmpiObjectPath& path){
    
    init();
    
    m_CIMClassNameP=path.getClassName().charPtr();
    
    CmpiString namespaceOP;
    namespaceOP=path.getNameSpace();
    setNamespace(namespaceOP.charPtr(),1);
    
    CmpiObjectPath SettingData = path.getKey("SettingData");
    setSettingData(Linux_SambaSharePrinterBrowseOptionsInstanceName(SettingData));
    
    CmpiObjectPath ManagedElement = path.getKey("ManagedElement");
    setManagedElement(Linux_SambaShareOptionsInstanceName(ManagedElement));
    
  }
  
  
  //destructor
  Linux_SambaSharePrinterBrowseForShareInstanceName::
   ~Linux_SambaSharePrinterBrowseForShareInstanceName(){
   	reset();  	  
  };
  
  
  //copy operator
  Linux_SambaSharePrinterBrowseForShareInstanceName&
   Linux_SambaSharePrinterBrowseForShareInstanceName::operator=
   (const Linux_SambaSharePrinterBrowseForShareInstanceName& original){    
    init(original);
   	return *this;    
  }
  
  
  //returns the related CmpiObjectPath
  CmpiObjectPath Linux_SambaSharePrinterBrowseForShareInstanceName::
   getObjectPath() const{
   	
   	CmpiObjectPath objectPath(m_namespace, m_CIMClassNameP);

  	objectPath.setKey("SettingData",CmpiData(m_SettingData.getObjectPath()));

  	objectPath.setKey("ManagedElement",CmpiData(m_ManagedElement.getObjectPath()));
  	
  	return objectPath;
  	
  }
  
  
  //adds the related CmpiObjectPath to an existing cmpiInstance
  void Linux_SambaSharePrinterBrowseForShareInstanceName::fillKeys(CmpiInstance& cmpiInstance) const{
  	

  	if(isSet.SettingData){
  	  cmpiInstance.setProperty("SettingData",CmpiData(m_SettingData.getObjectPath()));
  	}

  	if(isSet.ManagedElement){
  	  cmpiInstance.setProperty("ManagedElement",CmpiData(m_ManagedElement.getObjectPath()));
  	}
  }
  
  
  //NameSpace related methods
  unsigned int Linux_SambaSharePrinterBrowseForShareInstanceName::
   isNameSpaceSet() const{
  	return isSet.m_namespace;
  }
  
  const char * Linux_SambaSharePrinterBrowseForShareInstanceName::
   getNamespace() const {
    if(!isSet.m_namespace)
   	  throw CmpiErrorFormater::getErrorException(
   	   CmpiErrorFormater::NOT_SET,
   	   "NameSpace not set in Linux_SambaSharePrinterBrowseForShare instanceName");
  	return m_namespace;
  }

  void Linux_SambaSharePrinterBrowseForShareInstanceName::
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
  unsigned int Linux_SambaSharePrinterBrowseForShareInstanceName::isSettingDataSet() const{
    return isSet.SettingData;
  }
  void Linux_SambaSharePrinterBrowseForShareInstanceName::
   setSettingData(const Linux_SambaSharePrinterBrowseOptionsInstanceName& val){
    m_SettingData = val;
    isSet.SettingData=1;
  }       
  const Linux_SambaSharePrinterBrowseOptionsInstanceName& Linux_SambaSharePrinterBrowseForShareInstanceName::
   getSettingData() const{
    
    if(!isSet.SettingData)
   	  throw CmpiErrorFormater::getErrorException(
   	   CmpiErrorFormater::NOT_SET,
   	   "SettingData not set");
   	   	
    return m_SettingData;
  }
       
  //ManagedElement related methods
  unsigned int Linux_SambaSharePrinterBrowseForShareInstanceName::isManagedElementSet() const{
    return isSet.ManagedElement;
  }
  void Linux_SambaSharePrinterBrowseForShareInstanceName::
   setManagedElement(const Linux_SambaShareOptionsInstanceName& val){
    m_ManagedElement = val;
    isSet.ManagedElement=1;
  }       
  const Linux_SambaShareOptionsInstanceName& Linux_SambaSharePrinterBrowseForShareInstanceName::
   getManagedElement() const{
    
    if(!isSet.ManagedElement)
   	  throw CmpiErrorFormater::getErrorException(
   	   CmpiErrorFormater::NOT_SET,
   	   "ManagedElement not set");
   	   	
    return m_ManagedElement;
  }

  
  //set isSet variables to FALSE
  void Linux_SambaSharePrinterBrowseForShareInstanceName::init(){
  	
  	m_CIMClassNameP="Linux_SambaSharePrinterBrowseForShare";
  	isSet.m_namespace=0;    	
    isSet.SettingData=0;   	
    isSet.ManagedElement=0;
  }
  
  
  //copies another instance properties in this
  void Linux_SambaSharePrinterBrowseForShareInstanceName::init
   (const Linux_SambaSharePrinterBrowseForShareInstanceName& original){
   	init();
   	   	
    m_CIMClassNameP=original.m_CIMClassNameP;
    if(original.isNameSpaceSet()){
      setNamespace(original.getNamespace(),1);
    }   	
    if(original.isSettingDataSet()){
      const Linux_SambaSharePrinterBrowseOptionsInstanceName& SettingDataOriginal=original.getSettingData();
      setSettingData(SettingDataOriginal);
    }   	
    if(original.isManagedElementSet()){
      const Linux_SambaShareOptionsInstanceName& ManagedElementOriginal=original.getManagedElement();
      setManagedElement(ManagedElementOriginal);
    }    
  }
  
  //reset the instanceName data
  void Linux_SambaSharePrinterBrowseForShareInstanceName::reset(){   	
  	if (isSet.m_namespace)
  	  delete(m_namespace);  	  
  };
  
  
  
  
  //*********************************************************
  //Linux_SambaSharePrinterBrowseForShareInstanceNameEnumerationElement	
  //*********************************************************
  
  Linux_SambaSharePrinterBrowseForShareInstanceNameEnumerationElement::
   Linux_SambaSharePrinterBrowseForShareInstanceNameEnumerationElement(){
   	
  	m_elementP=0;
  	m_nextP=0;
  	  
  };
  
  
  Linux_SambaSharePrinterBrowseForShareInstanceNameEnumerationElement::
   ~Linux_SambaSharePrinterBrowseForShareInstanceNameEnumerationElement(){
   	
  	if (m_elementP!=0)
  	  delete(m_elementP);
  	if (m_nextP!=0)
  	  delete(m_nextP);
  	  
  };

  
  //*********************************************************
  //Linux_SambaSharePrinterBrowseForShareInstanceNameEnumeration
  //*********************************************************
  
  Linux_SambaSharePrinterBrowseForShareInstanceNameEnumeration::
   Linux_SambaSharePrinterBrowseForShareInstanceNameEnumeration(){
   	
  	 firstElementP=0;
     currentElementP=0;
     endElementP=0;
  };
  
  Linux_SambaSharePrinterBrowseForShareInstanceNameEnumeration::
   Linux_SambaSharePrinterBrowseForShareInstanceNameEnumeration(const CmpiArray& arr){
  	
  	firstElementP=0;
    currentElementP=0;
    endElementP=0;
    
    int size = arr.size();
    for (int i=0; i < size; i++) {
     addElement(Linux_SambaSharePrinterBrowseForShareInstanceName(arr[i]));
    }
  }
  
  Linux_SambaSharePrinterBrowseForShareInstanceNameEnumeration::
   Linux_SambaSharePrinterBrowseForShareInstanceNameEnumeration(
   const Linux_SambaSharePrinterBrowseForShareInstanceNameEnumeration& original){
   	
     firstElementP=0;
     currentElementP=0;
     endElementP=0;
  	 
     int size=original.getSize();
     for(int i=0;i<size;i++)
       addElement(original.getElement(i));           
  };
  
  	  
  Linux_SambaSharePrinterBrowseForShareInstanceNameEnumeration::
   ~Linux_SambaSharePrinterBrowseForShareInstanceNameEnumeration(){
   	
  	if (firstElementP!=0)
  	  delete(firstElementP);
  	  	
  };
  
  	  
  void Linux_SambaSharePrinterBrowseForShareInstanceNameEnumeration::reset(){
  	
  	currentElementP=firstElementP;
  };
  
  	  
  bool Linux_SambaSharePrinterBrowseForShareInstanceNameEnumeration::hasNext() const{
  	
  	return (currentElementP!=0);
  
  };
  
  int Linux_SambaSharePrinterBrowseForShareInstanceNameEnumeration::getSize() const{
  	
    int size=0;
    Linux_SambaSharePrinterBrowseForShareInstanceNameEnumerationElement* followingP=firstElementP;
  	
  	while(followingP!=0){
        followingP=followingP->m_nextP;
        size++;
    }
  	
    return size;
  };
  
  const Linux_SambaSharePrinterBrowseForShareInstanceName&  
   Linux_SambaSharePrinterBrowseForShareInstanceNameEnumeration::getElement(int pos) const{
   
    Linux_SambaSharePrinterBrowseForShareInstanceNameEnumerationElement* followingP=firstElementP;
   
    int i=0;
    while((followingP!=0)&&(i<pos)){
        followingP=followingP->m_nextP;
        i++;
    }
    
    return *(followingP->m_elementP);
  };
  
  	  
  const Linux_SambaSharePrinterBrowseForShareInstanceName&
   Linux_SambaSharePrinterBrowseForShareInstanceNameEnumeration::getNext() {
   	
  	 Linux_SambaSharePrinterBrowseForShareInstanceNameEnumerationElement* currentP=
  	  currentElementP;
  	 currentElementP=currentElementP->m_nextP;
  	 
  	 return *(currentP->m_elementP);
  };
  	  
  void Linux_SambaSharePrinterBrowseForShareInstanceNameEnumeration::addElement
   (const Linux_SambaSharePrinterBrowseForShareInstanceName& elementP){
   	
  	if(firstElementP==0){
  	  firstElementP=new Linux_SambaSharePrinterBrowseForShareInstanceNameEnumerationElement();
  	  firstElementP->m_elementP=new Linux_SambaSharePrinterBrowseForShareInstanceName(elementP);
  	  endElementP=firstElementP;
  	  currentElementP=firstElementP;
  	}else{
  	  endElementP->m_nextP=new Linux_SambaSharePrinterBrowseForShareInstanceNameEnumerationElement();
  	  endElementP=endElementP->m_nextP;
  	  endElementP->m_elementP=new Linux_SambaSharePrinterBrowseForShareInstanceName(elementP);
  	}
  };
  
  Linux_SambaSharePrinterBrowseForShareInstanceNameEnumeration::operator CmpiArray() const{
  	int size=getSize();
   	CmpiArray arr=CmpiArray(size,CMPI_instance);
   	for(int i=0;i<size;i++){
   	  arr[i]=getElement(i).getObjectPath();
   	}
   	return arr;
  };  
}
 
