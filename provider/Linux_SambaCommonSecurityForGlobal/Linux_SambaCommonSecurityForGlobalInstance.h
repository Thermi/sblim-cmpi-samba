// =======================================================================
// Linux_SambaCommonSecurityForGlobalInstance.h
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
#ifndef Linux_SambaCommonSecurityForGlobalInstance_h
#define Linux_SambaCommonSecurityForGlobalInstance_h


#include "cmpidt.h"
#include "CmpiObjectPath.h"
#include "CmpiInstance.h"
#include "CmpiBooleanData.h"
#include "CmpiCharData.h"
#include "CmpiDateTime.h"

#include "Linux_SambaCommonSecurityForGlobalInstanceName.h"


namespace genProvider {

  class Linux_SambaCommonSecurityForGlobalInstance {
       
    private:
    void init();
    void init(const Linux_SambaCommonSecurityForGlobalInstance& anInstance);
    void reset();
       
    Linux_SambaCommonSecurityForGlobalInstanceName m_instanceName;
    CMPIUint16 m_IsCurrent;
    CMPIUint16 m_IsDefault;
       
    struct isSetType{
      unsigned int instanceName:1;
      unsigned int IsCurrent:1;
      unsigned int IsDefault:1;

    } isSet;
    
    public:
    Linux_SambaCommonSecurityForGlobalInstance();
    Linux_SambaCommonSecurityForGlobalInstance(
      const Linux_SambaCommonSecurityForGlobalInstance& anInstance);
    Linux_SambaCommonSecurityForGlobalInstance(
      const CmpiInstance& aCmpiInstance, 
      const char* anInstanceNamespaceP);
    ~Linux_SambaCommonSecurityForGlobalInstance();
       
    Linux_SambaCommonSecurityForGlobalInstance& operator=(
      const Linux_SambaCommonSecurityForGlobalInstance& anInstance);
       
    CmpiInstance getCmpiInstance(const char** aPropertiesPP = 0) const;
    unsigned int isInstanceNameSet() const;
    void setInstanceName(const Linux_SambaCommonSecurityForGlobalInstanceName& anInstanceName);        
    const Linux_SambaCommonSecurityForGlobalInstanceName& getInstanceName() const;

    unsigned int isIsCurrentSet() const;
    void setIsCurrent(const CMPIUint16 aValue);
    const CMPIUint16 getIsCurrent() const;

    unsigned int isIsDefaultSet() const;
    void setIsDefault(const CMPIUint16 aValue);
    const CMPIUint16 getIsDefault() const;


  };
  
  struct Linux_SambaCommonSecurityForGlobalInstanceEnumerationElement {

    Linux_SambaCommonSecurityForGlobalInstance* m_elementP;
    Linux_SambaCommonSecurityForGlobalInstanceEnumerationElement* m_nextP;

    Linux_SambaCommonSecurityForGlobalInstanceEnumerationElement();
    ~Linux_SambaCommonSecurityForGlobalInstanceEnumerationElement();  

  };
  

  class Linux_SambaCommonSecurityForGlobalInstanceEnumeration {

    private:
    Linux_SambaCommonSecurityForGlobalInstanceEnumerationElement* m_firstElementP;
    Linux_SambaCommonSecurityForGlobalInstanceEnumerationElement* m_currentElementP;
    Linux_SambaCommonSecurityForGlobalInstanceEnumerationElement* m_endElementP;

    public:
    Linux_SambaCommonSecurityForGlobalInstanceEnumeration();
    Linux_SambaCommonSecurityForGlobalInstanceEnumeration(
      const Linux_SambaCommonSecurityForGlobalInstanceEnumeration& anInstanceEnumeration);
    ~Linux_SambaCommonSecurityForGlobalInstanceEnumeration();

    void reset();
    bool hasNext() const;
    const Linux_SambaCommonSecurityForGlobalInstance& getNext();
    int getSize() const;
    const Linux_SambaCommonSecurityForGlobalInstance& getElement(int anIndex) const;  	  
    void addElement(const Linux_SambaCommonSecurityForGlobalInstance& anInstance);

  };

}

#endif
