// =======================================================================
// Linux_SambaGlobalSecurityOptionsManualInstance.cpp
//     created on Fri, 23 Jun 2006 using ECUTE 2.2.1
//
// Copyright (c) 2006, International Business Machines
//
// THIS FILE IS PROVIDED UNDER THE TERMS OF THE COMMON PUBLIC LICENSE
// ("AGREEMENT"). ANY USE, REPRODUCTION OR DISTRIBUTION OF THIS FILE
// CONSTITUTES RECIPIENTS ACCEPTANCE OF THE AGREEMENT.
//
// You can obtain a current copy of the Common Public License from
// http://oss.software.ibm.com/developerworks/opensource/license-cpl.html
//
// Author:        generated
//
// Contributors:
//                Wolfgang Taphorn   <taphorn@de.ibm.com>
//                Mukunda Chowdaiah  <cmukunda@in.ibm.com>
//                Ashoka S Rao       <ashoka.rao@in.ibm.com>
//                Rodrigo Ceron      <rceron@br.ibm.com>
//
// =======================================================================
#include "Linux_SambaGlobalSecurityOptionsManualInstance.h"
#include "CmpiData.h"
#include "CmpiString.h"
#include "CmpiArray.h"
#include <string>

namespace genProvider {

  //****************************************************************************
  //Linux_SambaGlobalSecurityOptionsManualInstance
  //----------------------------------------------------------------------------
  //empty constructor
  Linux_SambaGlobalSecurityOptionsManualInstance::Linux_SambaGlobalSecurityOptionsManualInstance() {   	
   	init();  	   	
  }
  
  //----------------------------------------------------------------------------
  //copy constructor	
  //----------------------------------------------------------------------------
  Linux_SambaGlobalSecurityOptionsManualInstance::Linux_SambaGlobalSecurityOptionsManualInstance(
    const Linux_SambaGlobalSecurityOptionsManualInstance& anInstance) {   	
   	init(anInstance);  	   	
  }
  
  //----------------------------------------------------------------------------
  //constructor using CmpiInstance
  //----------------------------------------------------------------------------
  Linux_SambaGlobalSecurityOptionsManualInstance::Linux_SambaGlobalSecurityOptionsManualInstance(
    const CmpiInstance& aCmpiInstance,
    const char* anInstanceNamespaceP) {

    CmpiData cmpiData;

    init(); 
    
    CmpiObjectPath cop = aCmpiInstance.getObjectPath();
    cop.setNameSpace(anInstanceNamespaceP);
    setInstanceName(Linux_SambaGlobalSecurityOptionsInstanceName(cop));

    cmpiData = aCmpiInstance.getProperty("AuthMethods");
    if ( ! cmpiData.isNullValue()){
      CmpiString AuthMethods = cmpiData;
      setAuthMethods(AuthMethods.charPtr());
    }

    cmpiData = aCmpiInstance.getProperty("EncryptPasswords");
    if ( ! cmpiData.isNullValue()){
      CMPIBoolean EncryptPasswords = cmpiData;
      setEncryptPasswords(EncryptPasswords);
    }

    cmpiData = aCmpiInstance.getProperty("MinPasswordLength");
    if ( ! cmpiData.isNullValue()){
      CMPIUint8 MinPasswordLength = cmpiData;
      setMinPasswordLength(MinPasswordLength);
    }

    cmpiData = aCmpiInstance.getProperty("NullPasswords");
    if ( ! cmpiData.isNullValue()){
      CMPIBoolean NullPasswords = cmpiData;
      setNullPasswords(NullPasswords);
    }

    cmpiData = aCmpiInstance.getProperty("PassdbBackend");
    if ( ! cmpiData.isNullValue()){
      CmpiString PassdbBackend = cmpiData;
      setPassdbBackend(PassdbBackend.charPtr());
    }

    cmpiData = aCmpiInstance.getProperty("SMBPasswdFile");
    if ( ! cmpiData.isNullValue()){
      CmpiString SMBPasswdFile = cmpiData;
      setSMBPasswdFile(SMBPasswdFile.charPtr());
    }

    cmpiData = aCmpiInstance.getProperty("Security");
    if ( ! cmpiData.isNullValue()){
      CMPIUint8 Security = cmpiData;
      setSecurity(Security);
    }

    
  }
  
  //----------------------------------------------------------------------------
  //Destructor
  //----------------------------------------------------------------------------
  Linux_SambaGlobalSecurityOptionsManualInstance::
   ~Linux_SambaGlobalSecurityOptionsManualInstance(){
   	reset();  	  
  }
  
  
  //----------------------------------------------------------------------------
  //copy operator
  //----------------------------------------------------------------------------
  Linux_SambaGlobalSecurityOptionsManualInstance&
  Linux_SambaGlobalSecurityOptionsManualInstance::operator=(
    const Linux_SambaGlobalSecurityOptionsManualInstance& anInstance) {   	
   	
   	init(anInstance);
   	return *this;
  
  }
  
  
  //----------------------------------------------------------------------------
  //converts to CmpiInstance
  //----------------------------------------------------------------------------
  CmpiInstance
  Linux_SambaGlobalSecurityOptionsManualInstance::getCmpiInstance(
    const char** aPropertiesPP) const {
   	
   	CmpiObjectPath objectPath=getInstanceName().getObjectPath();      
    CmpiInstance cmpiInstance(objectPath);    
    getInstanceName().fillKeys(cmpiInstance);
    
    if (aPropertiesPP) {
	    cmpiInstance.setPropertyFilter(aPropertiesPP,0);
    }

  	if (isSet.AuthMethods) {
  	  
  	  cmpiInstance.setProperty(
  	    "AuthMethods",
  	    CmpiData(m_AuthMethods));
  	}

  	if (isSet.EncryptPasswords) {
  	  
  	  cmpiInstance.setProperty(
  	    "EncryptPasswords",
  	    CmpiBooleanData(m_EncryptPasswords));
  	}

  	if (isSet.MinPasswordLength) {
  	  
  	  cmpiInstance.setProperty(
  	    "MinPasswordLength",
  	    CmpiData(m_MinPasswordLength));
  	}

  	if (isSet.NullPasswords) {
  	  
  	  cmpiInstance.setProperty(
  	    "NullPasswords",
  	    CmpiBooleanData(m_NullPasswords));
  	}

  	if (isSet.PassdbBackend) {
  	  
  	  cmpiInstance.setProperty(
  	    "PassdbBackend",
  	    CmpiData(m_PassdbBackend));
  	}

  	if (isSet.SMBPasswdFile) {
  	  
  	  cmpiInstance.setProperty(
  	    "SMBPasswdFile",
  	    CmpiData(m_SMBPasswdFile));
  	}

  	if (isSet.Security) {
  	  
  	  cmpiInstance.setProperty(
  	    "Security",
  	    CmpiData(m_Security));
  	}

  	
  	return cmpiInstance;
  	
  }
  
  //----------------------------------------------------------------------------
  // InstanceName related methods
  //----------------------------------------------------------------------------
  unsigned int 
  Linux_SambaGlobalSecurityOptionsManualInstance::isInstanceNameSet() const {
  	return isSet.instanceName;
  }
  
  //----------------------------------------------------------------------------
  const Linux_SambaGlobalSecurityOptionsInstanceName&
  Linux_SambaGlobalSecurityOptionsManualInstance::getInstanceName() const {

    if( ! isSet.instanceName) {
   	  throw CmpiErrorFormater::getErrorException(
        CmpiErrorFormater::NOT_SET,
        "InstanceName (CIM Key Attributes)",
        "Linux_SambaGlobalSecurityOptions");
   	}
  		
   	return m_instanceName;
  
  }

  //----------------------------------------------------------------------------
  void
  Linux_SambaGlobalSecurityOptionsManualInstance::setInstanceName(
    const Linux_SambaGlobalSecurityOptionsInstanceName& val) {

    m_instanceName = val;
    isSet.instanceName = 1;

  }
       
  //----------------------------------------------------------------------------
  // AuthMethods related methods
  //----------------------------------------------------------------------------
  unsigned int
  Linux_SambaGlobalSecurityOptionsManualInstance::isAuthMethodsSet() const {
    return isSet.AuthMethods;
  }

  //----------------------------------------------------------------------------
  void
  Linux_SambaGlobalSecurityOptionsManualInstance::setAuthMethods(
    const char* aValueP,
    int aCopyFlag) {
    
    if (isSet.AuthMethods) {
      delete [] m_AuthMethods;
    }
    
    if (aCopyFlag && aValueP) {
      char* valueP = new char[strlen(aValueP) + 1];
      strcpy(valueP,aValueP);
      m_AuthMethods = valueP;
    } else {
      m_AuthMethods = aValueP;
    }
    
    isSet.AuthMethods = 1;

  }       

  //----------------------------------------------------------------------------
  const char*
  Linux_SambaGlobalSecurityOptionsManualInstance::getAuthMethods() const {
    
    if ( ! isSet.AuthMethods) {
   	  throw CmpiErrorFormater::getErrorException(
   	    CmpiErrorFormater::NOT_SET,
        "AuthMethods",
        "Linux_SambaGlobalSecurityOptions");
   	}


    return m_AuthMethods;

  }
       
  //----------------------------------------------------------------------------
  // EncryptPasswords related methods
  //----------------------------------------------------------------------------
  unsigned int
  Linux_SambaGlobalSecurityOptionsManualInstance::isEncryptPasswordsSet() const {
    return isSet.EncryptPasswords;
  }

  //----------------------------------------------------------------------------
  void Linux_SambaGlobalSecurityOptionsManualInstance::setEncryptPasswords(
    const CMPIBoolean aValue) {
  
    m_EncryptPasswords = aValue;
    isSet.EncryptPasswords = 1;
  
  }       

  //----------------------------------------------------------------------------
  const CMPIBoolean
  Linux_SambaGlobalSecurityOptionsManualInstance::getEncryptPasswords() const {
    
    if ( ! isSet.EncryptPasswords) {
   	  throw CmpiErrorFormater::getErrorException(
   	    CmpiErrorFormater::NOT_SET,
        "EncryptPasswords",
        "Linux_SambaGlobalSecurityOptions");
   	}


    return m_EncryptPasswords;

  }
       
  //----------------------------------------------------------------------------
  // MinPasswordLength related methods
  //----------------------------------------------------------------------------
  unsigned int
  Linux_SambaGlobalSecurityOptionsManualInstance::isMinPasswordLengthSet() const {
    return isSet.MinPasswordLength;
  }

  //----------------------------------------------------------------------------
  void Linux_SambaGlobalSecurityOptionsManualInstance::setMinPasswordLength(
    const CMPIUint8 aValue) {
  
    m_MinPasswordLength = aValue;
    isSet.MinPasswordLength = 1;
  
  }       

  //----------------------------------------------------------------------------
  const CMPIUint8
  Linux_SambaGlobalSecurityOptionsManualInstance::getMinPasswordLength() const {
    
    if ( ! isSet.MinPasswordLength) {
   	  throw CmpiErrorFormater::getErrorException(
   	    CmpiErrorFormater::NOT_SET,
        "MinPasswordLength",
        "Linux_SambaGlobalSecurityOptions");
   	}


    return m_MinPasswordLength;

  }
       
  //----------------------------------------------------------------------------
  // NullPasswords related methods
  //----------------------------------------------------------------------------
  unsigned int
  Linux_SambaGlobalSecurityOptionsManualInstance::isNullPasswordsSet() const {
    return isSet.NullPasswords;
  }

  //----------------------------------------------------------------------------
  void Linux_SambaGlobalSecurityOptionsManualInstance::setNullPasswords(
    const CMPIBoolean aValue) {
  
    m_NullPasswords = aValue;
    isSet.NullPasswords = 1;
  
  }       

  //----------------------------------------------------------------------------
  const CMPIBoolean
  Linux_SambaGlobalSecurityOptionsManualInstance::getNullPasswords() const {
    
    if ( ! isSet.NullPasswords) {
   	  throw CmpiErrorFormater::getErrorException(
   	    CmpiErrorFormater::NOT_SET,
        "NullPasswords",
        "Linux_SambaGlobalSecurityOptions");
   	}


    return m_NullPasswords;

  }
       
  //----------------------------------------------------------------------------
  // PassdbBackend related methods
  //----------------------------------------------------------------------------
  unsigned int
  Linux_SambaGlobalSecurityOptionsManualInstance::isPassdbBackendSet() const {
    return isSet.PassdbBackend;
  }

  //----------------------------------------------------------------------------
  void
  Linux_SambaGlobalSecurityOptionsManualInstance::setPassdbBackend(
    const char* aValueP,
    int aCopyFlag) {
    
    if (isSet.PassdbBackend) {
      delete [] m_PassdbBackend;
    }
    
    if (aCopyFlag && aValueP) {
      char* valueP = new char[strlen(aValueP) + 1];
      strcpy(valueP,aValueP);
      m_PassdbBackend = valueP;
    } else {
      m_PassdbBackend = aValueP;
    }
    
    isSet.PassdbBackend = 1;

  }       

  //----------------------------------------------------------------------------
  const char*
  Linux_SambaGlobalSecurityOptionsManualInstance::getPassdbBackend() const {
    
    if ( ! isSet.PassdbBackend) {
   	  throw CmpiErrorFormater::getErrorException(
   	    CmpiErrorFormater::NOT_SET,
        "PassdbBackend",
        "Linux_SambaGlobalSecurityOptions");
   	}


    return m_PassdbBackend;

  }
       
  //----------------------------------------------------------------------------
  // SMBPasswdFile related methods
  //----------------------------------------------------------------------------
  unsigned int
  Linux_SambaGlobalSecurityOptionsManualInstance::isSMBPasswdFileSet() const {
    return isSet.SMBPasswdFile;
  }

  //----------------------------------------------------------------------------
  void
  Linux_SambaGlobalSecurityOptionsManualInstance::setSMBPasswdFile(
    const char* aValueP,
    int aCopyFlag) {
    
    if (isSet.SMBPasswdFile) {
      delete [] m_SMBPasswdFile;
    }
    
    if (aCopyFlag && aValueP) {
      char* valueP = new char[strlen(aValueP) + 1];
      strcpy(valueP,aValueP);
      m_SMBPasswdFile = valueP;
    } else {
      m_SMBPasswdFile = aValueP;
    }
    
    isSet.SMBPasswdFile = 1;

  }       

  //----------------------------------------------------------------------------
  const char*
  Linux_SambaGlobalSecurityOptionsManualInstance::getSMBPasswdFile() const {
    
    if ( ! isSet.SMBPasswdFile) {
   	  throw CmpiErrorFormater::getErrorException(
   	    CmpiErrorFormater::NOT_SET,
        "SMBPasswdFile",
        "Linux_SambaGlobalSecurityOptions");
   	}


    return m_SMBPasswdFile;

  }
       
  //----------------------------------------------------------------------------
  // Security related methods
  //----------------------------------------------------------------------------
  unsigned int
  Linux_SambaGlobalSecurityOptionsManualInstance::isSecuritySet() const {
    return isSet.Security;
  }

  //----------------------------------------------------------------------------
  void Linux_SambaGlobalSecurityOptionsManualInstance::setSecurity(
    const CMPIUint8 aValue) {
  
    m_Security = aValue;
    isSet.Security = 1;
  
  }       

  //----------------------------------------------------------------------------
  const CMPIUint8
  Linux_SambaGlobalSecurityOptionsManualInstance::getSecurity() const {
    
    if ( ! isSet.Security) {
   	  throw CmpiErrorFormater::getErrorException(
   	    CmpiErrorFormater::NOT_SET,
        "Security",
        "Linux_SambaGlobalSecurityOptions");
   	}


    return m_Security;

  }

  
  //----------------------------------------------------------------------------
  //set isSet attributes to FALSE
  //----------------------------------------------------------------------------
  void
  Linux_SambaGlobalSecurityOptionsManualInstance::init() {
   	isSet.instanceName = 0;
    isSet.AuthMethods = 0;
    isSet.EncryptPasswords = 0;
    isSet.MinPasswordLength = 0;
    isSet.NullPasswords = 0;
    isSet.PassdbBackend = 0;
    isSet.SMBPasswdFile = 0;
    isSet.Security = 0;
  	
  }
  
  //----------------------------------------------------------------------------
  //copies another instance properties in this
  //----------------------------------------------------------------------------
  void 
  Linux_SambaGlobalSecurityOptionsManualInstance::init(
    const Linux_SambaGlobalSecurityOptionsManualInstance& anOriginal) {   	

   	init();
   	   	
    if(anOriginal.isInstanceNameSet()) {
      setInstanceName(anOriginal.getInstanceName());
    }
       	
    if (anOriginal.isAuthMethodsSet()) {
      const char* AuthMethodsOriginal = anOriginal.getAuthMethods();
      setAuthMethods(AuthMethodsOriginal,1);
    }
   	
    if (anOriginal.isEncryptPasswordsSet()) {
      const CMPIBoolean EncryptPasswordsOriginal = anOriginal.getEncryptPasswords();
      setEncryptPasswords(EncryptPasswordsOriginal);
    }
   	
    if (anOriginal.isMinPasswordLengthSet()) {
      const CMPIUint8 MinPasswordLengthOriginal = anOriginal.getMinPasswordLength();
      setMinPasswordLength(MinPasswordLengthOriginal);
    }
   	
    if (anOriginal.isNullPasswordsSet()) {
      const CMPIBoolean NullPasswordsOriginal = anOriginal.getNullPasswords();
      setNullPasswords(NullPasswordsOriginal);
    }
   	
    if (anOriginal.isPassdbBackendSet()) {
      const char* PassdbBackendOriginal = anOriginal.getPassdbBackend();
      setPassdbBackend(PassdbBackendOriginal,1);
    }
   	
    if (anOriginal.isSMBPasswdFileSet()) {
      const char* SMBPasswdFileOriginal = anOriginal.getSMBPasswdFile();
      setSMBPasswdFile(SMBPasswdFileOriginal,1);
    }
   	
    if (anOriginal.isSecuritySet()) {
      const CMPIUint8 SecurityOriginal = anOriginal.getSecurity();
      setSecurity(SecurityOriginal);
    }
    
  }
  
  //----------------------------------------------------------------------------
  //reset the instance data
  //----------------------------------------------------------------------------
  void
  Linux_SambaGlobalSecurityOptionsManualInstance::reset() {
   	
  	if (isSet.AuthMethods) {
  	  delete(m_AuthMethods);
  	}

  	if (isSet.PassdbBackend) {
  	  delete(m_PassdbBackend);
  	}

  	if (isSet.SMBPasswdFile) {
  	  delete(m_SMBPasswdFile);
  	}

  }
  
  //----------------------------------------------------------------------------
  //Linux_SambaGlobalSecurityOptionsManualInstanceEnumerationElement	
  //----------------------------------------------------------------------------
  Linux_SambaGlobalSecurityOptionsManualInstanceEnumerationElement::Linux_SambaGlobalSecurityOptionsManualInstanceEnumerationElement() {
   	
  	m_elementP = 0;
  	m_nextP = 0;
  	  
  }
  
  //----------------------------------------------------------------------------
  Linux_SambaGlobalSecurityOptionsManualInstanceEnumerationElement::~Linux_SambaGlobalSecurityOptionsManualInstanceEnumerationElement() {
   	
  	if (m_elementP) {
  	  delete(m_elementP);
  	}
  	
  	if (m_nextP) {
  	  delete(m_nextP);
  	}
  	  
  }

  //----------------------------------------------------------------------------
  //Linux_SambaGlobalSecurityOptionsManualInstanceNameEnumeration
  //----------------------------------------------------------------------------
  Linux_SambaGlobalSecurityOptionsManualInstanceEnumeration::Linux_SambaGlobalSecurityOptionsManualInstanceEnumeration() {
   	
    m_firstElementP = 0;
    m_currentElementP = 0;
    m_endElementP = 0;
  
  }
  
  //----------------------------------------------------------------------------
  Linux_SambaGlobalSecurityOptionsManualInstanceEnumeration::Linux_SambaGlobalSecurityOptionsManualInstanceEnumeration(
    const Linux_SambaGlobalSecurityOptionsManualInstanceEnumeration& anInstanceEnumeration) {
   	
    m_firstElementP = 0;
    m_currentElementP = 0;
    m_endElementP = 0;
  	 
    int size = anInstanceEnumeration.getSize();
    for (int x=0; x < size;++x) {
      addElement(anInstanceEnumeration.getElement(x));
    }           

  }
  
  //----------------------------------------------------------------------------
  Linux_SambaGlobalSecurityOptionsManualInstanceEnumeration::~Linux_SambaGlobalSecurityOptionsManualInstanceEnumeration() {
   	
  	if (m_firstElementP) {
  	  delete(m_firstElementP);
  	}
  	  	
  }
  
  //----------------------------------------------------------------------------
  void
  Linux_SambaGlobalSecurityOptionsManualInstanceEnumeration::reset() {
  	
  	m_currentElementP = m_firstElementP;
  	
  }
  	  
  //----------------------------------------------------------------------------
  bool
  Linux_SambaGlobalSecurityOptionsManualInstanceEnumeration::hasNext() const {
  	
  	return (m_currentElementP != 0);
  
  }
  
  //----------------------------------------------------------------------------
  int
  Linux_SambaGlobalSecurityOptionsManualInstanceEnumeration::getSize() const {
  	
    int size = 0;
    Linux_SambaGlobalSecurityOptionsManualInstanceEnumerationElement* followingP = m_firstElementP;
  	
  	while (followingP) {
      followingP = followingP->m_nextP;
      ++size;
    }
  	
    return size;
    
  }
  
  //----------------------------------------------------------------------------
  const Linux_SambaGlobalSecurityOptionsManualInstance&  
  Linux_SambaGlobalSecurityOptionsManualInstanceEnumeration::getElement(int anIndex) const {
   
    Linux_SambaGlobalSecurityOptionsManualInstanceEnumerationElement* followingP = m_firstElementP;
   
    int x = 0;
    while (followingP && (x < anIndex)) {
      followingP = followingP->m_nextP;
      ++x;
    }
    
    return *(followingP->m_elementP);

  }
  
  //----------------------------------------------------------------------------
  const Linux_SambaGlobalSecurityOptionsManualInstance&
  Linux_SambaGlobalSecurityOptionsManualInstanceEnumeration::getNext() {
   	
    Linux_SambaGlobalSecurityOptionsManualInstanceEnumerationElement* currentElementP =
  	  m_currentElementP;

    m_currentElementP = m_currentElementP->m_nextP;
  	 
    return *(currentElementP->m_elementP);

  }
  	  
  //----------------------------------------------------------------------------
  void
  Linux_SambaGlobalSecurityOptionsManualInstanceEnumeration::addElement(
    const Linux_SambaGlobalSecurityOptionsManualInstance& anInstance) {
   	
  	if (m_firstElementP == 0) {
  	  m_firstElementP = new Linux_SambaGlobalSecurityOptionsManualInstanceEnumerationElement();
  	  m_firstElementP->m_elementP = new Linux_SambaGlobalSecurityOptionsManualInstance(anInstance);
  	  m_endElementP = m_firstElementP;
  	  m_currentElementP = m_firstElementP;
  	} else {
  	  m_endElementP->m_nextP = new Linux_SambaGlobalSecurityOptionsManualInstanceEnumerationElement();
  	  m_endElementP = m_endElementP->m_nextP;
  	  m_endElementP->m_elementP = new Linux_SambaGlobalSecurityOptionsManualInstance(anInstance);
  	}

  }
  
}
