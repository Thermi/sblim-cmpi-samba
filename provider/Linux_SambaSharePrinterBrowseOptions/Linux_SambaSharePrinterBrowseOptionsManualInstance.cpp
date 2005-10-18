/**
 *  Linux_SambaSharePrinterBrowseOptionsManualInstance.cpp
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


#include "Linux_SambaSharePrinterBrowseOptionsManualInstance.h"
#include "CmpiData.h"
#include "CmpiString.h"
#include "CmpiArray.h"
#include <string>

namespace genProvider {

  //*********************************************************
  //Linux_SambaSharePrinterBrowseOptionsManualInstance
  //*********************************************************

  //empty constructor
  Linux_SambaSharePrinterBrowseOptionsManualInstance::
   Linux_SambaSharePrinterBrowseOptionsManualInstance(){   	
   	init();  	   	
  };
  
  
  //copy constructor	
  Linux_SambaSharePrinterBrowseOptionsManualInstance::
   Linux_SambaSharePrinterBrowseOptionsManualInstance
   (const Linux_SambaSharePrinterBrowseOptionsManualInstance& original){   	
   	init(original);  	   	
  };
  
  
  //constructor using CmpiInstance
  Linux_SambaSharePrinterBrowseOptionsManualInstance::
   Linux_SambaSharePrinterBrowseOptionsManualInstance (const CmpiInstance& inst, const char* instanceNamespace){
    CmpiData cmpiData;
    init(); 
    
    CmpiObjectPath cop=inst.getObjectPath();
    cop.setNameSpace(instanceNamespace);
    setInstanceName(Linux_SambaSharePrinterBrowseOptionsInstanceName(cop));
    
    cmpiData = inst.getProperty("Browsable");
    if(!cmpiData.isNullValue()){
      CMPIBoolean Browsable = cmpiData;
      setBrowsable(Browsable);
    }
    
  }
  
  
  //Destructor
  Linux_SambaSharePrinterBrowseOptionsManualInstance::
   ~Linux_SambaSharePrinterBrowseOptionsManualInstance(){
   	reset();  	  
  };
  
  
  //copy operator
  Linux_SambaSharePrinterBrowseOptionsManualInstance&
   Linux_SambaSharePrinterBrowseOptionsManualInstance::operator=
   (const Linux_SambaSharePrinterBrowseOptionsManualInstance& original){   	
   	init(original);
   	return *this;
  };
  
  
  //converts to CmpiInstance
  CmpiInstance Linux_SambaSharePrinterBrowseOptionsManualInstance::
   getCmpiInstance(const char** properties) const{
   	
   	CmpiObjectPath objectPath=getInstanceName().getObjectPath();      
    CmpiInstance cmpiInstance(objectPath);    
    getInstanceName().fillKeys(cmpiInstance);
    
    if (properties) {
	  cmpiInstance.setPropertyFilter(properties,0);
    }

  	if(isSet.Browsable){
  	  cmpiInstance.setProperty("Browsable",CmpiBooleanData(m_Browsable));
  	}
  	
  	return cmpiInstance;
  	
  }
  
  
  //InstanceName related methods
  unsigned int Linux_SambaSharePrinterBrowseOptionsManualInstance::
   isInstanceNameSet() const{
  	return isSet.instanceName;
  }
  
  const Linux_SambaSharePrinterBrowseOptionsInstanceName&
    Linux_SambaSharePrinterBrowseOptionsManualInstance::getInstanceName() const{

    if(!isSet.instanceName)
   	  throw CmpiErrorFormater::getErrorException(
   	   CmpiErrorFormater::NOT_SET,
   	   "InstanceName not set in Linux_SambaSharePrinterBrowseOptions instance");
  		
   	return m_instanceName;
  }

  void Linux_SambaSharePrinterBrowseOptionsManualInstance::setInstanceName(
   const Linux_SambaSharePrinterBrowseOptionsInstanceName& val){
    m_instanceName = val;
    isSet.instanceName=1;
  }
       
  //Browsable related methods
  unsigned int Linux_SambaSharePrinterBrowseOptionsManualInstance::isBrowsableSet() const{
    return isSet.Browsable;
  }
  void Linux_SambaSharePrinterBrowseOptionsManualInstance::
   setBrowsable(const CMPIBoolean val){
    m_Browsable = val;
    isSet.Browsable=1;
  }       
  const CMPIBoolean Linux_SambaSharePrinterBrowseOptionsManualInstance::
   getBrowsable() const{
    
    if(!isSet.Browsable)
   	  throw CmpiErrorFormater::getErrorException(
   	   CmpiErrorFormater::NOT_SET,
   	   "Browsable not set");
   	   	
    return m_Browsable;
  }


  
  //set isSet attributes to FALSE
  void Linux_SambaSharePrinterBrowseOptionsManualInstance::init(){
   	isSet.instanceName=0;
   	   	
    isSet.Browsable=0;  	
  };
  
  
  //copies another instance properties in this
  void Linux_SambaSharePrinterBrowseOptionsManualInstance::init
   (const Linux_SambaSharePrinterBrowseOptionsManualInstance& original){   	
   	init();
   	   	
    if(original.isInstanceNameSet()){
      setInstanceName(original.getInstanceName());
    }   	
    if(original.isBrowsableSet()){
      const CMPIBoolean BrowsableOriginal=original.getBrowsable();
      setBrowsable(BrowsableOriginal);
    }    
   }
  
  
  //reset the instance data
  void Linux_SambaSharePrinterBrowseOptionsManualInstance::reset(){
   	
  	  
  };
  
  
  //*********************************************************
  //Linux_SambaSharePrinterBrowseOptionsManualInstanceEnumerationElement	
  //*********************************************************
  
  Linux_SambaSharePrinterBrowseOptionsManualInstanceEnumerationElement::
   Linux_SambaSharePrinterBrowseOptionsManualInstanceEnumerationElement(){
   	
  	m_elementP=0;
  	m_nextP=0;
  	  
  };
  
  
  Linux_SambaSharePrinterBrowseOptionsManualInstanceEnumerationElement::
   ~Linux_SambaSharePrinterBrowseOptionsManualInstanceEnumerationElement(){
   	
  	if (m_elementP!=0)
  	  delete(m_elementP);
  	if (m_nextP!=0)
  	  delete(m_nextP);
  	  
  };

  
  //*********************************************************
  //Linux_SambaSharePrinterBrowseOptionsManualInstanceNameEnumeration
  //*********************************************************

  Linux_SambaSharePrinterBrowseOptionsManualInstanceEnumeration::
   Linux_SambaSharePrinterBrowseOptionsManualInstanceEnumeration(){
   	
  	 firstElementP=0;
     currentElementP=0;
     endElementP=0;
  };
  
  Linux_SambaSharePrinterBrowseOptionsManualInstanceEnumeration::
   Linux_SambaSharePrinterBrowseOptionsManualInstanceEnumeration(
   const Linux_SambaSharePrinterBrowseOptionsManualInstanceEnumeration& original){
   	
     firstElementP=0;
     currentElementP=0;
     endElementP=0;
  	 
     int size=original.getSize();
     for(int i=0;i<size;i++)
       addElement(original.getElement(i));           
  };
  
  	  
  Linux_SambaSharePrinterBrowseOptionsManualInstanceEnumeration::
   ~Linux_SambaSharePrinterBrowseOptionsManualInstanceEnumeration(){
   	
  	if (firstElementP!=0)
  	  delete(firstElementP);
  	  	
  };
  
  	  
  void Linux_SambaSharePrinterBrowseOptionsManualInstanceEnumeration::reset(){
  	
  	currentElementP=firstElementP;
  };
  
  	  
  bool Linux_SambaSharePrinterBrowseOptionsManualInstanceEnumeration::hasNext() const{
  	
  	return (currentElementP!=0);
  
  };
  
  int Linux_SambaSharePrinterBrowseOptionsManualInstanceEnumeration::getSize() const{
  	
    int size=0;
    Linux_SambaSharePrinterBrowseOptionsManualInstanceEnumerationElement* followingP=firstElementP;
  	
  	while(followingP!=0){
        followingP=followingP->m_nextP;
        size++;
    }
  	
    return size;
    
  };
  
  const Linux_SambaSharePrinterBrowseOptionsManualInstance&  
   Linux_SambaSharePrinterBrowseOptionsManualInstanceEnumeration::getElement(int pos) const{
   
    Linux_SambaSharePrinterBrowseOptionsManualInstanceEnumerationElement* followingP=firstElementP;
   
    int i=0;
    while((followingP!=0)&&(i<pos)){
        followingP=followingP->m_nextP;
        i++;
    }
    
    return *(followingP->m_elementP);
  };
  
  	  
  const Linux_SambaSharePrinterBrowseOptionsManualInstance&
   Linux_SambaSharePrinterBrowseOptionsManualInstanceEnumeration::getNext() {
   	
  	 Linux_SambaSharePrinterBrowseOptionsManualInstanceEnumerationElement* currentP=
  	  currentElementP;
  	 currentElementP=currentElementP->m_nextP;
  	 
  	 return *(currentP->m_elementP);
  };
  	  
  void Linux_SambaSharePrinterBrowseOptionsManualInstanceEnumeration::addElement
   (const Linux_SambaSharePrinterBrowseOptionsManualInstance& elementP){
   	
  	if(firstElementP==0){
  	  firstElementP=new Linux_SambaSharePrinterBrowseOptionsManualInstanceEnumerationElement();
  	  firstElementP->m_elementP=new Linux_SambaSharePrinterBrowseOptionsManualInstance(elementP);
  	  endElementP=firstElementP;
  	  currentElementP=firstElementP;
  	}else{
  	  endElementP->m_nextP=new Linux_SambaSharePrinterBrowseOptionsManualInstanceEnumerationElement();
  	  endElementP=endElementP->m_nextP;
  	  endElementP->m_elementP=new Linux_SambaSharePrinterBrowseOptionsManualInstance(elementP);
  	}
  };  
}
 
