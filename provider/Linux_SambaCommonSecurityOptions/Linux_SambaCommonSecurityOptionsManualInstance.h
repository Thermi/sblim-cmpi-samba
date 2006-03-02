// =======================================================================
// Linux_SambaCommonSecurityOptionsManualInstance.h
//     created on Fri, 24 Feb 2006 using ECUTE
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
//                Rodrigo Ceron    <rceron@br.ibm.com>
//                Wolfgang Taphorn <taphorn@de.ibm.com>
//
// =======================================================================
//
// 
#ifndef Linux_SambaCommonSecurityOptionsManualInstance_h
#define Linux_SambaCommonSecurityOptionsManualInstance_h


#include "cmpidt.h"
#include "CmpiObjectPath.h"
#include "CmpiInstance.h"
#include "CmpiBooleanData.h"
#include "CmpiCharData.h"
#include "CmpiDateTime.h"

#include "Linux_SambaCommonSecurityOptionsInstanceName.h"


namespace genProvider {

  class Linux_SambaCommonSecurityOptionsManualInstance {
       
    private:
    void init();
    void init(const Linux_SambaCommonSecurityOptionsManualInstance& anInstance);
    void reset();
       
    Linux_SambaCommonSecurityOptionsInstanceName m_instanceName;
    CMPIBoolean m_GuestOK;
    CMPIBoolean m_GuestOnly;
    const char* m_HostsAllow;
    const char* m_HostsDeny;
    CMPIBoolean m_ReadOnly;
       
    struct isSetType{
      unsigned int instanceName:1;
      unsigned int GuestOK:1;
      unsigned int GuestOnly:1;
      unsigned int HostsAllow:1;
      unsigned int HostsDeny:1;
      unsigned int ReadOnly:1;

    } isSet;
    
    public:
    Linux_SambaCommonSecurityOptionsManualInstance();
    Linux_SambaCommonSecurityOptionsManualInstance(
      const Linux_SambaCommonSecurityOptionsManualInstance& anInstance);
    Linux_SambaCommonSecurityOptionsManualInstance(
      const CmpiInstance& aCmpiInstance, 
      const char* anInstanceNamespaceP);
    ~Linux_SambaCommonSecurityOptionsManualInstance();
       
    Linux_SambaCommonSecurityOptionsManualInstance& operator=(
      const Linux_SambaCommonSecurityOptionsManualInstance& anInstance);
       
    CmpiInstance getCmpiInstance(const char** aPropertiesPP = 0) const;
    unsigned int isInstanceNameSet() const;
    void setInstanceName(const Linux_SambaCommonSecurityOptionsInstanceName& anInstanceName);        
    const Linux_SambaCommonSecurityOptionsInstanceName& getInstanceName() const;

    unsigned int isGuestOKSet() const;
    void setGuestOK(const CMPIBoolean aValue);
    const CMPIBoolean getGuestOK() const;

    unsigned int isGuestOnlySet() const;
    void setGuestOnly(const CMPIBoolean aValue);
    const CMPIBoolean getGuestOnly() const;

    unsigned int isHostsAllowSet() const;
    void setHostsAllow(const char* aValue, int aCopyFlag = 1);
    const char* getHostsAllow() const;

    unsigned int isHostsDenySet() const;
    void setHostsDeny(const char* aValue, int aCopyFlag = 1);
    const char* getHostsDeny() const;

    unsigned int isReadOnlySet() const;
    void setReadOnly(const CMPIBoolean aValue);
    const CMPIBoolean getReadOnly() const;


  };
  
  struct Linux_SambaCommonSecurityOptionsManualInstanceEnumerationElement {

    Linux_SambaCommonSecurityOptionsManualInstance* m_elementP;
    Linux_SambaCommonSecurityOptionsManualInstanceEnumerationElement* m_nextP;

    Linux_SambaCommonSecurityOptionsManualInstanceEnumerationElement();
    ~Linux_SambaCommonSecurityOptionsManualInstanceEnumerationElement();  

  };
  

  class Linux_SambaCommonSecurityOptionsManualInstanceEnumeration {

    private:
    Linux_SambaCommonSecurityOptionsManualInstanceEnumerationElement* m_firstElementP;
    Linux_SambaCommonSecurityOptionsManualInstanceEnumerationElement* m_currentElementP;
    Linux_SambaCommonSecurityOptionsManualInstanceEnumerationElement* m_endElementP;

    public:
    Linux_SambaCommonSecurityOptionsManualInstanceEnumeration();
    Linux_SambaCommonSecurityOptionsManualInstanceEnumeration(
      const Linux_SambaCommonSecurityOptionsManualInstanceEnumeration& anInstanceEnumeration);
    ~Linux_SambaCommonSecurityOptionsManualInstanceEnumeration();

    void reset();
    bool hasNext() const;
    const Linux_SambaCommonSecurityOptionsManualInstance& getNext();
    int getSize() const;
    const Linux_SambaCommonSecurityOptionsManualInstance& getElement(int anIndex) const;  	  
    void addElement(const Linux_SambaCommonSecurityOptionsManualInstance& anInstance);

  };

}

#endif
