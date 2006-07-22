// =======================================================================
// Linux_SambaPrinterSecurityOptionsManualInstance.h
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
#ifndef Linux_SambaPrinterSecurityOptionsManualInstance_h
#define Linux_SambaPrinterSecurityOptionsManualInstance_h


#include "cmpidt.h"
#include "CmpiObjectPath.h"
#include "CmpiInstance.h"
#include "CmpiBooleanData.h"
#include "CmpiCharData.h"
#include "CmpiDateTime.h"

#include "Linux_SambaPrinterSecurityOptionsInstanceName.h"


namespace genProvider {

  class Linux_SambaPrinterSecurityOptionsManualInstance {
       
    private:
    void init();
    void init(const Linux_SambaPrinterSecurityOptionsManualInstance& anInstance);
    void reset();
       
    Linux_SambaPrinterSecurityOptionsInstanceName m_instanceName;
       
    struct isSetType{
      unsigned int instanceName:1;

    } isSet;
    
    public:
    Linux_SambaPrinterSecurityOptionsManualInstance();
    Linux_SambaPrinterSecurityOptionsManualInstance(
      const Linux_SambaPrinterSecurityOptionsManualInstance& anInstance);
    Linux_SambaPrinterSecurityOptionsManualInstance(
      const CmpiInstance& aCmpiInstance, 
      const char* anInstanceNamespaceP);
    ~Linux_SambaPrinterSecurityOptionsManualInstance();
       
    Linux_SambaPrinterSecurityOptionsManualInstance& operator=(
      const Linux_SambaPrinterSecurityOptionsManualInstance& anInstance);
       
    CmpiInstance getCmpiInstance(const char** aPropertiesPP = 0) const;
    unsigned int isInstanceNameSet() const;
    void setInstanceName(const Linux_SambaPrinterSecurityOptionsInstanceName& anInstanceName);        
    const Linux_SambaPrinterSecurityOptionsInstanceName& getInstanceName() const;


  };
  
  struct Linux_SambaPrinterSecurityOptionsManualInstanceEnumerationElement {

    Linux_SambaPrinterSecurityOptionsManualInstance* m_elementP;
    Linux_SambaPrinterSecurityOptionsManualInstanceEnumerationElement* m_nextP;

    Linux_SambaPrinterSecurityOptionsManualInstanceEnumerationElement();
    ~Linux_SambaPrinterSecurityOptionsManualInstanceEnumerationElement();  

  };
  

  class Linux_SambaPrinterSecurityOptionsManualInstanceEnumeration {

    private:
    Linux_SambaPrinterSecurityOptionsManualInstanceEnumerationElement* m_firstElementP;
    Linux_SambaPrinterSecurityOptionsManualInstanceEnumerationElement* m_currentElementP;
    Linux_SambaPrinterSecurityOptionsManualInstanceEnumerationElement* m_endElementP;

    public:
    Linux_SambaPrinterSecurityOptionsManualInstanceEnumeration();
    Linux_SambaPrinterSecurityOptionsManualInstanceEnumeration(
      const Linux_SambaPrinterSecurityOptionsManualInstanceEnumeration& anInstanceEnumeration);
    ~Linux_SambaPrinterSecurityOptionsManualInstanceEnumeration();

    void reset();
    bool hasNext() const;
    const Linux_SambaPrinterSecurityOptionsManualInstance& getNext();
    int getSize() const;
    const Linux_SambaPrinterSecurityOptionsManualInstance& getElement(int anIndex) const;  	  
    void addElement(const Linux_SambaPrinterSecurityOptionsManualInstance& anInstance);

  };

}

#endif
