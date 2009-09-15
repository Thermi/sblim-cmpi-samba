// =======================================================================
// Linux_SambaPrinterSecurityOptionsRepositoryInstance.h
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
#ifndef Linux_SambaPrinterSecurityOptionsRepositoryInstance_h
#define Linux_SambaPrinterSecurityOptionsRepositoryInstance_h


#include "cmpidt.h"
#include "CmpiObjectPath.h"
#include "CmpiInstance.h"
#include "CmpiBooleanData.h"
#include "CmpiCharData.h"
#include "CmpiDateTime.h"

#include "Linux_SambaPrinterSecurityOptionsInstanceName.h"


namespace genProvider {

  class Linux_SambaPrinterSecurityOptionsRepositoryInstance {
       
    private:
    void init();
    void init(const Linux_SambaPrinterSecurityOptionsRepositoryInstance& anInstance);
    void reset();
       
    Linux_SambaPrinterSecurityOptionsInstanceName m_instanceName;
       
    struct isSetType{
      unsigned int instanceName:1;

    } isSet;
    
    public:
    Linux_SambaPrinterSecurityOptionsRepositoryInstance();
    Linux_SambaPrinterSecurityOptionsRepositoryInstance(
      const Linux_SambaPrinterSecurityOptionsRepositoryInstance& anInstance);
    Linux_SambaPrinterSecurityOptionsRepositoryInstance(
      const CmpiInstance& aCmpiInstance, 
      const char* anInstanceNamespaceP);
    ~Linux_SambaPrinterSecurityOptionsRepositoryInstance();
       
    Linux_SambaPrinterSecurityOptionsRepositoryInstance& operator=(
      const Linux_SambaPrinterSecurityOptionsRepositoryInstance& anInstance);
       
    CmpiInstance getCmpiInstance(const char** aPropertiesPP = 0) const;
    unsigned int isInstanceNameSet() const;
    void setInstanceName(const Linux_SambaPrinterSecurityOptionsInstanceName& anInstanceName);        
    const Linux_SambaPrinterSecurityOptionsInstanceName& getInstanceName() const;


  };
  
  struct Linux_SambaPrinterSecurityOptionsRepositoryInstanceEnumerationElement {

    Linux_SambaPrinterSecurityOptionsRepositoryInstance* m_elementP;
    Linux_SambaPrinterSecurityOptionsRepositoryInstanceEnumerationElement* m_nextP;

    Linux_SambaPrinterSecurityOptionsRepositoryInstanceEnumerationElement();
    ~Linux_SambaPrinterSecurityOptionsRepositoryInstanceEnumerationElement();  

  };
  

  class Linux_SambaPrinterSecurityOptionsRepositoryInstanceEnumeration {

    private:
    Linux_SambaPrinterSecurityOptionsRepositoryInstanceEnumerationElement* m_firstElementP;
    Linux_SambaPrinterSecurityOptionsRepositoryInstanceEnumerationElement* m_currentElementP;
    Linux_SambaPrinterSecurityOptionsRepositoryInstanceEnumerationElement* m_endElementP;

    public:
    Linux_SambaPrinterSecurityOptionsRepositoryInstanceEnumeration();
    Linux_SambaPrinterSecurityOptionsRepositoryInstanceEnumeration(
      const Linux_SambaPrinterSecurityOptionsRepositoryInstanceEnumeration& anInstanceEnumeration);
    ~Linux_SambaPrinterSecurityOptionsRepositoryInstanceEnumeration();

    void reset();
    bool hasNext() const;
    const Linux_SambaPrinterSecurityOptionsRepositoryInstance& getNext();
    int getSize() const;
    const Linux_SambaPrinterSecurityOptionsRepositoryInstance& getElement(int anIndex) const;  	  
    void addElement(const Linux_SambaPrinterSecurityOptionsRepositoryInstance& anInstance);

  };

}

#endif
