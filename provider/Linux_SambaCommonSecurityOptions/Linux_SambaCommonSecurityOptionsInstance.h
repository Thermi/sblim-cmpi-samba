// =======================================================================
// Linux_SambaCommonSecurityOptionsInstance.h
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
#ifndef Linux_SambaCommonSecurityOptionsInstance_h
#define Linux_SambaCommonSecurityOptionsInstance_h


#include "cmpidt.h"
#include "CmpiObjectPath.h"
#include "CmpiInstance.h"
#include "CmpiBooleanData.h"
#include "CmpiCharData.h"
#include "CmpiDateTime.h"

#include "Linux_SambaCommonSecurityOptionsInstanceName.h"


namespace genProvider {

  class Linux_SambaCommonSecurityOptionsInstance {
       
    private:
    void init();
    void init(const Linux_SambaCommonSecurityOptionsInstance& anInstance);
    void reset();
       
    Linux_SambaCommonSecurityOptionsInstanceName m_instanceName;
    const char* m_Caption;
    const char* m_Description;
    const char* m_ElementName;
    CMPIBoolean m_GuestOK;
    CMPIBoolean m_GuestOnly;
    const char* m_HostsAllow;
    const char* m_HostsDeny;
    CMPIBoolean m_ReadOnly;
       
    struct isSetType{
      unsigned int instanceName:1;
      unsigned int Caption:1;
      unsigned int Description:1;
      unsigned int ElementName:1;
      unsigned int GuestOK:1;
      unsigned int GuestOnly:1;
      unsigned int HostsAllow:1;
      unsigned int HostsDeny:1;
      unsigned int ReadOnly:1;

    } isSet;
    
    public:
    Linux_SambaCommonSecurityOptionsInstance();
    Linux_SambaCommonSecurityOptionsInstance(
      const Linux_SambaCommonSecurityOptionsInstance& anInstance);
    Linux_SambaCommonSecurityOptionsInstance(
      const CmpiInstance& aCmpiInstance, 
      const char* anInstanceNamespaceP);
    ~Linux_SambaCommonSecurityOptionsInstance();
       
    Linux_SambaCommonSecurityOptionsInstance& operator=(
      const Linux_SambaCommonSecurityOptionsInstance& anInstance);
       
    CmpiInstance getCmpiInstance(const char** aPropertiesPP = 0) const;
    unsigned int isInstanceNameSet() const;
    void setInstanceName(const Linux_SambaCommonSecurityOptionsInstanceName& anInstanceName);        
    const Linux_SambaCommonSecurityOptionsInstanceName& getInstanceName() const;

    unsigned int isCaptionSet() const;
    void setCaption(const char* aValue, int aCopyFlag = 1);
    const char* getCaption() const;

    unsigned int isDescriptionSet() const;
    void setDescription(const char* aValue, int aCopyFlag = 1);
    const char* getDescription() const;

    unsigned int isElementNameSet() const;
    void setElementName(const char* aValue, int aCopyFlag = 1);
    const char* getElementName() const;

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
  
  struct Linux_SambaCommonSecurityOptionsInstanceEnumerationElement {

    Linux_SambaCommonSecurityOptionsInstance* m_elementP;
    Linux_SambaCommonSecurityOptionsInstanceEnumerationElement* m_nextP;

    Linux_SambaCommonSecurityOptionsInstanceEnumerationElement();
    ~Linux_SambaCommonSecurityOptionsInstanceEnumerationElement();  

  };
  

  class Linux_SambaCommonSecurityOptionsInstanceEnumeration {

    private:
    Linux_SambaCommonSecurityOptionsInstanceEnumerationElement* m_firstElementP;
    Linux_SambaCommonSecurityOptionsInstanceEnumerationElement* m_currentElementP;
    Linux_SambaCommonSecurityOptionsInstanceEnumerationElement* m_endElementP;

    public:
    Linux_SambaCommonSecurityOptionsInstanceEnumeration();
    Linux_SambaCommonSecurityOptionsInstanceEnumeration(
      const Linux_SambaCommonSecurityOptionsInstanceEnumeration& anInstanceEnumeration);
    ~Linux_SambaCommonSecurityOptionsInstanceEnumeration();

    void reset();
    bool hasNext() const;
    const Linux_SambaCommonSecurityOptionsInstance& getNext();
    int getSize() const;
    const Linux_SambaCommonSecurityOptionsInstance& getElement(int anIndex) const;  	  
    void addElement(const Linux_SambaCommonSecurityOptionsInstance& anInstance);

  };

}

#endif
