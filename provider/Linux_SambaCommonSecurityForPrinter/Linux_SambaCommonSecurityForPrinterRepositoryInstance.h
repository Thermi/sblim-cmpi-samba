// =======================================================================
// Linux_SambaCommonSecurityForPrinterRepositoryInstance.h
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
#ifndef Linux_SambaCommonSecurityForPrinterRepositoryInstance_h
#define Linux_SambaCommonSecurityForPrinterRepositoryInstance_h


#include "cmpidt.h"
#include "CmpiObjectPath.h"
#include "CmpiInstance.h"
#include "CmpiBooleanData.h"
#include "CmpiCharData.h"
#include "CmpiDateTime.h"

#include "Linux_SambaCommonSecurityForPrinterInstanceName.h"


namespace genProvider {

  class Linux_SambaCommonSecurityForPrinterRepositoryInstance {
       
    private:
    void init();
    void init(const Linux_SambaCommonSecurityForPrinterRepositoryInstance& anInstance);
    void reset();
       
    Linux_SambaCommonSecurityForPrinterInstanceName m_instanceName;
       
    struct isSetType{
      unsigned int instanceName:1;

    } isSet;
    
    public:
    Linux_SambaCommonSecurityForPrinterRepositoryInstance();
    Linux_SambaCommonSecurityForPrinterRepositoryInstance(
      const Linux_SambaCommonSecurityForPrinterRepositoryInstance& anInstance);
    Linux_SambaCommonSecurityForPrinterRepositoryInstance(
      const CmpiInstance& aCmpiInstance, 
      const char* anInstanceNamespaceP);
    ~Linux_SambaCommonSecurityForPrinterRepositoryInstance();
       
    Linux_SambaCommonSecurityForPrinterRepositoryInstance& operator=(
      const Linux_SambaCommonSecurityForPrinterRepositoryInstance& anInstance);
       
    CmpiInstance getCmpiInstance(const char** aPropertiesPP = 0) const;
    unsigned int isInstanceNameSet() const;
    void setInstanceName(const Linux_SambaCommonSecurityForPrinterInstanceName& anInstanceName);        
    const Linux_SambaCommonSecurityForPrinterInstanceName& getInstanceName() const;


  };
  
  struct Linux_SambaCommonSecurityForPrinterRepositoryInstanceEnumerationElement {

    Linux_SambaCommonSecurityForPrinterRepositoryInstance* m_elementP;
    Linux_SambaCommonSecurityForPrinterRepositoryInstanceEnumerationElement* m_nextP;

    Linux_SambaCommonSecurityForPrinterRepositoryInstanceEnumerationElement();
    ~Linux_SambaCommonSecurityForPrinterRepositoryInstanceEnumerationElement();  

  };
  

  class Linux_SambaCommonSecurityForPrinterRepositoryInstanceEnumeration {

    private:
    Linux_SambaCommonSecurityForPrinterRepositoryInstanceEnumerationElement* m_firstElementP;
    Linux_SambaCommonSecurityForPrinterRepositoryInstanceEnumerationElement* m_currentElementP;
    Linux_SambaCommonSecurityForPrinterRepositoryInstanceEnumerationElement* m_endElementP;

    public:
    Linux_SambaCommonSecurityForPrinterRepositoryInstanceEnumeration();
    Linux_SambaCommonSecurityForPrinterRepositoryInstanceEnumeration(
      const Linux_SambaCommonSecurityForPrinterRepositoryInstanceEnumeration& anInstanceEnumeration);
    ~Linux_SambaCommonSecurityForPrinterRepositoryInstanceEnumeration();

    void reset();
    bool hasNext() const;
    const Linux_SambaCommonSecurityForPrinterRepositoryInstance& getNext();
    int getSize() const;
    const Linux_SambaCommonSecurityForPrinterRepositoryInstance& getElement(int anIndex) const;  	  
    void addElement(const Linux_SambaCommonSecurityForPrinterRepositoryInstance& anInstance);

  };

}

#endif
