// =======================================================================
// Linux_SambaPrinterBrowseForPrinterInstance.h
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
#ifndef Linux_SambaPrinterBrowseForPrinterInstance_h
#define Linux_SambaPrinterBrowseForPrinterInstance_h


#include "cmpidt.h"
#include "CmpiObjectPath.h"
#include "CmpiInstance.h"
#include "CmpiBooleanData.h"
#include "CmpiCharData.h"
#include "CmpiDateTime.h"

#include "Linux_SambaPrinterBrowseForPrinterInstanceName.h"


namespace genProvider {

  class Linux_SambaPrinterBrowseForPrinterInstance {
       
    private:
    void init();
    void init(const Linux_SambaPrinterBrowseForPrinterInstance& anInstance);
    void reset();
       
    Linux_SambaPrinterBrowseForPrinterInstanceName m_instanceName;
    CMPIUint16 m_IsCurrent;
    CMPIUint16 m_IsDefault;
       
    struct isSetType{
      unsigned int instanceName:1;
      unsigned int IsCurrent:1;
      unsigned int IsDefault:1;

    } isSet;
    
    public:
    Linux_SambaPrinterBrowseForPrinterInstance();
    Linux_SambaPrinterBrowseForPrinterInstance(
      const Linux_SambaPrinterBrowseForPrinterInstance& anInstance);
    Linux_SambaPrinterBrowseForPrinterInstance(
      const CmpiInstance& aCmpiInstance, 
      const char* anInstanceNamespaceP);
    ~Linux_SambaPrinterBrowseForPrinterInstance();
       
    Linux_SambaPrinterBrowseForPrinterInstance& operator=(
      const Linux_SambaPrinterBrowseForPrinterInstance& anInstance);
       
    CmpiInstance getCmpiInstance(const char** aPropertiesPP = 0) const;
    unsigned int isInstanceNameSet() const;
    void setInstanceName(const Linux_SambaPrinterBrowseForPrinterInstanceName& anInstanceName);        
    const Linux_SambaPrinterBrowseForPrinterInstanceName& getInstanceName() const;

    unsigned int isIsCurrentSet() const;
    void setIsCurrent(const CMPIUint16 aValue);
    const CMPIUint16 getIsCurrent() const;

    unsigned int isIsDefaultSet() const;
    void setIsDefault(const CMPIUint16 aValue);
    const CMPIUint16 getIsDefault() const;


  };
  
  struct Linux_SambaPrinterBrowseForPrinterInstanceEnumerationElement {

    Linux_SambaPrinterBrowseForPrinterInstance* m_elementP;
    Linux_SambaPrinterBrowseForPrinterInstanceEnumerationElement* m_nextP;

    Linux_SambaPrinterBrowseForPrinterInstanceEnumerationElement();
    ~Linux_SambaPrinterBrowseForPrinterInstanceEnumerationElement();  

  };
  

  class Linux_SambaPrinterBrowseForPrinterInstanceEnumeration {

    private:
    Linux_SambaPrinterBrowseForPrinterInstanceEnumerationElement* m_firstElementP;
    Linux_SambaPrinterBrowseForPrinterInstanceEnumerationElement* m_currentElementP;
    Linux_SambaPrinterBrowseForPrinterInstanceEnumerationElement* m_endElementP;

    public:
    Linux_SambaPrinterBrowseForPrinterInstanceEnumeration();
    Linux_SambaPrinterBrowseForPrinterInstanceEnumeration(
      const Linux_SambaPrinterBrowseForPrinterInstanceEnumeration& anInstanceEnumeration);
    ~Linux_SambaPrinterBrowseForPrinterInstanceEnumeration();

    void reset();
    bool hasNext() const;
    const Linux_SambaPrinterBrowseForPrinterInstance& getNext();
    int getSize() const;
    const Linux_SambaPrinterBrowseForPrinterInstance& getElement(int anIndex) const;  	  
    void addElement(const Linux_SambaPrinterBrowseForPrinterInstance& anInstance);

  };

}

#endif
