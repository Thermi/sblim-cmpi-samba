// =======================================================================
// Linux_SambaGlobalProtocolForGlobalInstance.h
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
#ifndef Linux_SambaGlobalProtocolForGlobalInstance_h
#define Linux_SambaGlobalProtocolForGlobalInstance_h


#include "cmpidt.h"
#include "CmpiObjectPath.h"
#include "CmpiInstance.h"
#include "CmpiBooleanData.h"
#include "CmpiCharData.h"
#include "CmpiDateTime.h"

#include "Linux_SambaGlobalProtocolForGlobalInstanceName.h"


namespace genProvider {

  class Linux_SambaGlobalProtocolForGlobalInstance {
       
    private:
    void init();
    void init(const Linux_SambaGlobalProtocolForGlobalInstance& anInstance);
    void reset();
       
    Linux_SambaGlobalProtocolForGlobalInstanceName m_instanceName;
    CMPIUint16 m_IsCurrent;
    CMPIUint16 m_IsDefault;
       
    struct isSetType{
      unsigned int instanceName:1;
      unsigned int IsCurrent:1;
      unsigned int IsDefault:1;

    } isSet;
    
    public:
    Linux_SambaGlobalProtocolForGlobalInstance();
    Linux_SambaGlobalProtocolForGlobalInstance(
      const Linux_SambaGlobalProtocolForGlobalInstance& anInstance);
    Linux_SambaGlobalProtocolForGlobalInstance(
      const CmpiInstance& aCmpiInstance, 
      const char* anInstanceNamespaceP);
    ~Linux_SambaGlobalProtocolForGlobalInstance();
       
    Linux_SambaGlobalProtocolForGlobalInstance& operator=(
      const Linux_SambaGlobalProtocolForGlobalInstance& anInstance);
       
    CmpiInstance getCmpiInstance(const char** aPropertiesPP = 0) const;
    unsigned int isInstanceNameSet() const;
    void setInstanceName(const Linux_SambaGlobalProtocolForGlobalInstanceName& anInstanceName);        
    const Linux_SambaGlobalProtocolForGlobalInstanceName& getInstanceName() const;

    unsigned int isIsCurrentSet() const;
    void setIsCurrent(const CMPIUint16 aValue);
    const CMPIUint16 getIsCurrent() const;

    unsigned int isIsDefaultSet() const;
    void setIsDefault(const CMPIUint16 aValue);
    const CMPIUint16 getIsDefault() const;


  };
  
  struct Linux_SambaGlobalProtocolForGlobalInstanceEnumerationElement {

    Linux_SambaGlobalProtocolForGlobalInstance* m_elementP;
    Linux_SambaGlobalProtocolForGlobalInstanceEnumerationElement* m_nextP;

    Linux_SambaGlobalProtocolForGlobalInstanceEnumerationElement();
    ~Linux_SambaGlobalProtocolForGlobalInstanceEnumerationElement();  

  };
  

  class Linux_SambaGlobalProtocolForGlobalInstanceEnumeration {

    private:
    Linux_SambaGlobalProtocolForGlobalInstanceEnumerationElement* m_firstElementP;
    Linux_SambaGlobalProtocolForGlobalInstanceEnumerationElement* m_currentElementP;
    Linux_SambaGlobalProtocolForGlobalInstanceEnumerationElement* m_endElementP;

    public:
    Linux_SambaGlobalProtocolForGlobalInstanceEnumeration();
    Linux_SambaGlobalProtocolForGlobalInstanceEnumeration(
      const Linux_SambaGlobalProtocolForGlobalInstanceEnumeration& anInstanceEnumeration);
    ~Linux_SambaGlobalProtocolForGlobalInstanceEnumeration();

    void reset();
    bool hasNext() const;
    const Linux_SambaGlobalProtocolForGlobalInstance& getNext();
    int getSize() const;
    const Linux_SambaGlobalProtocolForGlobalInstance& getElement(int anIndex) const;  	  
    void addElement(const Linux_SambaGlobalProtocolForGlobalInstance& anInstance);

  };

}

#endif
