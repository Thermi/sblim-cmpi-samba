/**
 *  Linux_SambaSharePrinterBrowseForPrinterManualInstance.cpp
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


#include "Linux_SambaSharePrinterBrowseForPrinterManualInstance.h"
#include "CmpiData.h"
#include "CmpiString.h"
#include "CmpiArray.h"
#include <string>

namespace genProvider {

  //*********************************************************
  //Linux_SambaSharePrinterBrowseForPrinterManualInstance
  //*********************************************************

  //empty constructor
  Linux_SambaSharePrinterBrowseForPrinterManualInstance::
   Linux_SambaSharePrinterBrowseForPrinterManualInstance(){   	
   	init();  	   	
  };
  
  
  //copy constructor	
  Linux_SambaSharePrinterBrowseForPrinterManualInstance::
   Linux_SambaSharePrinterBrowseForPrinterManualInstance
   (const Linux_SambaSharePrinterBrowseForPrinterManualInstance& original){   	
   	init(original);  	   	
  };
  
  
  //constructor using CmpiInstance
  Linux_SambaSharePrinterBrowseForPrinterManualInstance::
   Linux_SambaSharePrinterBrowseForPrinterManualInstance (const CmpiInstance& inst, const char* instanceNamespace){
    CmpiData cmpiData;
    init(); 
    
    CmpiObjectPath cop=inst.getObjectPath();
    cop.setNameSpace(instanceNamespace);
    setInstanceName(Linux_SambaSharePrinterBrowseForPrinterInstanceName(cop));
    
  }
  
  
  //Destructor
  Linux_SambaSharePrinterBrowseForPrinterManualInstance::
   ~Linux_SambaSharePrinterBrowseForPrinterManualInstance(){
   	reset();  	  
  };
  
  
  //copy operator
  Linux_SambaSharePrinterBrowseForPrinterManualInstance&
   Linux_SambaSharePrinterBrowseForPrinterManualInstance::operator=
   (const Linux_SambaSharePrinterBrowseForPrinterManualInstance& original){   	
   	init(original);
   	return *this;
  };
  
  
  //converts to CmpiInstance
  CmpiInstance Linux_SambaSharePrinterBrowseForPrinterManualInstance::
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
  unsigned int Linux_SambaSharePrinterBrowseForPrinterManualInstance::
   isInstanceNameSet() const{
  	return isSet.instanceName;
  }
  
  const Linux_SambaSharePrinterBrowseForPrinterInstanceName&
    Linux_SambaSharePrinterBrowseForPrinterManualInstance::getInstanceName() const{

    if(!isSet.instanceName)
   	  throw CmpiErrorFormater::getErrorException(
   	   CmpiErrorFormater::NOT_SET,
   	   "InstanceName not set in Linux_SambaSharePrinterBrowseForPrinter instance");
  		
   	return m_instanceName;
  }

  void Linux_SambaSharePrinterBrowseForPrinterManualInstance::setInstanceName(
   const Linux_SambaSharePrinterBrowseForPrinterInstanceName& val){
    m_instanceName = val;
    isSet.instanceName=1;
  }


  
  //set isSet attributes to FALSE
  void Linux_SambaSharePrinterBrowseForPrinterManualInstance::init(){
   	isSet.instanceName=0;
   	  	
  };
  
  
  //copies another instance properties in this
  void Linux_SambaSharePrinterBrowseForPrinterManualInstance::init
   (const Linux_SambaSharePrinterBrowseForPrinterManualInstance& original){   	
   	init();
   	   	
    if(original.isInstanceNameSet()){
      setInstanceName(original.getInstanceName());
    }    
   }
  
  
  //reset the instance data
  void Linux_SambaSharePrinterBrowseForPrinterManualInstance::reset(){
   	
  	  
  };
  
  
  //*********************************************************
  //Linux_SambaSharePrinterBrowseForPrinterManualInstanceEnumerationElement	
  //*********************************************************
  
  Linux_SambaSharePrinterBrowseForPrinterManualInstanceEnumerationElement::
   Linux_SambaSharePrinterBrowseForPrinterManualInstanceEnumerationElement(){
   	
  	m_elementP=0;
  	m_nextP=0;
  	  
  };
  
  
  Linux_SambaSharePrinterBrowseForPrinterManualInstanceEnumerationElement::
   ~Linux_SambaSharePrinterBrowseForPrinterManualInstanceEnumerationElement(){
   	
  	if (m_elementP!=0)
  	  delete(m_elementP);
  	if (m_nextP!=0)
  	  delete(m_nextP);
  	  
  };

  
  //*********************************************************
  //Linux_SambaSharePrinterBrowseForPrinterManualInstanceNameEnumeration
  //*********************************************************

  Linux_SambaSharePrinterBrowseForPrinterManualInstanceEnumeration::
   Linux_SambaSharePrinterBrowseForPrinterManualInstanceEnumeration(){
   	
  	 firstElementP=0;
     currentElementP=0;
     endElementP=0;
  };
  
  Linux_SambaSharePrinterBrowseForPrinterManualInstanceEnumeration::
   Linux_SambaSharePrinterBrowseForPrinterManualInstanceEnumeration(
   const Linux_SambaSharePrinterBrowseForPrinterManualInstanceEnumeration& original){
   	
     firstElementP=0;
     currentElementP=0;
     endElementP=0;
  	 
     int size=original.getSize();
     for(int i=0;i<size;i++)
       addElement(original.getElement(i));           
  };
  
  	  
  Linux_SambaSharePrinterBrowseForPrinterManualInstanceEnumeration::
   ~Linux_SambaSharePrinterBrowseForPrinterManualInstanceEnumeration(){
   	
  	if (firstElementP!=0)
  	  delete(firstElementP);
  	  	
  };
  
  	  
  void Linux_SambaSharePrinterBrowseForPrinterManualInstanceEnumeration::reset(){
  	
  	currentElementP=firstElementP;
  };
  
  	  
  bool Linux_SambaSharePrinterBrowseForPrinterManualInstanceEnumeration::hasNext() const{
  	
  	return (currentElementP!=0);
  
  };
  
  int Linux_SambaSharePrinterBrowseForPrinterManualInstanceEnumeration::getSize() const{
  	
    int size=0;
    Linux_SambaSharePrinterBrowseForPrinterManualInstanceEnumerationElement* followingP=firstElementP;
  	
  	while(followingP!=0){
        followingP=followingP->m_nextP;
        size++;
    }
  	
    return size;
    
  };
  
  const Linux_SambaSharePrinterBrowseForPrinterManualInstance&  
   Linux_SambaSharePrinterBrowseForPrinterManualInstanceEnumeration::getElement(int pos) const{
   
    Linux_SambaSharePrinterBrowseForPrinterManualInstanceEnumerationElement* followingP=firstElementP;
   
    int i=0;
    while((followingP!=0)&&(i<pos)){
        followingP=followingP->m_nextP;
        i++;
    }
    
    return *(followingP->m_elementP);
  };
  
  	  
  const Linux_SambaSharePrinterBrowseForPrinterManualInstance&
   Linux_SambaSharePrinterBrowseForPrinterManualInstanceEnumeration::getNext() {
   	
  	 Linux_SambaSharePrinterBrowseForPrinterManualInstanceEnumerationElement* currentP=
  	  currentElementP;
  	 currentElementP=currentElementP->m_nextP;
  	 
  	 return *(currentP->m_elementP);
  };
  	  
  void Linux_SambaSharePrinterBrowseForPrinterManualInstanceEnumeration::addElement
   (const Linux_SambaSharePrinterBrowseForPrinterManualInstance& elementP){
   	
  	if(firstElementP==0){
  	  firstElementP=new Linux_SambaSharePrinterBrowseForPrinterManualInstanceEnumerationElement();
  	  firstElementP->m_elementP=new Linux_SambaSharePrinterBrowseForPrinterManualInstance(elementP);
  	  endElementP=firstElementP;
  	  currentElementP=firstElementP;
  	}else{
  	  endElementP->m_nextP=new Linux_SambaSharePrinterBrowseForPrinterManualInstanceEnumerationElement();
  	  endElementP=endElementP->m_nextP;
  	  endElementP->m_elementP=new Linux_SambaSharePrinterBrowseForPrinterManualInstance(elementP);
  	}
  };  
}
 
