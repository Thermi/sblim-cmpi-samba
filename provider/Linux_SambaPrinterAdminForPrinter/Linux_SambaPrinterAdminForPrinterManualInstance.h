// =======================================================================
// Linux_SambaPrinterAdminForPrinterManualInstance.h
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
#ifndef Linux_SambaPrinterAdminForPrinterManualInstance_h
#define Linux_SambaPrinterAdminForPrinterManualInstance_h


#include "cmpidt.h"
#include "CmpiObjectPath.h"
#include "CmpiInstance.h"
#include "CmpiBooleanData.h"
#include "CmpiCharData.h"
#include "CmpiDateTime.h"

#include "Linux_SambaPrinterAdminForPrinterInstanceName.h"


namespace genProvider {

  class Linux_SambaPrinterAdminForPrinterManualInstance {
       
    private:
    void init();
    void init(const Linux_SambaPrinterAdminForPrinterManualInstance& anInstance);
    void reset();
       
    Linux_SambaPrinterAdminForPrinterInstanceName m_instanceName;
       
    struct isSetType{
      unsigned int instanceName:1;

    } isSet;
    
    public:
    Linux_SambaPrinterAdminForPrinterManualInstance();
    Linux_SambaPrinterAdminForPrinterManualInstance(
      const Linux_SambaPrinterAdminForPrinterManualInstance& anInstance);
    Linux_SambaPrinterAdminForPrinterManualInstance(
      const CmpiInstance& aCmpiInstance, 
      const char* anInstanceNamespaceP);
    ~Linux_SambaPrinterAdminForPrinterManualInstance();
       
    Linux_SambaPrinterAdminForPrinterManualInstance& operator=(
      const Linux_SambaPrinterAdminForPrinterManualInstance& anInstance);
       
    CmpiInstance getCmpiInstance(const char** aPropertiesPP = 0) const;
    unsigned int isInstanceNameSet() const;
    void setInstanceName(const Linux_SambaPrinterAdminForPrinterInstanceName& anInstanceName);        
    const Linux_SambaPrinterAdminForPrinterInstanceName& getInstanceName() const;


  };
  
  struct Linux_SambaPrinterAdminForPrinterManualInstanceEnumerationElement {

    Linux_SambaPrinterAdminForPrinterManualInstance* m_elementP;
    Linux_SambaPrinterAdminForPrinterManualInstanceEnumerationElement* m_nextP;

    Linux_SambaPrinterAdminForPrinterManualInstanceEnumerationElement();
    ~Linux_SambaPrinterAdminForPrinterManualInstanceEnumerationElement();  

  };
  

  class Linux_SambaPrinterAdminForPrinterManualInstanceEnumeration {

    private:
    Linux_SambaPrinterAdminForPrinterManualInstanceEnumerationElement* m_firstElementP;
    Linux_SambaPrinterAdminForPrinterManualInstanceEnumerationElement* m_currentElementP;
    Linux_SambaPrinterAdminForPrinterManualInstanceEnumerationElement* m_endElementP;

    public:
    Linux_SambaPrinterAdminForPrinterManualInstanceEnumeration();
    Linux_SambaPrinterAdminForPrinterManualInstanceEnumeration(
      const Linux_SambaPrinterAdminForPrinterManualInstanceEnumeration& anInstanceEnumeration);
    ~Linux_SambaPrinterAdminForPrinterManualInstanceEnumeration();

    void reset();
    bool hasNext() const;
    const Linux_SambaPrinterAdminForPrinterManualInstance& getNext();
    int getSize() const;
    const Linux_SambaPrinterAdminForPrinterManualInstance& getElement(int anIndex) const;  	  
    void addElement(const Linux_SambaPrinterAdminForPrinterManualInstance& anInstance);

  };

}

#endif
