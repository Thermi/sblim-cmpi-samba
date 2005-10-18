/**
 *  Linux_SambaReadListForShareInstanceName.cpp
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


#include "Linux_SambaReadListForShareInstanceName.h"
#include "CmpiData.h"
#include "CmpiString.h"
#include "CmpiArray.h"
#include <string>

namespace genProvider {
	
  //*********************************************************
  //Linux_SambaReadListForShareInstanceName
  //*********************************************************
  
  //empty constructor
  Linux_SambaReadListForShareInstanceName::
   Linux_SambaReadListForShareInstanceName(){
   	init();  	
  };
  
  
  //copy constructor	
  Linux_SambaReadListForShareInstanceName::
   Linux_SambaReadListForShareInstanceName
   (const Linux_SambaReadListForShareInstanceName& original){
   	init(original);  	
  };
  
  
  //contructor using CmpiObjectPath
  Linux_SambaReadListForShareInstanceName::
   Linux_SambaReadListForShareInstanceName (const CmpiObjectPath& path){
    
    init();
    
    m_CIMClassNameP=path.getClassName().charPtr();
    
    CmpiString namespaceOP;
    namespaceOP=path.getNameSpace();
    setNamespace(namespaceOP.charPtr(),1);
    
    CmpiObjectPath PartComponent = path.getKey("PartComponent");
    setPartComponent(Linux_SambaUserInstanceName(PartComponent));
    
    CmpiObjectPath GroupComponent = path.getKey("GroupComponent");
    setGroupComponent(Linux_SambaShareOptionsInstanceName(GroupComponent));
    
  }
  
  
  //destructor
  Linux_SambaReadListForShareInstanceName::
   ~Linux_SambaReadListForShareInstanceName(){
   	reset();  	  
  };
  
  
  //copy operator
  Linux_SambaReadListForShareInstanceName&
   Linux_SambaReadListForShareInstanceName::operator=
   (const Linux_SambaReadListForShareInstanceName& original){    
    init(original);
   	return *this;    
  }
  
  
  //returns the related CmpiObjectPath
  CmpiObjectPath Linux_SambaReadListForShareInstanceName::
   getObjectPath() const{
   	
   	CmpiObjectPath objectPath(m_namespace, m_CIMClassNameP);

  	objectPath.setKey("PartComponent",CmpiData(m_PartComponent.getObjectPath()));

  	objectPath.setKey("GroupComponent",CmpiData(m_GroupComponent.getObjectPath()));
  	
  	return objectPath;
  	
  }
  
  
  //adds the related CmpiObjectPath to an existing cmpiInstance
  void Linux_SambaReadListForShareInstanceName::fillKeys(CmpiInstance& cmpiInstance) const{
  	

  	if(isSet.PartComponent){
  	  cmpiInstance.setProperty("PartComponent",CmpiData(m_PartComponent.getObjectPath()));
  	}

  	if(isSet.GroupComponent){
  	  cmpiInstance.setProperty("GroupComponent",CmpiData(m_GroupComponent.getObjectPath()));
  	}
  }
  
  
  //NameSpace related methods
  unsigned int Linux_SambaReadListForShareInstanceName::
   isNameSpaceSet() const{
  	return isSet.m_namespace;
  }
  
  const char * Linux_SambaReadListForShareInstanceName::
   getNamespace() const {
    if(!isSet.m_namespace)
   	  throw CmpiErrorFormater::getErrorException(
   	   CmpiErrorFormater::NOT_SET,
   	   "NameSpace not set in Linux_SambaReadListForShare instanceName");
  	return m_namespace;
  }

  void Linux_SambaReadListForShareInstanceName::
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
  unsigned int Linux_SambaReadListForShareInstanceName::isPartComponentSet() const{
    return isSet.PartComponent;
  }
  void Linux_SambaReadListForShareInstanceName::
   setPartComponent(const Linux_SambaUserInstanceName& val){
    m_PartComponent = val;
    isSet.PartComponent=1;
  }       
  const Linux_SambaUserInstanceName& Linux_SambaReadListForShareInstanceName::
   getPartComponent() const{
    
    if(!isSet.PartComponent)
   	  throw CmpiErrorFormater::getErrorException(
   	   CmpiErrorFormater::NOT_SET,
   	   "PartComponent not set");
   	   	
    return m_PartComponent;
  }
       
  //GroupComponent related methods
  unsigned int Linux_SambaReadListForShareInstanceName::isGroupComponentSet() const{
    return isSet.GroupComponent;
  }
  void Linux_SambaReadListForShareInstanceName::
   setGroupComponent(const Linux_SambaShareOptionsInstanceName& val){
    m_GroupComponent = val;
    isSet.GroupComponent=1;
  }       
  const Linux_SambaShareOptionsInstanceName& Linux_SambaReadListForShareInstanceName::
   getGroupComponent() const{
    
    if(!isSet.GroupComponent)
   	  throw CmpiErrorFormater::getErrorException(
   	   CmpiErrorFormater::NOT_SET,
   	   "GroupComponent not set");
   	   	
    return m_GroupComponent;
  }

  
  //set isSet variables to FALSE
  void Linux_SambaReadListForShareInstanceName::init(){
  	
  	m_CIMClassNameP="Linux_SambaReadListForShare";
  	isSet.m_namespace=0;    	
    isSet.PartComponent=0;   	
    isSet.GroupComponent=0;
  }
  
  
  //copies another instance properties in this
  void Linux_SambaReadListForShareInstanceName::init
   (const Linux_SambaReadListForShareInstanceName& original){
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
      const Linux_SambaShareOptionsInstanceName& GroupComponentOriginal=original.getGroupComponent();
      setGroupComponent(GroupComponentOriginal);
    }    
  }
  
  //reset the instanceName data
  void Linux_SambaReadListForShareInstanceName::reset(){   	
  	if (isSet.m_namespace)
  	  delete(m_namespace);  	  
  };
  
  
  
  
  //*********************************************************
  //Linux_SambaReadListForShareInstanceNameEnumerationElement	
  //*********************************************************
  
  Linux_SambaReadListForShareInstanceNameEnumerationElement::
   Linux_SambaReadListForShareInstanceNameEnumerationElement(){
   	
  	m_elementP=0;
  	m_nextP=0;
  	  
  };
  
  
  Linux_SambaReadListForShareInstanceNameEnumerationElement::
   ~Linux_SambaReadListForShareInstanceNameEnumerationElement(){
   	
  	if (m_elementP!=0)
  	  delete(m_elementP);
  	if (m_nextP!=0)
  	  delete(m_nextP);
  	  
  };

  
  //*********************************************************
  //Linux_SambaReadListForShareInstanceNameEnumeration
  //*********************************************************
  
  Linux_SambaReadListForShareInstanceNameEnumeration::
   Linux_SambaReadListForShareInstanceNameEnumeration(){
   	
  	 firstElementP=0;
     currentElementP=0;
     endElementP=0;
  };
  
  Linux_SambaReadListForShareInstanceNameEnumeration::
   Linux_SambaReadListForShareInstanceNameEnumeration(const CmpiArray& arr){
  	
  	firstElementP=0;
    currentElementP=0;
    endElementP=0;
    
    int size = arr.size();
    for (int i=0; i < size; i++) {
     addElement(Linux_SambaReadListForShareInstanceName(arr[i]));
    }
  }
  
  Linux_SambaReadListForShareInstanceNameEnumeration::
   Linux_SambaReadListForShareInstanceNameEnumeration(
   const Linux_SambaReadListForShareInstanceNameEnumeration& original){
   	
     firstElementP=0;
     currentElementP=0;
     endElementP=0;
  	 
     int size=original.getSize();
     for(int i=0;i<size;i++)
       addElement(original.getElement(i));           
  };
  
  	  
  Linux_SambaReadListForShareInstanceNameEnumeration::
   ~Linux_SambaReadListForShareInstanceNameEnumeration(){
   	
  	if (firstElementP!=0)
  	  delete(firstElementP);
  	  	
  };
  
  	  
  void Linux_SambaReadListForShareInstanceNameEnumeration::reset(){
  	
  	currentElementP=firstElementP;
  };
  
  	  
  bool Linux_SambaReadListForShareInstanceNameEnumeration::hasNext() const{
  	
  	return (currentElementP!=0);
  
  };
  
  int Linux_SambaReadListForShareInstanceNameEnumeration::getSize() const{
  	
    int size=0;
    Linux_SambaReadListForShareInstanceNameEnumerationElement* followingP=firstElementP;
  	
  	while(followingP!=0){
        followingP=followingP->m_nextP;
        size++;
    }
  	
    return size;
  };
  
  const Linux_SambaReadListForShareInstanceName&  
   Linux_SambaReadListForShareInstanceNameEnumeration::getElement(int pos) const{
   
    Linux_SambaReadListForShareInstanceNameEnumerationElement* followingP=firstElementP;
   
    int i=0;
    while((followingP!=0)&&(i<pos)){
        followingP=followingP->m_nextP;
        i++;
    }
    
    return *(followingP->m_elementP);
  };
  
  	  
  const Linux_SambaReadListForShareInstanceName&
   Linux_SambaReadListForShareInstanceNameEnumeration::getNext() {
   	
  	 Linux_SambaReadListForShareInstanceNameEnumerationElement* currentP=
  	  currentElementP;
  	 currentElementP=currentElementP->m_nextP;
  	 
  	 return *(currentP->m_elementP);
  };
  	  
  void Linux_SambaReadListForShareInstanceNameEnumeration::addElement
   (const Linux_SambaReadListForShareInstanceName& elementP){
   	
  	if(firstElementP==0){
  	  firstElementP=new Linux_SambaReadListForShareInstanceNameEnumerationElement();
  	  firstElementP->m_elementP=new Linux_SambaReadListForShareInstanceName(elementP);
  	  endElementP=firstElementP;
  	  currentElementP=firstElementP;
  	}else{
  	  endElementP->m_nextP=new Linux_SambaReadListForShareInstanceNameEnumerationElement();
  	  endElementP=endElementP->m_nextP;
  	  endElementP->m_elementP=new Linux_SambaReadListForShareInstanceName(elementP);
  	}
  };
  
  Linux_SambaReadListForShareInstanceNameEnumeration::operator CmpiArray() const{
  	int size=getSize();
   	CmpiArray arr=CmpiArray(size,CMPI_instance);
   	for(int i=0;i<size;i++){
   	  arr[i]=getElement(i).getObjectPath();
   	}
   	return arr;
  };  
}
 
