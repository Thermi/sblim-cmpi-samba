// =======================================================================
// Linux_SambaPrinterSecurityForPrinterManualInstance.h
//     created on Fri, 23 Jun 2006 using ECUTE 2.2.1
//
// Copyright (c) 2006, International Business Machines
//
// THIS FILE IS PROVIDED UNDER THE TERMS OF THE COMMON PUBLIC LICENSE
// ("AGREEMENT"). ANY USE, REPRODUCTION OR DISTRIBUTION OF THIS FILE
// CONSTITUTES RECIPIENTS ACCEPTANCE OF THE AGREEMENT.
//
// You can obtain a current copy of the Common Public License from
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
#ifndef Linux_SambaPrinterSecurityForPrinterManualInstance_h
#define Linux_SambaPrinterSecurityForPrinterManualInstance_h


#include "cmpidt.h"
#include "CmpiObjectPath.h"
#include "CmpiInstance.h"
#include "CmpiBooleanData.h"
#include "CmpiCharData.h"
#include "CmpiDateTime.h"

#include "Linux_SambaPrinterSecurityForPrinterInstanceName.h"


namespace genProvider {

  class Linux_SambaPrinterSecurityForPrinterManualInstance {
       
    private:
    void init();
    void init(const Linux_SambaPrinterSecurityForPrinterManualInstance& anInstance);
    void reset();
       
    Linux_SambaPrinterSecurityForPrinterInstanceName m_instanceName;
       
    struct isSetType{
      unsigned int instanceName:1;

    } isSet;
    
    public:
    Linux_SambaPrinterSecurityForPrinterManualInstance();
    Linux_SambaPrinterSecurityForPrinterManualInstance(
      const Linux_SambaPrinterSecurityForPrinterManualInstance& anInstance);
    Linux_SambaPrinterSecurityForPrinterManualInstance(
      const CmpiInstance& aCmpiInstance, 
      const char* anInstanceNamespaceP);
    ~Linux_SambaPrinterSecurityForPrinterManualInstance();
       
    Linux_SambaPrinterSecurityForPrinterManualInstance& operator=(
      const Linux_SambaPrinterSecurityForPrinterManualInstance& anInstance);
       
    CmpiInstance getCmpiInstance(const char** aPropertiesPP = 0) const;
    unsigned int isInstanceNameSet() const;
    void setInstanceName(const Linux_SambaPrinterSecurityForPrinterInstanceName& anInstanceName);        
    const Linux_SambaPrinterSecurityForPrinterInstanceName& getInstanceName() const;


  };
  
  struct Linux_SambaPrinterSecurityForPrinterManualInstanceEnumerationElement {

    Linux_SambaPrinterSecurityForPrinterManualInstance* m_elementP;
    Linux_SambaPrinterSecurityForPrinterManualInstanceEnumerationElement* m_nextP;

    Linux_SambaPrinterSecurityForPrinterManualInstanceEnumerationElement();
    ~Linux_SambaPrinterSecurityForPrinterManualInstanceEnumerationElement();  

  };
  

  class Linux_SambaPrinterSecurityForPrinterManualInstanceEnumeration {

    private:
    Linux_SambaPrinterSecurityForPrinterManualInstanceEnumerationElement* m_firstElementP;
    Linux_SambaPrinterSecurityForPrinterManualInstanceEnumerationElement* m_currentElementP;
    Linux_SambaPrinterSecurityForPrinterManualInstanceEnumerationElement* m_endElementP;

    public:
    Linux_SambaPrinterSecurityForPrinterManualInstanceEnumeration();
    Linux_SambaPrinterSecurityForPrinterManualInstanceEnumeration(
      const Linux_SambaPrinterSecurityForPrinterManualInstanceEnumeration& anInstanceEnumeration);
    ~Linux_SambaPrinterSecurityForPrinterManualInstanceEnumeration();

    void reset();
    bool hasNext() const;
    const Linux_SambaPrinterSecurityForPrinterManualInstance& getNext();
    int getSize() const;
    const Linux_SambaPrinterSecurityForPrinterManualInstance& getElement(int anIndex) const;  	  
    void addElement(const Linux_SambaPrinterSecurityForPrinterManualInstance& anInstance);

  };

}

#endif
