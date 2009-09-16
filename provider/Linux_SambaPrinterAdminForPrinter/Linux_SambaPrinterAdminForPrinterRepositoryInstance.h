// =======================================================================
// Linux_SambaPrinterAdminForPrinterRepositoryInstance.h
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
#ifndef Linux_SambaPrinterAdminForPrinterRepositoryInstance_h
#define Linux_SambaPrinterAdminForPrinterRepositoryInstance_h


#include "cmpidt.h"
#include "CmpiObjectPath.h"
#include "CmpiInstance.h"
#include "CmpiBooleanData.h"
#include "CmpiCharData.h"
#include "CmpiDateTime.h"

#include "Linux_SambaPrinterAdminForPrinterInstanceName.h"


namespace genProvider {

  class Linux_SambaPrinterAdminForPrinterRepositoryInstance {
       
    private:
    void init();
    void init(const Linux_SambaPrinterAdminForPrinterRepositoryInstance& anInstance);
    void reset();
       
    Linux_SambaPrinterAdminForPrinterInstanceName m_instanceName;
       
    struct isSetType{
      unsigned int instanceName:1;

    } isSet;
    
    public:
    Linux_SambaPrinterAdminForPrinterRepositoryInstance();
    Linux_SambaPrinterAdminForPrinterRepositoryInstance(
      const Linux_SambaPrinterAdminForPrinterRepositoryInstance& anInstance);
    Linux_SambaPrinterAdminForPrinterRepositoryInstance(
      const CmpiInstance& aCmpiInstance, 
      const char* anInstanceNamespaceP);
    ~Linux_SambaPrinterAdminForPrinterRepositoryInstance();
       
    Linux_SambaPrinterAdminForPrinterRepositoryInstance& operator=(
      const Linux_SambaPrinterAdminForPrinterRepositoryInstance& anInstance);
       
    CmpiInstance getCmpiInstance(const char** aPropertiesPP = 0) const;
    unsigned int isInstanceNameSet() const;
    void setInstanceName(const Linux_SambaPrinterAdminForPrinterInstanceName& anInstanceName);        
    const Linux_SambaPrinterAdminForPrinterInstanceName& getInstanceName() const;


  };
  
  struct Linux_SambaPrinterAdminForPrinterRepositoryInstanceEnumerationElement {

    Linux_SambaPrinterAdminForPrinterRepositoryInstance* m_elementP;
    Linux_SambaPrinterAdminForPrinterRepositoryInstanceEnumerationElement* m_nextP;

    Linux_SambaPrinterAdminForPrinterRepositoryInstanceEnumerationElement();
    ~Linux_SambaPrinterAdminForPrinterRepositoryInstanceEnumerationElement();  

  };
  

  class Linux_SambaPrinterAdminForPrinterRepositoryInstanceEnumeration {

    private:
    Linux_SambaPrinterAdminForPrinterRepositoryInstanceEnumerationElement* m_firstElementP;
    Linux_SambaPrinterAdminForPrinterRepositoryInstanceEnumerationElement* m_currentElementP;
    Linux_SambaPrinterAdminForPrinterRepositoryInstanceEnumerationElement* m_endElementP;

    public:
    Linux_SambaPrinterAdminForPrinterRepositoryInstanceEnumeration();
    Linux_SambaPrinterAdminForPrinterRepositoryInstanceEnumeration(
      const Linux_SambaPrinterAdminForPrinterRepositoryInstanceEnumeration& anInstanceEnumeration);
    ~Linux_SambaPrinterAdminForPrinterRepositoryInstanceEnumeration();

    void reset();
    bool hasNext() const;
    const Linux_SambaPrinterAdminForPrinterRepositoryInstance& getNext();
    int getSize() const;
    const Linux_SambaPrinterAdminForPrinterRepositoryInstance& getElement(int anIndex) const;  	  
    void addElement(const Linux_SambaPrinterAdminForPrinterRepositoryInstance& anInstance);

  };

}

#endif
