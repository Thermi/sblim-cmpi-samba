// =======================================================================
// Linux_SambaDenyHostsForPrinterManualInstance.h
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
#ifndef Linux_SambaDenyHostsForPrinterManualInstance_h
#define Linux_SambaDenyHostsForPrinterManualInstance_h


#include "cmpidt.h"
#include "CmpiObjectPath.h"
#include "CmpiInstance.h"
#include "CmpiBooleanData.h"
#include "CmpiCharData.h"
#include "CmpiDateTime.h"

#include "Linux_SambaDenyHostsForPrinterInstanceName.h"


namespace genProvider {

  class Linux_SambaDenyHostsForPrinterManualInstance {
       
    private:
    void init();
    void init(const Linux_SambaDenyHostsForPrinterManualInstance& anInstance);
    void reset();
       
    Linux_SambaDenyHostsForPrinterInstanceName m_instanceName;
       
    struct isSetType{
      unsigned int instanceName:1;

    } isSet;
    
    public:
    Linux_SambaDenyHostsForPrinterManualInstance();
    Linux_SambaDenyHostsForPrinterManualInstance(
      const Linux_SambaDenyHostsForPrinterManualInstance& anInstance);
    Linux_SambaDenyHostsForPrinterManualInstance(
      const CmpiInstance& aCmpiInstance, 
      const char* anInstanceNamespaceP);
    ~Linux_SambaDenyHostsForPrinterManualInstance();
       
    Linux_SambaDenyHostsForPrinterManualInstance& operator=(
      const Linux_SambaDenyHostsForPrinterManualInstance& anInstance);
       
    CmpiInstance getCmpiInstance(const char** aPropertiesPP = 0) const;
    unsigned int isInstanceNameSet() const;
    void setInstanceName(const Linux_SambaDenyHostsForPrinterInstanceName& anInstanceName);        
    const Linux_SambaDenyHostsForPrinterInstanceName& getInstanceName() const;


  };
  
  struct Linux_SambaDenyHostsForPrinterManualInstanceEnumerationElement {

    Linux_SambaDenyHostsForPrinterManualInstance* m_elementP;
    Linux_SambaDenyHostsForPrinterManualInstanceEnumerationElement* m_nextP;

    Linux_SambaDenyHostsForPrinterManualInstanceEnumerationElement();
    ~Linux_SambaDenyHostsForPrinterManualInstanceEnumerationElement();  

  };
  

  class Linux_SambaDenyHostsForPrinterManualInstanceEnumeration {

    private:
    Linux_SambaDenyHostsForPrinterManualInstanceEnumerationElement* m_firstElementP;
    Linux_SambaDenyHostsForPrinterManualInstanceEnumerationElement* m_currentElementP;
    Linux_SambaDenyHostsForPrinterManualInstanceEnumerationElement* m_endElementP;

    public:
    Linux_SambaDenyHostsForPrinterManualInstanceEnumeration();
    Linux_SambaDenyHostsForPrinterManualInstanceEnumeration(
      const Linux_SambaDenyHostsForPrinterManualInstanceEnumeration& anInstanceEnumeration);
    ~Linux_SambaDenyHostsForPrinterManualInstanceEnumeration();

    void reset();
    bool hasNext() const;
    const Linux_SambaDenyHostsForPrinterManualInstance& getNext();
    int getSize() const;
    const Linux_SambaDenyHostsForPrinterManualInstance& getElement(int anIndex) const;  	  
    void addElement(const Linux_SambaDenyHostsForPrinterManualInstance& anInstance);

  };

}

#endif
