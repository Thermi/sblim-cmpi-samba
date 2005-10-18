/**
 *  Linux_SambaScriptingOptionsInstance.cpp
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


#include "Linux_SambaScriptingOptionsInstance.h"
#include "CmpiData.h"
#include "CmpiString.h"
#include "CmpiArray.h"
#include <string>

namespace genProvider {

  //*********************************************************
  //Linux_SambaScriptingOptionsInstance
  //*********************************************************

  //empty constructor
  Linux_SambaScriptingOptionsInstance::
   Linux_SambaScriptingOptionsInstance(){   	
   	init();  	   	
  };
  
  
  //copy constructor	
  Linux_SambaScriptingOptionsInstance::
   Linux_SambaScriptingOptionsInstance
   (const Linux_SambaScriptingOptionsInstance& original){   	
   	init(original);  	   	
  };
  
  
  //constructor using CmpiInstance
  Linux_SambaScriptingOptionsInstance::
   Linux_SambaScriptingOptionsInstance (const CmpiInstance& inst, const char* instanceNamespace){
    CmpiData cmpiData;
    init(); 
    
    CmpiObjectPath cop=inst.getObjectPath();
    cop.setNameSpace(instanceNamespace);
    setInstanceName(Linux_SambaScriptingOptionsInstanceName(cop));
    
    cmpiData = inst.getProperty("Caption");
    if(!cmpiData.isNullValue()){
      CmpiString Caption = cmpiData;
      setCaption(Caption.charPtr());
    }
    
    cmpiData = inst.getProperty("Description");
    if(!cmpiData.isNullValue()){
      CmpiString Description = cmpiData;
      setDescription(Description.charPtr());
    }
    
    cmpiData = inst.getProperty("ElementName");
    if(!cmpiData.isNullValue()){
      CmpiString ElementName = cmpiData;
      setElementName(ElementName.charPtr());
    }
    
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
    
    cmpiData = inst.getProperty("setPrimaryGroupScript");
    if(!cmpiData.isNullValue()){
      CmpiString setPrimaryGroupScript = cmpiData;
      setsetPrimaryGroupScript(setPrimaryGroupScript.charPtr());
    }
    
  }
  
  
  //Destructor
  Linux_SambaScriptingOptionsInstance::
   ~Linux_SambaScriptingOptionsInstance(){
   	reset();  	  
  };
  
  
  //copy operator
  Linux_SambaScriptingOptionsInstance&
   Linux_SambaScriptingOptionsInstance::operator=
   (const Linux_SambaScriptingOptionsInstance& original){   	
   	init(original);
   	return *this;
  };
  
  
  //converts to CmpiInstance
  CmpiInstance Linux_SambaScriptingOptionsInstance::
   getCmpiInstance(const char** properties) const{
   	
   	CmpiObjectPath objectPath=getInstanceName().getObjectPath();      
    CmpiInstance cmpiInstance(objectPath);    
    getInstanceName().fillKeys(cmpiInstance);
    
    if (properties) {
	  cmpiInstance.setPropertyFilter(properties,0);
    }

  	if(isSet.Caption){
  	  cmpiInstance.setProperty("Caption",CmpiData(m_Caption));
  	}

  	if(isSet.Description){
  	  cmpiInstance.setProperty("Description",CmpiData(m_Description));
  	}

  	if(isSet.ElementName){
  	  cmpiInstance.setProperty("ElementName",CmpiData(m_ElementName));
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

  	if(isSet.setPrimaryGroupScript){
  	  cmpiInstance.setProperty("setPrimaryGroupScript",CmpiData(m_setPrimaryGroupScript));
  	}
  	
  	return cmpiInstance;
  	
  }
  
  
  //InstanceName related methods
  unsigned int Linux_SambaScriptingOptionsInstance::
   isInstanceNameSet() const{
  	return isSet.instanceName;
  }
  
  const Linux_SambaScriptingOptionsInstanceName&
    Linux_SambaScriptingOptionsInstance::getInstanceName() const{

    if(!isSet.instanceName)
   	  throw CmpiErrorFormater::getErrorException(
   	   CmpiErrorFormater::NOT_SET,
   	   "InstanceName not set in Linux_SambaScriptingOptions instance");
  		
   	return m_instanceName;
  }

  void Linux_SambaScriptingOptionsInstance::setInstanceName(
   const Linux_SambaScriptingOptionsInstanceName& val){
    m_instanceName = val;
    isSet.instanceName=1;
  }
       
  //Caption related methods
  unsigned int Linux_SambaScriptingOptionsInstance::isCaptionSet() const{
    return isSet.Caption;
  }
  void  Linux_SambaScriptingOptionsInstance::
   setCaption(const char* val, int makeCopy){
    if (isSet.Caption) {
      delete []m_Caption;
    }
    if (makeCopy&&val) {
      char* tmpval = new char[strlen(val)+1];
      strcpy(tmpval,val);
      m_Caption = tmpval;
    } else {
      m_Caption = val;
    }
    isSet.Caption=1;
  }       
  const char* Linux_SambaScriptingOptionsInstance::
   getCaption() const{
    
    if(!isSet.Caption)
   	  throw CmpiErrorFormater::getErrorException(
   	   CmpiErrorFormater::NOT_SET,
   	   "Caption not set");
   	   	
    return m_Caption;
  }
       
  //Description related methods
  unsigned int Linux_SambaScriptingOptionsInstance::isDescriptionSet() const{
    return isSet.Description;
  }
  void  Linux_SambaScriptingOptionsInstance::
   setDescription(const char* val, int makeCopy){
    if (isSet.Description) {
      delete []m_Description;
    }
    if (makeCopy&&val) {
      char* tmpval = new char[strlen(val)+1];
      strcpy(tmpval,val);
      m_Description = tmpval;
    } else {
      m_Description = val;
    }
    isSet.Description=1;
  }       
  const char* Linux_SambaScriptingOptionsInstance::
   getDescription() const{
    
    if(!isSet.Description)
   	  throw CmpiErrorFormater::getErrorException(
   	   CmpiErrorFormater::NOT_SET,
   	   "Description not set");
   	   	
    return m_Description;
  }
       
  //ElementName related methods
  unsigned int Linux_SambaScriptingOptionsInstance::isElementNameSet() const{
    return isSet.ElementName;
  }
  void  Linux_SambaScriptingOptionsInstance::
   setElementName(const char* val, int makeCopy){
    if (isSet.ElementName) {
      delete []m_ElementName;
    }
    if (makeCopy&&val) {
      char* tmpval = new char[strlen(val)+1];
      strcpy(tmpval,val);
      m_ElementName = tmpval;
    } else {
      m_ElementName = val;
    }
    isSet.ElementName=1;
  }       
  const char* Linux_SambaScriptingOptionsInstance::
   getElementName() const{
    
    if(!isSet.ElementName)
   	  throw CmpiErrorFormater::getErrorException(
   	   CmpiErrorFormater::NOT_SET,
   	   "ElementName not set");
   	   	
    return m_ElementName;
  }
       
  //addGroupScript related methods
  unsigned int Linux_SambaScriptingOptionsInstance::isaddGroupScriptSet() const{
    return isSet.addGroupScript;
  }
  void  Linux_SambaScriptingOptionsInstance::
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
  const char* Linux_SambaScriptingOptionsInstance::
   getaddGroupScript() const{
    
    if(!isSet.addGroupScript)
   	  throw CmpiErrorFormater::getErrorException(
   	   CmpiErrorFormater::NOT_SET,
   	   "addGroupScript not set");
   	   	
    return m_addGroupScript;
  }
       
  //addPrinterCommand related methods
  unsigned int Linux_SambaScriptingOptionsInstance::isaddPrinterCommandSet() const{
    return isSet.addPrinterCommand;
  }
  void  Linux_SambaScriptingOptionsInstance::
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
  const char* Linux_SambaScriptingOptionsInstance::
   getaddPrinterCommand() const{
    
    if(!isSet.addPrinterCommand)
   	  throw CmpiErrorFormater::getErrorException(
   	   CmpiErrorFormater::NOT_SET,
   	   "addPrinterCommand not set");
   	   	
    return m_addPrinterCommand;
  }
       
  //addShareCommand related methods
  unsigned int Linux_SambaScriptingOptionsInstance::isaddShareCommandSet() const{
    return isSet.addShareCommand;
  }
  void  Linux_SambaScriptingOptionsInstance::
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
  const char* Linux_SambaScriptingOptionsInstance::
   getaddShareCommand() const{
    
    if(!isSet.addShareCommand)
   	  throw CmpiErrorFormater::getErrorException(
   	   CmpiErrorFormater::NOT_SET,
   	   "addShareCommand not set");
   	   	
    return m_addShareCommand;
  }
       
  //addUserScript related methods
  unsigned int Linux_SambaScriptingOptionsInstance::isaddUserScriptSet() const{
    return isSet.addUserScript;
  }
  void  Linux_SambaScriptingOptionsInstance::
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
  const char* Linux_SambaScriptingOptionsInstance::
   getaddUserScript() const{
    
    if(!isSet.addUserScript)
   	  throw CmpiErrorFormater::getErrorException(
   	   CmpiErrorFormater::NOT_SET,
   	   "addUserScript not set");
   	   	
    return m_addUserScript;
  }
       
  //addUsertoGroupScript related methods
  unsigned int Linux_SambaScriptingOptionsInstance::isaddUsertoGroupScriptSet() const{
    return isSet.addUsertoGroupScript;
  }
  void  Linux_SambaScriptingOptionsInstance::
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
  const char* Linux_SambaScriptingOptionsInstance::
   getaddUsertoGroupScript() const{
    
    if(!isSet.addUsertoGroupScript)
   	  throw CmpiErrorFormater::getErrorException(
   	   CmpiErrorFormater::NOT_SET,
   	   "addUsertoGroupScript not set");
   	   	
    return m_addUsertoGroupScript;
  }
       
  //deleteGrouprScript related methods
  unsigned int Linux_SambaScriptingOptionsInstance::isdeleteGrouprScriptSet() const{
    return isSet.deleteGrouprScript;
  }
  void  Linux_SambaScriptingOptionsInstance::
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
  const char* Linux_SambaScriptingOptionsInstance::
   getdeleteGrouprScript() const{
    
    if(!isSet.deleteGrouprScript)
   	  throw CmpiErrorFormater::getErrorException(
   	   CmpiErrorFormater::NOT_SET,
   	   "deleteGrouprScript not set");
   	   	
    return m_deleteGrouprScript;
  }
       
  //deleteUserScript related methods
  unsigned int Linux_SambaScriptingOptionsInstance::isdeleteUserScriptSet() const{
    return isSet.deleteUserScript;
  }
  void  Linux_SambaScriptingOptionsInstance::
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
  const char* Linux_SambaScriptingOptionsInstance::
   getdeleteUserScript() const{
    
    if(!isSet.deleteUserScript)
   	  throw CmpiErrorFormater::getErrorException(
   	   CmpiErrorFormater::NOT_SET,
   	   "deleteUserScript not set");
   	   	
    return m_deleteUserScript;
  }
       
  //deleteUserfromGroupScript related methods
  unsigned int Linux_SambaScriptingOptionsInstance::isdeleteUserfromGroupScriptSet() const{
    return isSet.deleteUserfromGroupScript;
  }
  void  Linux_SambaScriptingOptionsInstance::
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
  const char* Linux_SambaScriptingOptionsInstance::
   getdeleteUserfromGroupScript() const{
    
    if(!isSet.deleteUserfromGroupScript)
   	  throw CmpiErrorFormater::getErrorException(
   	   CmpiErrorFormater::NOT_SET,
   	   "deleteUserfromGroupScript not set");
   	   	
    return m_deleteUserfromGroupScript;
  }
       
  //setPrimaryGroupScript related methods
  unsigned int Linux_SambaScriptingOptionsInstance::issetPrimaryGroupScriptSet() const{
    return isSet.setPrimaryGroupScript;
  }
  void  Linux_SambaScriptingOptionsInstance::
   setsetPrimaryGroupScript(const char* val, int makeCopy){
    if (isSet.setPrimaryGroupScript) {
      delete []m_setPrimaryGroupScript;
    }
    if (makeCopy&&val) {
      char* tmpval = new char[strlen(val)+1];
      strcpy(tmpval,val);
      m_setPrimaryGroupScript = tmpval;
    } else {
      m_setPrimaryGroupScript = val;
    }
    isSet.setPrimaryGroupScript=1;
  }       
  const char* Linux_SambaScriptingOptionsInstance::
   getsetPrimaryGroupScript() const{
    
    if(!isSet.setPrimaryGroupScript)
   	  throw CmpiErrorFormater::getErrorException(
   	   CmpiErrorFormater::NOT_SET,
   	   "setPrimaryGroupScript not set");
   	   	
    return m_setPrimaryGroupScript;
  }


  
  //set isSet attributes to FALSE
  void Linux_SambaScriptingOptionsInstance::init(){
   	isSet.instanceName=0;
   	   	
    isSet.Caption=0;   	
    isSet.Description=0;   	
    isSet.ElementName=0;   	
    isSet.addGroupScript=0;   	
    isSet.addPrinterCommand=0;   	
    isSet.addShareCommand=0;   	
    isSet.addUserScript=0;   	
    isSet.addUsertoGroupScript=0;   	
    isSet.deleteGrouprScript=0;   	
    isSet.deleteUserScript=0;   	
    isSet.deleteUserfromGroupScript=0;   	
    isSet.setPrimaryGroupScript=0;  	
  };
  
  
  //copies another instance properties in this
  void Linux_SambaScriptingOptionsInstance::init
   (const Linux_SambaScriptingOptionsInstance& original){   	
   	init();
   	   	
    if(original.isInstanceNameSet()){
      setInstanceName(original.getInstanceName());
    }   	
    if(original.isCaptionSet()){
      const char* CaptionOriginal=original.getCaption();
      setCaption(CaptionOriginal, 1);
    }   	
    if(original.isDescriptionSet()){
      const char* DescriptionOriginal=original.getDescription();
      setDescription(DescriptionOriginal, 1);
    }   	
    if(original.isElementNameSet()){
      const char* ElementNameOriginal=original.getElementName();
      setElementName(ElementNameOriginal, 1);
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
    if(original.issetPrimaryGroupScriptSet()){
      const char* setPrimaryGroupScriptOriginal=original.getsetPrimaryGroupScript();
      setsetPrimaryGroupScript(setPrimaryGroupScriptOriginal, 1);
    }    
   }
  
  
  //reset the instance data
  void Linux_SambaScriptingOptionsInstance::reset(){
   	

  	if (isSet.Caption)
  	  delete(m_Caption);

  	if (isSet.Description)
  	  delete(m_Description);

  	if (isSet.ElementName)
  	  delete(m_ElementName);

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

  	if (isSet.setPrimaryGroupScript)
  	  delete(m_setPrimaryGroupScript);
  	  
  };
  
  
  //*********************************************************
  //Linux_SambaScriptingOptionsInstanceEnumerationElement	
  //*********************************************************
  
  Linux_SambaScriptingOptionsInstanceEnumerationElement::
   Linux_SambaScriptingOptionsInstanceEnumerationElement(){
   	
  	m_elementP=0;
  	m_nextP=0;
  	  
  };
  
  
  Linux_SambaScriptingOptionsInstanceEnumerationElement::
   ~Linux_SambaScriptingOptionsInstanceEnumerationElement(){
   	
  	if (m_elementP!=0)
  	  delete(m_elementP);
  	if (m_nextP!=0)
  	  delete(m_nextP);
  	  
  };

  
  //*********************************************************
  //Linux_SambaScriptingOptionsInstanceNameEnumeration
  //*********************************************************

  Linux_SambaScriptingOptionsInstanceEnumeration::
   Linux_SambaScriptingOptionsInstanceEnumeration(){
   	
  	 firstElementP=0;
     currentElementP=0;
     endElementP=0;
  };
  
  Linux_SambaScriptingOptionsInstanceEnumeration::
   Linux_SambaScriptingOptionsInstanceEnumeration(
   const Linux_SambaScriptingOptionsInstanceEnumeration& original){
   	
     firstElementP=0;
     currentElementP=0;
     endElementP=0;
  	 
     int size=original.getSize();
     for(int i=0;i<size;i++)
       addElement(original.getElement(i));           
  };
  
  	  
  Linux_SambaScriptingOptionsInstanceEnumeration::
   ~Linux_SambaScriptingOptionsInstanceEnumeration(){
   	
  	if (firstElementP!=0)
  	  delete(firstElementP);
  	  	
  };
  
  	  
  void Linux_SambaScriptingOptionsInstanceEnumeration::reset(){
  	
  	currentElementP=firstElementP;
  };
  
  	  
  bool Linux_SambaScriptingOptionsInstanceEnumeration::hasNext() const{
  	
  	return (currentElementP!=0);
  
  };
  
  int Linux_SambaScriptingOptionsInstanceEnumeration::getSize() const{
  	
    int size=0;
    Linux_SambaScriptingOptionsInstanceEnumerationElement* followingP=firstElementP;
  	
  	while(followingP!=0){
        followingP=followingP->m_nextP;
        size++;
    }
  	
    return size;
    
  };
  
  const Linux_SambaScriptingOptionsInstance&  
   Linux_SambaScriptingOptionsInstanceEnumeration::getElement(int pos) const{
   
    Linux_SambaScriptingOptionsInstanceEnumerationElement* followingP=firstElementP;
   
    int i=0;
    while((followingP!=0)&&(i<pos)){
        followingP=followingP->m_nextP;
        i++;
    }
    
    return *(followingP->m_elementP);
  };
  
  	  
  const Linux_SambaScriptingOptionsInstance&
   Linux_SambaScriptingOptionsInstanceEnumeration::getNext() {
   	
  	 Linux_SambaScriptingOptionsInstanceEnumerationElement* currentP=
  	  currentElementP;
  	 currentElementP=currentElementP->m_nextP;
  	 
  	 return *(currentP->m_elementP);
  };
  	  
  void Linux_SambaScriptingOptionsInstanceEnumeration::addElement
   (const Linux_SambaScriptingOptionsInstance& elementP){
   	
  	if(firstElementP==0){
  	  firstElementP=new Linux_SambaScriptingOptionsInstanceEnumerationElement();
  	  firstElementP->m_elementP=new Linux_SambaScriptingOptionsInstance(elementP);
  	  endElementP=firstElementP;
  	  currentElementP=firstElementP;
  	}else{
  	  endElementP->m_nextP=new Linux_SambaScriptingOptionsInstanceEnumerationElement();
  	  endElementP=endElementP->m_nextP;
  	  endElementP->m_elementP=new Linux_SambaScriptingOptionsInstance(elementP);
  	}
  };  
}
 
