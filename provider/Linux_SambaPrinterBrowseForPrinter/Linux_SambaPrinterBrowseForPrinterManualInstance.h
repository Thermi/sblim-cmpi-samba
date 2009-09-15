// =======================================================================
// Linux_SambaPrinterBrowseForPrinterManualInstance.h
//     created on Mon, 26 Jun 2006 using ECUTE 2.2.1
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
#ifndef Linux_SambaPrinterBrowseForPrinterManualInstance_h
#define Linux_SambaPrinterBrowseForPrinterManualInstance_h


#include "cmpidt.h"
#include "CmpiObjectPath.h"
#include "CmpiInstance.h"
#include "CmpiBooleanData.h"
#include "CmpiCharData.h"
#include "CmpiDateTime.h"

#include "Linux_SambaPrinterBrowseForPrinterInstanceName.h"


namespace genProvider {

  class Linux_SambaPrinterBrowseForPrinterManualInstance {
       
    private:
    void init();
    void init(const Linux_SambaPrinterBrowseForPrinterManualInstance& anInstance);
    void reset();
       
    Linux_SambaPrinterBrowseForPrinterInstanceName m_instanceName;
       
    struct isSetType{
      unsigned int instanceName:1;

    } isSet;
    
    public:
    Linux_SambaPrinterBrowseForPrinterManualInstance();
    Linux_SambaPrinterBrowseForPrinterManualInstance(
      const Linux_SambaPrinterBrowseForPrinterManualInstance& anInstance);
    Linux_SambaPrinterBrowseForPrinterManualInstance(
      const CmpiInstance& aCmpiInstance, 
      const char* anInstanceNamespaceP);
    ~Linux_SambaPrinterBrowseForPrinterManualInstance();
       
    Linux_SambaPrinterBrowseForPrinterManualInstance& operator=(
      const Linux_SambaPrinterBrowseForPrinterManualInstance& anInstance);
       
    CmpiInstance getCmpiInstance(const char** aPropertiesPP = 0) const;
    unsigned int isInstanceNameSet() const;
    void setInstanceName(const Linux_SambaPrinterBrowseForPrinterInstanceName& anInstanceName);        
    const Linux_SambaPrinterBrowseForPrinterInstanceName& getInstanceName() const;


  };
  
  struct Linux_SambaPrinterBrowseForPrinterManualInstanceEnumerationElement {

    Linux_SambaPrinterBrowseForPrinterManualInstance* m_elementP;
    Linux_SambaPrinterBrowseForPrinterManualInstanceEnumerationElement* m_nextP;

    Linux_SambaPrinterBrowseForPrinterManualInstanceEnumerationElement();
    ~Linux_SambaPrinterBrowseForPrinterManualInstanceEnumerationElement();  

  };
  

  class Linux_SambaPrinterBrowseForPrinterManualInstanceEnumeration {

    private:
    Linux_SambaPrinterBrowseForPrinterManualInstanceEnumerationElement* m_firstElementP;
    Linux_SambaPrinterBrowseForPrinterManualInstanceEnumerationElement* m_currentElementP;
    Linux_SambaPrinterBrowseForPrinterManualInstanceEnumerationElement* m_endElementP;

    public:
    Linux_SambaPrinterBrowseForPrinterManualInstanceEnumeration();
    Linux_SambaPrinterBrowseForPrinterManualInstanceEnumeration(
      const Linux_SambaPrinterBrowseForPrinterManualInstanceEnumeration& anInstanceEnumeration);
    ~Linux_SambaPrinterBrowseForPrinterManualInstanceEnumeration();

    void reset();
    bool hasNext() const;
    const Linux_SambaPrinterBrowseForPrinterManualInstance& getNext();
    int getSize() const;
    const Linux_SambaPrinterBrowseForPrinterManualInstance& getElement(int anIndex) const;  	  
    void addElement(const Linux_SambaPrinterBrowseForPrinterManualInstance& anInstance);

  };

}

#endif
