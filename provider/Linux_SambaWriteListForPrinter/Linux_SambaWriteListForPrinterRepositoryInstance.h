// =======================================================================
// Linux_SambaWriteListForPrinterRepositoryInstance.h
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
#ifndef Linux_SambaWriteListForPrinterRepositoryInstance_h
#define Linux_SambaWriteListForPrinterRepositoryInstance_h


#include "cmpidt.h"
#include "CmpiObjectPath.h"
#include "CmpiInstance.h"
#include "CmpiBooleanData.h"
#include "CmpiCharData.h"
#include "CmpiDateTime.h"

#include "Linux_SambaWriteListForPrinterInstanceName.h"


namespace genProvider {

  class Linux_SambaWriteListForPrinterRepositoryInstance {
       
    private:
    void init();
    void init(const Linux_SambaWriteListForPrinterRepositoryInstance& anInstance);
    void reset();
       
    Linux_SambaWriteListForPrinterInstanceName m_instanceName;
       
    struct isSetType{
      unsigned int instanceName:1;

    } isSet;
    
    public:
    Linux_SambaWriteListForPrinterRepositoryInstance();
    Linux_SambaWriteListForPrinterRepositoryInstance(
      const Linux_SambaWriteListForPrinterRepositoryInstance& anInstance);
    Linux_SambaWriteListForPrinterRepositoryInstance(
      const CmpiInstance& aCmpiInstance, 
      const char* anInstanceNamespaceP);
    ~Linux_SambaWriteListForPrinterRepositoryInstance();
       
    Linux_SambaWriteListForPrinterRepositoryInstance& operator=(
      const Linux_SambaWriteListForPrinterRepositoryInstance& anInstance);
       
    CmpiInstance getCmpiInstance(const char** aPropertiesPP = 0) const;
    unsigned int isInstanceNameSet() const;
    void setInstanceName(const Linux_SambaWriteListForPrinterInstanceName& anInstanceName);        
    const Linux_SambaWriteListForPrinterInstanceName& getInstanceName() const;


  };
  
  struct Linux_SambaWriteListForPrinterRepositoryInstanceEnumerationElement {

    Linux_SambaWriteListForPrinterRepositoryInstance* m_elementP;
    Linux_SambaWriteListForPrinterRepositoryInstanceEnumerationElement* m_nextP;

    Linux_SambaWriteListForPrinterRepositoryInstanceEnumerationElement();
    ~Linux_SambaWriteListForPrinterRepositoryInstanceEnumerationElement();  

  };
  

  class Linux_SambaWriteListForPrinterRepositoryInstanceEnumeration {

    private:
    Linux_SambaWriteListForPrinterRepositoryInstanceEnumerationElement* m_firstElementP;
    Linux_SambaWriteListForPrinterRepositoryInstanceEnumerationElement* m_currentElementP;
    Linux_SambaWriteListForPrinterRepositoryInstanceEnumerationElement* m_endElementP;

    public:
    Linux_SambaWriteListForPrinterRepositoryInstanceEnumeration();
    Linux_SambaWriteListForPrinterRepositoryInstanceEnumeration(
      const Linux_SambaWriteListForPrinterRepositoryInstanceEnumeration& anInstanceEnumeration);
    ~Linux_SambaWriteListForPrinterRepositoryInstanceEnumeration();

    void reset();
    bool hasNext() const;
    const Linux_SambaWriteListForPrinterRepositoryInstance& getNext();
    int getSize() const;
    const Linux_SambaWriteListForPrinterRepositoryInstance& getElement(int anIndex) const;  	  
    void addElement(const Linux_SambaWriteListForPrinterRepositoryInstance& anInstance);

  };

}

#endif
