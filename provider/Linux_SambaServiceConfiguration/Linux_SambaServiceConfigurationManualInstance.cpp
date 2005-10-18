/**
 *  Linux_SambaServiceConfigurationManualInstance.cpp
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


#include "Linux_SambaServiceConfigurationManualInstance.h"
#include "CmpiData.h"
#include "CmpiString.h"
#include "CmpiArray.h"
#include <string>

namespace genProvider {

  //*********************************************************
  //Linux_SambaServiceConfigurationManualInstance
  //*********************************************************

  //empty constructor
  Linux_SambaServiceConfigurationManualInstance::
   Linux_SambaServiceConfigurationManualInstance(){   	
   	init();  	   	
  };
  
  
  //copy constructor	
  Linux_SambaServiceConfigurationManualInstance::
   Linux_SambaServiceConfigurationManualInstance
   (const Linux_SambaServiceConfigurationManualInstance& original){   	
   	init(original);  	   	
  };
  
  
  //constructor using CmpiInstance
  Linux_SambaServiceConfigurationManualInstance::
   Linux_SambaServiceConfigurationManualInstance (const CmpiInstance& inst, const char* instanceNamespace){
    CmpiData cmpiData;
    init(); 
    
    CmpiObjectPath cop=inst.getObjectPath();
    cop.setNameSpace(instanceNamespace);
    setInstanceName(Linux_SambaServiceConfigurationInstanceName(cop));
    
    cmpiData = inst.getProperty("ConfigurationFile");
    if(!cmpiData.isNullValue()){
      CmpiString ConfigurationFile = cmpiData;
      setConfigurationFile(ConfigurationFile.charPtr());
    }
    
  }
  
  
  //Destructor
  Linux_SambaServiceConfigurationManualInstance::
   ~Linux_SambaServiceConfigurationManualInstance(){
   	reset();  	  
  };
  
  
  //copy operator
  Linux_SambaServiceConfigurationManualInstance&
   Linux_SambaServiceConfigurationManualInstance::operator=
   (const Linux_SambaServiceConfigurationManualInstance& original){   	
   	init(original);
   	return *this;
  };
  
  
  //converts to CmpiInstance
  CmpiInstance Linux_SambaServiceConfigurationManualInstance::
   getCmpiInstance(const char** properties) const{
   	
   	CmpiObjectPath objectPath=getInstanceName().getObjectPath();      
    CmpiInstance cmpiInstance(objectPath);    
    getInstanceName().fillKeys(cmpiInstance);
    
    if (properties) {
	  cmpiInstance.setPropertyFilter(properties,0);
    }

  	if(isSet.ConfigurationFile){
  	  cmpiInstance.setProperty("ConfigurationFile",CmpiData(m_ConfigurationFile));
  	}
  	
  	return cmpiInstance;
  	
  }
  
  
  //InstanceName related methods
  unsigned int Linux_SambaServiceConfigurationManualInstance::
   isInstanceNameSet() const{
  	return isSet.instanceName;
  }
  
  const Linux_SambaServiceConfigurationInstanceName&
    Linux_SambaServiceConfigurationManualInstance::getInstanceName() const{

    if(!isSet.instanceName)
   	  throw CmpiErrorFormater::getErrorException(
   	   CmpiErrorFormater::NOT_SET,
   	   "InstanceName not set in Linux_SambaServiceConfiguration instance");
  		
   	return m_instanceName;
  }

  void Linux_SambaServiceConfigurationManualInstance::setInstanceName(
   const Linux_SambaServiceConfigurationInstanceName& val){
    m_instanceName = val;
    isSet.instanceName=1;
  }
       
  //ConfigurationFile related methods
  unsigned int Linux_SambaServiceConfigurationManualInstance::isConfigurationFileSet() const{
    return isSet.ConfigurationFile;
  }
  void  Linux_SambaServiceConfigurationManualInstance::
   setConfigurationFile(const char* val, int makeCopy){
    if (isSet.ConfigurationFile) {
      delete []m_ConfigurationFile;
    }
    if (makeCopy&&val) {
      char* tmpval = new char[strlen(val)+1];
      strcpy(tmpval,val);
      m_ConfigurationFile = tmpval;
    } else {
      m_ConfigurationFile = val;
    }
    isSet.ConfigurationFile=1;
  }       
  const char* Linux_SambaServiceConfigurationManualInstance::
   getConfigurationFile() const{
    
    if(!isSet.ConfigurationFile)
   	  throw CmpiErrorFormater::getErrorException(
   	   CmpiErrorFormater::NOT_SET,
   	   "ConfigurationFile not set");
   	   	
    return m_ConfigurationFile;
  }


  
  //set isSet attributes to FALSE
  void Linux_SambaServiceConfigurationManualInstance::init(){
   	isSet.instanceName=0;
   	   	
    isSet.ConfigurationFile=0;  	
  };
  
  
  //copies another instance properties in this
  void Linux_SambaServiceConfigurationManualInstance::init
   (const Linux_SambaServiceConfigurationManualInstance& original){   	
   	init();
   	   	
    if(original.isInstanceNameSet()){
      setInstanceName(original.getInstanceName());
    }   	
    if(original.isConfigurationFileSet()){
      const char* ConfigurationFileOriginal=original.getConfigurationFile();
      setConfigurationFile(ConfigurationFileOriginal, 1);
    }    
   }
  
  
  //reset the instance data
  void Linux_SambaServiceConfigurationManualInstance::reset(){
   	

  	if (isSet.ConfigurationFile)
  	  delete(m_ConfigurationFile);
  	  
  };
  
  
  //*********************************************************
  //Linux_SambaServiceConfigurationManualInstanceEnumerationElement	
  //*********************************************************
  
  Linux_SambaServiceConfigurationManualInstanceEnumerationElement::
   Linux_SambaServiceConfigurationManualInstanceEnumerationElement(){
   	
  	m_elementP=0;
  	m_nextP=0;
  	  
  };
  
  
  Linux_SambaServiceConfigurationManualInstanceEnumerationElement::
   ~Linux_SambaServiceConfigurationManualInstanceEnumerationElement(){
   	
  	if (m_elementP!=0)
  	  delete(m_elementP);
  	if (m_nextP!=0)
  	  delete(m_nextP);
  	  
  };

  
  //*********************************************************
  //Linux_SambaServiceConfigurationManualInstanceNameEnumeration
  //*********************************************************

  Linux_SambaServiceConfigurationManualInstanceEnumeration::
   Linux_SambaServiceConfigurationManualInstanceEnumeration(){
   	
  	 firstElementP=0;
     currentElementP=0;
     endElementP=0;
  };
  
  Linux_SambaServiceConfigurationManualInstanceEnumeration::
   Linux_SambaServiceConfigurationManualInstanceEnumeration(
   const Linux_SambaServiceConfigurationManualInstanceEnumeration& original){
   	
     firstElementP=0;
     currentElementP=0;
     endElementP=0;
  	 
     int size=original.getSize();
     for(int i=0;i<size;i++)
       addElement(original.getElement(i));           
  };
  
  	  
  Linux_SambaServiceConfigurationManualInstanceEnumeration::
   ~Linux_SambaServiceConfigurationManualInstanceEnumeration(){
   	
  	if (firstElementP!=0)
  	  delete(firstElementP);
  	  	
  };
  
  	  
  void Linux_SambaServiceConfigurationManualInstanceEnumeration::reset(){
  	
  	currentElementP=firstElementP;
  };
  
  	  
  bool Linux_SambaServiceConfigurationManualInstanceEnumeration::hasNext() const{
  	
  	return (currentElementP!=0);
  
  };
  
  int Linux_SambaServiceConfigurationManualInstanceEnumeration::getSize() const{
  	
    int size=0;
    Linux_SambaServiceConfigurationManualInstanceEnumerationElement* followingP=firstElementP;
  	
  	while(followingP!=0){
        followingP=followingP->m_nextP;
        size++;
    }
  	
    return size;
    
  };
  
  const Linux_SambaServiceConfigurationManualInstance&  
   Linux_SambaServiceConfigurationManualInstanceEnumeration::getElement(int pos) const{
   
    Linux_SambaServiceConfigurationManualInstanceEnumerationElement* followingP=firstElementP;
   
    int i=0;
    while((followingP!=0)&&(i<pos)){
        followingP=followingP->m_nextP;
        i++;
    }
    
    return *(followingP->m_elementP);
  };
  
  	  
  const Linux_SambaServiceConfigurationManualInstance&
   Linux_SambaServiceConfigurationManualInstanceEnumeration::getNext() {
   	
  	 Linux_SambaServiceConfigurationManualInstanceEnumerationElement* currentP=
  	  currentElementP;
  	 currentElementP=currentElementP->m_nextP;
  	 
  	 return *(currentP->m_elementP);
  };
  	  
  void Linux_SambaServiceConfigurationManualInstanceEnumeration::addElement
   (const Linux_SambaServiceConfigurationManualInstance& elementP){
   	
  	if(firstElementP==0){
  	  firstElementP=new Linux_SambaServiceConfigurationManualInstanceEnumerationElement();
  	  firstElementP->m_elementP=new Linux_SambaServiceConfigurationManualInstance(elementP);
  	  endElementP=firstElementP;
  	  currentElementP=firstElementP;
  	}else{
  	  endElementP->m_nextP=new Linux_SambaServiceConfigurationManualInstanceEnumerationElement();
  	  endElementP=endElementP->m_nextP;
  	  endElementP->m_elementP=new Linux_SambaServiceConfigurationManualInstance(elementP);
  	}
  };  
}
 
