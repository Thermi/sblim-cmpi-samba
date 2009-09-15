// =======================================================================
// Linux_SambaPrinterAdminForPrinterInstance.h
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
#ifndef Linux_SambaPrinterAdminForPrinterInstance_h
#define Linux_SambaPrinterAdminForPrinterInstance_h


#include "cmpidt.h"
#include "CmpiObjectPath.h"
#include "CmpiInstance.h"
#include "CmpiBooleanData.h"
#include "CmpiCharData.h"
#include "CmpiDateTime.h"

#include "Linux_SambaPrinterAdminForPrinterInstanceName.h"


namespace genProvider {

  class Linux_SambaPrinterAdminForPrinterInstance {
       
    private:
    void init();
    void init(const Linux_SambaPrinterAdminForPrinterInstance& anInstance);
    void reset();
       
    Linux_SambaPrinterAdminForPrinterInstanceName m_instanceName;
       
    struct isSetType{
      unsigned int instanceName:1;

    } isSet;
    
    public:
    Linux_SambaPrinterAdminForPrinterInstance();
    Linux_SambaPrinterAdminForPrinterInstance(
      const Linux_SambaPrinterAdminForPrinterInstance& anInstance);
    Linux_SambaPrinterAdminForPrinterInstance(
      const CmpiInstance& aCmpiInstance, 
      const char* anInstanceNamespaceP);
    ~Linux_SambaPrinterAdminForPrinterInstance();
       
    Linux_SambaPrinterAdminForPrinterInstance& operator=(
      const Linux_SambaPrinterAdminForPrinterInstance& anInstance);
       
    CmpiInstance getCmpiInstance(const char** aPropertiesPP = 0) const;
    unsigned int isInstanceNameSet() const;
    void setInstanceName(const Linux_SambaPrinterAdminForPrinterInstanceName& anInstanceName);        
    const Linux_SambaPrinterAdminForPrinterInstanceName& getInstanceName() const;


  };
  
  struct Linux_SambaPrinterAdminForPrinterInstanceEnumerationElement {

    Linux_SambaPrinterAdminForPrinterInstance* m_elementP;
    Linux_SambaPrinterAdminForPrinterInstanceEnumerationElement* m_nextP;

    Linux_SambaPrinterAdminForPrinterInstanceEnumerationElement();
    ~Linux_SambaPrinterAdminForPrinterInstanceEnumerationElement();  

  };
  

  class Linux_SambaPrinterAdminForPrinterInstanceEnumeration {

    private:
    Linux_SambaPrinterAdminForPrinterInstanceEnumerationElement* m_firstElementP;
    Linux_SambaPrinterAdminForPrinterInstanceEnumerationElement* m_currentElementP;
    Linux_SambaPrinterAdminForPrinterInstanceEnumerationElement* m_endElementP;

    public:
    Linux_SambaPrinterAdminForPrinterInstanceEnumeration();
    Linux_SambaPrinterAdminForPrinterInstanceEnumeration(
      const Linux_SambaPrinterAdminForPrinterInstanceEnumeration& anInstanceEnumeration);
    ~Linux_SambaPrinterAdminForPrinterInstanceEnumeration();

    void reset();
    bool hasNext() const;
    const Linux_SambaPrinterAdminForPrinterInstance& getNext();
    int getSize() const;
    const Linux_SambaPrinterAdminForPrinterInstance& getElement(int anIndex) const;  	  
    void addElement(const Linux_SambaPrinterAdminForPrinterInstance& anInstance);

  };

}

#endif
