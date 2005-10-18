/**
 *  Linux_SambaSharePrinterBrowseForShareRepositoryInstance.cpp
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


#include "Linux_SambaSharePrinterBrowseForShareRepositoryInstance.h"
#include "CmpiData.h"
#include "CmpiString.h"
#include "CmpiArray.h"
#include <string>

namespace genProvider {

  //*********************************************************
  //Linux_SambaSharePrinterBrowseForShareRepositoryInstance
  //*********************************************************

  //empty constructor
  Linux_SambaSharePrinterBrowseForShareRepositoryInstance::
   Linux_SambaSharePrinterBrowseForShareRepositoryInstance(){   	
   	init();  	   	
  };
  
  
  //copy constructor	
  Linux_SambaSharePrinterBrowseForShareRepositoryInstance::
   Linux_SambaSharePrinterBrowseForShareRepositoryInstance
   (const Linux_SambaSharePrinterBrowseForShareRepositoryInstance& original){   	
   	init(original);  	   	
  };
  
  
  //constructor using CmpiInstance
  Linux_SambaSharePrinterBrowseForShareRepositoryInstance::
   Linux_SambaSharePrinterBrowseForShareRepositoryInstance (const CmpiInstance& inst, const char* instanceNamespace){
    CmpiData cmpiData;
    init(); 
    
    CmpiObjectPath cop=inst.getObjectPath();
    cop.setNameSpace(instanceNamespace);
    setInstanceName(Linux_SambaSharePrinterBrowseForShareInstanceName(cop));
    
  }
  
  
  //Destructor
  Linux_SambaSharePrinterBrowseForShareRepositoryInstance::
   ~Linux_SambaSharePrinterBrowseForShareRepositoryInstance(){
   	reset();  	  
  };
  
  
  //copy operator
  Linux_SambaSharePrinterBrowseForShareRepositoryInstance&
   Linux_SambaSharePrinterBrowseForShareRepositoryInstance::operator=
   (const Linux_SambaSharePrinterBrowseForShareRepositoryInstance& original){   	
   	init(original);
   	return *this;
  };
  
  
  //converts to CmpiInstance
  CmpiInstance Linux_SambaSharePrinterBrowseForShareRepositoryInstance::
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
  unsigned int Linux_SambaSharePrinterBrowseForShareRepositoryInstance::
   isInstanceNameSet() const{
  	return isSet.instanceName;
  }
  
  const Linux_SambaSharePrinterBrowseForShareInstanceName&
    Linux_SambaSharePrinterBrowseForShareRepositoryInstance::getInstanceName() const{

    if(!isSet.instanceName)
   	  throw CmpiErrorFormater::getErrorException(
   	   CmpiErrorFormater::NOT_SET,
   	   "InstanceName not set in Linux_SambaSharePrinterBrowseForShare instance");
  		
   	return m_instanceName;
  }

  void Linux_SambaSharePrinterBrowseForShareRepositoryInstance::setInstanceName(
   const Linux_SambaSharePrinterBrowseForShareInstanceName& val){
    m_instanceName = val;
    isSet.instanceName=1;
  }


  
  //set isSet attributes to FALSE
  void Linux_SambaSharePrinterBrowseForShareRepositoryInstance::init(){
   	isSet.instanceName=0;
   	  	
  };
  
  
  //copies another instance properties in this
  void Linux_SambaSharePrinterBrowseForShareRepositoryInstance::init
   (const Linux_SambaSharePrinterBrowseForShareRepositoryInstance& original){   	
   	init();
   	   	
    if(original.isInstanceNameSet()){
      setInstanceName(original.getInstanceName());
    }    
   }
  
  
  //reset the instance data
  void Linux_SambaSharePrinterBrowseForShareRepositoryInstance::reset(){
   	
  	  
  };
  
  
  //*********************************************************
  //Linux_SambaSharePrinterBrowseForShareRepositoryInstanceEnumerationElement	
  //*********************************************************
  
  Linux_SambaSharePrinterBrowseForShareRepositoryInstanceEnumerationElement::
   Linux_SambaSharePrinterBrowseForShareRepositoryInstanceEnumerationElement(){
   	
  	m_elementP=0;
  	m_nextP=0;
  	  
  };
  
  
  Linux_SambaSharePrinterBrowseForShareRepositoryInstanceEnumerationElement::
   ~Linux_SambaSharePrinterBrowseForShareRepositoryInstanceEnumerationElement(){
   	
  	if (m_elementP!=0)
  	  delete(m_elementP);
  	if (m_nextP!=0)
  	  delete(m_nextP);
  	  
  };

  
  //*********************************************************
  //Linux_SambaSharePrinterBrowseForShareRepositoryInstanceNameEnumeration
  //*********************************************************

  Linux_SambaSharePrinterBrowseForShareRepositoryInstanceEnumeration::
   Linux_SambaSharePrinterBrowseForShareRepositoryInstanceEnumeration(){
   	
  	 firstElementP=0;
     currentElementP=0;
     endElementP=0;
  };
  
  Linux_SambaSharePrinterBrowseForShareRepositoryInstanceEnumeration::
   Linux_SambaSharePrinterBrowseForShareRepositoryInstanceEnumeration(
   const Linux_SambaSharePrinterBrowseForShareRepositoryInstanceEnumeration& original){
   	
     firstElementP=0;
     currentElementP=0;
     endElementP=0;
  	 
     int size=original.getSize();
     for(int i=0;i<size;i++)
       addElement(original.getElement(i));           
  };
  
  	  
  Linux_SambaSharePrinterBrowseForShareRepositoryInstanceEnumeration::
   ~Linux_SambaSharePrinterBrowseForShareRepositoryInstanceEnumeration(){
   	
  	if (firstElementP!=0)
  	  delete(firstElementP);
  	  	
  };
  
  	  
  void Linux_SambaSharePrinterBrowseForShareRepositoryInstanceEnumeration::reset(){
  	
  	currentElementP=firstElementP;
  };
  
  	  
  bool Linux_SambaSharePrinterBrowseForShareRepositoryInstanceEnumeration::hasNext() const{
  	
  	return (currentElementP!=0);
  
  };
  
  int Linux_SambaSharePrinterBrowseForShareRepositoryInstanceEnumeration::getSize() const{
  	
    int size=0;
    Linux_SambaSharePrinterBrowseForShareRepositoryInstanceEnumerationElement* followingP=firstElementP;
  	
  	while(followingP!=0){
        followingP=followingP->m_nextP;
        size++;
    }
  	
    return size;
    
  };
  
  const Linux_SambaSharePrinterBrowseForShareRepositoryInstance&  
   Linux_SambaSharePrinterBrowseForShareRepositoryInstanceEnumeration::getElement(int pos) const{
   
    Linux_SambaSharePrinterBrowseForShareRepositoryInstanceEnumerationElement* followingP=firstElementP;
   
    int i=0;
    while((followingP!=0)&&(i<pos)){
        followingP=followingP->m_nextP;
        i++;
    }
    
    return *(followingP->m_elementP);
  };
  
  	  
  const Linux_SambaSharePrinterBrowseForShareRepositoryInstance&
   Linux_SambaSharePrinterBrowseForShareRepositoryInstanceEnumeration::getNext() {
   	
  	 Linux_SambaSharePrinterBrowseForShareRepositoryInstanceEnumerationElement* currentP=
  	  currentElementP;
  	 currentElementP=currentElementP->m_nextP;
  	 
  	 return *(currentP->m_elementP);
  };
  	  
  void Linux_SambaSharePrinterBrowseForShareRepositoryInstanceEnumeration::addElement
   (const Linux_SambaSharePrinterBrowseForShareRepositoryInstance& elementP){
   	
  	if(firstElementP==0){
  	  firstElementP=new Linux_SambaSharePrinterBrowseForShareRepositoryInstanceEnumerationElement();
  	  firstElementP->m_elementP=new Linux_SambaSharePrinterBrowseForShareRepositoryInstance(elementP);
  	  endElementP=firstElementP;
  	  currentElementP=firstElementP;
  	}else{
  	  endElementP->m_nextP=new Linux_SambaSharePrinterBrowseForShareRepositoryInstanceEnumerationElement();
  	  endElementP=endElementP->m_nextP;
  	  endElementP->m_elementP=new Linux_SambaSharePrinterBrowseForShareRepositoryInstance(elementP);
  	}
  };  
}
 
