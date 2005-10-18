/**
 *  Linux_SambaGlobalBrowseOptionsManualInstance.cpp
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


#include "Linux_SambaGlobalBrowseOptionsManualInstance.h"
#include "CmpiData.h"
#include "CmpiString.h"
#include "CmpiArray.h"
#include <string>

namespace genProvider {

  //*********************************************************
  //Linux_SambaGlobalBrowseOptionsManualInstance
  //*********************************************************

  //empty constructor
  Linux_SambaGlobalBrowseOptionsManualInstance::
   Linux_SambaGlobalBrowseOptionsManualInstance(){   	
   	init();  	   	
  };
  
  
  //copy constructor	
  Linux_SambaGlobalBrowseOptionsManualInstance::
   Linux_SambaGlobalBrowseOptionsManualInstance
   (const Linux_SambaGlobalBrowseOptionsManualInstance& original){   	
   	init(original);  	   	
  };
  
  
  //constructor using CmpiInstance
  Linux_SambaGlobalBrowseOptionsManualInstance::
   Linux_SambaGlobalBrowseOptionsManualInstance (const CmpiInstance& inst, const char* instanceNamespace){
    CmpiData cmpiData;
    init(); 
    
    CmpiObjectPath cop=inst.getObjectPath();
    cop.setNameSpace(instanceNamespace);
    setInstanceName(Linux_SambaGlobalBrowseOptionsInstanceName(cop));
    
    cmpiData = inst.getProperty("Browsable");
    if(!cmpiData.isNullValue()){
      CMPIBoolean Browsable = cmpiData;
      setBrowsable(Browsable);
    }
    
    cmpiData = inst.getProperty("DomainMaster");
    if(!cmpiData.isNullValue()){
      CMPIUint16 DomainMaster = cmpiData;
      setDomainMaster(DomainMaster);
    }
    
  }
  
  
  //Destructor
  Linux_SambaGlobalBrowseOptionsManualInstance::
   ~Linux_SambaGlobalBrowseOptionsManualInstance(){
   	reset();  	  
  };
  
  
  //copy operator
  Linux_SambaGlobalBrowseOptionsManualInstance&
   Linux_SambaGlobalBrowseOptionsManualInstance::operator=
   (const Linux_SambaGlobalBrowseOptionsManualInstance& original){   	
   	init(original);
   	return *this;
  };
  
  
  //converts to CmpiInstance
  CmpiInstance Linux_SambaGlobalBrowseOptionsManualInstance::
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

  	if(isSet.DomainMaster){
  	  cmpiInstance.setProperty("DomainMaster",CmpiData(m_DomainMaster));
  	}
  	
  	return cmpiInstance;
  	
  }
  
  
  //InstanceName related methods
  unsigned int Linux_SambaGlobalBrowseOptionsManualInstance::
   isInstanceNameSet() const{
  	return isSet.instanceName;
  }
  
  const Linux_SambaGlobalBrowseOptionsInstanceName&
    Linux_SambaGlobalBrowseOptionsManualInstance::getInstanceName() const{

    if(!isSet.instanceName)
   	  throw CmpiErrorFormater::getErrorException(
   	   CmpiErrorFormater::NOT_SET,
   	   "InstanceName not set in Linux_SambaGlobalBrowseOptions instance");
  		
   	return m_instanceName;
  }

  void Linux_SambaGlobalBrowseOptionsManualInstance::setInstanceName(
   const Linux_SambaGlobalBrowseOptionsInstanceName& val){
    m_instanceName = val;
    isSet.instanceName=1;
  }
       
  //Browsable related methods
  unsigned int Linux_SambaGlobalBrowseOptionsManualInstance::isBrowsableSet() const{
    return isSet.Browsable;
  }
  void Linux_SambaGlobalBrowseOptionsManualInstance::
   setBrowsable(const CMPIBoolean val){
    m_Browsable = val;
    isSet.Browsable=1;
  }       
  const CMPIBoolean Linux_SambaGlobalBrowseOptionsManualInstance::
   getBrowsable() const{
    
    if(!isSet.Browsable)
   	  throw CmpiErrorFormater::getErrorException(
   	   CmpiErrorFormater::NOT_SET,
   	   "Browsable not set");
   	   	
    return m_Browsable;
  }
       
  //DomainMaster related methods
  unsigned int Linux_SambaGlobalBrowseOptionsManualInstance::isDomainMasterSet() const{
    return isSet.DomainMaster;
  }
  void Linux_SambaGlobalBrowseOptionsManualInstance::
   setDomainMaster(const CMPIUint16 val){
    m_DomainMaster = val;
    isSet.DomainMaster=1;
  }       
  const CMPIUint16 Linux_SambaGlobalBrowseOptionsManualInstance::
   getDomainMaster() const{
    
    if(!isSet.DomainMaster)
   	  throw CmpiErrorFormater::getErrorException(
   	   CmpiErrorFormater::NOT_SET,
   	   "DomainMaster not set");
   	   	
    return m_DomainMaster;
  }


  
  //set isSet attributes to FALSE
  void Linux_SambaGlobalBrowseOptionsManualInstance::init(){
   	isSet.instanceName=0;
   	   	
    isSet.Browsable=0;   	
    isSet.DomainMaster=0;  	
  };
  
  
  //copies another instance properties in this
  void Linux_SambaGlobalBrowseOptionsManualInstance::init
   (const Linux_SambaGlobalBrowseOptionsManualInstance& original){   	
   	init();
   	   	
    if(original.isInstanceNameSet()){
      setInstanceName(original.getInstanceName());
    }   	
    if(original.isBrowsableSet()){
      const CMPIBoolean BrowsableOriginal=original.getBrowsable();
      setBrowsable(BrowsableOriginal);
    }   	
    if(original.isDomainMasterSet()){
      const CMPIUint16 DomainMasterOriginal=original.getDomainMaster();
      setDomainMaster(DomainMasterOriginal);
    }    
   }
  
  
  //reset the instance data
  void Linux_SambaGlobalBrowseOptionsManualInstance::reset(){
   	
  	  
  };
  
  
  //*********************************************************
  //Linux_SambaGlobalBrowseOptionsManualInstanceEnumerationElement	
  //*********************************************************
  
  Linux_SambaGlobalBrowseOptionsManualInstanceEnumerationElement::
   Linux_SambaGlobalBrowseOptionsManualInstanceEnumerationElement(){
   	
  	m_elementP=0;
  	m_nextP=0;
  	  
  };
  
  
  Linux_SambaGlobalBrowseOptionsManualInstanceEnumerationElement::
   ~Linux_SambaGlobalBrowseOptionsManualInstanceEnumerationElement(){
   	
  	if (m_elementP!=0)
  	  delete(m_elementP);
  	if (m_nextP!=0)
  	  delete(m_nextP);
  	  
  };

  
  //*********************************************************
  //Linux_SambaGlobalBrowseOptionsManualInstanceNameEnumeration
  //*********************************************************

  Linux_SambaGlobalBrowseOptionsManualInstanceEnumeration::
   Linux_SambaGlobalBrowseOptionsManualInstanceEnumeration(){
   	
  	 firstElementP=0;
     currentElementP=0;
     endElementP=0;
  };
  
  Linux_SambaGlobalBrowseOptionsManualInstanceEnumeration::
   Linux_SambaGlobalBrowseOptionsManualInstanceEnumeration(
   const Linux_SambaGlobalBrowseOptionsManualInstanceEnumeration& original){
   	
     firstElementP=0;
     currentElementP=0;
     endElementP=0;
  	 
     int size=original.getSize();
     for(int i=0;i<size;i++)
       addElement(original.getElement(i));           
  };
  
  	  
  Linux_SambaGlobalBrowseOptionsManualInstanceEnumeration::
   ~Linux_SambaGlobalBrowseOptionsManualInstanceEnumeration(){
   	
  	if (firstElementP!=0)
  	  delete(firstElementP);
  	  	
  };
  
  	  
  void Linux_SambaGlobalBrowseOptionsManualInstanceEnumeration::reset(){
  	
  	currentElementP=firstElementP;
  };
  
  	  
  bool Linux_SambaGlobalBrowseOptionsManualInstanceEnumeration::hasNext() const{
  	
  	return (currentElementP!=0);
  
  };
  
  int Linux_SambaGlobalBrowseOptionsManualInstanceEnumeration::getSize() const{
  	
    int size=0;
    Linux_SambaGlobalBrowseOptionsManualInstanceEnumerationElement* followingP=firstElementP;
  	
  	while(followingP!=0){
        followingP=followingP->m_nextP;
        size++;
    }
  	
    return size;
    
  };
  
  const Linux_SambaGlobalBrowseOptionsManualInstance&  
   Linux_SambaGlobalBrowseOptionsManualInstanceEnumeration::getElement(int pos) const{
   
    Linux_SambaGlobalBrowseOptionsManualInstanceEnumerationElement* followingP=firstElementP;
   
    int i=0;
    while((followingP!=0)&&(i<pos)){
        followingP=followingP->m_nextP;
        i++;
    }
    
    return *(followingP->m_elementP);
  };
  
  	  
  const Linux_SambaGlobalBrowseOptionsManualInstance&
   Linux_SambaGlobalBrowseOptionsManualInstanceEnumeration::getNext() {
   	
  	 Linux_SambaGlobalBrowseOptionsManualInstanceEnumerationElement* currentP=
  	  currentElementP;
  	 currentElementP=currentElementP->m_nextP;
  	 
  	 return *(currentP->m_elementP);
  };
  	  
  void Linux_SambaGlobalBrowseOptionsManualInstanceEnumeration::addElement
   (const Linux_SambaGlobalBrowseOptionsManualInstance& elementP){
   	
  	if(firstElementP==0){
  	  firstElementP=new Linux_SambaGlobalBrowseOptionsManualInstanceEnumerationElement();
  	  firstElementP->m_elementP=new Linux_SambaGlobalBrowseOptionsManualInstance(elementP);
  	  endElementP=firstElementP;
  	  currentElementP=firstElementP;
  	}else{
  	  endElementP->m_nextP=new Linux_SambaGlobalBrowseOptionsManualInstanceEnumerationElement();
  	  endElementP=endElementP->m_nextP;
  	  endElementP->m_elementP=new Linux_SambaGlobalBrowseOptionsManualInstance(elementP);
  	}
  };  
}
 
