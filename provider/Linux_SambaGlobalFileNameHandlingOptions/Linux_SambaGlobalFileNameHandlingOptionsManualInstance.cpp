/**
 *  Linux_SambaGlobalFileNameHandlingOptionsManualInstance.cpp
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


#include "Linux_SambaGlobalFileNameHandlingOptionsManualInstance.h"
#include "CmpiData.h"
#include "CmpiString.h"
#include "CmpiArray.h"
#include <string>

namespace genProvider {

  //*********************************************************
  //Linux_SambaGlobalFileNameHandlingOptionsManualInstance
  //*********************************************************

  //empty constructor
  Linux_SambaGlobalFileNameHandlingOptionsManualInstance::
   Linux_SambaGlobalFileNameHandlingOptionsManualInstance(){   	
   	init();  	   	
  };
  
  
  //copy constructor	
  Linux_SambaGlobalFileNameHandlingOptionsManualInstance::
   Linux_SambaGlobalFileNameHandlingOptionsManualInstance
   (const Linux_SambaGlobalFileNameHandlingOptionsManualInstance& original){   	
   	init(original);  	   	
  };
  
  
  //constructor using CmpiInstance
  Linux_SambaGlobalFileNameHandlingOptionsManualInstance::
   Linux_SambaGlobalFileNameHandlingOptionsManualInstance (const CmpiInstance& inst, const char* instanceNamespace){
    CmpiData cmpiData;
    init(); 
    
    CmpiObjectPath cop=inst.getObjectPath();
    cop.setNameSpace(instanceNamespace);
    setInstanceName(Linux_SambaGlobalFileNameHandlingOptionsInstanceName(cop));
    
    cmpiData = inst.getProperty("CaseSensitive");
    if(!cmpiData.isNullValue()){
      CMPIBoolean CaseSensitive = cmpiData;
      setCaseSensitive(CaseSensitive);
    }
    
    cmpiData = inst.getProperty("DosFiletimes");
    if(!cmpiData.isNullValue()){
      CMPIBoolean DosFiletimes = cmpiData;
      setDosFiletimes(DosFiletimes);
    }
    
    cmpiData = inst.getProperty("HideDotFiles");
    if(!cmpiData.isNullValue()){
      CMPIBoolean HideDotFiles = cmpiData;
      setHideDotFiles(HideDotFiles);
    }
    
  }
  
  
  //Destructor
  Linux_SambaGlobalFileNameHandlingOptionsManualInstance::
   ~Linux_SambaGlobalFileNameHandlingOptionsManualInstance(){
   	reset();  	  
  };
  
  
  //copy operator
  Linux_SambaGlobalFileNameHandlingOptionsManualInstance&
   Linux_SambaGlobalFileNameHandlingOptionsManualInstance::operator=
   (const Linux_SambaGlobalFileNameHandlingOptionsManualInstance& original){   	
   	init(original);
   	return *this;
  };
  
  
  //converts to CmpiInstance
  CmpiInstance Linux_SambaGlobalFileNameHandlingOptionsManualInstance::
   getCmpiInstance(const char** properties) const{
   	
   	CmpiObjectPath objectPath=getInstanceName().getObjectPath();      
    CmpiInstance cmpiInstance(objectPath);    
    getInstanceName().fillKeys(cmpiInstance);
    
    if (properties) {
	  cmpiInstance.setPropertyFilter(properties,0);
    }

  	if(isSet.CaseSensitive){
  	  cmpiInstance.setProperty("CaseSensitive",CmpiBooleanData(m_CaseSensitive));
  	}

  	if(isSet.DosFiletimes){
  	  cmpiInstance.setProperty("DosFiletimes",CmpiBooleanData(m_DosFiletimes));
  	}

  	if(isSet.HideDotFiles){
  	  cmpiInstance.setProperty("HideDotFiles",CmpiBooleanData(m_HideDotFiles));
  	}
  	
  	return cmpiInstance;
  	
  }
  
  
  //InstanceName related methods
  unsigned int Linux_SambaGlobalFileNameHandlingOptionsManualInstance::
   isInstanceNameSet() const{
  	return isSet.instanceName;
  }
  
  const Linux_SambaGlobalFileNameHandlingOptionsInstanceName&
    Linux_SambaGlobalFileNameHandlingOptionsManualInstance::getInstanceName() const{

    if(!isSet.instanceName)
   	  throw CmpiErrorFormater::getErrorException(
   	   CmpiErrorFormater::NOT_SET,
   	   "InstanceName not set in Linux_SambaGlobalFileNameHandlingOptions instance");
  		
   	return m_instanceName;
  }

  void Linux_SambaGlobalFileNameHandlingOptionsManualInstance::setInstanceName(
   const Linux_SambaGlobalFileNameHandlingOptionsInstanceName& val){
    m_instanceName = val;
    isSet.instanceName=1;
  }
       
  //CaseSensitive related methods
  unsigned int Linux_SambaGlobalFileNameHandlingOptionsManualInstance::isCaseSensitiveSet() const{
    return isSet.CaseSensitive;
  }
  void Linux_SambaGlobalFileNameHandlingOptionsManualInstance::
   setCaseSensitive(const CMPIBoolean val){
    m_CaseSensitive = val;
    isSet.CaseSensitive=1;
  }       
  const CMPIBoolean Linux_SambaGlobalFileNameHandlingOptionsManualInstance::
   getCaseSensitive() const{
    
    if(!isSet.CaseSensitive)
   	  throw CmpiErrorFormater::getErrorException(
   	   CmpiErrorFormater::NOT_SET,
   	   "CaseSensitive not set");
   	   	
    return m_CaseSensitive;
  }
       
  //DosFiletimes related methods
  unsigned int Linux_SambaGlobalFileNameHandlingOptionsManualInstance::isDosFiletimesSet() const{
    return isSet.DosFiletimes;
  }
  void Linux_SambaGlobalFileNameHandlingOptionsManualInstance::
   setDosFiletimes(const CMPIBoolean val){
    m_DosFiletimes = val;
    isSet.DosFiletimes=1;
  }       
  const CMPIBoolean Linux_SambaGlobalFileNameHandlingOptionsManualInstance::
   getDosFiletimes() const{
    
    if(!isSet.DosFiletimes)
   	  throw CmpiErrorFormater::getErrorException(
   	   CmpiErrorFormater::NOT_SET,
   	   "DosFiletimes not set");
   	   	
    return m_DosFiletimes;
  }
       
  //HideDotFiles related methods
  unsigned int Linux_SambaGlobalFileNameHandlingOptionsManualInstance::isHideDotFilesSet() const{
    return isSet.HideDotFiles;
  }
  void Linux_SambaGlobalFileNameHandlingOptionsManualInstance::
   setHideDotFiles(const CMPIBoolean val){
    m_HideDotFiles = val;
    isSet.HideDotFiles=1;
  }       
  const CMPIBoolean Linux_SambaGlobalFileNameHandlingOptionsManualInstance::
   getHideDotFiles() const{
    
    if(!isSet.HideDotFiles)
   	  throw CmpiErrorFormater::getErrorException(
   	   CmpiErrorFormater::NOT_SET,
   	   "HideDotFiles not set");
   	   	
    return m_HideDotFiles;
  }


  
  //set isSet attributes to FALSE
  void Linux_SambaGlobalFileNameHandlingOptionsManualInstance::init(){
   	isSet.instanceName=0;
   	   	
    isSet.CaseSensitive=0;   	
    isSet.DosFiletimes=0;   	
    isSet.HideDotFiles=0;  	
  };
  
  
  //copies another instance properties in this
  void Linux_SambaGlobalFileNameHandlingOptionsManualInstance::init
   (const Linux_SambaGlobalFileNameHandlingOptionsManualInstance& original){   	
   	init();
   	   	
    if(original.isInstanceNameSet()){
      setInstanceName(original.getInstanceName());
    }   	
    if(original.isCaseSensitiveSet()){
      const CMPIBoolean CaseSensitiveOriginal=original.getCaseSensitive();
      setCaseSensitive(CaseSensitiveOriginal);
    }   	
    if(original.isDosFiletimesSet()){
      const CMPIBoolean DosFiletimesOriginal=original.getDosFiletimes();
      setDosFiletimes(DosFiletimesOriginal);
    }   	
    if(original.isHideDotFilesSet()){
      const CMPIBoolean HideDotFilesOriginal=original.getHideDotFiles();
      setHideDotFiles(HideDotFilesOriginal);
    }    
   }
  
  
  //reset the instance data
  void Linux_SambaGlobalFileNameHandlingOptionsManualInstance::reset(){
   	
  	  
  };
  
  
  //*********************************************************
  //Linux_SambaGlobalFileNameHandlingOptionsManualInstanceEnumerationElement	
  //*********************************************************
  
  Linux_SambaGlobalFileNameHandlingOptionsManualInstanceEnumerationElement::
   Linux_SambaGlobalFileNameHandlingOptionsManualInstanceEnumerationElement(){
   	
  	m_elementP=0;
  	m_nextP=0;
  	  
  };
  
  
  Linux_SambaGlobalFileNameHandlingOptionsManualInstanceEnumerationElement::
   ~Linux_SambaGlobalFileNameHandlingOptionsManualInstanceEnumerationElement(){
   	
  	if (m_elementP!=0)
  	  delete(m_elementP);
  	if (m_nextP!=0)
  	  delete(m_nextP);
  	  
  };

  
  //*********************************************************
  //Linux_SambaGlobalFileNameHandlingOptionsManualInstanceNameEnumeration
  //*********************************************************

  Linux_SambaGlobalFileNameHandlingOptionsManualInstanceEnumeration::
   Linux_SambaGlobalFileNameHandlingOptionsManualInstanceEnumeration(){
   	
  	 firstElementP=0;
     currentElementP=0;
     endElementP=0;
  };
  
  Linux_SambaGlobalFileNameHandlingOptionsManualInstanceEnumeration::
   Linux_SambaGlobalFileNameHandlingOptionsManualInstanceEnumeration(
   const Linux_SambaGlobalFileNameHandlingOptionsManualInstanceEnumeration& original){
   	
     firstElementP=0;
     currentElementP=0;
     endElementP=0;
  	 
     int size=original.getSize();
     for(int i=0;i<size;i++)
       addElement(original.getElement(i));           
  };
  
  	  
  Linux_SambaGlobalFileNameHandlingOptionsManualInstanceEnumeration::
   ~Linux_SambaGlobalFileNameHandlingOptionsManualInstanceEnumeration(){
   	
  	if (firstElementP!=0)
  	  delete(firstElementP);
  	  	
  };
  
  	  
  void Linux_SambaGlobalFileNameHandlingOptionsManualInstanceEnumeration::reset(){
  	
  	currentElementP=firstElementP;
  };
  
  	  
  bool Linux_SambaGlobalFileNameHandlingOptionsManualInstanceEnumeration::hasNext() const{
  	
  	return (currentElementP!=0);
  
  };
  
  int Linux_SambaGlobalFileNameHandlingOptionsManualInstanceEnumeration::getSize() const{
  	
    int size=0;
    Linux_SambaGlobalFileNameHandlingOptionsManualInstanceEnumerationElement* followingP=firstElementP;
  	
  	while(followingP!=0){
        followingP=followingP->m_nextP;
        size++;
    }
  	
    return size;
    
  };
  
  const Linux_SambaGlobalFileNameHandlingOptionsManualInstance&  
   Linux_SambaGlobalFileNameHandlingOptionsManualInstanceEnumeration::getElement(int pos) const{
   
    Linux_SambaGlobalFileNameHandlingOptionsManualInstanceEnumerationElement* followingP=firstElementP;
   
    int i=0;
    while((followingP!=0)&&(i<pos)){
        followingP=followingP->m_nextP;
        i++;
    }
    
    return *(followingP->m_elementP);
  };
  
  	  
  const Linux_SambaGlobalFileNameHandlingOptionsManualInstance&
   Linux_SambaGlobalFileNameHandlingOptionsManualInstanceEnumeration::getNext() {
   	
  	 Linux_SambaGlobalFileNameHandlingOptionsManualInstanceEnumerationElement* currentP=
  	  currentElementP;
  	 currentElementP=currentElementP->m_nextP;
  	 
  	 return *(currentP->m_elementP);
  };
  	  
  void Linux_SambaGlobalFileNameHandlingOptionsManualInstanceEnumeration::addElement
   (const Linux_SambaGlobalFileNameHandlingOptionsManualInstance& elementP){
   	
  	if(firstElementP==0){
  	  firstElementP=new Linux_SambaGlobalFileNameHandlingOptionsManualInstanceEnumerationElement();
  	  firstElementP->m_elementP=new Linux_SambaGlobalFileNameHandlingOptionsManualInstance(elementP);
  	  endElementP=firstElementP;
  	  currentElementP=firstElementP;
  	}else{
  	  endElementP->m_nextP=new Linux_SambaGlobalFileNameHandlingOptionsManualInstanceEnumerationElement();
  	  endElementP=endElementP->m_nextP;
  	  endElementP->m_elementP=new Linux_SambaGlobalFileNameHandlingOptionsManualInstance(elementP);
  	}
  };  
}
 
