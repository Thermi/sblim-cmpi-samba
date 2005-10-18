/**
 *  Linux_SambaShareFileNameHandlingOptionsManualInstance.cpp
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


#include "Linux_SambaShareFileNameHandlingOptionsManualInstance.h"
#include "CmpiData.h"
#include "CmpiString.h"
#include "CmpiArray.h"
#include <string>

namespace genProvider {

  //*********************************************************
  //Linux_SambaShareFileNameHandlingOptionsManualInstance
  //*********************************************************

  //empty constructor
  Linux_SambaShareFileNameHandlingOptionsManualInstance::
   Linux_SambaShareFileNameHandlingOptionsManualInstance(){   	
   	init();  	   	
  };
  
  
  //copy constructor	
  Linux_SambaShareFileNameHandlingOptionsManualInstance::
   Linux_SambaShareFileNameHandlingOptionsManualInstance
   (const Linux_SambaShareFileNameHandlingOptionsManualInstance& original){   	
   	init(original);  	   	
  };
  
  
  //constructor using CmpiInstance
  Linux_SambaShareFileNameHandlingOptionsManualInstance::
   Linux_SambaShareFileNameHandlingOptionsManualInstance (const CmpiInstance& inst, const char* instanceNamespace){
    CmpiData cmpiData;
    init(); 
    
    CmpiObjectPath cop=inst.getObjectPath();
    cop.setNameSpace(instanceNamespace);
    setInstanceName(Linux_SambaShareFileNameHandlingOptionsInstanceName(cop));
    
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
  Linux_SambaShareFileNameHandlingOptionsManualInstance::
   ~Linux_SambaShareFileNameHandlingOptionsManualInstance(){
   	reset();  	  
  };
  
  
  //copy operator
  Linux_SambaShareFileNameHandlingOptionsManualInstance&
   Linux_SambaShareFileNameHandlingOptionsManualInstance::operator=
   (const Linux_SambaShareFileNameHandlingOptionsManualInstance& original){   	
   	init(original);
   	return *this;
  };
  
  
  //converts to CmpiInstance
  CmpiInstance Linux_SambaShareFileNameHandlingOptionsManualInstance::
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
  unsigned int Linux_SambaShareFileNameHandlingOptionsManualInstance::
   isInstanceNameSet() const{
  	return isSet.instanceName;
  }
  
  const Linux_SambaShareFileNameHandlingOptionsInstanceName&
    Linux_SambaShareFileNameHandlingOptionsManualInstance::getInstanceName() const{

    if(!isSet.instanceName)
   	  throw CmpiErrorFormater::getErrorException(
   	   CmpiErrorFormater::NOT_SET,
   	   "InstanceName not set in Linux_SambaShareFileNameHandlingOptions instance");
  		
   	return m_instanceName;
  }

  void Linux_SambaShareFileNameHandlingOptionsManualInstance::setInstanceName(
   const Linux_SambaShareFileNameHandlingOptionsInstanceName& val){
    m_instanceName = val;
    isSet.instanceName=1;
  }
       
  //CaseSensitive related methods
  unsigned int Linux_SambaShareFileNameHandlingOptionsManualInstance::isCaseSensitiveSet() const{
    return isSet.CaseSensitive;
  }
  void Linux_SambaShareFileNameHandlingOptionsManualInstance::
   setCaseSensitive(const CMPIBoolean val){
    m_CaseSensitive = val;
    isSet.CaseSensitive=1;
  }       
  const CMPIBoolean Linux_SambaShareFileNameHandlingOptionsManualInstance::
   getCaseSensitive() const{
    
    if(!isSet.CaseSensitive)
   	  throw CmpiErrorFormater::getErrorException(
   	   CmpiErrorFormater::NOT_SET,
   	   "CaseSensitive not set");
   	   	
    return m_CaseSensitive;
  }
       
  //DosFiletimes related methods
  unsigned int Linux_SambaShareFileNameHandlingOptionsManualInstance::isDosFiletimesSet() const{
    return isSet.DosFiletimes;
  }
  void Linux_SambaShareFileNameHandlingOptionsManualInstance::
   setDosFiletimes(const CMPIBoolean val){
    m_DosFiletimes = val;
    isSet.DosFiletimes=1;
  }       
  const CMPIBoolean Linux_SambaShareFileNameHandlingOptionsManualInstance::
   getDosFiletimes() const{
    
    if(!isSet.DosFiletimes)
   	  throw CmpiErrorFormater::getErrorException(
   	   CmpiErrorFormater::NOT_SET,
   	   "DosFiletimes not set");
   	   	
    return m_DosFiletimes;
  }
       
  //HideDotFiles related methods
  unsigned int Linux_SambaShareFileNameHandlingOptionsManualInstance::isHideDotFilesSet() const{
    return isSet.HideDotFiles;
  }
  void Linux_SambaShareFileNameHandlingOptionsManualInstance::
   setHideDotFiles(const CMPIBoolean val){
    m_HideDotFiles = val;
    isSet.HideDotFiles=1;
  }       
  const CMPIBoolean Linux_SambaShareFileNameHandlingOptionsManualInstance::
   getHideDotFiles() const{
    
    if(!isSet.HideDotFiles)
   	  throw CmpiErrorFormater::getErrorException(
   	   CmpiErrorFormater::NOT_SET,
   	   "HideDotFiles not set");
   	   	
    return m_HideDotFiles;
  }


  
  //set isSet attributes to FALSE
  void Linux_SambaShareFileNameHandlingOptionsManualInstance::init(){
   	isSet.instanceName=0;
   	   	
    isSet.CaseSensitive=0;   	
    isSet.DosFiletimes=0;   	
    isSet.HideDotFiles=0;  	
  };
  
  
  //copies another instance properties in this
  void Linux_SambaShareFileNameHandlingOptionsManualInstance::init
   (const Linux_SambaShareFileNameHandlingOptionsManualInstance& original){   	
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
  void Linux_SambaShareFileNameHandlingOptionsManualInstance::reset(){
   	
  	  
  };
  
  
  //*********************************************************
  //Linux_SambaShareFileNameHandlingOptionsManualInstanceEnumerationElement	
  //*********************************************************
  
  Linux_SambaShareFileNameHandlingOptionsManualInstanceEnumerationElement::
   Linux_SambaShareFileNameHandlingOptionsManualInstanceEnumerationElement(){
   	
  	m_elementP=0;
  	m_nextP=0;
  	  
  };
  
  
  Linux_SambaShareFileNameHandlingOptionsManualInstanceEnumerationElement::
   ~Linux_SambaShareFileNameHandlingOptionsManualInstanceEnumerationElement(){
   	
  	if (m_elementP!=0)
  	  delete(m_elementP);
  	if (m_nextP!=0)
  	  delete(m_nextP);
  	  
  };

  
  //*********************************************************
  //Linux_SambaShareFileNameHandlingOptionsManualInstanceNameEnumeration
  //*********************************************************

  Linux_SambaShareFileNameHandlingOptionsManualInstanceEnumeration::
   Linux_SambaShareFileNameHandlingOptionsManualInstanceEnumeration(){
   	
  	 firstElementP=0;
     currentElementP=0;
     endElementP=0;
  };
  
  Linux_SambaShareFileNameHandlingOptionsManualInstanceEnumeration::
   Linux_SambaShareFileNameHandlingOptionsManualInstanceEnumeration(
   const Linux_SambaShareFileNameHandlingOptionsManualInstanceEnumeration& original){
   	
     firstElementP=0;
     currentElementP=0;
     endElementP=0;
  	 
     int size=original.getSize();
     for(int i=0;i<size;i++)
       addElement(original.getElement(i));           
  };
  
  	  
  Linux_SambaShareFileNameHandlingOptionsManualInstanceEnumeration::
   ~Linux_SambaShareFileNameHandlingOptionsManualInstanceEnumeration(){
   	
  	if (firstElementP!=0)
  	  delete(firstElementP);
  	  	
  };
  
  	  
  void Linux_SambaShareFileNameHandlingOptionsManualInstanceEnumeration::reset(){
  	
  	currentElementP=firstElementP;
  };
  
  	  
  bool Linux_SambaShareFileNameHandlingOptionsManualInstanceEnumeration::hasNext() const{
  	
  	return (currentElementP!=0);
  
  };
  
  int Linux_SambaShareFileNameHandlingOptionsManualInstanceEnumeration::getSize() const{
  	
    int size=0;
    Linux_SambaShareFileNameHandlingOptionsManualInstanceEnumerationElement* followingP=firstElementP;
  	
  	while(followingP!=0){
        followingP=followingP->m_nextP;
        size++;
    }
  	
    return size;
    
  };
  
  const Linux_SambaShareFileNameHandlingOptionsManualInstance&  
   Linux_SambaShareFileNameHandlingOptionsManualInstanceEnumeration::getElement(int pos) const{
   
    Linux_SambaShareFileNameHandlingOptionsManualInstanceEnumerationElement* followingP=firstElementP;
   
    int i=0;
    while((followingP!=0)&&(i<pos)){
        followingP=followingP->m_nextP;
        i++;
    }
    
    return *(followingP->m_elementP);
  };
  
  	  
  const Linux_SambaShareFileNameHandlingOptionsManualInstance&
   Linux_SambaShareFileNameHandlingOptionsManualInstanceEnumeration::getNext() {
   	
  	 Linux_SambaShareFileNameHandlingOptionsManualInstanceEnumerationElement* currentP=
  	  currentElementP;
  	 currentElementP=currentElementP->m_nextP;
  	 
  	 return *(currentP->m_elementP);
  };
  	  
  void Linux_SambaShareFileNameHandlingOptionsManualInstanceEnumeration::addElement
   (const Linux_SambaShareFileNameHandlingOptionsManualInstance& elementP){
   	
  	if(firstElementP==0){
  	  firstElementP=new Linux_SambaShareFileNameHandlingOptionsManualInstanceEnumerationElement();
  	  firstElementP->m_elementP=new Linux_SambaShareFileNameHandlingOptionsManualInstance(elementP);
  	  endElementP=firstElementP;
  	  currentElementP=firstElementP;
  	}else{
  	  endElementP->m_nextP=new Linux_SambaShareFileNameHandlingOptionsManualInstanceEnumerationElement();
  	  endElementP=endElementP->m_nextP;
  	  endElementP->m_elementP=new Linux_SambaShareFileNameHandlingOptionsManualInstance(elementP);
  	}
  };  
}
 
