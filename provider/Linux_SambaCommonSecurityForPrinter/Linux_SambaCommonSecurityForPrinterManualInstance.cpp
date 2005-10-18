/**
 *  Linux_SambaCommonSecurityForPrinterManualInstance.cpp
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


#include "Linux_SambaCommonSecurityForPrinterManualInstance.h"
#include "CmpiData.h"
#include "CmpiString.h"
#include "CmpiArray.h"
#include <string>

namespace genProvider {

  //*********************************************************
  //Linux_SambaCommonSecurityForPrinterManualInstance
  //*********************************************************

  //empty constructor
  Linux_SambaCommonSecurityForPrinterManualInstance::
   Linux_SambaCommonSecurityForPrinterManualInstance(){   	
   	init();  	   	
  };
  
  
  //copy constructor	
  Linux_SambaCommonSecurityForPrinterManualInstance::
   Linux_SambaCommonSecurityForPrinterManualInstance
   (const Linux_SambaCommonSecurityForPrinterManualInstance& original){   	
   	init(original);  	   	
  };
  
  
  //constructor using CmpiInstance
  Linux_SambaCommonSecurityForPrinterManualInstance::
   Linux_SambaCommonSecurityForPrinterManualInstance (const CmpiInstance& inst, const char* instanceNamespace){
    CmpiData cmpiData;
    init(); 
    
    CmpiObjectPath cop=inst.getObjectPath();
    cop.setNameSpace(instanceNamespace);
    setInstanceName(Linux_SambaCommonSecurityForPrinterInstanceName(cop));
    
  }
  
  
  //Destructor
  Linux_SambaCommonSecurityForPrinterManualInstance::
   ~Linux_SambaCommonSecurityForPrinterManualInstance(){
   	reset();  	  
  };
  
  
  //copy operator
  Linux_SambaCommonSecurityForPrinterManualInstance&
   Linux_SambaCommonSecurityForPrinterManualInstance::operator=
   (const Linux_SambaCommonSecurityForPrinterManualInstance& original){   	
   	init(original);
   	return *this;
  };
  
  
  //converts to CmpiInstance
  CmpiInstance Linux_SambaCommonSecurityForPrinterManualInstance::
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
  unsigned int Linux_SambaCommonSecurityForPrinterManualInstance::
   isInstanceNameSet() const{
  	return isSet.instanceName;
  }
  
  const Linux_SambaCommonSecurityForPrinterInstanceName&
    Linux_SambaCommonSecurityForPrinterManualInstance::getInstanceName() const{

    if(!isSet.instanceName)
   	  throw CmpiErrorFormater::getErrorException(
   	   CmpiErrorFormater::NOT_SET,
   	   "InstanceName not set in Linux_SambaCommonSecurityForPrinter instance");
  		
   	return m_instanceName;
  }

  void Linux_SambaCommonSecurityForPrinterManualInstance::setInstanceName(
   const Linux_SambaCommonSecurityForPrinterInstanceName& val){
    m_instanceName = val;
    isSet.instanceName=1;
  }


  
  //set isSet attributes to FALSE
  void Linux_SambaCommonSecurityForPrinterManualInstance::init(){
   	isSet.instanceName=0;
   	  	
  };
  
  
  //copies another instance properties in this
  void Linux_SambaCommonSecurityForPrinterManualInstance::init
   (const Linux_SambaCommonSecurityForPrinterManualInstance& original){   	
   	init();
   	   	
    if(original.isInstanceNameSet()){
      setInstanceName(original.getInstanceName());
    }    
   }
  
  
  //reset the instance data
  void Linux_SambaCommonSecurityForPrinterManualInstance::reset(){
   	
  	  
  };
  
  
  //*********************************************************
  //Linux_SambaCommonSecurityForPrinterManualInstanceEnumerationElement	
  //*********************************************************
  
  Linux_SambaCommonSecurityForPrinterManualInstanceEnumerationElement::
   Linux_SambaCommonSecurityForPrinterManualInstanceEnumerationElement(){
   	
  	m_elementP=0;
  	m_nextP=0;
  	  
  };
  
  
  Linux_SambaCommonSecurityForPrinterManualInstanceEnumerationElement::
   ~Linux_SambaCommonSecurityForPrinterManualInstanceEnumerationElement(){
   	
  	if (m_elementP!=0)
  	  delete(m_elementP);
  	if (m_nextP!=0)
  	  delete(m_nextP);
  	  
  };

  
  //*********************************************************
  //Linux_SambaCommonSecurityForPrinterManualInstanceNameEnumeration
  //*********************************************************

  Linux_SambaCommonSecurityForPrinterManualInstanceEnumeration::
   Linux_SambaCommonSecurityForPrinterManualInstanceEnumeration(){
   	
  	 firstElementP=0;
     currentElementP=0;
     endElementP=0;
  };
  
  Linux_SambaCommonSecurityForPrinterManualInstanceEnumeration::
   Linux_SambaCommonSecurityForPrinterManualInstanceEnumeration(
   const Linux_SambaCommonSecurityForPrinterManualInstanceEnumeration& original){
   	
     firstElementP=0;
     currentElementP=0;
     endElementP=0;
  	 
     int size=original.getSize();
     for(int i=0;i<size;i++)
       addElement(original.getElement(i));           
  };
  
  	  
  Linux_SambaCommonSecurityForPrinterManualInstanceEnumeration::
   ~Linux_SambaCommonSecurityForPrinterManualInstanceEnumeration(){
   	
  	if (firstElementP!=0)
  	  delete(firstElementP);
  	  	
  };
  
  	  
  void Linux_SambaCommonSecurityForPrinterManualInstanceEnumeration::reset(){
  	
  	currentElementP=firstElementP;
  };
  
  	  
  bool Linux_SambaCommonSecurityForPrinterManualInstanceEnumeration::hasNext() const{
  	
  	return (currentElementP!=0);
  
  };
  
  int Linux_SambaCommonSecurityForPrinterManualInstanceEnumeration::getSize() const{
  	
    int size=0;
    Linux_SambaCommonSecurityForPrinterManualInstanceEnumerationElement* followingP=firstElementP;
  	
  	while(followingP!=0){
        followingP=followingP->m_nextP;
        size++;
    }
  	
    return size;
    
  };
  
  const Linux_SambaCommonSecurityForPrinterManualInstance&  
   Linux_SambaCommonSecurityForPrinterManualInstanceEnumeration::getElement(int pos) const{
   
    Linux_SambaCommonSecurityForPrinterManualInstanceEnumerationElement* followingP=firstElementP;
   
    int i=0;
    while((followingP!=0)&&(i<pos)){
        followingP=followingP->m_nextP;
        i++;
    }
    
    return *(followingP->m_elementP);
  };
  
  	  
  const Linux_SambaCommonSecurityForPrinterManualInstance&
   Linux_SambaCommonSecurityForPrinterManualInstanceEnumeration::getNext() {
   	
  	 Linux_SambaCommonSecurityForPrinterManualInstanceEnumerationElement* currentP=
  	  currentElementP;
  	 currentElementP=currentElementP->m_nextP;
  	 
  	 return *(currentP->m_elementP);
  };
  	  
  void Linux_SambaCommonSecurityForPrinterManualInstanceEnumeration::addElement
   (const Linux_SambaCommonSecurityForPrinterManualInstance& elementP){
   	
  	if(firstElementP==0){
  	  firstElementP=new Linux_SambaCommonSecurityForPrinterManualInstanceEnumerationElement();
  	  firstElementP->m_elementP=new Linux_SambaCommonSecurityForPrinterManualInstance(elementP);
  	  endElementP=firstElementP;
  	  currentElementP=firstElementP;
  	}else{
  	  endElementP->m_nextP=new Linux_SambaCommonSecurityForPrinterManualInstanceEnumerationElement();
  	  endElementP=endElementP->m_nextP;
  	  endElementP->m_elementP=new Linux_SambaCommonSecurityForPrinterManualInstance(elementP);
  	}
  };  
}
 
