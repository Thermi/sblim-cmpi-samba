// =======================================================================
// Linux_SambaGlobalSecurityOptionsInstance.h
//     created on Fri, 23 Jun 2006 using ECUTE 2.2.1
//
// Copyright (c) 2006, 2009, International Business Machines
//
// THIS FILE IS PROVIDED UNDER THE TERMS OF THE ECLIPSE PUBLIC LICENSE
// ("AGREEMENT"). ANY USE, REPRODUCTION OR DISTRIBUTION OF THIS FILE
// CONSTITUTES RECIPIENTS ACCEPTANCE OF THE AGREEMENT.
//
// You can obtain a current copy of the Eclipse Public License from
// http://www.opensource.org/licenses/eclipse-1.0.php
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
#ifndef Linux_SambaGlobalSecurityOptionsInstance_h
#define Linux_SambaGlobalSecurityOptionsInstance_h


#include "cmpidt.h"
#include "CmpiObjectPath.h"
#include "CmpiInstance.h"
#include "CmpiBooleanData.h"
#include "CmpiCharData.h"
#include "CmpiDateTime.h"

#include "Linux_SambaGlobalSecurityOptionsInstanceName.h"


namespace genProvider {

  class Linux_SambaGlobalSecurityOptionsInstance {
       
    private:
    void init();
    void init(const Linux_SambaGlobalSecurityOptionsInstance& anInstance);
    void reset();
       
    Linux_SambaGlobalSecurityOptionsInstanceName m_instanceName;
    const char* m_AuthMethods;
    const char* m_Caption;
    const char* m_Description;
    const char* m_ElementName;
    CMPIBoolean m_EncryptPasswords;
    CMPIUint8 m_MinPasswordLength;
    CMPIBoolean m_NullPasswords;
    const char* m_PassdbBackend;
    const char* m_SMBPasswdFile;
    CMPIUint8 m_Security;
       
    struct isSetType{
      unsigned int instanceName:1;
      unsigned int AuthMethods:1;
      unsigned int Caption:1;
      unsigned int Description:1;
      unsigned int ElementName:1;
      unsigned int EncryptPasswords:1;
      unsigned int MinPasswordLength:1;
      unsigned int NullPasswords:1;
      unsigned int PassdbBackend:1;
      unsigned int SMBPasswdFile:1;
      unsigned int Security:1;

    } isSet;
    
    public:
    Linux_SambaGlobalSecurityOptionsInstance();
    Linux_SambaGlobalSecurityOptionsInstance(
      const Linux_SambaGlobalSecurityOptionsInstance& anInstance);
    Linux_SambaGlobalSecurityOptionsInstance(
      const CmpiInstance& aCmpiInstance, 
      const char* anInstanceNamespaceP);
    ~Linux_SambaGlobalSecurityOptionsInstance();
       
    Linux_SambaGlobalSecurityOptionsInstance& operator=(
      const Linux_SambaGlobalSecurityOptionsInstance& anInstance);
       
    CmpiInstance getCmpiInstance(const char** aPropertiesPP = 0) const;
    unsigned int isInstanceNameSet() const;
    void setInstanceName(const Linux_SambaGlobalSecurityOptionsInstanceName& anInstanceName);        
    const Linux_SambaGlobalSecurityOptionsInstanceName& getInstanceName() const;

    unsigned int isAuthMethodsSet() const;
    void setAuthMethods(const char* aValue, int aCopyFlag = 1);
    const char* getAuthMethods() const;

    unsigned int isCaptionSet() const;
    void setCaption(const char* aValue, int aCopyFlag = 1);
    const char* getCaption() const;

    unsigned int isDescriptionSet() const;
    void setDescription(const char* aValue, int aCopyFlag = 1);
    const char* getDescription() const;

    unsigned int isElementNameSet() const;
    void setElementName(const char* aValue, int aCopyFlag = 1);
    const char* getElementName() const;

    unsigned int isEncryptPasswordsSet() const;
    void setEncryptPasswords(const CMPIBoolean aValue);
    const CMPIBoolean getEncryptPasswords() const;

    unsigned int isMinPasswordLengthSet() const;
    void setMinPasswordLength(const CMPIUint8 aValue);
    const CMPIUint8 getMinPasswordLength() const;

    unsigned int isNullPasswordsSet() const;
    void setNullPasswords(const CMPIBoolean aValue);
    const CMPIBoolean getNullPasswords() const;

    unsigned int isPassdbBackendSet() const;
    void setPassdbBackend(const char* aValue, int aCopyFlag = 1);
    const char* getPassdbBackend() const;

    unsigned int isSMBPasswdFileSet() const;
    void setSMBPasswdFile(const char* aValue, int aCopyFlag = 1);
    const char* getSMBPasswdFile() const;

    unsigned int isSecuritySet() const;
    void setSecurity(const CMPIUint8 aValue);
    const CMPIUint8 getSecurity() const;


  };
  
  struct Linux_SambaGlobalSecurityOptionsInstanceEnumerationElement {

    Linux_SambaGlobalSecurityOptionsInstance* m_elementP;
    Linux_SambaGlobalSecurityOptionsInstanceEnumerationElement* m_nextP;

    Linux_SambaGlobalSecurityOptionsInstanceEnumerationElement();
    ~Linux_SambaGlobalSecurityOptionsInstanceEnumerationElement();  

  };
  

  class Linux_SambaGlobalSecurityOptionsInstanceEnumeration {

    private:
    Linux_SambaGlobalSecurityOptionsInstanceEnumerationElement* m_firstElementP;
    Linux_SambaGlobalSecurityOptionsInstanceEnumerationElement* m_currentElementP;
    Linux_SambaGlobalSecurityOptionsInstanceEnumerationElement* m_endElementP;

    public:
    Linux_SambaGlobalSecurityOptionsInstanceEnumeration();
    Linux_SambaGlobalSecurityOptionsInstanceEnumeration(
      const Linux_SambaGlobalSecurityOptionsInstanceEnumeration& anInstanceEnumeration);
    ~Linux_SambaGlobalSecurityOptionsInstanceEnumeration();

    void reset();
    bool hasNext() const;
    const Linux_SambaGlobalSecurityOptionsInstance& getNext();
    int getSize() const;
    const Linux_SambaGlobalSecurityOptionsInstance& getElement(int anIndex) const;  	  
    void addElement(const Linux_SambaGlobalSecurityOptionsInstance& anInstance);

  };

}

#endif
