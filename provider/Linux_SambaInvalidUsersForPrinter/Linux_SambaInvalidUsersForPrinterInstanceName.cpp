/**
 *  Linux_SambaInvalidUsersForPrinterInstanceName.cpp
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


#include "Linux_SambaInvalidUsersForPrinterInstanceName.h"
#include "CmpiData.h"
#include "CmpiString.h"
#include "CmpiArray.h"
#include <string>

namespace genProvider {
	
  //*********************************************************
  //Linux_SambaInvalidUsersForPrinterInstanceName
  //*********************************************************
  
  //empty constructor
  Linux_SambaInvalidUsersForPrinterInstanceName::
   Linux_SambaInvalidUsersForPrinterInstanceName(){
   	init();  	
  };
  
  
  //copy constructor	
  Linux_SambaInvalidUsersForPrinterInstanceName::
   Linux_SambaInvalidUsersForPrinterInstanceName
   (const Linux_SambaInvalidUsersForPrinterInstanceName& original){
   	init(original);  	
  };
  
  
  //contructor using CmpiObjectPath
  Linux_SambaInvalidUsersForPrinterInstanceName::
   Linux_SambaInvalidUsersForPrinterInstanceName (const CmpiObjectPath& path){
    
    init();
    
    m_CIMClassNameP=path.getClassName().charPtr();
    
    CmpiString namespaceOP;
    namespaceOP=path.getNameSpace();
    setNamespace(namespaceOP.charPtr(),1);
    
    CmpiObjectPath PartComponent = path.getKey("PartComponent");
    setPartComponent(Linux_SambaUserInstanceName(PartComponent));
    
    CmpiObjectPath GroupComponent = path.getKey("GroupComponent");
    setGroupComponent(Linux_SambaPrinterOptionsInstanceName(GroupComponent));
    
  }
  
  
  //destructor
  Linux_SambaInvalidUsersForPrinterInstanceName::
   ~Linux_SambaInvalidUsersForPrinterInstanceName(){
   	reset();  	  
  };
  
  
  //copy operator
  Linux_SambaInvalidUsersForPrinterInstanceName&
   Linux_SambaInvalidUsersForPrinterInstanceName::operator=
   (const Linux_SambaInvalidUsersForPrinterInstanceName& original){    
    init(original);
   	return *this;    
  }
  
  
  //returns the related CmpiObjectPath
  CmpiObjectPath Linux_SambaInvalidUsersForPrinterInstanceName::
   getObjectPath() const{
   	
   	CmpiObjectPath objectPath(m_namespace, m_CIMClassNameP);

  	objectPath.setKey("PartComponent",CmpiData(m_PartComponent.getObjectPath()));

  	objectPath.setKey("GroupComponent",CmpiData(m_GroupComponent.getObjectPath()));
  	
  	return objectPath;
  	
  }
  
  
  //adds the related CmpiObjectPath to an existing cmpiInstance
  void Linux_SambaInvalidUsersForPrinterInstanceName::fillKeys(CmpiInstance& cmpiInstance) const{
  	

  	if(isSet.PartComponent){
  	  cmpiInstance.setProperty("PartComponent",CmpiData(m_PartComponent.getObjectPath()));
  	}

  	if(isSet.GroupComponent){
  	  cmpiInstance.setProperty("GroupComponent",CmpiData(m_GroupComponent.getObjectPath()));
  	}
  }
  
  
  //NameSpace related methods
  unsigned int Linux_SambaInvalidUsersForPrinterInstanceName::
   isNameSpaceSet() const{
  	return isSet.m_namespace;
  }
  
  const char * Linux_SambaInvalidUsersForPrinterInstanceName::
   getNamespace() const {
    if(!isSet.m_namespace)
   	  throw CmpiErrorFormater::getErrorException(
   	   CmpiErrorFormater::NOT_SET,
   	   "NameSpace not set in Linux_SambaInvalidUsersForPrinter instanceName");
  	return m_namespace;
  }

  void Linux_SambaInvalidUsersForPrinterInstanceName::
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
  unsigned int Linux_SambaInvalidUsersForPrinterInstanceName::isPartComponentSet() const{
    return isSet.PartComponent;
  }
  void Linux_SambaInvalidUsersForPrinterInstanceName::
   setPartComponent(const Linux_SambaUserInstanceName& val){
    m_PartComponent = val;
    isSet.PartComponent=1;
  }       
  const Linux_SambaUserInstanceName& Linux_SambaInvalidUsersForPrinterInstanceName::
   getPartComponent() const{
    
    if(!isSet.PartComponent)
   	  throw CmpiErrorFormater::getErrorException(
   	   CmpiErrorFormater::NOT_SET,
   	   "PartComponent not set");
   	   	
    return m_PartComponent;
  }
       
  //GroupComponent related methods
  unsigned int Linux_SambaInvalidUsersForPrinterInstanceName::isGroupComponentSet() const{
    return isSet.GroupComponent;
  }
  void Linux_SambaInvalidUsersForPrinterInstanceName::
   setGroupComponent(const Linux_SambaPrinterOptionsInstanceName& val){
    m_GroupComponent = val;
    isSet.GroupComponent=1;
  }       
  const Linux_SambaPrinterOptionsInstanceName& Linux_SambaInvalidUsersForPrinterInstanceName::
   getGroupComponent() const{
    
    if(!isSet.GroupComponent)
   	  throw CmpiErrorFormater::getErrorException(
   	   CmpiErrorFormater::NOT_SET,
   	   "GroupComponent not set");
   	   	
    return m_GroupComponent;
  }

  
  //set isSet variables to FALSE
  void Linux_SambaInvalidUsersForPrinterInstanceName::init(){
  	
  	m_CIMClassNameP="Linux_SambaInvalidUsersForPrinter";
  	isSet.m_namespace=0;    	
    isSet.PartComponent=0;   	
    isSet.GroupComponent=0;
  }
  
  
  //copies another instance properties in this
  void Linux_SambaInvalidUsersForPrinterInstanceName::init
   (const Linux_SambaInvalidUsersForPrinterInstanceName& original){
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
      const Linux_SambaPrinterOptionsInstanceName& GroupComponentOriginal=original.getGroupComponent();
      setGroupComponent(GroupComponentOriginal);
    }    
  }
  
  //reset the instanceName data
  void Linux_SambaInvalidUsersForPrinterInstanceName::reset(){   	
  	if (isSet.m_namespace)
  	  delete(m_namespace);  	  
  };
  
  
  
  
  //*********************************************************
  //Linux_SambaInvalidUsersForPrinterInstanceNameEnumerationElement	
  //*********************************************************
  
  Linux_SambaInvalidUsersForPrinterInstanceNameEnumerationElement::
   Linux_SambaInvalidUsersForPrinterInstanceNameEnumerationElement(){
   	
  	m_elementP=0;
  	m_nextP=0;
  	  
  };
  
  
  Linux_SambaInvalidUsersForPrinterInstanceNameEnumerationElement::
   ~Linux_SambaInvalidUsersForPrinterInstanceNameEnumerationElement(){
   	
  	if (m_elementP!=0)
  	  delete(m_elementP);
  	if (m_nextP!=0)
  	  delete(m_nextP);
  	  
  };

  
  //*********************************************************
  //Linux_SambaInvalidUsersForPrinterInstanceNameEnumeration
  //*********************************************************
  
  Linux_SambaInvalidUsersForPrinterInstanceNameEnumeration::
   Linux_SambaInvalidUsersForPrinterInstanceNameEnumeration(){
   	
  	 firstElementP=0;
     currentElementP=0;
     endElementP=0;
  };
  
  Linux_SambaInvalidUsersForPrinterInstanceNameEnumeration::
   Linux_SambaInvalidUsersForPrinterInstanceNameEnumeration(const CmpiArray& arr){
  	
  	firstElementP=0;
    currentElementP=0;
    endElementP=0;
    
    int size = arr.size();
    for (int i=0; i < size; i++) {
     addElement(Linux_SambaInvalidUsersForPrinterInstanceName(arr[i]));
    }
  }
  
  Linux_SambaInvalidUsersForPrinterInstanceNameEnumeration::
   Linux_SambaInvalidUsersForPrinterInstanceNameEnumeration(
   const Linux_SambaInvalidUsersForPrinterInstanceNameEnumeration& original){
   	
     firstElementP=0;
     currentElementP=0;
     endElementP=0;
  	 
     int size=original.getSize();
     for(int i=0;i<size;i++)
       addElement(original.getElement(i));           
  };
  
  	  
  Linux_SambaInvalidUsersForPrinterInstanceNameEnumeration::
   ~Linux_SambaInvalidUsersForPrinterInstanceNameEnumeration(){
   	
  	if (firstElementP!=0)
  	  delete(firstElementP);
  	  	
  };
  
  	  
  void Linux_SambaInvalidUsersForPrinterInstanceNameEnumeration::reset(){
  	
  	currentElementP=firstElementP;
  };
  
  	  
  bool Linux_SambaInvalidUsersForPrinterInstanceNameEnumeration::hasNext() const{
  	
  	return (currentElementP!=0);
  
  };
  
  int Linux_SambaInvalidUsersForPrinterInstanceNameEnumeration::getSize() const{
  	
    int size=0;
    Linux_SambaInvalidUsersForPrinterInstanceNameEnumerationElement* followingP=firstElementP;
  	
  	while(followingP!=0){
        followingP=followingP->m_nextP;
        size++;
    }
  	
    return size;
  };
  
  const Linux_SambaInvalidUsersForPrinterInstanceName&  
   Linux_SambaInvalidUsersForPrinterInstanceNameEnumeration::getElement(int pos) const{
   
    Linux_SambaInvalidUsersForPrinterInstanceNameEnumerationElement* followingP=firstElementP;
   
    int i=0;
    while((followingP!=0)&&(i<pos)){
        followingP=followingP->m_nextP;
        i++;
    }
    
    return *(followingP->m_elementP);
  };
  
  	  
  const Linux_SambaInvalidUsersForPrinterInstanceName&
   Linux_SambaInvalidUsersForPrinterInstanceNameEnumeration::getNext() {
   	
  	 Linux_SambaInvalidUsersForPrinterInstanceNameEnumerationElement* currentP=
  	  currentElementP;
  	 currentElementP=currentElementP->m_nextP;
  	 
  	 return *(currentP->m_elementP);
  };
  	  
  void Linux_SambaInvalidUsersForPrinterInstanceNameEnumeration::addElement
   (const Linux_SambaInvalidUsersForPrinterInstanceName& elementP){
   	
  	if(firstElementP==0){
  	  firstElementP=new Linux_SambaInvalidUsersForPrinterInstanceNameEnumerationElement();
  	  firstElementP->m_elementP=new Linux_SambaInvalidUsersForPrinterInstanceName(elementP);
  	  endElementP=firstElementP;
  	  currentElementP=firstElementP;
  	}else{
  	  endElementP->m_nextP=new Linux_SambaInvalidUsersForPrinterInstanceNameEnumerationElement();
  	  endElementP=endElementP->m_nextP;
  	  endElementP->m_elementP=new Linux_SambaInvalidUsersForPrinterInstanceName(elementP);
  	}
  };
  
  Linux_SambaInvalidUsersForPrinterInstanceNameEnumeration::operator CmpiArray() const{
  	int size=getSize();
   	CmpiArray arr=CmpiArray(size,CMPI_instance);
   	for(int i=0;i<size;i++){
   	  arr[i]=getElement(i).getObjectPath();
   	}
   	return arr;
  };  
}
 
