/**
 *  Linux_SambaScriptingOptionsManualInstance.cpp
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


#include "Linux_SambaScriptingOptionsManualInstance.h"
#include "CmpiData.h"
#include "CmpiString.h"
#include "CmpiArray.h"
#include <string>

namespace genProvider {

  //*********************************************************
  //Linux_SambaScriptingOptionsManualInstance
  //*********************************************************

  //empty constructor
  Linux_SambaScriptingOptionsManualInstance::
   Linux_SambaScriptingOptionsManualInstance(){   	
   	init();  	   	
  };
  
  
  //copy constructor	
  Linux_SambaScriptingOptionsManualInstance::
   Linux_SambaScriptingOptionsManualInstance
   (const Linux_SambaScriptingOptionsManualInstance& original){   	
   	init(original);  	   	
  };
  
  
  //constructor using CmpiInstance
  Linux_SambaScriptingOptionsManualInstance::
   Linux_SambaScriptingOptionsManualInstance (const CmpiInstance& inst, const char* instanceNamespace){
    CmpiData cmpiData;
    init(); 
    
    CmpiObjectPath cop=inst.getObjectPath();
    cop.setNameSpace(instanceNamespace);
    setInstanceName(Linux_SambaScriptingOptionsInstanceName(cop));
    
    cmpiData = inst.getProperty("addGroupScript");
    if(!cmpiData.isNullValue()){
      CmpiString addGroupScript = cmpiData;
      setaddGroupScript(addGroupScript.charPtr());
    }
    
    cmpiData = inst.getProperty("addPrinterCommand");
    if(!cmpiData.isNullValue()){
      CmpiString addPrinterCommand = cmpiData;
      setaddPrinterCommand(addPrinterCommand.charPtr());
    }
    
    cmpiData = inst.getProperty("addShareCommand");
    if(!cmpiData.isNullValue()){
      CmpiString addShareCommand = cmpiData;
      setaddShareCommand(addShareCommand.charPtr());
    }
    
    cmpiData = inst.getProperty("addUserScript");
    if(!cmpiData.isNullValue()){
      CmpiString addUserScript = cmpiData;
      setaddUserScript(addUserScript.charPtr());
    }
    
    cmpiData = inst.getProperty("addUsertoGroupScript");
    if(!cmpiData.isNullValue()){
      CmpiString addUsertoGroupScript = cmpiData;
      setaddUsertoGroupScript(addUsertoGroupScript.charPtr());
    }
    
    cmpiData = inst.getProperty("deleteGrouprScript");
    if(!cmpiData.isNullValue()){
      CmpiString deleteGrouprScript = cmpiData;
      setdeleteGrouprScript(deleteGrouprScript.charPtr());
    }
    
    cmpiData = inst.getProperty("deleteUserScript");
    if(!cmpiData.isNullValue()){
      CmpiString deleteUserScript = cmpiData;
      setdeleteUserScript(deleteUserScript.charPtr());
    }
    
    cmpiData = inst.getProperty("deleteUserfromGroupScript");
    if(!cmpiData.isNullValue()){
      CmpiString deleteUserfromGroupScript = cmpiData;
      setdeleteUserfromGroupScript(deleteUserfromGroupScript.charPtr());
    }
    
  }
  
  
  //Destructor
  Linux_SambaScriptingOptionsManualInstance::
   ~Linux_SambaScriptingOptionsManualInstance(){
   	reset();  	  
  };
  
  
  //copy operator
  Linux_SambaScriptingOptionsManualInstance&
   Linux_SambaScriptingOptionsManualInstance::operator=
   (const Linux_SambaScriptingOptionsManualInstance& original){   	
   	init(original);
   	return *this;
  };
  
  
  //converts to CmpiInstance
  CmpiInstance Linux_SambaScriptingOptionsManualInstance::
   getCmpiInstance(const char** properties) const{
   	
   	CmpiObjectPath objectPath=getInstanceName().getObjectPath();      
    CmpiInstance cmpiInstance(objectPath);    
    getInstanceName().fillKeys(cmpiInstance);
    
    if (properties) {
	  cmpiInstance.setPropertyFilter(properties,0);
    }

  	if(isSet.addGroupScript){
  	  cmpiInstance.setProperty("addGroupScript",CmpiData(m_addGroupScript));
  	}

  	if(isSet.addPrinterCommand){
  	  cmpiInstance.setProperty("addPrinterCommand",CmpiData(m_addPrinterCommand));
  	}

  	if(isSet.addShareCommand){
  	  cmpiInstance.setProperty("addShareCommand",CmpiData(m_addShareCommand));
  	}

  	if(isSet.addUserScript){
  	  cmpiInstance.setProperty("addUserScript",CmpiData(m_addUserScript));
  	}

  	if(isSet.addUsertoGroupScript){
  	  cmpiInstance.setProperty("addUsertoGroupScript",CmpiData(m_addUsertoGroupScript));
  	}

  	if(isSet.deleteGrouprScript){
  	  cmpiInstance.setProperty("deleteGrouprScript",CmpiData(m_deleteGrouprScript));
  	}

  	if(isSet.deleteUserScript){
  	  cmpiInstance.setProperty("deleteUserScript",CmpiData(m_deleteUserScript));
  	}

  	if(isSet.deleteUserfromGroupScript){
  	  cmpiInstance.setProperty("deleteUserfromGroupScript",CmpiData(m_deleteUserfromGroupScript));
  	}
  	
  	return cmpiInstance;
  	
  }
  
  
  //InstanceName related methods
  unsigned int Linux_SambaScriptingOptionsManualInstance::
   isInstanceNameSet() const{
  	return isSet.instanceName;
  }
  
  const Linux_SambaScriptingOptionsInstanceName&
    Linux_SambaScriptingOptionsManualInstance::getInstanceName() const{

    if(!isSet.instanceName)
   	  throw CmpiErrorFormater::getErrorException(
   	   CmpiErrorFormater::NOT_SET,
   	   "InstanceName not set in Linux_SambaScriptingOptions instance");
  		
   	return m_instanceName;
  }

  void Linux_SambaScriptingOptionsManualInstance::setInstanceName(
   const Linux_SambaScriptingOptionsInstanceName& val){
    m_instanceName = val;
    isSet.instanceName=1;
  }
       
  //addGroupScript related methods
  unsigned int Linux_SambaScriptingOptionsManualInstance::isaddGroupScriptSet() const{
    return isSet.addGroupScript;
  }
  void  Linux_SambaScriptingOptionsManualInstance::
   setaddGroupScript(const char* val, int makeCopy){
    if (isSet.addGroupScript) {
      delete []m_addGroupScript;
    }
    if (makeCopy&&val) {
      char* tmpval = new char[strlen(val)+1];
      strcpy(tmpval,val);
      m_addGroupScript = tmpval;
    } else {
      m_addGroupScript = val;
    }
    isSet.addGroupScript=1;
  }       
  const char* Linux_SambaScriptingOptionsManualInstance::
   getaddGroupScript() const{
    
    if(!isSet.addGroupScript)
   	  throw CmpiErrorFormater::getErrorException(
   	   CmpiErrorFormater::NOT_SET,
   	   "addGroupScript not set");
   	   	
    return m_addGroupScript;
  }
       
  //addPrinterCommand related methods
  unsigned int Linux_SambaScriptingOptionsManualInstance::isaddPrinterCommandSet() const{
    return isSet.addPrinterCommand;
  }
  void  Linux_SambaScriptingOptionsManualInstance::
   setaddPrinterCommand(const char* val, int makeCopy){
    if (isSet.addPrinterCommand) {
      delete []m_addPrinterCommand;
    }
    if (makeCopy&&val) {
      char* tmpval = new char[strlen(val)+1];
      strcpy(tmpval,val);
      m_addPrinterCommand = tmpval;
    } else {
      m_addPrinterCommand = val;
    }
    isSet.addPrinterCommand=1;
  }       
  const char* Linux_SambaScriptingOptionsManualInstance::
   getaddPrinterCommand() const{
    
    if(!isSet.addPrinterCommand)
   	  throw CmpiErrorFormater::getErrorException(
   	   CmpiErrorFormater::NOT_SET,
   	   "addPrinterCommand not set");
   	   	
    return m_addPrinterCommand;
  }
       
  //addShareCommand related methods
  unsigned int Linux_SambaScriptingOptionsManualInstance::isaddShareCommandSet() const{
    return isSet.addShareCommand;
  }
  void  Linux_SambaScriptingOptionsManualInstance::
   setaddShareCommand(const char* val, int makeCopy){
    if (isSet.addShareCommand) {
      delete []m_addShareCommand;
    }
    if (makeCopy&&val) {
      char* tmpval = new char[strlen(val)+1];
      strcpy(tmpval,val);
      m_addShareCommand = tmpval;
    } else {
      m_addShareCommand = val;
    }
    isSet.addShareCommand=1;
  }       
  const char* Linux_SambaScriptingOptionsManualInstance::
   getaddShareCommand() const{
    
    if(!isSet.addShareCommand)
   	  throw CmpiErrorFormater::getErrorException(
   	   CmpiErrorFormater::NOT_SET,
   	   "addShareCommand not set");
   	   	
    return m_addShareCommand;
  }
       
  //addUserScript related methods
  unsigned int Linux_SambaScriptingOptionsManualInstance::isaddUserScriptSet() const{
    return isSet.addUserScript;
  }
  void  Linux_SambaScriptingOptionsManualInstance::
   setaddUserScript(const char* val, int makeCopy){
    if (isSet.addUserScript) {
      delete []m_addUserScript;
    }
    if (makeCopy&&val) {
      char* tmpval = new char[strlen(val)+1];
      strcpy(tmpval,val);
      m_addUserScript = tmpval;
    } else {
      m_addUserScript = val;
    }
    isSet.addUserScript=1;
  }       
  const char* Linux_SambaScriptingOptionsManualInstance::
   getaddUserScript() const{
    
    if(!isSet.addUserScript)
   	  throw CmpiErrorFormater::getErrorException(
   	   CmpiErrorFormater::NOT_SET,
   	   "addUserScript not set");
   	   	
    return m_addUserScript;
  }
       
  //addUsertoGroupScript related methods
  unsigned int Linux_SambaScriptingOptionsManualInstance::isaddUsertoGroupScriptSet() const{
    return isSet.addUsertoGroupScript;
  }
  void  Linux_SambaScriptingOptionsManualInstance::
   setaddUsertoGroupScript(const char* val, int makeCopy){
    if (isSet.addUsertoGroupScript) {
      delete []m_addUsertoGroupScript;
    }
    if (makeCopy&&val) {
      char* tmpval = new char[strlen(val)+1];
      strcpy(tmpval,val);
      m_addUsertoGroupScript = tmpval;
    } else {
      m_addUsertoGroupScript = val;
    }
    isSet.addUsertoGroupScript=1;
  }       
  const char* Linux_SambaScriptingOptionsManualInstance::
   getaddUsertoGroupScript() const{
    
    if(!isSet.addUsertoGroupScript)
   	  throw CmpiErrorFormater::getErrorException(
   	   CmpiErrorFormater::NOT_SET,
   	   "addUsertoGroupScript not set");
   	   	
    return m_addUsertoGroupScript;
  }
       
  //deleteGrouprScript related methods
  unsigned int Linux_SambaScriptingOptionsManualInstance::isdeleteGrouprScriptSet() const{
    return isSet.deleteGrouprScript;
  }
  void  Linux_SambaScriptingOptionsManualInstance::
   setdeleteGrouprScript(const char* val, int makeCopy){
    if (isSet.deleteGrouprScript) {
      delete []m_deleteGrouprScript;
    }
    if (makeCopy&&val) {
      char* tmpval = new char[strlen(val)+1];
      strcpy(tmpval,val);
      m_deleteGrouprScript = tmpval;
    } else {
      m_deleteGrouprScript = val;
    }
    isSet.deleteGrouprScript=1;
  }       
  const char* Linux_SambaScriptingOptionsManualInstance::
   getdeleteGrouprScript() const{
    
    if(!isSet.deleteGrouprScript)
   	  throw CmpiErrorFormater::getErrorException(
   	   CmpiErrorFormater::NOT_SET,
   	   "deleteGrouprScript not set");
   	   	
    return m_deleteGrouprScript;
  }
       
  //deleteUserScript related methods
  unsigned int Linux_SambaScriptingOptionsManualInstance::isdeleteUserScriptSet() const{
    return isSet.deleteUserScript;
  }
  void  Linux_SambaScriptingOptionsManualInstance::
   setdeleteUserScript(const char* val, int makeCopy){
    if (isSet.deleteUserScript) {
      delete []m_deleteUserScript;
    }
    if (makeCopy&&val) {
      char* tmpval = new char[strlen(val)+1];
      strcpy(tmpval,val);
      m_deleteUserScript = tmpval;
    } else {
      m_deleteUserScript = val;
    }
    isSet.deleteUserScript=1;
  }       
  const char* Linux_SambaScriptingOptionsManualInstance::
   getdeleteUserScript() const{
    
    if(!isSet.deleteUserScript)
   	  throw CmpiErrorFormater::getErrorException(
   	   CmpiErrorFormater::NOT_SET,
   	   "deleteUserScript not set");
   	   	
    return m_deleteUserScript;
  }
       
  //deleteUserfromGroupScript related methods
  unsigned int Linux_SambaScriptingOptionsManualInstance::isdeleteUserfromGroupScriptSet() const{
    return isSet.deleteUserfromGroupScript;
  }
  void  Linux_SambaScriptingOptionsManualInstance::
   setdeleteUserfromGroupScript(const char* val, int makeCopy){
    if (isSet.deleteUserfromGroupScript) {
      delete []m_deleteUserfromGroupScript;
    }
    if (makeCopy&&val) {
      char* tmpval = new char[strlen(val)+1];
      strcpy(tmpval,val);
      m_deleteUserfromGroupScript = tmpval;
    } else {
      m_deleteUserfromGroupScript = val;
    }
    isSet.deleteUserfromGroupScript=1;
  }       
  const char* Linux_SambaScriptingOptionsManualInstance::
   getdeleteUserfromGroupScript() const{
    
    if(!isSet.deleteUserfromGroupScript)
   	  throw CmpiErrorFormater::getErrorException(
   	   CmpiErrorFormater::NOT_SET,
   	   "deleteUserfromGroupScript not set");
   	   	
    return m_deleteUserfromGroupScript;
  }


  
  //set isSet attributes to FALSE
  void Linux_SambaScriptingOptionsManualInstance::init(){
   	isSet.instanceName=0;
   	   	
    isSet.addGroupScript=0;   	
    isSet.addPrinterCommand=0;   	
    isSet.addShareCommand=0;   	
    isSet.addUserScript=0;   	
    isSet.addUsertoGroupScript=0;   	
    isSet.deleteGrouprScript=0;   	
    isSet.deleteUserScript=0;   	
    isSet.deleteUserfromGroupScript=0;  	
  };
  
  
  //copies another instance properties in this
  void Linux_SambaScriptingOptionsManualInstance::init
   (const Linux_SambaScriptingOptionsManualInstance& original){   	
   	init();
   	   	
    if(original.isInstanceNameSet()){
      setInstanceName(original.getInstanceName());
    }   	
    if(original.isaddGroupScriptSet()){
      const char* addGroupScriptOriginal=original.getaddGroupScript();
      setaddGroupScript(addGroupScriptOriginal, 1);
    }   	
    if(original.isaddPrinterCommandSet()){
      const char* addPrinterCommandOriginal=original.getaddPrinterCommand();
      setaddPrinterCommand(addPrinterCommandOriginal, 1);
    }   	
    if(original.isaddShareCommandSet()){
      const char* addShareCommandOriginal=original.getaddShareCommand();
      setaddShareCommand(addShareCommandOriginal, 1);
    }   	
    if(original.isaddUserScriptSet()){
      const char* addUserScriptOriginal=original.getaddUserScript();
      setaddUserScript(addUserScriptOriginal, 1);
    }   	
    if(original.isaddUsertoGroupScriptSet()){
      const char* addUsertoGroupScriptOriginal=original.getaddUsertoGroupScript();
      setaddUsertoGroupScript(addUsertoGroupScriptOriginal, 1);
    }   	
    if(original.isdeleteGrouprScriptSet()){
      const char* deleteGrouprScriptOriginal=original.getdeleteGrouprScript();
      setdeleteGrouprScript(deleteGrouprScriptOriginal, 1);
    }   	
    if(original.isdeleteUserScriptSet()){
      const char* deleteUserScriptOriginal=original.getdeleteUserScript();
      setdeleteUserScript(deleteUserScriptOriginal, 1);
    }   	
    if(original.isdeleteUserfromGroupScriptSet()){
      const char* deleteUserfromGroupScriptOriginal=original.getdeleteUserfromGroupScript();
      setdeleteUserfromGroupScript(deleteUserfromGroupScriptOriginal, 1);
    }    
   }
  
  
  //reset the instance data
  void Linux_SambaScriptingOptionsManualInstance::reset(){
   	

  	if (isSet.addGroupScript)
  	  delete(m_addGroupScript);

  	if (isSet.addPrinterCommand)
  	  delete(m_addPrinterCommand);

  	if (isSet.addShareCommand)
  	  delete(m_addShareCommand);

  	if (isSet.addUserScript)
  	  delete(m_addUserScript);

  	if (isSet.addUsertoGroupScript)
  	  delete(m_addUsertoGroupScript);

  	if (isSet.deleteGrouprScript)
  	  delete(m_deleteGrouprScript);

  	if (isSet.deleteUserScript)
  	  delete(m_deleteUserScript);

  	if (isSet.deleteUserfromGroupScript)
  	  delete(m_deleteUserfromGroupScript);
  	  
  };
  
  
  //*********************************************************
  //Linux_SambaScriptingOptionsManualInstanceEnumerationElement	
  //*********************************************************
  
  Linux_SambaScriptingOptionsManualInstanceEnumerationElement::
   Linux_SambaScriptingOptionsManualInstanceEnumerationElement(){
   	
  	m_elementP=0;
  	m_nextP=0;
  	  
  };
  
  
  Linux_SambaScriptingOptionsManualInstanceEnumerationElement::
   ~Linux_SambaScriptingOptionsManualInstanceEnumerationElement(){
   	
  	if (m_elementP!=0)
  	  delete(m_elementP);
  	if (m_nextP!=0)
  	  delete(m_nextP);
  	  
  };

  
  //*********************************************************
  //Linux_SambaScriptingOptionsManualInstanceNameEnumeration
  //*********************************************************

  Linux_SambaScriptingOptionsManualInstanceEnumeration::
   Linux_SambaScriptingOptionsManualInstanceEnumeration(){
   	
  	 firstElementP=0;
     currentElementP=0;
     endElementP=0;
  };
  
  Linux_SambaScriptingOptionsManualInstanceEnumeration::
   Linux_SambaScriptingOptionsManualInstanceEnumeration(
   const Linux_SambaScriptingOptionsManualInstanceEnumeration& original){
   	
     firstElementP=0;
     currentElementP=0;
     endElementP=0;
  	 
     int size=original.getSize();
     for(int i=0;i<size;i++)
       addElement(original.getElement(i));           
  };
  
  	  
  Linux_SambaScriptingOptionsManualInstanceEnumeration::
   ~Linux_SambaScriptingOptionsManualInstanceEnumeration(){
   	
  	if (firstElementP!=0)
  	  delete(firstElementP);
  	  	
  };
  
  	  
  void Linux_SambaScriptingOptionsManualInstanceEnumeration::reset(){
  	
  	currentElementP=firstElementP;
  };
  
  	  
  bool Linux_SambaScriptingOptionsManualInstanceEnumeration::hasNext() const{
  	
  	return (currentElementP!=0);
  
  };
  
  int Linux_SambaScriptingOptionsManualInstanceEnumeration::getSize() const{
  	
    int size=0;
    Linux_SambaScriptingOptionsManualInstanceEnumerationElement* followingP=firstElementP;
  	
  	while(followingP!=0){
        followingP=followingP->m_nextP;
        size++;
    }
  	
    return size;
    
  };
  
  const Linux_SambaScriptingOptionsManualInstance&  
   Linux_SambaScriptingOptionsManualInstanceEnumeration::getElement(int pos) const{
   
    Linux_SambaScriptingOptionsManualInstanceEnumerationElement* followingP=firstElementP;
   
    int i=0;
    while((followingP!=0)&&(i<pos)){
        followingP=followingP->m_nextP;
        i++;
    }
    
    return *(followingP->m_elementP);
  };
  
  	  
  const Linux_SambaScriptingOptionsManualInstance&
   Linux_SambaScriptingOptionsManualInstanceEnumeration::getNext() {
   	
  	 Linux_SambaScriptingOptionsManualInstanceEnumerationElement* currentP=
  	  currentElementP;
  	 currentElementP=currentElementP->m_nextP;
  	 
  	 return *(currentP->m_elementP);
  };
  	  
  void Linux_SambaScriptingOptionsManualInstanceEnumeration::addElement
   (const Linux_SambaScriptingOptionsManualInstance& elementP){
   	
  	if(firstElementP==0){
  	  firstElementP=new Linux_SambaScriptingOptionsManualInstanceEnumerationElement();
  	  firstElementP->m_elementP=new Linux_SambaScriptingOptionsManualInstance(elementP);
  	  endElementP=firstElementP;
  	  currentElementP=firstElementP;
  	}else{
  	  endElementP->m_nextP=new Linux_SambaScriptingOptionsManualInstanceEnumerationElement();
  	  endElementP=endElementP->m_nextP;
  	  endElementP->m_elementP=new Linux_SambaScriptingOptionsManualInstance(elementP);
  	}
  };  
}
 
