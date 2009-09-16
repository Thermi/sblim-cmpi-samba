// =======================================================================
// Linux_SambaPrinterSecurityForPrinterInstance.h
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
#ifndef Linux_SambaPrinterSecurityForPrinterInstance_h
#define Linux_SambaPrinterSecurityForPrinterInstance_h


#include "cmpidt.h"
#include "CmpiObjectPath.h"
#include "CmpiInstance.h"
#include "CmpiBooleanData.h"
#include "CmpiCharData.h"
#include "CmpiDateTime.h"

#include "Linux_SambaPrinterSecurityForPrinterInstanceName.h"


namespace genProvider {

  class Linux_SambaPrinterSecurityForPrinterInstance {
       
    private:
    void init();
    void init(const Linux_SambaPrinterSecurityForPrinterInstance& anInstance);
    void reset();
       
    Linux_SambaPrinterSecurityForPrinterInstanceName m_instanceName;
    CMPIUint16 m_IsCurrent;
    CMPIUint16 m_IsDefault;
       
    struct isSetType{
      unsigned int instanceName:1;
      unsigned int IsCurrent:1;
      unsigned int IsDefault:1;

    } isSet;
    
    public:
    Linux_SambaPrinterSecurityForPrinterInstance();
    Linux_SambaPrinterSecurityForPrinterInstance(
      const Linux_SambaPrinterSecurityForPrinterInstance& anInstance);
    Linux_SambaPrinterSecurityForPrinterInstance(
      const CmpiInstance& aCmpiInstance, 
      const char* anInstanceNamespaceP);
    ~Linux_SambaPrinterSecurityForPrinterInstance();
       
    Linux_SambaPrinterSecurityForPrinterInstance& operator=(
      const Linux_SambaPrinterSecurityForPrinterInstance& anInstance);
       
    CmpiInstance getCmpiInstance(const char** aPropertiesPP = 0) const;
    unsigned int isInstanceNameSet() const;
    void setInstanceName(const Linux_SambaPrinterSecurityForPrinterInstanceName& anInstanceName);        
    const Linux_SambaPrinterSecurityForPrinterInstanceName& getInstanceName() const;

    unsigned int isIsCurrentSet() const;
    void setIsCurrent(const CMPIUint16 aValue);
    const CMPIUint16 getIsCurrent() const;

    unsigned int isIsDefaultSet() const;
    void setIsDefault(const CMPIUint16 aValue);
    const CMPIUint16 getIsDefault() const;


  };
  
  struct Linux_SambaPrinterSecurityForPrinterInstanceEnumerationElement {

    Linux_SambaPrinterSecurityForPrinterInstance* m_elementP;
    Linux_SambaPrinterSecurityForPrinterInstanceEnumerationElement* m_nextP;

    Linux_SambaPrinterSecurityForPrinterInstanceEnumerationElement();
    ~Linux_SambaPrinterSecurityForPrinterInstanceEnumerationElement();  

  };
  

  class Linux_SambaPrinterSecurityForPrinterInstanceEnumeration {

    private:
    Linux_SambaPrinterSecurityForPrinterInstanceEnumerationElement* m_firstElementP;
    Linux_SambaPrinterSecurityForPrinterInstanceEnumerationElement* m_currentElementP;
    Linux_SambaPrinterSecurityForPrinterInstanceEnumerationElement* m_endElementP;

    public:
    Linux_SambaPrinterSecurityForPrinterInstanceEnumeration();
    Linux_SambaPrinterSecurityForPrinterInstanceEnumeration(
      const Linux_SambaPrinterSecurityForPrinterInstanceEnumeration& anInstanceEnumeration);
    ~Linux_SambaPrinterSecurityForPrinterInstanceEnumeration();

    void reset();
    bool hasNext() const;
    const Linux_SambaPrinterSecurityForPrinterInstance& getNext();
    int getSize() const;
    const Linux_SambaPrinterSecurityForPrinterInstance& getElement(int anIndex) const;  	  
    void addElement(const Linux_SambaPrinterSecurityForPrinterInstance& anInstance);

  };

}

#endif
