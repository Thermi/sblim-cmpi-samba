// =======================================================================
// Linux_SambaAllowHostsForPrinterRepositoryInstance.h
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
#ifndef Linux_SambaAllowHostsForPrinterRepositoryInstance_h
#define Linux_SambaAllowHostsForPrinterRepositoryInstance_h


#include "cmpidt.h"
#include "CmpiObjectPath.h"
#include "CmpiInstance.h"
#include "CmpiBooleanData.h"
#include "CmpiCharData.h"
#include "CmpiDateTime.h"

#include "Linux_SambaAllowHostsForPrinterInstanceName.h"


namespace genProvider {

  class Linux_SambaAllowHostsForPrinterRepositoryInstance {
       
    private:
    void init();
    void init(const Linux_SambaAllowHostsForPrinterRepositoryInstance& anInstance);
    void reset();
       
    Linux_SambaAllowHostsForPrinterInstanceName m_instanceName;
       
    struct isSetType{
      unsigned int instanceName:1;

    } isSet;
    
    public:
    Linux_SambaAllowHostsForPrinterRepositoryInstance();
    Linux_SambaAllowHostsForPrinterRepositoryInstance(
      const Linux_SambaAllowHostsForPrinterRepositoryInstance& anInstance);
    Linux_SambaAllowHostsForPrinterRepositoryInstance(
      const CmpiInstance& aCmpiInstance, 
      const char* anInstanceNamespaceP);
    ~Linux_SambaAllowHostsForPrinterRepositoryInstance();
       
    Linux_SambaAllowHostsForPrinterRepositoryInstance& operator=(
      const Linux_SambaAllowHostsForPrinterRepositoryInstance& anInstance);
       
    CmpiInstance getCmpiInstance(const char** aPropertiesPP = 0) const;
    unsigned int isInstanceNameSet() const;
    void setInstanceName(const Linux_SambaAllowHostsForPrinterInstanceName& anInstanceName);        
    const Linux_SambaAllowHostsForPrinterInstanceName& getInstanceName() const;


  };
  
  struct Linux_SambaAllowHostsForPrinterRepositoryInstanceEnumerationElement {

    Linux_SambaAllowHostsForPrinterRepositoryInstance* m_elementP;
    Linux_SambaAllowHostsForPrinterRepositoryInstanceEnumerationElement* m_nextP;

    Linux_SambaAllowHostsForPrinterRepositoryInstanceEnumerationElement();
    ~Linux_SambaAllowHostsForPrinterRepositoryInstanceEnumerationElement();  

  };
  

  class Linux_SambaAllowHostsForPrinterRepositoryInstanceEnumeration {

    private:
    Linux_SambaAllowHostsForPrinterRepositoryInstanceEnumerationElement* m_firstElementP;
    Linux_SambaAllowHostsForPrinterRepositoryInstanceEnumerationElement* m_currentElementP;
    Linux_SambaAllowHostsForPrinterRepositoryInstanceEnumerationElement* m_endElementP;

    public:
    Linux_SambaAllowHostsForPrinterRepositoryInstanceEnumeration();
    Linux_SambaAllowHostsForPrinterRepositoryInstanceEnumeration(
      const Linux_SambaAllowHostsForPrinterRepositoryInstanceEnumeration& anInstanceEnumeration);
    ~Linux_SambaAllowHostsForPrinterRepositoryInstanceEnumeration();

    void reset();
    bool hasNext() const;
    const Linux_SambaAllowHostsForPrinterRepositoryInstance& getNext();
    int getSize() const;
    const Linux_SambaAllowHostsForPrinterRepositoryInstance& getElement(int anIndex) const;  	  
    void addElement(const Linux_SambaAllowHostsForPrinterRepositoryInstance& anInstance);

  };

}

#endif
