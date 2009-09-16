// =======================================================================
// Linux_SambaGlobalBrowseForGlobalInstance.h
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
#ifndef Linux_SambaGlobalBrowseForGlobalInstance_h
#define Linux_SambaGlobalBrowseForGlobalInstance_h


#include "cmpidt.h"
#include "CmpiObjectPath.h"
#include "CmpiInstance.h"
#include "CmpiBooleanData.h"
#include "CmpiCharData.h"
#include "CmpiDateTime.h"

#include "Linux_SambaGlobalBrowseForGlobalInstanceName.h"


namespace genProvider {

  class Linux_SambaGlobalBrowseForGlobalInstance {
       
    private:
    void init();
    void init(const Linux_SambaGlobalBrowseForGlobalInstance& anInstance);
    void reset();
       
    Linux_SambaGlobalBrowseForGlobalInstanceName m_instanceName;
    CMPIUint16 m_IsCurrent;
    CMPIUint16 m_IsDefault;
       
    struct isSetType{
      unsigned int instanceName:1;
      unsigned int IsCurrent:1;
      unsigned int IsDefault:1;

    } isSet;
    
    public:
    Linux_SambaGlobalBrowseForGlobalInstance();
    Linux_SambaGlobalBrowseForGlobalInstance(
      const Linux_SambaGlobalBrowseForGlobalInstance& anInstance);
    Linux_SambaGlobalBrowseForGlobalInstance(
      const CmpiInstance& aCmpiInstance, 
      const char* anInstanceNamespaceP);
    ~Linux_SambaGlobalBrowseForGlobalInstance();
       
    Linux_SambaGlobalBrowseForGlobalInstance& operator=(
      const Linux_SambaGlobalBrowseForGlobalInstance& anInstance);
       
    CmpiInstance getCmpiInstance(const char** aPropertiesPP = 0) const;
    unsigned int isInstanceNameSet() const;
    void setInstanceName(const Linux_SambaGlobalBrowseForGlobalInstanceName& anInstanceName);        
    const Linux_SambaGlobalBrowseForGlobalInstanceName& getInstanceName() const;

    unsigned int isIsCurrentSet() const;
    void setIsCurrent(const CMPIUint16 aValue);
    const CMPIUint16 getIsCurrent() const;

    unsigned int isIsDefaultSet() const;
    void setIsDefault(const CMPIUint16 aValue);
    const CMPIUint16 getIsDefault() const;


  };
  
  struct Linux_SambaGlobalBrowseForGlobalInstanceEnumerationElement {

    Linux_SambaGlobalBrowseForGlobalInstance* m_elementP;
    Linux_SambaGlobalBrowseForGlobalInstanceEnumerationElement* m_nextP;

    Linux_SambaGlobalBrowseForGlobalInstanceEnumerationElement();
    ~Linux_SambaGlobalBrowseForGlobalInstanceEnumerationElement();  

  };
  

  class Linux_SambaGlobalBrowseForGlobalInstanceEnumeration {

    private:
    Linux_SambaGlobalBrowseForGlobalInstanceEnumerationElement* m_firstElementP;
    Linux_SambaGlobalBrowseForGlobalInstanceEnumerationElement* m_currentElementP;
    Linux_SambaGlobalBrowseForGlobalInstanceEnumerationElement* m_endElementP;

    public:
    Linux_SambaGlobalBrowseForGlobalInstanceEnumeration();
    Linux_SambaGlobalBrowseForGlobalInstanceEnumeration(
      const Linux_SambaGlobalBrowseForGlobalInstanceEnumeration& anInstanceEnumeration);
    ~Linux_SambaGlobalBrowseForGlobalInstanceEnumeration();

    void reset();
    bool hasNext() const;
    const Linux_SambaGlobalBrowseForGlobalInstance& getNext();
    int getSize() const;
    const Linux_SambaGlobalBrowseForGlobalInstance& getElement(int anIndex) const;  	  
    void addElement(const Linux_SambaGlobalBrowseForGlobalInstance& anInstance);

  };

}

#endif
