/**
 *  Linux_SambaForceGroupForPrinterInstanceName.cpp
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


#include "Linux_SambaForceGroupForPrinterInstanceName.h"
#include "CmpiData.h"
#include "CmpiString.h"
#include "CmpiArray.h"
#include <string>

namespace genProvider {
	
  //*********************************************************
  //Linux_SambaForceGroupForPrinterInstanceName
  //*********************************************************
  
  //empty constructor
  Linux_SambaForceGroupForPrinterInstanceName::
   Linux_SambaForceGroupForPrinterInstanceName(){
   	init();  	
  };
  
  
  //copy constructor	
  Linux_SambaForceGroupForPrinterInstanceName::
   Linux_SambaForceGroupForPrinterInstanceName
   (const Linux_SambaForceGroupForPrinterInstanceName& original){
   	init(original);  	
  };
  
  
  //contructor using CmpiObjectPath
  Linux_SambaForceGroupForPrinterInstanceName::
   Linux_SambaForceGroupForPrinterInstanceName (const CmpiObjectPath& path){
    
    init();
    
    m_CIMClassNameP=path.getClassName().charPtr();
    
    CmpiString namespaceOP;
    namespaceOP=path.getNameSpace();
    setNamespace(namespaceOP.charPtr(),1);
    
    CmpiObjectPath GroupComponent = path.getKey("GroupComponent");
    setGroupComponent(Linux_SambaPrinterOptionsInstanceName(GroupComponent));
    
    CmpiObjectPath PartComponent = path.getKey("PartComponent");
    setPartComponent(Linux_SambaGroupInstanceName(PartComponent));
    
  }
  
  
  //destructor
  Linux_SambaForceGroupForPrinterInstanceName::
   ~Linux_SambaForceGroupForPrinterInstanceName(){
   	reset();  	  
  };
  
  
  //copy operator
  Linux_SambaForceGroupForPrinterInstanceName&
   Linux_SambaForceGroupForPrinterInstanceName::operator=
   (const Linux_SambaForceGroupForPrinterInstanceName& original){    
    init(original);
   	return *this;    
  }
  
  
  //returns the related CmpiObjectPath
  CmpiObjectPath Linux_SambaForceGroupForPrinterInstanceName::
   getObjectPath() const{
   	
   	CmpiObjectPath objectPath(m_namespace, m_CIMClassNameP);

  	objectPath.setKey("GroupComponent",CmpiData(m_GroupComponent.getObjectPath()));

  	objectPath.setKey("PartComponent",CmpiData(m_PartComponent.getObjectPath()));
  	
  	return objectPath;
  	
  }
  
  
  //adds the related CmpiObjectPath to an existing cmpiInstance
  void Linux_SambaForceGroupForPrinterInstanceName::fillKeys(CmpiInstance& cmpiInstance) const{
  	

  	if(isSet.GroupComponent){
  	  cmpiInstance.setProperty("GroupComponent",CmpiData(m_GroupComponent.getObjectPath()));
  	}

  	if(isSet.PartComponent){
  	  cmpiInstance.setProperty("PartComponent",CmpiData(m_PartComponent.getObjectPath()));
  	}
  }
  
  
  //NameSpace related methods
  unsigned int Linux_SambaForceGroupForPrinterInstanceName::
   isNameSpaceSet() const{
  	return isSet.m_namespace;
  }
  
  const char * Linux_SambaForceGroupForPrinterInstanceName::
   getNamespace() const {
    if(!isSet.m_namespace)
   	  throw CmpiErrorFormater::getErrorException(
   	   CmpiErrorFormater::NOT_SET,
   	   "NameSpace not set in Linux_SambaForceGroupForPrinter instanceName");
  	return m_namespace;
  }

  void Linux_SambaForceGroupForPrinterInstanceName::
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
  unsigned int Linux_SambaForceGroupForPrinterInstanceName::isGroupComponentSet() const{
    return isSet.GroupComponent;
  }
  void Linux_SambaForceGroupForPrinterInstanceName::
   setGroupComponent(const Linux_SambaPrinterOptionsInstanceName& val){
    m_GroupComponent = val;
    isSet.GroupComponent=1;
  }       
  const Linux_SambaPrinterOptionsInstanceName& Linux_SambaForceGroupForPrinterInstanceName::
   getGroupComponent() const{
    
    if(!isSet.GroupComponent)
   	  throw CmpiErrorFormater::getErrorException(
   	   CmpiErrorFormater::NOT_SET,
   	   "GroupComponent not set");
   	   	
    return m_GroupComponent;
  }
       
  //PartComponent related methods
  unsigned int Linux_SambaForceGroupForPrinterInstanceName::isPartComponentSet() const{
    return isSet.PartComponent;
  }
  void Linux_SambaForceGroupForPrinterInstanceName::
   setPartComponent(const Linux_SambaGroupInstanceName& val){
    m_PartComponent = val;
    isSet.PartComponent=1;
  }       
  const Linux_SambaGroupInstanceName& Linux_SambaForceGroupForPrinterInstanceName::
   getPartComponent() const{
    
    if(!isSet.PartComponent)
   	  throw CmpiErrorFormater::getErrorException(
   	   CmpiErrorFormater::NOT_SET,
   	   "PartComponent not set");
   	   	
    return m_PartComponent;
  }

  
  //set isSet variables to FALSE
  void Linux_SambaForceGroupForPrinterInstanceName::init(){
  	
  	m_CIMClassNameP="Linux_SambaForceGroupForPrinter";
  	isSet.m_namespace=0;    	
    isSet.GroupComponent=0;   	
    isSet.PartComponent=0;
  }
  
  
  //copies another instance properties in this
  void Linux_SambaForceGroupForPrinterInstanceName::init
   (const Linux_SambaForceGroupForPrinterInstanceName& original){
   	init();
   	   	
    m_CIMClassNameP=original.m_CIMClassNameP;
    if(original.isNameSpaceSet()){
      setNamespace(original.getNamespace(),1);
    }   	
    if(original.isGroupComponentSet()){
      const Linux_SambaPrinterOptionsInstanceName& GroupComponentOriginal=original.getGroupComponent();
      setGroupComponent(GroupComponentOriginal);
    }   	
    if(original.isPartComponentSet()){
      const Linux_SambaGroupInstanceName& PartComponentOriginal=original.getPartComponent();
      setPartComponent(PartComponentOriginal);
    }    
  }
  
  //reset the instanceName data
  void Linux_SambaForceGroupForPrinterInstanceName::reset(){   	
  	if (isSet.m_namespace)
  	  delete(m_namespace);  	  
  };
  
  
  
  
  //*********************************************************
  //Linux_SambaForceGroupForPrinterInstanceNameEnumerationElement	
  //*********************************************************
  
  Linux_SambaForceGroupForPrinterInstanceNameEnumerationElement::
   Linux_SambaForceGroupForPrinterInstanceNameEnumerationElement(){
   	
  	m_elementP=0;
  	m_nextP=0;
  	  
  };
  
  
  Linux_SambaForceGroupForPrinterInstanceNameEnumerationElement::
   ~Linux_SambaForceGroupForPrinterInstanceNameEnumerationElement(){
   	
  	if (m_elementP!=0)
  	  delete(m_elementP);
  	if (m_nextP!=0)
  	  delete(m_nextP);
  	  
  };

  
  //*********************************************************
  //Linux_SambaForceGroupForPrinterInstanceNameEnumeration
  //*********************************************************
  
  Linux_SambaForceGroupForPrinterInstanceNameEnumeration::
   Linux_SambaForceGroupForPrinterInstanceNameEnumeration(){
   	
  	 firstElementP=0;
     currentElementP=0;
     endElementP=0;
  };
  
  Linux_SambaForceGroupForPrinterInstanceNameEnumeration::
   Linux_SambaForceGroupForPrinterInstanceNameEnumeration(const CmpiArray& arr){
  	
  	firstElementP=0;
    currentElementP=0;
    endElementP=0;
    
    int size = arr.size();
    for (int i=0; i < size; i++) {
     addElement(Linux_SambaForceGroupForPrinterInstanceName(arr[i]));
    }
  }
  
  Linux_SambaForceGroupForPrinterInstanceNameEnumeration::
   Linux_SambaForceGroupForPrinterInstanceNameEnumeration(
   const Linux_SambaForceGroupForPrinterInstanceNameEnumeration& original){
   	
     firstElementP=0;
     currentElementP=0;
     endElementP=0;
  	 
     int size=original.getSize();
     for(int i=0;i<size;i++)
       addElement(original.getElement(i));           
  };
  
  	  
  Linux_SambaForceGroupForPrinterInstanceNameEnumeration::
   ~Linux_SambaForceGroupForPrinterInstanceNameEnumeration(){
   	
  	if (firstElementP!=0)
  	  delete(firstElementP);
  	  	
  };
  
  	  
  void Linux_SambaForceGroupForPrinterInstanceNameEnumeration::reset(){
  	
  	currentElementP=firstElementP;
  };
  
  	  
  bool Linux_SambaForceGroupForPrinterInstanceNameEnumeration::hasNext() const{
  	
  	return (currentElementP!=0);
  
  };
  
  int Linux_SambaForceGroupForPrinterInstanceNameEnumeration::getSize() const{
  	
    int size=0;
    Linux_SambaForceGroupForPrinterInstanceNameEnumerationElement* followingP=firstElementP;
  	
  	while(followingP!=0){
        followingP=followingP->m_nextP;
        size++;
    }
  	
    return size;
  };
  
  const Linux_SambaForceGroupForPrinterInstanceName&  
   Linux_SambaForceGroupForPrinterInstanceNameEnumeration::getElement(int pos) const{
   
    Linux_SambaForceGroupForPrinterInstanceNameEnumerationElement* followingP=firstElementP;
   
    int i=0;
    while((followingP!=0)&&(i<pos)){
        followingP=followingP->m_nextP;
        i++;
    }
    
    return *(followingP->m_elementP);
  };
  
  	  
  const Linux_SambaForceGroupForPrinterInstanceName&
   Linux_SambaForceGroupForPrinterInstanceNameEnumeration::getNext() {
   	
  	 Linux_SambaForceGroupForPrinterInstanceNameEnumerationElement* currentP=
  	  currentElementP;
  	 currentElementP=currentElementP->m_nextP;
  	 
  	 return *(currentP->m_elementP);
  };
  	  
  void Linux_SambaForceGroupForPrinterInstanceNameEnumeration::addElement
   (const Linux_SambaForceGroupForPrinterInstanceName& elementP){
   	
  	if(firstElementP==0){
  	  firstElementP=new Linux_SambaForceGroupForPrinterInstanceNameEnumerationElement();
  	  firstElementP->m_elementP=new Linux_SambaForceGroupForPrinterInstanceName(elementP);
  	  endElementP=firstElementP;
  	  currentElementP=firstElementP;
  	}else{
  	  endElementP->m_nextP=new Linux_SambaForceGroupForPrinterInstanceNameEnumerationElement();
  	  endElementP=endElementP->m_nextP;
  	  endElementP->m_elementP=new Linux_SambaForceGroupForPrinterInstanceName(elementP);
  	}
  };
  
  Linux_SambaForceGroupForPrinterInstanceNameEnumeration::operator CmpiArray() const{
  	int size=getSize();
   	CmpiArray arr=CmpiArray(size,CMPI_instance);
   	for(int i=0;i<size;i++){
   	  arr[i]=getElement(i).getObjectPath();
   	}
   	return arr;
  };  
}
 
