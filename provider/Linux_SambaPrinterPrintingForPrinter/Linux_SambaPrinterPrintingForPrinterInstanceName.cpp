/**
 *  Linux_SambaPrinterPrintingForPrinterInstanceName.cpp
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


#include "Linux_SambaPrinterPrintingForPrinterInstanceName.h"
#include "CmpiData.h"
#include "CmpiString.h"
#include "CmpiArray.h"
#include <string>

namespace genProvider {
	
  //*********************************************************
  //Linux_SambaPrinterPrintingForPrinterInstanceName
  //*********************************************************
  
  //empty constructor
  Linux_SambaPrinterPrintingForPrinterInstanceName::
   Linux_SambaPrinterPrintingForPrinterInstanceName(){
   	init();  	
  };
  
  
  //copy constructor	
  Linux_SambaPrinterPrintingForPrinterInstanceName::
   Linux_SambaPrinterPrintingForPrinterInstanceName
   (const Linux_SambaPrinterPrintingForPrinterInstanceName& original){
   	init(original);  	
  };
  
  
  //contructor using CmpiObjectPath
  Linux_SambaPrinterPrintingForPrinterInstanceName::
   Linux_SambaPrinterPrintingForPrinterInstanceName (const CmpiObjectPath& path){
    
    init();
    
    m_CIMClassNameP=path.getClassName().charPtr();
    
    CmpiString namespaceOP;
    namespaceOP=path.getNameSpace();
    setNamespace(namespaceOP.charPtr(),1);
    
    CmpiObjectPath SettingData = path.getKey("SettingData");
    setSettingData(Linux_SambaPrinterPrintingOptionsInstanceName(SettingData));
    
    CmpiObjectPath ManagedElement = path.getKey("ManagedElement");
    setManagedElement(Linux_SambaPrinterOptionsInstanceName(ManagedElement));
    
  }
  
  
  //destructor
  Linux_SambaPrinterPrintingForPrinterInstanceName::
   ~Linux_SambaPrinterPrintingForPrinterInstanceName(){
   	reset();  	  
  };
  
  
  //copy operator
  Linux_SambaPrinterPrintingForPrinterInstanceName&
   Linux_SambaPrinterPrintingForPrinterInstanceName::operator=
   (const Linux_SambaPrinterPrintingForPrinterInstanceName& original){    
    init(original);
   	return *this;    
  }
  
  
  //returns the related CmpiObjectPath
  CmpiObjectPath Linux_SambaPrinterPrintingForPrinterInstanceName::
   getObjectPath() const{
   	
   	CmpiObjectPath objectPath(m_namespace, m_CIMClassNameP);

  	objectPath.setKey("SettingData",CmpiData(m_SettingData.getObjectPath()));

  	objectPath.setKey("ManagedElement",CmpiData(m_ManagedElement.getObjectPath()));
  	
  	return objectPath;
  	
  }
  
  
  //adds the related CmpiObjectPath to an existing cmpiInstance
  void Linux_SambaPrinterPrintingForPrinterInstanceName::fillKeys(CmpiInstance& cmpiInstance) const{
  	

  	if(isSet.SettingData){
  	  cmpiInstance.setProperty("SettingData",CmpiData(m_SettingData.getObjectPath()));
  	}

  	if(isSet.ManagedElement){
  	  cmpiInstance.setProperty("ManagedElement",CmpiData(m_ManagedElement.getObjectPath()));
  	}
  }
  
  
  //NameSpace related methods
  unsigned int Linux_SambaPrinterPrintingForPrinterInstanceName::
   isNameSpaceSet() const{
  	return isSet.m_namespace;
  }
  
  const char * Linux_SambaPrinterPrintingForPrinterInstanceName::
   getNamespace() const {
    if(!isSet.m_namespace)
   	  throw CmpiErrorFormater::getErrorException(
   	   CmpiErrorFormater::NOT_SET,
   	   "NameSpace not set in Linux_SambaPrinterPrintingForPrinter instanceName");
  	return m_namespace;
  }

  void Linux_SambaPrinterPrintingForPrinterInstanceName::
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
  unsigned int Linux_SambaPrinterPrintingForPrinterInstanceName::isSettingDataSet() const{
    return isSet.SettingData;
  }
  void Linux_SambaPrinterPrintingForPrinterInstanceName::
   setSettingData(const Linux_SambaPrinterPrintingOptionsInstanceName& val){
    m_SettingData = val;
    isSet.SettingData=1;
  }       
  const Linux_SambaPrinterPrintingOptionsInstanceName& Linux_SambaPrinterPrintingForPrinterInstanceName::
   getSettingData() const{
    
    if(!isSet.SettingData)
   	  throw CmpiErrorFormater::getErrorException(
   	   CmpiErrorFormater::NOT_SET,
   	   "SettingData not set");
   	   	
    return m_SettingData;
  }
       
  //ManagedElement related methods
  unsigned int Linux_SambaPrinterPrintingForPrinterInstanceName::isManagedElementSet() const{
    return isSet.ManagedElement;
  }
  void Linux_SambaPrinterPrintingForPrinterInstanceName::
   setManagedElement(const Linux_SambaPrinterOptionsInstanceName& val){
    m_ManagedElement = val;
    isSet.ManagedElement=1;
  }       
  const Linux_SambaPrinterOptionsInstanceName& Linux_SambaPrinterPrintingForPrinterInstanceName::
   getManagedElement() const{
    
    if(!isSet.ManagedElement)
   	  throw CmpiErrorFormater::getErrorException(
   	   CmpiErrorFormater::NOT_SET,
   	   "ManagedElement not set");
   	   	
    return m_ManagedElement;
  }

  
  //set isSet variables to FALSE
  void Linux_SambaPrinterPrintingForPrinterInstanceName::init(){
  	
  	m_CIMClassNameP="Linux_SambaPrinterPrintingForPrinter";
  	isSet.m_namespace=0;    	
    isSet.SettingData=0;   	
    isSet.ManagedElement=0;
  }
  
  
  //copies another instance properties in this
  void Linux_SambaPrinterPrintingForPrinterInstanceName::init
   (const Linux_SambaPrinterPrintingForPrinterInstanceName& original){
   	init();
   	   	
    m_CIMClassNameP=original.m_CIMClassNameP;
    if(original.isNameSpaceSet()){
      setNamespace(original.getNamespace(),1);
    }   	
    if(original.isSettingDataSet()){
      const Linux_SambaPrinterPrintingOptionsInstanceName& SettingDataOriginal=original.getSettingData();
      setSettingData(SettingDataOriginal);
    }   	
    if(original.isManagedElementSet()){
      const Linux_SambaPrinterOptionsInstanceName& ManagedElementOriginal=original.getManagedElement();
      setManagedElement(ManagedElementOriginal);
    }    
  }
  
  //reset the instanceName data
  void Linux_SambaPrinterPrintingForPrinterInstanceName::reset(){   	
  	if (isSet.m_namespace)
  	  delete(m_namespace);  	  
  };
  
  
  
  
  //*********************************************************
  //Linux_SambaPrinterPrintingForPrinterInstanceNameEnumerationElement	
  //*********************************************************
  
  Linux_SambaPrinterPrintingForPrinterInstanceNameEnumerationElement::
   Linux_SambaPrinterPrintingForPrinterInstanceNameEnumerationElement(){
   	
  	m_elementP=0;
  	m_nextP=0;
  	  
  };
  
  
  Linux_SambaPrinterPrintingForPrinterInstanceNameEnumerationElement::
   ~Linux_SambaPrinterPrintingForPrinterInstanceNameEnumerationElement(){
   	
  	if (m_elementP!=0)
  	  delete(m_elementP);
  	if (m_nextP!=0)
  	  delete(m_nextP);
  	  
  };

  
  //*********************************************************
  //Linux_SambaPrinterPrintingForPrinterInstanceNameEnumeration
  //*********************************************************
  
  Linux_SambaPrinterPrintingForPrinterInstanceNameEnumeration::
   Linux_SambaPrinterPrintingForPrinterInstanceNameEnumeration(){
   	
  	 firstElementP=0;
     currentElementP=0;
     endElementP=0;
  };
  
  Linux_SambaPrinterPrintingForPrinterInstanceNameEnumeration::
   Linux_SambaPrinterPrintingForPrinterInstanceNameEnumeration(const CmpiArray& arr){
  	
  	firstElementP=0;
    currentElementP=0;
    endElementP=0;
    
    int size = arr.size();
    for (int i=0; i < size; i++) {
     addElement(Linux_SambaPrinterPrintingForPrinterInstanceName(arr[i]));
    }
  }
  
  Linux_SambaPrinterPrintingForPrinterInstanceNameEnumeration::
   Linux_SambaPrinterPrintingForPrinterInstanceNameEnumeration(
   const Linux_SambaPrinterPrintingForPrinterInstanceNameEnumeration& original){
   	
     firstElementP=0;
     currentElementP=0;
     endElementP=0;
  	 
     int size=original.getSize();
     for(int i=0;i<size;i++)
       addElement(original.getElement(i));           
  };
  
  	  
  Linux_SambaPrinterPrintingForPrinterInstanceNameEnumeration::
   ~Linux_SambaPrinterPrintingForPrinterInstanceNameEnumeration(){
   	
  	if (firstElementP!=0)
  	  delete(firstElementP);
  	  	
  };
  
  	  
  void Linux_SambaPrinterPrintingForPrinterInstanceNameEnumeration::reset(){
  	
  	currentElementP=firstElementP;
  };
  
  	  
  bool Linux_SambaPrinterPrintingForPrinterInstanceNameEnumeration::hasNext() const{
  	
  	return (currentElementP!=0);
  
  };
  
  int Linux_SambaPrinterPrintingForPrinterInstanceNameEnumeration::getSize() const{
  	
    int size=0;
    Linux_SambaPrinterPrintingForPrinterInstanceNameEnumerationElement* followingP=firstElementP;
  	
  	while(followingP!=0){
        followingP=followingP->m_nextP;
        size++;
    }
  	
    return size;
  };
  
  const Linux_SambaPrinterPrintingForPrinterInstanceName&  
   Linux_SambaPrinterPrintingForPrinterInstanceNameEnumeration::getElement(int pos) const{
   
    Linux_SambaPrinterPrintingForPrinterInstanceNameEnumerationElement* followingP=firstElementP;
   
    int i=0;
    while((followingP!=0)&&(i<pos)){
        followingP=followingP->m_nextP;
        i++;
    }
    
    return *(followingP->m_elementP);
  };
  
  	  
  const Linux_SambaPrinterPrintingForPrinterInstanceName&
   Linux_SambaPrinterPrintingForPrinterInstanceNameEnumeration::getNext() {
   	
  	 Linux_SambaPrinterPrintingForPrinterInstanceNameEnumerationElement* currentP=
  	  currentElementP;
  	 currentElementP=currentElementP->m_nextP;
  	 
  	 return *(currentP->m_elementP);
  };
  	  
  void Linux_SambaPrinterPrintingForPrinterInstanceNameEnumeration::addElement
   (const Linux_SambaPrinterPrintingForPrinterInstanceName& elementP){
   	
  	if(firstElementP==0){
  	  firstElementP=new Linux_SambaPrinterPrintingForPrinterInstanceNameEnumerationElement();
  	  firstElementP->m_elementP=new Linux_SambaPrinterPrintingForPrinterInstanceName(elementP);
  	  endElementP=firstElementP;
  	  currentElementP=firstElementP;
  	}else{
  	  endElementP->m_nextP=new Linux_SambaPrinterPrintingForPrinterInstanceNameEnumerationElement();
  	  endElementP=endElementP->m_nextP;
  	  endElementP->m_elementP=new Linux_SambaPrinterPrintingForPrinterInstanceName(elementP);
  	}
  };
  
  Linux_SambaPrinterPrintingForPrinterInstanceNameEnumeration::operator CmpiArray() const{
  	int size=getSize();
   	CmpiArray arr=CmpiArray(size,CMPI_instance);
   	for(int i=0;i<size;i++){
   	  arr[i]=getElement(i).getObjectPath();
   	}
   	return arr;
  };  
}
 
