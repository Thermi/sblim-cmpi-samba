// =======================================================================
// Linux_SambaAllowHostsForPrinterInstance.h
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
#ifndef Linux_SambaAllowHostsForPrinterInstance_h
#define Linux_SambaAllowHostsForPrinterInstance_h


#include "cmpidt.h"
#include "CmpiObjectPath.h"
#include "CmpiInstance.h"
#include "CmpiBooleanData.h"
#include "CmpiCharData.h"
#include "CmpiDateTime.h"

#include "Linux_SambaAllowHostsForPrinterInstanceName.h"


namespace genProvider {

  class Linux_SambaAllowHostsForPrinterInstance {
       
    private:
    void init();
    void init(const Linux_SambaAllowHostsForPrinterInstance& anInstance);
    void reset();
       
    Linux_SambaAllowHostsForPrinterInstanceName m_instanceName;
       
    struct isSetType{
      unsigned int instanceName:1;

    } isSet;
    
    public:
    Linux_SambaAllowHostsForPrinterInstance();
    Linux_SambaAllowHostsForPrinterInstance(
      const Linux_SambaAllowHostsForPrinterInstance& anInstance);
    Linux_SambaAllowHostsForPrinterInstance(
      const CmpiInstance& aCmpiInstance, 
      const char* anInstanceNamespaceP);
    ~Linux_SambaAllowHostsForPrinterInstance();
       
    Linux_SambaAllowHostsForPrinterInstance& operator=(
      const Linux_SambaAllowHostsForPrinterInstance& anInstance);
       
    CmpiInstance getCmpiInstance(const char** aPropertiesPP = 0) const;
    unsigned int isInstanceNameSet() const;
    void setInstanceName(const Linux_SambaAllowHostsForPrinterInstanceName& anInstanceName);        
    const Linux_SambaAllowHostsForPrinterInstanceName& getInstanceName() const;


  };
  
  struct Linux_SambaAllowHostsForPrinterInstanceEnumerationElement {

    Linux_SambaAllowHostsForPrinterInstance* m_elementP;
    Linux_SambaAllowHostsForPrinterInstanceEnumerationElement* m_nextP;

    Linux_SambaAllowHostsForPrinterInstanceEnumerationElement();
    ~Linux_SambaAllowHostsForPrinterInstanceEnumerationElement();  

  };
  

  class Linux_SambaAllowHostsForPrinterInstanceEnumeration {

    private:
    Linux_SambaAllowHostsForPrinterInstanceEnumerationElement* m_firstElementP;
    Linux_SambaAllowHostsForPrinterInstanceEnumerationElement* m_currentElementP;
    Linux_SambaAllowHostsForPrinterInstanceEnumerationElement* m_endElementP;

    public:
    Linux_SambaAllowHostsForPrinterInstanceEnumeration();
    Linux_SambaAllowHostsForPrinterInstanceEnumeration(
      const Linux_SambaAllowHostsForPrinterInstanceEnumeration& anInstanceEnumeration);
    ~Linux_SambaAllowHostsForPrinterInstanceEnumeration();

    void reset();
    bool hasNext() const;
    const Linux_SambaAllowHostsForPrinterInstance& getNext();
    int getSize() const;
    const Linux_SambaAllowHostsForPrinterInstance& getElement(int anIndex) const;  	  
    void addElement(const Linux_SambaAllowHostsForPrinterInstance& anInstance);

  };

}

#endif
