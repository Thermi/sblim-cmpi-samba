/**
 *  Linux_SambaGlobalSecurityOptionsManualInstance.h
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


#ifndef Linux_SambaGlobalSecurityOptionsManualInstance_h
#define Linux_SambaGlobalSecurityOptionsManualInstance_h

#include "cmpidt.h"
#include "CmpiObjectPath.h"
#include "CmpiInstance.h"
#include "CmpiBooleanData.h"
#include "CmpiCharData.h"
#include "CmpiDateTime.h"

#include "Linux_SambaGlobalSecurityOptionsInstanceName.h"

namespace genProvider {

  class Linux_SambaGlobalSecurityOptionsManualInstance {
  public:
       Linux_SambaGlobalSecurityOptionsManualInstance();
  	
       Linux_SambaGlobalSecurityOptionsManualInstance
  	    (const Linux_SambaGlobalSecurityOptionsManualInstance& original);
  	   
       Linux_SambaGlobalSecurityOptionsManualInstance
        (const CmpiInstance& inst, const char* instanceNamespace);
  	 
       ~Linux_SambaGlobalSecurityOptionsManualInstance();
       
       Linux_SambaGlobalSecurityOptionsManualInstance& operator=
  	    (const Linux_SambaGlobalSecurityOptionsManualInstance& original);
       
       CmpiInstance getCmpiInstance(const char** properties=0) const;
       
       unsigned int isInstanceNameSet() const;
       void setInstanceName(
        const Linux_SambaGlobalSecurityOptionsInstanceName& val);        
       const Linux_SambaGlobalSecurityOptionsInstanceName&
        getInstanceName() const;

       unsigned int isAuthMethodsSet() const;
       void setAuthMethods(const char* val, int makeCopy = 1);
       const char* getAuthMethods() const;

       unsigned int isEncryptPasswordsSet() const;
       void setEncryptPasswords(const CMPIBoolean val);
       const CMPIBoolean getEncryptPasswords() const;

       unsigned int isMinPasswordLengthSet() const;
       void setMinPasswordLength(const CMPIUint8 val);
       const CMPIUint8 getMinPasswordLength() const;

       unsigned int isNullPasswordsSet() const;
       void setNullPasswords(const CMPIBoolean val);
       const CMPIBoolean getNullPasswords() const;

       unsigned int isPassdbBackendSet() const;
       void setPassdbBackend(const char* val, int makeCopy = 1);
       const char* getPassdbBackend() const;

       unsigned int isSMBPasswdFileSet() const;
       void setSMBPasswdFile(const char* val, int makeCopy = 1);
       const char* getSMBPasswdFile() const;

       unsigned int isSecuritySet() const;
       void setSecurity(const CMPIUint8 val);
       const CMPIUint8 getSecurity() const;
       
  private:
       void init();
       void init(const Linux_SambaGlobalSecurityOptionsManualInstance& original);
       void reset();
       
       Linux_SambaGlobalSecurityOptionsInstanceName m_instanceName;
       const char* m_AuthMethods;
       CMPIBoolean m_EncryptPasswords;
       CMPIUint8 m_MinPasswordLength;
       CMPIBoolean m_NullPasswords;
       const char* m_PassdbBackend;
       const char* m_SMBPasswdFile;
       CMPIUint8 m_Security;
       
       struct isSetType{
       	 unsigned int instanceName:1;
         unsigned int AuthMethods:1;
         unsigned int EncryptPasswords:1;
         unsigned int MinPasswordLength:1;
         unsigned int NullPasswords:1;
         unsigned int PassdbBackend:1;
         unsigned int SMBPasswdFile:1;
         unsigned int Security:1;
       } isSet;
  };
  
  
  struct Linux_SambaGlobalSecurityOptionsManualInstanceEnumerationElement{
  	Linux_SambaGlobalSecurityOptionsManualInstance* m_elementP;
  	Linux_SambaGlobalSecurityOptionsManualInstanceEnumerationElement* m_nextP;
  	
  	Linux_SambaGlobalSecurityOptionsManualInstanceEnumerationElement();
  	~Linux_SambaGlobalSecurityOptionsManualInstanceEnumerationElement();  	
  };
  

  class Linux_SambaGlobalSecurityOptionsManualInstanceEnumeration {
  	private:
  	  Linux_SambaGlobalSecurityOptionsManualInstanceEnumerationElement* firstElementP;
  	  Linux_SambaGlobalSecurityOptionsManualInstanceEnumerationElement* currentElementP;
  	  Linux_SambaGlobalSecurityOptionsManualInstanceEnumerationElement* endElementP;
  	
  	public:
  	  Linux_SambaGlobalSecurityOptionsManualInstanceEnumeration();
  	  
  	  Linux_SambaGlobalSecurityOptionsManualInstanceEnumeration(
  	   const Linux_SambaGlobalSecurityOptionsManualInstanceEnumeration& original);
  	  
  	  ~Linux_SambaGlobalSecurityOptionsManualInstanceEnumeration();
  	  
  	  void reset();
  	  
  	  bool hasNext() const;
  	  
  	  const Linux_SambaGlobalSecurityOptionsManualInstance& getNext();
  	  
  	  int getSize() const;
  	  
  	  const Linux_SambaGlobalSecurityOptionsManualInstance& getElement(int pos) const;  	  
  	  
  	 void addElement(const Linux_SambaGlobalSecurityOptionsManualInstance& elementP);
  };
}
#endif

