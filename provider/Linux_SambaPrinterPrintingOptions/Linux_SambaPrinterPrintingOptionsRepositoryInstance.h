// =======================================================================
// Linux_SambaPrinterPrintingOptionsRepositoryInstance.h
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
#ifndef Linux_SambaPrinterPrintingOptionsRepositoryInstance_h
#define Linux_SambaPrinterPrintingOptionsRepositoryInstance_h


#include "cmpidt.h"
#include "CmpiObjectPath.h"
#include "CmpiInstance.h"
#include "CmpiBooleanData.h"
#include "CmpiCharData.h"
#include "CmpiDateTime.h"

#include "Linux_SambaPrinterPrintingOptionsInstanceName.h"


namespace genProvider {

  class Linux_SambaPrinterPrintingOptionsRepositoryInstance {
       
    private:
    void init();
    void init(const Linux_SambaPrinterPrintingOptionsRepositoryInstance& anInstance);
    void reset();
       
    Linux_SambaPrinterPrintingOptionsInstanceName m_instanceName;
       
    struct isSetType{
      unsigned int instanceName:1;

    } isSet;
    
    public:
    Linux_SambaPrinterPrintingOptionsRepositoryInstance();
    Linux_SambaPrinterPrintingOptionsRepositoryInstance(
      const Linux_SambaPrinterPrintingOptionsRepositoryInstance& anInstance);
    Linux_SambaPrinterPrintingOptionsRepositoryInstance(
      const CmpiInstance& aCmpiInstance, 
      const char* anInstanceNamespaceP);
    ~Linux_SambaPrinterPrintingOptionsRepositoryInstance();
       
    Linux_SambaPrinterPrintingOptionsRepositoryInstance& operator=(
      const Linux_SambaPrinterPrintingOptionsRepositoryInstance& anInstance);
       
    CmpiInstance getCmpiInstance(const char** aPropertiesPP = 0) const;
    unsigned int isInstanceNameSet() const;
    void setInstanceName(const Linux_SambaPrinterPrintingOptionsInstanceName& anInstanceName);        
    const Linux_SambaPrinterPrintingOptionsInstanceName& getInstanceName() const;


  };
  
  struct Linux_SambaPrinterPrintingOptionsRepositoryInstanceEnumerationElement {

    Linux_SambaPrinterPrintingOptionsRepositoryInstance* m_elementP;
    Linux_SambaPrinterPrintingOptionsRepositoryInstanceEnumerationElement* m_nextP;

    Linux_SambaPrinterPrintingOptionsRepositoryInstanceEnumerationElement();
    ~Linux_SambaPrinterPrintingOptionsRepositoryInstanceEnumerationElement();  

  };
  

  class Linux_SambaPrinterPrintingOptionsRepositoryInstanceEnumeration {

    private:
    Linux_SambaPrinterPrintingOptionsRepositoryInstanceEnumerationElement* m_firstElementP;
    Linux_SambaPrinterPrintingOptionsRepositoryInstanceEnumerationElement* m_currentElementP;
    Linux_SambaPrinterPrintingOptionsRepositoryInstanceEnumerationElement* m_endElementP;

    public:
    Linux_SambaPrinterPrintingOptionsRepositoryInstanceEnumeration();
    Linux_SambaPrinterPrintingOptionsRepositoryInstanceEnumeration(
      const Linux_SambaPrinterPrintingOptionsRepositoryInstanceEnumeration& anInstanceEnumeration);
    ~Linux_SambaPrinterPrintingOptionsRepositoryInstanceEnumeration();

    void reset();
    bool hasNext() const;
    const Linux_SambaPrinterPrintingOptionsRepositoryInstance& getNext();
    int getSize() const;
    const Linux_SambaPrinterPrintingOptionsRepositoryInstance& getElement(int anIndex) const;  	  
    void addElement(const Linux_SambaPrinterPrintingOptionsRepositoryInstance& anInstance);

  };

}

#endif
