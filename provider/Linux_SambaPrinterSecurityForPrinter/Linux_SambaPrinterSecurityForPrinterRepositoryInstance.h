// =======================================================================
// Linux_SambaPrinterSecurityForPrinterRepositoryInstance.h
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
#ifndef Linux_SambaPrinterSecurityForPrinterRepositoryInstance_h
#define Linux_SambaPrinterSecurityForPrinterRepositoryInstance_h


#include "cmpidt.h"
#include "CmpiObjectPath.h"
#include "CmpiInstance.h"
#include "CmpiBooleanData.h"
#include "CmpiCharData.h"
#include "CmpiDateTime.h"

#include "Linux_SambaPrinterSecurityForPrinterInstanceName.h"


namespace genProvider {

  class Linux_SambaPrinterSecurityForPrinterRepositoryInstance {
       
    private:
    void init();
    void init(const Linux_SambaPrinterSecurityForPrinterRepositoryInstance& anInstance);
    void reset();
       
    Linux_SambaPrinterSecurityForPrinterInstanceName m_instanceName;
       
    struct isSetType{
      unsigned int instanceName:1;

    } isSet;
    
    public:
    Linux_SambaPrinterSecurityForPrinterRepositoryInstance();
    Linux_SambaPrinterSecurityForPrinterRepositoryInstance(
      const Linux_SambaPrinterSecurityForPrinterRepositoryInstance& anInstance);
    Linux_SambaPrinterSecurityForPrinterRepositoryInstance(
      const CmpiInstance& aCmpiInstance, 
      const char* anInstanceNamespaceP);
    ~Linux_SambaPrinterSecurityForPrinterRepositoryInstance();
       
    Linux_SambaPrinterSecurityForPrinterRepositoryInstance& operator=(
      const Linux_SambaPrinterSecurityForPrinterRepositoryInstance& anInstance);
       
    CmpiInstance getCmpiInstance(const char** aPropertiesPP = 0) const;
    unsigned int isInstanceNameSet() const;
    void setInstanceName(const Linux_SambaPrinterSecurityForPrinterInstanceName& anInstanceName);        
    const Linux_SambaPrinterSecurityForPrinterInstanceName& getInstanceName() const;


  };
  
  struct Linux_SambaPrinterSecurityForPrinterRepositoryInstanceEnumerationElement {

    Linux_SambaPrinterSecurityForPrinterRepositoryInstance* m_elementP;
    Linux_SambaPrinterSecurityForPrinterRepositoryInstanceEnumerationElement* m_nextP;

    Linux_SambaPrinterSecurityForPrinterRepositoryInstanceEnumerationElement();
    ~Linux_SambaPrinterSecurityForPrinterRepositoryInstanceEnumerationElement();  

  };
  

  class Linux_SambaPrinterSecurityForPrinterRepositoryInstanceEnumeration {

    private:
    Linux_SambaPrinterSecurityForPrinterRepositoryInstanceEnumerationElement* m_firstElementP;
    Linux_SambaPrinterSecurityForPrinterRepositoryInstanceEnumerationElement* m_currentElementP;
    Linux_SambaPrinterSecurityForPrinterRepositoryInstanceEnumerationElement* m_endElementP;

    public:
    Linux_SambaPrinterSecurityForPrinterRepositoryInstanceEnumeration();
    Linux_SambaPrinterSecurityForPrinterRepositoryInstanceEnumeration(
      const Linux_SambaPrinterSecurityForPrinterRepositoryInstanceEnumeration& anInstanceEnumeration);
    ~Linux_SambaPrinterSecurityForPrinterRepositoryInstanceEnumeration();

    void reset();
    bool hasNext() const;
    const Linux_SambaPrinterSecurityForPrinterRepositoryInstance& getNext();
    int getSize() const;
    const Linux_SambaPrinterSecurityForPrinterRepositoryInstance& getElement(int anIndex) const;  	  
    void addElement(const Linux_SambaPrinterSecurityForPrinterRepositoryInstance& anInstance);

  };

}

#endif
