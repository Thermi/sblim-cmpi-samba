/**
 *  Linux_SambaGroupForUserInstanceName.cpp
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


#include "Linux_SambaGroupForUserInstanceName.h"
#include "CmpiData.h"
#include "CmpiString.h"
#include "CmpiArray.h"
#include <string>

namespace genProvider {
	
  //*********************************************************
  //Linux_SambaGroupForUserInstanceName
  //*********************************************************
  
  //empty constructor
  Linux_SambaGroupForUserInstanceName::
   Linux_SambaGroupForUserInstanceName(){
   	init();  	
  };
  
  
  //copy constructor	
  Linux_SambaGroupForUserInstanceName::
   Linux_SambaGroupForUserInstanceName
   (const Linux_SambaGroupForUserInstanceName& original){
   	init(original);  	
  };
  
  
  //contructor using CmpiObjectPath
  Linux_SambaGroupForUserInstanceName::
   Linux_SambaGroupForUserInstanceName (const CmpiObjectPath& path){
    
    init();
    
    m_CIMClassNameP=path.getClassName().charPtr();
    
    CmpiString namespaceOP;
    namespaceOP=path.getNameSpace();
    setNamespace(namespaceOP.charPtr(),1);
    
    CmpiObjectPath GroupComponent = path.getKey("GroupComponent");
    setGroupComponent(Linux_SambaGroupInstanceName(GroupComponent));
    
    CmpiObjectPath PartComponent = path.getKey("PartComponent");
    setPartComponent(Linux_SambaUserInstanceName(PartComponent));
    
  }
  
  
  //destructor
  Linux_SambaGroupForUserInstanceName::
   ~Linux_SambaGroupForUserInstanceName(){
   	reset();  	  
  };
  
  
  //copy operator
  Linux_SambaGroupForUserInstanceName&
   Linux_SambaGroupForUserInstanceName::operator=
   (const Linux_SambaGroupForUserInstanceName& original){    
    init(original);
   	return *this;    
  }
  
  
  //returns the related CmpiObjectPath
  CmpiObjectPath Linux_SambaGroupForUserInstanceName::
   getObjectPath() const{
   	
   	CmpiObjectPath objectPath(m_namespace, m_CIMClassNameP);

  	objectPath.setKey("GroupComponent",CmpiData(m_GroupComponent.getObjectPath()));

  	objectPath.setKey("PartComponent",CmpiData(m_PartComponent.getObjectPath()));
  	
  	return objectPath;
  	
  }
  
  
  //adds the related CmpiObjectPath to an existing cmpiInstance
  void Linux_SambaGroupForUserInstanceName::fillKeys(CmpiInstance& cmpiInstance) const{
  	

  	if(isSet.GroupComponent){
  	  cmpiInstance.setProperty("GroupComponent",CmpiData(m_GroupComponent.getObjectPath()));
  	}

  	if(isSet.PartComponent){
  	  cmpiInstance.setProperty("PartComponent",CmpiData(m_PartComponent.getObjectPath()));
  	}
  }
  
  
  //NameSpace related methods
  unsigned int Linux_SambaGroupForUserInstanceName::
   isNameSpaceSet() const{
  	return isSet.m_namespace;
  }
  
  const char * Linux_SambaGroupForUserInstanceName::
   getNamespace() const {
    if(!isSet.m_namespace)
   	  throw CmpiErrorFormater::getErrorException(
   	   CmpiErrorFormater::NOT_SET,
   	   "NameSpace not set in Linux_SambaGroupForUser instanceName");
  	return m_namespace;
  }

  void Linux_SambaGroupForUserInstanceName::
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
       
  //GroupComponent related methods
  unsigned int Linux_SambaGroupForUserInstanceName::isGroupComponentSet() const{
    return isSet.GroupComponent;
  }
  void Linux_SambaGroupForUserInstanceName::
   setGroupComponent(const Linux_SambaGroupInstanceName& val){
    m_GroupComponent = val;
    isSet.GroupComponent=1;
  }       
  const Linux_SambaGroupInstanceName& Linux_SambaGroupForUserInstanceName::
   getGroupComponent() const{
    
    if(!isSet.GroupComponent)
   	  throw CmpiErrorFormater::getErrorException(
   	   CmpiErrorFormater::NOT_SET,
   	   "GroupComponent not set");
   	   	
    return m_GroupComponent;
  }
       
  //PartComponent related methods
  unsigned int Linux_SambaGroupForUserInstanceName::isPartComponentSet() const{
    return isSet.PartComponent;
  }
  void Linux_SambaGroupForUserInstanceName::
   setPartComponent(const Linux_SambaUserInstanceName& val){
    m_PartComponent = val;
    isSet.PartComponent=1;
  }       
  const Linux_SambaUserInstanceName& Linux_SambaGroupForUserInstanceName::
   getPartComponent() const{
    
    if(!isSet.PartComponent)
   	  throw CmpiErrorFormater::getErrorException(
   	   CmpiErrorFormater::NOT_SET,
   	   "PartComponent not set");
   	   	
    return m_PartComponent;
  }

  
  //set isSet variables to FALSE
  void Linux_SambaGroupForUserInstanceName::init(){
  	
  	m_CIMClassNameP="Linux_SambaGroupForUser";
  	isSet.m_namespace=0;    	
    isSet.GroupComponent=0;   	
    isSet.PartComponent=0;
  }
  
  
  //copies another instance properties in this
  void Linux_SambaGroupForUserInstanceName::init
   (const Linux_SambaGroupForUserInstanceName& original){
   	init();
   	   	
    m_CIMClassNameP=original.m_CIMClassNameP;
    if(original.isNameSpaceSet()){
      setNamespace(original.getNamespace(),1);
    }   	
    if(original.isGroupComponentSet()){
      const Linux_SambaGroupInstanceName& GroupComponentOriginal=original.getGroupComponent();
      setGroupComponent(GroupComponentOriginal);
    }   	
    if(original.isPartComponentSet()){
      const Linux_SambaUserInstanceName& PartComponentOriginal=original.getPartComponent();
      setPartComponent(PartComponentOriginal);
    }    
  }
  
  //reset the instanceName data
  void Linux_SambaGroupForUserInstanceName::reset(){   	
  	if (isSet.m_namespace)
  	  delete(m_namespace);  	  
  };
  
  
  
  
  //*********************************************************
  //Linux_SambaGroupForUserInstanceNameEnumerationElement	
  //*********************************************************
  
  Linux_SambaGroupForUserInstanceNameEnumerationElement::
   Linux_SambaGroupForUserInstanceNameEnumerationElement(){
   	
  	m_elementP=0;
  	m_nextP=0;
  	  
  };
  
  
  Linux_SambaGroupForUserInstanceNameEnumerationElement::
   ~Linux_SambaGroupForUserInstanceNameEnumerationElement(){
   	
  	if (m_elementP!=0)
  	  delete(m_elementP);
  	if (m_nextP!=0)
  	  delete(m_nextP);
  	  
  };

  
  //*********************************************************
  //Linux_SambaGroupForUserInstanceNameEnumeration
  //*********************************************************
  
  Linux_SambaGroupForUserInstanceNameEnumeration::
   Linux_SambaGroupForUserInstanceNameEnumeration(){
   	
  	 firstElementP=0;
     currentElementP=0;
     endElementP=0;
  };
  
  Linux_SambaGroupForUserInstanceNameEnumeration::
   Linux_SambaGroupForUserInstanceNameEnumeration(const CmpiArray& arr){
  	
  	firstElementP=0;
    currentElementP=0;
    endElementP=0;
    
    int size = arr.size();
    for (int i=0; i < size; i++) {
     addElement(Linux_SambaGroupForUserInstanceName(arr[i]));
    }
  }
  
  Linux_SambaGroupForUserInstanceNameEnumeration::
   Linux_SambaGroupForUserInstanceNameEnumeration(
   const Linux_SambaGroupForUserInstanceNameEnumeration& original){
   	
     firstElementP=0;
     currentElementP=0;
     endElementP=0;
  	 
     int size=original.getSize();
     for(int i=0;i<size;i++)
       addElement(original.getElement(i));           
  };
  
  	  
  Linux_SambaGroupForUserInstanceNameEnumeration::
   ~Linux_SambaGroupForUserInstanceNameEnumeration(){
   	
  	if (firstElementP!=0)
  	  delete(firstElementP);
  	  	
  };
  
  	  
  void Linux_SambaGroupForUserInstanceNameEnumeration::reset(){
  	
  	currentElementP=firstElementP;
  };
  
  	  
  bool Linux_SambaGroupForUserInstanceNameEnumeration::hasNext() const{
  	
  	return (currentElementP!=0);
  
  };
  
  int Linux_SambaGroupForUserInstanceNameEnumeration::getSize() const{
  	
    int size=0;
    Linux_SambaGroupForUserInstanceNameEnumerationElement* followingP=firstElementP;
  	
  	while(followingP!=0){
        followingP=followingP->m_nextP;
        size++;
    }
  	
    return size;
  };
  
  const Linux_SambaGroupForUserInstanceName&  
   Linux_SambaGroupForUserInstanceNameEnumeration::getElement(int pos) const{
   
    Linux_SambaGroupForUserInstanceNameEnumerationElement* followingP=firstElementP;
   
    int i=0;
    while((followingP!=0)&&(i<pos)){
        followingP=followingP->m_nextP;
        i++;
    }
    
    return *(followingP->m_elementP);
  };
  
  	  
  const Linux_SambaGroupForUserInstanceName&
   Linux_SambaGroupForUserInstanceNameEnumeration::getNext() {
   	
  	 Linux_SambaGroupForUserInstanceNameEnumerationElement* currentP=
  	  currentElementP;
  	 currentElementP=currentElementP->m_nextP;
  	 
  	 return *(currentP->m_elementP);
  };
  	  
  void Linux_SambaGroupForUserInstanceNameEnumeration::addElement
   (const Linux_SambaGroupForUserInstanceName& elementP){
   	
  	if(firstElementP==0){
  	  firstElementP=new Linux_SambaGroupForUserInstanceNameEnumerationElement();
  	  firstElementP->m_elementP=new Linux_SambaGroupForUserInstanceName(elementP);
  	  endElementP=firstElementP;
  	  currentElementP=firstElementP;
  	}else{
  	  endElementP->m_nextP=new Linux_SambaGroupForUserInstanceNameEnumerationElement();
  	  endElementP=endElementP->m_nextP;
  	  endElementP->m_elementP=new Linux_SambaGroupForUserInstanceName(elementP);
  	}
  };
  
  Linux_SambaGroupForUserInstanceNameEnumeration::operator CmpiArray() const{
  	int size=getSize();
   	CmpiArray arr=CmpiArray(size,CMPI_instance);
   	for(int i=0;i<size;i++){
   	  arr[i]=getElement(i).getObjectPath();
   	}
   	return arr;
  };  
}
 
