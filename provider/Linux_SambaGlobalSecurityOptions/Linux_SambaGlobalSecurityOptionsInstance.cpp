// =======================================================================
// Linux_SambaGlobalSecurityOptionsInstance.cpp
//     created on Fri, 23 Jun 2006 using ECUTE 2.2.1
//
// Copyright (c) 2006, 2009, International Business Machines
//
// THIS FILE IS PROVIDED UNDER THE TERMS OF THE ECLIPSE PUBLIC LICENSE
// ("AGREEMENT"). ANY USE, REPRODUCTION OR DISTRIBUTION OF THIS FILE
// CONSTITUTES RECIPIENTS ACCEPTANCE OF THE AGREEMENT.
//
// You can obtain a current copy of the Eclipse Public License from
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
#include "Linux_SambaGlobalSecurityOptionsInstance.h"
#include "CmpiData.h"
#include "CmpiString.h"
#include "CmpiArray.h"
#include <string>

namespace genProvider {

  //****************************************************************************
  //Linux_SambaGlobalSecurityOptionsInstance
  //----------------------------------------------------------------------------
  //empty constructor
  Linux_SambaGlobalSecurityOptionsInstance::Linux_SambaGlobalSecurityOptionsInstance() {   	
   	init();  	   	
  }
  
  //----------------------------------------------------------------------------
  //copy constructor	
  //----------------------------------------------------------------------------
  Linux_SambaGlobalSecurityOptionsInstance::Linux_SambaGlobalSecurityOptionsInstance(
    const Linux_SambaGlobalSecurityOptionsInstance& anInstance) {   	
   	init(anInstance);  	   	
  }
  
  //----------------------------------------------------------------------------
  //constructor using CmpiInstance
  //----------------------------------------------------------------------------
  Linux_SambaGlobalSecurityOptionsInstance::Linux_SambaGlobalSecurityOptionsInstance(
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

    cmpiData = aCmpiInstance.getProperty("Caption");
    if ( ! cmpiData.isNullValue()){
      CmpiString Caption = cmpiData;
      setCaption(Caption.charPtr());
    }

    cmpiData = aCmpiInstance.getProperty("Description");
    if ( ! cmpiData.isNullValue()){
      CmpiString Description = cmpiData;
      setDescription(Description.charPtr());
    }

    cmpiData = aCmpiInstance.getProperty("ElementName");
    if ( ! cmpiData.isNullValue()){
      CmpiString ElementName = cmpiData;
      setElementName(ElementName.charPtr());
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
  Linux_SambaGlobalSecurityOptionsInstance::
   ~Linux_SambaGlobalSecurityOptionsInstance(){
   	reset();  	  
  }
  
  
  //----------------------------------------------------------------------------
  //copy operator
  //----------------------------------------------------------------------------
  Linux_SambaGlobalSecurityOptionsInstance&
  Linux_SambaGlobalSecurityOptionsInstance::operator=(
    const Linux_SambaGlobalSecurityOptionsInstance& anInstance) {   	
   	
   	init(anInstance);
   	return *this;
  
  }
  
  
  //----------------------------------------------------------------------------
  //converts to CmpiInstance
  //----------------------------------------------------------------------------
  CmpiInstance
  Linux_SambaGlobalSecurityOptionsInstance::getCmpiInstance(
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

  	if (isSet.Caption) {
  	  
  	  cmpiInstance.setProperty(
  	    "Caption",
  	    CmpiData(m_Caption));
  	}

  	if (isSet.Description) {
  	  
  	  cmpiInstance.setProperty(
  	    "Description",
  	    CmpiData(m_Description));
  	}

  	if (isSet.ElementName) {
  	  
  	  cmpiInstance.setProperty(
  	    "ElementName",
  	    CmpiData(m_ElementName));
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
  Linux_SambaGlobalSecurityOptionsInstance::isInstanceNameSet() const {
  	return isSet.instanceName;
  }
  
  //----------------------------------------------------------------------------
  const Linux_SambaGlobalSecurityOptionsInstanceName&
  Linux_SambaGlobalSecurityOptionsInstance::getInstanceName() const {

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
  Linux_SambaGlobalSecurityOptionsInstance::setInstanceName(
    const Linux_SambaGlobalSecurityOptionsInstanceName& val) {

    m_instanceName = val;
    isSet.instanceName = 1;

  }
       
  //----------------------------------------------------------------------------
  // AuthMethods related methods
  //----------------------------------------------------------------------------
  unsigned int
  Linux_SambaGlobalSecurityOptionsInstance::isAuthMethodsSet() const {
    return isSet.AuthMethods;
  }

  //----------------------------------------------------------------------------
  void
  Linux_SambaGlobalSecurityOptionsInstance::setAuthMethods(
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
  Linux_SambaGlobalSecurityOptionsInstance::getAuthMethods() const {
    
    if ( ! isSet.AuthMethods) {
   	  throw CmpiErrorFormater::getErrorException(
   	    CmpiErrorFormater::NOT_SET,
        "AuthMethods",
        "Linux_SambaGlobalSecurityOptions");
   	}


    return m_AuthMethods;

  }
       
  //----------------------------------------------------------------------------
  // Caption related methods
  //----------------------------------------------------------------------------
  unsigned int
  Linux_SambaGlobalSecurityOptionsInstance::isCaptionSet() const {
    return isSet.Caption;
  }

  //----------------------------------------------------------------------------
  void
  Linux_SambaGlobalSecurityOptionsInstance::setCaption(
    const char* aValueP,
    int aCopyFlag) {
    
    if (isSet.Caption) {
      delete [] m_Caption;
    }
    
    if (aCopyFlag && aValueP) {
      char* valueP = new char[strlen(aValueP) + 1];
      strcpy(valueP,aValueP);
      m_Caption = valueP;
    } else {
      m_Caption = aValueP;
    }
    
    isSet.Caption = 1;

  }       

  //----------------------------------------------------------------------------
  const char*
  Linux_SambaGlobalSecurityOptionsInstance::getCaption() const {
    
    if ( ! isSet.Caption) {
   	  throw CmpiErrorFormater::getErrorException(
   	    CmpiErrorFormater::NOT_SET,
        "Caption",
        "Linux_SambaGlobalSecurityOptions");
   	}


    return m_Caption;

  }
       
  //----------------------------------------------------------------------------
  // Description related methods
  //----------------------------------------------------------------------------
  unsigned int
  Linux_SambaGlobalSecurityOptionsInstance::isDescriptionSet() const {
    return isSet.Description;
  }

  //----------------------------------------------------------------------------
  void
  Linux_SambaGlobalSecurityOptionsInstance::setDescription(
    const char* aValueP,
    int aCopyFlag) {
    
    if (isSet.Description) {
      delete [] m_Description;
    }
    
    if (aCopyFlag && aValueP) {
      char* valueP = new char[strlen(aValueP) + 1];
      strcpy(valueP,aValueP);
      m_Description = valueP;
    } else {
      m_Description = aValueP;
    }
    
    isSet.Description = 1;

  }       

  //----------------------------------------------------------------------------
  const char*
  Linux_SambaGlobalSecurityOptionsInstance::getDescription() const {
    
    if ( ! isSet.Description) {
   	  throw CmpiErrorFormater::getErrorException(
   	    CmpiErrorFormater::NOT_SET,
        "Description",
        "Linux_SambaGlobalSecurityOptions");
   	}


    return m_Description;

  }
       
  //----------------------------------------------------------------------------
  // ElementName related methods
  //----------------------------------------------------------------------------
  unsigned int
  Linux_SambaGlobalSecurityOptionsInstance::isElementNameSet() const {
    return isSet.ElementName;
  }

  //----------------------------------------------------------------------------
  void
  Linux_SambaGlobalSecurityOptionsInstance::setElementName(
    const char* aValueP,
    int aCopyFlag) {
    
    if (isSet.ElementName) {
      delete [] m_ElementName;
    }
    
    if (aCopyFlag && aValueP) {
      char* valueP = new char[strlen(aValueP) + 1];
      strcpy(valueP,aValueP);
      m_ElementName = valueP;
    } else {
      m_ElementName = aValueP;
    }
    
    isSet.ElementName = 1;

  }       

  //----------------------------------------------------------------------------
  const char*
  Linux_SambaGlobalSecurityOptionsInstance::getElementName() const {
    
    if ( ! isSet.ElementName) {
   	  throw CmpiErrorFormater::getErrorException(
   	    CmpiErrorFormater::NOT_SET,
        "ElementName",
        "Linux_SambaGlobalSecurityOptions");
   	}


    return m_ElementName;

  }
       
  //----------------------------------------------------------------------------
  // EncryptPasswords related methods
  //----------------------------------------------------------------------------
  unsigned int
  Linux_SambaGlobalSecurityOptionsInstance::isEncryptPasswordsSet() const {
    return isSet.EncryptPasswords;
  }

  //----------------------------------------------------------------------------
  void Linux_SambaGlobalSecurityOptionsInstance::setEncryptPasswords(
    const CMPIBoolean aValue) {
  
    m_EncryptPasswords = aValue;
    isSet.EncryptPasswords = 1;
  
  }       

  //----------------------------------------------------------------------------
  const CMPIBoolean
  Linux_SambaGlobalSecurityOptionsInstance::getEncryptPasswords() const {
    
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
  Linux_SambaGlobalSecurityOptionsInstance::isMinPasswordLengthSet() const {
    return isSet.MinPasswordLength;
  }

  //----------------------------------------------------------------------------
  void Linux_SambaGlobalSecurityOptionsInstance::setMinPasswordLength(
    const CMPIUint8 aValue) {
  
    m_MinPasswordLength = aValue;
    isSet.MinPasswordLength = 1;
  
  }       

  //----------------------------------------------------------------------------
  const CMPIUint8
  Linux_SambaGlobalSecurityOptionsInstance::getMinPasswordLength() const {
    
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
  Linux_SambaGlobalSecurityOptionsInstance::isNullPasswordsSet() const {
    return isSet.NullPasswords;
  }

  //----------------------------------------------------------------------------
  void Linux_SambaGlobalSecurityOptionsInstance::setNullPasswords(
    const CMPIBoolean aValue) {
  
    m_NullPasswords = aValue;
    isSet.NullPasswords = 1;
  
  }       

  //----------------------------------------------------------------------------
  const CMPIBoolean
  Linux_SambaGlobalSecurityOptionsInstance::getNullPasswords() const {
    
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
  Linux_SambaGlobalSecurityOptionsInstance::isPassdbBackendSet() const {
    return isSet.PassdbBackend;
  }

  //----------------------------------------------------------------------------
  void
  Linux_SambaGlobalSecurityOptionsInstance::setPassdbBackend(
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
  Linux_SambaGlobalSecurityOptionsInstance::getPassdbBackend() const {
    
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
  Linux_SambaGlobalSecurityOptionsInstance::isSMBPasswdFileSet() const {
    return isSet.SMBPasswdFile;
  }

  //----------------------------------------------------------------------------
  void
  Linux_SambaGlobalSecurityOptionsInstance::setSMBPasswdFile(
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
  Linux_SambaGlobalSecurityOptionsInstance::getSMBPasswdFile() const {
    
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
  Linux_SambaGlobalSecurityOptionsInstance::isSecuritySet() const {
    return isSet.Security;
  }

  //----------------------------------------------------------------------------
  void Linux_SambaGlobalSecurityOptionsInstance::setSecurity(
    const CMPIUint8 aValue) {
  
    m_Security = aValue;
    isSet.Security = 1;
  
  }       

  //----------------------------------------------------------------------------
  const CMPIUint8
  Linux_SambaGlobalSecurityOptionsInstance::getSecurity() const {
    
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
  Linux_SambaGlobalSecurityOptionsInstance::init() {
   	isSet.instanceName = 0;
    isSet.AuthMethods = 0;
    isSet.Caption = 0;
    isSet.Description = 0;
    isSet.ElementName = 0;
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
  Linux_SambaGlobalSecurityOptionsInstance::init(
    const Linux_SambaGlobalSecurityOptionsInstance& anOriginal) {   	

   	init();
   	   	
    if(anOriginal.isInstanceNameSet()) {
      setInstanceName(anOriginal.getInstanceName());
    }
       	
    if (anOriginal.isAuthMethodsSet()) {
      const char* AuthMethodsOriginal = anOriginal.getAuthMethods();
      setAuthMethods(AuthMethodsOriginal,1);
    }
   	
    if (anOriginal.isCaptionSet()) {
      const char* CaptionOriginal = anOriginal.getCaption();
      setCaption(CaptionOriginal,1);
    }
   	
    if (anOriginal.isDescriptionSet()) {
      const char* DescriptionOriginal = anOriginal.getDescription();
      setDescription(DescriptionOriginal,1);
    }
   	
    if (anOriginal.isElementNameSet()) {
      const char* ElementNameOriginal = anOriginal.getElementName();
      setElementName(ElementNameOriginal,1);
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
  Linux_SambaGlobalSecurityOptionsInstance::reset() {
   	
  	if (isSet.AuthMethods) {
  	  delete(m_AuthMethods);
  	}

  	if (isSet.Caption) {
  	  delete(m_Caption);
  	}

  	if (isSet.Description) {
  	  delete(m_Description);
  	}

  	if (isSet.ElementName) {
  	  delete(m_ElementName);
  	}

  	if (isSet.PassdbBackend) {
  	  delete(m_PassdbBackend);
  	}

  	if (isSet.SMBPasswdFile) {
  	  delete(m_SMBPasswdFile);
  	}

  }
  
  //----------------------------------------------------------------------------
  //Linux_SambaGlobalSecurityOptionsInstanceEnumerationElement	
  //----------------------------------------------------------------------------
  Linux_SambaGlobalSecurityOptionsInstanceEnumerationElement::Linux_SambaGlobalSecurityOptionsInstanceEnumerationElement() {
   	
  	m_elementP = 0;
  	m_nextP = 0;
  	  
  }
  
  //----------------------------------------------------------------------------
  Linux_SambaGlobalSecurityOptionsInstanceEnumerationElement::~Linux_SambaGlobalSecurityOptionsInstanceEnumerationElement() {
   	
  	if (m_elementP) {
  	  delete(m_elementP);
  	}
  	
  	if (m_nextP) {
  	  delete(m_nextP);
  	}
  	  
  }

  //----------------------------------------------------------------------------
  //Linux_SambaGlobalSecurityOptionsInstanceNameEnumeration
  //----------------------------------------------------------------------------
  Linux_SambaGlobalSecurityOptionsInstanceEnumeration::Linux_SambaGlobalSecurityOptionsInstanceEnumeration() {
   	
    m_firstElementP = 0;
    m_currentElementP = 0;
    m_endElementP = 0;
  
  }
  
  //----------------------------------------------------------------------------
  Linux_SambaGlobalSecurityOptionsInstanceEnumeration::Linux_SambaGlobalSecurityOptionsInstanceEnumeration(
    const Linux_SambaGlobalSecurityOptionsInstanceEnumeration& anInstanceEnumeration) {
   	
    m_firstElementP = 0;
    m_currentElementP = 0;
    m_endElementP = 0;
  	 
    int size = anInstanceEnumeration.getSize();
    for (int x=0; x < size;++x) {
      addElement(anInstanceEnumeration.getElement(x));
    }           

  }
  
  //----------------------------------------------------------------------------
  Linux_SambaGlobalSecurityOptionsInstanceEnumeration::~Linux_SambaGlobalSecurityOptionsInstanceEnumeration() {
   	
  	if (m_firstElementP) {
  	  delete(m_firstElementP);
  	}
  	  	
  }
  
  //----------------------------------------------------------------------------
  void
  Linux_SambaGlobalSecurityOptionsInstanceEnumeration::reset() {
  	
  	m_currentElementP = m_firstElementP;
  	
  }
  	  
  //----------------------------------------------------------------------------
  bool
  Linux_SambaGlobalSecurityOptionsInstanceEnumeration::hasNext() const {
  	
  	return (m_currentElementP != 0);
  
  }
  
  //----------------------------------------------------------------------------
  int
  Linux_SambaGlobalSecurityOptionsInstanceEnumeration::getSize() const {
  	
    int size = 0;
    Linux_SambaGlobalSecurityOptionsInstanceEnumerationElement* followingP = m_firstElementP;
  	
  	while (followingP) {
      followingP = followingP->m_nextP;
      ++size;
    }
  	
    return size;
    
  }
  
  //----------------------------------------------------------------------------
  const Linux_SambaGlobalSecurityOptionsInstance&  
  Linux_SambaGlobalSecurityOptionsInstanceEnumeration::getElement(int anIndex) const {
   
    Linux_SambaGlobalSecurityOptionsInstanceEnumerationElement* followingP = m_firstElementP;
   
    int x = 0;
    while (followingP && (x < anIndex)) {
      followingP = followingP->m_nextP;
      ++x;
    }
    
    return *(followingP->m_elementP);

  }
  
  //----------------------------------------------------------------------------
  const Linux_SambaGlobalSecurityOptionsInstance&
  Linux_SambaGlobalSecurityOptionsInstanceEnumeration::getNext() {
   	
    Linux_SambaGlobalSecurityOptionsInstanceEnumerationElement* currentElementP =
  	  m_currentElementP;

    m_currentElementP = m_currentElementP->m_nextP;
  	 
    return *(currentElementP->m_elementP);

  }
  	  
  //----------------------------------------------------------------------------
  void
  Linux_SambaGlobalSecurityOptionsInstanceEnumeration::addElement(
    const Linux_SambaGlobalSecurityOptionsInstance& anInstance) {
   	
  	if (m_firstElementP == 0) {
  	  m_firstElementP = new Linux_SambaGlobalSecurityOptionsInstanceEnumerationElement();
  	  m_firstElementP->m_elementP = new Linux_SambaGlobalSecurityOptionsInstance(anInstance);
  	  m_endElementP = m_firstElementP;
  	  m_currentElementP = m_firstElementP;
  	} else {
  	  m_endElementP->m_nextP = new Linux_SambaGlobalSecurityOptionsInstanceEnumerationElement();
  	  m_endElementP = m_endElementP->m_nextP;
  	  m_endElementP->m_elementP = new Linux_SambaGlobalSecurityOptionsInstance(anInstance);
  	}

  }
  
}
