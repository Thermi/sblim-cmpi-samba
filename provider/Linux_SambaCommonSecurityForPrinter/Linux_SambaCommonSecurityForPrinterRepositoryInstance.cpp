/**
 *  Linux_SambaCommonSecurityForPrinterRepositoryInstance.cpp
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


#include "Linux_SambaCommonSecurityForPrinterRepositoryInstance.h"
#include "CmpiData.h"
#include "CmpiString.h"
#include "CmpiArray.h"
#include <string>

namespace genProvider {

  //*********************************************************
  //Linux_SambaCommonSecurityForPrinterRepositoryInstance
  //*********************************************************

  //empty constructor
  Linux_SambaCommonSecurityForPrinterRepositoryInstance::
   Linux_SambaCommonSecurityForPrinterRepositoryInstance(){   	
   	init();  	   	
  };
  
  
  //copy constructor	
  Linux_SambaCommonSecurityForPrinterRepositoryInstance::
   Linux_SambaCommonSecurityForPrinterRepositoryInstance
   (const Linux_SambaCommonSecurityForPrinterRepositoryInstance& original){   	
   	init(original);  	   	
  };
  
  
  //constructor using CmpiInstance
  Linux_SambaCommonSecurityForPrinterRepositoryInstance::
   Linux_SambaCommonSecurityForPrinterRepositoryInstance (const CmpiInstance& inst, const char* instanceNamespace){
    CmpiData cmpiData;
    init(); 
    
    CmpiObjectPath cop=inst.getObjectPath();
    cop.setNameSpace(instanceNamespace);
    setInstanceName(Linux_SambaCommonSecurityForPrinterInstanceName(cop));
    
  }
  
  
  //Destructor
  Linux_SambaCommonSecurityForPrinterRepositoryInstance::
   ~Linux_SambaCommonSecurityForPrinterRepositoryInstance(){
   	reset();  	  
  };
  
  
  //copy operator
  Linux_SambaCommonSecurityForPrinterRepositoryInstance&
   Linux_SambaCommonSecurityForPrinterRepositoryInstance::operator=
   (const Linux_SambaCommonSecurityForPrinterRepositoryInstance& original){   	
   	init(original);
   	return *this;
  };
  
  
  //converts to CmpiInstance
  CmpiInstance Linux_SambaCommonSecurityForPrinterRepositoryInstance::
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
  unsigned int Linux_SambaCommonSecurityForPrinterRepositoryInstance::
   isInstanceNameSet() const{
  	return isSet.instanceName;
  }
  
  const Linux_SambaCommonSecurityForPrinterInstanceName&
    Linux_SambaCommonSecurityForPrinterRepositoryInstance::getInstanceName() const{

    if(!isSet.instanceName)
   	  throw CmpiErrorFormater::getErrorException(
   	   CmpiErrorFormater::NOT_SET,
   	   "InstanceName not set in Linux_SambaCommonSecurityForPrinter instance");
  		
   	return m_instanceName;
  }

  void Linux_SambaCommonSecurityForPrinterRepositoryInstance::setInstanceName(
   const Linux_SambaCommonSecurityForPrinterInstanceName& val){
    m_instanceName = val;
    isSet.instanceName=1;
  }


  
  //set isSet attributes to FALSE
  void Linux_SambaCommonSecurityForPrinterRepositoryInstance::init(){
   	isSet.instanceName=0;
   	  	
  };
  
  
  //copies another instance properties in this
  void Linux_SambaCommonSecurityForPrinterRepositoryInstance::init
   (const Linux_SambaCommonSecurityForPrinterRepositoryInstance& original){   	
   	init();
   	   	
    if(original.isInstanceNameSet()){
      setInstanceName(original.getInstanceName());
    }    
   }
  
  
  //reset the instance data
  void Linux_SambaCommonSecurityForPrinterRepositoryInstance::reset(){
   	
  	  
  };
  
  
  //*********************************************************
  //Linux_SambaCommonSecurityForPrinterRepositoryInstanceEnumerationElement	
  //*********************************************************
  
  Linux_SambaCommonSecurityForPrinterRepositoryInstanceEnumerationElement::
   Linux_SambaCommonSecurityForPrinterRepositoryInstanceEnumerationElement(){
   	
  	m_elementP=0;
  	m_nextP=0;
  	  
  };
  
  
  Linux_SambaCommonSecurityForPrinterRepositoryInstanceEnumerationElement::
   ~Linux_SambaCommonSecurityForPrinterRepositoryInstanceEnumerationElement(){
   	
  	if (m_elementP!=0)
  	  delete(m_elementP);
  	if (m_nextP!=0)
  	  delete(m_nextP);
  	  
  };

  
  //*********************************************************
  //Linux_SambaCommonSecurityForPrinterRepositoryInstanceNameEnumeration
  //*********************************************************

  Linux_SambaCommonSecurityForPrinterRepositoryInstanceEnumeration::
   Linux_SambaCommonSecurityForPrinterRepositoryInstanceEnumeration(){
   	
  	 firstElementP=0;
     currentElementP=0;
     endElementP=0;
  };
  
  Linux_SambaCommonSecurityForPrinterRepositoryInstanceEnumeration::
   Linux_SambaCommonSecurityForPrinterRepositoryInstanceEnumeration(
   const Linux_SambaCommonSecurityForPrinterRepositoryInstanceEnumeration& original){
   	
     firstElementP=0;
     currentElementP=0;
     endElementP=0;
  	 
     int size=original.getSize();
     for(int i=0;i<size;i++)
       addElement(original.getElement(i));           
  };
  
  	  
  Linux_SambaCommonSecurityForPrinterRepositoryInstanceEnumeration::
   ~Linux_SambaCommonSecurityForPrinterRepositoryInstanceEnumeration(){
   	
  	if (firstElementP!=0)
  	  delete(firstElementP);
  	  	
  };
  
  	  
  void Linux_SambaCommonSecurityForPrinterRepositoryInstanceEnumeration::reset(){
  	
  	currentElementP=firstElementP;
  };
  
  	  
  bool Linux_SambaCommonSecurityForPrinterRepositoryInstanceEnumeration::hasNext() const{
  	
  	return (currentElementP!=0);
  
  };
  
  int Linux_SambaCommonSecurityForPrinterRepositoryInstanceEnumeration::getSize() const{
  	
    int size=0;
    Linux_SambaCommonSecurityForPrinterRepositoryInstanceEnumerationElement* followingP=firstElementP;
  	
  	while(followingP!=0){
        followingP=followingP->m_nextP;
        size++;
    }
  	
    return size;
    
  };
  
  const Linux_SambaCommonSecurityForPrinterRepositoryInstance&  
   Linux_SambaCommonSecurityForPrinterRepositoryInstanceEnumeration::getElement(int pos) const{
   
    Linux_SambaCommonSecurityForPrinterRepositoryInstanceEnumerationElement* followingP=firstElementP;
   
    int i=0;
    while((followingP!=0)&&(i<pos)){
        followingP=followingP->m_nextP;
        i++;
    }
    
    return *(followingP->m_elementP);
  };
  
  	  
  const Linux_SambaCommonSecurityForPrinterRepositoryInstance&
   Linux_SambaCommonSecurityForPrinterRepositoryInstanceEnumeration::getNext() {
   	
  	 Linux_SambaCommonSecurityForPrinterRepositoryInstanceEnumerationElement* currentP=
  	  currentElementP;
  	 currentElementP=currentElementP->m_nextP;
  	 
  	 return *(currentP->m_elementP);
  };
  	  
  void Linux_SambaCommonSecurityForPrinterRepositoryInstanceEnumeration::addElement
   (const Linux_SambaCommonSecurityForPrinterRepositoryInstance& elementP){
   	
  	if(firstElementP==0){
  	  firstElementP=new Linux_SambaCommonSecurityForPrinterRepositoryInstanceEnumerationElement();
  	  firstElementP->m_elementP=new Linux_SambaCommonSecurityForPrinterRepositoryInstance(elementP);
  	  endElementP=firstElementP;
  	  currentElementP=firstElementP;
  	}else{
  	  endElementP->m_nextP=new Linux_SambaCommonSecurityForPrinterRepositoryInstanceEnumerationElement();
  	  endElementP=endElementP->m_nextP;
  	  endElementP->m_elementP=new Linux_SambaCommonSecurityForPrinterRepositoryInstance(elementP);
  	}
  };  
}
 
