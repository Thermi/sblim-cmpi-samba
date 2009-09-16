// =======================================================================
// Linux_SambaPrinterPrintingForPrinterRepositoryInstance.h
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
#ifndef Linux_SambaPrinterPrintingForPrinterRepositoryInstance_h
#define Linux_SambaPrinterPrintingForPrinterRepositoryInstance_h


#include "cmpidt.h"
#include "CmpiObjectPath.h"
#include "CmpiInstance.h"
#include "CmpiBooleanData.h"
#include "CmpiCharData.h"
#include "CmpiDateTime.h"

#include "Linux_SambaPrinterPrintingForPrinterInstanceName.h"


namespace genProvider {

  class Linux_SambaPrinterPrintingForPrinterRepositoryInstance {
       
    private:
    void init();
    void init(const Linux_SambaPrinterPrintingForPrinterRepositoryInstance& anInstance);
    void reset();
       
    Linux_SambaPrinterPrintingForPrinterInstanceName m_instanceName;
       
    struct isSetType{
      unsigned int instanceName:1;

    } isSet;
    
    public:
    Linux_SambaPrinterPrintingForPrinterRepositoryInstance();
    Linux_SambaPrinterPrintingForPrinterRepositoryInstance(
      const Linux_SambaPrinterPrintingForPrinterRepositoryInstance& anInstance);
    Linux_SambaPrinterPrintingForPrinterRepositoryInstance(
      const CmpiInstance& aCmpiInstance, 
      const char* anInstanceNamespaceP);
    ~Linux_SambaPrinterPrintingForPrinterRepositoryInstance();
       
    Linux_SambaPrinterPrintingForPrinterRepositoryInstance& operator=(
      const Linux_SambaPrinterPrintingForPrinterRepositoryInstance& anInstance);
       
    CmpiInstance getCmpiInstance(const char** aPropertiesPP = 0) const;
    unsigned int isInstanceNameSet() const;
    void setInstanceName(const Linux_SambaPrinterPrintingForPrinterInstanceName& anInstanceName);        
    const Linux_SambaPrinterPrintingForPrinterInstanceName& getInstanceName() const;


  };
  
  struct Linux_SambaPrinterPrintingForPrinterRepositoryInstanceEnumerationElement {

    Linux_SambaPrinterPrintingForPrinterRepositoryInstance* m_elementP;
    Linux_SambaPrinterPrintingForPrinterRepositoryInstanceEnumerationElement* m_nextP;

    Linux_SambaPrinterPrintingForPrinterRepositoryInstanceEnumerationElement();
    ~Linux_SambaPrinterPrintingForPrinterRepositoryInstanceEnumerationElement();  

  };
  

  class Linux_SambaPrinterPrintingForPrinterRepositoryInstanceEnumeration {

    private:
    Linux_SambaPrinterPrintingForPrinterRepositoryInstanceEnumerationElement* m_firstElementP;
    Linux_SambaPrinterPrintingForPrinterRepositoryInstanceEnumerationElement* m_currentElementP;
    Linux_SambaPrinterPrintingForPrinterRepositoryInstanceEnumerationElement* m_endElementP;

    public:
    Linux_SambaPrinterPrintingForPrinterRepositoryInstanceEnumeration();
    Linux_SambaPrinterPrintingForPrinterRepositoryInstanceEnumeration(
      const Linux_SambaPrinterPrintingForPrinterRepositoryInstanceEnumeration& anInstanceEnumeration);
    ~Linux_SambaPrinterPrintingForPrinterRepositoryInstanceEnumeration();

    void reset();
    bool hasNext() const;
    const Linux_SambaPrinterPrintingForPrinterRepositoryInstance& getNext();
    int getSize() const;
    const Linux_SambaPrinterPrintingForPrinterRepositoryInstance& getElement(int anIndex) const;  	  
    void addElement(const Linux_SambaPrinterPrintingForPrinterRepositoryInstance& anInstance);

  };

}

#endif
