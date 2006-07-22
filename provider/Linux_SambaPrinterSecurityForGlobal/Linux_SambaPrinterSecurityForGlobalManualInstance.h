// =======================================================================
// Linux_SambaPrinterSecurityForGlobalManualInstance.h
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
#ifndef Linux_SambaPrinterSecurityForGlobalManualInstance_h
#define Linux_SambaPrinterSecurityForGlobalManualInstance_h


#include "cmpidt.h"
#include "CmpiObjectPath.h"
#include "CmpiInstance.h"
#include "CmpiBooleanData.h"
#include "CmpiCharData.h"
#include "CmpiDateTime.h"

#include "Linux_SambaPrinterSecurityForGlobalInstanceName.h"


namespace genProvider {

  class Linux_SambaPrinterSecurityForGlobalManualInstance {
       
    private:
    void init();
    void init(const Linux_SambaPrinterSecurityForGlobalManualInstance& anInstance);
    void reset();
       
    Linux_SambaPrinterSecurityForGlobalInstanceName m_instanceName;
       
    struct isSetType{
      unsigned int instanceName:1;

    } isSet;
    
    public:
    Linux_SambaPrinterSecurityForGlobalManualInstance();
    Linux_SambaPrinterSecurityForGlobalManualInstance(
      const Linux_SambaPrinterSecurityForGlobalManualInstance& anInstance);
    Linux_SambaPrinterSecurityForGlobalManualInstance(
      const CmpiInstance& aCmpiInstance, 
      const char* anInstanceNamespaceP);
    ~Linux_SambaPrinterSecurityForGlobalManualInstance();
       
    Linux_SambaPrinterSecurityForGlobalManualInstance& operator=(
      const Linux_SambaPrinterSecurityForGlobalManualInstance& anInstance);
       
    CmpiInstance getCmpiInstance(const char** aPropertiesPP = 0) const;
    unsigned int isInstanceNameSet() const;
    void setInstanceName(const Linux_SambaPrinterSecurityForGlobalInstanceName& anInstanceName);        
    const Linux_SambaPrinterSecurityForGlobalInstanceName& getInstanceName() const;


  };
  
  struct Linux_SambaPrinterSecurityForGlobalManualInstanceEnumerationElement {

    Linux_SambaPrinterSecurityForGlobalManualInstance* m_elementP;
    Linux_SambaPrinterSecurityForGlobalManualInstanceEnumerationElement* m_nextP;

    Linux_SambaPrinterSecurityForGlobalManualInstanceEnumerationElement();
    ~Linux_SambaPrinterSecurityForGlobalManualInstanceEnumerationElement();  

  };
  

  class Linux_SambaPrinterSecurityForGlobalManualInstanceEnumeration {

    private:
    Linux_SambaPrinterSecurityForGlobalManualInstanceEnumerationElement* m_firstElementP;
    Linux_SambaPrinterSecurityForGlobalManualInstanceEnumerationElement* m_currentElementP;
    Linux_SambaPrinterSecurityForGlobalManualInstanceEnumerationElement* m_endElementP;

    public:
    Linux_SambaPrinterSecurityForGlobalManualInstanceEnumeration();
    Linux_SambaPrinterSecurityForGlobalManualInstanceEnumeration(
      const Linux_SambaPrinterSecurityForGlobalManualInstanceEnumeration& anInstanceEnumeration);
    ~Linux_SambaPrinterSecurityForGlobalManualInstanceEnumeration();

    void reset();
    bool hasNext() const;
    const Linux_SambaPrinterSecurityForGlobalManualInstance& getNext();
    int getSize() const;
    const Linux_SambaPrinterSecurityForGlobalManualInstance& getElement(int anIndex) const;  	  
    void addElement(const Linux_SambaPrinterSecurityForGlobalManualInstance& anInstance);

  };

}

#endif
