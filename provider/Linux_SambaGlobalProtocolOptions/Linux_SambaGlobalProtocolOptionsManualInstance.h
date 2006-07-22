// =======================================================================
// Linux_SambaGlobalProtocolOptionsManualInstance.h
//     created on Mon, 26 Jun 2006 using ECUTE 2.2.1
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
#ifndef Linux_SambaGlobalProtocolOptionsManualInstance_h
#define Linux_SambaGlobalProtocolOptionsManualInstance_h


#include "cmpidt.h"
#include "CmpiObjectPath.h"
#include "CmpiInstance.h"
#include "CmpiBooleanData.h"
#include "CmpiCharData.h"
#include "CmpiDateTime.h"

#include "Linux_SambaGlobalProtocolOptionsInstanceName.h"


namespace genProvider {

  class Linux_SambaGlobalProtocolOptionsManualInstance {
       
    private:
    void init();
    void init(const Linux_SambaGlobalProtocolOptionsManualInstance& anInstance);
    void reset();
       
    Linux_SambaGlobalProtocolOptionsInstanceName m_instanceName;
    CMPIUint8 m_AclCompatibility;
    CMPIBoolean m_EASupport;
    CMPIBoolean m_NTACLSupport;
       
    struct isSetType{
      unsigned int instanceName:1;
      unsigned int AclCompatibility:1;
      unsigned int EASupport:1;
      unsigned int NTACLSupport:1;

    } isSet;
    
    public:
    Linux_SambaGlobalProtocolOptionsManualInstance();
    Linux_SambaGlobalProtocolOptionsManualInstance(
      const Linux_SambaGlobalProtocolOptionsManualInstance& anInstance);
    Linux_SambaGlobalProtocolOptionsManualInstance(
      const CmpiInstance& aCmpiInstance, 
      const char* anInstanceNamespaceP);
    ~Linux_SambaGlobalProtocolOptionsManualInstance();
       
    Linux_SambaGlobalProtocolOptionsManualInstance& operator=(
      const Linux_SambaGlobalProtocolOptionsManualInstance& anInstance);
       
    CmpiInstance getCmpiInstance(const char** aPropertiesPP = 0) const;
    unsigned int isInstanceNameSet() const;
    void setInstanceName(const Linux_SambaGlobalProtocolOptionsInstanceName& anInstanceName);        
    const Linux_SambaGlobalProtocolOptionsInstanceName& getInstanceName() const;

    unsigned int isAclCompatibilitySet() const;
    void setAclCompatibility(const CMPIUint8 aValue);
    const CMPIUint8 getAclCompatibility() const;

    unsigned int isEASupportSet() const;
    void setEASupport(const CMPIBoolean aValue);
    const CMPIBoolean getEASupport() const;

    unsigned int isNTACLSupportSet() const;
    void setNTACLSupport(const CMPIBoolean aValue);
    const CMPIBoolean getNTACLSupport() const;


  };
  
  struct Linux_SambaGlobalProtocolOptionsManualInstanceEnumerationElement {

    Linux_SambaGlobalProtocolOptionsManualInstance* m_elementP;
    Linux_SambaGlobalProtocolOptionsManualInstanceEnumerationElement* m_nextP;

    Linux_SambaGlobalProtocolOptionsManualInstanceEnumerationElement();
    ~Linux_SambaGlobalProtocolOptionsManualInstanceEnumerationElement();  

  };
  

  class Linux_SambaGlobalProtocolOptionsManualInstanceEnumeration {

    private:
    Linux_SambaGlobalProtocolOptionsManualInstanceEnumerationElement* m_firstElementP;
    Linux_SambaGlobalProtocolOptionsManualInstanceEnumerationElement* m_currentElementP;
    Linux_SambaGlobalProtocolOptionsManualInstanceEnumerationElement* m_endElementP;

    public:
    Linux_SambaGlobalProtocolOptionsManualInstanceEnumeration();
    Linux_SambaGlobalProtocolOptionsManualInstanceEnumeration(
      const Linux_SambaGlobalProtocolOptionsManualInstanceEnumeration& anInstanceEnumeration);
    ~Linux_SambaGlobalProtocolOptionsManualInstanceEnumeration();

    void reset();
    bool hasNext() const;
    const Linux_SambaGlobalProtocolOptionsManualInstance& getNext();
    int getSize() const;
    const Linux_SambaGlobalProtocolOptionsManualInstance& getElement(int anIndex) const;  	  
    void addElement(const Linux_SambaGlobalProtocolOptionsManualInstance& anInstance);

  };

}

#endif
