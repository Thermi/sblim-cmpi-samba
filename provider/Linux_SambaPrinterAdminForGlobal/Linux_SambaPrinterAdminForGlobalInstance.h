// =======================================================================
// Linux_SambaPrinterAdminForGlobalInstance.h
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
#ifndef Linux_SambaPrinterAdminForGlobalInstance_h
#define Linux_SambaPrinterAdminForGlobalInstance_h


#include "cmpidt.h"
#include "CmpiObjectPath.h"
#include "CmpiInstance.h"
#include "CmpiBooleanData.h"
#include "CmpiCharData.h"
#include "CmpiDateTime.h"

#include "Linux_SambaPrinterAdminForGlobalInstanceName.h"


namespace genProvider {

  class Linux_SambaPrinterAdminForGlobalInstance {
       
    private:
    void init();
    void init(const Linux_SambaPrinterAdminForGlobalInstance& anInstance);
    void reset();
       
    Linux_SambaPrinterAdminForGlobalInstanceName m_instanceName;
       
    struct isSetType{
      unsigned int instanceName:1;

    } isSet;
    
    public:
    Linux_SambaPrinterAdminForGlobalInstance();
    Linux_SambaPrinterAdminForGlobalInstance(
      const Linux_SambaPrinterAdminForGlobalInstance& anInstance);
    Linux_SambaPrinterAdminForGlobalInstance(
      const CmpiInstance& aCmpiInstance, 
      const char* anInstanceNamespaceP);
    ~Linux_SambaPrinterAdminForGlobalInstance();
       
    Linux_SambaPrinterAdminForGlobalInstance& operator=(
      const Linux_SambaPrinterAdminForGlobalInstance& anInstance);
       
    CmpiInstance getCmpiInstance(const char** aPropertiesPP = 0) const;
    unsigned int isInstanceNameSet() const;
    void setInstanceName(const Linux_SambaPrinterAdminForGlobalInstanceName& anInstanceName);        
    const Linux_SambaPrinterAdminForGlobalInstanceName& getInstanceName() const;


  };
  
  struct Linux_SambaPrinterAdminForGlobalInstanceEnumerationElement {

    Linux_SambaPrinterAdminForGlobalInstance* m_elementP;
    Linux_SambaPrinterAdminForGlobalInstanceEnumerationElement* m_nextP;

    Linux_SambaPrinterAdminForGlobalInstanceEnumerationElement();
    ~Linux_SambaPrinterAdminForGlobalInstanceEnumerationElement();  

  };
  

  class Linux_SambaPrinterAdminForGlobalInstanceEnumeration {

    private:
    Linux_SambaPrinterAdminForGlobalInstanceEnumerationElement* m_firstElementP;
    Linux_SambaPrinterAdminForGlobalInstanceEnumerationElement* m_currentElementP;
    Linux_SambaPrinterAdminForGlobalInstanceEnumerationElement* m_endElementP;

    public:
    Linux_SambaPrinterAdminForGlobalInstanceEnumeration();
    Linux_SambaPrinterAdminForGlobalInstanceEnumeration(
      const Linux_SambaPrinterAdminForGlobalInstanceEnumeration& anInstanceEnumeration);
    ~Linux_SambaPrinterAdminForGlobalInstanceEnumeration();

    void reset();
    bool hasNext() const;
    const Linux_SambaPrinterAdminForGlobalInstance& getNext();
    int getSize() const;
    const Linux_SambaPrinterAdminForGlobalInstance& getElement(int anIndex) const;  	  
    void addElement(const Linux_SambaPrinterAdminForGlobalInstance& anInstance);

  };

}

#endif
