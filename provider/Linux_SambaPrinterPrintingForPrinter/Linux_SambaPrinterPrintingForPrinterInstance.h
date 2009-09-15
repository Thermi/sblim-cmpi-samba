// =======================================================================
// Linux_SambaPrinterPrintingForPrinterInstance.h
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
#ifndef Linux_SambaPrinterPrintingForPrinterInstance_h
#define Linux_SambaPrinterPrintingForPrinterInstance_h


#include "cmpidt.h"
#include "CmpiObjectPath.h"
#include "CmpiInstance.h"
#include "CmpiBooleanData.h"
#include "CmpiCharData.h"
#include "CmpiDateTime.h"

#include "Linux_SambaPrinterPrintingForPrinterInstanceName.h"


namespace genProvider {

  class Linux_SambaPrinterPrintingForPrinterInstance {
       
    private:
    void init();
    void init(const Linux_SambaPrinterPrintingForPrinterInstance& anInstance);
    void reset();
       
    Linux_SambaPrinterPrintingForPrinterInstanceName m_instanceName;
    CMPIUint16 m_IsCurrent;
    CMPIUint16 m_IsDefault;
       
    struct isSetType{
      unsigned int instanceName:1;
      unsigned int IsCurrent:1;
      unsigned int IsDefault:1;

    } isSet;
    
    public:
    Linux_SambaPrinterPrintingForPrinterInstance();
    Linux_SambaPrinterPrintingForPrinterInstance(
      const Linux_SambaPrinterPrintingForPrinterInstance& anInstance);
    Linux_SambaPrinterPrintingForPrinterInstance(
      const CmpiInstance& aCmpiInstance, 
      const char* anInstanceNamespaceP);
    ~Linux_SambaPrinterPrintingForPrinterInstance();
       
    Linux_SambaPrinterPrintingForPrinterInstance& operator=(
      const Linux_SambaPrinterPrintingForPrinterInstance& anInstance);
       
    CmpiInstance getCmpiInstance(const char** aPropertiesPP = 0) const;
    unsigned int isInstanceNameSet() const;
    void setInstanceName(const Linux_SambaPrinterPrintingForPrinterInstanceName& anInstanceName);        
    const Linux_SambaPrinterPrintingForPrinterInstanceName& getInstanceName() const;

    unsigned int isIsCurrentSet() const;
    void setIsCurrent(const CMPIUint16 aValue);
    const CMPIUint16 getIsCurrent() const;

    unsigned int isIsDefaultSet() const;
    void setIsDefault(const CMPIUint16 aValue);
    const CMPIUint16 getIsDefault() const;


  };
  
  struct Linux_SambaPrinterPrintingForPrinterInstanceEnumerationElement {

    Linux_SambaPrinterPrintingForPrinterInstance* m_elementP;
    Linux_SambaPrinterPrintingForPrinterInstanceEnumerationElement* m_nextP;

    Linux_SambaPrinterPrintingForPrinterInstanceEnumerationElement();
    ~Linux_SambaPrinterPrintingForPrinterInstanceEnumerationElement();  

  };
  

  class Linux_SambaPrinterPrintingForPrinterInstanceEnumeration {

    private:
    Linux_SambaPrinterPrintingForPrinterInstanceEnumerationElement* m_firstElementP;
    Linux_SambaPrinterPrintingForPrinterInstanceEnumerationElement* m_currentElementP;
    Linux_SambaPrinterPrintingForPrinterInstanceEnumerationElement* m_endElementP;

    public:
    Linux_SambaPrinterPrintingForPrinterInstanceEnumeration();
    Linux_SambaPrinterPrintingForPrinterInstanceEnumeration(
      const Linux_SambaPrinterPrintingForPrinterInstanceEnumeration& anInstanceEnumeration);
    ~Linux_SambaPrinterPrintingForPrinterInstanceEnumeration();

    void reset();
    bool hasNext() const;
    const Linux_SambaPrinterPrintingForPrinterInstance& getNext();
    int getSize() const;
    const Linux_SambaPrinterPrintingForPrinterInstance& getElement(int anIndex) const;  	  
    void addElement(const Linux_SambaPrinterPrintingForPrinterInstance& anInstance);

  };

}

#endif
