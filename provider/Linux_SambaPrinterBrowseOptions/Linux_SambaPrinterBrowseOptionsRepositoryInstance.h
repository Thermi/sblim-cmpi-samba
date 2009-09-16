// =======================================================================
// Linux_SambaPrinterBrowseOptionsRepositoryInstance.h
//     created on Mon, 26 Jun 2006 using ECUTE 2.2.1
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
#ifndef Linux_SambaPrinterBrowseOptionsRepositoryInstance_h
#define Linux_SambaPrinterBrowseOptionsRepositoryInstance_h


#include "cmpidt.h"
#include "CmpiObjectPath.h"
#include "CmpiInstance.h"
#include "CmpiBooleanData.h"
#include "CmpiCharData.h"
#include "CmpiDateTime.h"

#include "Linux_SambaPrinterBrowseOptionsInstanceName.h"


namespace genProvider {

  class Linux_SambaPrinterBrowseOptionsRepositoryInstance {
       
    private:
    void init();
    void init(const Linux_SambaPrinterBrowseOptionsRepositoryInstance& anInstance);
    void reset();
       
    Linux_SambaPrinterBrowseOptionsInstanceName m_instanceName;
       
    struct isSetType{
      unsigned int instanceName:1;

    } isSet;
    
    public:
    Linux_SambaPrinterBrowseOptionsRepositoryInstance();
    Linux_SambaPrinterBrowseOptionsRepositoryInstance(
      const Linux_SambaPrinterBrowseOptionsRepositoryInstance& anInstance);
    Linux_SambaPrinterBrowseOptionsRepositoryInstance(
      const CmpiInstance& aCmpiInstance, 
      const char* anInstanceNamespaceP);
    ~Linux_SambaPrinterBrowseOptionsRepositoryInstance();
       
    Linux_SambaPrinterBrowseOptionsRepositoryInstance& operator=(
      const Linux_SambaPrinterBrowseOptionsRepositoryInstance& anInstance);
       
    CmpiInstance getCmpiInstance(const char** aPropertiesPP = 0) const;
    unsigned int isInstanceNameSet() const;
    void setInstanceName(const Linux_SambaPrinterBrowseOptionsInstanceName& anInstanceName);        
    const Linux_SambaPrinterBrowseOptionsInstanceName& getInstanceName() const;


  };
  
  struct Linux_SambaPrinterBrowseOptionsRepositoryInstanceEnumerationElement {

    Linux_SambaPrinterBrowseOptionsRepositoryInstance* m_elementP;
    Linux_SambaPrinterBrowseOptionsRepositoryInstanceEnumerationElement* m_nextP;

    Linux_SambaPrinterBrowseOptionsRepositoryInstanceEnumerationElement();
    ~Linux_SambaPrinterBrowseOptionsRepositoryInstanceEnumerationElement();  

  };
  

  class Linux_SambaPrinterBrowseOptionsRepositoryInstanceEnumeration {

    private:
    Linux_SambaPrinterBrowseOptionsRepositoryInstanceEnumerationElement* m_firstElementP;
    Linux_SambaPrinterBrowseOptionsRepositoryInstanceEnumerationElement* m_currentElementP;
    Linux_SambaPrinterBrowseOptionsRepositoryInstanceEnumerationElement* m_endElementP;

    public:
    Linux_SambaPrinterBrowseOptionsRepositoryInstanceEnumeration();
    Linux_SambaPrinterBrowseOptionsRepositoryInstanceEnumeration(
      const Linux_SambaPrinterBrowseOptionsRepositoryInstanceEnumeration& anInstanceEnumeration);
    ~Linux_SambaPrinterBrowseOptionsRepositoryInstanceEnumeration();

    void reset();
    bool hasNext() const;
    const Linux_SambaPrinterBrowseOptionsRepositoryInstance& getNext();
    int getSize() const;
    const Linux_SambaPrinterBrowseOptionsRepositoryInstance& getElement(int anIndex) const;  	  
    void addElement(const Linux_SambaPrinterBrowseOptionsRepositoryInstance& anInstance);

  };

}

#endif
