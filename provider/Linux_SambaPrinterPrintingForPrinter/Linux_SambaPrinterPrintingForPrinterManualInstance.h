// =======================================================================
// Linux_SambaPrinterPrintingForPrinterManualInstance.h
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
#ifndef Linux_SambaPrinterPrintingForPrinterManualInstance_h
#define Linux_SambaPrinterPrintingForPrinterManualInstance_h


#include "cmpidt.h"
#include "CmpiObjectPath.h"
#include "CmpiInstance.h"
#include "CmpiBooleanData.h"
#include "CmpiCharData.h"
#include "CmpiDateTime.h"

#include "Linux_SambaPrinterPrintingForPrinterInstanceName.h"


namespace genProvider {

  class Linux_SambaPrinterPrintingForPrinterManualInstance {
       
    private:
    void init();
    void init(const Linux_SambaPrinterPrintingForPrinterManualInstance& anInstance);
    void reset();
       
    Linux_SambaPrinterPrintingForPrinterInstanceName m_instanceName;
       
    struct isSetType{
      unsigned int instanceName:1;

    } isSet;
    
    public:
    Linux_SambaPrinterPrintingForPrinterManualInstance();
    Linux_SambaPrinterPrintingForPrinterManualInstance(
      const Linux_SambaPrinterPrintingForPrinterManualInstance& anInstance);
    Linux_SambaPrinterPrintingForPrinterManualInstance(
      const CmpiInstance& aCmpiInstance, 
      const char* anInstanceNamespaceP);
    ~Linux_SambaPrinterPrintingForPrinterManualInstance();
       
    Linux_SambaPrinterPrintingForPrinterManualInstance& operator=(
      const Linux_SambaPrinterPrintingForPrinterManualInstance& anInstance);
       
    CmpiInstance getCmpiInstance(const char** aPropertiesPP = 0) const;
    unsigned int isInstanceNameSet() const;
    void setInstanceName(const Linux_SambaPrinterPrintingForPrinterInstanceName& anInstanceName);        
    const Linux_SambaPrinterPrintingForPrinterInstanceName& getInstanceName() const;


  };
  
  struct Linux_SambaPrinterPrintingForPrinterManualInstanceEnumerationElement {

    Linux_SambaPrinterPrintingForPrinterManualInstance* m_elementP;
    Linux_SambaPrinterPrintingForPrinterManualInstanceEnumerationElement* m_nextP;

    Linux_SambaPrinterPrintingForPrinterManualInstanceEnumerationElement();
    ~Linux_SambaPrinterPrintingForPrinterManualInstanceEnumerationElement();  

  };
  

  class Linux_SambaPrinterPrintingForPrinterManualInstanceEnumeration {

    private:
    Linux_SambaPrinterPrintingForPrinterManualInstanceEnumerationElement* m_firstElementP;
    Linux_SambaPrinterPrintingForPrinterManualInstanceEnumerationElement* m_currentElementP;
    Linux_SambaPrinterPrintingForPrinterManualInstanceEnumerationElement* m_endElementP;

    public:
    Linux_SambaPrinterPrintingForPrinterManualInstanceEnumeration();
    Linux_SambaPrinterPrintingForPrinterManualInstanceEnumeration(
      const Linux_SambaPrinterPrintingForPrinterManualInstanceEnumeration& anInstanceEnumeration);
    ~Linux_SambaPrinterPrintingForPrinterManualInstanceEnumeration();

    void reset();
    bool hasNext() const;
    const Linux_SambaPrinterPrintingForPrinterManualInstance& getNext();
    int getSize() const;
    const Linux_SambaPrinterPrintingForPrinterManualInstance& getElement(int anIndex) const;  	  
    void addElement(const Linux_SambaPrinterPrintingForPrinterManualInstance& anInstance);

  };

}

#endif
