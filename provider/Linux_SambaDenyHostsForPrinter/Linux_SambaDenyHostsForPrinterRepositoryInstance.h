// =======================================================================
// Linux_SambaDenyHostsForPrinterRepositoryInstance.h
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
#ifndef Linux_SambaDenyHostsForPrinterRepositoryInstance_h
#define Linux_SambaDenyHostsForPrinterRepositoryInstance_h


#include "cmpidt.h"
#include "CmpiObjectPath.h"
#include "CmpiInstance.h"
#include "CmpiBooleanData.h"
#include "CmpiCharData.h"
#include "CmpiDateTime.h"

#include "Linux_SambaDenyHostsForPrinterInstanceName.h"


namespace genProvider {

  class Linux_SambaDenyHostsForPrinterRepositoryInstance {
       
    private:
    void init();
    void init(const Linux_SambaDenyHostsForPrinterRepositoryInstance& anInstance);
    void reset();
       
    Linux_SambaDenyHostsForPrinterInstanceName m_instanceName;
       
    struct isSetType{
      unsigned int instanceName:1;

    } isSet;
    
    public:
    Linux_SambaDenyHostsForPrinterRepositoryInstance();
    Linux_SambaDenyHostsForPrinterRepositoryInstance(
      const Linux_SambaDenyHostsForPrinterRepositoryInstance& anInstance);
    Linux_SambaDenyHostsForPrinterRepositoryInstance(
      const CmpiInstance& aCmpiInstance, 
      const char* anInstanceNamespaceP);
    ~Linux_SambaDenyHostsForPrinterRepositoryInstance();
       
    Linux_SambaDenyHostsForPrinterRepositoryInstance& operator=(
      const Linux_SambaDenyHostsForPrinterRepositoryInstance& anInstance);
       
    CmpiInstance getCmpiInstance(const char** aPropertiesPP = 0) const;
    unsigned int isInstanceNameSet() const;
    void setInstanceName(const Linux_SambaDenyHostsForPrinterInstanceName& anInstanceName);        
    const Linux_SambaDenyHostsForPrinterInstanceName& getInstanceName() const;


  };
  
  struct Linux_SambaDenyHostsForPrinterRepositoryInstanceEnumerationElement {

    Linux_SambaDenyHostsForPrinterRepositoryInstance* m_elementP;
    Linux_SambaDenyHostsForPrinterRepositoryInstanceEnumerationElement* m_nextP;

    Linux_SambaDenyHostsForPrinterRepositoryInstanceEnumerationElement();
    ~Linux_SambaDenyHostsForPrinterRepositoryInstanceEnumerationElement();  

  };
  

  class Linux_SambaDenyHostsForPrinterRepositoryInstanceEnumeration {

    private:
    Linux_SambaDenyHostsForPrinterRepositoryInstanceEnumerationElement* m_firstElementP;
    Linux_SambaDenyHostsForPrinterRepositoryInstanceEnumerationElement* m_currentElementP;
    Linux_SambaDenyHostsForPrinterRepositoryInstanceEnumerationElement* m_endElementP;

    public:
    Linux_SambaDenyHostsForPrinterRepositoryInstanceEnumeration();
    Linux_SambaDenyHostsForPrinterRepositoryInstanceEnumeration(
      const Linux_SambaDenyHostsForPrinterRepositoryInstanceEnumeration& anInstanceEnumeration);
    ~Linux_SambaDenyHostsForPrinterRepositoryInstanceEnumeration();

    void reset();
    bool hasNext() const;
    const Linux_SambaDenyHostsForPrinterRepositoryInstance& getNext();
    int getSize() const;
    const Linux_SambaDenyHostsForPrinterRepositoryInstance& getElement(int anIndex) const;  	  
    void addElement(const Linux_SambaDenyHostsForPrinterRepositoryInstance& anInstance);

  };

}

#endif
