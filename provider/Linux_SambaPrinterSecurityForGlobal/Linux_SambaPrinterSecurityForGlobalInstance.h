// =======================================================================
// Linux_SambaPrinterSecurityForGlobalInstance.h
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
#ifndef Linux_SambaPrinterSecurityForGlobalInstance_h
#define Linux_SambaPrinterSecurityForGlobalInstance_h


#include "cmpidt.h"
#include "CmpiObjectPath.h"
#include "CmpiInstance.h"
#include "CmpiBooleanData.h"
#include "CmpiCharData.h"
#include "CmpiDateTime.h"

#include "Linux_SambaPrinterSecurityForGlobalInstanceName.h"


namespace genProvider {

  class Linux_SambaPrinterSecurityForGlobalInstance {
       
    private:
    void init();
    void init(const Linux_SambaPrinterSecurityForGlobalInstance& anInstance);
    void reset();
       
    Linux_SambaPrinterSecurityForGlobalInstanceName m_instanceName;
    CMPIUint16 m_IsCurrent;
    CMPIUint16 m_IsDefault;
       
    struct isSetType{
      unsigned int instanceName:1;
      unsigned int IsCurrent:1;
      unsigned int IsDefault:1;

    } isSet;
    
    public:
    Linux_SambaPrinterSecurityForGlobalInstance();
    Linux_SambaPrinterSecurityForGlobalInstance(
      const Linux_SambaPrinterSecurityForGlobalInstance& anInstance);
    Linux_SambaPrinterSecurityForGlobalInstance(
      const CmpiInstance& aCmpiInstance, 
      const char* anInstanceNamespaceP);
    ~Linux_SambaPrinterSecurityForGlobalInstance();
       
    Linux_SambaPrinterSecurityForGlobalInstance& operator=(
      const Linux_SambaPrinterSecurityForGlobalInstance& anInstance);
       
    CmpiInstance getCmpiInstance(const char** aPropertiesPP = 0) const;
    unsigned int isInstanceNameSet() const;
    void setInstanceName(const Linux_SambaPrinterSecurityForGlobalInstanceName& anInstanceName);        
    const Linux_SambaPrinterSecurityForGlobalInstanceName& getInstanceName() const;

    unsigned int isIsCurrentSet() const;
    void setIsCurrent(const CMPIUint16 aValue);
    const CMPIUint16 getIsCurrent() const;

    unsigned int isIsDefaultSet() const;
    void setIsDefault(const CMPIUint16 aValue);
    const CMPIUint16 getIsDefault() const;


  };
  
  struct Linux_SambaPrinterSecurityForGlobalInstanceEnumerationElement {

    Linux_SambaPrinterSecurityForGlobalInstance* m_elementP;
    Linux_SambaPrinterSecurityForGlobalInstanceEnumerationElement* m_nextP;

    Linux_SambaPrinterSecurityForGlobalInstanceEnumerationElement();
    ~Linux_SambaPrinterSecurityForGlobalInstanceEnumerationElement();  

  };
  

  class Linux_SambaPrinterSecurityForGlobalInstanceEnumeration {

    private:
    Linux_SambaPrinterSecurityForGlobalInstanceEnumerationElement* m_firstElementP;
    Linux_SambaPrinterSecurityForGlobalInstanceEnumerationElement* m_currentElementP;
    Linux_SambaPrinterSecurityForGlobalInstanceEnumerationElement* m_endElementP;

    public:
    Linux_SambaPrinterSecurityForGlobalInstanceEnumeration();
    Linux_SambaPrinterSecurityForGlobalInstanceEnumeration(
      const Linux_SambaPrinterSecurityForGlobalInstanceEnumeration& anInstanceEnumeration);
    ~Linux_SambaPrinterSecurityForGlobalInstanceEnumeration();

    void reset();
    bool hasNext() const;
    const Linux_SambaPrinterSecurityForGlobalInstance& getNext();
    int getSize() const;
    const Linux_SambaPrinterSecurityForGlobalInstance& getElement(int anIndex) const;  	  
    void addElement(const Linux_SambaPrinterSecurityForGlobalInstance& anInstance);

  };

}

#endif
