// =======================================================================
// Linux_SambaPrinterSecurityForGlobalRepositoryInstance.h
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
#ifndef Linux_SambaPrinterSecurityForGlobalRepositoryInstance_h
#define Linux_SambaPrinterSecurityForGlobalRepositoryInstance_h


#include "cmpidt.h"
#include "CmpiObjectPath.h"
#include "CmpiInstance.h"
#include "CmpiBooleanData.h"
#include "CmpiCharData.h"
#include "CmpiDateTime.h"

#include "Linux_SambaPrinterSecurityForGlobalInstanceName.h"


namespace genProvider {

  class Linux_SambaPrinterSecurityForGlobalRepositoryInstance {
       
    private:
    void init();
    void init(const Linux_SambaPrinterSecurityForGlobalRepositoryInstance& anInstance);
    void reset();
       
    Linux_SambaPrinterSecurityForGlobalInstanceName m_instanceName;
       
    struct isSetType{
      unsigned int instanceName:1;

    } isSet;
    
    public:
    Linux_SambaPrinterSecurityForGlobalRepositoryInstance();
    Linux_SambaPrinterSecurityForGlobalRepositoryInstance(
      const Linux_SambaPrinterSecurityForGlobalRepositoryInstance& anInstance);
    Linux_SambaPrinterSecurityForGlobalRepositoryInstance(
      const CmpiInstance& aCmpiInstance, 
      const char* anInstanceNamespaceP);
    ~Linux_SambaPrinterSecurityForGlobalRepositoryInstance();
       
    Linux_SambaPrinterSecurityForGlobalRepositoryInstance& operator=(
      const Linux_SambaPrinterSecurityForGlobalRepositoryInstance& anInstance);
       
    CmpiInstance getCmpiInstance(const char** aPropertiesPP = 0) const;
    unsigned int isInstanceNameSet() const;
    void setInstanceName(const Linux_SambaPrinterSecurityForGlobalInstanceName& anInstanceName);        
    const Linux_SambaPrinterSecurityForGlobalInstanceName& getInstanceName() const;


  };
  
  struct Linux_SambaPrinterSecurityForGlobalRepositoryInstanceEnumerationElement {

    Linux_SambaPrinterSecurityForGlobalRepositoryInstance* m_elementP;
    Linux_SambaPrinterSecurityForGlobalRepositoryInstanceEnumerationElement* m_nextP;

    Linux_SambaPrinterSecurityForGlobalRepositoryInstanceEnumerationElement();
    ~Linux_SambaPrinterSecurityForGlobalRepositoryInstanceEnumerationElement();  

  };
  

  class Linux_SambaPrinterSecurityForGlobalRepositoryInstanceEnumeration {

    private:
    Linux_SambaPrinterSecurityForGlobalRepositoryInstanceEnumerationElement* m_firstElementP;
    Linux_SambaPrinterSecurityForGlobalRepositoryInstanceEnumerationElement* m_currentElementP;
    Linux_SambaPrinterSecurityForGlobalRepositoryInstanceEnumerationElement* m_endElementP;

    public:
    Linux_SambaPrinterSecurityForGlobalRepositoryInstanceEnumeration();
    Linux_SambaPrinterSecurityForGlobalRepositoryInstanceEnumeration(
      const Linux_SambaPrinterSecurityForGlobalRepositoryInstanceEnumeration& anInstanceEnumeration);
    ~Linux_SambaPrinterSecurityForGlobalRepositoryInstanceEnumeration();

    void reset();
    bool hasNext() const;
    const Linux_SambaPrinterSecurityForGlobalRepositoryInstance& getNext();
    int getSize() const;
    const Linux_SambaPrinterSecurityForGlobalRepositoryInstance& getElement(int anIndex) const;  	  
    void addElement(const Linux_SambaPrinterSecurityForGlobalRepositoryInstance& anInstance);

  };

}

#endif
