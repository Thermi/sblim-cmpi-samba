// =======================================================================
// Linux_SambaPrinterForServiceRepositoryInstance.h
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
#ifndef Linux_SambaPrinterForServiceRepositoryInstance_h
#define Linux_SambaPrinterForServiceRepositoryInstance_h


#include "cmpidt.h"
#include "CmpiObjectPath.h"
#include "CmpiInstance.h"
#include "CmpiBooleanData.h"
#include "CmpiCharData.h"
#include "CmpiDateTime.h"

#include "Linux_SambaPrinterForServiceInstanceName.h"


namespace genProvider {

  class Linux_SambaPrinterForServiceRepositoryInstance {
       
    private:
    void init();
    void init(const Linux_SambaPrinterForServiceRepositoryInstance& anInstance);
    void reset();
       
    Linux_SambaPrinterForServiceInstanceName m_instanceName;
       
    struct isSetType{
      unsigned int instanceName:1;

    } isSet;
    
    public:
    Linux_SambaPrinterForServiceRepositoryInstance();
    Linux_SambaPrinterForServiceRepositoryInstance(
      const Linux_SambaPrinterForServiceRepositoryInstance& anInstance);
    Linux_SambaPrinterForServiceRepositoryInstance(
      const CmpiInstance& aCmpiInstance, 
      const char* anInstanceNamespaceP);
    ~Linux_SambaPrinterForServiceRepositoryInstance();
       
    Linux_SambaPrinterForServiceRepositoryInstance& operator=(
      const Linux_SambaPrinterForServiceRepositoryInstance& anInstance);
       
    CmpiInstance getCmpiInstance(const char** aPropertiesPP = 0) const;
    unsigned int isInstanceNameSet() const;
    void setInstanceName(const Linux_SambaPrinterForServiceInstanceName& anInstanceName);        
    const Linux_SambaPrinterForServiceInstanceName& getInstanceName() const;


  };
  
  struct Linux_SambaPrinterForServiceRepositoryInstanceEnumerationElement {

    Linux_SambaPrinterForServiceRepositoryInstance* m_elementP;
    Linux_SambaPrinterForServiceRepositoryInstanceEnumerationElement* m_nextP;

    Linux_SambaPrinterForServiceRepositoryInstanceEnumerationElement();
    ~Linux_SambaPrinterForServiceRepositoryInstanceEnumerationElement();  

  };
  

  class Linux_SambaPrinterForServiceRepositoryInstanceEnumeration {

    private:
    Linux_SambaPrinterForServiceRepositoryInstanceEnumerationElement* m_firstElementP;
    Linux_SambaPrinterForServiceRepositoryInstanceEnumerationElement* m_currentElementP;
    Linux_SambaPrinterForServiceRepositoryInstanceEnumerationElement* m_endElementP;

    public:
    Linux_SambaPrinterForServiceRepositoryInstanceEnumeration();
    Linux_SambaPrinterForServiceRepositoryInstanceEnumeration(
      const Linux_SambaPrinterForServiceRepositoryInstanceEnumeration& anInstanceEnumeration);
    ~Linux_SambaPrinterForServiceRepositoryInstanceEnumeration();

    void reset();
    bool hasNext() const;
    const Linux_SambaPrinterForServiceRepositoryInstance& getNext();
    int getSize() const;
    const Linux_SambaPrinterForServiceRepositoryInstance& getElement(int anIndex) const;  	  
    void addElement(const Linux_SambaPrinterForServiceRepositoryInstance& anInstance);

  };

}

#endif
