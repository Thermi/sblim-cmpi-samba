// =======================================================================
// Linux_SambaGlobalSecurityForGlobalInstance.h
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
#ifndef Linux_SambaGlobalSecurityForGlobalInstance_h
#define Linux_SambaGlobalSecurityForGlobalInstance_h


#include "cmpidt.h"
#include "CmpiObjectPath.h"
#include "CmpiInstance.h"
#include "CmpiBooleanData.h"
#include "CmpiCharData.h"
#include "CmpiDateTime.h"

#include "Linux_SambaGlobalSecurityForGlobalInstanceName.h"


namespace genProvider {

  class Linux_SambaGlobalSecurityForGlobalInstance {
       
    private:
    void init();
    void init(const Linux_SambaGlobalSecurityForGlobalInstance& anInstance);
    void reset();
       
    Linux_SambaGlobalSecurityForGlobalInstanceName m_instanceName;
    CMPIUint16 m_IsCurrent;
    CMPIUint16 m_IsDefault;
       
    struct isSetType{
      unsigned int instanceName:1;
      unsigned int IsCurrent:1;
      unsigned int IsDefault:1;

    } isSet;
    
    public:
    Linux_SambaGlobalSecurityForGlobalInstance();
    Linux_SambaGlobalSecurityForGlobalInstance(
      const Linux_SambaGlobalSecurityForGlobalInstance& anInstance);
    Linux_SambaGlobalSecurityForGlobalInstance(
      const CmpiInstance& aCmpiInstance, 
      const char* anInstanceNamespaceP);
    ~Linux_SambaGlobalSecurityForGlobalInstance();
       
    Linux_SambaGlobalSecurityForGlobalInstance& operator=(
      const Linux_SambaGlobalSecurityForGlobalInstance& anInstance);
       
    CmpiInstance getCmpiInstance(const char** aPropertiesPP = 0) const;
    unsigned int isInstanceNameSet() const;
    void setInstanceName(const Linux_SambaGlobalSecurityForGlobalInstanceName& anInstanceName);        
    const Linux_SambaGlobalSecurityForGlobalInstanceName& getInstanceName() const;

    unsigned int isIsCurrentSet() const;
    void setIsCurrent(const CMPIUint16 aValue);
    const CMPIUint16 getIsCurrent() const;

    unsigned int isIsDefaultSet() const;
    void setIsDefault(const CMPIUint16 aValue);
    const CMPIUint16 getIsDefault() const;


  };
  
  struct Linux_SambaGlobalSecurityForGlobalInstanceEnumerationElement {

    Linux_SambaGlobalSecurityForGlobalInstance* m_elementP;
    Linux_SambaGlobalSecurityForGlobalInstanceEnumerationElement* m_nextP;

    Linux_SambaGlobalSecurityForGlobalInstanceEnumerationElement();
    ~Linux_SambaGlobalSecurityForGlobalInstanceEnumerationElement();  

  };
  

  class Linux_SambaGlobalSecurityForGlobalInstanceEnumeration {

    private:
    Linux_SambaGlobalSecurityForGlobalInstanceEnumerationElement* m_firstElementP;
    Linux_SambaGlobalSecurityForGlobalInstanceEnumerationElement* m_currentElementP;
    Linux_SambaGlobalSecurityForGlobalInstanceEnumerationElement* m_endElementP;

    public:
    Linux_SambaGlobalSecurityForGlobalInstanceEnumeration();
    Linux_SambaGlobalSecurityForGlobalInstanceEnumeration(
      const Linux_SambaGlobalSecurityForGlobalInstanceEnumeration& anInstanceEnumeration);
    ~Linux_SambaGlobalSecurityForGlobalInstanceEnumeration();

    void reset();
    bool hasNext() const;
    const Linux_SambaGlobalSecurityForGlobalInstance& getNext();
    int getSize() const;
    const Linux_SambaGlobalSecurityForGlobalInstance& getElement(int anIndex) const;  	  
    void addElement(const Linux_SambaGlobalSecurityForGlobalInstance& anInstance);

  };

}

#endif
