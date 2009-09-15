// =======================================================================
// Linux_SambaGlobalProtocolOptionsInstance.h
//     created on Mon, 26 Jun 2006 using ECUTE 2.2.1
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
#ifndef Linux_SambaGlobalProtocolOptionsInstance_h
#define Linux_SambaGlobalProtocolOptionsInstance_h


#include "cmpidt.h"
#include "CmpiObjectPath.h"
#include "CmpiInstance.h"
#include "CmpiBooleanData.h"
#include "CmpiCharData.h"
#include "CmpiDateTime.h"

#include "Linux_SambaGlobalProtocolOptionsInstanceName.h"


namespace genProvider {

  class Linux_SambaGlobalProtocolOptionsInstance {
       
    private:
    void init();
    void init(const Linux_SambaGlobalProtocolOptionsInstance& anInstance);
    void reset();
       
    Linux_SambaGlobalProtocolOptionsInstanceName m_instanceName;
    CMPIUint8 m_AclCompatibility;
    const char* m_Caption;
    const char* m_Description;
    CMPIBoolean m_EASupport;
    const char* m_ElementName;
    CMPIBoolean m_NTACLSupport;
       
    struct isSetType{
      unsigned int instanceName:1;
      unsigned int AclCompatibility:1;
      unsigned int Caption:1;
      unsigned int Description:1;
      unsigned int EASupport:1;
      unsigned int ElementName:1;
      unsigned int NTACLSupport:1;

    } isSet;
    
    public:
    Linux_SambaGlobalProtocolOptionsInstance();
    Linux_SambaGlobalProtocolOptionsInstance(
      const Linux_SambaGlobalProtocolOptionsInstance& anInstance);
    Linux_SambaGlobalProtocolOptionsInstance(
      const CmpiInstance& aCmpiInstance, 
      const char* anInstanceNamespaceP);
    ~Linux_SambaGlobalProtocolOptionsInstance();
       
    Linux_SambaGlobalProtocolOptionsInstance& operator=(
      const Linux_SambaGlobalProtocolOptionsInstance& anInstance);
       
    CmpiInstance getCmpiInstance(const char** aPropertiesPP = 0) const;
    unsigned int isInstanceNameSet() const;
    void setInstanceName(const Linux_SambaGlobalProtocolOptionsInstanceName& anInstanceName);        
    const Linux_SambaGlobalProtocolOptionsInstanceName& getInstanceName() const;

    unsigned int isAclCompatibilitySet() const;
    void setAclCompatibility(const CMPIUint8 aValue);
    const CMPIUint8 getAclCompatibility() const;

    unsigned int isCaptionSet() const;
    void setCaption(const char* aValue, int aCopyFlag = 1);
    const char* getCaption() const;

    unsigned int isDescriptionSet() const;
    void setDescription(const char* aValue, int aCopyFlag = 1);
    const char* getDescription() const;

    unsigned int isEASupportSet() const;
    void setEASupport(const CMPIBoolean aValue);
    const CMPIBoolean getEASupport() const;

    unsigned int isElementNameSet() const;
    void setElementName(const char* aValue, int aCopyFlag = 1);
    const char* getElementName() const;

    unsigned int isNTACLSupportSet() const;
    void setNTACLSupport(const CMPIBoolean aValue);
    const CMPIBoolean getNTACLSupport() const;


  };
  
  struct Linux_SambaGlobalProtocolOptionsInstanceEnumerationElement {

    Linux_SambaGlobalProtocolOptionsInstance* m_elementP;
    Linux_SambaGlobalProtocolOptionsInstanceEnumerationElement* m_nextP;

    Linux_SambaGlobalProtocolOptionsInstanceEnumerationElement();
    ~Linux_SambaGlobalProtocolOptionsInstanceEnumerationElement();  

  };
  

  class Linux_SambaGlobalProtocolOptionsInstanceEnumeration {

    private:
    Linux_SambaGlobalProtocolOptionsInstanceEnumerationElement* m_firstElementP;
    Linux_SambaGlobalProtocolOptionsInstanceEnumerationElement* m_currentElementP;
    Linux_SambaGlobalProtocolOptionsInstanceEnumerationElement* m_endElementP;

    public:
    Linux_SambaGlobalProtocolOptionsInstanceEnumeration();
    Linux_SambaGlobalProtocolOptionsInstanceEnumeration(
      const Linux_SambaGlobalProtocolOptionsInstanceEnumeration& anInstanceEnumeration);
    ~Linux_SambaGlobalProtocolOptionsInstanceEnumeration();

    void reset();
    bool hasNext() const;
    const Linux_SambaGlobalProtocolOptionsInstance& getNext();
    int getSize() const;
    const Linux_SambaGlobalProtocolOptionsInstance& getElement(int anIndex) const;  	  
    void addElement(const Linux_SambaGlobalProtocolOptionsInstance& anInstance);

  };

}

#endif
