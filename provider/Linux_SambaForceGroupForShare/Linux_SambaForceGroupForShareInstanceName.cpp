/**
 *  Linux_SambaForceGroupForShareInstanceName.cpp
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


#include "Linux_SambaForceGroupForShareInstanceName.h"
#include "CmpiData.h"
#include "CmpiString.h"
#include "CmpiArray.h"
#include <string>

namespace genProvider {
	
  //*********************************************************
  //Linux_SambaForceGroupForShareInstanceName
  //*********************************************************
  
  //empty constructor
  Linux_SambaForceGroupForShareInstanceName::
   Linux_SambaForceGroupForShareInstanceName(){
   	init();  	
  };
  
  
  //copy constructor	
  Linux_SambaForceGroupForShareInstanceName::
   Linux_SambaForceGroupForShareInstanceName
   (const Linux_SambaForceGroupForShareInstanceName& original){
   	init(original);  	
  };
  
  
  //contructor using CmpiObjectPath
  Linux_SambaForceGroupForShareInstanceName::
   Linux_SambaForceGroupForShareInstanceName (const CmpiObjectPath& path){
    
    init();
    
    m_CIMClassNameP=path.getClassName().charPtr();
    
    CmpiString namespaceOP;
    namespaceOP=path.getNameSpace();
    setNamespace(namespaceOP.charPtr(),1);
    
    CmpiObjectPath GroupComponent = path.getKey("GroupComponent");
    setGroupComponent(Linux_SambaShareOptionsInstanceName(GroupComponent));
    
    CmpiObjectPath PartComponent = path.getKey("PartComponent");
    setPartComponent(Linux_SambaGroupInstanceName(PartComponent));
    
  }
  
  
  //destructor
  Linux_SambaForceGroupForShareInstanceName::
   ~Linux_SambaForceGroupForShareInstanceName(){
   	reset();  	  
  };
  
  
  //copy operator
  Linux_SambaForceGroupForShareInstanceName&
   Linux_SambaForceGroupForShareInstanceName::operator=
   (const Linux_SambaForceGroupForShareInstanceName& original){    
    init(original);
   	return *this;    
  }
  
  
  //returns the related CmpiObjectPath
  CmpiObjectPath Linux_SambaForceGroupForShareInstanceName::
   getObjectPath() const{
   	
   	CmpiObjectPath objectPath(m_namespace, m_CIMClassNameP);

  	objectPath.setKey("GroupComponent",CmpiData(m_GroupComponent.getObjectPath()));

  	objectPath.setKey("PartComponent",CmpiData(m_PartComponent.getObjectPath()));
  	
  	return objectPath;
  	
  }
  
  
  //adds the related CmpiObjectPath to an existing cmpiInstance
  void Linux_SambaForceGroupForShareInstanceName::fillKeys(CmpiInstance& cmpiInstance) const{
  	

  	if(isSet.GroupComponent){
  	  cmpiInstance.setProperty("GroupComponent",CmpiData(m_GroupComponent.getObjectPath()));
  	}

  	if(isSet.PartComponent){
  	  cmpiInstance.setProperty("PartComponent",CmpiData(m_PartComponent.getObjectPath()));
  	}
  }
  
  
  //NameSpace related methods
  unsigned int Linux_SambaForceGroupForShareInstanceName::
   isNameSpaceSet() const{
  	return isSet.m_namespace;
  }
  
  const char * Linux_SambaForceGroupForShareInstanceName::
   getNamespace() const {
    if(!isSet.m_namespace)
   	  throw CmpiErrorFormater::getErrorException(
   	   CmpiErrorFormater::NOT_SET,
   	   "NameSpace not set in Linux_SambaForceGroupForShare instanceName");
  	return m_namespace;
  }

  void Linux_SambaForceGroupForShareInstanceName::
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
  unsigned int Linux_SambaForceGroupForShareInstanceName::isGroupComponentSet() const{
    return isSet.GroupComponent;
  }
  void Linux_SambaForceGroupForShareInstanceName::
   setGroupComponent(const Linux_SambaShareOptionsInstanceName& val){
    m_GroupComponent = val;
    isSet.GroupComponent=1;
  }       
  const Linux_SambaShareOptionsInstanceName& Linux_SambaForceGroupForShareInstanceName::
   getGroupComponent() const{
    
    if(!isSet.GroupComponent)
   	  throw CmpiErrorFormater::getErrorException(
   	   CmpiErrorFormater::NOT_SET,
   	   "GroupComponent not set");
   	   	
    return m_GroupComponent;
  }
       
  //PartComponent related methods
  unsigned int Linux_SambaForceGroupForShareInstanceName::isPartComponentSet() const{
    return isSet.PartComponent;
  }
  void Linux_SambaForceGroupForShareInstanceName::
   setPartComponent(const Linux_SambaGroupInstanceName& val){
    m_PartComponent = val;
    isSet.PartComponent=1;
  }       
  const Linux_SambaGroupInstanceName& Linux_SambaForceGroupForShareInstanceName::
   getPartComponent() const{
    
    if(!isSet.PartComponent)
   	  throw CmpiErrorFormater::getErrorException(
   	   CmpiErrorFormater::NOT_SET,
   	   "PartComponent not set");
   	   	
    return m_PartComponent;
  }

  
  //set isSet variables to FALSE
  void Linux_SambaForceGroupForShareInstanceName::init(){
  	
  	m_CIMClassNameP="Linux_SambaForceGroupForShare";
  	isSet.m_namespace=0;    	
    isSet.GroupComponent=0;   	
    isSet.PartComponent=0;
  }
  
  
  //copies another instance properties in this
  void Linux_SambaForceGroupForShareInstanceName::init
   (const Linux_SambaForceGroupForShareInstanceName& original){
   	init();
   	   	
    m_CIMClassNameP=original.m_CIMClassNameP;
    if(original.isNameSpaceSet()){
      setNamespace(original.getNamespace(),1);
    }   	
    if(original.isGroupComponentSet()){
      const Linux_SambaShareOptionsInstanceName& GroupComponentOriginal=original.getGroupComponent();
      setGroupComponent(GroupComponentOriginal);
    }   	
    if(original.isPartComponentSet()){
      const Linux_SambaGroupInstanceName& PartComponentOriginal=original.getPartComponent();
      setPartComponent(PartComponentOriginal);
    }    
  }
  
  //reset the instanceName data
  void Linux_SambaForceGroupForShareInstanceName::reset(){   	
  	if (isSet.m_namespace)
  	  delete(m_namespace);  	  
  };
  
  
  
  
  //*********************************************************
  //Linux_SambaForceGroupForShareInstanceNameEnumerationElement	
  //*********************************************************
  
  Linux_SambaForceGroupForShareInstanceNameEnumerationElement::
   Linux_SambaForceGroupForShareInstanceNameEnumerationElement(){
   	
  	m_elementP=0;
  	m_nextP=0;
  	  
  };
  
  
  Linux_SambaForceGroupForShareInstanceNameEnumerationElement::
   ~Linux_SambaForceGroupForShareInstanceNameEnumerationElement(){
   	
  	if (m_elementP!=0)
  	  delete(m_elementP);
  	if (m_nextP!=0)
  	  delete(m_nextP);
  	  
  };

  
  //*********************************************************
  //Linux_SambaForceGroupForShareInstanceNameEnumeration
  //*********************************************************
  
  Linux_SambaForceGroupForShareInstanceNameEnumeration::
   Linux_SambaForceGroupForShareInstanceNameEnumeration(){
   	
  	 firstElementP=0;
     currentElementP=0;
     endElementP=0;
  };
  
  Linux_SambaForceGroupForShareInstanceNameEnumeration::
   Linux_SambaForceGroupForShareInstanceNameEnumeration(const CmpiArray& arr){
  	
  	firstElementP=0;
    currentElementP=0;
    endElementP=0;
    
    int size = arr.size();
    for (int i=0; i < size; i++) {
     addElement(Linux_SambaForceGroupForShareInstanceName(arr[i]));
    }
  }
  
  Linux_SambaForceGroupForShareInstanceNameEnumeration::
   Linux_SambaForceGroupForShareInstanceNameEnumeration(
   const Linux_SambaForceGroupForShareInstanceNameEnumeration& original){
   	
     firstElementP=0;
     currentElementP=0;
     endElementP=0;
  	 
     int size=original.getSize();
     for(int i=0;i<size;i++)
       addElement(original.getElement(i));           
  };
  
  	  
  Linux_SambaForceGroupForShareInstanceNameEnumeration::
   ~Linux_SambaForceGroupForShareInstanceNameEnumeration(){
   	
  	if (firstElementP!=0)
  	  delete(firstElementP);
  	  	
  };
  
  	  
  void Linux_SambaForceGroupForShareInstanceNameEnumeration::reset(){
  	
  	currentElementP=firstElementP;
  };
  
  	  
  bool Linux_SambaForceGroupForShareInstanceNameEnumeration::hasNext() const{
  	
  	return (currentElementP!=0);
  
  };
  
  int Linux_SambaForceGroupForShareInstanceNameEnumeration::getSize() const{
  	
    int size=0;
    Linux_SambaForceGroupForShareInstanceNameEnumerationElement* followingP=firstElementP;
  	
  	while(followingP!=0){
        followingP=followingP->m_nextP;
        size++;
    }
  	
    return size;
  };
  
  const Linux_SambaForceGroupForShareInstanceName&  
   Linux_SambaForceGroupForShareInstanceNameEnumeration::getElement(int pos) const{
   
    Linux_SambaForceGroupForShareInstanceNameEnumerationElement* followingP=firstElementP;
   
    int i=0;
    while((followingP!=0)&&(i<pos)){
        followingP=followingP->m_nextP;
        i++;
    }
    
    return *(followingP->m_elementP);
  };
  
  	  
  const Linux_SambaForceGroupForShareInstanceName&
   Linux_SambaForceGroupForShareInstanceNameEnumeration::getNext() {
   	
  	 Linux_SambaForceGroupForShareInstanceNameEnumerationElement* currentP=
  	  currentElementP;
  	 currentElementP=currentElementP->m_nextP;
  	 
  	 return *(currentP->m_elementP);
  };
  	  
  void Linux_SambaForceGroupForShareInstanceNameEnumeration::addElement
   (const Linux_SambaForceGroupForShareInstanceName& elementP){
   	
  	if(firstElementP==0){
  	  firstElementP=new Linux_SambaForceGroupForShareInstanceNameEnumerationElement();
  	  firstElementP->m_elementP=new Linux_SambaForceGroupForShareInstanceName(elementP);
  	  endElementP=firstElementP;
  	  currentElementP=firstElementP;
  	}else{
  	  endElementP->m_nextP=new Linux_SambaForceGroupForShareInstanceNameEnumerationElement();
  	  endElementP=endElementP->m_nextP;
  	  endElementP->m_elementP=new Linux_SambaForceGroupForShareInstanceName(elementP);
  	}
  };
  
  Linux_SambaForceGroupForShareInstanceNameEnumeration::operator CmpiArray() const{
  	int size=getSize();
   	CmpiArray arr=CmpiArray(size,CMPI_instance);
   	for(int i=0;i<size;i++){
   	  arr[i]=getElement(i).getObjectPath();
   	}
   	return arr;
  };  
}
 
