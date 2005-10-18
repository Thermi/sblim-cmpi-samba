/**
 *  Linux_SambaGlobalSecurityOptionsInstance.cpp
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


#include "Linux_SambaGlobalSecurityOptionsInstance.h"
#include "CmpiData.h"
#include "CmpiString.h"
#include "CmpiArray.h"
#include <string>

namespace genProvider {

  //*********************************************************
  //Linux_SambaGlobalSecurityOptionsInstance
  //*********************************************************

  //empty constructor
  Linux_SambaGlobalSecurityOptionsInstance::
   Linux_SambaGlobalSecurityOptionsInstance(){   	
   	init();  	   	
  };
  
  
  //copy constructor	
  Linux_SambaGlobalSecurityOptionsInstance::
   Linux_SambaGlobalSecurityOptionsInstance
   (const Linux_SambaGlobalSecurityOptionsInstance& original){   	
   	init(original);  	   	
  };
  
  
  //constructor using CmpiInstance
  Linux_SambaGlobalSecurityOptionsInstance::
   Linux_SambaGlobalSecurityOptionsInstance (const CmpiInstance& inst, const char* instanceNamespace){
    CmpiData cmpiData;
    init(); 
    
    CmpiObjectPath cop=inst.getObjectPath();
    cop.setNameSpace(instanceNamespace);
    setInstanceName(Linux_SambaGlobalSecurityOptionsInstanceName(cop));
    
    cmpiData = inst.getProperty("AuthMethods");
    if(!cmpiData.isNullValue()){
      CmpiString AuthMethods = cmpiData;
      setAuthMethods(AuthMethods.charPtr());
    }
    
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
    
    cmpiData = inst.getProperty("EncryptPasswords");
    if(!cmpiData.isNullValue()){
      CMPIBoolean EncryptPasswords = cmpiData;
      setEncryptPasswords(EncryptPasswords);
    }
    
    cmpiData = inst.getProperty("MinPasswordLength");
    if(!cmpiData.isNullValue()){
      CMPIUint8 MinPasswordLength = cmpiData;
      setMinPasswordLength(MinPasswordLength);
    }
    
    cmpiData = inst.getProperty("NullPasswords");
    if(!cmpiData.isNullValue()){
      CMPIBoolean NullPasswords = cmpiData;
      setNullPasswords(NullPasswords);
    }
    
    cmpiData = inst.getProperty("PassdbBackend");
    if(!cmpiData.isNullValue()){
      CmpiString PassdbBackend = cmpiData;
      setPassdbBackend(PassdbBackend.charPtr());
    }
    
    cmpiData = inst.getProperty("SMBPasswdFile");
    if(!cmpiData.isNullValue()){
      CmpiString SMBPasswdFile = cmpiData;
      setSMBPasswdFile(SMBPasswdFile.charPtr());
    }
    
    cmpiData = inst.getProperty("Security");
    if(!cmpiData.isNullValue()){
      CMPIUint8 Security = cmpiData;
      setSecurity(Security);
    }
    
  }
  
  
  //Destructor
  Linux_SambaGlobalSecurityOptionsInstance::
   ~Linux_SambaGlobalSecurityOptionsInstance(){
   	reset();  	  
  };
  
  
  //copy operator
  Linux_SambaGlobalSecurityOptionsInstance&
   Linux_SambaGlobalSecurityOptionsInstance::operator=
   (const Linux_SambaGlobalSecurityOptionsInstance& original){   	
   	init(original);
   	return *this;
  };
  
  
  //converts to CmpiInstance
  CmpiInstance Linux_SambaGlobalSecurityOptionsInstance::
   getCmpiInstance(const char** properties) const{
   	
   	CmpiObjectPath objectPath=getInstanceName().getObjectPath();      
    CmpiInstance cmpiInstance(objectPath);    
    getInstanceName().fillKeys(cmpiInstance);
    
    if (properties) {
	  cmpiInstance.setPropertyFilter(properties,0);
    }

  	if(isSet.AuthMethods){
  	  cmpiInstance.setProperty("AuthMethods",CmpiData(m_AuthMethods));
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

  	if(isSet.EncryptPasswords){
  	  cmpiInstance.setProperty("EncryptPasswords",CmpiBooleanData(m_EncryptPasswords));
  	}

  	if(isSet.MinPasswordLength){
  	  cmpiInstance.setProperty("MinPasswordLength",CmpiData(m_MinPasswordLength));
  	}

  	if(isSet.NullPasswords){
  	  cmpiInstance.setProperty("NullPasswords",CmpiBooleanData(m_NullPasswords));
  	}

  	if(isSet.PassdbBackend){
  	  cmpiInstance.setProperty("PassdbBackend",CmpiData(m_PassdbBackend));
  	}

  	if(isSet.SMBPasswdFile){
  	  cmpiInstance.setProperty("SMBPasswdFile",CmpiData(m_SMBPasswdFile));
  	}

  	if(isSet.Security){
  	  cmpiInstance.setProperty("Security",CmpiData(m_Security));
  	}
  	
  	return cmpiInstance;
  	
  }
  
  
  //InstanceName related methods
  unsigned int Linux_SambaGlobalSecurityOptionsInstance::
   isInstanceNameSet() const{
  	return isSet.instanceName;
  }
  
  const Linux_SambaGlobalSecurityOptionsInstanceName&
    Linux_SambaGlobalSecurityOptionsInstance::getInstanceName() const{

    if(!isSet.instanceName)
   	  throw CmpiErrorFormater::getErrorException(
   	   CmpiErrorFormater::NOT_SET,
   	   "InstanceName not set in Linux_SambaGlobalSecurityOptions instance");
  		
   	return m_instanceName;
  }

  void Linux_SambaGlobalSecurityOptionsInstance::setInstanceName(
   const Linux_SambaGlobalSecurityOptionsInstanceName& val){
    m_instanceName = val;
    isSet.instanceName=1;
  }
       
  //AuthMethods related methods
  unsigned int Linux_SambaGlobalSecurityOptionsInstance::isAuthMethodsSet() const{
    return isSet.AuthMethods;
  }
  void  Linux_SambaGlobalSecurityOptionsInstance::
   setAuthMethods(const char* val, int makeCopy){
    if (isSet.AuthMethods) {
      delete []m_AuthMethods;
    }
    if (makeCopy&&val) {
      char* tmpval = new char[strlen(val)+1];
      strcpy(tmpval,val);
      m_AuthMethods = tmpval;
    } else {
      m_AuthMethods = val;
    }
    isSet.AuthMethods=1;
  }       
  const char* Linux_SambaGlobalSecurityOptionsInstance::
   getAuthMethods() const{
    
    if(!isSet.AuthMethods)
   	  throw CmpiErrorFormater::getErrorException(
   	   CmpiErrorFormater::NOT_SET,
   	   "AuthMethods not set");
   	   	
    return m_AuthMethods;
  }
       
  //Caption related methods
  unsigned int Linux_SambaGlobalSecurityOptionsInstance::isCaptionSet() const{
    return isSet.Caption;
  }
  void  Linux_SambaGlobalSecurityOptionsInstance::
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
  const char* Linux_SambaGlobalSecurityOptionsInstance::
   getCaption() const{
    
    if(!isSet.Caption)
   	  throw CmpiErrorFormater::getErrorException(
   	   CmpiErrorFormater::NOT_SET,
   	   "Caption not set");
   	   	
    return m_Caption;
  }
       
  //Description related methods
  unsigned int Linux_SambaGlobalSecurityOptionsInstance::isDescriptionSet() const{
    return isSet.Description;
  }
  void  Linux_SambaGlobalSecurityOptionsInstance::
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
  const char* Linux_SambaGlobalSecurityOptionsInstance::
   getDescription() const{
    
    if(!isSet.Description)
   	  throw CmpiErrorFormater::getErrorException(
   	   CmpiErrorFormater::NOT_SET,
   	   "Description not set");
   	   	
    return m_Description;
  }
       
  //ElementName related methods
  unsigned int Linux_SambaGlobalSecurityOptionsInstance::isElementNameSet() const{
    return isSet.ElementName;
  }
  void  Linux_SambaGlobalSecurityOptionsInstance::
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
  const char* Linux_SambaGlobalSecurityOptionsInstance::
   getElementName() const{
    
    if(!isSet.ElementName)
   	  throw CmpiErrorFormater::getErrorException(
   	   CmpiErrorFormater::NOT_SET,
   	   "ElementName not set");
   	   	
    return m_ElementName;
  }
       
  //EncryptPasswords related methods
  unsigned int Linux_SambaGlobalSecurityOptionsInstance::isEncryptPasswordsSet() const{
    return isSet.EncryptPasswords;
  }
  void Linux_SambaGlobalSecurityOptionsInstance::
   setEncryptPasswords(const CMPIBoolean val){
    m_EncryptPasswords = val;
    isSet.EncryptPasswords=1;
  }       
  const CMPIBoolean Linux_SambaGlobalSecurityOptionsInstance::
   getEncryptPasswords() const{
    
    if(!isSet.EncryptPasswords)
   	  throw CmpiErrorFormater::getErrorException(
   	   CmpiErrorFormater::NOT_SET,
   	   "EncryptPasswords not set");
   	   	
    return m_EncryptPasswords;
  }
       
  //MinPasswordLength related methods
  unsigned int Linux_SambaGlobalSecurityOptionsInstance::isMinPasswordLengthSet() const{
    return isSet.MinPasswordLength;
  }
  void Linux_SambaGlobalSecurityOptionsInstance::
   setMinPasswordLength(const CMPIUint8 val){
    m_MinPasswordLength = val;
    isSet.MinPasswordLength=1;
  }       
  const CMPIUint8 Linux_SambaGlobalSecurityOptionsInstance::
   getMinPasswordLength() const{
    
    if(!isSet.MinPasswordLength)
   	  throw CmpiErrorFormater::getErrorException(
   	   CmpiErrorFormater::NOT_SET,
   	   "MinPasswordLength not set");
   	   	
    return m_MinPasswordLength;
  }
       
  //NullPasswords related methods
  unsigned int Linux_SambaGlobalSecurityOptionsInstance::isNullPasswordsSet() const{
    return isSet.NullPasswords;
  }
  void Linux_SambaGlobalSecurityOptionsInstance::
   setNullPasswords(const CMPIBoolean val){
    m_NullPasswords = val;
    isSet.NullPasswords=1;
  }       
  const CMPIBoolean Linux_SambaGlobalSecurityOptionsInstance::
   getNullPasswords() const{
    
    if(!isSet.NullPasswords)
   	  throw CmpiErrorFormater::getErrorException(
   	   CmpiErrorFormater::NOT_SET,
   	   "NullPasswords not set");
   	   	
    return m_NullPasswords;
  }
       
  //PassdbBackend related methods
  unsigned int Linux_SambaGlobalSecurityOptionsInstance::isPassdbBackendSet() const{
    return isSet.PassdbBackend;
  }
  void  Linux_SambaGlobalSecurityOptionsInstance::
   setPassdbBackend(const char* val, int makeCopy){
    if (isSet.PassdbBackend) {
      delete []m_PassdbBackend;
    }
    if (makeCopy&&val) {
      char* tmpval = new char[strlen(val)+1];
      strcpy(tmpval,val);
      m_PassdbBackend = tmpval;
    } else {
      m_PassdbBackend = val;
    }
    isSet.PassdbBackend=1;
  }       
  const char* Linux_SambaGlobalSecurityOptionsInstance::
   getPassdbBackend() const{
    
    if(!isSet.PassdbBackend)
   	  throw CmpiErrorFormater::getErrorException(
   	   CmpiErrorFormater::NOT_SET,
   	   "PassdbBackend not set");
   	   	
    return m_PassdbBackend;
  }
       
  //SMBPasswdFile related methods
  unsigned int Linux_SambaGlobalSecurityOptionsInstance::isSMBPasswdFileSet() const{
    return isSet.SMBPasswdFile;
  }
  void  Linux_SambaGlobalSecurityOptionsInstance::
   setSMBPasswdFile(const char* val, int makeCopy){
    if (isSet.SMBPasswdFile) {
      delete []m_SMBPasswdFile;
    }
    if (makeCopy&&val) {
      char* tmpval = new char[strlen(val)+1];
      strcpy(tmpval,val);
      m_SMBPasswdFile = tmpval;
    } else {
      m_SMBPasswdFile = val;
    }
    isSet.SMBPasswdFile=1;
  }       
  const char* Linux_SambaGlobalSecurityOptionsInstance::
   getSMBPasswdFile() const{
    
    if(!isSet.SMBPasswdFile)
   	  throw CmpiErrorFormater::getErrorException(
   	   CmpiErrorFormater::NOT_SET,
   	   "SMBPasswdFile not set");
   	   	
    return m_SMBPasswdFile;
  }
       
  //Security related methods
  unsigned int Linux_SambaGlobalSecurityOptionsInstance::isSecuritySet() const{
    return isSet.Security;
  }
  void Linux_SambaGlobalSecurityOptionsInstance::
   setSecurity(const CMPIUint8 val){
    m_Security = val;
    isSet.Security=1;
  }       
  const CMPIUint8 Linux_SambaGlobalSecurityOptionsInstance::
   getSecurity() const{
    
    if(!isSet.Security)
   	  throw CmpiErrorFormater::getErrorException(
   	   CmpiErrorFormater::NOT_SET,
   	   "Security not set");
   	   	
    return m_Security;
  }


  
  //set isSet attributes to FALSE
  void Linux_SambaGlobalSecurityOptionsInstance::init(){
   	isSet.instanceName=0;
   	   	
    isSet.AuthMethods=0;   	
    isSet.Caption=0;   	
    isSet.Description=0;   	
    isSet.ElementName=0;   	
    isSet.EncryptPasswords=0;   	
    isSet.MinPasswordLength=0;   	
    isSet.NullPasswords=0;   	
    isSet.PassdbBackend=0;   	
    isSet.SMBPasswdFile=0;   	
    isSet.Security=0;  	
  };
  
  
  //copies another instance properties in this
  void Linux_SambaGlobalSecurityOptionsInstance::init
   (const Linux_SambaGlobalSecurityOptionsInstance& original){   	
   	init();
   	   	
    if(original.isInstanceNameSet()){
      setInstanceName(original.getInstanceName());
    }   	
    if(original.isAuthMethodsSet()){
      const char* AuthMethodsOriginal=original.getAuthMethods();
      setAuthMethods(AuthMethodsOriginal, 1);
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
    if(original.isEncryptPasswordsSet()){
      const CMPIBoolean EncryptPasswordsOriginal=original.getEncryptPasswords();
      setEncryptPasswords(EncryptPasswordsOriginal);
    }   	
    if(original.isMinPasswordLengthSet()){
      const CMPIUint8 MinPasswordLengthOriginal=original.getMinPasswordLength();
      setMinPasswordLength(MinPasswordLengthOriginal);
    }   	
    if(original.isNullPasswordsSet()){
      const CMPIBoolean NullPasswordsOriginal=original.getNullPasswords();
      setNullPasswords(NullPasswordsOriginal);
    }   	
    if(original.isPassdbBackendSet()){
      const char* PassdbBackendOriginal=original.getPassdbBackend();
      setPassdbBackend(PassdbBackendOriginal, 1);
    }   	
    if(original.isSMBPasswdFileSet()){
      const char* SMBPasswdFileOriginal=original.getSMBPasswdFile();
      setSMBPasswdFile(SMBPasswdFileOriginal, 1);
    }   	
    if(original.isSecuritySet()){
      const CMPIUint8 SecurityOriginal=original.getSecurity();
      setSecurity(SecurityOriginal);
    }    
   }
  
  
  //reset the instance data
  void Linux_SambaGlobalSecurityOptionsInstance::reset(){
   	

  	if (isSet.AuthMethods)
  	  delete(m_AuthMethods);

  	if (isSet.Caption)
  	  delete(m_Caption);

  	if (isSet.Description)
  	  delete(m_Description);

  	if (isSet.ElementName)
  	  delete(m_ElementName);

  	if (isSet.PassdbBackend)
  	  delete(m_PassdbBackend);

  	if (isSet.SMBPasswdFile)
  	  delete(m_SMBPasswdFile);
  	  
  };
  
  
  //*********************************************************
  //Linux_SambaGlobalSecurityOptionsInstanceEnumerationElement	
  //*********************************************************
  
  Linux_SambaGlobalSecurityOptionsInstanceEnumerationElement::
   Linux_SambaGlobalSecurityOptionsInstanceEnumerationElement(){
   	
  	m_elementP=0;
  	m_nextP=0;
  	  
  };
  
  
  Linux_SambaGlobalSecurityOptionsInstanceEnumerationElement::
   ~Linux_SambaGlobalSecurityOptionsInstanceEnumerationElement(){
   	
  	if (m_elementP!=0)
  	  delete(m_elementP);
  	if (m_nextP!=0)
  	  delete(m_nextP);
  	  
  };

  
  //*********************************************************
  //Linux_SambaGlobalSecurityOptionsInstanceNameEnumeration
  //*********************************************************

  Linux_SambaGlobalSecurityOptionsInstanceEnumeration::
   Linux_SambaGlobalSecurityOptionsInstanceEnumeration(){
   	
  	 firstElementP=0;
     currentElementP=0;
     endElementP=0;
  };
  
  Linux_SambaGlobalSecurityOptionsInstanceEnumeration::
   Linux_SambaGlobalSecurityOptionsInstanceEnumeration(
   const Linux_SambaGlobalSecurityOptionsInstanceEnumeration& original){
   	
     firstElementP=0;
     currentElementP=0;
     endElementP=0;
  	 
     int size=original.getSize();
     for(int i=0;i<size;i++)
       addElement(original.getElement(i));           
  };
  
  	  
  Linux_SambaGlobalSecurityOptionsInstanceEnumeration::
   ~Linux_SambaGlobalSecurityOptionsInstanceEnumeration(){
   	
  	if (firstElementP!=0)
  	  delete(firstElementP);
  	  	
  };
  
  	  
  void Linux_SambaGlobalSecurityOptionsInstanceEnumeration::reset(){
  	
  	currentElementP=firstElementP;
  };
  
  	  
  bool Linux_SambaGlobalSecurityOptionsInstanceEnumeration::hasNext() const{
  	
  	return (currentElementP!=0);
  
  };
  
  int Linux_SambaGlobalSecurityOptionsInstanceEnumeration::getSize() const{
  	
    int size=0;
    Linux_SambaGlobalSecurityOptionsInstanceEnumerationElement* followingP=firstElementP;
  	
  	while(followingP!=0){
        followingP=followingP->m_nextP;
        size++;
    }
  	
    return size;
    
  };
  
  const Linux_SambaGlobalSecurityOptionsInstance&  
   Linux_SambaGlobalSecurityOptionsInstanceEnumeration::getElement(int pos) const{
   
    Linux_SambaGlobalSecurityOptionsInstanceEnumerationElement* followingP=firstElementP;
   
    int i=0;
    while((followingP!=0)&&(i<pos)){
        followingP=followingP->m_nextP;
        i++;
    }
    
    return *(followingP->m_elementP);
  };
  
  	  
  const Linux_SambaGlobalSecurityOptionsInstance&
   Linux_SambaGlobalSecurityOptionsInstanceEnumeration::getNext() {
   	
  	 Linux_SambaGlobalSecurityOptionsInstanceEnumerationElement* currentP=
  	  currentElementP;
  	 currentElementP=currentElementP->m_nextP;
  	 
  	 return *(currentP->m_elementP);
  };
  	  
  void Linux_SambaGlobalSecurityOptionsInstanceEnumeration::addElement
   (const Linux_SambaGlobalSecurityOptionsInstance& elementP){
   	
  	if(firstElementP==0){
  	  firstElementP=new Linux_SambaGlobalSecurityOptionsInstanceEnumerationElement();
  	  firstElementP->m_elementP=new Linux_SambaGlobalSecurityOptionsInstance(elementP);
  	  endElementP=firstElementP;
  	  currentElementP=firstElementP;
  	}else{
  	  endElementP->m_nextP=new Linux_SambaGlobalSecurityOptionsInstanceEnumerationElement();
  	  endElementP=endElementP->m_nextP;
  	  endElementP->m_elementP=new Linux_SambaGlobalSecurityOptionsInstance(elementP);
  	}
  };  
}
 
