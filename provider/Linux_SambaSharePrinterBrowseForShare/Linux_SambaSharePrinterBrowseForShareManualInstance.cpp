/**
 *  Linux_SambaSharePrinterBrowseForShareManualInstance.cpp
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


#include "Linux_SambaSharePrinterBrowseForShareManualInstance.h"
#include "CmpiData.h"
#include "CmpiString.h"
#include "CmpiArray.h"
#include <string>

namespace genProvider {

  //*********************************************************
  //Linux_SambaSharePrinterBrowseForShareManualInstance
  //*********************************************************

  //empty constructor
  Linux_SambaSharePrinterBrowseForShareManualInstance::
   Linux_SambaSharePrinterBrowseForShareManualInstance(){   	
   	init();  	   	
  };
  
  
  //copy constructor	
  Linux_SambaSharePrinterBrowseForShareManualInstance::
   Linux_SambaSharePrinterBrowseForShareManualInstance
   (const Linux_SambaSharePrinterBrowseForShareManualInstance& original){   	
   	init(original);  	   	
  };
  
  
  //constructor using CmpiInstance
  Linux_SambaSharePrinterBrowseForShareManualInstance::
   Linux_SambaSharePrinterBrowseForShareManualInstance (const CmpiInstance& inst, const char* instanceNamespace){
    CmpiData cmpiData;
    init(); 
    
    CmpiObjectPath cop=inst.getObjectPath();
    cop.setNameSpace(instanceNamespace);
    setInstanceName(Linux_SambaSharePrinterBrowseForShareInstanceName(cop));
    
  }
  
  
  //Destructor
  Linux_SambaSharePrinterBrowseForShareManualInstance::
   ~Linux_SambaSharePrinterBrowseForShareManualInstance(){
   	reset();  	  
  };
  
  
  //copy operator
  Linux_SambaSharePrinterBrowseForShareManualInstance&
   Linux_SambaSharePrinterBrowseForShareManualInstance::operator=
   (const Linux_SambaSharePrinterBrowseForShareManualInstance& original){   	
   	init(original);
   	return *this;
  };
  
  
  //converts to CmpiInstance
  CmpiInstance Linux_SambaSharePrinterBrowseForShareManualInstance::
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
  unsigned int Linux_SambaSharePrinterBrowseForShareManualInstance::
   isInstanceNameSet() const{
  	return isSet.instanceName;
  }
  
  const Linux_SambaSharePrinterBrowseForShareInstanceName&
    Linux_SambaSharePrinterBrowseForShareManualInstance::getInstanceName() const{

    if(!isSet.instanceName)
   	  throw CmpiErrorFormater::getErrorException(
   	   CmpiErrorFormater::NOT_SET,
   	   "InstanceName not set in Linux_SambaSharePrinterBrowseForShare instance");
  		
   	return m_instanceName;
  }

  void Linux_SambaSharePrinterBrowseForShareManualInstance::setInstanceName(
   const Linux_SambaSharePrinterBrowseForShareInstanceName& val){
    m_instanceName = val;
    isSet.instanceName=1;
  }


  
  //set isSet attributes to FALSE
  void Linux_SambaSharePrinterBrowseForShareManualInstance::init(){
   	isSet.instanceName=0;
   	  	
  };
  
  
  //copies another instance properties in this
  void Linux_SambaSharePrinterBrowseForShareManualInstance::init
   (const Linux_SambaSharePrinterBrowseForShareManualInstance& original){   	
   	init();
   	   	
    if(original.isInstanceNameSet()){
      setInstanceName(original.getInstanceName());
    }    
   }
  
  
  //reset the instance data
  void Linux_SambaSharePrinterBrowseForShareManualInstance::reset(){
   	
  	  
  };
  
  
  //*********************************************************
  //Linux_SambaSharePrinterBrowseForShareManualInstanceEnumerationElement	
  //*********************************************************
  
  Linux_SambaSharePrinterBrowseForShareManualInstanceEnumerationElement::
   Linux_SambaSharePrinterBrowseForShareManualInstanceEnumerationElement(){
   	
  	m_elementP=0;
  	m_nextP=0;
  	  
  };
  
  
  Linux_SambaSharePrinterBrowseForShareManualInstanceEnumerationElement::
   ~Linux_SambaSharePrinterBrowseForShareManualInstanceEnumerationElement(){
   	
  	if (m_elementP!=0)
  	  delete(m_elementP);
  	if (m_nextP!=0)
  	  delete(m_nextP);
  	  
  };

  
  //*********************************************************
  //Linux_SambaSharePrinterBrowseForShareManualInstanceNameEnumeration
  //*********************************************************

  Linux_SambaSharePrinterBrowseForShareManualInstanceEnumeration::
   Linux_SambaSharePrinterBrowseForShareManualInstanceEnumeration(){
   	
  	 firstElementP=0;
     currentElementP=0;
     endElementP=0;
  };
  
  Linux_SambaSharePrinterBrowseForShareManualInstanceEnumeration::
   Linux_SambaSharePrinterBrowseForShareManualInstanceEnumeration(
   const Linux_SambaSharePrinterBrowseForShareManualInstanceEnumeration& original){
   	
     firstElementP=0;
     currentElementP=0;
     endElementP=0;
  	 
     int size=original.getSize();
     for(int i=0;i<size;i++)
       addElement(original.getElement(i));           
  };
  
  	  
  Linux_SambaSharePrinterBrowseForShareManualInstanceEnumeration::
   ~Linux_SambaSharePrinterBrowseForShareManualInstanceEnumeration(){
   	
  	if (firstElementP!=0)
  	  delete(firstElementP);
  	  	
  };
  
  	  
  void Linux_SambaSharePrinterBrowseForShareManualInstanceEnumeration::reset(){
  	
  	currentElementP=firstElementP;
  };
  
  	  
  bool Linux_SambaSharePrinterBrowseForShareManualInstanceEnumeration::hasNext() const{
  	
  	return (currentElementP!=0);
  
  };
  
  int Linux_SambaSharePrinterBrowseForShareManualInstanceEnumeration::getSize() const{
  	
    int size=0;
    Linux_SambaSharePrinterBrowseForShareManualInstanceEnumerationElement* followingP=firstElementP;
  	
  	while(followingP!=0){
        followingP=followingP->m_nextP;
        size++;
    }
  	
    return size;
    
  };
  
  const Linux_SambaSharePrinterBrowseForShareManualInstance&  
   Linux_SambaSharePrinterBrowseForShareManualInstanceEnumeration::getElement(int pos) const{
   
    Linux_SambaSharePrinterBrowseForShareManualInstanceEnumerationElement* followingP=firstElementP;
   
    int i=0;
    while((followingP!=0)&&(i<pos)){
        followingP=followingP->m_nextP;
        i++;
    }
    
    return *(followingP->m_elementP);
  };
  
  	  
  const Linux_SambaSharePrinterBrowseForShareManualInstance&
   Linux_SambaSharePrinterBrowseForShareManualInstanceEnumeration::getNext() {
   	
  	 Linux_SambaSharePrinterBrowseForShareManualInstanceEnumerationElement* currentP=
  	  currentElementP;
  	 currentElementP=currentElementP->m_nextP;
  	 
  	 return *(currentP->m_elementP);
  };
  	  
  void Linux_SambaSharePrinterBrowseForShareManualInstanceEnumeration::addElement
   (const Linux_SambaSharePrinterBrowseForShareManualInstance& elementP){
   	
  	if(firstElementP==0){
  	  firstElementP=new Linux_SambaSharePrinterBrowseForShareManualInstanceEnumerationElement();
  	  firstElementP->m_elementP=new Linux_SambaSharePrinterBrowseForShareManualInstance(elementP);
  	  endElementP=firstElementP;
  	  currentElementP=firstElementP;
  	}else{
  	  endElementP->m_nextP=new Linux_SambaSharePrinterBrowseForShareManualInstanceEnumerationElement();
  	  endElementP=endElementP->m_nextP;
  	  endElementP->m_elementP=new Linux_SambaSharePrinterBrowseForShareManualInstance(elementP);
  	}
  };  
}
 
