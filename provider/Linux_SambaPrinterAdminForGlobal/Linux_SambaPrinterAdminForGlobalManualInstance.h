// =======================================================================
// Linux_SambaPrinterAdminForGlobalManualInstance.h
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
#ifndef Linux_SambaPrinterAdminForGlobalManualInstance_h
#define Linux_SambaPrinterAdminForGlobalManualInstance_h


#include "cmpidt.h"
#include "CmpiObjectPath.h"
#include "CmpiInstance.h"
#include "CmpiBooleanData.h"
#include "CmpiCharData.h"
#include "CmpiDateTime.h"

#include "Linux_SambaPrinterAdminForGlobalInstanceName.h"


namespace genProvider {

  class Linux_SambaPrinterAdminForGlobalManualInstance {
       
    private:
    void init();
    void init(const Linux_SambaPrinterAdminForGlobalManualInstance& anInstance);
    void reset();
       
    Linux_SambaPrinterAdminForGlobalInstanceName m_instanceName;
       
    struct isSetType{
      unsigned int instanceName:1;

    } isSet;
    
    public:
    Linux_SambaPrinterAdminForGlobalManualInstance();
    Linux_SambaPrinterAdminForGlobalManualInstance(
      const Linux_SambaPrinterAdminForGlobalManualInstance& anInstance);
    Linux_SambaPrinterAdminForGlobalManualInstance(
      const CmpiInstance& aCmpiInstance, 
      const char* anInstanceNamespaceP);
    ~Linux_SambaPrinterAdminForGlobalManualInstance();
       
    Linux_SambaPrinterAdminForGlobalManualInstance& operator=(
      const Linux_SambaPrinterAdminForGlobalManualInstance& anInstance);
       
    CmpiInstance getCmpiInstance(const char** aPropertiesPP = 0) const;
    unsigned int isInstanceNameSet() const;
    void setInstanceName(const Linux_SambaPrinterAdminForGlobalInstanceName& anInstanceName);        
    const Linux_SambaPrinterAdminForGlobalInstanceName& getInstanceName() const;


  };
  
  struct Linux_SambaPrinterAdminForGlobalManualInstanceEnumerationElement {

    Linux_SambaPrinterAdminForGlobalManualInstance* m_elementP;
    Linux_SambaPrinterAdminForGlobalManualInstanceEnumerationElement* m_nextP;

    Linux_SambaPrinterAdminForGlobalManualInstanceEnumerationElement();
    ~Linux_SambaPrinterAdminForGlobalManualInstanceEnumerationElement();  

  };
  

  class Linux_SambaPrinterAdminForGlobalManualInstanceEnumeration {

    private:
    Linux_SambaPrinterAdminForGlobalManualInstanceEnumerationElement* m_firstElementP;
    Linux_SambaPrinterAdminForGlobalManualInstanceEnumerationElement* m_currentElementP;
    Linux_SambaPrinterAdminForGlobalManualInstanceEnumerationElement* m_endElementP;

    public:
    Linux_SambaPrinterAdminForGlobalManualInstanceEnumeration();
    Linux_SambaPrinterAdminForGlobalManualInstanceEnumeration(
      const Linux_SambaPrinterAdminForGlobalManualInstanceEnumeration& anInstanceEnumeration);
    ~Linux_SambaPrinterAdminForGlobalManualInstanceEnumeration();

    void reset();
    bool hasNext() const;
    const Linux_SambaPrinterAdminForGlobalManualInstance& getNext();
    int getSize() const;
    const Linux_SambaPrinterAdminForGlobalManualInstance& getElement(int anIndex) const;  	  
    void addElement(const Linux_SambaPrinterAdminForGlobalManualInstance& anInstance);

  };

}

#endif
