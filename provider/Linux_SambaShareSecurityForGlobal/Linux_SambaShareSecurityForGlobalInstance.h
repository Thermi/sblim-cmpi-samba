// =======================================================================
// Linux_SambaShareSecurityForGlobalInstance.h
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
#ifndef Linux_SambaShareSecurityForGlobalInstance_h
#define Linux_SambaShareSecurityForGlobalInstance_h


#include "cmpidt.h"
#include "CmpiObjectPath.h"
#include "CmpiInstance.h"
#include "CmpiBooleanData.h"
#include "CmpiCharData.h"
#include "CmpiDateTime.h"

#include "Linux_SambaShareSecurityForGlobalInstanceName.h"


namespace genProvider {

  class Linux_SambaShareSecurityForGlobalInstance {
       
    private:
    void init();
    void init(const Linux_SambaShareSecurityForGlobalInstance& anInstance);
    void reset();
       
    Linux_SambaShareSecurityForGlobalInstanceName m_instanceName;
    CMPIUint16 m_IsCurrent;
    CMPIUint16 m_IsDefault;
       
    struct isSetType{
      unsigned int instanceName:1;
      unsigned int IsCurrent:1;
      unsigned int IsDefault:1;

    } isSet;
    
    public:
    Linux_SambaShareSecurityForGlobalInstance();
    Linux_SambaShareSecurityForGlobalInstance(
      const Linux_SambaShareSecurityForGlobalInstance& anInstance);
    Linux_SambaShareSecurityForGlobalInstance(
      const CmpiInstance& aCmpiInstance, 
      const char* anInstanceNamespaceP);
    ~Linux_SambaShareSecurityForGlobalInstance();
       
    Linux_SambaShareSecurityForGlobalInstance& operator=(
      const Linux_SambaShareSecurityForGlobalInstance& anInstance);
       
    CmpiInstance getCmpiInstance(const char** aPropertiesPP = 0) const;
    unsigned int isInstanceNameSet() const;
    void setInstanceName(const Linux_SambaShareSecurityForGlobalInstanceName& anInstanceName);        
    const Linux_SambaShareSecurityForGlobalInstanceName& getInstanceName() const;

    unsigned int isIsCurrentSet() const;
    void setIsCurrent(const CMPIUint16 aValue);
    const CMPIUint16 getIsCurrent() const;

    unsigned int isIsDefaultSet() const;
    void setIsDefault(const CMPIUint16 aValue);
    const CMPIUint16 getIsDefault() const;


  };
  
  struct Linux_SambaShareSecurityForGlobalInstanceEnumerationElement {

    Linux_SambaShareSecurityForGlobalInstance* m_elementP;
    Linux_SambaShareSecurityForGlobalInstanceEnumerationElement* m_nextP;

    Linux_SambaShareSecurityForGlobalInstanceEnumerationElement();
    ~Linux_SambaShareSecurityForGlobalInstanceEnumerationElement();  

  };
  

  class Linux_SambaShareSecurityForGlobalInstanceEnumeration {

    private:
    Linux_SambaShareSecurityForGlobalInstanceEnumerationElement* m_firstElementP;
    Linux_SambaShareSecurityForGlobalInstanceEnumerationElement* m_currentElementP;
    Linux_SambaShareSecurityForGlobalInstanceEnumerationElement* m_endElementP;

    public:
    Linux_SambaShareSecurityForGlobalInstanceEnumeration();
    Linux_SambaShareSecurityForGlobalInstanceEnumeration(
      const Linux_SambaShareSecurityForGlobalInstanceEnumeration& anInstanceEnumeration);
    ~Linux_SambaShareSecurityForGlobalInstanceEnumeration();

    void reset();
    bool hasNext() const;
    const Linux_SambaShareSecurityForGlobalInstance& getNext();
    int getSize() const;
    const Linux_SambaShareSecurityForGlobalInstance& getElement(int anIndex) const;  	  
    void addElement(const Linux_SambaShareSecurityForGlobalInstance& anInstance);

  };

}

#endif
