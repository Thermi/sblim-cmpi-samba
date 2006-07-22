// =======================================================================
// Linux_SambaPrinterOptionsRepositoryInstance.h
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
#ifndef Linux_SambaPrinterOptionsRepositoryInstance_h
#define Linux_SambaPrinterOptionsRepositoryInstance_h


#include "cmpidt.h"
#include "CmpiObjectPath.h"
#include "CmpiInstance.h"
#include "CmpiBooleanData.h"
#include "CmpiCharData.h"
#include "CmpiDateTime.h"

#include "Linux_SambaPrinterOptionsInstanceName.h"


namespace genProvider {

  class Linux_SambaPrinterOptionsRepositoryInstance {
       
    private:
    void init();
    void init(const Linux_SambaPrinterOptionsRepositoryInstance& anInstance);
    void reset();
       
    Linux_SambaPrinterOptionsInstanceName m_instanceName;
       
    struct isSetType{
      unsigned int instanceName:1;

    } isSet;
    
    public:
    Linux_SambaPrinterOptionsRepositoryInstance();
    Linux_SambaPrinterOptionsRepositoryInstance(
      const Linux_SambaPrinterOptionsRepositoryInstance& anInstance);
    Linux_SambaPrinterOptionsRepositoryInstance(
      const CmpiInstance& aCmpiInstance, 
      const char* anInstanceNamespaceP);
    ~Linux_SambaPrinterOptionsRepositoryInstance();
       
    Linux_SambaPrinterOptionsRepositoryInstance& operator=(
      const Linux_SambaPrinterOptionsRepositoryInstance& anInstance);
       
    CmpiInstance getCmpiInstance(const char** aPropertiesPP = 0) const;
    unsigned int isInstanceNameSet() const;
    void setInstanceName(const Linux_SambaPrinterOptionsInstanceName& anInstanceName);        
    const Linux_SambaPrinterOptionsInstanceName& getInstanceName() const;


  };
  
  struct Linux_SambaPrinterOptionsRepositoryInstanceEnumerationElement {

    Linux_SambaPrinterOptionsRepositoryInstance* m_elementP;
    Linux_SambaPrinterOptionsRepositoryInstanceEnumerationElement* m_nextP;

    Linux_SambaPrinterOptionsRepositoryInstanceEnumerationElement();
    ~Linux_SambaPrinterOptionsRepositoryInstanceEnumerationElement();  

  };
  

  class Linux_SambaPrinterOptionsRepositoryInstanceEnumeration {

    private:
    Linux_SambaPrinterOptionsRepositoryInstanceEnumerationElement* m_firstElementP;
    Linux_SambaPrinterOptionsRepositoryInstanceEnumerationElement* m_currentElementP;
    Linux_SambaPrinterOptionsRepositoryInstanceEnumerationElement* m_endElementP;

    public:
    Linux_SambaPrinterOptionsRepositoryInstanceEnumeration();
    Linux_SambaPrinterOptionsRepositoryInstanceEnumeration(
      const Linux_SambaPrinterOptionsRepositoryInstanceEnumeration& anInstanceEnumeration);
    ~Linux_SambaPrinterOptionsRepositoryInstanceEnumeration();

    void reset();
    bool hasNext() const;
    const Linux_SambaPrinterOptionsRepositoryInstance& getNext();
    int getSize() const;
    const Linux_SambaPrinterOptionsRepositoryInstance& getElement(int anIndex) const;  	  
    void addElement(const Linux_SambaPrinterOptionsRepositoryInstance& anInstance);

  };

}

#endif
