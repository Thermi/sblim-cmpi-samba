// =======================================================================
// Linux_SambaShareProtocolOptionsInstance.h
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
#ifndef Linux_SambaShareProtocolOptionsInstance_h
#define Linux_SambaShareProtocolOptionsInstance_h


#include "cmpidt.h"
#include "CmpiObjectPath.h"
#include "CmpiInstance.h"
#include "CmpiBooleanData.h"
#include "CmpiCharData.h"
#include "CmpiDateTime.h"

#include "Linux_SambaShareProtocolOptionsInstanceName.h"


namespace genProvider {

  class Linux_SambaShareProtocolOptionsInstance {
       
    private:
    void init();
    void init(const Linux_SambaShareProtocolOptionsInstance& anInstance);
    void reset();
       
    Linux_SambaShareProtocolOptionsInstanceName m_instanceName;
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
    Linux_SambaShareProtocolOptionsInstance();
    Linux_SambaShareProtocolOptionsInstance(
      const Linux_SambaShareProtocolOptionsInstance& anInstance);
    Linux_SambaShareProtocolOptionsInstance(
      const CmpiInstance& aCmpiInstance, 
      const char* anInstanceNamespaceP);
    ~Linux_SambaShareProtocolOptionsInstance();
       
    Linux_SambaShareProtocolOptionsInstance& operator=(
      const Linux_SambaShareProtocolOptionsInstance& anInstance);
       
    CmpiInstance getCmpiInstance(const char** aPropertiesPP = 0) const;
    unsigned int isInstanceNameSet() const;
    void setInstanceName(const Linux_SambaShareProtocolOptionsInstanceName& anInstanceName);        
    const Linux_SambaShareProtocolOptionsInstanceName& getInstanceName() const;

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
  
  struct Linux_SambaShareProtocolOptionsInstanceEnumerationElement {

    Linux_SambaShareProtocolOptionsInstance* m_elementP;
    Linux_SambaShareProtocolOptionsInstanceEnumerationElement* m_nextP;

    Linux_SambaShareProtocolOptionsInstanceEnumerationElement();
    ~Linux_SambaShareProtocolOptionsInstanceEnumerationElement();  

  };
  

  class Linux_SambaShareProtocolOptionsInstanceEnumeration {

    private:
    Linux_SambaShareProtocolOptionsInstanceEnumerationElement* m_firstElementP;
    Linux_SambaShareProtocolOptionsInstanceEnumerationElement* m_currentElementP;
    Linux_SambaShareProtocolOptionsInstanceEnumerationElement* m_endElementP;

    public:
    Linux_SambaShareProtocolOptionsInstanceEnumeration();
    Linux_SambaShareProtocolOptionsInstanceEnumeration(
      const Linux_SambaShareProtocolOptionsInstanceEnumeration& anInstanceEnumeration);
    ~Linux_SambaShareProtocolOptionsInstanceEnumeration();

    void reset();
    bool hasNext() const;
    const Linux_SambaShareProtocolOptionsInstance& getNext();
    int getSize() const;
    const Linux_SambaShareProtocolOptionsInstance& getElement(int anIndex) const;  	  
    void addElement(const Linux_SambaShareProtocolOptionsInstance& anInstance);

  };

}

#endif
