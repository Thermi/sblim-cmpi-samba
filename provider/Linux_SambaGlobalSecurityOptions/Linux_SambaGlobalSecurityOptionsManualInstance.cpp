/**
 *  Linux_SambaGlobalSecurityOptionsManualInstance.cpp
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


#include "Linux_SambaGlobalSecurityOptionsManualInstance.h"
#include "CmpiData.h"
#include "CmpiString.h"
#include "CmpiArray.h"
#include <string>

namespace genProvider {

  //*********************************************************
  //Linux_SambaGlobalSecurityOptionsManualInstance
  //*********************************************************

  //empty constructor
  Linux_SambaGlobalSecurityOptionsManualInstance::
   Linux_SambaGlobalSecurityOptionsManualInstance(){   	
   	init();  	   	
  };
  
  
  //copy constructor	
  Linux_SambaGlobalSecurityOptionsManualInstance::
   Linux_SambaGlobalSecurityOptionsManualInstance
   (const Linux_SambaGlobalSecurityOptionsManualInstance& original){   	
   	init(original);  	   	
  };
  
  
  //constructor using CmpiInstance
  Linux_SambaGlobalSecurityOptionsManualInstance::
   Linux_SambaGlobalSecurityOptionsManualInstance (const CmpiInstance& inst, const char* instanceNamespace){
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
  Linux_SambaGlobalSecurityOptionsManualInstance::
   ~Linux_SambaGlobalSecurityOptionsManualInstance(){
   	reset();  	  
  };
  
  
  //copy operator
  Linux_SambaGlobalSecurityOptionsManualInstance&
   Linux_SambaGlobalSecurityOptionsManualInstance::operator=
   (const Linux_SambaGlobalSecurityOptionsManualInstance& original){   	
   	init(original);
   	return *this;
  };
  
  
  //converts to CmpiInstance
  CmpiInstance Linux_SambaGlobalSecurityOptionsManualInstance::
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
  unsigned int Linux_SambaGlobalSecurityOptionsManualInstance::
   isInstanceNameSet() const{
  	return isSet.instanceName;
  }
  
  const Linux_SambaGlobalSecurityOptionsInstanceName&
    Linux_SambaGlobalSecurityOptionsManualInstance::getInstanceName() const{

    if(!isSet.instanceName)
   	  throw CmpiErrorFormater::getErrorException(
   	   CmpiErrorFormater::NOT_SET,
   	   "InstanceName not set in Linux_SambaGlobalSecurityOptions instance");
  		
   	return m_instanceName;
  }

  void Linux_SambaGlobalSecurityOptionsManualInstance::setInstanceName(
   const Linux_SambaGlobalSecurityOptionsInstanceName& val){
    m_instanceName = val;
    isSet.instanceName=1;
  }
       
  //AuthMethods related methods
  unsigned int Linux_SambaGlobalSecurityOptionsManualInstance::isAuthMethodsSet() const{
    return isSet.AuthMethods;
  }
  void  Linux_SambaGlobalSecurityOptionsManualInstance::
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
  const char* Linux_SambaGlobalSecurityOptionsManualInstance::
   getAuthMethods() const{
    
    if(!isSet.AuthMethods)
   	  throw CmpiErrorFormater::getErrorException(
   	   CmpiErrorFormater::NOT_SET,
   	   "AuthMethods not set");
   	   	
    return m_AuthMethods;
  }
       
  //EncryptPasswords related methods
  unsigned int Linux_SambaGlobalSecurityOptionsManualInstance::isEncryptPasswordsSet() const{
    return isSet.EncryptPasswords;
  }
  void Linux_SambaGlobalSecurityOptionsManualInstance::
   setEncryptPasswords(const CMPIBoolean val){
    m_EncryptPasswords = val;
    isSet.EncryptPasswords=1;
  }       
  const CMPIBoolean Linux_SambaGlobalSecurityOptionsManualInstance::
   getEncryptPasswords() const{
    
    if(!isSet.EncryptPasswords)
   	  throw CmpiErrorFormater::getErrorException(
   	   CmpiErrorFormater::NOT_SET,
   	   "EncryptPasswords not set");
   	   	
    return m_EncryptPasswords;
  }
       
  //MinPasswordLength related methods
  unsigned int Linux_SambaGlobalSecurityOptionsManualInstance::isMinPasswordLengthSet() const{
    return isSet.MinPasswordLength;
  }
  void Linux_SambaGlobalSecurityOptionsManualInstance::
   setMinPasswordLength(const CMPIUint8 val){
    m_MinPasswordLength = val;
    isSet.MinPasswordLength=1;
  }       
  const CMPIUint8 Linux_SambaGlobalSecurityOptionsManualInstance::
   getMinPasswordLength() const{
    
    if(!isSet.MinPasswordLength)
   	  throw CmpiErrorFormater::getErrorException(
   	   CmpiErrorFormater::NOT_SET,
   	   "MinPasswordLength not set");
   	   	
    return m_MinPasswordLength;
  }
       
  //NullPasswords related methods
  unsigned int Linux_SambaGlobalSecurityOptionsManualInstance::isNullPasswordsSet() const{
    return isSet.NullPasswords;
  }
  void Linux_SambaGlobalSecurityOptionsManualInstance::
   setNullPasswords(const CMPIBoolean val){
    m_NullPasswords = val;
    isSet.NullPasswords=1;
  }       
  const CMPIBoolean Linux_SambaGlobalSecurityOptionsManualInstance::
   getNullPasswords() const{
    
    if(!isSet.NullPasswords)
   	  throw CmpiErrorFormater::getErrorException(
   	   CmpiErrorFormater::NOT_SET,
   	   "NullPasswords not set");
   	   	
    return m_NullPasswords;
  }
       
  //PassdbBackend related methods
  unsigned int Linux_SambaGlobalSecurityOptionsManualInstance::isPassdbBackendSet() const{
    return isSet.PassdbBackend;
  }
  void  Linux_SambaGlobalSecurityOptionsManualInstance::
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
  const char* Linux_SambaGlobalSecurityOptionsManualInstance::
   getPassdbBackend() const{
    
    if(!isSet.PassdbBackend)
   	  throw CmpiErrorFormater::getErrorException(
   	   CmpiErrorFormater::NOT_SET,
   	   "PassdbBackend not set");
   	   	
    return m_PassdbBackend;
  }
       
  //SMBPasswdFile related methods
  unsigned int Linux_SambaGlobalSecurityOptionsManualInstance::isSMBPasswdFileSet() const{
    return isSet.SMBPasswdFile;
  }
  void  Linux_SambaGlobalSecurityOptionsManualInstance::
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
  const char* Linux_SambaGlobalSecurityOptionsManualInstance::
   getSMBPasswdFile() const{
    
    if(!isSet.SMBPasswdFile)
   	  throw CmpiErrorFormater::getErrorException(
   	   CmpiErrorFormater::NOT_SET,
   	   "SMBPasswdFile not set");
   	   	
    return m_SMBPasswdFile;
  }
       
  //Security related methods
  unsigned int Linux_SambaGlobalSecurityOptionsManualInstance::isSecuritySet() const{
    return isSet.Security;
  }
  void Linux_SambaGlobalSecurityOptionsManualInstance::
   setSecurity(const CMPIUint8 val){
    m_Security = val;
    isSet.Security=1;
  }       
  const CMPIUint8 Linux_SambaGlobalSecurityOptionsManualInstance::
   getSecurity() const{
    
    if(!isSet.Security)
   	  throw CmpiErrorFormater::getErrorException(
   	   CmpiErrorFormater::NOT_SET,
   	   "Security not set");
   	   	
    return m_Security;
  }


  
  //set isSet attributes to FALSE
  void Linux_SambaGlobalSecurityOptionsManualInstance::init(){
   	isSet.instanceName=0;
   	   	
    isSet.AuthMethods=0;   	
    isSet.EncryptPasswords=0;   	
    isSet.MinPasswordLength=0;   	
    isSet.NullPasswords=0;   	
    isSet.PassdbBackend=0;   	
    isSet.SMBPasswdFile=0;   	
    isSet.Security=0;  	
  };
  
  
  //copies another instance properties in this
  void Linux_SambaGlobalSecurityOptionsManualInstance::init
   (const Linux_SambaGlobalSecurityOptionsManualInstance& original){   	
   	init();
   	   	
    if(original.isInstanceNameSet()){
      setInstanceName(original.getInstanceName());
    }   	
    if(original.isAuthMethodsSet()){
      const char* AuthMethodsOriginal=original.getAuthMethods();
      setAuthMethods(AuthMethodsOriginal, 1);
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
  void Linux_SambaGlobalSecurityOptionsManualInstance::reset(){
   	

  	if (isSet.AuthMethods)
  	  delete(m_AuthMethods);

  	if (isSet.PassdbBackend)
  	  delete(m_PassdbBackend);

  	if (isSet.SMBPasswdFile)
  	  delete(m_SMBPasswdFile);
  	  
  };
  
  
  //*********************************************************
  //Linux_SambaGlobalSecurityOptionsManualInstanceEnumerationElement	
  //*********************************************************
  
  Linux_SambaGlobalSecurityOptionsManualInstanceEnumerationElement::
   Linux_SambaGlobalSecurityOptionsManualInstanceEnumerationElement(){
   	
  	m_elementP=0;
  	m_nextP=0;
  	  
  };
  
  
  Linux_SambaGlobalSecurityOptionsManualInstanceEnumerationElement::
   ~Linux_SambaGlobalSecurityOptionsManualInstanceEnumerationElement(){
   	
  	if (m_elementP!=0)
  	  delete(m_elementP);
  	if (m_nextP!=0)
  	  delete(m_nextP);
  	  
  };

  
  //*********************************************************
  //Linux_SambaGlobalSecurityOptionsManualInstanceNameEnumeration
  //*********************************************************

  Linux_SambaGlobalSecurityOptionsManualInstanceEnumeration::
   Linux_SambaGlobalSecurityOptionsManualInstanceEnumeration(){
   	
  	 firstElementP=0;
     currentElementP=0;
     endElementP=0;
  };
  
  Linux_SambaGlobalSecurityOptionsManualInstanceEnumeration::
   Linux_SambaGlobalSecurityOptionsManualInstanceEnumeration(
   const Linux_SambaGlobalSecurityOptionsManualInstanceEnumeration& original){
   	
     firstElementP=0;
     currentElementP=0;
     endElementP=0;
  	 
     int size=original.getSize();
     for(int i=0;i<size;i++)
       addElement(original.getElement(i));           
  };
  
  	  
  Linux_SambaGlobalSecurityOptionsManualInstanceEnumeration::
   ~Linux_SambaGlobalSecurityOptionsManualInstanceEnumeration(){
   	
  	if (firstElementP!=0)
  	  delete(firstElementP);
  	  	
  };
  
  	  
  void Linux_SambaGlobalSecurityOptionsManualInstanceEnumeration::reset(){
  	
  	currentElementP=firstElementP;
  };
  
  	  
  bool Linux_SambaGlobalSecurityOptionsManualInstanceEnumeration::hasNext() const{
  	
  	return (currentElementP!=0);
  
  };
  
  int Linux_SambaGlobalSecurityOptionsManualInstanceEnumeration::getSize() const{
  	
    int size=0;
    Linux_SambaGlobalSecurityOptionsManualInstanceEnumerationElement* followingP=firstElementP;
  	
  	while(followingP!=0){
        followingP=followingP->m_nextP;
        size++;
    }
  	
    return size;
    
  };
  
  const Linux_SambaGlobalSecurityOptionsManualInstance&  
   Linux_SambaGlobalSecurityOptionsManualInstanceEnumeration::getElement(int pos) const{
   
    Linux_SambaGlobalSecurityOptionsManualInstanceEnumerationElement* followingP=firstElementP;
   
    int i=0;
    while((followingP!=0)&&(i<pos)){
        followingP=followingP->m_nextP;
        i++;
    }
    
    return *(followingP->m_elementP);
  };
  
  	  
  const Linux_SambaGlobalSecurityOptionsManualInstance&
   Linux_SambaGlobalSecurityOptionsManualInstanceEnumeration::getNext() {
   	
  	 Linux_SambaGlobalSecurityOptionsManualInstanceEnumerationElement* currentP=
  	  currentElementP;
  	 currentElementP=currentElementP->m_nextP;
  	 
  	 return *(currentP->m_elementP);
  };
  	  
  void Linux_SambaGlobalSecurityOptionsManualInstanceEnumeration::addElement
   (const Linux_SambaGlobalSecurityOptionsManualInstance& elementP){
   	
  	if(firstElementP==0){
  	  firstElementP=new Linux_SambaGlobalSecurityOptionsManualInstanceEnumerationElement();
  	  firstElementP->m_elementP=new Linux_SambaGlobalSecurityOptionsManualInstance(elementP);
  	  endElementP=firstElementP;
  	  currentElementP=firstElementP;
  	}else{
  	  endElementP->m_nextP=new Linux_SambaGlobalSecurityOptionsManualInstanceEnumerationElement();
  	  endElementP=endElementP->m_nextP;
  	  endElementP->m_elementP=new Linux_SambaGlobalSecurityOptionsManualInstance(elementP);
  	}
  };  
}
 
