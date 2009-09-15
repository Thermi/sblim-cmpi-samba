// =======================================================================
// Linux_SambaPrinterBrowseForPrinterRepositoryInstance.h
//     created on Mon, 26 Jun 2006 using ECUTE 2.2.1
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
#ifndef Linux_SambaPrinterBrowseForPrinterRepositoryInstance_h
#define Linux_SambaPrinterBrowseForPrinterRepositoryInstance_h


#include "cmpidt.h"
#include "CmpiObjectPath.h"
#include "CmpiInstance.h"
#include "CmpiBooleanData.h"
#include "CmpiCharData.h"
#include "CmpiDateTime.h"

#include "Linux_SambaPrinterBrowseForPrinterInstanceName.h"


namespace genProvider {

  class Linux_SambaPrinterBrowseForPrinterRepositoryInstance {
       
    private:
    void init();
    void init(const Linux_SambaPrinterBrowseForPrinterRepositoryInstance& anInstance);
    void reset();
       
    Linux_SambaPrinterBrowseForPrinterInstanceName m_instanceName;
       
    struct isSetType{
      unsigned int instanceName:1;

    } isSet;
    
    public:
    Linux_SambaPrinterBrowseForPrinterRepositoryInstance();
    Linux_SambaPrinterBrowseForPrinterRepositoryInstance(
      const Linux_SambaPrinterBrowseForPrinterRepositoryInstance& anInstance);
    Linux_SambaPrinterBrowseForPrinterRepositoryInstance(
      const CmpiInstance& aCmpiInstance, 
      const char* anInstanceNamespaceP);
    ~Linux_SambaPrinterBrowseForPrinterRepositoryInstance();
       
    Linux_SambaPrinterBrowseForPrinterRepositoryInstance& operator=(
      const Linux_SambaPrinterBrowseForPrinterRepositoryInstance& anInstance);
       
    CmpiInstance getCmpiInstance(const char** aPropertiesPP = 0) const;
    unsigned int isInstanceNameSet() const;
    void setInstanceName(const Linux_SambaPrinterBrowseForPrinterInstanceName& anInstanceName);        
    const Linux_SambaPrinterBrowseForPrinterInstanceName& getInstanceName() const;


  };
  
  struct Linux_SambaPrinterBrowseForPrinterRepositoryInstanceEnumerationElement {

    Linux_SambaPrinterBrowseForPrinterRepositoryInstance* m_elementP;
    Linux_SambaPrinterBrowseForPrinterRepositoryInstanceEnumerationElement* m_nextP;

    Linux_SambaPrinterBrowseForPrinterRepositoryInstanceEnumerationElement();
    ~Linux_SambaPrinterBrowseForPrinterRepositoryInstanceEnumerationElement();  

  };
  

  class Linux_SambaPrinterBrowseForPrinterRepositoryInstanceEnumeration {

    private:
    Linux_SambaPrinterBrowseForPrinterRepositoryInstanceEnumerationElement* m_firstElementP;
    Linux_SambaPrinterBrowseForPrinterRepositoryInstanceEnumerationElement* m_currentElementP;
    Linux_SambaPrinterBrowseForPrinterRepositoryInstanceEnumerationElement* m_endElementP;

    public:
    Linux_SambaPrinterBrowseForPrinterRepositoryInstanceEnumeration();
    Linux_SambaPrinterBrowseForPrinterRepositoryInstanceEnumeration(
      const Linux_SambaPrinterBrowseForPrinterRepositoryInstanceEnumeration& anInstanceEnumeration);
    ~Linux_SambaPrinterBrowseForPrinterRepositoryInstanceEnumeration();

    void reset();
    bool hasNext() const;
    const Linux_SambaPrinterBrowseForPrinterRepositoryInstance& getNext();
    int getSize() const;
    const Linux_SambaPrinterBrowseForPrinterRepositoryInstance& getElement(int anIndex) const;  	  
    void addElement(const Linux_SambaPrinterBrowseForPrinterRepositoryInstance& anInstance);

  };

}

#endif
