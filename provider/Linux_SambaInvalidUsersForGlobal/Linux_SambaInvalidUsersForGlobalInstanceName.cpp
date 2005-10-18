/**
 *  Linux_SambaInvalidUsersForGlobalInstanceName.cpp
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


#include "Linux_SambaInvalidUsersForGlobalInstanceName.h"
#include "CmpiData.h"
#include "CmpiString.h"
#include "CmpiArray.h"
#include <string>

namespace genProvider {
	
  //*********************************************************
  //Linux_SambaInvalidUsersForGlobalInstanceName
  //*********************************************************
  
  //empty constructor
  Linux_SambaInvalidUsersForGlobalInstanceName::
   Linux_SambaInvalidUsersForGlobalInstanceName(){
   	init();  	
  };
  
  
  //copy constructor	
  Linux_SambaInvalidUsersForGlobalInstanceName::
   Linux_SambaInvalidUsersForGlobalInstanceName
   (const Linux_SambaInvalidUsersForGlobalInstanceName& original){
   	init(original);  	
  };
  
  
  //contructor using CmpiObjectPath
  Linux_SambaInvalidUsersForGlobalInstanceName::
   Linux_SambaInvalidUsersForGlobalInstanceName (const CmpiObjectPath& path){
    
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
  Linux_SambaInvalidUsersForGlobalInstanceName::
   ~Linux_SambaInvalidUsersForGlobalInstanceName(){
   	reset();  	  
  };
  
  
  //copy operator
  Linux_SambaInvalidUsersForGlobalInstanceName&
   Linux_SambaInvalidUsersForGlobalInstanceName::operator=
   (const Linux_SambaInvalidUsersForGlobalInstanceName& original){    
    init(original);
   	return *this;    
  }
  
  
  //returns the related CmpiObjectPath
  CmpiObjectPath Linux_SambaInvalidUsersForGlobalInstanceName::
   getObjectPath() const{
   	
   	CmpiObjectPath objectPath(m_namespace, m_CIMClassNameP);

  	objectPath.setKey("PartComponent",CmpiData(m_PartComponent.getObjectPath()));

  	objectPath.setKey("GroupComponent",CmpiData(m_GroupComponent.getObjectPath()));
  	
  	return objectPath;
  	
  }
  
  
  //adds the related CmpiObjectPath to an existing cmpiInstance
  void Linux_SambaInvalidUsersForGlobalInstanceName::fillKeys(CmpiInstance& cmpiInstance) const{
  	

  	if(isSet.PartComponent){
  	  cmpiInstance.setProperty("PartComponent",CmpiData(m_PartComponent.getObjectPath()));
  	}

  	if(isSet.GroupComponent){
  	  cmpiInstance.setProperty("GroupComponent",CmpiData(m_GroupComponent.getObjectPath()));
  	}
  }
  
  
  //NameSpace related methods
  unsigned int Linux_SambaInvalidUsersForGlobalInstanceName::
   isNameSpaceSet() const{
  	return isSet.m_namespace;
  }
  
  const char * Linux_SambaInvalidUsersForGlobalInstanceName::
   getNamespace() const {
    if(!isSet.m_namespace)
   	  throw CmpiErrorFormater::getErrorException(
   	   CmpiErrorFormater::NOT_SET,
   	   "NameSpace not set in Linux_SambaInvalidUsersForGlobal instanceName");
  	return m_namespace;
  }

  void Linux_SambaInvalidUsersForGlobalInstanceName::
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
  unsigned int Linux_SambaInvalidUsersForGlobalInstanceName::isPartComponentSet() const{
    return isSet.PartComponent;
  }
  void Linux_SambaInvalidUsersForGlobalInstanceName::
   setPartComponent(const Linux_SambaUserInstanceName& val){
    m_PartComponent = val;
    isSet.PartComponent=1;
  }       
  const Linux_SambaUserInstanceName& Linux_SambaInvalidUsersForGlobalInstanceName::
   getPartComponent() const{
    
    if(!isSet.PartComponent)
   	  throw CmpiErrorFormater::getErrorException(
   	   CmpiErrorFormater::NOT_SET,
   	   "PartComponent not set");
   	   	
    return m_PartComponent;
  }
       
  //GroupComponent related methods
  unsigned int Linux_SambaInvalidUsersForGlobalInstanceName::isGroupComponentSet() const{
    return isSet.GroupComponent;
  }
  void Linux_SambaInvalidUsersForGlobalInstanceName::
   setGroupComponent(const Linux_SambaGlobalOptionsInstanceName& val){
    m_GroupComponent = val;
    isSet.GroupComponent=1;
  }       
  const Linux_SambaGlobalOptionsInstanceName& Linux_SambaInvalidUsersForGlobalInstanceName::
   getGroupComponent() const{
    
    if(!isSet.GroupComponent)
   	  throw CmpiErrorFormater::getErrorException(
   	   CmpiErrorFormater::NOT_SET,
   	   "GroupComponent not set");
   	   	
    return m_GroupComponent;
  }

  
  //set isSet variables to FALSE
  void Linux_SambaInvalidUsersForGlobalInstanceName::init(){
  	
  	m_CIMClassNameP="Linux_SambaInvalidUsersForGlobal";
  	isSet.m_namespace=0;    	
    isSet.PartComponent=0;   	
    isSet.GroupComponent=0;
  }
  
  
  //copies another instance properties in this
  void Linux_SambaInvalidUsersForGlobalInstanceName::init
   (const Linux_SambaInvalidUsersForGlobalInstanceName& original){
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
  void Linux_SambaInvalidUsersForGlobalInstanceName::reset(){   	
  	if (isSet.m_namespace)
  	  delete(m_namespace);  	  
  };
  
  
  
  
  //*********************************************************
  //Linux_SambaInvalidUsersForGlobalInstanceNameEnumerationElement	
  //*********************************************************
  
  Linux_SambaInvalidUsersForGlobalInstanceNameEnumerationElement::
   Linux_SambaInvalidUsersForGlobalInstanceNameEnumerationElement(){
   	
  	m_elementP=0;
  	m_nextP=0;
  	  
  };
  
  
  Linux_SambaInvalidUsersForGlobalInstanceNameEnumerationElement::
   ~Linux_SambaInvalidUsersForGlobalInstanceNameEnumerationElement(){
   	
  	if (m_elementP!=0)
  	  delete(m_elementP);
  	if (m_nextP!=0)
  	  delete(m_nextP);
  	  
  };

  
  //*********************************************************
  //Linux_SambaInvalidUsersForGlobalInstanceNameEnumeration
  //*********************************************************
  
  Linux_SambaInvalidUsersForGlobalInstanceNameEnumeration::
   Linux_SambaInvalidUsersForGlobalInstanceNameEnumeration(){
   	
  	 firstElementP=0;
     currentElementP=0;
     endElementP=0;
  };
  
  Linux_SambaInvalidUsersForGlobalInstanceNameEnumeration::
   Linux_SambaInvalidUsersForGlobalInstanceNameEnumeration(const CmpiArray& arr){
  	
  	firstElementP=0;
    currentElementP=0;
    endElementP=0;
    
    int size = arr.size();
    for (int i=0; i < size; i++) {
     addElement(Linux_SambaInvalidUsersForGlobalInstanceName(arr[i]));
    }
  }
  
  Linux_SambaInvalidUsersForGlobalInstanceNameEnumeration::
   Linux_SambaInvalidUsersForGlobalInstanceNameEnumeration(
   const Linux_SambaInvalidUsersForGlobalInstanceNameEnumeration& original){
   	
     firstElementP=0;
     currentElementP=0;
     endElementP=0;
  	 
     int size=original.getSize();
     for(int i=0;i<size;i++)
       addElement(original.getElement(i));           
  };
  
  	  
  Linux_SambaInvalidUsersForGlobalInstanceNameEnumeration::
   ~Linux_SambaInvalidUsersForGlobalInstanceNameEnumeration(){
   	
  	if (firstElementP!=0)
  	  delete(firstElementP);
  	  	
  };
  
  	  
  void Linux_SambaInvalidUsersForGlobalInstanceNameEnumeration::reset(){
  	
  	currentElementP=firstElementP;
  };
  
  	  
  bool Linux_SambaInvalidUsersForGlobalInstanceNameEnumeration::hasNext() const{
  	
  	return (currentElementP!=0);
  
  };
  
  int Linux_SambaInvalidUsersForGlobalInstanceNameEnumeration::getSize() const{
  	
    int size=0;
    Linux_SambaInvalidUsersForGlobalInstanceNameEnumerationElement* followingP=firstElementP;
  	
  	while(followingP!=0){
        followingP=followingP->m_nextP;
        size++;
    }
  	
    return size;
  };
  
  const Linux_SambaInvalidUsersForGlobalInstanceName&  
   Linux_SambaInvalidUsersForGlobalInstanceNameEnumeration::getElement(int pos) const{
   
    Linux_SambaInvalidUsersForGlobalInstanceNameEnumerationElement* followingP=firstElementP;
   
    int i=0;
    while((followingP!=0)&&(i<pos)){
        followingP=followingP->m_nextP;
        i++;
    }
    
    return *(followingP->m_elementP);
  };
  
  	  
  const Linux_SambaInvalidUsersForGlobalInstanceName&
   Linux_SambaInvalidUsersForGlobalInstanceNameEnumeration::getNext() {
   	
  	 Linux_SambaInvalidUsersForGlobalInstanceNameEnumerationElement* currentP=
  	  currentElementP;
  	 currentElementP=currentElementP->m_nextP;
  	 
  	 return *(currentP->m_elementP);
  };
  	  
  void Linux_SambaInvalidUsersForGlobalInstanceNameEnumeration::addElement
   (const Linux_SambaInvalidUsersForGlobalInstanceName& elementP){
   	
  	if(firstElementP==0){
  	  firstElementP=new Linux_SambaInvalidUsersForGlobalInstanceNameEnumerationElement();
  	  firstElementP->m_elementP=new Linux_SambaInvalidUsersForGlobalInstanceName(elementP);
  	  endElementP=firstElementP;
  	  currentElementP=firstElementP;
  	}else{
  	  endElementP->m_nextP=new Linux_SambaInvalidUsersForGlobalInstanceNameEnumerationElement();
  	  endElementP=endElementP->m_nextP;
  	  endElementP->m_elementP=new Linux_SambaInvalidUsersForGlobalInstanceName(elementP);
  	}
  };
  
  Linux_SambaInvalidUsersForGlobalInstanceNameEnumeration::operator CmpiArray() const{
  	int size=getSize();
   	CmpiArray arr=CmpiArray(size,CMPI_instance);
   	for(int i=0;i<size;i++){
   	  arr[i]=getElement(i).getObjectPath();
   	}
   	return arr;
  };  
}
 
