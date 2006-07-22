// =======================================================================
// Linux_SambaAllowHostsForPrinterManualInstance.h
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
#ifndef Linux_SambaAllowHostsForPrinterManualInstance_h
#define Linux_SambaAllowHostsForPrinterManualInstance_h


#include "cmpidt.h"
#include "CmpiObjectPath.h"
#include "CmpiInstance.h"
#include "CmpiBooleanData.h"
#include "CmpiCharData.h"
#include "CmpiDateTime.h"

#include "Linux_SambaAllowHostsForPrinterInstanceName.h"


namespace genProvider {

  class Linux_SambaAllowHostsForPrinterManualInstance {
       
    private:
    void init();
    void init(const Linux_SambaAllowHostsForPrinterManualInstance& anInstance);
    void reset();
       
    Linux_SambaAllowHostsForPrinterInstanceName m_instanceName;
       
    struct isSetType{
      unsigned int instanceName:1;

    } isSet;
    
    public:
    Linux_SambaAllowHostsForPrinterManualInstance();
    Linux_SambaAllowHostsForPrinterManualInstance(
      const Linux_SambaAllowHostsForPrinterManualInstance& anInstance);
    Linux_SambaAllowHostsForPrinterManualInstance(
      const CmpiInstance& aCmpiInstance, 
      const char* anInstanceNamespaceP);
    ~Linux_SambaAllowHostsForPrinterManualInstance();
       
    Linux_SambaAllowHostsForPrinterManualInstance& operator=(
      const Linux_SambaAllowHostsForPrinterManualInstance& anInstance);
       
    CmpiInstance getCmpiInstance(const char** aPropertiesPP = 0) const;
    unsigned int isInstanceNameSet() const;
    void setInstanceName(const Linux_SambaAllowHostsForPrinterInstanceName& anInstanceName);        
    const Linux_SambaAllowHostsForPrinterInstanceName& getInstanceName() const;


  };
  
  struct Linux_SambaAllowHostsForPrinterManualInstanceEnumerationElement {

    Linux_SambaAllowHostsForPrinterManualInstance* m_elementP;
    Linux_SambaAllowHostsForPrinterManualInstanceEnumerationElement* m_nextP;

    Linux_SambaAllowHostsForPrinterManualInstanceEnumerationElement();
    ~Linux_SambaAllowHostsForPrinterManualInstanceEnumerationElement();  

  };
  

  class Linux_SambaAllowHostsForPrinterManualInstanceEnumeration {

    private:
    Linux_SambaAllowHostsForPrinterManualInstanceEnumerationElement* m_firstElementP;
    Linux_SambaAllowHostsForPrinterManualInstanceEnumerationElement* m_currentElementP;
    Linux_SambaAllowHostsForPrinterManualInstanceEnumerationElement* m_endElementP;

    public:
    Linux_SambaAllowHostsForPrinterManualInstanceEnumeration();
    Linux_SambaAllowHostsForPrinterManualInstanceEnumeration(
      const Linux_SambaAllowHostsForPrinterManualInstanceEnumeration& anInstanceEnumeration);
    ~Linux_SambaAllowHostsForPrinterManualInstanceEnumeration();

    void reset();
    bool hasNext() const;
    const Linux_SambaAllowHostsForPrinterManualInstance& getNext();
    int getSize() const;
    const Linux_SambaAllowHostsForPrinterManualInstance& getElement(int anIndex) const;  	  
    void addElement(const Linux_SambaAllowHostsForPrinterManualInstance& anInstance);

  };

}

#endif
