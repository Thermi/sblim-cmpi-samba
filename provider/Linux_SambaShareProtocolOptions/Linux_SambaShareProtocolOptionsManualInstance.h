// =======================================================================
// Linux_SambaShareProtocolOptionsManualInstance.h
//     created on Mon, 26 Jun 2006 using ECUTE 2.2.1
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
#ifndef Linux_SambaShareProtocolOptionsManualInstance_h
#define Linux_SambaShareProtocolOptionsManualInstance_h


#include "cmpidt.h"
#include "CmpiObjectPath.h"
#include "CmpiInstance.h"
#include "CmpiBooleanData.h"
#include "CmpiCharData.h"
#include "CmpiDateTime.h"

#include "Linux_SambaShareProtocolOptionsInstanceName.h"


namespace genProvider {

  class Linux_SambaShareProtocolOptionsManualInstance {
       
    private:
    void init();
    void init(const Linux_SambaShareProtocolOptionsManualInstance& anInstance);
    void reset();
       
    Linux_SambaShareProtocolOptionsInstanceName m_instanceName;
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
    Linux_SambaShareProtocolOptionsManualInstance();
    Linux_SambaShareProtocolOptionsManualInstance(
      const Linux_SambaShareProtocolOptionsManualInstance& anInstance);
    Linux_SambaShareProtocolOptionsManualInstance(
      const CmpiInstance& aCmpiInstance, 
      const char* anInstanceNamespaceP);
    ~Linux_SambaShareProtocolOptionsManualInstance();
       
    Linux_SambaShareProtocolOptionsManualInstance& operator=(
      const Linux_SambaShareProtocolOptionsManualInstance& anInstance);
       
    CmpiInstance getCmpiInstance(const char** aPropertiesPP = 0) const;
    unsigned int isInstanceNameSet() const;
    void setInstanceName(const Linux_SambaShareProtocolOptionsInstanceName& anInstanceName);        
    const Linux_SambaShareProtocolOptionsInstanceName& getInstanceName() const;

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
  
  struct Linux_SambaShareProtocolOptionsManualInstanceEnumerationElement {

    Linux_SambaShareProtocolOptionsManualInstance* m_elementP;
    Linux_SambaShareProtocolOptionsManualInstanceEnumerationElement* m_nextP;

    Linux_SambaShareProtocolOptionsManualInstanceEnumerationElement();
    ~Linux_SambaShareProtocolOptionsManualInstanceEnumerationElement();  

  };
  

  class Linux_SambaShareProtocolOptionsManualInstanceEnumeration {

    private:
    Linux_SambaShareProtocolOptionsManualInstanceEnumerationElement* m_firstElementP;
    Linux_SambaShareProtocolOptionsManualInstanceEnumerationElement* m_currentElementP;
    Linux_SambaShareProtocolOptionsManualInstanceEnumerationElement* m_endElementP;

    public:
    Linux_SambaShareProtocolOptionsManualInstanceEnumeration();
    Linux_SambaShareProtocolOptionsManualInstanceEnumeration(
      const Linux_SambaShareProtocolOptionsManualInstanceEnumeration& anInstanceEnumeration);
    ~Linux_SambaShareProtocolOptionsManualInstanceEnumeration();

    void reset();
    bool hasNext() const;
    const Linux_SambaShareProtocolOptionsManualInstance& getNext();
    int getSize() const;
    const Linux_SambaShareProtocolOptionsManualInstance& getElement(int anIndex) const;  	  
    void addElement(const Linux_SambaShareProtocolOptionsManualInstance& anInstance);

  };

}

#endif
