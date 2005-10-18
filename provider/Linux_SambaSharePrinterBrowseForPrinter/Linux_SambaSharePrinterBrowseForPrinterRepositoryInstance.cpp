/**
 *  Linux_SambaSharePrinterBrowseForPrinterRepositoryInstance.cpp
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


#include "Linux_SambaSharePrinterBrowseForPrinterRepositoryInstance.h"
#include "CmpiData.h"
#include "CmpiString.h"
#include "CmpiArray.h"
#include <string>

namespace genProvider {

  //*********************************************************
  //Linux_SambaSharePrinterBrowseForPrinterRepositoryInstance
  //*********************************************************

  //empty constructor
  Linux_SambaSharePrinterBrowseForPrinterRepositoryInstance::
   Linux_SambaSharePrinterBrowseForPrinterRepositoryInstance(){   	
   	init();  	   	
  };
  
  
  //copy constructor	
  Linux_SambaSharePrinterBrowseForPrinterRepositoryInstance::
   Linux_SambaSharePrinterBrowseForPrinterRepositoryInstance
   (const Linux_SambaSharePrinterBrowseForPrinterRepositoryInstance& original){   	
   	init(original);  	   	
  };
  
  
  //constructor using CmpiInstance
  Linux_SambaSharePrinterBrowseForPrinterRepositoryInstance::
   Linux_SambaSharePrinterBrowseForPrinterRepositoryInstance (const CmpiInstance& inst, const char* instanceNamespace){
    CmpiData cmpiData;
    init(); 
    
    CmpiObjectPath cop=inst.getObjectPath();
    cop.setNameSpace(instanceNamespace);
    setInstanceName(Linux_SambaSharePrinterBrowseForPrinterInstanceName(cop));
    
  }
  
  
  //Destructor
  Linux_SambaSharePrinterBrowseForPrinterRepositoryInstance::
   ~Linux_SambaSharePrinterBrowseForPrinterRepositoryInstance(){
   	reset();  	  
  };
  
  
  //copy operator
  Linux_SambaSharePrinterBrowseForPrinterRepositoryInstance&
   Linux_SambaSharePrinterBrowseForPrinterRepositoryInstance::operator=
   (const Linux_SambaSharePrinterBrowseForPrinterRepositoryInstance& original){   	
   	init(original);
   	return *this;
  };
  
  
  //converts to CmpiInstance
  CmpiInstance Linux_SambaSharePrinterBrowseForPrinterRepositoryInstance::
   getCmpiInstance(const char** properties) const{
   	
   	CmpiObjectPath objectPath=getInstanceName().getObjectPath();      
    CmpiInstance cmpiInstance(objectPath);    
    getInstanceName().fillKeys(cmpiInstance);
    
    if (properties) {
	  cmpiInstance.setPropertyFilter(properties,0);
    }
  	
  	return cmpiInstance;
  	
  }
  
  
  //InstanceName related methods
  unsigned int Linux_SambaSharePrinterBrowseForPrinterRepositoryInstance::
   isInstanceNameSet() const{
  	return isSet.instanceName;
  }
  
  const Linux_SambaSharePrinterBrowseForPrinterInstanceName&
    Linux_SambaSharePrinterBrowseForPrinterRepositoryInstance::getInstanceName() const{

    if(!isSet.instanceName)
   	  throw CmpiErrorFormater::getErrorException(
   	   CmpiErrorFormater::NOT_SET,
   	   "InstanceName not set in Linux_SambaSharePrinterBrowseForPrinter instance");
  		
   	return m_instanceName;
  }

  void Linux_SambaSharePrinterBrowseForPrinterRepositoryInstance::setInstanceName(
   const Linux_SambaSharePrinterBrowseForPrinterInstanceName& val){
    m_instanceName = val;
    isSet.instanceName=1;
  }


  
  //set isSet attributes to FALSE
  void Linux_SambaSharePrinterBrowseForPrinterRepositoryInstance::init(){
   	isSet.instanceName=0;
   	  	
  };
  
  
  //copies another instance properties in this
  void Linux_SambaSharePrinterBrowseForPrinterRepositoryInstance::init
   (const Linux_SambaSharePrinterBrowseForPrinterRepositoryInstance& original){   	
   	init();
   	   	
    if(original.isInstanceNameSet()){
      setInstanceName(original.getInstanceName());
    }    
   }
  
  
  //reset the instance data
  void Linux_SambaSharePrinterBrowseForPrinterRepositoryInstance::reset(){
   	
  	  
  };
  
  
  //*********************************************************
  //Linux_SambaSharePrinterBrowseForPrinterRepositoryInstanceEnumerationElement	
  //*********************************************************
  
  Linux_SambaSharePrinterBrowseForPrinterRepositoryInstanceEnumerationElement::
   Linux_SambaSharePrinterBrowseForPrinterRepositoryInstanceEnumerationElement(){
   	
  	m_elementP=0;
  	m_nextP=0;
  	  
  };
  
  
  Linux_SambaSharePrinterBrowseForPrinterRepositoryInstanceEnumerationElement::
   ~Linux_SambaSharePrinterBrowseForPrinterRepositoryInstanceEnumerationElement(){
   	
  	if (m_elementP!=0)
  	  delete(m_elementP);
  	if (m_nextP!=0)
  	  delete(m_nextP);
  	  
  };

  
  //*********************************************************
  //Linux_SambaSharePrinterBrowseForPrinterRepositoryInstanceNameEnumeration
  //*********************************************************

  Linux_SambaSharePrinterBrowseForPrinterRepositoryInstanceEnumeration::
   Linux_SambaSharePrinterBrowseForPrinterRepositoryInstanceEnumeration(){
   	
  	 firstElementP=0;
     currentElementP=0;
     endElementP=0;
  };
  
  Linux_SambaSharePrinterBrowseForPrinterRepositoryInstanceEnumeration::
   Linux_SambaSharePrinterBrowseForPrinterRepositoryInstanceEnumeration(
   const Linux_SambaSharePrinterBrowseForPrinterRepositoryInstanceEnumeration& original){
   	
     firstElementP=0;
     currentElementP=0;
     endElementP=0;
  	 
     int size=original.getSize();
     for(int i=0;i<size;i++)
       addElement(original.getElement(i));           
  };
  
  	  
  Linux_SambaSharePrinterBrowseForPrinterRepositoryInstanceEnumeration::
   ~Linux_SambaSharePrinterBrowseForPrinterRepositoryInstanceEnumeration(){
   	
  	if (firstElementP!=0)
  	  delete(firstElementP);
  	  	
  };
  
  	  
  void Linux_SambaSharePrinterBrowseForPrinterRepositoryInstanceEnumeration::reset(){
  	
  	currentElementP=firstElementP;
  };
  
  	  
  bool Linux_SambaSharePrinterBrowseForPrinterRepositoryInstanceEnumeration::hasNext() const{
  	
  	return (currentElementP!=0);
  
  };
  
  int Linux_SambaSharePrinterBrowseForPrinterRepositoryInstanceEnumeration::getSize() const{
  	
    int size=0;
    Linux_SambaSharePrinterBrowseForPrinterRepositoryInstanceEnumerationElement* followingP=firstElementP;
  	
  	while(followingP!=0){
        followingP=followingP->m_nextP;
        size++;
    }
  	
    return size;
    
  };
  
  const Linux_SambaSharePrinterBrowseForPrinterRepositoryInstance&  
   Linux_SambaSharePrinterBrowseForPrinterRepositoryInstanceEnumeration::getElement(int pos) const{
   
    Linux_SambaSharePrinterBrowseForPrinterRepositoryInstanceEnumerationElement* followingP=firstElementP;
   
    int i=0;
    while((followingP!=0)&&(i<pos)){
        followingP=followingP->m_nextP;
        i++;
    }
    
    return *(followingP->m_elementP);
  };
  
  	  
  const Linux_SambaSharePrinterBrowseForPrinterRepositoryInstance&
   Linux_SambaSharePrinterBrowseForPrinterRepositoryInstanceEnumeration::getNext() {
   	
  	 Linux_SambaSharePrinterBrowseForPrinterRepositoryInstanceEnumerationElement* currentP=
  	  currentElementP;
  	 currentElementP=currentElementP->m_nextP;
  	 
  	 return *(currentP->m_elementP);
  };
  	  
  void Linux_SambaSharePrinterBrowseForPrinterRepositoryInstanceEnumeration::addElement
   (const Linux_SambaSharePrinterBrowseForPrinterRepositoryInstance& elementP){
   	
  	if(firstElementP==0){
  	  firstElementP=new Linux_SambaSharePrinterBrowseForPrinterRepositoryInstanceEnumerationElement();
  	  firstElementP->m_elementP=new Linux_SambaSharePrinterBrowseForPrinterRepositoryInstance(elementP);
  	  endElementP=firstElementP;
  	  currentElementP=firstElementP;
  	}else{
  	  endElementP->m_nextP=new Linux_SambaSharePrinterBrowseForPrinterRepositoryInstanceEnumerationElement();
  	  endElementP=endElementP->m_nextP;
  	  endElementP->m_elementP=new Linux_SambaSharePrinterBrowseForPrinterRepositoryInstance(elementP);
  	}
  };  
}
 
