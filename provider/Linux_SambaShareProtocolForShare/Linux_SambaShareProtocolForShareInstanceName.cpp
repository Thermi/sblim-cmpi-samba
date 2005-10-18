/**
 *  Linux_SambaShareProtocolForShareInstanceName.cpp
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


#include "Linux_SambaShareProtocolForShareInstanceName.h"
#include "CmpiData.h"
#include "CmpiString.h"
#include "CmpiArray.h"
#include <string>

namespace genProvider {
	
  //*********************************************************
  //Linux_SambaShareProtocolForShareInstanceName
  //*********************************************************
  
  //empty constructor
  Linux_SambaShareProtocolForShareInstanceName::
   Linux_SambaShareProtocolForShareInstanceName(){
   	init();  	
  };
  
  
  //copy constructor	
  Linux_SambaShareProtocolForShareInstanceName::
   Linux_SambaShareProtocolForShareInstanceName
   (const Linux_SambaShareProtocolForShareInstanceName& original){
   	init(original);  	
  };
  
  
  //contructor using CmpiObjectPath
  Linux_SambaShareProtocolForShareInstanceName::
   Linux_SambaShareProtocolForShareInstanceName (const CmpiObjectPath& path){
    
    init();
    
    m_CIMClassNameP=path.getClassName().charPtr();
    
    CmpiString namespaceOP;
    namespaceOP=path.getNameSpace();
    setNamespace(namespaceOP.charPtr(),1);
    
    CmpiObjectPath ManagedElement = path.getKey("ManagedElement");
    setManagedElement(Linux_SambaShareOptionsInstanceName(ManagedElement));
    
    CmpiObjectPath SettingData = path.getKey("SettingData");
    setSettingData(Linux_SambaShareProtocolOptionsInstanceName(SettingData));
    
  }
  
  
  //destructor
  Linux_SambaShareProtocolForShareInstanceName::
   ~Linux_SambaShareProtocolForShareInstanceName(){
   	reset();  	  
  };
  
  
  //copy operator
  Linux_SambaShareProtocolForShareInstanceName&
   Linux_SambaShareProtocolForShareInstanceName::operator=
   (const Linux_SambaShareProtocolForShareInstanceName& original){    
    init(original);
   	return *this;    
  }
  
  
  //returns the related CmpiObjectPath
  CmpiObjectPath Linux_SambaShareProtocolForShareInstanceName::
   getObjectPath() const{
   	
   	CmpiObjectPath objectPath(m_namespace, m_CIMClassNameP);

  	objectPath.setKey("ManagedElement",CmpiData(m_ManagedElement.getObjectPath()));

  	objectPath.setKey("SettingData",CmpiData(m_SettingData.getObjectPath()));
  	
  	return objectPath;
  	
  }
  
  
  //adds the related CmpiObjectPath to an existing cmpiInstance
  void Linux_SambaShareProtocolForShareInstanceName::fillKeys(CmpiInstance& cmpiInstance) const{
  	

  	if(isSet.ManagedElement){
  	  cmpiInstance.setProperty("ManagedElement",CmpiData(m_ManagedElement.getObjectPath()));
  	}

  	if(isSet.SettingData){
  	  cmpiInstance.setProperty("SettingData",CmpiData(m_SettingData.getObjectPath()));
  	}
  }
  
  
  //NameSpace related methods
  unsigned int Linux_SambaShareProtocolForShareInstanceName::
   isNameSpaceSet() const{
  	return isSet.m_namespace;
  }
  
  const char * Linux_SambaShareProtocolForShareInstanceName::
   getNamespace() const {
    if(!isSet.m_namespace)
   	  throw CmpiErrorFormater::getErrorException(
   	   CmpiErrorFormater::NOT_SET,
   	   "NameSpace not set in Linux_SambaShareProtocolForShare instanceName");
  	return m_namespace;
  }

  void Linux_SambaShareProtocolForShareInstanceName::
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
  unsigned int Linux_SambaShareProtocolForShareInstanceName::isManagedElementSet() const{
    return isSet.ManagedElement;
  }
  void Linux_SambaShareProtocolForShareInstanceName::
   setManagedElement(const Linux_SambaShareOptionsInstanceName& val){
    m_ManagedElement = val;
    isSet.ManagedElement=1;
  }       
  const Linux_SambaShareOptionsInstanceName& Linux_SambaShareProtocolForShareInstanceName::
   getManagedElement() const{
    
    if(!isSet.ManagedElement)
   	  throw CmpiErrorFormater::getErrorException(
   	   CmpiErrorFormater::NOT_SET,
   	   "ManagedElement not set");
   	   	
    return m_ManagedElement;
  }
       
  //SettingData related methods
  unsigned int Linux_SambaShareProtocolForShareInstanceName::isSettingDataSet() const{
    return isSet.SettingData;
  }
  void Linux_SambaShareProtocolForShareInstanceName::
   setSettingData(const Linux_SambaShareProtocolOptionsInstanceName& val){
    m_SettingData = val;
    isSet.SettingData=1;
  }       
  const Linux_SambaShareProtocolOptionsInstanceName& Linux_SambaShareProtocolForShareInstanceName::
   getSettingData() const{
    
    if(!isSet.SettingData)
   	  throw CmpiErrorFormater::getErrorException(
   	   CmpiErrorFormater::NOT_SET,
   	   "SettingData not set");
   	   	
    return m_SettingData;
  }

  
  //set isSet variables to FALSE
  void Linux_SambaShareProtocolForShareInstanceName::init(){
  	
  	m_CIMClassNameP="Linux_SambaShareProtocolForShare";
  	isSet.m_namespace=0;    	
    isSet.ManagedElement=0;   	
    isSet.SettingData=0;
  }
  
  
  //copies another instance properties in this
  void Linux_SambaShareProtocolForShareInstanceName::init
   (const Linux_SambaShareProtocolForShareInstanceName& original){
   	init();
   	   	
    m_CIMClassNameP=original.m_CIMClassNameP;
    if(original.isNameSpaceSet()){
      setNamespace(original.getNamespace(),1);
    }   	
    if(original.isManagedElementSet()){
      const Linux_SambaShareOptionsInstanceName& ManagedElementOriginal=original.getManagedElement();
      setManagedElement(ManagedElementOriginal);
    }   	
    if(original.isSettingDataSet()){
      const Linux_SambaShareProtocolOptionsInstanceName& SettingDataOriginal=original.getSettingData();
      setSettingData(SettingDataOriginal);
    }    
  }
  
  //reset the instanceName data
  void Linux_SambaShareProtocolForShareInstanceName::reset(){   	
  	if (isSet.m_namespace)
  	  delete(m_namespace);  	  
  };
  
  
  
  
  //*********************************************************
  //Linux_SambaShareProtocolForShareInstanceNameEnumerationElement	
  //*********************************************************
  
  Linux_SambaShareProtocolForShareInstanceNameEnumerationElement::
   Linux_SambaShareProtocolForShareInstanceNameEnumerationElement(){
   	
  	m_elementP=0;
  	m_nextP=0;
  	  
  };
  
  
  Linux_SambaShareProtocolForShareInstanceNameEnumerationElement::
   ~Linux_SambaShareProtocolForShareInstanceNameEnumerationElement(){
   	
  	if (m_elementP!=0)
  	  delete(m_elementP);
  	if (m_nextP!=0)
  	  delete(m_nextP);
  	  
  };

  
  //*********************************************************
  //Linux_SambaShareProtocolForShareInstanceNameEnumeration
  //*********************************************************
  
  Linux_SambaShareProtocolForShareInstanceNameEnumeration::
   Linux_SambaShareProtocolForShareInstanceNameEnumeration(){
   	
  	 firstElementP=0;
     currentElementP=0;
     endElementP=0;
  };
  
  Linux_SambaShareProtocolForShareInstanceNameEnumeration::
   Linux_SambaShareProtocolForShareInstanceNameEnumeration(const CmpiArray& arr){
  	
  	firstElementP=0;
    currentElementP=0;
    endElementP=0;
    
    int size = arr.size();
    for (int i=0; i < size; i++) {
     addElement(Linux_SambaShareProtocolForShareInstanceName(arr[i]));
    }
  }
  
  Linux_SambaShareProtocolForShareInstanceNameEnumeration::
   Linux_SambaShareProtocolForShareInstanceNameEnumeration(
   const Linux_SambaShareProtocolForShareInstanceNameEnumeration& original){
   	
     firstElementP=0;
     currentElementP=0;
     endElementP=0;
  	 
     int size=original.getSize();
     for(int i=0;i<size;i++)
       addElement(original.getElement(i));           
  };
  
  	  
  Linux_SambaShareProtocolForShareInstanceNameEnumeration::
   ~Linux_SambaShareProtocolForShareInstanceNameEnumeration(){
   	
  	if (firstElementP!=0)
  	  delete(firstElementP);
  	  	
  };
  
  	  
  void Linux_SambaShareProtocolForShareInstanceNameEnumeration::reset(){
  	
  	currentElementP=firstElementP;
  };
  
  	  
  bool Linux_SambaShareProtocolForShareInstanceNameEnumeration::hasNext() const{
  	
  	return (currentElementP!=0);
  
  };
  
  int Linux_SambaShareProtocolForShareInstanceNameEnumeration::getSize() const{
  	
    int size=0;
    Linux_SambaShareProtocolForShareInstanceNameEnumerationElement* followingP=firstElementP;
  	
  	while(followingP!=0){
        followingP=followingP->m_nextP;
        size++;
    }
  	
    return size;
  };
  
  const Linux_SambaShareProtocolForShareInstanceName&  
   Linux_SambaShareProtocolForShareInstanceNameEnumeration::getElement(int pos) const{
   
    Linux_SambaShareProtocolForShareInstanceNameEnumerationElement* followingP=firstElementP;
   
    int i=0;
    while((followingP!=0)&&(i<pos)){
        followingP=followingP->m_nextP;
        i++;
    }
    
    return *(followingP->m_elementP);
  };
  
  	  
  const Linux_SambaShareProtocolForShareInstanceName&
   Linux_SambaShareProtocolForShareInstanceNameEnumeration::getNext() {
   	
  	 Linux_SambaShareProtocolForShareInstanceNameEnumerationElement* currentP=
  	  currentElementP;
  	 currentElementP=currentElementP->m_nextP;
  	 
  	 return *(currentP->m_elementP);
  };
  	  
  void Linux_SambaShareProtocolForShareInstanceNameEnumeration::addElement
   (const Linux_SambaShareProtocolForShareInstanceName& elementP){
   	
  	if(firstElementP==0){
  	  firstElementP=new Linux_SambaShareProtocolForShareInstanceNameEnumerationElement();
  	  firstElementP->m_elementP=new Linux_SambaShareProtocolForShareInstanceName(elementP);
  	  endElementP=firstElementP;
  	  currentElementP=firstElementP;
  	}else{
  	  endElementP->m_nextP=new Linux_SambaShareProtocolForShareInstanceNameEnumerationElement();
  	  endElementP=endElementP->m_nextP;
  	  endElementP->m_elementP=new Linux_SambaShareProtocolForShareInstanceName(elementP);
  	}
  };
  
  Linux_SambaShareProtocolForShareInstanceNameEnumeration::operator CmpiArray() const{
  	int size=getSize();
   	CmpiArray arr=CmpiArray(size,CMPI_instance);
   	for(int i=0;i<size;i++){
   	  arr[i]=getElement(i).getObjectPath();
   	}
   	return arr;
  };  
}
 
