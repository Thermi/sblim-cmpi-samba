// =======================================================================
// Linux_SambaDenyHostsForPrinterInstance.h
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
#ifndef Linux_SambaDenyHostsForPrinterInstance_h
#define Linux_SambaDenyHostsForPrinterInstance_h


#include "cmpidt.h"
#include "CmpiObjectPath.h"
#include "CmpiInstance.h"
#include "CmpiBooleanData.h"
#include "CmpiCharData.h"
#include "CmpiDateTime.h"

#include "Linux_SambaDenyHostsForPrinterInstanceName.h"


namespace genProvider {

  class Linux_SambaDenyHostsForPrinterInstance {
       
    private:
    void init();
    void init(const Linux_SambaDenyHostsForPrinterInstance& anInstance);
    void reset();
       
    Linux_SambaDenyHostsForPrinterInstanceName m_instanceName;
       
    struct isSetType{
      unsigned int instanceName:1;

    } isSet;
    
    public:
    Linux_SambaDenyHostsForPrinterInstance();
    Linux_SambaDenyHostsForPrinterInstance(
      const Linux_SambaDenyHostsForPrinterInstance& anInstance);
    Linux_SambaDenyHostsForPrinterInstance(
      const CmpiInstance& aCmpiInstance, 
      const char* anInstanceNamespaceP);
    ~Linux_SambaDenyHostsForPrinterInstance();
       
    Linux_SambaDenyHostsForPrinterInstance& operator=(
      const Linux_SambaDenyHostsForPrinterInstance& anInstance);
       
    CmpiInstance getCmpiInstance(const char** aPropertiesPP = 0) const;
    unsigned int isInstanceNameSet() const;
    void setInstanceName(const Linux_SambaDenyHostsForPrinterInstanceName& anInstanceName);        
    const Linux_SambaDenyHostsForPrinterInstanceName& getInstanceName() const;


  };
  
  struct Linux_SambaDenyHostsForPrinterInstanceEnumerationElement {

    Linux_SambaDenyHostsForPrinterInstance* m_elementP;
    Linux_SambaDenyHostsForPrinterInstanceEnumerationElement* m_nextP;

    Linux_SambaDenyHostsForPrinterInstanceEnumerationElement();
    ~Linux_SambaDenyHostsForPrinterInstanceEnumerationElement();  

  };
  

  class Linux_SambaDenyHostsForPrinterInstanceEnumeration {

    private:
    Linux_SambaDenyHostsForPrinterInstanceEnumerationElement* m_firstElementP;
    Linux_SambaDenyHostsForPrinterInstanceEnumerationElement* m_currentElementP;
    Linux_SambaDenyHostsForPrinterInstanceEnumerationElement* m_endElementP;

    public:
    Linux_SambaDenyHostsForPrinterInstanceEnumeration();
    Linux_SambaDenyHostsForPrinterInstanceEnumeration(
      const Linux_SambaDenyHostsForPrinterInstanceEnumeration& anInstanceEnumeration);
    ~Linux_SambaDenyHostsForPrinterInstanceEnumeration();

    void reset();
    bool hasNext() const;
    const Linux_SambaDenyHostsForPrinterInstance& getNext();
    int getSize() const;
    const Linux_SambaDenyHostsForPrinterInstance& getElement(int anIndex) const;  	  
    void addElement(const Linux_SambaDenyHostsForPrinterInstance& anInstance);

  };

}

#endif
