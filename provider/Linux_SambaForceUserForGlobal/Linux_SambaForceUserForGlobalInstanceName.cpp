/**
 *  Linux_SambaForceUserForGlobalInstanceName.cpp
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


#include "Linux_SambaForceUserForGlobalInstanceName.h"
#include "CmpiData.h"
#include "CmpiString.h"
#include "CmpiArray.h"
#include <string>

namespace genProvider {
	
  //*********************************************************
  //Linux_SambaForceUserForGlobalInstanceName
  //*********************************************************
  
  //empty constructor
  Linux_SambaForceUserForGlobalInstanceName::
   Linux_SambaForceUserForGlobalInstanceName(){
   	init();  	
  };
  
  
  //copy constructor	
  Linux_SambaForceUserForGlobalInstanceName::
   Linux_SambaForceUserForGlobalInstanceName
   (const Linux_SambaForceUserForGlobalInstanceName& original){
   	init(original);  	
  };
  
  
  //contructor using CmpiObjectPath
  Linux_SambaForceUserForGlobalInstanceName::
   Linux_SambaForceUserForGlobalInstanceName (const CmpiObjectPath& path){
    
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
  Linux_SambaForceUserForGlobalInstanceName::
   ~Linux_SambaForceUserForGlobalInstanceName(){
   	reset();  	  
  };
  
  
  //copy operator
  Linux_SambaForceUserForGlobalInstanceName&
   Linux_SambaForceUserForGlobalInstanceName::operator=
   (const Linux_SambaForceUserForGlobalInstanceName& original){    
    init(original);
   	return *this;    
  }
  
  
  //returns the related CmpiObjectPath
  CmpiObjectPath Linux_SambaForceUserForGlobalInstanceName::
   getObjectPath() const{
   	
   	CmpiObjectPath objectPath(m_namespace, m_CIMClassNameP);

  	objectPath.setKey("PartComponent",CmpiData(m_PartComponent.getObjectPath()));

  	objectPath.setKey("GroupComponent",CmpiData(m_GroupComponent.getObjectPath()));
  	
  	return objectPath;
  	
  }
  
  
  //adds the related CmpiObjectPath to an existing cmpiInstance
  void Linux_SambaForceUserForGlobalInstanceName::fillKeys(CmpiInstance& cmpiInstance) const{
  	

  	if(isSet.PartComponent){
  	  cmpiInstance.setProperty("PartComponent",CmpiData(m_PartComponent.getObjectPath()));
  	}

  	if(isSet.GroupComponent){
  	  cmpiInstance.setProperty("GroupComponent",CmpiData(m_GroupComponent.getObjectPath()));
  	}
  }
  
  
  //NameSpace related methods
  unsigned int Linux_SambaForceUserForGlobalInstanceName::
   isNameSpaceSet() const{
  	return isSet.m_namespace;
  }
  
  const char * Linux_SambaForceUserForGlobalInstanceName::
   getNamespace() const {
    if(!isSet.m_namespace)
   	  throw CmpiErrorFormater::getErrorException(
   	   CmpiErrorFormater::NOT_SET,
   	   "NameSpace not set in Linux_SambaForceUserForGlobal instanceName");
  	return m_namespace;
  }

  void Linux_SambaForceUserForGlobalInstanceName::
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
  unsigned int Linux_SambaForceUserForGlobalInstanceName::isPartComponentSet() const{
    return isSet.PartComponent;
  }
  void Linux_SambaForceUserForGlobalInstanceName::
   setPartComponent(const Linux_SambaUserInstanceName& val){
    m_PartComponent = val;
    isSet.PartComponent=1;
  }       
  const Linux_SambaUserInstanceName& Linux_SambaForceUserForGlobalInstanceName::
   getPartComponent() const{
    
    if(!isSet.PartComponent)
   	  throw CmpiErrorFormater::getErrorException(
   	   CmpiErrorFormater::NOT_SET,
   	   "PartComponent not set");
   	   	
    return m_PartComponent;
  }
       
  //GroupComponent related methods
  unsigned int Linux_SambaForceUserForGlobalInstanceName::isGroupComponentSet() const{
    return isSet.GroupComponent;
  }
  void Linux_SambaForceUserForGlobalInstanceName::
   setGroupComponent(const Linux_SambaGlobalOptionsInstanceName& val){
    m_GroupComponent = val;
    isSet.GroupComponent=1;
  }       
  const Linux_SambaGlobalOptionsInstanceName& Linux_SambaForceUserForGlobalInstanceName::
   getGroupComponent() const{
    
    if(!isSet.GroupComponent)
   	  throw CmpiErrorFormater::getErrorException(
   	   CmpiErrorFormater::NOT_SET,
   	   "GroupComponent not set");
   	   	
    return m_GroupComponent;
  }

  
  //set isSet variables to FALSE
  void Linux_SambaForceUserForGlobalInstanceName::init(){
  	
  	m_CIMClassNameP="Linux_SambaForceUserForGlobal";
  	isSet.m_namespace=0;    	
    isSet.PartComponent=0;   	
    isSet.GroupComponent=0;
  }
  
  
  //copies another instance properties in this
  void Linux_SambaForceUserForGlobalInstanceName::init
   (const Linux_SambaForceUserForGlobalInstanceName& original){
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
  void Linux_SambaForceUserForGlobalInstanceName::reset(){   	
  	if (isSet.m_namespace)
  	  delete(m_namespace);  	  
  };
  
  
  
  
  //*********************************************************
  //Linux_SambaForceUserForGlobalInstanceNameEnumerationElement	
  //*********************************************************
  
  Linux_SambaForceUserForGlobalInstanceNameEnumerationElement::
   Linux_SambaForceUserForGlobalInstanceNameEnumerationElement(){
   	
  	m_elementP=0;
  	m_nextP=0;
  	  
  };
  
  
  Linux_SambaForceUserForGlobalInstanceNameEnumerationElement::
   ~Linux_SambaForceUserForGlobalInstanceNameEnumerationElement(){
   	
  	if (m_elementP!=0)
  	  delete(m_elementP);
  	if (m_nextP!=0)
  	  delete(m_nextP);
  	  
  };

  
  //*********************************************************
  //Linux_SambaForceUserForGlobalInstanceNameEnumeration
  //*********************************************************
  
  Linux_SambaForceUserForGlobalInstanceNameEnumeration::
   Linux_SambaForceUserForGlobalInstanceNameEnumeration(){
   	
  	 firstElementP=0;
     currentElementP=0;
     endElementP=0;
  };
  
  Linux_SambaForceUserForGlobalInstanceNameEnumeration::
   Linux_SambaForceUserForGlobalInstanceNameEnumeration(const CmpiArray& arr){
  	
  	firstElementP=0;
    currentElementP=0;
    endElementP=0;
    
    int size = arr.size();
    for (int i=0; i < size; i++) {
     addElement(Linux_SambaForceUserForGlobalInstanceName(arr[i]));
    }
  }
  
  Linux_SambaForceUserForGlobalInstanceNameEnumeration::
   Linux_SambaForceUserForGlobalInstanceNameEnumeration(
   const Linux_SambaForceUserForGlobalInstanceNameEnumeration& original){
   	
     firstElementP=0;
     currentElementP=0;
     endElementP=0;
  	 
     int size=original.getSize();
     for(int i=0;i<size;i++)
       addElement(original.getElement(i));           
  };
  
  	  
  Linux_SambaForceUserForGlobalInstanceNameEnumeration::
   ~Linux_SambaForceUserForGlobalInstanceNameEnumeration(){
   	
  	if (firstElementP!=0)
  	  delete(firstElementP);
  	  	
  };
  
  	  
  void Linux_SambaForceUserForGlobalInstanceNameEnumeration::reset(){
  	
  	currentElementP=firstElementP;
  };
  
  	  
  bool Linux_SambaForceUserForGlobalInstanceNameEnumeration::hasNext() const{
  	
  	return (currentElementP!=0);
  
  };
  
  int Linux_SambaForceUserForGlobalInstanceNameEnumeration::getSize() const{
  	
    int size=0;
    Linux_SambaForceUserForGlobalInstanceNameEnumerationElement* followingP=firstElementP;
  	
  	while(followingP!=0){
        followingP=followingP->m_nextP;
        size++;
    }
  	
    return size;
  };
  
  const Linux_SambaForceUserForGlobalInstanceName&  
   Linux_SambaForceUserForGlobalInstanceNameEnumeration::getElement(int pos) const{
   
    Linux_SambaForceUserForGlobalInstanceNameEnumerationElement* followingP=firstElementP;
   
    int i=0;
    while((followingP!=0)&&(i<pos)){
        followingP=followingP->m_nextP;
        i++;
    }
    
    return *(followingP->m_elementP);
  };
  
  	  
  const Linux_SambaForceUserForGlobalInstanceName&
   Linux_SambaForceUserForGlobalInstanceNameEnumeration::getNext() {
   	
  	 Linux_SambaForceUserForGlobalInstanceNameEnumerationElement* currentP=
  	  currentElementP;
  	 currentElementP=currentElementP->m_nextP;
  	 
  	 return *(currentP->m_elementP);
  };
  	  
  void Linux_SambaForceUserForGlobalInstanceNameEnumeration::addElement
   (const Linux_SambaForceUserForGlobalInstanceName& elementP){
   	
  	if(firstElementP==0){
  	  firstElementP=new Linux_SambaForceUserForGlobalInstanceNameEnumerationElement();
  	  firstElementP->m_elementP=new Linux_SambaForceUserForGlobalInstanceName(elementP);
  	  endElementP=firstElementP;
  	  currentElementP=firstElementP;
  	}else{
  	  endElementP->m_nextP=new Linux_SambaForceUserForGlobalInstanceNameEnumerationElement();
  	  endElementP=endElementP->m_nextP;
  	  endElementP->m_elementP=new Linux_SambaForceUserForGlobalInstanceName(elementP);
  	}
  };
  
  Linux_SambaForceUserForGlobalInstanceNameEnumeration::operator CmpiArray() const{
  	int size=getSize();
   	CmpiArray arr=CmpiArray(size,CMPI_instance);
   	for(int i=0;i<size;i++){
   	  arr[i]=getElement(i).getObjectPath();
   	}
   	return arr;
  };  
}
 
