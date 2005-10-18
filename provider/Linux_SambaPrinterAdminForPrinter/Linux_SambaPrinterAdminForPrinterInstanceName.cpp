/**
 *  Linux_SambaPrinterAdminForPrinterInstanceName.cpp
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


#include "Linux_SambaPrinterAdminForPrinterInstanceName.h"
#include "CmpiData.h"
#include "CmpiString.h"
#include "CmpiArray.h"
#include <string>

namespace genProvider {
	
  //*********************************************************
  //Linux_SambaPrinterAdminForPrinterInstanceName
  //*********************************************************
  
  //empty constructor
  Linux_SambaPrinterAdminForPrinterInstanceName::
   Linux_SambaPrinterAdminForPrinterInstanceName(){
   	init();  	
  };
  
  
  //copy constructor	
  Linux_SambaPrinterAdminForPrinterInstanceName::
   Linux_SambaPrinterAdminForPrinterInstanceName
   (const Linux_SambaPrinterAdminForPrinterInstanceName& original){
   	init(original);  	
  };
  
  
  //contructor using CmpiObjectPath
  Linux_SambaPrinterAdminForPrinterInstanceName::
   Linux_SambaPrinterAdminForPrinterInstanceName (const CmpiObjectPath& path){
    
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
  Linux_SambaPrinterAdminForPrinterInstanceName::
   ~Linux_SambaPrinterAdminForPrinterInstanceName(){
   	reset();  	  
  };
  
  
  //copy operator
  Linux_SambaPrinterAdminForPrinterInstanceName&
   Linux_SambaPrinterAdminForPrinterInstanceName::operator=
   (const Linux_SambaPrinterAdminForPrinterInstanceName& original){    
    init(original);
   	return *this;    
  }
  
  
  //returns the related CmpiObjectPath
  CmpiObjectPath Linux_SambaPrinterAdminForPrinterInstanceName::
   getObjectPath() const{
   	
   	CmpiObjectPath objectPath(m_namespace, m_CIMClassNameP);

  	objectPath.setKey("PartComponent",CmpiData(m_PartComponent.getObjectPath()));

  	objectPath.setKey("GroupComponent",CmpiData(m_GroupComponent.getObjectPath()));
  	
  	return objectPath;
  	
  }
  
  
  //adds the related CmpiObjectPath to an existing cmpiInstance
  void Linux_SambaPrinterAdminForPrinterInstanceName::fillKeys(CmpiInstance& cmpiInstance) const{
  	

  	if(isSet.PartComponent){
  	  cmpiInstance.setProperty("PartComponent",CmpiData(m_PartComponent.getObjectPath()));
  	}

  	if(isSet.GroupComponent){
  	  cmpiInstance.setProperty("GroupComponent",CmpiData(m_GroupComponent.getObjectPath()));
  	}
  }
  
  
  //NameSpace related methods
  unsigned int Linux_SambaPrinterAdminForPrinterInstanceName::
   isNameSpaceSet() const{
  	return isSet.m_namespace;
  }
  
  const char * Linux_SambaPrinterAdminForPrinterInstanceName::
   getNamespace() const {
    if(!isSet.m_namespace)
   	  throw CmpiErrorFormater::getErrorException(
   	   CmpiErrorFormater::NOT_SET,
   	   "NameSpace not set in Linux_SambaPrinterAdminForPrinter instanceName");
  	return m_namespace;
  }

  void Linux_SambaPrinterAdminForPrinterInstanceName::
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
  unsigned int Linux_SambaPrinterAdminForPrinterInstanceName::isPartComponentSet() const{
    return isSet.PartComponent;
  }
  void Linux_SambaPrinterAdminForPrinterInstanceName::
   setPartComponent(const Linux_SambaUserInstanceName& val){
    m_PartComponent = val;
    isSet.PartComponent=1;
  }       
  const Linux_SambaUserInstanceName& Linux_SambaPrinterAdminForPrinterInstanceName::
   getPartComponent() const{
    
    if(!isSet.PartComponent)
   	  throw CmpiErrorFormater::getErrorException(
   	   CmpiErrorFormater::NOT_SET,
   	   "PartComponent not set");
   	   	
    return m_PartComponent;
  }
       
  //GroupComponent related methods
  unsigned int Linux_SambaPrinterAdminForPrinterInstanceName::isGroupComponentSet() const{
    return isSet.GroupComponent;
  }
  void Linux_SambaPrinterAdminForPrinterInstanceName::
   setGroupComponent(const Linux_SambaPrinterOptionsInstanceName& val){
    m_GroupComponent = val;
    isSet.GroupComponent=1;
  }       
  const Linux_SambaPrinterOptionsInstanceName& Linux_SambaPrinterAdminForPrinterInstanceName::
   getGroupComponent() const{
    
    if(!isSet.GroupComponent)
   	  throw CmpiErrorFormater::getErrorException(
   	   CmpiErrorFormater::NOT_SET,
   	   "GroupComponent not set");
   	   	
    return m_GroupComponent;
  }

  
  //set isSet variables to FALSE
  void Linux_SambaPrinterAdminForPrinterInstanceName::init(){
  	
  	m_CIMClassNameP="Linux_SambaPrinterAdminForPrinter";
  	isSet.m_namespace=0;    	
    isSet.PartComponent=0;   	
    isSet.GroupComponent=0;
  }
  
  
  //copies another instance properties in this
  void Linux_SambaPrinterAdminForPrinterInstanceName::init
   (const Linux_SambaPrinterAdminForPrinterInstanceName& original){
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
  void Linux_SambaPrinterAdminForPrinterInstanceName::reset(){   	
  	if (isSet.m_namespace)
  	  delete(m_namespace);  	  
  };
  
  
  
  
  //*********************************************************
  //Linux_SambaPrinterAdminForPrinterInstanceNameEnumerationElement	
  //*********************************************************
  
  Linux_SambaPrinterAdminForPrinterInstanceNameEnumerationElement::
   Linux_SambaPrinterAdminForPrinterInstanceNameEnumerationElement(){
   	
  	m_elementP=0;
  	m_nextP=0;
  	  
  };
  
  
  Linux_SambaPrinterAdminForPrinterInstanceNameEnumerationElement::
   ~Linux_SambaPrinterAdminForPrinterInstanceNameEnumerationElement(){
   	
  	if (m_elementP!=0)
  	  delete(m_elementP);
  	if (m_nextP!=0)
  	  delete(m_nextP);
  	  
  };

  
  //*********************************************************
  //Linux_SambaPrinterAdminForPrinterInstanceNameEnumeration
  //*********************************************************
  
  Linux_SambaPrinterAdminForPrinterInstanceNameEnumeration::
   Linux_SambaPrinterAdminForPrinterInstanceNameEnumeration(){
   	
  	 firstElementP=0;
     currentElementP=0;
     endElementP=0;
  };
  
  Linux_SambaPrinterAdminForPrinterInstanceNameEnumeration::
   Linux_SambaPrinterAdminForPrinterInstanceNameEnumeration(const CmpiArray& arr){
  	
  	firstElementP=0;
    currentElementP=0;
    endElementP=0;
    
    int size = arr.size();
    for (int i=0; i < size; i++) {
     addElement(Linux_SambaPrinterAdminForPrinterInstanceName(arr[i]));
    }
  }
  
  Linux_SambaPrinterAdminForPrinterInstanceNameEnumeration::
   Linux_SambaPrinterAdminForPrinterInstanceNameEnumeration(
   const Linux_SambaPrinterAdminForPrinterInstanceNameEnumeration& original){
   	
     firstElementP=0;
     currentElementP=0;
     endElementP=0;
  	 
     int size=original.getSize();
     for(int i=0;i<size;i++)
       addElement(original.getElement(i));           
  };
  
  	  
  Linux_SambaPrinterAdminForPrinterInstanceNameEnumeration::
   ~Linux_SambaPrinterAdminForPrinterInstanceNameEnumeration(){
   	
  	if (firstElementP!=0)
  	  delete(firstElementP);
  	  	
  };
  
  	  
  void Linux_SambaPrinterAdminForPrinterInstanceNameEnumeration::reset(){
  	
  	currentElementP=firstElementP;
  };
  
  	  
  bool Linux_SambaPrinterAdminForPrinterInstanceNameEnumeration::hasNext() const{
  	
  	return (currentElementP!=0);
  
  };
  
  int Linux_SambaPrinterAdminForPrinterInstanceNameEnumeration::getSize() const{
  	
    int size=0;
    Linux_SambaPrinterAdminForPrinterInstanceNameEnumerationElement* followingP=firstElementP;
  	
  	while(followingP!=0){
        followingP=followingP->m_nextP;
        size++;
    }
  	
    return size;
  };
  
  const Linux_SambaPrinterAdminForPrinterInstanceName&  
   Linux_SambaPrinterAdminForPrinterInstanceNameEnumeration::getElement(int pos) const{
   
    Linux_SambaPrinterAdminForPrinterInstanceNameEnumerationElement* followingP=firstElementP;
   
    int i=0;
    while((followingP!=0)&&(i<pos)){
        followingP=followingP->m_nextP;
        i++;
    }
    
    return *(followingP->m_elementP);
  };
  
  	  
  const Linux_SambaPrinterAdminForPrinterInstanceName&
   Linux_SambaPrinterAdminForPrinterInstanceNameEnumeration::getNext() {
   	
  	 Linux_SambaPrinterAdminForPrinterInstanceNameEnumerationElement* currentP=
  	  currentElementP;
  	 currentElementP=currentElementP->m_nextP;
  	 
  	 return *(currentP->m_elementP);
  };
  	  
  void Linux_SambaPrinterAdminForPrinterInstanceNameEnumeration::addElement
   (const Linux_SambaPrinterAdminForPrinterInstanceName& elementP){
   	
  	if(firstElementP==0){
  	  firstElementP=new Linux_SambaPrinterAdminForPrinterInstanceNameEnumerationElement();
  	  firstElementP->m_elementP=new Linux_SambaPrinterAdminForPrinterInstanceName(elementP);
  	  endElementP=firstElementP;
  	  currentElementP=firstElementP;
  	}else{
  	  endElementP->m_nextP=new Linux_SambaPrinterAdminForPrinterInstanceNameEnumerationElement();
  	  endElementP=endElementP->m_nextP;
  	  endElementP->m_elementP=new Linux_SambaPrinterAdminForPrinterInstanceName(elementP);
  	}
  };
  
  Linux_SambaPrinterAdminForPrinterInstanceNameEnumeration::operator CmpiArray() const{
  	int size=getSize();
   	CmpiArray arr=CmpiArray(size,CMPI_instance);
   	for(int i=0;i<size;i++){
   	  arr[i]=getElement(i).getObjectPath();
   	}
   	return arr;
  };  
}
 
