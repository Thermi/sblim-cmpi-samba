/**
 *  Linux_SambaSharePrinterBrowseForPrinterInstanceName.cpp
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


#include "Linux_SambaSharePrinterBrowseForPrinterInstanceName.h"
#include "CmpiData.h"
#include "CmpiString.h"
#include "CmpiArray.h"
#include <string>

namespace genProvider {
	
  //*********************************************************
  //Linux_SambaSharePrinterBrowseForPrinterInstanceName
  //*********************************************************
  
  //empty constructor
  Linux_SambaSharePrinterBrowseForPrinterInstanceName::
   Linux_SambaSharePrinterBrowseForPrinterInstanceName(){
   	init();  	
  };
  
  
  //copy constructor	
  Linux_SambaSharePrinterBrowseForPrinterInstanceName::
   Linux_SambaSharePrinterBrowseForPrinterInstanceName
   (const Linux_SambaSharePrinterBrowseForPrinterInstanceName& original){
   	init(original);  	
  };
  
  
  //contructor using CmpiObjectPath
  Linux_SambaSharePrinterBrowseForPrinterInstanceName::
   Linux_SambaSharePrinterBrowseForPrinterInstanceName (const CmpiObjectPath& path){
    
    init();
    
    m_CIMClassNameP=path.getClassName().charPtr();
    
    CmpiString namespaceOP;
    namespaceOP=path.getNameSpace();
    setNamespace(namespaceOP.charPtr(),1);
    
    CmpiObjectPath ManagedElement = path.getKey("ManagedElement");
    setManagedElement(Linux_SambaPrinterOptionsInstanceName(ManagedElement));
    
    CmpiObjectPath SettingData = path.getKey("SettingData");
    setSettingData(Linux_SambaSharePrinterBrowseOptionsInstanceName(SettingData));
    
  }
  
  
  //destructor
  Linux_SambaSharePrinterBrowseForPrinterInstanceName::
   ~Linux_SambaSharePrinterBrowseForPrinterInstanceName(){
   	reset();  	  
  };
  
  
  //copy operator
  Linux_SambaSharePrinterBrowseForPrinterInstanceName&
   Linux_SambaSharePrinterBrowseForPrinterInstanceName::operator=
   (const Linux_SambaSharePrinterBrowseForPrinterInstanceName& original){    
    init(original);
   	return *this;    
  }
  
  
  //returns the related CmpiObjectPath
  CmpiObjectPath Linux_SambaSharePrinterBrowseForPrinterInstanceName::
   getObjectPath() const{
   	
   	CmpiObjectPath objectPath(m_namespace, m_CIMClassNameP);

  	objectPath.setKey("ManagedElement",CmpiData(m_ManagedElement.getObjectPath()));

  	objectPath.setKey("SettingData",CmpiData(m_SettingData.getObjectPath()));
  	
  	return objectPath;
  	
  }
  
  
  //adds the related CmpiObjectPath to an existing cmpiInstance
  void Linux_SambaSharePrinterBrowseForPrinterInstanceName::fillKeys(CmpiInstance& cmpiInstance) const{
  	

  	if(isSet.ManagedElement){
  	  cmpiInstance.setProperty("ManagedElement",CmpiData(m_ManagedElement.getObjectPath()));
  	}

  	if(isSet.SettingData){
  	  cmpiInstance.setProperty("SettingData",CmpiData(m_SettingData.getObjectPath()));
  	}
  }
  
  
  //NameSpace related methods
  unsigned int Linux_SambaSharePrinterBrowseForPrinterInstanceName::
   isNameSpaceSet() const{
  	return isSet.m_namespace;
  }
  
  const char * Linux_SambaSharePrinterBrowseForPrinterInstanceName::
   getNamespace() const {
    if(!isSet.m_namespace)
   	  throw CmpiErrorFormater::getErrorException(
   	   CmpiErrorFormater::NOT_SET,
   	   "NameSpace not set in Linux_SambaSharePrinterBrowseForPrinter instanceName");
  	return m_namespace;
  }

  void Linux_SambaSharePrinterBrowseForPrinterInstanceName::
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
  unsigned int Linux_SambaSharePrinterBrowseForPrinterInstanceName::isManagedElementSet() const{
    return isSet.ManagedElement;
  }
  void Linux_SambaSharePrinterBrowseForPrinterInstanceName::
   setManagedElement(const Linux_SambaPrinterOptionsInstanceName& val){
    m_ManagedElement = val;
    isSet.ManagedElement=1;
  }       
  const Linux_SambaPrinterOptionsInstanceName& Linux_SambaSharePrinterBrowseForPrinterInstanceName::
   getManagedElement() const{
    
    if(!isSet.ManagedElement)
   	  throw CmpiErrorFormater::getErrorException(
   	   CmpiErrorFormater::NOT_SET,
   	   "ManagedElement not set");
   	   	
    return m_ManagedElement;
  }
       
  //SettingData related methods
  unsigned int Linux_SambaSharePrinterBrowseForPrinterInstanceName::isSettingDataSet() const{
    return isSet.SettingData;
  }
  void Linux_SambaSharePrinterBrowseForPrinterInstanceName::
   setSettingData(const Linux_SambaSharePrinterBrowseOptionsInstanceName& val){
    m_SettingData = val;
    isSet.SettingData=1;
  }       
  const Linux_SambaSharePrinterBrowseOptionsInstanceName& Linux_SambaSharePrinterBrowseForPrinterInstanceName::
   getSettingData() const{
    
    if(!isSet.SettingData)
   	  throw CmpiErrorFormater::getErrorException(
   	   CmpiErrorFormater::NOT_SET,
   	   "SettingData not set");
   	   	
    return m_SettingData;
  }

  
  //set isSet variables to FALSE
  void Linux_SambaSharePrinterBrowseForPrinterInstanceName::init(){
  	
  	m_CIMClassNameP="Linux_SambaSharePrinterBrowseForPrinter";
  	isSet.m_namespace=0;    	
    isSet.ManagedElement=0;   	
    isSet.SettingData=0;
  }
  
  
  //copies another instance properties in this
  void Linux_SambaSharePrinterBrowseForPrinterInstanceName::init
   (const Linux_SambaSharePrinterBrowseForPrinterInstanceName& original){
   	init();
   	   	
    m_CIMClassNameP=original.m_CIMClassNameP;
    if(original.isNameSpaceSet()){
      setNamespace(original.getNamespace(),1);
    }   	
    if(original.isManagedElementSet()){
      const Linux_SambaPrinterOptionsInstanceName& ManagedElementOriginal=original.getManagedElement();
      setManagedElement(ManagedElementOriginal);
    }   	
    if(original.isSettingDataSet()){
      const Linux_SambaSharePrinterBrowseOptionsInstanceName& SettingDataOriginal=original.getSettingData();
      setSettingData(SettingDataOriginal);
    }    
  }
  
  //reset the instanceName data
  void Linux_SambaSharePrinterBrowseForPrinterInstanceName::reset(){   	
  	if (isSet.m_namespace)
  	  delete(m_namespace);  	  
  };
  
  
  
  
  //*********************************************************
  //Linux_SambaSharePrinterBrowseForPrinterInstanceNameEnumerationElement	
  //*********************************************************
  
  Linux_SambaSharePrinterBrowseForPrinterInstanceNameEnumerationElement::
   Linux_SambaSharePrinterBrowseForPrinterInstanceNameEnumerationElement(){
   	
  	m_elementP=0;
  	m_nextP=0;
  	  
  };
  
  
  Linux_SambaSharePrinterBrowseForPrinterInstanceNameEnumerationElement::
   ~Linux_SambaSharePrinterBrowseForPrinterInstanceNameEnumerationElement(){
   	
  	if (m_elementP!=0)
  	  delete(m_elementP);
  	if (m_nextP!=0)
  	  delete(m_nextP);
  	  
  };

  
  //*********************************************************
  //Linux_SambaSharePrinterBrowseForPrinterInstanceNameEnumeration
  //*********************************************************
  
  Linux_SambaSharePrinterBrowseForPrinterInstanceNameEnumeration::
   Linux_SambaSharePrinterBrowseForPrinterInstanceNameEnumeration(){
   	
  	 firstElementP=0;
     currentElementP=0;
     endElementP=0;
  };
  
  Linux_SambaSharePrinterBrowseForPrinterInstanceNameEnumeration::
   Linux_SambaSharePrinterBrowseForPrinterInstanceNameEnumeration(const CmpiArray& arr){
  	
  	firstElementP=0;
    currentElementP=0;
    endElementP=0;
    
    int size = arr.size();
    for (int i=0; i < size; i++) {
     addElement(Linux_SambaSharePrinterBrowseForPrinterInstanceName(arr[i]));
    }
  }
  
  Linux_SambaSharePrinterBrowseForPrinterInstanceNameEnumeration::
   Linux_SambaSharePrinterBrowseForPrinterInstanceNameEnumeration(
   const Linux_SambaSharePrinterBrowseForPrinterInstanceNameEnumeration& original){
   	
     firstElementP=0;
     currentElementP=0;
     endElementP=0;
  	 
     int size=original.getSize();
     for(int i=0;i<size;i++)
       addElement(original.getElement(i));           
  };
  
  	  
  Linux_SambaSharePrinterBrowseForPrinterInstanceNameEnumeration::
   ~Linux_SambaSharePrinterBrowseForPrinterInstanceNameEnumeration(){
   	
  	if (firstElementP!=0)
  	  delete(firstElementP);
  	  	
  };
  
  	  
  void Linux_SambaSharePrinterBrowseForPrinterInstanceNameEnumeration::reset(){
  	
  	currentElementP=firstElementP;
  };
  
  	  
  bool Linux_SambaSharePrinterBrowseForPrinterInstanceNameEnumeration::hasNext() const{
  	
  	return (currentElementP!=0);
  
  };
  
  int Linux_SambaSharePrinterBrowseForPrinterInstanceNameEnumeration::getSize() const{
  	
    int size=0;
    Linux_SambaSharePrinterBrowseForPrinterInstanceNameEnumerationElement* followingP=firstElementP;
  	
  	while(followingP!=0){
        followingP=followingP->m_nextP;
        size++;
    }
  	
    return size;
  };
  
  const Linux_SambaSharePrinterBrowseForPrinterInstanceName&  
   Linux_SambaSharePrinterBrowseForPrinterInstanceNameEnumeration::getElement(int pos) const{
   
    Linux_SambaSharePrinterBrowseForPrinterInstanceNameEnumerationElement* followingP=firstElementP;
   
    int i=0;
    while((followingP!=0)&&(i<pos)){
        followingP=followingP->m_nextP;
        i++;
    }
    
    return *(followingP->m_elementP);
  };
  
  	  
  const Linux_SambaSharePrinterBrowseForPrinterInstanceName&
   Linux_SambaSharePrinterBrowseForPrinterInstanceNameEnumeration::getNext() {
   	
  	 Linux_SambaSharePrinterBrowseForPrinterInstanceNameEnumerationElement* currentP=
  	  currentElementP;
  	 currentElementP=currentElementP->m_nextP;
  	 
  	 return *(currentP->m_elementP);
  };
  	  
  void Linux_SambaSharePrinterBrowseForPrinterInstanceNameEnumeration::addElement
   (const Linux_SambaSharePrinterBrowseForPrinterInstanceName& elementP){
   	
  	if(firstElementP==0){
  	  firstElementP=new Linux_SambaSharePrinterBrowseForPrinterInstanceNameEnumerationElement();
  	  firstElementP->m_elementP=new Linux_SambaSharePrinterBrowseForPrinterInstanceName(elementP);
  	  endElementP=firstElementP;
  	  currentElementP=firstElementP;
  	}else{
  	  endElementP->m_nextP=new Linux_SambaSharePrinterBrowseForPrinterInstanceNameEnumerationElement();
  	  endElementP=endElementP->m_nextP;
  	  endElementP->m_elementP=new Linux_SambaSharePrinterBrowseForPrinterInstanceName(elementP);
  	}
  };
  
  Linux_SambaSharePrinterBrowseForPrinterInstanceNameEnumeration::operator CmpiArray() const{
  	int size=getSize();
   	CmpiArray arr=CmpiArray(size,CMPI_instance);
   	for(int i=0;i<size;i++){
   	  arr[i]=getElement(i).getObjectPath();
   	}
   	return arr;
  };  
}
 
