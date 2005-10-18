/**
 *  Linux_SambaValidUsersForGlobalInstanceName.cpp
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


#include "Linux_SambaValidUsersForGlobalInstanceName.h"
#include "CmpiData.h"
#include "CmpiString.h"
#include "CmpiArray.h"
#include <string>

namespace genProvider {
	
  //*********************************************************
  //Linux_SambaValidUsersForGlobalInstanceName
  //*********************************************************
  
  //empty constructor
  Linux_SambaValidUsersForGlobalInstanceName::
   Linux_SambaValidUsersForGlobalInstanceName(){
   	init();  	
  };
  
  
  //copy constructor	
  Linux_SambaValidUsersForGlobalInstanceName::
   Linux_SambaValidUsersForGlobalInstanceName
   (const Linux_SambaValidUsersForGlobalInstanceName& original){
   	init(original);  	
  };
  
  
  //contructor using CmpiObjectPath
  Linux_SambaValidUsersForGlobalInstanceName::
   Linux_SambaValidUsersForGlobalInstanceName (const CmpiObjectPath& path){
    
    init();
    
    m_CIMClassNameP=path.getClassName().charPtr();
    
    CmpiString namespaceOP;
    namespaceOP=path.getNameSpace();
    setNamespace(namespaceOP.charPtr(),1);
    
    CmpiObjectPath PartComponent = path.getKey("PartComponent");
    setPartComponent(Linux_SambaUserInstanceName(PartComponent));
    
    CmpiObjectPath GroupComponent = path.getKey("GroupComponent");
    setGroupComponent(Linux_SambaGlobalOptionsInstanceName(GroupComponent));
    
  }
  
  
  //destructor
  Linux_SambaValidUsersForGlobalInstanceName::
   ~Linux_SambaValidUsersForGlobalInstanceName(){
   	reset();  	  
  };
  
  
  //copy operator
  Linux_SambaValidUsersForGlobalInstanceName&
   Linux_SambaValidUsersForGlobalInstanceName::operator=
   (const Linux_SambaValidUsersForGlobalInstanceName& original){    
    init(original);
   	return *this;    
  }
  
  
  //returns the related CmpiObjectPath
  CmpiObjectPath Linux_SambaValidUsersForGlobalInstanceName::
   getObjectPath() const{
   	
   	CmpiObjectPath objectPath(m_namespace, m_CIMClassNameP);

  	objectPath.setKey("PartComponent",CmpiData(m_PartComponent.getObjectPath()));

  	objectPath.setKey("GroupComponent",CmpiData(m_GroupComponent.getObjectPath()));
  	
  	return objectPath;
  	
  }
  
  
  //adds the related CmpiObjectPath to an existing cmpiInstance
  void Linux_SambaValidUsersForGlobalInstanceName::fillKeys(CmpiInstance& cmpiInstance) const{
  	

  	if(isSet.PartComponent){
  	  cmpiInstance.setProperty("PartComponent",CmpiData(m_PartComponent.getObjectPath()));
  	}

  	if(isSet.GroupComponent){
  	  cmpiInstance.setProperty("GroupComponent",CmpiData(m_GroupComponent.getObjectPath()));
  	}
  }
  
  
  //NameSpace related methods
  unsigned int Linux_SambaValidUsersForGlobalInstanceName::
   isNameSpaceSet() const{
  	return isSet.m_namespace;
  }
  
  const char * Linux_SambaValidUsersForGlobalInstanceName::
   getNamespace() const {
    if(!isSet.m_namespace)
   	  throw CmpiErrorFormater::getErrorException(
   	   CmpiErrorFormater::NOT_SET,
   	   "NameSpace not set in Linux_SambaValidUsersForGlobal instanceName");
  	return m_namespace;
  }

  void Linux_SambaValidUsersForGlobalInstanceName::
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
       
  //PartComponent related methods
  unsigned int Linux_SambaValidUsersForGlobalInstanceName::isPartComponentSet() const{
    return isSet.PartComponent;
  }
  void Linux_SambaValidUsersForGlobalInstanceName::
   setPartComponent(const Linux_SambaUserInstanceName& val){
    m_PartComponent = val;
    isSet.PartComponent=1;
  }       
  const Linux_SambaUserInstanceName& Linux_SambaValidUsersForGlobalInstanceName::
   getPartComponent() const{
    
    if(!isSet.PartComponent)
   	  throw CmpiErrorFormater::getErrorException(
   	   CmpiErrorFormater::NOT_SET,
   	   "PartComponent not set");
   	   	
    return m_PartComponent;
  }
       
  //GroupComponent related methods
  unsigned int Linux_SambaValidUsersForGlobalInstanceName::isGroupComponentSet() const{
    return isSet.GroupComponent;
  }
  void Linux_SambaValidUsersForGlobalInstanceName::
   setGroupComponent(const Linux_SambaGlobalOptionsInstanceName& val){
    m_GroupComponent = val;
    isSet.GroupComponent=1;
  }       
  const Linux_SambaGlobalOptionsInstanceName& Linux_SambaValidUsersForGlobalInstanceName::
   getGroupComponent() const{
    
    if(!isSet.GroupComponent)
   	  throw CmpiErrorFormater::getErrorException(
   	   CmpiErrorFormater::NOT_SET,
   	   "GroupComponent not set");
   	   	
    return m_GroupComponent;
  }

  
  //set isSet variables to FALSE
  void Linux_SambaValidUsersForGlobalInstanceName::init(){
  	
  	m_CIMClassNameP="Linux_SambaValidUsersForGlobal";
  	isSet.m_namespace=0;    	
    isSet.PartComponent=0;   	
    isSet.GroupComponent=0;
  }
  
  
  //copies another instance properties in this
  void Linux_SambaValidUsersForGlobalInstanceName::init
   (const Linux_SambaValidUsersForGlobalInstanceName& original){
   	init();
   	   	
    m_CIMClassNameP=original.m_CIMClassNameP;
    if(original.isNameSpaceSet()){
      setNamespace(original.getNamespace(),1);
    }   	
    if(original.isPartComponentSet()){
      const Linux_SambaUserInstanceName& PartComponentOriginal=original.getPartComponent();
      setPartComponent(PartComponentOriginal);
    }   	
    if(original.isGroupComponentSet()){
      const Linux_SambaGlobalOptionsInstanceName& GroupComponentOriginal=original.getGroupComponent();
      setGroupComponent(GroupComponentOriginal);
    }    
  }
  
  //reset the instanceName data
  void Linux_SambaValidUsersForGlobalInstanceName::reset(){   	
  	if (isSet.m_namespace)
  	  delete(m_namespace);  	  
  };
  
  
  
  
  //*********************************************************
  //Linux_SambaValidUsersForGlobalInstanceNameEnumerationElement	
  //*********************************************************
  
  Linux_SambaValidUsersForGlobalInstanceNameEnumerationElement::
   Linux_SambaValidUsersForGlobalInstanceNameEnumerationElement(){
   	
  	m_elementP=0;
  	m_nextP=0;
  	  
  };
  
  
  Linux_SambaValidUsersForGlobalInstanceNameEnumerationElement::
   ~Linux_SambaValidUsersForGlobalInstanceNameEnumerationElement(){
   	
  	if (m_elementP!=0)
  	  delete(m_elementP);
  	if (m_nextP!=0)
  	  delete(m_nextP);
  	  
  };

  
  //*********************************************************
  //Linux_SambaValidUsersForGlobalInstanceNameEnumeration
  //*********************************************************
  
  Linux_SambaValidUsersForGlobalInstanceNameEnumeration::
   Linux_SambaValidUsersForGlobalInstanceNameEnumeration(){
   	
  	 firstElementP=0;
     currentElementP=0;
     endElementP=0;
  };
  
  Linux_SambaValidUsersForGlobalInstanceNameEnumeration::
   Linux_SambaValidUsersForGlobalInstanceNameEnumeration(const CmpiArray& arr){
  	
  	firstElementP=0;
    currentElementP=0;
    endElementP=0;
    
    int size = arr.size();
    for (int i=0; i < size; i++) {
     addElement(Linux_SambaValidUsersForGlobalInstanceName(arr[i]));
    }
  }
  
  Linux_SambaValidUsersForGlobalInstanceNameEnumeration::
   Linux_SambaValidUsersForGlobalInstanceNameEnumeration(
   const Linux_SambaValidUsersForGlobalInstanceNameEnumeration& original){
   	
     firstElementP=0;
     currentElementP=0;
     endElementP=0;
  	 
     int size=original.getSize();
     for(int i=0;i<size;i++)
       addElement(original.getElement(i));           
  };
  
  	  
  Linux_SambaValidUsersForGlobalInstanceNameEnumeration::
   ~Linux_SambaValidUsersForGlobalInstanceNameEnumeration(){
   	
  	if (firstElementP!=0)
  	  delete(firstElementP);
  	  	
  };
  
  	  
  void Linux_SambaValidUsersForGlobalInstanceNameEnumeration::reset(){
  	
  	currentElementP=firstElementP;
  };
  
  	  
  bool Linux_SambaValidUsersForGlobalInstanceNameEnumeration::hasNext() const{
  	
  	return (currentElementP!=0);
  
  };
  
  int Linux_SambaValidUsersForGlobalInstanceNameEnumeration::getSize() const{
  	
    int size=0;
    Linux_SambaValidUsersForGlobalInstanceNameEnumerationElement* followingP=firstElementP;
  	
  	while(followingP!=0){
        followingP=followingP->m_nextP;
        size++;
    }
  	
    return size;
  };
  
  const Linux_SambaValidUsersForGlobalInstanceName&  
   Linux_SambaValidUsersForGlobalInstanceNameEnumeration::getElement(int pos) const{
   
    Linux_SambaValidUsersForGlobalInstanceNameEnumerationElement* followingP=firstElementP;
   
    int i=0;
    while((followingP!=0)&&(i<pos)){
        followingP=followingP->m_nextP;
        i++;
    }
    
    return *(followingP->m_elementP);
  };
  
  	  
  const Linux_SambaValidUsersForGlobalInstanceName&
   Linux_SambaValidUsersForGlobalInstanceNameEnumeration::getNext() {
   	
  	 Linux_SambaValidUsersForGlobalInstanceNameEnumerationElement* currentP=
  	  currentElementP;
  	 currentElementP=currentElementP->m_nextP;
  	 
  	 return *(currentP->m_elementP);
  };
  	  
  void Linux_SambaValidUsersForGlobalInstanceNameEnumeration::addElement
   (const Linux_SambaValidUsersForGlobalInstanceName& elementP){
   	
  	if(firstElementP==0){
  	  firstElementP=new Linux_SambaValidUsersForGlobalInstanceNameEnumerationElement();
  	  firstElementP->m_elementP=new Linux_SambaValidUsersForGlobalInstanceName(elementP);
  	  endElementP=firstElementP;
  	  currentElementP=firstElementP;
  	}else{
  	  endElementP->m_nextP=new Linux_SambaValidUsersForGlobalInstanceNameEnumerationElement();
  	  endElementP=endElementP->m_nextP;
  	  endElementP->m_elementP=new Linux_SambaValidUsersForGlobalInstanceName(elementP);
  	}
  };
  
  Linux_SambaValidUsersForGlobalInstanceNameEnumeration::operator CmpiArray() const{
  	int size=getSize();
   	CmpiArray arr=CmpiArray(size,CMPI_instance);
   	for(int i=0;i<size;i++){
   	  arr[i]=getElement(i).getObjectPath();
   	}
   	return arr;
  };  
}
 
